#include <iostream>

using namespace std;

class Numbers{
    int number;
    static const string lessThan20[], tens[];
    static const string hundred, thousand;
};

const string Numbers::lessThan20[] = {"zero"};
const string Numbers::tens[] = {"ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
const string Numbers::hundred = "hundred";
const string Numbers::thousand = "thousand";

int main() {

}
