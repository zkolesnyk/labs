#include <fstream>
#include "lc.h"

using namespace std;

bool areEqual(TE elem1, TE elem2) {
    string str1(elem1);
    string str2(elem2);
    return str1 == str2;
}

bool notLess(TE elem1, TE elem2) {
    string str1(elem1);
    string str2(elem2);
    return str1.size() >= str2.size();
}

LC* addBeforeLast(LC* list, TE E1, TE E2) {
    if (list == 0) return 0;
    else if (list->next == 0) {
        LC* tmp = new LC;
        tmp->elem = E1;
        tmp->next = new LC;
        tmp->next->elem = E2;
        tmp->next->next = list;
        return tmp;
    }
    LC * source = list;
    for (; list->next->next != 0; list = list->next);
    LC* tmp = list->next;
    list->next = new LC;
    list->next->elem = E1;
    list->next->next = new LC;
    list->next->next->elem = E2;
    list->next->next->next = tmp;
    return source;
}

LC* addBefore(LC* list, TE E1, TE E) {
    if (list == 0) return 0;
    LC* source = list;
    if (areEqual(list->elem, E)) {
        list = new LC;
        list->next = source;
        list->elem = E1;
        return list;
    }
    for (; list->next != 0; list = list->next) {
        if (areEqual(list->next->elem, E)) {
            LC* tmp = new LC;
            tmp->elem = E1;
            tmp->next = list->next;
            list->next = tmp;
            return source;
        }
    }
    return source;
}

LC* endToStart(LC* list) {
    if (list == 0) return 0;
    LC* source = list;
    LC* end;
    for (; list->next->next != 0; list = list->next);
    end = list->next;
    list->next = 0;
    end->next = source;
    return end;
}

LC* addSorted(LC* list, TE E1) {
    if (list == 0) return 0;
    if (list->next == 0) {
        LC* tmp = new LC;
        tmp->elem = E1;
        if (notLess(list->elem, E1)) {
            tmp->next = list;
            return tmp;
        }
        else {
            list->next = tmp;
            return list;
        }
    }
    if (notLess(list->elem, E1)) {
        LC* tmp = new LC;
        tmp->elem = E1;
        tmp->next = list;
        return tmp;
    }
        
    LC* source = list;
    for(LC* tmp; list->next->next != 0; list = list->next) {
        if (notLess(E1, list->elem) && notLess(list->next->elem, E1)) {
            tmp = list->next;
            list->next = new LC;
            list->next->elem = E1;
            list->next->next = tmp;
            return source;
        }
    }
    if (notLess(E1, list->next->elem)) {
        list->next->next = new LC;
        list->next->next->elem = E1;
        list->next->next->next = 0;
        return source;
    }
    LC* tmp = list->next;
    list->next = new LC;
    list->next->elem = E1;
    list->next->next = tmp;
    return source;
}

void writeToFile(LC* list) {
    ofstream file("/Users/Kolesnyk/labs/list.txt");
    for (; list != 0; list = list->next)
        file << list->elem << " ";
}

void displayList(LC* list) {
    if (list == 0) return;
    for (; list->next != 0; list = list->next)
        cout << "[" << list->elem << "]->";
    cout << "[" << list->elem << "]\n\n";
}
