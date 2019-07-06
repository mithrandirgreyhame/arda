#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  long total_cost = 1000000;
  const float portion_down_payment = 0.25;
  long double current_savings = 0;
  long double target_saving = total_cost * portion_down_payment;
  const float r = 0.04;
  long double annual_salary = 0;
  float portion_saved = 0;
  long double monthly_salary = 0;
  int month = 36;
  long double semi_annual_raise = 0.07;

  cout << "Enter your annual salary";
  cin >> annual_salary;

  monthly_salary = annual_salary / 12;

  long double max_saving = 0;
  for (int i = 0; i < 36; i++) {
      if ( (i + 1) % 6 == 0) {
          monthly_salary += monthly_salary * semi_annual_raise;
      }
      max_saving += monthly_salary + max_saving*0.04;
  }

  if (max_saving < target_saving) {
      cout << "It is not possible to pay the down payment in three years.";
  } else {
      float max_portion_saved = 1;
      float min_portion_saved = 0;
      float cal_portion_saved = 0;
      int steps = 0;
      bool completed = false;

      while (!completed) {
          cal_portion_saved = (max_portion_saved + min_portion_saved) /2;
          long double ini_cal_monthly_salary = annual_salary / 12;
          long double cal_target_saving = 0;
          for (int i = 0; i < 36; i++) {
              if ( (i + 1) % 6 == 0) {
                  ini_cal_monthly_salary += ini_cal_monthly_salary * semi_annual_raise;
              }
              cal_target_saving += ini_cal_monthly_salary * cal_portion_saved + r*cal_target_saving/12;
          }
          cout << "max_portion_saved" << max_portion_saved << endl;
          cout << "min_portion_saved" << min_portion_saved << endl;
          cout << "cal_portion_saved" << cal_portion_saved << endl;
          cout << "cal_target_saving" << cal_target_saving << endl;
          cout << "target_saving" << target_saving << endl;
          if ((cal_target_saving > target_saving && cal_target_saving  < target_saving * 1.000001)
          || (cal_target_saving == target_saving)) {
              steps++;
              cout << "Best saving rate" << cal_portion_saved << endl;
              cout << "Steps in bisection search:" << steps << endl;
              return 0;
          }

          if (cal_target_saving > target_saving) {
              max_portion_saved = cal_portion_saved;
              steps++;
          } else if (cal_target_saving < target_saving) {
              min_portion_saved = cal_portion_saved;
              steps++;
          }
      }
  }
  return 0;
}
