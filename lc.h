typedef char* TE;
struct LC {
    TE elem;
    LC* next;
};

bool areEqual(TE elem1, TE elem2);
bool notLess(TE elem1, TE elem2);

LC* addBeforeLast(LC* list, TE E1, TE E2);
LC* addBefore(LC* list, TE E1, TE E);
LC* endToStart(LC* list);
LC* addSorted(LC* list, TE E1);
void writeToFile(LC* list);
void displayList(LC* list);