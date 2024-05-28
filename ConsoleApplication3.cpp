#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countWord(string str) {
    int count = 0;
    int k = 0;
    for (; str[k] == ' ' && str[k] != '\0'; k++);
    for (int i = k; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i + 1] == '\0') count++;
        if (str[i] != ' ' && str[i + 1] == ' ') count++;
    }
    return count;
}

//int repeatWord(string str) {
//    int count = 0;
//    string buf;
//    ifstream in(str);
//    if (in.is_open()) {
//        while (getline(in, buf)) { 
//            for (int i = 0; count[i] = '\0';i++) {
//                int flag = true;
//                for (int j = 0; count[j] != '\0'; j++) {
//                    flag = false;
//                }
//                if (flag == true) {
//                    count++;
//                }
//            }
//        }
//    }
//    in.close();
//    return sum;
//}

void copy(string path,string pathOff) {
    string buf;
    ifstream in(path);
    if (in.is_open()) {
        while (getline(in, path)) {
            cout << buf << endl;
            buf += path + '\n';
        }
    }
    in.close();
    ofstream out(pathOff);
    out << "";
    out.close();

}

int countWordInFile(string path) {
    int sum = 0;
    string buf;
    ifstream in(path);
    if (in.is_open()) {
        while (getline(in, buf)) {
            sum += countWord(buf);
        }
    }
    in.close();
    return sum;
}

int main()
{
    string path = "resurses\\input.txt";
    cout << countWordInFile(path);
    string buf;
    int count = 0;
    ifstream in(path);
    if (in.is_open()) {
        while (getline(in, buf)) {
            cout << buf << endl;
        }
    }
    in.close();

    ofstream out("resurses\\input(copy).txt");
    out << "dfsdfsdfsfsdfsdfsdfsdfs ess www sa\ns";
    out.close();

    copy(buf,path);
}