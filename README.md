# DataSetsort-in-c-
 Statement: write a c++ program such that it can sort the array in increasing and decreasing order using the operator.  1 ^“+” to sort array in increasing order  2 ^“-” to sort array in descending order.  For this create a class named as DataSet which contains two private data members.  First is integer pointer p to point dynamically created array and second one is integer variable n to store the size of dynamically created array.  Class DataSet contains following methods  First it contains a constructor which accepts an integer n as argument denoting size of dynamically created array. The constructor should create  the array of size n dynamically, and also initialize that array with n integer values.  Second it contains a print() method whose work is to print the elements of DataSet separated by space.  suppose D1 is the DataSet so statement D1^"+" should sort the D1 in increasing order and statement D1^"-" should  sort the D1 in decreasing order.  for better understating we are providing you a code snippet, this code snippet contains a main() method and some statements.  We have already written this code snippet in this program so there is no need to write main() method for this program.  So your task is to just observer the code snippet and write the rest code (class creation) which is required for successful execution of the program.  int main() { int n; //declare a variable n denoting size of dynamic array cin>>n;//taking input in integer n denoting size of dynamic array DataSet D1(n); //creating object of DataSet D1 D1.print(); //print the elements of DataSet D1 separated by space D1^“+”; //sort the elements of DataSet D1 in increasing order D1.print();//should print the elements of DataSet D1 in increasing order separated by space D1^“-”; //sort the elements of DataSet D1 in decreasing order D1.print();//should print the elements of DataSet D1 in decreasing order separated by space return 0; } Input : first line contains an integer n denoting size of dynamically created array.  Second line contains n space separated integers denoting elements of array.  Output: output contains three lines.  First line contains n space separated integers denoting elements of DataSet D1  Second line contains n space separated integers denoting elements of DataSet D1 in increasing order  Third line contains n space separated integers denoting elements of DataSet D1 in decreasing order.  Constraints:5&lt;=n&lt;=10don't write the main() function for this program Example:  5  5 2 1 3 4  5 2 1 3 4  1 2 3 4 5  5 4 3 2 1
