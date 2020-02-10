#include <iostream>
#include <string>
int main ()
{
    std::string vardas;
    std::cout << "Iveskite savo varda" << std::endl;
    if (!(std::cin >> vardas)) std::cout << "klaida";
    int n;
    std::string eil1, eil2, eil3, eil4, eil5;
    if(vardas.back() == 's')
    eil3 = "* Sveikas, ";
    else eil3 = "* Sveika, ";
    eil3 += vardas + "! *\n";
    n = eil3.size() - 1;
    for (int i = 0; i < n; i++, eil1 += "*");
    eil1 += "\n";
    eil2 = "*";
    for (int i = 0; i< n - 2; i++, eil2 += " ");
    eil2 += "*\n";
    eil4 = eil2;
    eil5 = eil1;
    std:: cout << eil1 << eil2 << eil3 << eil4 << eil5;

    return 0;
}
