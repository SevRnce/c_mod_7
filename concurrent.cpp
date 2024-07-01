#include<iostream>
#include<thread>

//Standard namespace declaration
using namespace std;

void CountUp(){
	for (int i = 0; i < 21; i++){
		cout << i << "\n";
	}
}

void CountDown(){
	for (int i = 21; i > 0; i--){
		cout << i - 1 << "\n";
	}
}

int main() {
	thread t1(CountUp);
	thread t2(CountDown);

	t1.join();
	t2.join();

	return 0;
}
