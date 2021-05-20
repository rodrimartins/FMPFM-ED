CPP    = g++
WINDRES= windres
RM     = rm -f
OBJS   = main.o \
         lista.o \
         AppResource.res

LIBS   =
CFLAGS =

.PHONY: ProjetoLista.exe clean clean-after

all: ProjetoLista.exe

clean:
	$(RM) $(OBJS) ProjetoLista.exe

clean-after:
	$(RM) $(OBJS)

ProjetoLista.exe: $(OBJS)
	$(CPP) -Wall -s -o $@ $(OBJS) $(LIBS)

main.o: main.cpp lista.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

lista.o: lista.cpp
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

AppResource.res: AppResource.rc
	$(WINDRES) -i AppResource.rc -J rc -o AppResource.res -O coff

