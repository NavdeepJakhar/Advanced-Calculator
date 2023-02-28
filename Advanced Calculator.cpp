#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

class Calculator
{
	public:
		int operation;
		float x,y;
		int a,b;
		 
		void input()
		{
			cout<<"\t\t\t\t***************************************************\n\t\t\t\t\t     ~  ADVANCED CALCULATOR  ~\n\t\t\t\t\t\t-------------------\n";
		    cout<<"\t\t\t\t***************************************************"<<endl;
			//cout<<"\t\t\t\t___________________________________________________"<<endl;
			
			cout<<"\n\t\t\t\tOPERATIONS TO PERFORM:\n\t\t\t\t(Press the corresponding number to choose an operation) ";
			cout<<"\n\n\t\t\t\t-> Basic Operations: \n\t\t\t\t\t1. Addition \n\t\t\t\t\t2. Subtraction \n\t\t\t\t\t3. Multiplication ";
			cout<<"\n\t\t\t\t\t4. Division \n\t\t\t\t\t5. Modulus \n\n\t\t\t\t-> Advanced Operations:  \n\t\t\t\t\t6. Square of a number ";
			cout<<"\n\t\t\t\t\t7. Square root of a number \n\t\t\t\t\t8. Number raised to power ";
			cout<<"\n\n\t\t\t\t-> Trigonometric Operations: \n\t\t\t\t\t9. Sine (sin)\n\t\t\t\t\t10. Cosine (cos) \n\t\t\t\t\t11. Tangent (tan) \n\t\t\t\t\t12. Cosecant (cosec)";
			cout<<"\n\t\t\t\t\t13. Secant (sec)\n\t\t\t\t\t14. Cotangent (cot) \n\t\t\t\t\t15. All Trigo. functions for one value "<<endl;
			cout<<"\t\t\t\t___________________________________________________"<<endl;
			
			cout<<"\n\t\t\t\tPress number: ";
			cin>>operation;
			if(operation<1 || operation>15)
			{
			    cout<<"\n\t\t\t\tInvalid choice. Choose again."<<endl;
			    exit(0);
			}
			cout<<"\n\t\t\t\t___________________________________________________"<<endl;
			switch(operation)
			{
				case 1:
					twonumin();
					addition();
					break;
					
				case 2:
					twonumin();
					subtraction();
					break;
						
				case 3:
					twonumin();
					multiplication();
					break;
						
				case 4:
					twonumin();
					division();
					break;
						
				case 5:
					modulus();
					break;
						
				case 6:
					onenumin();
					square();
					break;
					
				case 7:
					onenumin();
					squareroot();
					break;
					
				case 8:
					twonumin();
					power();
					break;
					
				case 9:
					onenumin();
					fsin();
					break;
					
				case 10:
					onenumin();
					fcos();
					break;
					
				case 11:
					onenumin();
					ftan();
					break;
					
				case 12:
					onenumin();
					fcosec();
					break;
					
				case 13:
					onenumin();
					fsec();
					break;
						
				case 14:
					onenumin();
					fcot();
					break;
					
				case 15:
					onenumin();
					alltrig();
					break;
						
				default:
					cout<<"\t\t\t\tInvalid choice. Choose again."<<endl;
					break;
			}//switch ends
			
		//input ends	
		}
		
		void onenumin()
		{
			cout<<"\n\t\t\t\tEnter number: ";
			cin>>x;
			cout<<"\n";
			cout<<"\t\t\t\t___________________________________________________"<<endl;
			cout<<"\t\t\t\t---------------------------------------------------"<<endl;
		}
		
		void twonumin()
		{
			cout<<"\n\t\t\t\tEnter first number: ";
			cin>>x;
			cout<<"\n\t\t\t\tEnter second number: ";
			cin>>y;
			cout<<"\n";
			cout<<"\t\t\t\t___________________________________________________"<<endl;
			cout<<"\t\t\t\t---------------------------------------------------"<<endl;
		}
		
		// ~ 15 functions ~
		//void twonumin();
		//void onenumin();
		
		// BASIC OPERATIONS
		void addition();
		void subtraction();
		void multiplication();
		void division();
		void modulus();
		
		//ADVANCED OPERATIONS
		void square();
		void squareroot(); // if input is negative, exit
		void power();
		
		//TRIGONOMETRIC OPERATIONS
		void fsin();
		void fcos();
		void ftan();
		void fcosec();
		void fsec();
		void fcot();
		void alltrig(); //this function will print all the trignometric functions for one value on the screen e.g. for 30, it will give sin30 cos30 etc.
		
};

void Calculator::addition()
{
	cout<<"\n\t\t\t\t Addition of "<<x<<" and "<<y<<" : "<<x+y<<endl;
}

void Calculator::subtraction()
{
	cout<<"\n\t\t\t\t Subtraction of "<<x<<" and "<<y<<" : "<<x-y<<endl;
}

void Calculator::multiplication()
{
	cout<<"\n\t\t\t\t Multiplication of "<<x<<" and "<<y<<" : "<<x*y<<endl;
}

void Calculator::division()
{
	cout<<"\n\t\t\t\t Division of "<<x<<" and "<<y<<" : "<<x/y<<endl;
}

void Calculator::modulus()
{
	cout<<"\n\t\t\t\t(Note that the input numbers need to be INTEGERS)\n\t\t\t\tEnter first integer: ";
	cin>>a;
	
	cout<<"\n\t\t\t\tEnter second integer: ";
	cin>>b;
	
	cout<<"\t\t\t\t___________________________________________________"<<endl;
	cout<<"\t\t\t\t---------------------------------------------------"<<endl;
	cout<<"\n\t\t\t\t Modulus of "<<a<<" and "<<b<<" : "<<a%b<<endl;
}

void Calculator::square()
{
	cout<<"\n\t\t\t\t Square of "<<x<<" : "<<x*x<<endl;
}

void Calculator::squareroot() // if input is negative, exit
{
	while(x<0)
	{
		cout<<"\t\t\t\tNumber is negative. \n\t\t\t\tEnter number again :";
		cin>>x;
	}
	cout<<"\n\t\t\t\t Square root of "<<x<<" : "<<sqrt(x)<<endl;
}

void Calculator::power()
{
	cout<<"\n\t\t\t\t "<<x<<" raised to the power of "<<y<<" : "<<pow(x,y)<<endl;
}

void Calculator::fsin()
{
	cout<<"\t\t\t\t Sin ( "<<x<<" ) : "<<sin(x)<<endl;
}

void Calculator::fcos()
{
	cout<<"\t\t\t\t Cos ( "<<x<<" ) : "<<cos(x)<<endl;
}

void Calculator::ftan()
{
	cout<<"\t\t\t\t Tan ( "<<x<<" ) : "<<tan(x)<<endl;
}

void Calculator::fcosec()
{
	cout<<"\t\t\t\t Cosec ( "<<x<<" ) : "<<1/sin(x)<<endl;
}

void Calculator::fsec()
{
	cout<<"\t\t\t\t Sec ( "<<x<<" ) : "<<1/cos(x)<<endl;
}

void Calculator::fcot()
{
	cout<<"\t\t\t\t Cot ( "<<x<<" ) : "<<1/tan(x)<<endl;
}

void Calculator::alltrig()
{
	cout<<"\n\t\t\t\t Sin ( "<<x<<" ) : "<<sin(x)<<endl;
	cout<<"\t\t\t\t Cos ( "<<x<<" ) : "<<cos(x)<<endl;
	cout<<"\t\t\t\t Tan ( "<<x<<" ) : "<<tan(x)<<endl;
	cout<<"\t\t\t\t Cosec ( "<<x<<" ) : "<<1/sin(x)<<endl;
	cout<<"\t\t\t\t Sec ( "<<x<<" ) : "<<1/cos(x)<<endl;
	cout<<"\t\t\t\t Cot ( "<<x<<" ) : "<<1/tan(x)<<endl;
}

int main()
{
	Calculator c;
	c.input();
	cout<<"\n\t\t\t\t___________________________________________________"<<endl;
	cout<<"\t\t\t\t---------------------------------------------------"<<endl;
	return 0;
}

