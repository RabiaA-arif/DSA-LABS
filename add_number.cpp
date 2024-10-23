#include <iostream>
using namespace std;
//using namespace endl;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int add(int num1,int num2){
	int result=num1 + num2;
	return result;
}
int main(int argc, char** argv) {
	int num1,num2;
	cout <<("Enter number for addition ") << endl;
	scanf("%d",&num1);
	cout<<("Enter number for addition ") << endl;
	scanf("%d",&num2);
	printf("%d",add(num1,num2));
	return 0;
}
//int add(int num1,int num2){
//	int result=num1 +num1;
//	return result;
//}