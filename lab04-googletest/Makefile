gtest_main.o: gtest_main.cpp
	g++ -I/shared/include/ -c -o $@ $<

## 01 - beg
01-simple.o: 01-simple.cpp 01-simple.h
	g++ -g -I/shared/include/ -c -o $@ $<

01-test_assert.o: 01-test_assert.cpp 01-simple.h
	g++ -g -I/shared/include/ -c -o $@ $<

01-test_assert: gtest_main.o 01-simple.o 01-test_assert.o
	g++ -L/shared/lib -o $@ $^ -lgtest -lpthread

01-list_cases: 01-test_assert
	./$^ --gtest_list_tests

01-run: 01-test_assert
	./$^ 

01-run_all: 01-test_assert
	./$^ --gtest_also_run_disabled_tests

01-run_filter: 01-test_assert
	./$^ --gtest_filter=TESTBOOL.*

.PHONY: 01-list_cases 01-run 01-run_all 01-run_filter

## 01 - end

## 02 - beg
02-sort.o: 02-sort.cpp 02-sort.h
	g++ -g -I/shared/include/ -c -o $@ $<

02-test_sort.o: 02-test_sort.cpp 02-sort.h
	g++ -g -I/shared/include/ -c -o $@ $<

02-test_sort: gtest_main.o 02-sort.o 02-test_sort.o
	g++ -L/shared/lib -o $@ $^ -lgtest -lpthread

02-run_multiple: 02-test_sort
	./$^ --gtest_also_run_disabled_tests --gtest_filter=randomtest.DISABLED_MAY_FAILED --gtest_repeat=3

.PHONY: 02-run_multiple

# 02 -end

clean:
	rm -rf 01-test_assert 02-test_sort
	rm -rf *.o *.out

.PHONY: clean