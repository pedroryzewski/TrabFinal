CFLAGS = -g -Wall -Wfatal-errors -fprofile-arcs -ftest-coverage
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

APP_FILES = \
  $(SORT_ROOT)/src/main.c \
  $(SORT_ROOT)/src/array.c \
  $(SORT_ROOT)/src/get_opt.c \
  $(SORT_ROOT)/src/old_main.c \
  $(SORT_ROOT)/src/sort.c

INC_DIRS = -I$(UNITY_ROOT)/src -I$(UNITY_ROOT)/extras/fixture/src -I$(SORT_ROOT)/src

all: clean app valgrind cov cppcheck sanitizer run_app

app:
	$(GCC) $(CFLAGS) $(INC_DIRS) $(APP_FILES) -o app.o

cov:
	gcov -b old_main.c 
	gcov -b sort.c

cppcheck:
	cppcheck --error-exitcode=1 $(SORT_ROOT)/src/sort.c
	cppcheck --error-exitcode=1 $(SORT_ROOT)/src/old_main.c

valgrind:
	$(GCC) $(CFLAGS) $(INC_DIRS) $(SRC_FILES) -o unity.o
	valgrind --leak-check=full --show-leak-kinds=all --error-exitcode=1 ./unity.o

sanitizer:
	$(GCC) $(CFLAGS) -fsanitize=address $(INC_DIRS) $(SRC_FILES) -o unity.o
	./unity.o

run:
	./unity.o
	exit $?

run_app:
	./app.o -a quick -n 20 -s random -P

clean:
	rm -f *.o cov* *dSYM *.gcda *.gcno *.gcov
