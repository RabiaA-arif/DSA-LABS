#include<iostream>
using namespace std;
class Average{
	public :
	int	average(int num1,int num2,int num3){
		int result=(num1 +num2 +num3)/3;
		return result;
	}
};
int main(){
	int num1,num2,num3;
	cout << "Enter the number 1  "<< num1 << endl;
	cin >> num1;
	cout <<"Enter the number 2 " << num2 << endl;
	cin >> num2;
	cout << "Enter the number 3 " << num3 <<endl;
	cin >> num3;
	Average object;
	cout<< object.average(num1,num2,num3) << "  Average number " << endl;
}