////#include <iostream>
////using namespace std;
////void pointerBasics() {
////    int var = 10;
////    int* ptr = &var;
////    cout << "Value of var: " << var << endl;
////    cout << "Address of var: " << ptr << endl;
////    cout << "Value at address stored in ptr: " << *ptr << endl;
////    int* dynamicArray = new int[5];   
////    make a heep resever 5 memory block 
////    for (int i = 0; i < 5; i++) {
////        dynamicArray[i] = i * 10;
////        cout << dynamicArray[i] << " ";
////    }
////    delete[] dynamicArray;
////    cout << endl;
////    int x;
////    cout << "Enter the value of x:";
////    cin >> x;
////    int* dynamicArray1 = new int[x];
////    for (int i = 0; i < x; i++) {
////        dynamicArray1[i] = i * 10;
////        cout << dynamicArray1[i] << " ";
////    }
////    delete[] dynamicArray1;
////
////    cout << endl;
////}
////int main() {
////    pointerBasics();
////    system("pause");
////    return 0;
////}
////#include <fstream>
////#include<string>
////#include <iostream>
////using namespace std;
////void fileOperations() {
////    ofstream outFile("example.txt");
////    outFile << "Hello, world!" << endl;
////    outFile << "Samreen farhat!!!!!!!!" << endl;
////    outFile.close();
////    string line;
////    ifstream inFile("example.txt");
////    while (getline(inFile, line)) {
////        cout << line << '\n';
////    }
////    inFile.close();
////}
////int main() {
////    fileOperations();
////    return 0;
////}
////#include <iostream>
////#include <vector>
////#include <map>
////using namespace std;
////void stlUsage() {
////    vector<int> vec = { 1, 2, 3, 4, 5 };
////    for (int num : vec) cout << num << " ";
////    cout << endl;
////    map<string, int> wordCount;
////    wordCount["hello"] = 1;
////    wordCount["world"] = 2;
////    cout << "Count for 'hello': " << wordCount["hello"] << endl;
////}
////int main() {
////    stlUsage();
////    return 0;
////}
//#include <iostream>
//using namespace std;
//int main()
//{
//    // declare variables
//    int var1 = 3;
//    int var2 = 24;
//    int var3 = 17;
//    // print address of var1
//    cout << "Address of var1: " << &var1 << endl;
//    // print address of var2
//    cout << "Address of var2: " << &var2 << endl;
//    // print address of var3
//    cout << "Address of var3: " << &var3 << endl;
//}
//#include <iostream>
//using namespace std;
//int main() 
//{
//    int var = 5;
//    // declare pointer variable
//    int* pointVar;
//    // store address of var
//    pointVar = &var;
//    // print value of var
//    cout << "var = " << var << endl;
//    // print address of var
//    cout << "Address of var (&var) = " << &var << endl << endl;
//    // print pointer pointVar
//    cout << "pointVar = " << pointVar << endl;
//    // print the content of the address pointVar points to
//    cout << "Content of the address pointed to by pointVar (*pointVar) = " << *pointVar << endl;
//    system("pause");
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//    int var = 5;
//    int* pointVar;
//    // store address of var
//    pointVar = &var;
//    // print var
//    cout << "var = " << var << endl;
//    // print *pointVar
//    cout << "*pointVar = " << *pointVar << endl
//        << endl;
//    cout << "Changing value of var to 7:" << endl;
//    // change value of var to 7
//    var = 7;
//    // print var
//    cout << "var = " << var << endl;
//    // print *pointVar
//    cout << "*pointVar = " << *pointVar << endl
//        << endl;
//    cout << "Changing value of *pointVar to 16:" << endl;
//    // change value of var to 16
//    *pointVar = 16;
//    // print var
//    cout << "var = " << var << endl;
//    // print *pointVar
//    cout << "*pointVar = " << *pointVar << endl;
//    system("pause");
//    return 0;
//}
// C++ Program to display address of each element of an array 
//#include <iostream>
//using namespace std;
//int main()
//{
//    float arr[3];
//
//    // declare pointer variable
//    float* ptr;
//    cout << "Displaying address using arrays: " << endl;
//    // use for loop to print addresses of all array elements
//    for (int i = 0; i < 3; ++i)
//    {
//        cout << "&arr[" << i << "] = " << &arr[i] << endl;
//    }
//    // ptr = &arr[0]
//    ptr = arr;
//    cout << "\nDisplaying address using pointers: " << endl;
//    // use for loop to print addresses of all array elements
//    // using pointer notation
//    for (int i = 0; i < 3; ++i)
//    {
//        cout << "ptr + " << i << " = " << ptr + i << endl;
//    }
//    system("pause");
//    return 0;
//}
// C++ Program to insert and display data entered by using pointer notation.

#include <iostream>
using namespace std;
int main() 
{
    float arr[5];
    // Insert data using pointer notation
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) 
    {

        // store input number in arr[i]
        cin >> *(arr + i);
    }
    // Display data using pointer notation
    cout << "Displaying data: " << endl;
    for (int i = 0; i < 5; ++i) {

        // display value of arr[i]
        cout << *(arr + i) << endl;

    }
    system("pause");
    return 0;
}