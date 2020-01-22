#include<bits/stdc++.h>
using namespace std;

#ifndef PERSON_H
#define PERSON_H


class Person
{
private:
	string firstname;
	string lastname;
	int age;
	string email;
	long long int phone_no;

public:
	Person()
	{
		
	}
	
	Person(string fn, string ln, int age_, string em, long long int ph)
	{
		// firstname=fn;
		// lastname=ln;
		// age=age_;
		// email=em;
		// phone_no=ph;
		enter_name(fn, ln);
		enterage(age_);
		enter_email(em);
		enter_phoneno(ph);
	}
	void enter_name(string fn, string ln)
	{
		firstname=fn;
		lastname=ln;
	}
	void enterage(int age_)
	{
		age=age_;
	}
	void enter_email(string em)
	{
		email=em;
	}
	void enter_phoneno(long long int ph)
	{
		phone_no=ph;
	}
	void get_name()
	{
		cout<<firstname<<" "<<lastname<<" ";
	}
	void get_age()
	{
		cout<<age<<" ";
	}
	void get_email()
	{
		cout<<email<<" ";
	}
	void get_phoneNo()
	{
		cout<<phone_no<<" ";
	}
	virtual void set_id(int a) = 0;
};

#endif // PERSON_H
