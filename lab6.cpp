#include "header.h"
using namespace std;

void l6() {
    
    spacer();
    cout << "Lab #6" << endl;
    spacer();
    
    string text;
    write("Enter string: ");
    cin.ignore();
    getline(cin, text);
    
    explode(text);
    
    bool a = false;
    
    write("Result string: ");
    
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
    
    if(!a)
        write("\nNote that \"a\" was not found in string you entered");
    
    write("\n");
    
    spacer(false);
    
    for(int x=0; x < 10000; ++x)
        g_arr[x] = "";
    
    cout << "\n\nThe end." << endl;
    quit();
}