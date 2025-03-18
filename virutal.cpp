#include<iostream>

// https://pabloariasal.github.io/2017/06/10/understanding-virtual-tables/
// https://www.youtube.com/watch?v=FncNE2vdtwQ
class Ipl
{
public:
	//void disp()
	//{
	//	std::cout << "parent class" << std::endl;
	//}
	int parent_var = 10;
	virtual void disp()
	{
		std::cout << "parent class" << std::endl;
	}
};

class Franchise :public Ipl
{
public:
	//void display()
	//{
	//	std::cout << "child class" << std::endl;
	//}
	//int parent_var = 20;
	int child_var = 11;
	void disp()
	{
		std::cout << "child class" << std::endl;
	}
};

class Player :public Franchise
{
public:
	int gchild_var = 12;
	void disp()
	{
		std::cout << "grand child class" << std::endl;
	}
};

int main()
{
	//Ipl parent;
	//parent.disp();
	//Franchise child;
	//child.disp();
	//std::cout << parent.parent_var << std::endl;
	//std::cout << child.parent_var << std::endl;


	////child.display();
	// 
	// 
	Ipl* pptr = new Ipl;
	pptr->disp();
	std::cout << pptr->parent_var << std::endl;
	Franchise* cptr = new Franchise;
	cptr->disp();
	std::cout << cptr->parent_var << std::endl;

	//Ipl* ptr = new Franchise;
	//ptr->disp();


	//grand child implementation
	//Player* player = new Player;
	//player->disp();

	//Ipl* ipl = new Player;
	//ipl->disp();

	//Franchise* fr = new Player;
	//fr->disp();
}