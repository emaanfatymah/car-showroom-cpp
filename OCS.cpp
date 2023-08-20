#include <iostream>
#include <fstream>
using namespace std;
class ocs{
	private:
		int pass;
	public:
		void login()
		{
			cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t      One Motors Dealership \n\n";
            cout<<"\t\t\t\t\t-------------------------------";
            cout<<"\n\t\t\t\t\t\t     LOGIN \n";	
            cout<<"\t\t\t\t\t-------------------------------\n\n";	
            cout << "\t\t\t\t\t Enter Pin: ";
            cin>>pass;
            if(pass == 1234)
			{
                cout << "\n\n\n\t\t\t\t\tAccess Granted! \n";
                system("PAUSE");
                system ("CLS");
            }
			else
			{
				cout << "\n\n\t\t\t\t\t\tAccess Denied...\n\t\t\t\t\t\tPlease Try Again\n\n";
                system("PAUSE");
                system("CLS");
                login();
			}   
		}
};
class companynames: public ocs{
	protected:
		int num;
	public:
		void dispdata()
		{
			cout<<endl<<endl<<endl;
			cout<<"\t\t\t\t\t Which car you're looking for? "<<endl<<endl;
			cout<<"\t\t\t\t\t Press 1 for HONDA"<<endl;
			cout<<"\t\t\t\t\t Press 2 for BMW"<<endl;
			cout<<"\t\t\t\t\t Press 3 for MERCEDES"<<endl;
			cout<<"\t\t\t\t\t Press 4 for TESLA"<<endl;
			cout<<"\t\t\t\t\t Press 5 for AUDI"<<endl;
			cout<<"\t\t\t\t\t Press 6 for TOYOTA"<<endl;
			cout<<"\t\t\t\t\t Press 7 for KIA"<<endl;
			cout<<"\t\t\t\t\t Press 8 for LAMBORGHINI"<<endl<<endl;
			cout<<"\t\t\t\t\t Select any one: ";
		}
		void getinp()
		{
			cin>>num;
		}
};

class details: public companynames{
	public:
		void dispdetails();
};
void details::dispdetails()
{
	cout<<" \t\t\t\t\t CAR DETAILS :"<<endl<<endl<<endl;
	if(num==1)
	{
		cout<<"\t\t\t\t\t Model: CIVIC"<<endl;
		cout<<"\t\t\t\t\t Price: $21,000"<<endl;
		cout<<"\t\t\t\t\t TopSpeed: 210KM/H"<<endl;
		cout<<"\t\t\t\t\t Colour: Black"<<endl;
	}
	else if(num==2)
	{
		cout<<"\t\t\t\t\t Model: M8"<<endl;
		cout<<"\t\t\t\t\t Price: $111,000"<<endl;
		cout<<"\t\t\t\t\t TopSpeed: 310KM/H"<<endl;
		cout<<"\t\t\t\t\t Colour: White"<<endl;
	}
	else if(num==3)
	{
		cout<<"\t\t\t\t\t Model: G63"<<endl;
		cout<<"\t\t\t\t\t Price: $156,000"<<endl;
		cout<<"\t\t\t\t\t TopSpeed: 280KM/H"<<endl;
		cout<<"\t\t\t\t\t Colour: Black"<<endl;
	}
	else if(num==4)
	{
		cout<<"\t\t\t\t\t Model: Model X"<<endl;
		cout<<"\t\t\t\t\t Price: $80,000"<<endl;
		cout<<"\t\t\t\t\t TopSpeed: 260KM/H"<<endl;
		cout<<"\t\t\t\t\t Colour: White"<<endl;
	}
	else if(num==5)
	{
		cout<<"\t\t\t\t\t Model: A7"<<endl;
		cout<<"\t\t\t\t\t Price: $69,000"<<endl;
		cout<<"\t\t\t\t\t TopSpeed: 310KM/H"<<endl;
		cout<<"\t\t\t\t\t Colour: Black"<<endl;
	}
	else if(num==6)
	{
		cout<<"\t\t\t\t\t Model: COROLLA"<<endl;
		cout<<"\t\t\t\t\t Price: $20,000"<<endl;
		cout<<"\t\t\t\t\t TopSpeed: 180KM/H"<<endl;
		cout<<"\t\t\t\t\t Colour: White"<<endl;
	}
	else if(num==7)
	{
		cout<<"\t\t\t\t\t Model: Sportage"<<endl;
		cout<<"\t\t\t\t\t Price: $25,000"<<endl;
		cout<<"\t\t\t\t\t TopSpeed: 180KM/H"<<endl;
		cout<<"\t\t\t\t\t Colour: Black"<<endl;
	}
	else if(num==8)
	{
		cout<<"\t\t\t\t\t Model: Huracan"<<endl;
		cout<<"\t\t\t\t\t Price: $200,000"<<endl;
		cout<<"\t\t\t\t\t TopSpeed: 320KM/H"<<endl;
		cout<<"\t\t\t\t\t Colour: White"<<endl;
	}
	else
	{
		cout<<"Invalid Entry";
		exit(1);
	}
}
class user: public details{
	private:
		long double phone, cnic;
		string email, name1, name2;
	public:
		void getinfo()
		{
			cout<<endl<<"\t\t\t\t\tEnter your CNIC:         ";
			cin>>cnic;
			cout<<"\t\t\t\t\tEnter your first name:   ";
			cin>>name1;
			cout<<"\t\t\t\t\tEnter your last name:    ";
			cin>>name2;
			cout<<"\t\t\t\t\tEnter your Phone number: ";
			cin>>phone;
			cout<<"\t\t\t\t\tEnter your Email:        ";
			cin>>email;
			
		}
		void dispinfo()
		{
			cout<<"CNIC: "<<cnic<<endl;
			cout<<"\t\t\t\t Name: "<<name1<<" "<<name2<<endl;
			cout<<"\t\t\t\t Phone number: "<<phone<<endl;
			cout<<"\t\t\t\t Email: "<<email;
		}
};
class transaction: public user{
	private:
		string opt,ans;
	public:
		void bill();
		void sel()
		{
			cout<<endl<<endl<<endl<<"Are you sure you want to buy this? (yes/no) : ";
			cin>>opt;
			if(opt=="yes" && "YES")
			{
				transaction::bill();
			}
			else
			{
				system("CLS");
				companynames::dispdata();
				cin>>num;
				system("CLS");
				cout<<endl<<endl;
				details::dispdetails();
				transaction::sel();
			}
	}
};
void transaction::bill()
{
	system("CLS");
	cout<<"\n\n\n\t\t <=INVOICE=>"<<endl;
	cout<<"\t\t\t\t ";
	user::dispinfo();
	cout<<endl;
	if(num==1)
	{
		cout<<"\n\n\n\t\t\t\t Honda CIVIC	      	  Total Amount: $21,000\n\n\t\t\t\t\t    <=Payment Successful=>"<<endl;
	}
	else if(num==2)
	{
		cout<<"\n\n\n\t\t\t\t BMW M8                Total Amount: $111,000\n\n\t\t\t\t\t   <=Payment Successful=>"<<endl;
	}
	else if(num==3)
	{
		cout<<"\n\n\n\t\t\t\t Mercedes G63          Total Amount: $156,000\n\n\t\t\t\t\t   <=Payment Successful=>"<<endl;
	}
	else if(num==4)
	{
		cout<<"\n\n\n\t\t\t\t Tesla MODEL S         Total Amount: $80,000\n\n\t\t\t\t\t    <=Payment Successful=>"<<endl;
	}
	else if(num==5)
	{
		cout<<"\n\n\n\t\t\t\t Audi A7               Total Amount: $69,000\n\n\t\t\t\t\t    <=Payment Successful=>"<<endl;
	}
	else if(num==6)
	{
		cout<<"\n\n\n\t\t\t\t Toyota COROLLA        Total Amount: $20,000\n\n\t\t\t\t\t    <=Payment Successful=>"<<endl;
	}
	else if(num==7)
	{
		cout<<"\n\n\n\t\t\t\t KIA SPORTAGE          Total Amount: $25,000\n\n\t\t\t\t\t    <=Payment Successful=>"<<endl;
	}
	else if(num==8)
	{
		cout<<"\n\n\n\t\t\t\t Lamborghini Huracan	  Total Amount: $200,000\n\n\t\t\t\t\t   <=Payment Successful=>"<<endl;
	}
	
    cout<<"\t\t\t\t--------------------------------------------"<<endl;
    cout<<"\n\n\t\t\t\t\t         Thank you :) \n\n";
    
    cout<<"Do you want to buy another car? (yes/no) : ";
    cin>>ans;
    if(ans=="yes")
    {
    	system("CLS");
		companynames::dispdata();
		cin>>num;
		system("CLS");
		cout<<endl<<endl;
		details::dispdetails();
		transaction::sel();
	}
	else
	{
		cout<<"\n\n\t\t\t\t\t ___________________________________";
		cout<<"\n\t\t\t\t\t|                                   |";
		cout<<"\n\t\t\t\t\t|                                   |";
		cout<<"\n\t\t\t\t\t| Thank you for dealing with us. :) |";
		cout<<"\n\t\t\t\t\t|                                   |";
		cout<<"\n\t\t\t\t\t|___________________________________|";
		exit(1);
	}
    
}
int main()
{
	string s1="HONDA\n",s2="BMW\n",s3="MERCEDES\n",s4="TESLA\n",s5="AUDI\n",s6="TOYOTA\n",s7="KIA\n",s8="LAMBORGHINI";
	ofstream outf("Brands.txt");
	outf<<s1<<s2<<s3<<s4<<s5<<s6<<s7<<s8;
	outf.close();
	string m1="Honda CIVIC              $21,000",m2="\nBMW M8                   $111,000",m3="\nMercedes G63             $156,000",m4="\nTesla MODEL X            $80,000",m5="\nAudi A7                  $67,000",m6="\nToyota COROLLA           $20,000",m7="\nKIA SPORTAGE             $25,000",m8="\nLamborghini Huracan      $200,000";
	ofstream outf1("Modeldetails.txt");
	outf1<<m1<<m2<<m3<<m4<<m5<<m6<<m7<<m8;
	outf1.close();
	transaction c1;
	c1.login();
	cout<<"\n\n\n\n\n\t\t\t\t\t        Your information \n\n";
    cout<<"\t\t\t\t   --------------------------------------------"<<endl<<endl<<endl;
	c1.getinfo();
	system("CLS");
	c1.dispdata();
	c1.getinp(); cout<<endl<<endl<<endl;
    system("CLS");
    cout<<endl<<endl<<endl<<endl;
	c1.dispdetails();
	c1.sel();
}
