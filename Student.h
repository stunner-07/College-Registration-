#include<bits/stdc++.h>
using namespace std;

#include "Person.h"
#include "Branch.h"

class Student: public Person
{
private:
	int Exam_roll_no;
	int Rank;
	string Category;
	Branch *branch_alloted;

public:
	Student() //: Person(),Branch()
	{

	}

	Student(string fn, string ln, int age_, string em, long long int ph, Branch *branch= NULL , int roll=0, int rank=0, string category="GEN") : Person( fn, ln, age_, em, ph), branch_alloted(branch)
	{
		// Exam_roll_no=roll;
		// Rank=rank;
		// Category=category;
		set_id(roll);
		set_Rank(rank);
		set_Category(category);
	}

	void set_branch(Branch *branch)
	{
		branch_alloted=branch;
	}

	void set_id(int id)
	{
		Exam_roll_no=id;
	}
	int get_id()
	{
		return Exam_roll_no;
	}
	void set_Rank(int r)
	{
		Rank=r;
	}
	void set_Category(string category)
	{
		Category=category;
	}
	void get_Exam_roll_no()
	{
		cout<<Exam_roll_no<<" ";
	}
	void get_Rank()
	{
		cout<<Rank<<" ";
	}
	string get_Category()
	{
		return Category;
	}
	void get_Branch()
	{
		return branch_alloted->get_Branch_name();
	}
	void get_Insti()
	{
		return branch_alloted->get_Institute_name();
	}
	void find_repres()
	{
		branch_alloted->find_repress();
	}
	void calc_fee(string cat)
	{
		branch_alloted->calc_feee(cat);
	}
};
