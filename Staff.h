#include<bits/stdc++.h>
using namespace std;

#include "Person.h"
#ifndef STAFF_H
#define STAFF_H

class Staff:public Person
{
private:
	int staffid;

public:
	Staff() //: Person()
	{
		
	}
	
	Staff(string fn, string ln, int age_, string em, long long int ph, int id) : Person( fn, ln, age_, em, ph)
	{
		staffid=id;
	}
	void set_id(int id)
	{
		staffid = id;
	}
	void get_staffid()
	{
		cout<<staffid;
	}
};

#endif // STAFF_H
