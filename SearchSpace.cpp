#include "SearchSpace.h"

bool State::succeed() { return r1 == 0; }

bool State::lose() { return repileCount == 3; }

int State::getAction(int card1, int card2) { return card1 * 10 + card2; }
