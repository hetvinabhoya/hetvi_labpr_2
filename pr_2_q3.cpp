#include <iostream>
using namespace std;

class BankManagementSystem
{
	private:
		char Nch, Sch, ans;
		string name, email;
		string account,phonenum;
		int amount = 500000; 
		int dep, trans, with;
		
	public:
		BankManagementSystem()
{
			cout << endl<< "\t\t\t-: BANK MANAGEMENT SYSTEM :-" << endl;
			cout << "\t\t--------------------------------------------" << endl;
			cout << endl<< endl<< "\t\t\t-: Designed Programmed By :-" << endl;
			cout << "\t\t--------------------------------------------" << endl;
			cout << "\t\t\t\tHETVI M NABHOYA" << endl<< endl;
			cout << endl<< "\t\t\t\t-: Trainer :-" << endl;
			cout << "\t\t--------------------------------------------" << endl;
			cout << "\t\t\t\tAYUSH A PATEL" << endl<< endl<< endl;
			cout << "\t\tPress N To Continue The Process : ";
			cin >> Nch;
			system("cls");
			
switch (Nch)
{
	case 'N':
		
		cout << endl<< endl<< endl<< endl<< "\t--------------------------------------------------------------" << endl;
		cout << "\t-: Press A To Login As Administrator Or S To Login As Staff :- ";
		cin >> Sch;
		cout << "\t--------------------------------------------------------------" << endl;
		system("cls");
		
switch (Sch)
{
	case 'A':
		
	adminstrator();
	break;
	
	case 'S':
		
	staff();
	break;
	
	default:
	break;
}
	break;
	default:
	break;
}
}

void adminstrator()
{
	cout << endl<< endl<<"----------------------------------------------------------------------------------"<< endl;
	cout << "\t\t\t-: Welcome As Adminitsrator :-" << endl;
	cout <<"----------------------------------------------------------------------------------"<< endl;
	cout << endl<< endl<< "Enter The Name Of Administrator\t\t\t: ";
	cin >> name;
	cout << "Enter The Account Number Of Administrator\t: ";
	cin >> account;
	cout << "Enter The Phone Number Of Administrator\t\t: ";
	cin >> phonenum;
	cout << "Enter The Email Of Administrator\t\t: ";
	cin >> email;
	cout << endl<< endl<< endl<< endl;
	system("cls");
	cout <<"-------------------------------------------------------------------------------------------------"<< endl;
	cout << "Name\t\t\t: " << name << endl;
	cout << "Account No\t\t: " << account << endl;
	cout << "Phone No\t\t: " << phonenum << endl;
	cout << "Email\t\t\t: " << email << endl;
	cout <<"-------------------------------------------------------------------------------------------------"<< endl;
	cout << endl<< endl;
	cout << "\t\t\t\tPress [1] for Deposite Money: " << endl<< endl;
	cout << "\t\t\t\tPress [2] for Transfer Money: " << endl<< endl;
	cout << "\t\t\t\tPress [3] for Withdraw Money: ";
	cin >> ans;
	cout << endl << endl << endl << endl << endl << endl;
	system("cls");
switch (ans)
{
case '1':
deposite();
break;
case '2':
transfer();
break;
case '3':
withdraw();
break;
default:
break;
}
}
void staff()
{
	cout << endl<< endl<<"----------------------------------------------------------------------------------"<< endl;
	cout << "\t\t\t-: Welcome As STAFF :-" << endl;
	cout <<"----------------------------------------------------------------------------------"<< endl;
	cout << endl << endl << "Enter The Name Of Staff\t\t\t: ";
	cin >> name;
	cout << "Enter The Account Number Of Staff\t: ";
	cin >> account;
	cout << "Enter The Phone Number Of Staff\t\t: ";
	cin >> phonenum;
	cout << "Enter The Email Of Staff\t\t: ";
	cin >> email;
	cout << endl<< endl<< endl;
	system("cls");
	cout <<"-------------------------------------------------------------------------------------------------"<< endl;
	cout << "Name\t\t\t: " << name << endl;
	cout << "Account No\t\t: " << account << endl;
	cout << "Phone No\t\t: " << phonenum << endl;
	cout << "Email\t\t\t: " << email << endl;
	cout <<"-------------------------------------------------------------------------------------------------"<< endl;
	cout << endl<< endl;
	cout << "\t\t\t\tPress [1] for Deposite Money: " << endl<< endl;
	cout << "\t\t\t\tPress [2] for Transfer Money: " << endl<< endl;
	cout << "\t\t\t\tPress [3] for Withdraw Money: ";
	cin >> ans;
	cout << endl << endl << endl << endl << endl << endl;
	system("cls");
	
	switch (ans)
	{
	case '1':
	deposite();
	break;
	case '2':
	transfer();
	break;
	case '3':
	withdraw();
	break;
	default:
	break;
	}
	}
	void deposite()
	{
	cout << "-----------------------------------------------------------------------------------------"<< endl;
	cout << "\tDeposite The Money : ";
	cin >> dep;
	cout << "-----------------------------------------------------------------------------------------"<< endl << endl;
	cout << "\tYour Actual Amount is : " << amount << endl << endl;
	cout << "\tCongrats!! Your Amount Is Deposited..." << endl << endl;
	cout << "\tYour Account Balance is : " << amount + dep << endl << endl;
	}
	void transfer()
	{
	cout << "-----------------------------------------------------------------------------------------"<< endl;
	cout << "\tTransfer The Money : ";
	cin >> trans;
	cout << "-----------------------------------------------------------------------------------------"<< endl;
	cout << "\tYour Actual Amount is : " << amount << endl << endl;
	cout << "\tCongrats!! Your Amount Is Transferred..." << endl << endl;
	cout << "\tYour Account Balance is: " << amount - trans << endl << endl;
	}
	void withdraw()
	{
	cout << "-----------------------------------------------------------------------------------------"<< endl;
	cout << "\tWithdraw The Money : ";
	cin >> with;
	cout << "-----------------------------------------------------------------------------------------"<< endl;
	cout << "\tYour Actual Amount is : " << amount << endl << endl;
	cout << "\tCongrats!! Your Amount Is Withdrawn..." << endl << endl;
	cout << "\tYour Account Balance is : " << amount - with << endl << endl;
}
};

int main()
{
    BankManagementSystem b1;

    return 0;
}
