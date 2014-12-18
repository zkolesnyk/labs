#include "header.h"
#include "lc.h"
using namespace std;

void l8() {

    spacer();
    cout << "\nLab #8" << endl;
    spacer();
    cout << endl;

    LC* list = new LC;
    LC* tmp = list;
    char * firstElement = new char[100];
    firstElement[0] = 'F';
    firstElement[1] = 0;
    list->elem = firstElement;
    list->next = 0;
    cout << "First element is predefined as " << firstElement
         << " and I don't care" << endl;
    while(true) {
        char * currentElement = new char[100];
        cout << "Enter next element. Type 0 to exit" << endl;
        cin >> currentElement;
        if (currentElement[0] == '0' && currentElement[1] == 0)
            break;
        list = addSorted(list, currentElement);
    }

    cout << "See your list ";
    displayList(list);

    cout << "Enter the element you want to put before the " << firstElement <<": ";
    char * beforeE = new char[100];
    cin >> beforeE;
    list = addBefore(list, beforeE, firstElement);

    cout << "Now the list looks like ";
    displayList(list);

    cout << "Enter two elements you want to put before the last element" << ": ";
    char * beforeL1 = new char[100];
    char * beforeL2 = new char[100];
    cin >> beforeL1 >> beforeL2;
    list = addBeforeLast(list, beforeL1, beforeL2);

    cout << "The list is ";
    displayList(list);

    cout << "Place end to start" << endl;
    list = endToStart(list);

    cout << "Final version of your list: ";
    displayList(list);

    cout << "Writing to file" << endl;
    writeToFile(list);

    cout << "Deleting" << endl;
    while (list != 0) {
        tmp = list->next;
        delete[] list->elem;
        delete list;
        list = tmp;
    }

    cout << "\n\nThe end." << endl;
    quit();
}
