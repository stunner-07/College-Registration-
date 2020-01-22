#include<bits/stdc++.h>
using namespace std;

#ifndef FEE_H
#define FEE_H

class Fee
{
private:
	int Tution_fee;
	int Hostel_fee;

public:
	Fee()
	{
		
	}
	
	Fee(int a, int b)
	{
		Tution_fee=a;
		Hostel_fee=b;
	}
	void Total_fee(string category)
	{
		if(category=="SC" || category=="ST")
			cout<<Hostel_fee;
		else
			cout<<Tution_fee + Hostel_fee;
	}
};

#endif // FEE_H
