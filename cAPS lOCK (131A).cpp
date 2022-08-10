#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include <string>
#include <cctype>
#include <iostream>
#include <cstring>
#include<map>

int main() {
    // grbt a7lha b queue a5t TLE, fa y2ma array y2ma vectors
    // vectors a7sn 3shan ast5dm functions bta3tha a7sn mn el array, 5sos el dynamic size a7sn 
    // wel mfrod el nas 3arf an el vector da " dynamic array ", bs kda
    std::string x;
    std::vector<int>letter;
    std::cin >> x;

    for (int i = 0; i < x.size(); i++) {
        if (islower(x[i])) {
            letter.emplace_back(i); // vector function bt5leny a3ml add f a5r el vector range

        }
    }
        if (letter.size() == 0) {
            for (int i = 0; i < x.size(); i++) {
                x[i] = tolower(x[i]);

            }
        }
        else if (letter.size() == 1 && letter[0]==0){ // kda el mfrod hyb2a fe else fadya y2ma n7ot feha return 0 msh 3arf
            x[0] = toupper(x[0]);
            for (int i = 1; i < x.size(); i++) {
                x[i] = tolower(x[i]);
            }
        }
        else {
            // grbt a7ot el return hna bs btl3 output fady, fa sbt el else fadya :v
        }
        std::cout << x;

        return 0;
    }
   

    