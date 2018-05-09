#include <iostream>
#include <string>

using namespace std;

char decode(char a)
{
    switch (a) {
        case 'e':
        case 'E':
            return 'q';
        case 'r':
        case 'R':
            return 'w';
        case 't':
        case 'T':
            return 'e';
        case 'y':
        case 'Y':
            return 'r';
        case 'u':
        case 'U':
            return 't';
        case 'i':
        case 'I':
            return 'y';
        case 'o':
        case 'O':
            return 'u';
        case 'p':
        case 'P':
            return 'i';
        case '[':
        case '{':
            return 'o';
        case ']':
        case '}':
            return 'p';
        case 'd':
        case 'D':
            return 'a';
        case 'f':
        case 'F':
            return 's';
        case 'G':
        case 'g':
            return 'd';
        case 'h':
        case 'H':
            return 'f';
        case 'j':
        case 'J':
            return 'g';
        case 'k':
        case 'K':
            return 'h';
        case 'l':
        case 'L':
            return 'j';
        case ';':
        case ':':
            return 'k';
        case '\'':
        case '\"':
            return 'l';
        case 'c':
        case 'C':
            return 'z';
        case 'v':
        case 'V':
            return 'x';
        case 'b':
        case 'B':
            return 'c';
        case 'n':
        case 'N':
            return 'v';
        case 'm':
        case 'M':
            return 'b';
        case ',':
        case '<':
            return 'n';
        case '.':
        case '>':
            return 'm';
        case ' ':
            return ' ';
    }
}

int main(int argc,char* arg[])
{
    string line;
    getline(cin,line);
    for(int i=0 ; i<line.length();i++)
    {
        cout<<decode(line[i]);
    }
    cout<<endl;
}
