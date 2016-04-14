lab2test: lab2.o lab_2_unit_test.o
	g++ -Wall -g -o lab2 lab2.o lab_2_unit_test.o

lab2: lab2.cpp
	g++ -Wall -g -c lab2.cpp

lab2_unit: lab_2_unit_test.cpp
	g++ -Wall -g -c lab_2_unit_test.cpp


lab1test: lab_1_unit_test.o lab1.h
	g++ -Wall -g -o lab1 lab1.cpp

lab1: lab1.cpp
	g++ -Wall -g -c lab1.cpp

lab1_unit: lab_1_unit_test.cpp
	g++ -Wall -g -c lab_1_unit_test.cpp
