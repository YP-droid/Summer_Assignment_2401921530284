#include<iostream>
#include<string>

using namespace std;

//abstract class is used to have interface in cpp
class LibraryUser
{
	public:
		virtual void registerAccount()=0;
		virtual void requestBook()=0;
		virtual ~LibraryUser(){} //destructor
};


class KidUsers : public LibraryUser
{
	private:
		int age;
		string bookType;
	public:
		void setAge(int a);
		void setBookType(string b);
		void registerAccount()override;
		void requestBook() override;
};

class AdultUser : public LibraryUser
{
	private:
		int age;
		string bookType;
	public:
		void setAge(int a);
		void setBookType(string b);
		void registerAccount()override;
		void requestBook() override;
};
