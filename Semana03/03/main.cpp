#include <iostream>
#include <sstream> 

using namespace std;

void hanoi(int n, string a, string b, string c)
{
  if (n == 1)
    cout << "mova " << n <<" de "<< a << " para " << b << "\n";
  else
  {
    hanoi(n - 1, a, c, b);
    cout << "mova " << n <<" de "<< a << " para " << b << "\n";
    hanoi(n - 1, c, b, a);      
  }
}

int main (int argc, char** argv) {
    if(argc<2){
      return 1;
    }
    string entrada = argv[1];
    stringstream s(entrada);
    int a;
    s >> a;
    hanoi(a,"Torre1","Torre2","Torre3");
    return 0;    
}