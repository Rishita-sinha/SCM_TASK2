#include<iostream>
using namespace std;

class student{
	protected:
		int roll_number;
	public:
	    void set_roll_number(int);
		void get_roll_number(void);	
};
void student :: set_roll_number(int num){
	roll_number=num;
}
void student :: get_roll_number(){
	cout<<"The roll number is "<<roll_number<<endl;
}

class exam : public student{
	protected:
		float maths;
		float physics;
	public:
		void setmarks(float,float);
		void getmarks();
};

void exam :: setmarks(float m1,float m2){
	maths=m1;
	physics=m2;
}
void exam :: getmarks(){
	cout<<"Mark in maths and physics are "<<maths<<" "<<physics<<endl;
}

class result : public exam{
	float percen;
	public:
		void display(){
			get_roll_number();
			getmarks();
			cout<<"your result is "<<(maths+physics)/2<<"%"<<endl;
		}
};

int main(){
	result harry;
	harry.set_roll_number(69);
	harry.setmarks(90.0,94.0);
	harry.display();
	return 0;
}
