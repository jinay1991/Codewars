# Codewars

# Implement kata

1. Create new `cpp` file in `src` directory
2. Add `TEST(Codewars, <name of kata>) {}` to your cpp
3. Add function which is going to be called for kata solution.

Refer `src/beeramid.cpp`.

# Build

Follow below steps to build executable containing your implementation tests

```bash
user@test-machine:~/git/Codewars$ mkdir build
user@test-machine:~/git/Codewars$ cd build
user@test-machine:~/git/Codewars/build$ cmake ..
-- The C compiler identification is GNU 5.4.0
-- The CXX compiler identification is GNU 5.4.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: ~/git/Codewars/build
user@test-machine:~/git/Codewars/build$ make -j4
Scanning dependencies of target kata
[ 25%] Building CXX object CMakeFiles/kata.dir/src/beeramid.cpp.o
[ 50%] Building CXX object CMakeFiles/kata.dir/src/main.cpp.o
[ 75%] Building CXX object CMakeFiles/kata.dir/usr/src/gtest/src/gtest-all.cc.o
[100%] Linking CXX executable kata
[100%] Built target kata
user@test-machine:~/git/Codewars/build$ ./kata
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from Codewars
[ RUN      ] Codewars.5kyu_beeramid
[       OK ] Codewars.5kyu_beeramid (0 ms)
[----------] 1 test from Codewars (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test case ran. (0 ms total)
[  PASSED  ] 1 test.
```

# Run specific test (KATA)

If you have implemented `TEST(Codewars, 5kyu_beeramid)` then you can run this test as follows:

```bash
user@test-machine:~/git/Codewars$ make -j4
user@test-machine:~/git/Codewars$ ./kata --gtest_filter=Codewars.5kyu_beeramid
```

# List tests available in executable

```bash
user@test-machine:~/git/Codewars/build$ ./kata --gtest_list_tests
Codewars.
  5kyu_beeramid
```
