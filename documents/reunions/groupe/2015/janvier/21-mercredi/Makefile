CC=pdflatex
doc=rapport_univ-projet
RM=rm -f

all: $(doc).pdf

$(doc).pdf: $(doc).tex
	$(CC) $<
	$(CC) $<

precommit:
	$(RM) *.aux *.log *.out *.toc

clean:
	$(RM) *.aux *.log *.out *.toc $(doc).pdf

