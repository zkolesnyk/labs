#include "header.h"
#include <sstream>
using namespace std;

void l6() {
    spacer();
    cout << "Lab #6" << endl;
    spacer();
    
    string text;
    cout<<"Enter string: ";
    cin.ignore();
    getline(cin, text);
    
    explode(text);
    
    bool a = false;
    
    cout<<"Result string: ";
    
    int i = 0;
    while(i<10000 && g_arr[i] != "") {
        size_t found = g_arr[i].find("a");
        if (found != string::npos) {
            found=g_arr[i].find("a",found+1);
            if (found == string::npos)
                cout << g_arr[i] << " ";
            a = true;
        } else
            cout << g_arr[i] << " ";
        i++;
    }
    
    if(!a) cout<<"\nNote that \"a\" was not found in string you entered";
    
    cout<<"\n";
    
    for(int x=0; x < 10000; ++x)
        g_arr[x] = "";
    
    cout << "\n\nThe end." << endl;
    quit();
}

void explode(string line) {
    long i = 0;
    stringstream ssin(line);
    while (ssin.good()){
        ssin >> g_arr[i];
        ++i;
    }
}