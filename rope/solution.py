import sys

num_cases = int(sys.stdin.readline())
for case in range(num_cases):
    num_segments = int(sys.stdin.readline())
    segments = sys.stdin.readline().split(' ', num_segments)
    red = []
    blue = []
    for segment in segments:
        segment = segment.strip()
        length = int(segment[:-1])
        if segment[-1:] == 'R':
            red.append(length)
        else:
            blue.append(length)
    red.sort(reverse=True)
    blue.sort(reverse=True)

    result = 0
    for r, b in zip(red, blue):
        result += r + b - 2

    print "Case #{}: {}".format(case+1, result)
