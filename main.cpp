#include<bits/stdc++.h>
#include <conio.h>
using namespace std;

#include "Person.h"
#include "Staff.h"
#include "Representative.h"
#include "Teaching.h"
#include "Non_Teaching.h"
#include "Branch.h"
#include "Fee.h"
#include "Institute.h"
#include "Student.h"

int main()
{
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\tWELCOME TO JOSAA STUDENT REGISTRATION SYSTEM"<<endl<<endl;
    string st, pswd1="12345", st1="ADMIN";
    cout<<"Enter Username and Password to Proceed"<<endl;
    char pswd[5];
    while(1)
    {
        int i, c=1;
	    cout<<"USERNAME: ";
    	cin>>st;
    	cout<<"PASSWORD: ";
    	for(i=0; i<5; i++)
    	{
    		pswd[i]=getch();
    		cout<<"*";
    	}
    	cout<<endl;
    	if(st==st1)
    	{
    		for(i=0; i<5; i++)
    		{
    			if(pswd[i]!=pswd1[i])
    				c=0;
    		}
    	}
        if(st!=st1 || c==0)
        {
            cout<<"INVALID USERNAME OR PASSWORD. TRY AGAIN"<<endl<<endl;
            continue;
        }
        else
            break;
    }
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\tWELCOME ADMIN"<<endl;


	Teaching *t = new Teaching[3]; //Teaching object
	t[0].set_Designation("PROF"); t[1].set_Designation("PROF"); t[2].set_Designation("PROF");
	t[0].set_Years_of_experience(8); t[1].set_Years_of_experience(7); t[2].set_Years_of_experience(9);
	t[0].set_id(123); t[1].set_id(456); t[2].set_id(234);
	t[0].enter_name("Ankush", "Singh"); t[1].enter_name("Akriti", "Kumari"); t[2].enter_name("Rahul", "Pandey");
	t[0].enterage(45); t[1].enterage(39); t[2].enterage(47);
	t[0].enter_email("abc@safk.com"); t[1].enter_email("sdjs@dhf.com"); t[2].enter_email("ajd@jkvs.com");
	t[0].enter_phoneno(9654853265); t[1].enter_phoneno(8659974362); t[2].enter_phoneno(8976981236);

	Representative r1(111,&t[0]), r2(222, &t[1]), r3(333, &t[2]); //Representative object

	Institute i1(1123, "IIT_Kanpur", 6, 1979, r1); //Institute object
	Institute i2(1093, "IIIT_Gwalior", 49, 1997, r2);
	Institute i3(2037, "NIT_Delhi", 21, 1989, r3);

	Fee IIIT(68000, 11000); //Fee object
	Fee IIT(80000, 10000);
	Fee NIT(75000, 13000);

	Branch b1(289, "CSE", 70, IIIT, &i1); //Branch object
	Branch b2(342, "ECE", 120, IIT, &i2);
	Branch b3(462, "EEE", 80, NIT, &i3);
	Branch b4(457, "CSE", 120, IIT, &i1);


/*cout<<"Institue Name\t"<<"Institute Code\t"<<"Institute Name\t"<<"Rank\t"<<"Year of Establishment\t"<<"Representative\t"<<"Branch Code\t"<<"Branch\t";
for(int i=0; i<3; i++)
{
	cout<<" ";
}*/
cout<<endl;
vector<Student> s(10);
int i=0;
int o=1;

while(o)
{
	int n;
	cout<<endl;
	cout<<endl;
	cout<<"ENTER YOUR CHOICE!"<<endl;
	cout<<"1. Enter record of student"<<endl;
	cout<<"2. Update record"<<endl;
	cout<<"3. Delete record"<<endl;
	cout<<"4. Calculate fee"<<endl;
	cout<<"5. Find the representative of the institute"<<endl;
	cout<<"6. Show the record of students who have registered so far"<<endl; //(name, rank, category, institute, branch)
	cout<<"7. Exit"<<endl;
	cout<<"Enter choices: ";
	cin>>n;
	cout<<endl;
	switch(n)
	{
		case 1:
		{

			cout<<"\tEnter First and Last Name of the student: ";
			string fn, ln;
			cin>>fn;
			cin>>ln;
			s[i].enter_name(fn, ln);

			cout<<"\tEnter the age of the student: ";
			int agee;
			cin>>agee;
			s[i].enterage(agee);

			cout<<"\tEnter the Email id of the student: ";
			int l=0;
			string em;
			while(l!=2)
			{
				cin>>em;
				l=0;
				for(int i=0; i<em.length(); i++)
				{
					if(em[i]=='@' || em[i]=='.')
						l++;
				}
				if(l!=2)
					cout<<"\tINVALID EMAIL ID! Enter again. ";
			}
			s[i].enter_email(em);

			cout<<"\tEnter Phone No.: ";
			l=0;
			long long int ph;
			while(l!=10)
			{
				cin>>ph;
				l=0;
				for(long long int p=ph; p>0; p=p/10)
				{
					l++;
				}
				if(l!=10)
				cout<<"\tINVALID NUMBER! Enter again. ";
			}
			s[i].enter_phoneno(ph);

			cout<<"\tEnter JEE Roll No.: ";
			int roll;
			cin>>roll;
			s[i].set_id(roll);

			cout<<"\tEnter JEE Rank: ";
			int rank;
			cin>>rank;
			s[i].set_Rank(rank);

			cout<<"\tEnter category(GEN/OBC/SC/ST/PWD): ";
            string cat;
			while(1)
			{
				cin>>cat;
				if(cat=="GEN" || cat=="OBC" || cat=="SC" || cat=="ST" || cat=="PWD")
					break;
				else
					cout<<"\tINVALID ENTRY! Enter again: ";
			}
			s[i].set_Category(cat);

			cout<<"\tEnter the Institue Name: ";
			string in;
			cin>>in;

			cout<<"\tEnter the Branch: ";
			string br;
			cin>>br;

			if(in=="IIT_Kanpur")
			{
				if(br=="CSE")
					s[i].set_branch(&b4);
				else
					s[i].set_branch(&b2);
			}
			else if(in=="NIT_Delhi")
			{
				s[i].set_branch(&b3);
			}
			else
				s[i].set_branch(&b1);
			i++;
			cout<<"\tRecord added successfully!";
		}
		break;

		case 2:
		{
			if(i==0)
			{
				cout<<"\tNo record available.";
				break;
			}
			cout<<endl<<"\tEnter the student's JEE Roll No.: ";
			int j, k;
			while(1)
			{
				cin>>j;
				for(k=0; k<i; k++)
				{
					if(s[k].get_id()==j)
					{
						break;
					}
				}
				if(k==i)
					cout<<"\tRoll No. not found! Enter again: ";
				else
					break;
			}
			cout<<"\tChoose the detail to be modified: "<<endl;
			cout<<"\t 1. Name"<<endl;
			cout<<"\t 2. Age"<<endl;
			cout<<"\t 3. Email"<<endl;
			cout<<"\t 4. Phone Number"<<endl;
			cout<<"\t 5. Category : ";
			cin>>j;

			switch(j)
			{
				case 1:
				{
					cout<<"\t\tEnter the First and Last Name: ";
					string fn;
					string ln;
					cin>>fn;
					cin>>ln;
					s[k].enter_name(fn, ln);
					cout<<"\t\tRecord updated successfully!";
				}
				break;

				case 2:
				{
					cout<<"\t\tEnter Age: ";
					int agee;
					cin>>agee;
					s[k].enterage(agee);
					cout<<"\t\tRecord updated successfully!";
				}
				break;

				case 3:
				{
					cout<<"\t\tEnter Email: ";
					string em;
					int l=0;
					while(l!=2)
					{
						cin>>em;
						l=0;
						for(int i=0; i<em.length(); i++)
						{
							if(em[i]=='@' || em[i]=='.')
								l++;
						}
						if(l!=2)
							cout<<"\t\tINVALID EMAIL ID! Enter again. ";
					}
					s[k].enter_email(em);
					cout<<"\t\tRecord updated successfully!";
				}break;

				case 4:
				{
					cout<<"\t\tEnter Phone Number: ";
					long long int ph;
					int l=0;
					while(l!=10)
					{
						cin>>ph;
						l=0;
						for(long long int i=ph; i>0; i=i/10)
							{
								l++;
							}
						if(l!=10)
						cout<<"\t\tINVALID NUMBER! Enter again. ";
					}
					s[k].enter_phoneno(ph);
					cout<<"\t\tRecord updated successfully!";
				}
				break;

				case 5:
				{
					string cat;
					cout<<"\t\tEnter category(GEN/OBC/SC/ST/PWD): ";
					while(1)
					{
						cin>>cat;
						if(cat=="GEN" || cat=="OBC" || cat=="SC" || cat=="ST" || cat=="PWD")
							break;
						else
							cout<<"\t\tINVALID ENTRY! Enter again: ";
					}
					s[k].set_Category(cat);
					cout<<"\t\tRecord updated successfully!";
				}
				break;

				default: cout<<"\t\tInvalid choice!";

			}
		}
		break;

		case 3:
		{
			if(i==0)
			{
				cout<<"\tNo record available.";
				break;
			}
			cout<<endl<<"\tEnter the student's JEE Roll No.: ";
			int j, k;
			while(1)
			{
				cin>>j;
				for(k=0; k<i; k++)
				{
					if(s[k].get_id()==j)
					{
						break;
					}
				}
				if(k==i)
					cout<<"\tRoll No. not found! Enter again: ";
				else
					break;
			}
			s.erase(s.begin()+k);
      i--;
			cout<<"\tRecord deleted successfully!";
		}break;

		case 4:
		{
			cout<<"\tEnter the student's JEE Roll No.: ";
			int j, k;
			while(1)
			{
				cin>>j;
				for(k=0; k<i; k++)
				{
					if(s[k].get_id()==j)
					{
						break;
					}
				}
				if(k==i)
					cout<<"\tRoll No. not found! Enter again: ";
				else
					break;
			}
			cout<<"\tThe total fee of ";
			s[k].get_Insti();
			cout<<"having branch ";
			s[k].get_Branch();
			cout<<" is : ";
			s[k].calc_fee(s[k].get_Category());
			cout<<endl;
		}
		break;

		case 5:
		{
			cout<<"\tEnter the student's JEE Roll No.: ";
			int j, k;
			while(1)
			{
				cin>>j;
				for(k=0; k<i; k++)
				{
					if(s[k].get_id()==j)
					{
						break;
					}
				}
				if(k==i)
					cout<<"\tRoll No. not found! Enter again: ";
				else
					break;
			}
			cout<<"\t";

			s[k].find_repres();
			cout<<endl;
		}
		break;


		case 6:
		{
			// cout<<"Enter the student's JEE Roll No.: ";
			// int j, k;
			// cin>>j;
			// for(k=0; k<i; k++)
			// {
			// 	if(s[k].get_id()==j)
			// 	{
			// 		break;
			// 	}
			// }
			if(i==0)
			{
				cout<<"\tNo record available.";
				break;
			}
			cout<<"Name\t\tAge\tEmail\t\tPhone No.\tRoll No.\tCategory\tInstitute Name\t\tBranch"<<endl<<endl;

			for(int k=0; k<i; k++)
			{
				s[k].get_name();
				cout<<"\t";
				s[k].get_age();
				cout<<"\t";
				s[k].get_email();
				cout<<"\t";
				s[k].get_phoneNo();
				cout<<"\t";
				s[k].get_Exam_roll_no();
				cout<<"\t\t";
				cout<<s[k].get_Category()<<" \t\t";
				s[k].get_Insti();
				cout<<"\t\t";
				s[k].get_Branch();
				cout<<endl;
			}
		}
		break;

		case 7:
		{
			o=0;
		}
		break;

		default:
		{
			cout<<"\tINVALID CHOICE!";
		}
	}

}

cout<<"For any querry, visit https://josaa.nic.in"<<endl<<endl;
	return 0;
}
