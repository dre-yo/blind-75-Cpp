/*
 * Project Name: Blind 75 C++
 * File Name: two_ints.cc
 * Author: Drew York
 * Date: 2024-09-28
 *
 * Description: solution to the two ints problem
 * add two ints without using +
 * */
#include <iostream>

int GetSum(int a, int b){
  if (a == 0) return b;
  if (b == 0) return a;

  while (b != 0){
    int temp = (a & b) << 1;
    a = a ^ b;
    b = temp;
  }
  return a;
}
