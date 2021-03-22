#include <cstdio>

struct Titik {
  int x, y;
};

Titik pa, pb;

void pindah(Titik &t, Titik d) {
  t.x += d.x;
  t.y += d.y;
}

int main() {
    pa.x = 1;
    pa.y = -2;

    pb.x = 2;
    pb.y = 3;

    pindah(pa, pb);
    printf("%d %d\n", pa.x, pa.y);
}