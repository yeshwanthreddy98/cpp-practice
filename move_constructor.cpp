#include<iostream>
// https://stackoverflow.com/questions/4732084/c-move-semantics-and-exceptions#:~:text=If%20you%20mark%20a%20move,terminate()%20will%20be%20called.
// https://learn.microsoft.com/en-us/cpp/code-quality/c26439?view=msvc-170

class Sample
{
public:
	int* ptr;
	int len;
	Sample(int len)
	{
		this->len = len;
		ptr = new int[len];
		for (int i = 0;i < len;i++) ptr[i] = i + 1;
	}
	~Sample()
	{
		delete ptr;
	}
	Sample(const Sample& rhs)
	{
		len = rhs.len;
		ptr = new int[len];
		for (int i = 0;i < len;i++)
		{
			ptr[i] = rhs.ptr[i];
		}
	}
	//move constructor
	Sample(Sample&& rhs) noexcept
	{
		len = rhs.len;
		ptr = rhs.ptr;
		rhs.ptr = nullptr;
	}



};