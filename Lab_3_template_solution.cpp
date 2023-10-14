#include <iostream>
#include <string>
#include "Person.h"

int main() {
    Person bob = Person("Bob", 100, "retired", true);
    cout << "Name: " << bob.getName() << endl;
    cout << "Age: " << bob.getAge() << endl;
    cout << "Occupation: " << bob.getOccupation() << endl;
    cout << "Lives in IE: " << (bob.getLivesInIE() ? "Yes" : "No") << endl;

    Person unknown = Person();
    cout << "Name: " << unknown.getName() << endl;

    // Testing the movedLocation function
    bob.movedLocation();
    cout << "Bob now lives in IE: " << (bob.getLivesInIE() ? "Yes" : "No") << endl;

    // Comparing ages
    Person alice = Person("Alice", 30, "engineer", false);
    if (bob.isOlderThan(alice)) {
        cout << "Bob is older than Alice." << endl;
    } else {
        cout << "Bob is not older than Alice." << endl;
    }

    return 0;
}
