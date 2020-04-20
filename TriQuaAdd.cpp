#include<iostream>
#include<cmath>
#include<iomanip>
#define PI 3.14159265
using namespace std;
class FunctionsOne{
public:
	float Addition(float Arr[], float x){
		int i;
		float ans1=0;
		for(i=0;i<x;i++)
		ans1+=Arr[i];
		return ans1;
	}
	float Subtraction(float Arr[], float x){
		int i;
		float ans2=0;
		ans2=Arr[0];
		for(i=1;i<x;i++)
		ans2-= Arr[i];
		return ans2;
	}
	float Multiplication( float Arr[], float x){
		int i;
		float ans3=1;
		for(i=0;i<x;i++)
		ans3*= Arr[i];
		return ans3;
	}
	float Division(float x, float y){
		float ans4= x / y;
		return ans4;
	}
};

class FunctionsTwo{
public:
	float Percentage(float Arr[], float x){
		int i;
		float ans1=0,per=1;
		for(i=0;i<x;i++)
		ans1+=Arr[i];
		per=(ans1/x);
		return per;
	}
	float SquareRoot(float x){
		float ans2=sqrt(x);
		return ans2;
	}
};

class Trigonomatric{
	public:
		void Body(){
			cout<<" ..........  @@@@ Welcome to trigonomatric Calculator @@@@ .........."<<endl;
		}
		float Sine(float angle){
			double result=0;
  			result = sin (angle*PI/180);
  			cout<<"Sine"<<angle<<" = "<<result<<endl;
		}
		float Cosine(float angle){
			double  result=0;
  			result = cos ( angle * PI / 180.0 );
  			cout<<"Cosine"<<angle<<" = "<<result<<endl;

		}
		float Tangent(float angle){
			 float result=0;
			  result = tan (angle * PI / 180.0 );
			  cout<<"Tangent"<<angle<<" = "<<result<<endl;
		}
		float Sec(float angle){
			float result=0;
  			result = cos (angle*PI/180.0);
  			cout<<"Sec"<<angle<<" = "<<(1/result)<<endl;
		}
		float Cosec(float angle){
			float result=0;
  			result = sin (angle*PI/180.0);
  			cout<<"Cosec"<<angle<<" = "<<(1/result)<<endl;
		}
		float Cotangent(float angle){
			 float result=0;
			  result = tan (angle * PI / 180.0 );
			  cout<<"Cotangent"<<angle<<" = "<<(1/result)<<endl;
		}
};

class Quadratic{
	public:
		void Body(){
			cout<<"...........@@@@@@@@@@  Welcome To The Quadratic Calculator @@@@@@@@@@................"<<endl;
		}
		int findRoots(){
			float a,b,c,x1,x2,discriminant, realPart, imaginaryPart;
			cout<<"A Quadratic Equation is : a*(x*x)+b*x+c :"<<endl<<endl;
			cout<<"Enter the coefficients a, b and c :"<<endl;
			cin>> a >> b >> c;
			discriminant = (b*b) - (4*a*c);
			
			if(discriminant >0){
				x1= (-b + sqrt(discriminant))/(2*a);
				x2=(-b - sqrt(discriminant)) / (2*a);
				cout<<"Roots are Real and Different :"<<endl;
				cout<<" x1= "<<x1<<endl;
				cout<<" x2 = "<<x2<<endl;
			} 
			else if (discriminant==0){
				cout<<"Roots are Real and Same :"<<endl;
				x1= (-b + sqrt(discriminant)) /(2*a);
				cout<<" x1 = x2 = "<<x1<<endl;
			}
			else{
				realPart = -b/(2*a);
				imaginaryPart = sqrt(-discriminant)/(2*a);
				cout<<"Roots are Complex and Different"<<endl;
				cout<<" x1 = "<< realPart<< "+"<<imaginaryPart<<"i"<<endl;
				cout<<" x2 = "<< realPart<< "-"<<imaginaryPart<<"i"<<endl;
				
			}
		}
};

class Others{
	public:
			void Body(){
				cout<<" ..............@@@@  Welcome To Logarithmic Calclulator  @@@@................. :";
			}
			float Log10(float value){
			double result;
			result = log10 (value);
			cout<<"log10"<<value<<" = "<< result<<endl;
			}
			float Log2(float value){
				double result;
				result = log2 (value);
				cout<<"log2"<<value<<" = "<<result<<endl;
			}
			double Ln(float value){
				double result;
  				result = log (value);
  				cout<<"Ln"<<value<<" = "<<result <<endl;
			}
			float Exponential(float value){
				double result;
				result = exp (value);
				cout<<"The exponential value of "<<value<<" is "<< result ;
			}
			float Power(float value, float exponent){
			float result;
			result= pow (value, exponent);
			cout<<" The power of"<<value<<"^"<<exponent<<" is "<<result<<endl;	
			}
			float Mod(float value, float divider){
				float result;
				result= fmod(value, divider);
				cout<<" The Mod of"<<value<<"and"<<divider<<" is "<<result<<endl;
			}
			
};

class Display{
	public:
		int func,i;
		float Arr[30];
		float x,y;
		FunctionsOne key;
		FunctionsTwo lock;
		Quadratic quad;
		void Body(){
			cout<<" ....@@@@ Welcome to  Calculator! @@@@...."<<endl;
		}
		int DisplayOption(){
			
while(func!=0)
{
cout<<"................................................................."<<endl;
cout<<"What function do you want to use?"<<endl;
cout<<"1- Addition"<<endl<<"2- Subtraction"<<endl<<"3- Multiplication"<<endl<<"4- Division"<<endl<<"5- Percentage"<<endl<<"6- Square Root"<<endl;
cout<<"7- Trigonomatric Function"<<endl<<"8- Quadratic Equation"<<endl<<"9- Logarithm & Exponential & mod"<<endl<<"10- Exit"<<endl;
cout<<"................................................................."<<endl;
cout<<"Input :"<<endl;
cin>>func;
cout<<endl;
switch(func){
	case 1:
		cout<<"***Addition***"<<endl<<"please enter how many number you try to Add"<<endl;
		cin>>x;
		cout<<"Enter the numbers :";
		for(i=0;i<x;i++)
		cin>>Arr[i];
		cout<<" The Summation is  :";
		cout<<key.Addition(Arr,x);
		cout<<endl<<endl;
		break;
	case 2:
		cout<<"***Subtraction***"<<endl<<"please enter how many number you try to Substract"<<endl;
		cin>>x;
		cout<<"Enter the numbers :";
		for(i=0;i<x;i++)
		cin>>Arr[i];
		cout<<" The Substraction is  :";
		cout<<key.Subtraction(Arr,x);
		cout<<endl<<endl;
		break;
	case 3:
		cout<<"***Multiplication***"<<endl<<"please enter how many number yuo try to Multiply"<<endl;
		cin>>x;
		cout<<"Enter the numbers :";
		for(i=0;i<x;i++)
		cin>>Arr[i];
		cout<<" The Multiplication is  :";
		cout<<key.Multiplication(Arr,x);
		cout<<endl<<endl;
		break;
	case 4:
		cout<<"***Division***"<<endl<<"please enter the first and second number"<<endl;
		cin>>x>>y;
		cout<<x<<"/"<<y<<"= ";
		cout<<key.Division(x,y);
		cout<<endl<<endl;
		break;
	case 5:
		cout<<"***Percentage***"<<endl<<"please enter between how many number you try to find Percentage"<<endl;
		cin>>x;
		cout<<"Enter the elements :"<<endl;
		for(i=0;i<x;i++)
		cin>>Arr[i];
		cout<<" The Percentage is  :";
		cout<<lock.Percentage(Arr,x);
		cout<<endl<<endl;
		break;
	case 6:
		cout<<"***Square Root***"<<endl<<"please enter number you try to find the Square Root"<<endl;
		cin>>x;
		cout<<" The Square Root is  :";
		cout<<lock.SquareRoot(x);
		cout<<endl<<endl;
		break;
	case 7:
				float angle;
				int choise;
			  	Trigonomatric tri;
			  	tri.Body();
			  	for(;choise!=0;){
						cout<<"................................................."<<endl;
						cout<<"What function do you want to use?"<<endl;
						cout<<"1-Sine"<<endl<<"2-Cosine"<<endl<<"3-Tangent"<<endl<<"4-Sec"<<endl<<"5-Cosec"<<endl<<"6- Cotangent"<<endl<<"7- Exit"<<endl;
						cout<<"................................................."<<endl;
						cin>>choise;
						cout<<endl;
						switch(choise){
							case 1:
								cout<<"*** Sine ***"<<endl<<"please enter value of the angle :"<<endl;
								cin>>angle;
								
								tri.Sine(angle);
								cout<<endl<<endl;
								break;
							case 2:
								cout<<"*** Cosine ***"<<endl<<"please enter value of the angle :"<<endl;
								cin>>angle;
								
								tri.Cosine(angle);
								cout<<endl<<endl;
								break;
							case 3:
								cout<<"*** Tangent ***"<<endl<<"please enter value of the angle :"<<endl;
								cin>>angle;
								
								tri.Tangent(angle);
								cout<<endl<<endl;
								break;
							case 4:
								cout<<"*** Sec ***"<<endl<<"please enter value of the angle :"<<endl;
								cin>>angle;
								
								tri.Sec(angle);
								cout<<endl<<endl;
								break;
							case 5:
								cout<<"*** Cosec ***"<<endl<<"please enter value of the angle :"<<endl;
								cin>>angle;
								tri.Cosec(angle);
								cout<<endl<<endl;
								break;
							case 6:
								cout<<"*** Cosec ***"<<endl<<"please enter value of the angle :"<<endl;
								cin>>angle;
								tri.Cotangent(angle);
								cout<<endl<<endl;
								break;	
							case 7:
								return (Display :: DisplayOption());
							default:
								cout<<"Invalid Input....";
								break;
			
								}
							}
	case 8:
		quad.Body();
		quad.findRoots();
		break;
	case 9:
		float value;
		 float exponent;
		 float divider;
		  	Others oth;
		  	oth.Body();
		  	for(;choise!=0;){
					cout<<"................................................."<<endl;
					cout<<"What function do you want to use?"<<endl;
					cout<<"1-Log10 "<<endl<<"2-Log2 "<<endl<<"3- Ln "<<endl<<"4-Exponential "<<endl<<"5-Power "<<endl<<"6- Mod "<<endl<<"7- Exit "<<endl;
					cout<<"................................................."<<endl;
					cin>>choise;
					cout<<endl;
					switch(choise){
						case 1:
							cout<<"*** Log10 ***"<<endl<<"Please enter the value  :"<<endl;
							cin>>value;
							
							oth.Log10(value);
							cout<<endl<<endl;
							break;
						case 2:
							cout<<"*** Log 2***"<<endl<<"Please enter the value :"<<endl;
							cin>>value;
							
							oth.Log2(value);
							cout<<endl<<endl;
							break;
						case 3:
							cout<<"*** Ln ***"<<endl<<"please enter the value :"<<endl;
							cin>>value;
							
							oth.Ln(value);
							cout<<endl<<endl;
							break;
						case 4:
							cout<<"*** Exponential ***"<<endl<<"Please enter the value :"<<endl;
							cin>>value;
							
							oth.Exponential(value);
							cout<<endl<<endl;
							break;
						case 5:
							cout<<"*** Power ***"<<endl<<"please enter the value and Exponent  :"<<endl;
							cin>>value>>exponent;
							oth.Power(value, exponent);
							cout<<endl<<endl;
							break;
							
						case 6:
							cout<<"*** Mod ***"<<endl<<"please enter the value and divider  :"<<endl;
							cin>>value>>divider;
							oth.Mod(value, divider);
							cout<<endl<<endl;
							break;
						case 7:
							
							return (Display :: DisplayOption());
						default:
							cout<<"Invalid Input....";
							break;
						}
				}
		
	case 10:
		cout<<endl<<"..............@@@@@ Have a nice Day :) @@@@@................."<<endl;
		return 0;
	default:
		cout<<"Invalid Input....";
		break;
}
	}

		}
};

int main(){
	Display dis;
	dis.Body();
	dis.DisplayOption();
	return 0;
}
