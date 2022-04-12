#include <iostream>
#include <string>

using namespace std;
int main(int argc, const char * argv[]) {
	{
		const string MC = "wodeshijie";
		/**
		 * 第一个const表明pMC指向的是一个常量字符串
		 * 第二个const表明不能改变pMC这个指针指向的地址
		 * 该语句的意思即:pMC指向的地址不能变，且pMC指向的地址存储的值也不能变
		 */
		const string *const pMC = &MC;
		
		cout << pMC << *pMC << endl;
		
	}
	
	
	{
		const string MC = "wodeshijie";
		const string *pMC = &MC;
		const string MCEnglish = "MineCraft";
		/**
		 * pMC指向的地址可以改变，但是pMC只能指向一个string常量，因此不能通过pMC修改它指向的地址存储的值
		 */
		pMC = &MCEnglish;
		cout << pMC << *pMC << endl;
		
	}
	
	{
//	http://home.ustc.edu.cn/~liucan19/tech/string_and_char_ptr/
//		const char a = 'a';
		const char *a = "fadfa";

		cout << a << endl;
		const char* const pChar = "fadfadf";
		cout << *pChar << endl;
		
//		const string* const pStr = "fadfadf";
		
	}
	
	
	return 0;
}
