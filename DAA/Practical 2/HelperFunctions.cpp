#include "HelperFunctions.h"

// Comparison function to sort Item according to val/weight ratio 
bool cmp(struct Item a, struct Item b) {
  double r1 = (double) a.value / a.weight;
  double r2 = (double) b.value / b.weight;
  return r1 > r2;
}