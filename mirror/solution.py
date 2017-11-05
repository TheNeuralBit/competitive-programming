import sys

num_tests = int(sys.stdin.readline())

for i in range(num_tests):
    print "Test {}".format(i + 1)
    rows, cols = map(int, sys.stdin.readline().strip().split(' ', 2))
    for row in [sys.stdin.readline().strip() for row in range(rows)][::-1]:
        print row[::-1]
