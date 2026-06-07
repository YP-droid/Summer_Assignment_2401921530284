#include <iostream>
#include <string>
#include "LibraryUser.h" 

using namespace std;

int main() {

    // --- Test Case #1: KidUser ---
    
    KidUsers kid;
    cout << "--- Test Case #1: KidUser ---" << endl;
    
    // Registration
    
    kid.setAge(10);
    kid.registerAccount();
    kid.setAge(18);
    kid.registerAccount();
    
    // Test Book Requests
    
    kid.setBookType("Kids");
    kid.requestBook();
    kid.setBookType("Fiction");
    kid.requestBook();

    // --- Test Case #2: AdultUser ---
    
    AdultUser adult;
    cout << "\n--- Test Case #2: AdultUser ---" << endl;
    
    // Registration
    
    adult.setAge(5);
    adult.registerAccount();
    adult.setAge(23);
    adult.registerAccount();
    
    // Test Book Requests
    
    adult.setBookType("Kids");
    adult.requestBook();
    adult.setBookType("Fiction");
    adult.requestBook();

    return 0;
}