#include<bits/stdc++.h>
using namespace std;

#include "Staff.h"

class Non_Teaching : public Staff
{
private:
	string Division;

public:
	Non_Teaching() //: Staff()
	{
		
	}
	
	Non_Teaching(string fn, string ln, int age_, string em, long long int ph, int id, string div) : Staff( fn, ln, age_, em, ph, id)
	{
		Division=div;
	}
	void get_Division()
	{
		cout<<Division;
	}
};
