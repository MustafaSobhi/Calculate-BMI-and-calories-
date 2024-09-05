#include <iostream>
using namespace std;
//This programe help you to know your daily calories and BMI
struct acc
{
string user;
string pass; 
};

float bmi (float weight,float height){
// To calc the BMI
		float bmi = weight/(height*height);
		return (bmi);				
	}
void state (float res){
//This function to know your health
for (int i=0;i<19;i++)
{
cout << "_";
}  
cout << endl;
cout << endl;
	
	if (res<= 18.5){
		cout << " You are under weight\n" ;
	cout << " You must gain weight \n" ;
	}
	else if (res>18.5 && res<25){
		cout << " You are fit\n" ;
		cout << " You want a balance diet\n" ;
	}	
	else if (res>=25 && res<30){
		cout << " You are over weight\n" ;
	    cout << " You want a lose weight diet\n" ;
	}    
	else if (res>=30){
		cout << " You suffer from obese\n" ;
	    cout << " You want a lose weight diet\n" ;
	}	    
	else 
	    cout << " Error" ;    
}
float rate (int num){
	//this is the activity level  values 
	float avg;
switch (num)
{   
	 	case 1:
		   avg = 1;
	 	   break;
	 	case 2:
		    avg = 1.2;
	 		break;
	 	case 3:
		    avg = 1.375;
	 		break;
	 	case 4:
		    avg = 1.55;
	 		break;	
	 	case 5:
		    avg = 1.725;
	 		break;
	 	case 6:
		    avg = 1.9;
    		break;
    	default :
		   cout << "Error \n";
		    break;
	} 
	return (avg);	
}
int gendere (int x, int num1){
	
		cout << " Enter your gendere\n";
		cout << " 1___Male\n";
		cout << " 2___Female\n";
		cin >> num1;	
	switch (num1)
	{
		case 1:
			x=5;
			break;
		case 2:
			x= -161;
		    break;
		default: 
			cout <<" Enter right number \n";
			break;			
  }		
  return (x);	
}
float cal (float weg,float heg,float age){
	//calculate daily calories
	float calo;
	int num1;
	int x = gendere(x, num1) ;
	float avg = rate(avg);
		calo = ((10*weg) + (6.25*(heg*100)) - (5*age) +x);		
return (calo);	
}
int main(){
		acc acc ;
 cout << " \n--- Create account --- \n";
 cout << " Enter your user name \n";
 getline(cin, acc.user) ;
 cout << " Enter your password \n";
 cin >> acc.pass;
 cout << "--- Your account was created ^^ --- \n";
// cout<< acc.pass <<endl;
// string users []{acc.user,acc.pass};
 cout << " \n--- Yor account --- \n";
 cout << " User name : "<<acc.user<<endl;
 cout << " Password : " <<acc.pass<<endl;
	
	float weight, height,res,age;
	int p;string user;int chose;
	  cout <<endl;
	  cout << " 1-to know your bmi \n";
	  cout << " 2-to calc your daily calories \n";
	  cout << " Enter your choice \n";
	  cin >>chose;
	  switch (chose){
	  	case 1 :
	  		cout << "---- calculate your BMI ----\n"<<endl;
	  cout << " Enter your weight(Kg)\n" ;
	  cin >> weight;
	  cout << " Enter your height(m)\n" ;
	  cin >> height;
	  cout << " Enter your age\n";
	  cin >> age;
	res = bmi (weight,height);
	  cout << " Your BMI"<<" = "<<res<<endl;
	  state (res);
	  break;
	  case 2:
	  	int num;
	  	cout << " --- calculate your daily calories --- \n";
		cout << "  \n";
		cout << "   Choose your activity level \n"<<endl;
	  	cout << "     1__BMR\n";
	    cout << "     2__Little no exercise\n";
	 	cout << "     3__Exercise 1-3 times/week\n";
		cout << "     4__Exercise 4-5 times/week\n";
		cout << "     5__Exercise 6-7 times/week\n";
		cout << "     6__Very intense exercise daily or pysical job\n";
		cin >> num; 
		cout << " Enter your weight(Kg)\n" ;
	  cin >> weight;
	  cout << " Enter your height(m)\n" ;
	  cin >> height;
	  cout << " Enter your age\n";
	  cin >> age;
float avg = rate (num);
float calories = cal (weight,height,age)*avg;
		cout << " Your calories" <<" = " << calories;}
	return 0;
}

