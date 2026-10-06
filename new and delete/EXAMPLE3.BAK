#include<conio.h>
#include<iomanip.h>
#include<iostream.h>
#include<string.h>
class string
{
	private:
		char *name;
		int length;
	public:
		string()
		{
			length=0;
			name = new char[length+1];
		}
		string(char *s)
		{
			length=strlen(s);
			name = new char[length+1];
			strcpy(name,s);
		}
		void display()
		{
			cout<<name<<endl;
		}
		void join(string &,string &);
};
void string::join(string &a,string &b)
{
	length=a.length+b.length;
	delete name;
	name=new char[length+1];
	strcpy(name,a.name);
	strcat(name,b.name);
}
void main()
{
	clrscr();
	string n1("MCA "),n2("bhavnagar "),n3("university"),s1,s2;
	cout<<"size of n1 is:"<<sizeof(n1)<<endl;
	cout<<"size of n1 is:"<<sizeof(n2)<<endl;
	cout<<"size of n1 is:"<<sizeof(n3)<<endl;
	cout<<"size of n1 is:"<<sizeof(s1)<<endl;
	cout<<"size of n1 is:"<<sizeof(s2)<<endl;
	s1.join(n1,n2);
	s2.join(s1,n3);
	n1.display();
	n2.display();
	n3.display();
	s1.display();
	s2.display();
	getch();

}