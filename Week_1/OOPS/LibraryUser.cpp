#include<iostream>
#include<string>

#include "LibraryUser.h"

using namespace std;

class KidUsers : public LibraryUser
{
	private:
		int age;
		string bookType;
	public:
		void setAge(int a){age = a;}
		void setBookType(string b){bookType=b;}
		void registerAccount()override
		{
			if(age<12)cout<<"Registered as a kid account"<<'\n';
			else cout<<"Age should be less than 12 to register as kid"<<'\n';
		}
		void requestBook() override
		{
			if(bookType == "kid")cout<<"Please return book in 10 days"<<'\n';
			else cout<<"You can only take kids book"<<'\n';
		}	
};

class AdultUser : public LibraryUser
{
	private:
		int age;
		string bookType;
	public:
		void setAge(int a){age = a;}
		void setBookType(string b){bookType=b;}
		void registerAccount()override
		{
			if(age>12)cout<<"Registered as an Adult account"<<'\n';
			else cout<<"Age should be greater than 12 to register as Adult"<<'\n';
		}
		void requestBook() override
		{
			if(bookType == "Fiction")cout<<"Please return book in 7 days"<<'\n';
			else cout<<"You can only take Fiction books"<<'\n';
		}
};
