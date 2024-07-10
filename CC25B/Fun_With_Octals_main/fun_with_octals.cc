#include <bits/stdc++.h>
using namespace std;

string Nhex, Nbin, Noct;
string tmp;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> Nhex;

    map<char, string> hex_to_bin = {
        {'0', "0000"}, {'1', "0001"}, {'2', "0010"}, {'3', "0011"},
        {'4', "0100"}, {'5', "0101"}, {'6', "0110"}, {'7', "0111"},
        {'8', "1000"}, {'9', "1001"}, {'A', "1010"}, {'B', "1011"},
        {'C', "1100"}, {'D', "1101"}, {'E', "1110"}, {'F', "1111"}};

    map<string, char> bin_to_oct = {{"000", '0'}, {"001", '1'}, {"010", '2'},
                                    {"011", '3'}, {"100", '4'}, {"101", '5'},
                                    {"110", '6'}, {"111", '7'}};

    Nbin = "";
    for (int i = Nhex.length() - 1; i > -1; i--) {
        tmp = hex_to_bin[Nhex[i]];
        Nbin = tmp + Nbin;
    }

    Noct = "";
    for (int i = Nbin.length() - 1; i > -1; i -= 3) {
        tmp = Nbin[i];
        if (i - 1 >= 0)
            tmp = Nbin[i - 1] + tmp;
        else
            tmp = '0' + tmp;
        if (i - 2 >= 0)
            tmp = Nbin[i - 2] + tmp;
        else
            tmp = '0' + tmp;
        tmp = bin_to_oct[tmp];
        Noct = tmp + Noct;
    }

    if (Noct[0] == '0') Noct.erase(0, 1);

    cout << Noct;

    return 0;
}
