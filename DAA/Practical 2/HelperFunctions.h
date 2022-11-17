// C/C++ program to solve fractional Knapsack Problem 
#include <bits/stdc++.h>
using namespace std;

// Structure for an item which stores weight and corresponding value of Item 
struct Item {
  int value, weight;

  // Constructor 
  Item(int value, int weight): value(value), weight(weight) {}
};

// Comparison function to sort Item according to val/weight ratio 
bool cmp(struct Item a, struct Item b);