CC=g++
CFLAGS= -std=c++17

FLAGS= -Wall -Wextra -Werror

test6: foo6.o test6.o
	$(CC) $(FLAGS) $(CFLAGS) *.o -o n6/test
	./n6/test
	make n6_clean

n6: foo6.o n6.o
	$(CC) $(FLAGS) $(CFLAGS) *.o -o n6/n6
	./n6/n6
	make n6_clean

foo6.o:
	$(CC) $(FLAGS) $(CFLAGS) -c n6/foo6.cpp

test6.o:
	$(CC) $(FLAGS) $(CFLAGS) -c n6/test6.cpp

n6.o:
	$(CC) $(FLAGS) $(CFLAGS) -c n6/n6.cpp

n6_clean:
	rm -rf *.o
	rm -rf n6/n6
	rm -rf n6/test

test7: foo7.o test7.o
	$(CC) $(FLAGS) $(CFLAGS) *.o -o n7/test
	./n7/test
	make n7_clean

n7: foo7.o n7.o
	$(CC) $(FLAGS) $(CFLAGS) *.o -o n7/n7
	./n7/n7
	make n7_clean

foo7.o:
	$(CC) $(FLAGS) $(CFLAGS) -c n7/foo7.cpp

test7.o:
	$(CC) $(FLAGS) $(CFLAGS) -c n7/test7.cpp

n7.o:
	$(CC) $(FLAGS) $(CFLAGS) -c n7/n7.cpp

n7_clean:
	rm -rf *.o
	rm -rf n7/n7
	rm -rf n7/test

test8: foo8.o test8.o
	$(CC) $(FLAGS) $(CFLAGS) *.o -o n8/test
	./n8/test
	make n8_clean

n8: foo8.o n8.o
	$(CC) $(FLAGS) $(CFLAGS) *.o -o n8/n8
	./n8/n8
	make n8_clean

foo8.o:
	$(CC) $(FLAGS) $(CFLAGS) -c n8/foo8.cpp

test8.o:
	$(CC) $(FLAGS) $(CFLAGS) -c n8/test8.cpp

n8.o:
	$(CC) $(FLAGS) $(CFLAGS) -c n8/n8.cpp

n8_clean:
	rm -rf *.o
	rm -rf n8/n8
	rm -rf n8/test

test9: foo9.o test9.o
	$(CC) $(FLAGS) $(CFLAGS) *.o -o n9/test
	./n9/test
	make n9_clean

n9: foo9.o n9.o
	$(CC) $(FLAGS) $(CFLAGS) *.o -o n9/n9
	./n9/n9
	make n9_clean

foo9.o:
	$(CC) $(FLAGS) $(CFLAGS) -c n9/foo9.cpp

test9.o:
	$(CC) $(FLAGS) $(CFLAGS) -c n9/test9.cpp

n9.o:
	$(CC) $(FLAGS) $(CFLAGS) -c n9/n9.cpp

n9_clean:
	rm -rf *.o
	rm -rf n9/n9
	rm -rf n9/test