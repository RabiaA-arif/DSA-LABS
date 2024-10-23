#include<iostream>
using namespace std;
int main(){
	int num1;
	int num2;
	int result;
	char oprator;
	cout <<"Enter num1 " <<endl;
	cin >>num1;
	cout <<"Enter num2 "<< endl;
	cin >> num2;
	cout <<"Enter the oprator "<< endl;
	cin>>oprator;
	
	switch(oprator){
		case '+':
			result=num1 +num2;
			break;
		case '-':
			result=num1 - num2;
			break;
		case '*':
			result=num1 +num2;
			break;
		case '/':
			result=num1/num2;
			break;
			
	}
	cout << "Result " << result <<endl;
	
	
}