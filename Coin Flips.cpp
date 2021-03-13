//Created by: David Rey
//Created on: <3-29-18>

#include <cstring>
#include <iostream>
using namespace std;

void getCombo(int,string);

int main()
{
	int ans = 0;
	string str = "";
	
	cout << "Coin flips? ";
	cin >> ans;
	
	getCombo(ans,str);
	
	return 0;
}

void getCombo(int ans, string str)
{
	if(ans==0)
	{
		cout << str << endl;
		return;
	}
	else
	{
		cout << ans << endl;
		getCombo(ans-1,str + "T");
		cout << ans << endl;
		getCombo(ans-1,str + "H");
	}
}
