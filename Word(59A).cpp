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
    // 3shan el ms2la de tt7l lazm ykon m3ak string functions, (ze el is/to_upper/lower)
    // lazm brdo tb2a 3arf an el string da 3bara 3n " array of index " y3ny ana 22dr a-loop 3la el string 3ady
    // da m3na an 22dr a7ot range goa el loops ll string.size()
    std::string x;
    char word; 
    std::cin >> x;
    int uppercase_counter = 0 , lowercase_counter = 0; // counter 3shan a3d el lower,upper cases
    for (int i = 0; i < x.size(); i++) {
        // h-loop 3la range el length bta3 el string
        if (isupper(x[i])) { // hna bcheck lw el string fe upper hnzwd 3la counter el uppercase
            uppercase_counter++;
        }
        else {
            lowercase_counter++; // else hna hnzwd 3la counter el lower, kda m3ana el counters numbered 3la 7asb el string
        }
    }
    if (uppercase_counter > lowercase_counter) { // hcheck lw counter el upper akbr mn el lower
        for (int i = 0; i < x.size(); i++) {
            // habd2 aloop w aprint el kelma el gdeda ll upper
            word = toupper(x[i]);
            std::cout << word; // hprint el kelma el gdeda
        }
    }
    else {
        for (int i = 0; i < x.size(); i++) { // nfs el fo2eha, bs el else hna l-lowercase akeed
            word = tolower(x[i]);
            std::cout << word; // hprint el kelma el gdeda

        }
    }

    return 0;
 }
    
 