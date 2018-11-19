//#include  <iostream>
//int main()
//{
//	int sum = 0, value = 0;
//	while (std::cin >> value)
//	{
//		sum += value;
//	}
//	std::cout << "sum=" << sum << std::endl;
//	system("pause");
//	return 0;
//}

#include <iostream>

int main()
{
	int curval = 0, val = 0, cou = 0;
	if (std::cin >> curval){
		++cou;
		while (std::cin>>val)
		{
			if (curval == val)
				++cou;
			else{
				std::cout << curval << "is " << cou << "times"<<"\n";
				curval = val;
				cou = 1;
			}
		}
		std::cout << curval << "is " << cou << "times" << std::endl;
	}
	
	system("pause");
	return 0;
	

}