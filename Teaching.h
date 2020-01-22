#include<bits/stdc++.h>
using namespace std;

#include "Staff.h"
#ifndef TEACHING_H
#define TEACHING_H

class Teaching : public Staff
{
private:
	string Designation;
	int Years_of_experience;

public:
	Teaching() //: Staff()
	{

	}

	Teaching(string fn, string ln, int age_, string em, long long int ph, int id, string Des, int YoE ) : Staff( fn, ln, age_, em, ph, id)
	{
		Designation=Des;
		Years_of_experience=YoE;
	}

 	void set_Designation(string desg)
 	{
 		Designation=desg;
	}

	void set_Years_of_experience(int years)
	{
		Years_of_experience=years;
	}

	string get_Designation()
	{
		return Designation;
	}
	int get_Years_of_experience()
	{
		return Years_of_experience;
	}
	void show_details()
	{
		cout<<"Name:";
		get_name();
		cout<<"\tEmail:";
		get_email();
		cout<<"\tPhone No.:";
		get_phoneNo();
	}
};

#endif // TEACHING_H
