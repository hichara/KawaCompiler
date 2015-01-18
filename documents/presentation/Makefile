CC=pdflatex
doc=presentation-kawa
RM=rm -f
PARTS=parts
all: $(doc).pdf

$(doc).pdf: $(doc).tex $(PARTS)/stb.tex $(PARTS)/pdd.tex $(PARTS)/adr.tex $(PARTS)/cdr.tex
	$(CC) $<
	$(CC) $<
clean:
	$(RM) *.aux *.log *.out *.toc *.nav $(doc).synctex.gz $(doc).pdf

