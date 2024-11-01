// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int countSeniors(vector<string>& details) {
        int count=0;
        for(auto i:details){
            int age=stoi(i.substr(11,2));
            cout<<age<<endl;
            if(age>60){
                count++;
            }
        }
        return count;
    }
int main() {
    // Write C++ code here
    vector<string> d={ "7868190130M7522","5303914400F9211","9273338290F4010"};
    cout<<countSeniors(d)<<endl;
    return 0;
}