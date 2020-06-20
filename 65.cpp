
int main(int argc, char *argv[]) {
  unsigned int limit = (argc < 2) ? 10 : atoi(argv[1]);
  BigNum lnum(uint(0));
  BigNum lden(uint(1));
  BigNum rnum(uint(1));
  BigNum rden(uint(0));
  bool goleft = true;
  for (int term = 1; term <= limit; ++term) {
    int factor = 1;
    if (term % 3 == 0) factor = (term / 3) * 2;
    if (term == 1) factor = 2;
    BigNum *newnum = &lnum;  // for printing purposes only
    BigNum *newden = &lden;  // for printing purposes only
    while (factor--) {
      if (goleft) {
        lnum += rnum;
        lden += rden;
      } else {
        rnum += lnum; newnum = &rnum;
        rden += lden; newden = &rden;
      }
    }
    if (term == limit) {
      printf("Term %d is %s/%s (numerator sums to %d)\n", term, newnum->str().c_str(), newden->str().c_str(), newnum->digisum());
      printf("Term %d is %2.19f\n", term, newnum->Double() / newden->Double());
    }
    goleft = !goleft;
  }
}