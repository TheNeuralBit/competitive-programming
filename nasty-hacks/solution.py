import sys

num_cases = int(sys.stdin.readline())
for case in range(num_cases):
    r, e, c = map(int, sys.stdin.readline().split(' ', 3))
    n = e - c
    if n > r: print "advertise"
    elif n == r: print "does not matter"
    else: print "do not advertise"
