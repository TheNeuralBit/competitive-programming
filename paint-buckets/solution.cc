#include <stdio.h>
#include <map>

typedef std::map<unsigned int, unsigned int> UintMap;

int main () {
    unsigned int N, Q, h, v;
    scanf("%u %u", &N, &Q);
    UintMap m;

    for (unsigned int i = 0; i < N; ++i) {
        scanf("%u %u", &h, &v);
        UintMap::iterator it = m.find(h);
        if (it != m.end())
            (*it).second += v;
        else
            m[h] = v;
    }

    for (unsigned int i = 0; i < Q; ++i) {
        scanf("%u %u", &h, &v);
        unsigned int total = 0;
        for (UintMap::iterator it = m.lower_bound(h <= 1000 ? 0 : h - 1000); it != m.end(); ++it) {
            //printf("%u\n", (*it).first);
            if ((*it).first > h + 1000) {
                break;
            } else {
                total += (*it).second;
            }
        }
        //printf("%d <= %d?\n", v, total);
        if (v <= total) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}
