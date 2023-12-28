#include <iostream>
#include "AString.h"
#include "SymbString.h"
#include "OctString.h"
#include "Menu.h" 
using namespace std;


Menu::Menu() {}
JobMode Menu::SelectJob() const {
    cout << "======================================\n";
    cout << "Select one of the following job mode:\n";
    cout << "1. Add object\n";
    cout << "2. Delete object\n";    
    cout << "3. Work with objects\n";
    cout << "4. Exit\n";
    int item = SelectItem(4);
    return (JobMode)(item - 1);
}

AString* Menu::SelectObject(const Factory& fctry) const {
    int nItem = fctry.pObj.size();
    if (!nItem) {
        cout << "There are no objects." << endl; cin.get();
        return 0;
    }
    cout << "......................................\n";
    cout << "Select one of the following Object:\n";
    for (int i = 0; i < nItem; ++i) {
        cout << i + 1 << ". " << fctry.pObj[i]->GetName() << endl;
    }
    int item = SelectItem(nItem);
    return fctry.pObj[item - 1];
}


int Menu::SelectItem(int nItem) {
    cout << "--------------------------------------\n";
    int item;
    while (true) {
        cin >> item;
        if ((item > 0) && (item <= nItem) && (cin.peek() == '\n')) {
            cin.get();   break;
        }

        else {
            cout << "Error (must be number from 1 to " << nItem << "):" << endl;
            cin.clear();
            while (cin.get() != '\n') {};
        }
    }
    return item;

}

