#ifndef SEARCH_SPACE
#define SEARCH_SPACE

class State {
 public:
  int getAction(int card1, int card2);
  const static int FLIP_ACTION = 0;

 private:
  int r1;
  int r21;
  int r22;
  int r31;
  int r32;
  int r33;
  int r41;
  int r42;
  int r43;
  int r44;
  int r51;
  int r52;
  int r53;
  int r54;
  int r55;
  int cardPile[24];
  int discardPile[24];
  int repileCount;

 public:
  bool succeed();
  bool lose();
};

#endif  // SEARCH_SPACE
