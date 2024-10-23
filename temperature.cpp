#include<iostream>
using namespace std;

int temperatureConversion(int celcious){
	int farheight =(9.0/5* celcious) +32;

}
int  main(){
	int cel;
	cout << "Give the temperature in celcious " << cel << endl;
	cin >> cel ;
	cout << temperatureConversion(cel) << " Temperature in farehieght ";
	return 0;
}