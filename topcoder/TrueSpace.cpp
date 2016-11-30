#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class TrueSpace {
public:
	long long calculateSpace(vector <int>, int);
};

long long TrueSpace::calculateSpace(vector <int> sizes, int clusterSize) {
	long long L=0;
	for(int i=0;i<sizes.size();i++)
	{
		L+=(sizes[i]/clusterSize);
		if(sizes[i]%clusterSize!=0) L++;
	
	}
	return L*clusterSize;
	
}


double test0() {
	int t0[] = {600};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 512;
	TrueSpace * obj = new TrueSpace();
	clock_t start = clock();
	long long my_answer = obj->calculateSpace(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p2 = 1024LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {16,32,128,128,0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 32768;
	TrueSpace * obj = new TrueSpace();
	clock_t start = clock();
	long long my_answer = obj->calculateSpace(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p2 = 131072LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {4096, 33792, 76800};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 1024;
	TrueSpace * obj = new TrueSpace();
	clock_t start = clock();
	long long my_answer = obj->calculateSpace(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p2 = 114688LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {1000000000, 1000000000, 1000000000, 1000000000,
 1000000000, 1000000000, 1000000000, 1000000000,
 1000000000, 1000000000, 1000000000, 1000000000,
 1000000000, 1000000000, 1000000000, 1000000000,
 1000000000, 1000000000, 1000000000, 1000000000,
 1000000000, 1000000000, 1000000000, 1000000000,
 1000000000, 1000000000, 1000000000, 1000000000,
 1000000000, 1000000000, 1000000000, 1000000000,
 1000000000, 1000000000, 1000000000, 1000000000,
 1000000000, 1000000000, 1000000000, 1000000000,
 1000000000, 1000000000, 1000000000, 1000000000,
 1000000000, 1000000000, 1000000000, 1000000000,
 1000000000, 1000000000}
;
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 1048576;
	TrueSpace * obj = new TrueSpace();
	clock_t start = clock();
	long long my_answer = obj->calculateSpace(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p2 = 50017075200LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int t0[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 8;
	TrueSpace * obj = new TrueSpace();
	clock_t start = clock();
	long long my_answer = obj->calculateSpace(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p2 = 0LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}

int main() {
	int time;
	bool errors = false;
	
	time = test0();
	if (time < 0)
		errors = true;
	
	time = test1();
	if (time < 0)
		errors = true;
	
	time = test2();
	if (time < 0)
		errors = true;
	
	time = test3();
	if (time < 0)
		errors = true;
	
	time = test4();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
