#include <iostream>
#include <string>
#include <limits>
struct eilutes
{
    std::string eil1, eil2, eil3;
};

int main ()
{
    eilutes eil;
    std::string vardas;
    std::cout << "Iveskite savo varda" << std::endl;
    std::cin >> vardas;
    int x;
    std::cout << "Iveskite remelio ploti " << std::endl;
    std::cin >> x;
    while(1)
    {
        if(std::cin.fail() || x < 1)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout<<"Ivestas netinkamas dydis, iveskite teigiama skaiciu: ";
            std::cin>>x;
        }

        if(!std::cin.fail() || x >=1) break;
    }
    int n;
    if(vardas.back() == 's')
    eil.eil3 = "* Sveikas, ";
    else eil.eil3 = "* Sveika, ";
    eil.eil3 += vardas + "! *\n";
    n = eil.eil3.size() - 1;

    for (int i = 0; i < n; i++, eil.eil1 += "*");
    eil.eil1 += "\n";

    eil.eil2 = "*";
    for (int i = 0; i< n - 2; i++, eil.eil2 += " ");
    eil.eil2 += "*\n";
    std::cout << eil.eil1;
    for (int i = 0; i < x; i++, std::cout << eil.eil2);
    std::cout << eil.eil3;
    for (int i = 0; i < x; i++, std::cout << eil.eil2);
    std::cout << eil.eil1;


    return 0;

}
