#include<iostream>
using namespace std;

int main()
 {
	double accountnumber;
	double balance;
	double charge;
	double credits;
	double cerditlimit;
	double NewBalance;

	while (accountnumber!=-1)
    {
		cout<<"Enter Account Number(or -1 to quit):";
		cin >> accountnumber;
		cout << "Enter Beginning Balance:";
		cin >> balance;
		cout << "Enter Total Charges:";
		cin >> charge;
		cout  << "Enter Total Credits:";
		cin >> credits;
		cout  << "Enter Credit Limit:";
		cin >> cerditlimit;

		NewBalance = balance + charge - credits;

        cout <<"New Balance is "<<NewBalance<<endl;
        cout <<"Account:"<<accountnumber<<endl;
        cout <<"Credit Limit:"<<cerditlimit<<endl;
        cout <<"Balance:"<<NewBalance<<endl;
        cout <<"Credit Limit Exceeded"<<endl;

    }
}
