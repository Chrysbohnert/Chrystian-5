#include <map>
#include <iostream>

using namespace std;


int main() {
    string palavra;
    cout << "Diglavra: \n";
    cin >> palavra;
    map<char,int> contarletras;
    for (unsigned int i=0; i<palavra.size(); i++)
        contarletras[palavra[i]]++;

    for (map<char, int>::iterator it = contarletras.begin(); it != contarletras.end(); ++it)
        cout << it->first << ": " << it->second << endl;

    return 0;
}