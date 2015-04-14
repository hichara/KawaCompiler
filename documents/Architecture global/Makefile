CC=pdflatex
doc=Archi_globale
RM=rm -f

all: $(doc).pdf

$(doc).pdf: $(doc).tex ../res/structures.sty ../res/univ-projet.cls
	$(CC) $<
	$(CC) $<
precommit:
	$(RM) *.aux *.log *.out *.toc $(doc).synctex.gz
clean:
	$(RM) *.aux *.log *.out *.toc $(doc).synctex.gz $(doc).pdf

