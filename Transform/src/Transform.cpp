#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stdlib.h>


using namespace std;
//int increament (int x) { return x+1 ;}
int main(){
	int age[] = {10,20,30};
	int i;
	int house[]= {1,2,3};
	//vector<age>a;
//	a.push_back(10);
//	a.push_back(20);
	//a.push_back(30);

	int n = sizeof age/sizeof age[1];
    int res[n];
	//	std::vector<int>b(age,age+3);

	//vector<house>h;
	//h.push_back(883);
	//h.push_back(891);
	//h.push_back(881);

	//std::vector<int>d(house,house+3);

  //  int op(const int&age);
 //   return(age+1);

	std::transform(age,age+n,house,res,plus<int>());

	for(i=0 ;i<n; i++){
		std::cout<<res[i];

	}


	return 0;
}




