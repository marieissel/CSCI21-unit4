lab4test: lab_4_unit_test.o bs_tree.o bst_node.o
	g++ -Wall -g -o lab4 lab_4_unit_test.o bs_tree.o bst_node.o

lab4: bs_tree.cpp bst_node.cpp
	g++ -Wall -g -c bs_tree.cpp 
	g++ -Wall -g -c bst_node.cpp

lab4_unit: lab_4_unit_test.cpp
	g++ -Wall -g -c lab_4_unit_test.cpp

lab3test: lab3.o lab_3_unit_test.o
	g++ -Wall -g -o lab3 lab3.o lab_3_unit_test.o

lab3: lab3.cpp
	g++ -Wall -g -c lab3.cpp

lab3_unit: lab_3_unit_test.cpp
	g++ -Wall -g -c lab_3_unit_test.cpp

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
