CC=pdflatex
CFLAGS= -shell-escape
#-shell-escape pour minted
doc=semantic-DAL
RM=rm -f

all: $(doc).pdf

$(doc).pdf: $(doc).tex
	$(CC) $(CFLAGS) $<
	$(CC) $(CFLAGS) $<

precommit:
	$(RM) *.aux *.log *.out *.toc

clean:
	$(RM) *.aux *.log *.out *.toc $(doc).pdf

