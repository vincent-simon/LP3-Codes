#include "HelperFunctions.h"

// compare Item according to val/weight ratio 
bool comparison(struct Item a, struct Item b) {
  double r1 = (double) a.value / a.weight;
  double r2 = (double) b.value / b.weight;
  return r1 > r2;
}

double fractionalKnapsack(int knapsackWeight, struct Item itemArray[], int n) {
  // sort based on value/weight ratio 
  sort(itemArray, itemArray + n, comparison);

  int currentWeight = 0;
  double finalvalue = 0.0;

  //same internal loop as previous solution
  for (int i = 0; i < n; i++) {

    if (currentWeight + itemArray[i].weight <= knapsackWeight) {
      currentWeight += itemArray[i].weight;
      finalvalue += itemArray[i].value;
    }

    else {
      int remain = knapsackWeight - currentWeight;
      finalvalue += itemArray[i].value * ((double) remain / itemArray[i].weight);
      break;
    }
  }

  return finalvalue;
}


int main() {
  int knapsackWeight = 50;
  Item itemArray[] = {{120, 30}, {100, 20}, {60, 10}};

  int n = sizeof(itemArray) / sizeof(itemArray[0]);

  cout << "Maximum value we can obtain = ";
  cout << fractionalKnapsack(knapsackWeight, itemArray, n);
  cout<<endl;
  return 0;
}