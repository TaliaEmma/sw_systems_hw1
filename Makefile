.PHONY: default
default:all



loops: libclassloops.a

recursives: libclassrec.a

recursived: libclassrec.so

loopd: libclassloops.so

mains: main.o libclassrec.a
	gcc -o mains main.o libclassrec.a -Wall -lm 
	
maindloop: main.o libclassloops.so
	gcc -o maindloop main.o ./libclassloops.so -Wall -lm
	
maindrec: main.o libclassrec.so
	gcc -o maindrec main.o ./libclassrec.so -Wall -lm
	
all: loops recursives recursived loopd mains maindloop maindrec   



.PHONY: clean

clean:
		rm -f mains maindloop maindrec *.a *.so *.o


libclassloops.a: basicClassification.o advancedClassificationLoop.o
	ar -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o

libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	ar -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o


libclassloops.so: basicClassificationS.o advancedClassificationLoopS.o
	gcc -shared -o libclassloops.so basicClassificationS.o advancedClassificationLoopS.o

libclassrec.so: basicClassificationS.o advancedClassificationRecursionS.o
	gcc -shared -o libclassrec.so basicClassificationS.o advancedClassificationRecursionS.o



basicClassification.o: basicClassification.c
	gcc -c basicClassification.c -o basicClassification.o

advancedClassificationLoop.o: advancedClassificationLoop.c
	gcc -c advancedClassificationLoop.c -o advancedClassificationLoop.o

advancedClassificationRecursion.o: advancedClassificationRecursion.c
	gcc -c advancedClassificationRecursion.c -o advancedClassificationRecursion.o

	
basicClassificationS.o: basicClassification.c
	gcc -c basicClassification.c -o basicClassificationS.o -fPIC

advancedClassificationLoopS.o: advancedClassificationLoop.c
	gcc -c advancedClassificationLoop.c -o advancedClassificationLoopS.o -fPIC

advancedClassificationRecursionS.o: advancedClassificationRecursion.c
	gcc -c advancedClassificationRecursion.c -o advancedClassificationRecursionS.o -fPIC


main.o:	main.c NumClass.h
	gcc -c main.c


