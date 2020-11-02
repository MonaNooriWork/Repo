#include <iostream>
#include <string>
//using namespace std;
int i;
int key;
std::string Cipher;

int main()
{
    std::cout << "Enter a key: ";
    std::cin >> key;
    std::cout << "Enter a Cipher: ";
    std::cin >> Cipher;
    std::cout << "The size of str is " << Cipher.size() << " bytes.\n";

    for (i = 0; i < Cipher.size(); i++)
    {
        char c = Cipher[i];
        int cnd = int(c) - 65;

        if (cnd >= key)
        {
            //std::cout << "ASCII Value of " << c << " is " <<  int(c) << std::endl;
            c = c - key;
            Cipher[i] = c;
        }
        else
        {
            c = c + 26 - key;
            Cipher[i] = c;
        }
    }
    std::cout << "The decrypted Cipher is " << Cipher << std::endl;
    return 0;
}
