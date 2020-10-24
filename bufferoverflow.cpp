/*
 * <c> Sharkbyteprojects
 * MIT LICENSE
 * https://github.com/FreeSoftwareDevlopment/Bufferoverflow-Example/
 */
#include <iostream>  //INCLUDE INPUT/OUTPUT STREAM LIB
using namespace std; //AFTER THIS, cout == std::cout and flush == std::flush
int main(){ // MAIN function
	char hey[500];// buffer "char[500]"
	cin >> hey; //stdin to buffer
	cout << "\n\n################\n\n" << hey << flush; // PRINT THE CONTENT OF BUFFER AND FLUSH IT OUT
	cout << "\n\n COMPLETED" << endl;//Show "Completed"
	return 0; // Return 0 | "All OK" Code
}
