#include<iostream>

//to demonstrate the friend function and friend class
/*
friend function and class can be declared in any section public, private
or protected , these act as internal to a class like 
they can even access the private variables
*/

class Sample
{
	int x, y;
public:
	Sample() : x(10), y(20)
	{
	}
	void disp()
	{
		std::cout << x << " " << y << std::endl;
	}
	friend void showPrivateVars(Sample& s);
	friend class FriendToSample;
};


class FriendToSample
{
public:
	void showSampleVars(Sample& s)
	{
		std::cout << s.x << " " << s.y << std::endl;
	}
};

void showPrivateVars(Sample& s)
{
	std::cout << s.x << " " << s.y << std::endl;
}

int main()
{
	Sample s;
	s.disp();
	showPrivateVars(s);
	FriendToSample fs;
	fs.showSampleVars(s);
}
