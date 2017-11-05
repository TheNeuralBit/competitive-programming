import sys

d = {}
for line in sys.stdin.readlines():
    d[int(line) % 42] = True

print len(d.keys())
