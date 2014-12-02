% univ-doc.cls
% Cette classe latex doit soit se trouver dans le repertoire
% courant ainsi que le logo soit être dans votre path latex
\ProvidesClass{adr}

% Utilisation de la classe article comme base
\LoadClass[10pt]{article}

% utilisation des convention française
\usepackage[utf8x]{inputenc}
\usepackage[francais]{babel}

%Macro outil, ne devrait pas être utiliser en dehors de ce fichier.
\def\addtomacro#1#2{\edef#1{\unexpanded\expandafter{#1#2}}}

% champs supplmentaires pour la page de garde:
% projet, filiere, version, relecteur et logo.
% La command \histentry{version}{date}{description}
% permet d'ajouter des entrees aux tableau sur la page de garde.
\makeatletter
    \newcommand{\projet}[1]{\def \@projet {#1}}
    \newcommand{\projdesc}[1]{\def \@projdesc {#1}}
    \newcommand{\filiere}[1]{\def \@filiere {#1}}
    \newcommand{\version}[1]{\def \@version {#1}}
    \newcommand{\relecteur}[1]{\def \@relecteur {#1}}
    \newcommand{\signataire}[1]{\def \@signataire {#1}}
    \newcommand{\logo}[1]{\def \@logo {#1}}
    \newcommand{\histentry}[3]{\addtomacro{\@history}{#1&#2&#3\\\hline}}
    \projet{}
    \filiere{}
    \version{}
    \relecteur{}
    \logo{}
    \signataire{}
    \projdesc{}
    \def \@history {} % Initialise l'historique a vide.
\makeatother

% marges
\usepackage[top=1in,bottom=1in,left=1in,right=1in]{geometry}

% indentations
\usepackage{indentfirst}
\setlength{\parindent}{18pt}
\setlength{\parskip}{3pt}

% espacements
\usepackage{setspace}

% gestion des references
\usepackage{varioref}
\usepackage{hyperref}

% gestion des figures
\usepackage{graphicx}

% gestion des couleurs
%\usepackage[table]{xcolor}
\usepackage{multirow}
\usepackage[table,xcdraw]{xcolor}

% gestion bibliography
\usepackage{natbib}

% gestion de la dernière page
\usepackage{lastpage}

% entête et pagination
\makeatletter
    \usepackage{fancyhdr}
    \pagestyle{fancy}
    \setlength{\headheight}{14pt}
    \renewcommand{\footrulewidth}{\headrulewidth}
    \fancyhf{}

    \fancyhead[L]{\@filiere \\
\@projdesc}
    \fancyhead[C]{\@projet\\\@title - \@version}
    \fancyhead[R]{
      \ifx \@logo \@empty
      \else
      \includegraphics[width=0.15\textwidth]{\@logo}
      \fi
    }

    \fancyfoot[L]{\@author}
    \fancyfoot[R]{\thepage / \pageref{LastPage}}
\makeatother

% Permet de conditionner la mise en page de la page de garde.
\usepackage{ifthen}

\usepackage{boolexpr,pdftexcmds,trace}
%\long\def\isequal#1#2{\pdf@strcmp{#1}{#2}}


% Création de ligne dans le tableau ADR
% valeurs des paramètres 3 et 4 de la commande
% 0 : Préocupant/Faible
% 1 : Important/Moyenne
% 2 : Critique/Forte
\newcommand{\lineADR}[5]{
    \cellcolor[HTML]{FFCB2F}&
        \cellcolor[HTML]{EFEFEF}#2 &
        
        % criticité
        \ifnum0=#3\relax
            \cellcolor[HTML]{9AFF99}{
            \color[HTML]{000000}
                Préocupant
            } &
        \else
          \ifnum1=#3\relax
            \cellcolor[HTML]{9698ED}{
            \color[HTML]{000000}
                Important
            } &
          \else
            \ifnum2=#3\relax
              \cellcolor[HTML]{FE0000}{
                \color[HTML]{FFFFFF}
                    Critique
                } &
            \else
              \cellcolor[HTML]{FE0000}{
                \color[HTML]{FFFFFF}
                    Critique
                } &
            \fi
          \fi
        \fi

        % probabilité
        \ifnum0=#4\relax
            \cellcolor[HTML]{9AFF99}{
            \color[HTML]{000000}
                Faible
            }\\
        \else
          \ifnum1=#4\relax
            \cellcolor[HTML]{9698ED}{
            \color[HTML]{000000}
                Moyenne
            }\\
          \else
            \ifnum2=#4\relax
              \cellcolor[HTML]{FE0000}{
                \color[HTML]{FFFFFF}
                    Forte
                }\\
            \else
              \cellcolor[HTML]{FE0000}{
                \color[HTML]{FFFFFF}
                    Forte
                }\\
            \fi
          \fi
        \fi
        
        \multirow{-2}{*}{
            \cellcolor[HTML]{FFCB2F}#1
        } &

        \multicolumn{3}{p{10cm}|}{
            #5
        }\\
        \hline
}

\newcommand{\tabADR}[1]{
    \begin{table}[h]
    \begin{tabular}{|>{}p{1,5cm}
                    |>{}p{7cm}
                    |>{}p{3cm}
                    |>{}p{3cm}|}
        \rowcolor[HTML]{FF7F00} 
        \cellcolor[HTML]{FF7F00}
            & \textbf{Intitulé}
            & \textbf{Criticité}
            & \textbf{Probabilité}\\
        \rowcolor[HTML]{FF7F00}
            \multirow{-2}{*}{
                \cellcolor[HTML]{FF7F00}\textbf{Numéro}
            }&
            \multicolumn{3}{l|}{
                \cellcolor[HTML]{FF7F00}\textit{Description}
            }\\

        \hline
        
        #1
        
    \end{tabular}
\end{table}
}

\newcommand{\lineDetailsADR}[3]{
    \cellcolor[HTML]{FFCB2F}#1&#2&#3\cr \hline    
}

\newcommand{\detailsADR}[1]{
    \begin{table}[h]
      \begin{tabular}{|>{}p{1,5cm}|>{}p{6,5cm}|>{}p{7cm}|}
        \hline
        \color{white}\cellcolor[HTML]{FF7F00}\bfseries{Numéro}&
        \color{white}\cellcolor[HTML]{FF7F00}\bfseries{Facteurs}&
        \color{white}\cellcolor[HTML]{FF7F00}\bfseries{Résolutions}
        \cr
        \hline
        #1
      \end{tabular}\\
    \end{table}
}


% page de garde
\makeatletter
\def \maketitle{%
    \begin{titlepage}
        \ifx \@logo \@empty
            \hfill
        \else
            \includegraphics[width=0.33\textwidth]{\@logo}
        \fi
        \ifx \@projet \@empty
            \relax
        \else
            \ifx \@projdesc \@empty
            \parbox[b][4em][b]{0.66\textwidth}{
                    \flushright
                    {\Huge {\bfseries \@projet}}
                }
            \else
                \parbox[b][4em][b]{0.66\textwidth}{
                    \flushright
                    {\Huge {\bfseries \@projet}}
                    \newline {\Large \@projdesc} 
                }
            \fi
        \fi
        
        ~\vfill
        \begin{center}
            \ifx \@title \@empty
                \relax
            \else
                {\huge \textbf{\@title} {\Large \@version}}\\
            \fi
            {\@date}\\
            \vspace{2em}
            \ifx \@author \@empty
                \relax
            \else
                Auteur(s): \@author\\
            \fi
            \ifx \@relecteur \@empty
                \relax
            \else
                Relecteur(s): \@relecteur\\
            \fi
            \ifx \@signataire \@empty    
                \relax
            \else
                Approuv\'e par: \@signataire\\
            \fi
            \vspace{5em}
            \ifx \@history \@empty
                \relax
            \else
                \begin{tabular}[t]{|c|c|p{10cm}|}
                    \hline
                    \rowcolor{gray} \textcolor{white} {\bfseries Version} & \textcolor{white} {\bfseries Date} & \textcolor{white} {\bfseries Changelog} \\
                    \hline
                    \@history
                    &&\\
                    \hline 
                \end{tabular}
            \fi
        \end{center}
        \vfill
    \end{titlepage}
}
\makeatother
