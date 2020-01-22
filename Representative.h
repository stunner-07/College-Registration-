#include<bits/stdc++.h>
using namespace std;

#include "Teaching.h"
#ifndef REPRESENTATIVE_H
#define REPRESENTATIVE_H

class Representative
{
private:
	int representative_id;
	Teaching *teacher;

public:
	Representative() //: Person()
	{

	}

	Representative(int id, Teaching *t = NULL) : teacher(t)
	{
		//representative_id=id;
		set_id(id);
	}

	void set_id(int id)
	{
		representative_id=id;
	}
	void get_representativeid()
	{
		cout<<representative_id;
	}
	bool isEligible()
	{
		if(teacher->get_Years_of_experience()>6 && teacher->get_Designation()=="PROF")
			return true;
		else
			return false;
	}
	void find_represss()
	{
		teacher->show_details();
	}
};

#endif // REPRESENTATIVE_H
