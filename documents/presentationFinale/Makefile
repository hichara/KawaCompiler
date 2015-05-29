CC=pdflatex
doc=presentation-kawa
RM=rm -f
PARTS=$(wildcard parts/*.tex)
all: $(doc).pdf

$(doc).pdf: $(doc).tex $(PARTS)
	$(CC) $<
	$(CC) $<
clean:
	$(RM) *.aux *.log *.out *.toc *.nav $(doc).synctex.gz $(doc).pdf

