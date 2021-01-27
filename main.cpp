#include <iostream>
#include <cstring>
#include <fstream>

#include "./Libraries/MyString/MyString.h"


void test() {
    using namespace std;

    ifstream f_in("file", ios::binary);
    ofstream f_out("output.txt");

    int found_value{}, count_duplication{};

    int cur_num{}, prew_num{}, tmp_count{};

    while (f_in.read((char *) &found_value, sizeof(int))) {
        if (cur_num != prew_num) {
            if (tmp_count > count_duplication) {
                found_value = prew_num;
                count_duplication = tmp_count;
            }
            tmp_count = 0;
        }
        prew_num = cur_num;
        ++tmp_count;
    }

    for (int i{}; i < count_duplication; ++i) {
        f_out << found_value;
    }

    f_in.close();
    f_out.close();
}

int main() {

    test();

    return 0;
}
