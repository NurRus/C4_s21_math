#include "s21_math.h"

long double s21_floor(double x) {
  long double answer = 0;
  if (IsNaN(x)) {
    answer = s21_NAN;
  } else if (IsInf(x)) {
    answer = x;
  } else {
    if ((int)x == x) {
      answer = x;
    } else {
      if (x < 0) {
        answer = (long long int)x - 1;
      } else {
        answer = (long long int)x;
      }
    }
  }
  return answer;
}