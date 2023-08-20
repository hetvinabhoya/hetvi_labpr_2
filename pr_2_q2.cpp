#include <iostream>
using namespace std;

class Supermarket
{
	private:
	    string User_Id;
	    string Password;
	    int i_number;
	    string i_name;
	    int quantity;
	    int price; 
	    int discount;
	
	public:
        Supermarket() 
	    {
            User_Id = "Hetvi";
            Password = "54321";
        }
    
        setData1() 
		{
            string id;
			string pass;
            
            cout << "Enter User ID: ";
            cin >> id;
            cout << "Enter Password: ";
            cin >> pass;
        cout << "=======================================" << endl;   
		    
            if (id == User_Id && pass == Password)
			{
                cout << "Login Successfully.... " << endl;
            } 
			else 
			{
                cout << " Invalid Username or Password..." << endl;
                exit (0);
            }

            cout << "=======================================" << endl;   
        }
	    
        setData2()
		{	
	    	cout << "Enter Item Number : ";
	        cin >> i_number;
	        cout << "Enter Item Name : ";
            cin >> i_name;
        	cout << "Enter Quantity : ";
	        cin >> quantity;
        	cout << "Enter Price : ";
	        cin >> price;
	        cout << "Enter Discount : ";
	        cin >> discount;
	        cout << "=======================================" << endl;   

		}
		
	    
	    getData()
	    {
	        cout << "Item Number : " << i_number << endl;
            cout << "Item Name : " << i_name << endl;
            cout << "Item Quantity : " << quantity << endl;
            cout << "Price : " << price << endl;
            cout << "Discount : " << discount << endl;
            cout << "=======================================" << endl;   

		}
    
        getData2()
        {
        	int Total;
        	
        	Total = (price * quantity) - discount;
        	
        	cout << "Final Price : " << Total << endl;
		}
    
};

int main()
{
	Supermarket Billing;
	{
		Billing.setData1(); 
		Billing.setData2();
		Billing.getData();
		Billing.getData2();
		
	}
    
    
    return 0;

}
