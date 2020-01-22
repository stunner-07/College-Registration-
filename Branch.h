#include<bits/stdc++.h>
using namespace std;

#include "Institute.h"
#include "Fee.h"
#ifndef BRANCH_H
#define BRANCH_H

class Branch
{
private:
	int Branch_code;
	string Branch_name;
	int Total_seat;
	Fee fees;
	Institute *insti;

public:
	Branch() //: Insitute(), Fee()
	{

	}

	Branch(int Bcode, string Bname, int seats, Fee f, Institute *institute=NULL ) : insti(institute), fees(f)
	{
		Branch_code=Bcode;
		Branch_name=Bname;
		Total_seat=seats;
	}

	int get_Branch_code()
	{
		return Branch_code;
	}
	void get_Branch_name()
	{
		cout<<Branch_name;
	}
	void get_Total_seat()
	{
		cout<<Total_seat;
	}
	void get_Institute_name()
	{
		return insti->get_Institute_name();
	}
	void calc_feee(string cat)
	{
		fees.Total_fee(cat);
	}
	void find_repress()
	{
		insti->find_represss();
	}
};

#endif // BRANCH_H
