#include <cstring>
#include <string>
#include <iostream>
#include <fstream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <bits/stdc++.h>

#define PORT 12345
#define BUFFER_SIZE 1024

string str2bin(string s) {
    string bin = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '#') {
            bin += "00000000";
        } else {
            char c = s[i];
            bitset<8> b(c);
            bin += b.to_string();
        }
    }
    return bin;
}
