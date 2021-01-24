#include<iostream>
#include <iomanip>

using namespace std;
int main(){
  float loan_amount,interest_rate,monthly_interest_amount,monthly_interest_cost,monthly_amount,balance;
  int month;
	cout<<"Enter the loan amount: ";
	cin>>loan_amount;
	cout<<endl;
	cout<<"Enter the yearly interest rate: ";
	cin>>interest_rate;
	cout<<endl;
  	cout<<"Enter the monthly payment: ";
	cin>>monthly_amount;
	cout<<endl;

  month = 1;
  monthly_interest_amount=(interest_rate/12);
  monthly_interest_cost = ((interest_rate/100.00)/12) * loan_amount;
  balance = loan_amount;
  cout<<"Month: " << month <<" | Initial loan amount($): "<<loan_amount<<" | Total interest($): "<<(loan_amount*(interest_rate/100.00))<<" | Monthly amount to be paid to interest($): "<<monthly_interest_cost<<" | Monthly interest(%): "<<monthly_interest_amount<<" | Balance($): "<<balance<<endl;


  while (balance > monthly_amount){
    balance = balance - (monthly_amount-monthly_interest_cost);
    monthly_interest_cost = ((interest_rate/100.00)/12) * balance;
    month=month +1;
    cout<<"Month: " << month <<" | Initial loan amount($): "<<loan_amount<<" | Total interest($): "<<(loan_amount*(interest_rate/100.00))<<" | Monthly amount to be paid to interest($): "<<monthly_interest_cost<<" | Monthly interest(%): "<<monthly_interest_amount<<" | Balance($): "<<balance<<endl;
    cout << fixed << showpoint << setprecision(2);

  }

	return 0;
}
