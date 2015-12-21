#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <vector>
#include "AlgoPalindrome.h"
#include "TestGenerator.h"
#include "CheckTime.h"

using namespace std;

int main()
{
    ifstream in;
    ofstream out;
    size_t n;
    string s;
    vector<string> nameFiles;
    nameFiles.push_back("TimePalindromicTree.txt");
    nameFiles.push_back("TimeManacker.txt");
    nameFiles.push_back("TimeHash.txt");
    nameFiles.push_back("TimeSlowN2.txt");
    nameFiles.push_back("TimeSlowN3.txt");
    cin>>n;
    cin.get();
    for(int i=0;i<n;++i)
    {
        getline(cin, s);
        cout <<algo::countPalindrome(s, algo::t_PalindromicTree) << endl;
    }
//    for(size_t i = 0; i < nameFiles.size(); ++i)
//    {
//        in.open("examples.txt");
//        out.open(nameFiles[i]+"all.txt");
//        time_start();
//        int j = 0;
//        while(in)//100000
//        {
//            getline(in, s);
//            if(s.length() > 0)
//                algo::countPalindrome(s, static_cast<algo::ChooseAlgo>(i));
//        }
//        out << time_stop() << " msec";
//        cout << time_stop() << " msec" << endl;
//        out.close();
//        in.close();
//    }
    return 0;
}
