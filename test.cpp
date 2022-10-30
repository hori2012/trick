#include<iostream>
using namespace std;
// "NV.LT"
int main(){
	string str = "NV.LT1";
	string answer = "";
	cout << str.length() << endl;
	for(int i = 5; i < str.length() ;i++ ){
		answer += str[i];
	}
	cout << answer<< endl;
	int count = answer[0] - '0';
	for(int i = 1; i < answer.length(); i++){
		count *= 10;
		count += answer[i] - '0';
	}
	cout<< sizeof(count) << " " << count;
	return 0;
}
