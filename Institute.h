#include<bits/stdc++.h>
using namespace std;

#include "Representative.h"
#ifndef INSTITUTE_H
#define INSTITUTE_H

class Institute
{
private:
	int Institute_code;
	string Institute_name;
	int Ranking;
	int Year_of_establishment;
	Representative represent;

public:
	Institute() //: Representative()
	{

	}

	Institute(int code, string name, int rank, int YoE, Representative repres) : represent(repres)
	{
		Institute_code=code;
		Institute_name=name;
		Ranking=rank;
		Year_of_establishment=YoE;
	}

	void get_Institute_code()
	{
		cout<<Institute_code<<" ";
	}
	void get_Institute_name()
	{
		cout<<Institute_name<<" ";
	}
	void get_Ranking()
	{
		cout<<Ranking;
	}
	void get_Year_of_establishment()
	{
		cout<<Year_of_establishment<<" ";
	}
	void find_represss()
	{
		represent.find_represss();
		cout<<"\tInstitute:";
		get_Institute_name();
	}


};

#endif // INSTITUTE_H
