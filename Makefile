lab1test: sl_list.h lab_19_unit_test.o sl_node.h
	g++ -Wall -g -o lab19 sl_list.cpp lab_19_unit_test.o sl_node.cpp

lab1: lab1.cpp
	g++ -Wall -g -c lab1.cpp

lab1_unit: lab_1_unit_test.cpp
	g++ -Wall -g -c lab_1_unit_test.cpp
