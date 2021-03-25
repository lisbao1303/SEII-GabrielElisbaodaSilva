#include <iostream>     
#include <fstream>      

using namespace std;

int main (int argc, char** argv) {
  if (argc!=3){
      return 1;
  }

  ifstream input (argv[1], ifstream::binary);
  ofstream output(argv[2], ofstream::binary);
  if (input) {
    input.seekg (0, input.end);
    int tamanho = input.tellg();
    input.seekg (0, input.beg);
    char * buffer = new char [tamanho];

    input.read(buffer,tamanho);
    if (input){
        output.write(buffer,tamanho);
        cout << "Arquivo copiado com Sucesso";
    }else{
        cout << "error";
    }
    input.close();
    delete[] buffer;
  }
  return 0;
}