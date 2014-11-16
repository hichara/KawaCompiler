CC=pdflatex
doc=STB
RM=rm -f

all: $(doc).pdf

$(doc).pdf: $(doc).tex ../res/structures.sty ../res/univ-projet.cls
	$(CC) $<
	$(CC) $<

clean:
	$(RM) *.aux *.log *.out *.toc $(doc).synctex.gz $(doc).pdfa

