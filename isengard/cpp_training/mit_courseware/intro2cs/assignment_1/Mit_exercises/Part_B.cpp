#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  long total_cost = 0;
  const float portion_down_payment = 0.25;
  long double current_savings = 0;
  const float r = 0.04;
  long double annual_salary = 0;
  float portion_saved = 0;
  long double monthly_salary = 0;
  int month = 0;
  long double semi_annual_raise = 0;


  cout << "Enter your annual salary";
  cin >> annual_salary;

  cout << "Enter the percent of your salary to save, as a decimal";
  cin >> portion_saved;

  cout << "Enter the cost of your dream house";
  cin >> total_cost;

  cout << "Enter the percent of your semi-annual salary raise as the as a decimal percentage ";
  cin >> semi_annual_raise;

  monthly_salary = annual_salary / 12;

  while (current_savings < total_cost *portion_down_payment) {
      current_savings +=  monthly_salary*portion_saved + current_savings * r /12;
      month++;
      if (month%6==0){
        monthly_salary += monthly_salary*semi_annual_raise;
      }
  }

  cout << "You need " << month << " month to save  up  enough money for  a  down payment";
  return 0;
}
