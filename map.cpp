#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

//int main()
//{
//	map<char, int> mp{ {'a',1},{'b',10},{'c',10},{'d',1} };
//	unordered_map<int, int> lookup;
//
//	for (auto it : mp)
//	{
//		if (lookup[it.second]) {
//			mp.erase(it.first);
//		}
//		else lookup[it.second]++;
//		cout << typeid(it).name() << endl;
//	}
//
//	for (auto it : mp) cout << it.first << " " << it.second << endl;
//
//}