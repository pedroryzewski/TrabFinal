CFLAGS = -g -Wall -Wfatal-errors -ftest-coverage
GCC = gcc
UNITY_ROOT = Unity
SORT_ROOT = Sort


SRC_FILES = \
  $(UNITY_ROOT)/src/unity.c \
  $(UNITY_ROOT)/extras/fixture/src/unity_fixture.c \
  $(SORT_ROOT)/src/array.c \
  $(SORT_ROOT)/src/get_opt.c \
  $(SORT_ROOT)/src/old_main.c \
  $(SORT_ROOT)/src/sort.c \
  $(SORT_ROOT)/test/TestSort.c \
  $(SORT_ROOT)/test/test_runners/TestSort_Runner.c \
  $(SORT_ROOT)/test/test_runners/all_tests.c

INC_DIRS = -I$(UNITY_ROOT)/src -I$(UNITY_ROOT)/extras/fixture/src -I$(SORT_ROOT)/src

all: clean valgrind cov cppcheck sanitizer

app:
	$(GCC) $(CFLAGS) $(INC_DIRS) $(SRC_FILES) -o app.o

cov:
	gcov -b old_main.c 
	gcov -b sort.c

cppcheck:
	cppcheck --error-exitcode=1 $(SORT_ROOT)/src/sort.c
	cppcheck --error-exitcode=1 $(SORT_ROOT)/src/old_main.c

valgrind:
	$(GCC) $(CFLAGS) $(INC_DIRS) $(SRC_FILES) -o app.o
	valgrind --leak-check=full --error-exitcode=1 ./app.o

sanitizer:
	$(GCC) $(CFLAGS) -fsanitize=address $(INC_DIRS) $(SRC_FILES) -o app.o
	./app.o

run:
	./app.o
	exit $?

clean:
	rm -f *.o cov* *dSYM *.gcda *.gcno *.gcov
