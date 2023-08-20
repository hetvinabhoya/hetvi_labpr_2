 #include<iostream>
using namespace std;

class Train{
	private:
		int t_number;
		string t_name; 
		string t_source;
		string t_destination;
		int t_time;
		
	public:
		Train()
		{
		    cout << "Enter Train number : ";
		    cin >> this-> t_number;
    	    cout << "Enter Name : ";
		    cin >> this-> t_name;
		    cout << "Enter Source : ";
		    cin >> this-> t_source;
		    cout << "Enter Destination : ";
		    cin >> this-> t_destination;
		    cout << "Enter Time : ";
		    cin >> this-> t_time;
		    
		    cout << "---------------------------------------" << endl;
	    }
	
	getData()
	{
		cout << "Train Number : " << this->t_number << endl;
		cout << "Name : " << this->t_name << endl;
		cout << "Source : " << this->t_source << endl;
		cout << "Destination : " << this->t_destination << endl;
		cout << "Time : " << this->t_time << endl;
		
    }
    
    searchTrain(int search,int number)
    {
    	int a=0;
    	
    	if(this->t_number == search)
    	{
    		getData();
		}
		else
		{
			a++;
		}
		
		if(a > number - 1)
		{
			cout << "Invalid Number...";
		}
    	
	}
};

int main()
{
	int i,n;
	
	cout << "Enter number of Trains : ";
	cin >> n;
	    cout << "---------------------------------------" << endl;

	
	if(n<3)
	{
		cout << "Atleast enter 3 train details...";
	}
	else
	{
		int searchedTrain;
		Train train[n];
		
		cout << "Search Train Number : ";
		cin >> searchedTrain;
		
		    cout << "---------------------------------------" << endl;

		for(i=0;i<n;i++)
		{
			train[i].searchTrain(searchedTrain,n);
		}
	}
	
	return 0;
	
}
