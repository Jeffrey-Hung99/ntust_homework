#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <sstream>
#include <math.h>
#include <algorithm>

using namespace std;
int main() {
    int a;
    double b;
    cin >> a;
    vector<double> numbers;
    vector<double> numbers2;
    for (int i = 0; i < a; i++) {
        cin>>b;
        numbers.push_back(b);
    }
    double sum=0;
    for (double i:numbers) {
        sum+=i;
    }
    double average;
    average=sum/a;
    for (double i:numbers) {
        i-=average;
        numbers2.push_back(i);
    }
    double ans=0;
    for (double i:numbers2) {
        ans+=pow(i,2);
    }
    ans/=a;
    ans=sqrt(ans);
    cout<<"Average:"<<average<<"\t"<<"Standard deviation:"<<ans;

return 0;
}


