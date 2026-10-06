#include<iostream.h>
#include<conio.h>
class Money{
	private:
		long int rup,pai;
	public:
		Money(){
			rup = 0;
			pai = 0;
		}
		void operator=(long int);
		void display();
		~Money(){
			cout<<"Destructor called:"<<endl;
		}
};
void Money::operator=(long int a){
	cout<<"Opeartor called:"<<endl;
	rup = a/100;
	pai = a%100;
}
void Money::display(){
	cout<<"Rupees is:"<<rup<<endl;
	cout<<"Paisa is:"<<pai<<endl;
}
void main(){
	clrscr();
	long int total;

	cout<<"Enter Paisa:";
	cin>>total;
	Money m1;

	m1 = total;
	m1.display();
	getch();
}