#include<iostream>
using namespace std;
int g_c_d(int a,int b)
{
if(a<0||b<0){
	return 0;}
	int remeinder=a%b;
	while(remeinder!=0){
		a=b;
		remeinder=a%b;
	remeinder=b;
	}
	return b;
}
int main()
  {
	int a=48;
	int b=18;
	
	int result=g_c_d(48 ,18);
	{
		cout << "GCD of " << 48 << " and " << 18 << " is: " << result << endl;
	}
	
	
	
	
return 0;
}