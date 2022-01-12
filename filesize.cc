#include <iostream>
#include <fstream>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line 
//program: ./filesize
// input.3lines: 3
// input.1line: 1

    // just to get you started, this is how to refer to the arguments that were passed
int main( int argc, char* argv[] )
{
    for (int arg = 1; arg < argc; ++arg){
        std::ifstream inFile("file"); 
        inFile.open(argv[arg]);
        if(inFile.fail()){
            std::cout << argv[arg] << ": " << -1 << '\n';
        }else{
            int lineCount = std::count(std::istreambuf_iterator<char>(inFile), std::istreambuf_iterator<char>(), '\n');
            std::cout << argv[arg] << ": " << lineCount << '\n' ;
        }
    }
    exit(0); // this means that the program executed correctly!
}