#include<iostream>

class Sample
{
public:
	int* ptr;
	int len;
	Sample(int len)
	{
		this->len = len;
		ptr = new int[len];

	}
};