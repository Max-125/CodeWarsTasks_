
/*
!Complete the square sum function so that it squares each number passed into it and then sums the results together.
For example, for [1, 2, 2] it should return 9 because

?SOLUTION

#include <iostream>
#include <vector>

int squareSum(const std:: vector <int> &numbers ) {
  int sum = 0;

  for (int num : numbers) {
      sum += num * num;
  }

  return sum;
}

int main() {
    std:: vector <int> numbers = {1 , 45 , 12};
  ins result = squareSum(numbers);
  std :: cout << "Result = " << result << endl;
}

!We need a function that can transform a number (integer) into a string.

What ways of achieving this do you know?

Examples (input --> output):
123  --> "123"
999  --> "999"
-100 --> "-100"

?SOLUTION

#include <iostream>
#include <string>
#include <sstream>

std :: string number_to_string(int num) {
  std :: strignstream ss;
  ss << num;
  return ss.str();
}

!OR

std :: string number_to_string(int num) {
    return std :: to_string(num);
}

int main () {
  int num = 452;
  std :: string stringNumber = number_to_string(num);
  std:: cout << "String = " << stringNumber <<endl;

  return 0;
}

!Summation
Write a program that finds the summation of every number from 1 to num. The number will always be a positive integer greater than 0.

?SOLUTION

#include <iostream>
#include <string>
using namespace std;

int sumOfDigits(int);

int summation(int n ) {
    int sum = 0;
    for (int x = 1; x <= n; x++) {
        sum += sumOfDigits(x);
    }
    return sum;
}

int sumOfDigits(int x) {
    int sum = 0;
    while (x != 0) {
        sum += x % 10;
        x = x / 10;
    }
    return sum;
}

int main() {
    int n = 78;
    cout << "Sum of digits in numbers from 1 to n " << n << " is " << summation( n) << endl;
    return 0;
}

!Write function RemoveExclamationMarks which removes all exclamation marks from a given string.

?SOLUTION

#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string str = "Welcome???@@##$ to#$% Geeks%$^for$%^&Geeks";

    for (int i = 0, len = str.size(); i < len; i++) {
        if (ispunct (str[i])) {
            str.erase(i--, 1);
            len = str.size();
        }
    }

    std::cout << str;
    return 0 ;
}

TODO ispunct - Check if character is a punctuation character Checks whether c is a punctuation character.
TODO erase - The std::string::erase() function is used to remove characters from a string. It has three overloads:

!OR

#include <string>

std::string removeExclamationMarks(std::string str){
int i = 0;
std::string result = "";
  while(i < str.length())
  {
    if(str[i] != '!'){
      result += str[i];
    }
    i++;
  }
  return result;
}

!When provided with a number between 0-9, return it in words.
!Input :: 1
!Output :: "One".

?SOLUTION

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, num = 0, i;
    cout << "\n\nPrint a number in words:\n";
    cout << "-----------------------------\n";
    cout << "Input any number between 0 - 9: ";
    cin >> n;
    while (n != 0) {
        num = (num * 10) + (n % 10);
        n /= 10;
    }
    for (i = num; i > 0; i = i / 10) {
        switch (i % 10) {
        case 0:
            cout << "Zero";
            break;
        case  1:
            cout << "One";
            break;
        case  2:
            cout << "Two";
            break;
        case  3:
            cout << "Three";
            break;
        case  4:
            cout << "Four";
            break;
        case  5:
            cout << "Five";
            break;
        case  6:
            cout << "Six";
            break;
        case 7:
            cout << "Seven";
            break;
        case  8:
            cout << "Eight";
            break;
        case  9:
            cout << "Nine";
            break;
        default:
            cout << "Invalid number";
            break;
        }
    }
    cout << endl;
}

!OR

#include <iostream>
#include <string>
using namespace std;

string NumToString(int num) {
    switch (num) {
    case 1 :
        return "One";
        break;
    case 2:
        return "Two";
        break;
    case 3:
        return "Three";
        break;
    case 4:
        return "Four";
        break;
    case 5 :
        return "Five";
        break;
    case 6 :
        return "Six";
        break;
    case 7:
        return "Seven";
        break;
    case 8:
        return "Eight";
        break;
    case 9:
        return "Nine";
        break;
    default:
        return "Invalid number";
        break;
    }
}

int main() {
    int num;
    cout << "Enter a number between 1 - 9" << endl;
    cin >> num;
    cout << NumToString(num) << endl;
    return 0;
}

!Deoxyribonucleic acid, DNA is the primary information storage molecule in biological systems. It is composed of four nucleic acid bases Guanine ('G'), Cytosine ('C'), Adenine ('A'), and Thymine ('T').
Ribonucleic acid, RNA, is the primary messenger molecule in cells. RNA differs slightly from DNA its chemical structure and contains no Thymine. In RNA Thymine is replaced by another nucleic acid Uracil ('U').
Create a function which translates a given DNA string into RNA , in C++
For example:
"GCAT"  =>  "GCAU"

?SOLUTION

#include <iostream>
#include <string>
using namespace std;

string DNAtoRNA(string& dna) {
    string rna = dna;

    for (char & nucleotide : rna) {
        if (nucleotide == 'T') {
            nucleotide = 'U';
        }
    }

    return rna;
}

int main() {
    string dna;
    cout << "Enter a DNA : " << endl;
    cin >> dna;

    string rna = DNAtoRNA(dna);
    cout << "RNA : " << rna << endl;
    return 0;
}

!Rock Paper Scissors
Let's play! You have to return which player won! In case of a draw return Draw!

?SOLUTION

#include <iostream>
#include <string>
using namespace std;

string ShowWinner(const string &p1 ,const string &p2) {

    if (p1 == p2) {
        return "Draw";
    }
    else if (
        (p1 == "rock" && p2 == "scissors") ||
        (p1 == "paper" && p2 == "rock") ||
        (p1 == "scissors" && p2 == "paper")
        ) {
        return "Player 1 win!!!";
    }
    else {
        return "Player 2 win!!!";
    }
}

int main() {
    string playerChoise1, playerChoise2;
    cout << "Player 1 enter your choise - " << endl;
    cin >> playerChoise1;
    cout << "Player 2 enter your choise - " << endl;
    cin >> playerChoise2;

    string result = ShowWinner(playerChoise1 , playerChoise2);
    cout << result << endl;
    return 0;
}

!Complete the function so that it finds the average of the three scores passed to it and returns the letter value associated with that grade.

Numerical Score	Letter Grade
90 <= score <= 100	'A'
80 <= score < 90	'B'
70 <= score < 80	'C'
60 <= score < 70	'D'
0 <= score < 60	'F'

?SOLUTION

#include <iostream>
using namespace std;

char calculateGrade(int score1, int score2, int score3) {
    int average = (score1 + score2 + score3) / 3;

    if (average >= 90 && average <= 100) {
        return 'A';
    } else if (average >= 80 && average < 90) {
        return 'B';
    } else if (average >= 70 && average < 80) {
        return 'C';
    } else if (average >= 60 && average < 70) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int score1, score2, score3;
    cout << "Enter score 1: ";
    cin >> score1;
    cout << "Enter score 2: ";
    cin >> score2;
    cout << "Enter score 3: ";
    cin >> score3;

    char grade = calculateGrade(score1, score2, score3);
    cout << "Grade: " << grade << endl;

    return 0;
}


!Very simple, given an integer or a floating-point number, find its opposite.

?SOLUTION

#include <iostream>
using namespace std;

double findOpposite(double number) {
    return -number;
}

int main() {
    double number;
    cout << "Enter a number: ";
    cin >> number;

    double opposite = findOpposite(number);
    cout << "Opposite: " << opposite << endl;

    return 0;
}

!reverse a number in C++ using loop and arithmetic operators.
#include <iostream>
using namespace std;
int main()  {
int n, reverse=0, rem;
cout<<"Enter a number: ";
cin>>n;
  while(n!=0)
  {
     rem=n%10;
     reverse=reverse*10+rem;
     n/=10;
  }
 cout<<"Reversed Number: "<<reverse<<endl;
return 0;
}

!Americans are odd people: in their buildings, the first floor is actually the ground floor and there is no 13th floor (due to superstition).
!With the 1st floor being replaced by the ground floor and the 13th floor being removed, the numbers move down to take their place.
!In case of above 13, they move down by two because there are two omitted numbers below them.

Examples
1  =>  0
0  =>  0
5  =>  4
15  =>  13
-3  =>  -3

?SOLUTION

#include <iostream>
#include <string>
using namespace std;

int getRealFloor(int floor) {

    if (floor > 0 ) {
        if (floor == 1) {
            return 0;
        }else if (floor <= 12) {
            return floor - 1;
        }else {
            return floor - 2;
        }
    }else {
        return floor;
    }
}

int main () {
    int floor;
    cout << "Enter num of floor in the american system : ";
    cin >> floor;

    int europeanSystem = getRealFloor( floor);
    cout << "Floor in the european system : " << europeanSystem << endl;

    return 0;
}

!TASK : Consider an array/list of sheep where some sheep may be missing from their place. We need a function that counts the number of sheep present in the array (true means present).
For example,
[true,  true,  true,  false,
  true,  true,  true,  true ,
  true,  false, true,  false,
  true,  false, false, true ,
  true,  true,  true,  true ,
  false, false, true,  true]
The correct answer would be 17.

?Solution
#include <iostream>
#include <vector>
using namespace std;

int cout_sheep(const vector <bool> &arr) {
    int sumOfSheep = 0;
    for (bool sheep : arr) {
        if (sheep) {
            sumOfSheep++;
        }
    }
    return sumOfSheep;
}

int main () {
    const vector <bool> arr = {
        true,  true,  true,  false,
        true,  true,  true,  true ,
        true,  false, true,  false,
        true,  false, false, true ,
        true,  true,  true,  true ,
        false, false, true,  true
    };
    int result = cout_sheep( arr);
    cout << "Result = " << result << endl;
    return 0;
}


!TASK Given an array of integers your solution should find the smallest integer.
For example:
Given [34, 15, 88, 2] your solution will return 2
Given [34, -345, -1, 100] your solution will return -345

?SOLUTION

#include <iostream>
#include <string>
using namespace std;

int main () {
  int x[] = {99,1119, 942, -671, 94, -1000};
  int len = sizeof(x) / sizeof(x[0]);

    // find smallest only if there is atleast one element in array
   if (len > 0 ) {  //assume that first element is smallest
        int smallest = x[0];
        for (int i = 1 ; i < len; i++) {
            if (smallest > x[i]) {
                smallest =  x[i];
             }
        }
        cout << "Smallest number : " << smallest << endl;
   }else {
        cout << "No elements in array" << endl;
   }
}


!TASK Given the a list of numbers, return a fixed list so that the values increment by 1 for each index from the minimum value up to the maximum value (both included).

Example
Input:  1,3,5,6,7,8 Output: 1,2,3,4,5,6,7,8

?SOLUTION

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

std :: vector <int> pipe_fix(const std :: vector <int> &nums) {
    int minValue = *min_element(nums.begin() , nums.end()); //! min_element - <algorithm> library.
    int maxValue = *max_element(nums.begin() , nums.end()); //! max_element - <algorithm> library.

    std :: vector <int> result;

    for (int i = minValue ; i <= maxValue; i++ ) {
        result.push_back(i); //!push_back() is a pre-defined function that is used to insert(вставляет) data or elements at the end of the vector or it
        ?pushes the element in the vector from the back
    }

    return result;
}

int main () {
    std:: vector <int> inputList = {1, 5 , 7,99};
    std:: vector <int> fixed = pipe_fix(inputList);
    cout << "Fixed list = " ;
    for (int num : fixed ) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

!TASK Here's a complete method in C++ that takes
a boolean value and returns "Yes" for true or "No" for false:

?SOLUTION

#include <iostream>
#include <string>
using namespace std;

std :: string bool_to_word(bool value) {
  return value ? "Yes" : "No" ;
}

int main () {
  bool testValue = true;
  std :: string result = bool_to_word(testValue);
  std :: cout << result << std :: endl;
  return 0;
}

!OR

#include <iostream>
#include <string>
unsing namespace std;

std :: string bool_to_word(bool value ) {
    if (value) {
        return "Yes";
    }else {
        return "No";
    }
}

int main () {
    bool inputVal = true;
    std :: string result = bool_to_word( inputVal );
    std :: cout << result << endl;
    return 0;
}


!TASK You get an array of numbers, return the sum of all of the positives ones.
Example [1,-4,7,12] => 1 + 7 + 12 = 20
Note: if there is nothing to sum, the sum is default to 0.

?SOLUTION
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int positive_sum (int array[] , int size ) {
    int sumOfPositive = 0;
    for (int  i = 0 ; i < size;i++) {
      if (array[i] > 0 ) {
        sumOfPositive += array[i];
      }
    }

    return sumOfPositive;
}

int main () {
  int array[] = {2 , 85 , -7 , 56};
  int size = sizeof(array) / sizeof(array[0]);
  int result = positive_sum (array , size);
  cout << "Sum = " << result << endl;

  return 0;
}

!Given a non-empty array of integers, return the result of multiplying the values together in order. Example:
[1, 2, 3, 4] => 1 * 2 * 3 * 4 = 24

?SOLUTION

#include <iostream>
#include <vector>

int multiplingArray(const std :: vector <int>&array) {
    int result = 1;
    for (int num : array) {
        result *= num;
    }
    return result;
}

int main () {
    std :: vector <int> array = {7, 661, 85};
    int showResult = multiplingArray(array);
    std :: cout << "Result = " << showResult << std :: endl;
    return 0;
}

!Timmy & Sarah think they are in love, but around where they live, they will only know once they pick a flower each.
!If one of the flowers has an even number of petals and the other has an odd number of petals it means they are in love.
!Write a function that will take the number of petals of each flower and return true if they are in love and false if they aren't.

?SOLUTION

#include <iostream>
using namespace std;

bool lovefunc(int f1, int f2) {
  bool flower1 = f1 % 2 ==0;
  bool flower2 = f2 % 2 ==0;

  return (flower1 && !flower2 ) || (!flower1 && flower2 );
}

int main () {
  int num1 , num2;
  std :: cout << "Enter the first num = " << num1 << std :: endl;
  std ::cin >> num1;

  std :: cout << "Enter the second num = " << num2 << std :: endl;
  std ::cin >> num2;

  bool inLove = lovefunc(num1, num2);

  if(inLove) {
    std :: cout << "They are in Love" << std :: endl;
  }else {
    std :: cout << "They aren't in Love" << std :: endl;
  }
  return 0;
}

!OR

bool lovefunc(int f1, int f2) {

  if(f1%2==0& f2%2!=0) {
     std::cout << "Just go ahead and fuck her";
    return true;
  }
  if(f2%2==0& f1%2!=0) {
     std::cout << "Just go ahead and fuck her";
    return true;
  }
  else {
    return false;
  }
}

!Clock shows h hours, m minutes and s seconds after midnight.
Your task is to write a function which returns the time since midnight in milliseconds.
Example:
h = 0
m = 1
s = 1
result = 61000

?SOLUTION

#include <iostream>
#include <string>
using namespace std;

int past (int h , int m , int s) {
  int milliseconds = 0;
  milliseconds += h * 3600000;
  milliseconds += m * 60000;
  milliseconds += s * 1000;
  return milliseconds;
}

int main () {
  int h = 0;
  int m = 12;
  int s = 26;
  int result = past ( h ,  m ,  s);
  std :: cout << "Result = " << result  << " in milliseconds"<< endl;
  return 0;
};


!Create a function finalGrade, which calculates the final grade of a student depending on two parameters: a grade for the exam and a number of completed projects.
This function should take two arguments: exam - grade for exam (from 0 to 100); projects - number of completed projects (from 0 and above);
This function should return a number (final grade). There are four types of final grades:
100, if a grade for the exam is more than 90 or if a number of completed projects more than 10.
90, if a grade for the exam is more than 75 and if a number of completed projects is minimum 5.
75, if a grade for the exam is more than 50 and if a number of completed projects is minimum 2.
0, in other cases

?SOLUTION

#include <iostream>
#include <string>
using namespace std;

int final_grade(int exam, int projects) {
    if (exam > 90 || projects > 10) {
        return 100;
    }
    else if (exam > 75 && projects >= 5) {
        return 90;
    }
    else if (exam > 50 && projects >= 2) {
        return 75;
    }
    else {
        return 0;
    }
}

int main() {
    int exam, projects;
    cout << "Enter your score of exam = " << endl;
    cin >> exam;
    cout << "Enter your num of projects = " << endl;
    cin >> projects;

    int result = final_grade(exam, projects);
    cout << "Your final grade = " << result << endl;
    return 0;
};


!Given an array of integers.
Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers.
0 0 is neither positive nor negative.
If the input is an empty array or is null, return an empty array.
Example
For input [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15], you should return [10, -65].

?SOLUTION

#include <iostream>
#include <vector>
using namespace std;

std::vector <int> countPositivesSumNegatives(std::vector <int> input) {
    if (input.empty()) {
        return {};
    }

    int positiveCount = 0;
    int negativeSum = 0;

    for (int num : input) {
        if (num > 0 ) {
            positiveCount++;
        }
        else if (num < 0 ) {
            negativeSum += num;
        }
    }

    return { positiveCount  ,negativeSum };
}

int main() {
    std::vector <int> arrray = {1 , 2 , 3 , 4 , 5 , 6 , 7 , -17 , -78 , -85};
    std::vector <int> result = countPositivesSumNegatives(arrray);
    std::cout << "[" << result[0] << ", " << result[1] << "]" << std ::endl;

    return 0;
}

!Write a function to split a string and convert it into an array of words.
Examples (Input ==> Output):
"Robin Singh" ==> ["Robin", "Singh"]

?SOLUTION

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

std::vector <std::string> string_to_array(const std::string& inputString) {
    std::vector <std::string> words; //! - string vector(вектор строк)
    std::istringstream iss(inputString); //! to split the input string into words based on whitespace
    std::string word; //!Each word is then appended

    while (iss >> word) {
        words.push_back(word);
    }

    return words;
}

int main() {
    std::string input = "Robin Singh";
    std::vector <std::string> result = string_to_array(input);

    for (const auto& word : result) {
        std::cout << word << " ";
    }

    return 0;
};

!This series of katas will introduce you to basics of doing geometry with computers.
!Point objects have attributes x and y.
Write a function calculating distance between Point a and Point b.
Tests compare expected result and actual answer with tolerance of 1e-6.

?SOLUTION

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Point { //! a way to group several related variables into one place (связаные переменные)
    double x;
    double y;
};

double distance_between_two_points(const Point& a, const Point& b) {
    double substractionX = b.x - a.x;
    double substractionY = b.y - a.y;

    return std :: sqrt(substractionX * substractionX + substractionY * substractionY);
}

int main() {
    Point pointA = {0.0 , 0.0};
    Point pointB = { 3.0 , 4.0 };

    double expectedDistance = {5.0};
    double realDistance = distance_between_two_points(pointA, pointB);

    if (std :: abs(expectedDistance - realDistance) < 1e-6) {
        std::cout << "Test passed" << std::endl;
    }
    else {
        std::cout << "Test failed" << std::endl;
    }

    return 0;
};

!Build a function that returns an array of integers from n to 1 where n>0.
Example : n=5 --> [5,4,3,2,1]

?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

std::vector <int> reverseSeq(int n ) {
    std::vector <int> result;
    for (int i = n; i >= 1; i--) {  //TODO for (int i = 1; i <= n; i++)  // return [1,2,3,4,5]
        result.push_back(i);
    }
    return result;
}

int main() {
    int num = 5;
    std::vector <int> array = reverseSeq(num);

    std::cout << "[";
    for (size_t i = 0; i < array.size(); i++) { //!size_t - the type returned by the sizeof operator and is frequently used in the standard library to describe sizes and counts
        std::cout << array[i];
        if (i != array.size() - 1 )  {
            std::cout << ",";
        }
    }

    std::cout << "]" << std::endl;
    return 0;
}

!Create a function called _if which takes 3 arguments: a value bool and 2 functions (which do not take any parameters): func1 and func2
When bool is truthy, func1 should be called, otherwise call the func2.
Example:
void TheTrue() { std::cout << "true" }
void TheFalse() { std::cout << "false" }
_if(true, TheTrue, TheFalse) in C++

?SOLUTION


#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

void the_Truth() {
    std::cout << "Boolean = true" << std::endl;
};

void the_False() {
    std::cout << "Boolean = false" << std::endl;
};

void _if(bool value , void (*func1)(), void (*func2)() ) {
    if (value) {
        func1();
    }
    else {
        func2();
    }
};

int main() {
    _if(false  , the_Truth , the_False);
    return 0;
};


!Given a string s, write a method (function) that will return true if its a valid single integer or floating number or false if its not.
!Valid examples, should return true:
isDigit("3")
isDigit("  3  ")
isDigit("-3.23")
!should return false:
isDigit("3-4")
isDigit("  3   5")
isDigit("3 5")
isDigit("zero")

?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

bool is_digit(std::string s) {
    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i]) == false) {
            return false;
        }
    }
    return true;
};

int main () {
      string str = "6790";
    if (isNumber(str)){
              cout << "Integer";
        }
    else{
             cout << "String";
        }
}

!OR

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <regex>
using namespace std;

bool isDigit(const std :: string &s) {
    std::regex pattern(R"(^\s*[-+]?\d*\.?\d+\s*$)");
    return std::regex_match(s, pattern);
}

int main() {
    std::cout << std::boolalpha;

    std::cout << isDigit("3") << std::endl;
    std::cout << isDigit("   3  ") << std::endl;

    std::cout << isDigit("3-4") << std::endl;
    std::cout << isDigit("zero") << std::endl;
    return 0;
};

!OR

#include <regex>

bool is_digit(std::string s) {
  return std::regex_match(s, std::regex("[+-]?([0-9]*[.])?[0-9]+"));
}


!Replace all vowel to exclamation mark in the sentence. aeiouAEIOU is vowel.
Examples
replace("Hi!") === "H!!"
replace("!Hi! Hi!") === "!H!! H!!"
replace("aeiou") === "!!!!!"
replace("ABCDE") === "!BCD!"

?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <regex>
using namespace std;

string replace(const string &s) {
    string newStr = s;
    for (char & letter : newStr) {
        if ((letter == 'A') || (letter == 'a')) {
            letter = '!';
        }
        else if ((letter == 'E') || (letter == 'e')) {
            letter = '!';
        }
        else if ((letter == 'I') || (letter == 'i')) {
            letter = '!';
        }
        else if ((letter == 'O') || (letter == 'o')) {
            letter = '!';
        }
        else if ((letter == 'U') || (letter == 'u')) {
            letter = '!';
        }
    }
    return newStr;
}

int main() {
    string str = "ABCDE";
    string result = replace(str);
    std::cout << "Result = " << result << std::endl;
    return 0;
};

!OR

#include <string>
#include <regex>

using namespace std;

string replace(const string &s)
{
  return regex_replace(s, regex("[aeiouAEIOU]"), "!");
}


!Given an unsorted array of 3 positive integers [ n1, n2, n3 ], determine if it is possible to form a Pythagorean Triple using those 3 integers.
A Pythagorean Triple consists of arranging 3 integers, such that:
a2 + b2 = c2
Examples
[5, 3, 4] : it is possible to form a Pythagorean Triple using these 3 integers: 32 + 42 = 52


#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <regex>
using namespace std;

bool PythagoreanTriple(const int a, const int b, const int c) {
    int degreeOfA = a * a;
    int degreeOfB = b * b;
    int degreeOfC = c * c;

    int sumOfAandB = degreeOfA + degreeOfB;
    int sumOfAandC = degreeOfA + degreeOfC;
    int sumOfBandC = degreeOfB + degreeOfC;

    if ((sumOfAandB == degreeOfC) || (sumOfAandC == degreeOfB) || (sumOfBandC == degreeOfA)) {
        return true;
    }
    else {
        return false;
    }
};

int main() {
    int sidesA = { 3 };
    int sidesB = { 4 };
    int sidesC = { 5 };
    int showResult = PythagoreanTriple(sidesA , sidesB , sidesC);
    std::cout << "Result = " << showResult << std::endl;
    return 0;
}

!OR

bool PythagoreanTriple(int a, int b, int c) {
  return a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b;
}

!Finish the solution so that it sorts the passed in array of numbers. If the function passes in an empty array or null/nil value then it should return an empty array.
For example:
sortNumbers({1, 2, 10, 50, 5}) // sholud return {1, 2, 5, 10, 50}

?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <regex>
using namespace std;

std::vector <int> solution(std::vector <int>& nums) {
    if (nums.empty()) {
        return {};
    }

    std::vector <int> sortedArray = nums;
    std::sort(sortedArray.begin(), sortedArray.end()); //!std :: sort - use to sort any form of data structure in a particular order
    return sortedArray;
};

int main() {
    std::vector <int> array = { 1, 856, 1448, 50, 5 };
    std::vector <int> sorted = solution(array);
    std::cout << "Result = ";
    for (int num : sorted) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
};


!An anagram is the result of rearranging the letters of a word to produce a new word (see wikipedia).
Note: anagrams are case insensitive
Complete the function to return true if the two arguments given are anagrams of each other; return false otherwise.
Examples
"foefet" is an anagram of "toffee"

?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <regex> //!include (std::transform)
using namespace std;

bool isAnagram(std::string test, std::string original) {
    std::string str1 = test;
    std::string str2 = original;

    std::transform(str1.begin() , str1.end() , str1.begin() ,:: tolower); //!converts both strings to lowercase using std::transform
    std::transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    std::sort(str1.begin() , str1.end()); //!sorts them using std::sort
    std::sort(str2.begin(), str2.end());

    return str1 == str2;
};

int main() {
    std::string str1 = "dumble";
    std::string str2 = "bumble";
    bool result = isAnagram(str1, str2);

    if (result) {
        std::cout << "There are anagrams" << std::endl;
    }
    else {
        std::cout << "There are not anagrams" << std::endl;
    }
    return 0;
};


!In this kata, you are asked to square every digit of a number and concatenate them.
For example, if we run 9119 through the function, 811181 will come out, because 92 is 81 and 12 is 1. (81-1-1-81)
Note: The function accepts an integer and returns an integer.

?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <regex>
using namespace std;

int square_digits(int number) {
    std::string result;
    while (number > 0 ) {
        int digit = number % 10; //!extracts the rightmost digit of number
        int squareDigit = digit * digit;
        result = std::to_string(squareDigit) + result;
        number / 10; //!to remove the rightmost digit
    }
    return std::stoi(result); //!convert string to integer
};

int main() {
    int num = 9119;
    int result = square_digits(num);
    std::cout << "Result = " << result << std::endl;
    return 0;
};


!Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. The string can contain any char.
Examples input/output:
XO("ooxx") => true
XO("xooxx") => false
XO("ooxXm") => true

?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <regex>
using namespace std;

bool XO(const std::string& str) {

    int amountOfX = 0;
    int amountOfO = 0;

    std::string lowerStr = str;
    std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);

    for (char & letter : lowerStr) {
        if (letter == 'x') {
            amountOfX++;
        }
        else if (letter == 'o') {
            amountOfO++;
        }
    }

    return amountOfX == amountOfO;
}

int main() {
    std::cout << XO("ooxx") << std::endl;
    std::cout << XO("xooxx") << std::endl;
    std::cout << XO("ooxXm") << std::endl;
    return 0;
};

!4 natural numbers are supplied for input
The program determines the 2 lowest and displays their sum
Negative numbers and fractions are not entered

?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <regex>
using namespace std;

int main() {
    int array[] = {12 , 45, 23,85};
    int size = sizeof(array) / sizeof(array[0]);
    int smallest1 = INT_MAX;
    int smallest2 = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (array[i] < smallest1) {
            smallest1 = array[i];
        }
    }

    for (int i = 0; i < size; i++) {
        if (array[i] < smallest2 && array[i] > smallest1) {
            smallest2 = array[i];
        }
    }

    std::cout << "Sum = " << smallest1 + smallest2 << std::endl;

    return 0;
};

!Complete the function that takes two integers (a, b, where a < b) and return an array of all integers between the input parameters, including them.
For example:
a = 1
b = 4
--> [1, 2, 3, 4]

?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <regex>
using namespace std;

std::vector <int> between(int start, int end) {
    std::vector <int> newArray;
    for (int i = start; i <=  end; i++) {
        newArray.push_back(i);
    }
    return newArray;
};

int main() {
    int start = 1;
    int end = 8;
    std::vector <int> newArray = between(start , end);

    std::cout << "[";
    for (int & nums : newArray) {
        std::cout << nums << ", ";
    }

    std::cout << "]" << std::endl;

    return 0;
};

!You have to write a function printer_error which given a string will return the error rate of the printer as a string representing a rational whose numerator is the number of errors and the denominator the length of the control string. Don't reduce this fraction to a simpler expression.
The string has a length greater or equal to one and contains only letters from ato z write in C++

?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <regex>
using namespace std;

class Printer {
public :
    static std::string printerError(const std::string& s) {
        int arrorCount = 0;
        for (char letter : s) {
            if (letter < 'a' ||  letter > 'm') {
                arrorCount++;
            }
        }
        return std::to_string(arrorCount) + "/" + std::to_string(s.length());
    }
};

int main() {
    Printer myObj;
    std::cout << myObj.printerError("aaaxbbbbyyhwawiwjjjwwm");

    return 0;
};

!Complete the function/method so that it returns the url with anything after the anchor (#) removed. Examples "www.codewars.com#about" --> "www.codewars.com"

?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <regex>
using namespace std;

std::string replaceAll(std::string str) {
    return str.substr(0, str.find("#")); // substr has 2 parameters position(defines the substring's start location) , length(indicates the number of characters in the substring)
};

int main() {
    string str = "www.codewars.com#about";
    string result = replaceAll(str);
    std::cout << "Result = " << result << std::endl;
    return 0;
};

!write a function which transform number 777 to 666 in C++
?SOLUTION
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <regex>
using namespace std;

int transform(int num) {
    std::string str = std::to_string(num);
    std::replace(str.begin(), str.end(), '7', '6');
    return std::stoi(str);
};

int main() {
    int num = 777;
    int newStr = transform(num);
    std::cout << "Result = " <<  newStr << std::endl;

    return 0;
};

TODO Unsigned Integers are just like integers but have the property that they don't have a + or - sign associated with them.




!Given an array of integers, remove the smallest value. Do not mutate the original array/list. If there are multiple elements with the same value, remove the one with a lower index. If you get an empty array/list, return an empty array/list.
Don't change the order of the elements that are left.
Examples
* Input: [1,2,3,4,5], output = [2,3,4,5]
* Input: [5,3,2,1,4], output = [5,3,2,4]

?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <regex>
using namespace std;

std::vector <unsigned int > removeSmallest(const std::vector <unsigned int>& numbers) {
    if (numbers.empty()) {
        return {};
    }

    std::vector<unsigned int> result(numbers);
    result.erase(std::min_element(result.begin(), result.end())); //!used to remove a single element or a range of elements from the container.
    return result;
};

int main() {
    std::vector <unsigned int> numbers = { 1 , 2 , 3  , 1, 4 , 5 };
    std::vector <unsigned int> result = removeSmallest(numbers);
    for (auto i : result) {
        std::cout << i << " ";
    };
    return 0;
};


!Your code will determine if the number passed is even (or not).
The function needs to return either a true or false.
Numbers may be positive or negative, integers or floats.
Floats with decimal part non equal to zero are considered UNeven for this kata
?SOLUTION
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <regex>
using namespace std;

bool isEven(double n ) {
    if (std :: fmod(n , 1.0) != 0.0 ) { //! check if number have a non-zero decimal part
        return false;
    }
    return static_cast<int> (n) % 2 == 0; //! transform number into integer
}

int main() {
    double number = 12.0;
    double result = isEven(number);
    std::cout << "Result = " << result << std::endl;
    return 0;
};

!Write a program that returns the girl's age (0-9) as an integer.
Assume the test input string is always a valid string.
For example, the test input may be "1 year old" or "5 years old". The first character in the string is always a number.
?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <regex>
using namespace std;

int get_age(const std::string& she_said) {
    return she_said[0] - '0'; // return first element into integer
}

int main() {
    std::string str = "5 years old";
    int age = get_age(str);
    std::cout << "Her age = " << age << std::endl;
    return 0;
};


!"I love you"
"a little"
"a lot"
"passionately"
"madly"
"not at all"
If there are more than 6 petals, you start over with "I love you" for 7 petals, "a little" for 8 petals and so on.
When the last petal was torn there were cries of excitement, dreams, surging thoughts and emotions.
Your goal in this kata is to determine which phrase the girls would say at the last petal for a flower of a given number of petals. The number of petals is always greater than 0.

?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <regex>
using namespace std;

std :: string how_much_i_love_you(int nb_petals) {
    const std::string arrayOfPhrace[]{
        "I love you",
        "a little",
        "a lot",
        "passionately",
        "madly",
        "not at all"
    };
    int number = (nb_petals - 1) % 6;
    return arrayOfPhrace[number];
};

TODO OR :
std :: string how_much_i_love_you(int nb_petals) {
    switch (nb_petals % 6 ){
    case 0 :
        return "not at all";
    case 1 :
        return "I love you";
    case 2 :
        return  "a little";
    case 3 :
        return "a lot";
    case 4 :
        return "passionately";
    case 5:
        return "madly";
    default:
        return "I don't";
    }
};

int main() {
    int number = 39;
    std::string result = how_much_i_love_you(number);
    std::cout << "Result = " << result << std::endl;
    return 0;
};


!Your task is to write a function that takes a string and return a new string with all vowels removed.
For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".
Note: for this kata y isn't considered a vowel.

?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <regex>
using namespace std;

std::string disemvowel(const std::string& str) {
    std :: regex newStr("[aeiouAEIOU]");
    return regex_replace(str, newStr, "");
};

int main() {
    std::string str = "Prepinsta";
    std::string result = disemvowel(str);
    std::cout << "Result = " << result << std::endl;
    return 0;
};


!You are going to be given a word. Your job is to return the middle character of the word. If the word's length is odd, return the middle character. If the word's length is even, return the middle 2 characters.
#Examples:
Kata.getMiddle("test") should return "es"
Kata.getMiddle("testing") should return "t"

?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
using namespace std;

std::string get_middle(std::string input) {
    int length = input.length();
    if (length % 2 == 0 ) {
        return input.substr(length / 2 - 1, 2);
    }
    return input.substr(length / 2 , 1);
};

int main() {
    std::string str = "testing";
    std::string result = get_middle(str);
    std::cout << "Result = " << result << std::endl;
    return 0;
};

!Your task is to write a function which returns the sum of a sequence of integers.
The sequence is defined by 3 non-negative values: begin, end, step.
If begin value is greater than the end, your function should return 0.
If end is not the result of an integer number of steps, then don't add it to the sum. See the 4th example below.

#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
using namespace std;

int sequenceSum(int start, int end, int step) {
    int sum = 0;
    for (int i = start; i <= end; i+= step) {
        sum += i;
    };
    return sum;
};

!OR
int basicOp(char op, int val1, int val2) {
    try {
        switch (op) {
            case '+' : return val1 + val2;
            case '-': return val1 - val2;
            case '*': return val1 * val2;
            case '/':
            if (val2 == 0) {
                throw std::invalid_argument("Can't divide by zero");
            }
            else {
                return val1 / val2;
            }
            default: throw std::invalid_argument("Invalid number");
        }
    }
    catch(const std :: invalid_argument& e){
        std::cerr << "Exeception " << e.what() << std::endl;
    }
}

int main() {
    int start = 2;
    int end = 6;
    int step = 2;
    int result = sequenceSum( start, end,  step);
    std::cout << "Result = " << result << std::endl;
    return 0;
};

!Write a function that takes an array of strings as an argument and returns a sorted array containing
the same strings, ordered from shortest to longest. For example, if this array were passed as an argument:
["Telescopes", "Glasses", "Eyes", "Monocles"] Your function would return the following array:
["Eyes", "Glasses", "Monocles", "Telescopes"] All of the strings in the array passed to your function will be different lengths,
so you will not have to decide how to order multiple strings of the same length

?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <regex>
#include <typeinfo>
using namespace std;

class Kata {
public :
    std::vector <std::string> sortByLength(std::vector <std::string> array) {
        sort(array.begin(), array.end(), [](string s1, string s2) { //!compare function which takes two arguments and In this case, the function compares the length of two strings and returns true if the length of the first string is less than that of the second string
            return s1.length() < s2.length();
            });
        return array;
    }
};

int main() {
    std::vector <std::string> arr = { "Telescopes", "Glasses", "Eyes", "Monocles" };
    Kata kata;
    vector <string> sortedArray = kata.sortByLength(arr);
    for (string s : sortedArray) {
        std :: cout << s << ", ";
    }
    return 0;
};


!Your goal is to return multiplication table for number that is always an integer from 1 to 10.
For example, a multiplication table (string) for number == 5 looks like below:
1 * 5 = 5
2 * 5 = 10
3 * 5 = 15
4 * 5 = 20
5 * 5 = 25
6 * 5 = 30
7 * 5 = 35
8 * 5 = 40
9 * 5 = 45
10 * 5 = 50

?SOLUTION
#include <iostream>
#include <string>
#include <vector>
#include <regex>
#include <typeinfo>
using namespace std;

std::string multi_table(int number) {
    string result = "";
    for (int i = 1; i <= 10; i++) {
        result += to_string(i) + " * " + to_string(number) + " = " + to_string(number * i);

        if (i != 10) {
            result += "\n";
        }
    };
    return result;
};

int main() {
    int number = 5;
    std::string result = multi_table(number);
    std::cout << "Result : " << std :: endl;
    std::cout << result;
    return 0;
};


!An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.
"Dermatoglyphics" --> true "aba" --> false "moOse" --> false (ignore letter case)
isIsogram "Dermatoglyphics" = true
isIsogram "moose" = false
isIsogram "aba" = false

?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

bool is_isogram(std::string& str) {
    if (str.empty()) {
        return true;
    };

    std::string newStr = str;
    std::transform(newStr.begin(), newStr.end() , newStr.begin(), :: tolower);

    std::unordered_set<char> seenLetter; //!used to check if an element is present in the container or not  AND  store unique elements in any order

    for (char letter : newStr) {
        if (seenLetter.find(letter) != seenLetter.end()) {
            return false;
        }
        else {
            seenLetter.insert(letter); //!used to insert elements or values into a vector container
        }
    }

    return true;

};

int main() {
    std::string input = "moose";
    bool result = is_isogram(input);
    if (result) {
        std::cout << "This string does not has repetitive letters";
    }
    else {
        std::cout << "This string has repetitive letters";
    }
    return 0;
};


!Given two integers a and b, which can be positive or negative, find the sum of all the integers between and including them and return it. If the two numbers are equal return a or b.
Examples (a, b) --> output (explanation)
(1, 0) --> 1 (1 + 0 = 1)
(1, 2) --> 3 (1 + 2 = 3)
(0, 1) --> 1 (0 + 1 = 1)
(1, 1) --> 1 (1 since both are same)
?SOLUTION
#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
using namespace std;

int get_num(int a , int b ) {
    int sum = 0;
    int start = std::min(a, b);
    int end = std::max(a, b);

    for (int i = start; i <= end; i++) {
        sum+= i;
    }

    return sum;
};

int main() {
    int a = -5;
    int b = 10;
    int result = get_num( a,  b);
    std::cout << "result = " << result << std::endl;
    return 0;
};




?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <unordered_map>
#include <typeinfo>
using namespace std;

std::tuple<int, int> two_num(const std::vector <int>& numbers, int target) {

    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (numbers[i] + numbers[j] == target) {
                return std::make_tuple(i, j);
            }
        }
    }

    return std::make_tuple(-1, -1);

};

int main() {
    std::vector <int > numbers = { 2, 25, 11, 15 , 7 };
    int target = 9;
    std::tuple <int, int> result = two_num(numbers, target);
    if (std :: get<0> (result) != -1 && std :: get<1>(result) != -1) {
        std::cout << "Result = " << std::get<0>(result) << ", " << std::get<1>(result) << std::endl; //return position in array
        std::cout << "Value = " << numbers[std::get<0>(result)] << ", " << numbers[std::get<1>(result)] << std::endl; //return numbers which return in sum 9
    }
    else {
        std::cout << "Do not have solutions" << std::endl;
    }

    return 0;
};

!OR



#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <unordered_map>
#include <typeinfo>
using namespace std;

std::vector <int> twoSum(const std :: vector <int> &numbers , int target) {
    int size = numbers.size();
    std::vector <int> result(2, -1);

    if (size < 2 ) {
        return result;
    }
    else {
        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size; j++) {
                if ((target - numbers[i])  == numbers[j]) {
                    result[0] = i;
                    result[1] = j;
                    return result;
                }
            }
        }
    }
    return result;
};

int main() {
    std::vector <int > numbers = { 2 ,  11,7 , 15 };
    int target = 10;

    std::vector <int> indices = twoSum(numbers, target);
    if (indices[0] != -1 && indices[1] != -1) {
        std::cout << "Indices = " << indices[0] << ", " << indices[1] << std::endl;
        std::cout << "Values = " << numbers[indices[0]] << ", " << numbers[indices[1]];
    }
    else {
        std::cout << "Error 404" << std::endl;
    }

    return 0;
};

!OR

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
  std::pair<std::size_t, std::size_t> ret;
  int len;

  len = numbers.size();
  for(int i = 0; i < len; i++){
    for (int j = i + 1; j < len; j++){
      if (numbers[i] + numbers[j] == target)
        {
          std::cout << numbers[i] + numbers[j] << " " << i << " "<< j;
          ret.first = i;
          ret.second = j;
          return ret;
      }
    }
  }
  return ret;
}

!complete the function which converts hex number (given as a string) to a decimal number
?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <sstream>
using namespace std;

int hexToDec(std::string hexString) {
    int n;
    std::istringstream(hexString) >> std::hex >> n;

    return n;
}

int main() {
    std :: string n = "0x265";
    int result = hexToDec(n);
    std::cout << "Result = " << result << std::endl;
    return 0;
};


!There is an array with some numbers. All numbers are equal except for one. Try to find it!
find_uniq(std::vector<float>{1, 1, 1, 2, 1, 1});  // --> 2
find_uniq(std::vector<float>{0, 0, 0.55, 0, 0});  // --> 0.55
It’s guaranteed that array contains at least 3 numbers.
The tests contain some very huge arrays, so think about performance
?SOLUTION

#include <iostream>
#include <string>
#include <vector>
using namespace std;

float find_uniq( const std::vector <float>& v) {
    float firstNum = v[0];
    float secondNum = v[1];

    if (firstNum != secondNum) {
        float thirdNum = v[2];
        return (firstNum != thirdNum) ? firstNum : secondNum;
    }
    // Scan the array to find a different value
    for (size_t i = 2; i < v.size(); i++) {
        if (v[i] != firstNum) {
            return v[i];
        }
    }

    return -1;
};

!OR

int stray(std::vector<int> numbers)
{
    //using a range based for loop to iterate over vector
    int count;
    for (auto& it : numbers)
    {
        count = std::count(numbers.begin(), numbers.end(), it);
        if (count == 1)
            return it;
    }
    return 0;
};


!OR

float find_uniq( const std::vector <float>& v) {
    for (auto i : v) {
        if (i == v[0] && (v[0] == v[1] || v[0] == v[v.size() - 1])) {

        }
        else {
            return i;
        }
    }
};

int main() {
    std::vector <float> array = { 0, 0, 0.55, 0, 0 };
    float result = find_uniq(array);
    std::cout << "Result = " << result << std::endl;
    return 0;
}

Write a function that accepts an integer n and a string s as parameters, and returns a string of s repeated exactly n times.
Examples (input -> output)
6, "I"     -> "IIIIII"
5, "Hello" -> "HelloHelloHelloHelloHello"

?SOLUTION

#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::string repeat_str(size_t repeat, const std::string& str) {
    std::string newStr;
    newStr.reserve(str.size() * repeat);
    while (repeat--) {
        newStr += str;
    }
    return newStr;
};

int main() {
    std::string str = "HI";
    size_t repeat = 10;
    std::string result = repeat_str(repeat, str);
    std::cout << "Result = " << result << std::endl;
    return 0;
};


!The solution would work like the following:
get_even_numbers({2,4,5,6}) => {2,4,6}
?SOLUTION

std::vector <int> get_even_numbers(const std::vector <int>& arr) {
    std::vector<int> even_numbers;

    for (int num : arr) {
        if (num % 2 == 0) {
            even_numbers.push_back(num);
        }
    }

    return even_numbers;
};

!OR
void removeOdd(std::vector<int>& arr) {
    int curr = 0;
    for (int i = 0; i < (int)arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            arr[curr++] = arr[i];
        }
    }
    arr.resize(curr); //change size of vector
};

int main() {
    std::vector <int> arr = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9};
    std::vector <int> result = get_even_numbers(arr);

    std::cout << "Even numbers : ";
    for (int num : result) {
        std::cout << num << " ";
    }

    std::cout << std::endl;
    return 0;
}



!Create a function that returns the name of the winner in a fight between two fighters.
Each fighter takes turns attacking the other and whoever kills the other first is victorious. Death is defined as having health <= 0.
Each fighter will be a Fighter object/instance. See the Fighter class below in your chosen language.
Both health and damagePerAttack (damage_per_attack for python) will be integers larger than 0. You can mutate the Fighter objects.
Your function also receives a third argument, a string, with the name of the fighter that attacks first.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Fighter {
private:
    std::string name;
    int health;
    int damagePerAttack;
public:
    Fighter(std::string name, int health, int damagePerAttack) {
        this->name = name;
        this->health = health;
        this->damagePerAttack = damagePerAttack;
    }

    ~Fighter() {}

    std::string getName()const  {
        return name;
    }

    int getHealth()const {
        return health;
    }

    int getdamagePerAttack() const {
        return damagePerAttack;
    }

    void setHealth(int value) {
        health = value;
    }
};

std::string declareWinner(Fighter fighter1, Fighter fighter2, std :: string firstAttacker ) {

    Fighter* attacker = &fighter1;
    Fighter* defender = &fighter2;

    if (firstAttacker != fighter1.getName()) {
        attacker =  & fighter2;
        defender = &fighter1;
    }

    while (true) {
        defender->setHealth(defender->getHealth() - attacker->getdamagePerAttack());
        if (defender->getHealth() <= 0) {
            return attacker->getName();
        }

        std::swap(attacker, defender);
    }
};

!OR

std::string declareWinner(Fighter fighter1, Fighter fighter2, std :: string firstAttacker ) {
    Fighter* first = fighter1->getName() == firstAttacker ? fighter1 : fighter2;
    Fighter* second = fighter1->getName() != firstAttacker ? fighter1 : fighter2;

    while (true)
    {
        second->setHealth(second->getHealth() - first->getDamagePerAttack());

        if (second->getHealth() <= 0)
        {
            return first->getName();
        }

        first->setHealth(first->getHealth() - second->getDamagePerAttack());

        if (first->getHealth() <= 0)
        {
            return second->getName();
        }
    }
};

int main() {
    Fighter max ("Max" , 10 , 2);
    Fighter lew("Lew", 10, 5);

    std::string firstAttacker = "Max";
    std::string result = declareWinner(max , lew , firstAttacker);
    std::cout << "Winner = " << result << std::endl;
    return 0;
}

!Your task is to write function factorial.
?SOLUTION
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long factorial(int n) {
    unsigned long long result = 1;

    if (n == 0 || n == 1) {
        return 1;
    }

    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
};

int main() {
    int number = 20;
    unsigned long long result = factorial(number);
    std::cout << "Factorial = " << result << std::endl;
    return 0;
}

!In this simple Kata your task is to create a function that turns a string into a Mexican Wave.
You will be passed a string and you must return that string in an array where an uppercase
letter is a person standing up.

?SOLUTION
#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::vector <std::string> wave(std :: string str) {
    std::vector <std::string> wave;
    for (size_t i = 0; i < str.length(); i++) {
        if (std :: isalpha(y[i])) {
            std::string waveStr = str;
            waveStr[i] = std::toupper(str[i]);
            wave.push_back(waveStr);
        }
    }
    return wave;
};

int main() {
    std::string str = "hello";
    std::vector <std::string> result = wave(str);
    std::cout << "Result = " << std::endl;
    for (const std :: string & waveStr : result){
        std::cout << waveStr << std::endl;
    }
    return 0;
}


!A child is playing with a ball on the nth floor of a tall building. The height of this floor above ground level, h, is known.
He drops the ball out of the window. The ball bounces (for example), to two-thirds of its height (a bounce of 0.66).
His mother looks out of a window 1.5 meters from the ground.
How many times will the mother see the ball pass in front of her window (including when it's falling and bouncing?
Three conditions must be met for a valid experiment:
Float parameter "h" in meters must be greater than 0
Float parameter "bounce" must be greater than 0 and less than 1
Float parameter "window" must be less than h.
If all three conditions above are fulfilled, return a positive integer, otherwise return -1.

Examples:
- h = 3, bounce = 0.66, window = 1.5, result is 3
- h = 3, bounce = 1, window = 1.5, result is -1
(Condition 2) not fulfilled).

?SOLUTION
class Bouncingball {
public :
    static int bouncingBall(double h, double bounce, double window) {
        if (h <= 0 ||  bounce <= 0 ||  bounce >= 1 ||  window < h) { //! cheking the conditions
            return -1; //if not return -1;
        }
        int count = 1;
        double height = h * bounce; // h - is a height of previous bounce and , bounce- is the fraction of the ball’s height it bounces back up after hitting the ground.
        while (height > window ) {
            count += 2;
            height *= bounce;
        }
        return count;
    }
};


!OR
int Bouncingball::bouncingBall(double h, double bounce, double window)
{
    if ((h <= 0) || (window >= h) || (bounce <= 0) || (bounce >= 1)){
        return -1;
    }
    int seen = -1;
    while (h > window)
    {
        seen += 2;
        h = h * bounce;
    }
    return seen;
};

int main() {
    double h = 3.0;
    double bounce = 0.66;
    double window = 1.5;
    int result = bouncingBall(h, bounce, window);
    std::cout << "Result = " << result << std::endl;
    return 0;
}


!Given a string, capitalize the letters that occupy even indexes and odd indexes separately, and return as shown below. Index 0 will be considered even.
For example, capitalize("abcdef") = ['AbCdEf', 'aBcDeF']. See test cases for more examples.
The input will be a lowercase string with no spaces.
?SOLUTION
#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;

std::pair <std::string, std :: string > capitalize(const std::string& s) {
    std::string evenLetter = s;
    std::string oddLetter = s;

    for (size_t i = 0; i < s.length(); i++) {
        if (i % 2 == 0) {
            evenLetter[i] = std::toupper(s[i]);
        }
        else {
            oddLetter[i] = std::toupper(s[i]);
        }
    }

    return  std::make_pair(evenLetter , oddLetter);
};


int main() {
    std::string str = "abcdef";
    std::pair <std::string , std :: string> result = capitalize(str);
    std::cout << "Result = " << std::endl;
    std::cout << result.first << std::endl;
    std::cout << result.second << std::endl;
    return 0;
}



!Given an array of positive integers (the weights of the people),
return a new array/tuple of two integers, where the first one is the total weight of team 1, and the second one is the total weight of team 2.

Input >> Output Examples
rowWeights([13, 27, 49])  ==>  return (62, 27)
Explanation:
The first element 62 is the total weight of team 1, and the second element 27 is the total weight of team 2.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

pair <int, int> rowWeights(const vector <int> &weights) {
    int sumOfFirstTeam = 0;
    int sumOfSecondTeam = 0;

    for (size_t i = 0; i < weights.size(); i++ ) {
        if (i % 2 == 0) {
            sumOfFirstTeam += weights[i];
        }
        else {
            sumOfSecondTeam += weights[i];
        }
    }

    return std::make_pair(sumOfFirstTeam , sumOfSecondTeam);
};

int main() {
    std :: vector <int> array = { 13, 27, 49 };
    std::pair <int, int> result = rowWeights(array);
    std::cout << "Weight of team first = " << result.first << std::endl;
    std::cout << "Weight of team second = " << result.second << std::endl;
    return 0;
}


!In this Kata, you will be given a string that may have mixed uppercase and lowercase letters and your task is to convert that string to either lowercase only or uppercase only based on:
make as few changes as possible.
if the string contains equal number of uppercase and lowercase letters, convert the string to lowercase.
For example:
solve("coDe") = "code". Lowercase characters > uppercase. Change only the "D" to lowercase.

#include <iostream>
#include <string>
#include <vector>
using namespace std;
?SOLUTION
std::string slove(const std :: string& str) {
    int upper = 0;
    int lower = 0;

    for (char letter : str ) {
        if (isupper(letter)) {
            upper++;
        }
        else {
            lower++;
        }
    }
    std::string result = str;
    if (upper > lower) {
        std::transform(result.begin(), result.end(), result.begin(), ::toupper);
    }
    else {
        std::transform(result.begin(), result.end(), result.begin(), ::tolower);
    }

    return result;
}

int main() {
    std::string str = "coDe";
    std::string result = slove(str);
    std::cout << "Result = " << result << std::endl;
    return 0;
}

!It's pretty straightforward. Your goal is to create a function that removes the first and last characters of a string. You're given one parameter, the original string.
You don't have to worry with strings with less than two characters.

#include <iostream>
#include <string>
#include <vector>
#include <regex>
#include <cctype>
using namespace std;

string sliceString(string str){
    str.erase(0, 1);
    str.erase(str.size() - 1);
    return str;
}

int main() {
    std::string str = "hello";
    std::string result = sliceString(str);
    std::cout << "Result = " << result << std::endl;
    return 0;
}


!You will be given a list of strings. You must sort it alphabetically (case-sensitive, and based on the ASCII values of the chars) and then return the first value.
The returned value must be a string, and have "***" between each of its letters.
You should not remove or add elements from/to the array.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

std::string twoSrot(std::vector <std::string>& s) {
    std::vector <std :: string> sortedStr = s;
    std::sort(sortedStr.begin(), sortedStr.end());

    std::string newStr;
    for (size_t i = 0; i < sortedStr[0].length();i++) {
        if (i != 0) {
            newStr += "***";
        }
        newStr += sortedStr[0][i];
    }
    return newStr;
};

int main() {
    std:: vector <std :: string> str = { "apple", "banana", "grape", "cherry", "date" };
    std::string result = twoSrot(str);
    std::cout << "Result = " << result << std::endl;
    return 0;
}


!Your task, is to create N×N multiplication table, of size provided in parameter.
For example, when given size is 3:
1 2 3
2 4 6
3 6 9
For the given example, the return value should be:
[[1,2,3],[2,4,6],[3,6,9]] In C++
?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

std::vector <std::vector <int> > generateMultiplicationTable(int size) {
    std::vector <std::vector <int>> table(size , std :: vector <int> (size));

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            table[i][j] = (i + 1) * (j + 1);
        }
    }
    return table;
}

int main() {
    int size = 12;
    std::vector <std::vector <int> > result = generateMultiplicationTable(size);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << result[i][j] << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}

!A Rule of Divisibility by 13
Task:
Call thirt the function which processes this sequence of operations on an integer n (>=0). thirt will return the stationary number.
thirt(1234567) calculates 178, then 87, then 87 and returns 87.
thirt(321) calculates 48, 48 and returns 48
?SOLUTION
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

static long long thirt(long long n) {
    static const int pattern[] = { 1 , 10 , 9 , 12 , 3 , 4 };
    static const std::size_t patternSize = sizeof(pattern) / sizeof(pattern[0]);

    long long remainder = n;
    long long lastRemainder = 0;

    while (remainder != lastRemainder) {
        lastRemainder = remainder;
        remainder = 0;

        std::size_t patternIndex = 0;

        for (long long r = lastRemainder; r > 0; r /= 10) {
            remainder += (r % 10) * pattern[patternIndex];
            ++patternIndex %= patternSize;
        }
    }
    return remainder;
}


int main() {
    long long num = 1234567;
    int result = thirt(num);
    std::cout << "Result = " << result << std::endl;
    return 0;
}

!Convert an array of strings to array of numbers
?SOLUTION
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

std::vector <float> to_float_array(const std :: vector <std :: string> &arr) {
    std::vector <float> newArr;
    for (const std :: string & str : arr) {
        float num;
        std::istringstream(str) >> num;
        newArr.push_back(num);
    }
    return newArr;
}


int main() {
    std::vector <std::string> input = { "123", "456", "789" };
    std::vector <float> result = to_float_array(input);

    std::cout << "Result = ";
    for (float num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}

!There is a queue for the self-checkout tills at the supermarket. Your task is write a function to calculate the total time required for all the customers to check out!
input
customers: an array of positive integers representing the queue. Each integer represents a customer, and its value is the amount of time they require to check out.
n: a positive integer, the number of checkout tills.
output
The function should return an integer, the total time required.

Examples
queueTime(std::vector<int>{5,3,4}, 1)
// should return 12
// because when n=1, the total time is just the sum of the times

queueTime(std::vector<int>{10,2,3,3}, 2)
// should return 10
// because here n=2 and the 2nd, 3rd, and 4th people in the
// queue finish before the 1st person has finished.

queueTime(std::vector<int>{2,3,10}, 2)
// should return 12

#include <iostream>
#include <string>
#include <vector>
using namespace std;

long queueTime(std :: vector <int> customers , int n ) {
    std::vector <long> registers (n, 0); //!register with 0 time

    for (int customerTime : customers) {
        auto minRegister = std::min_element(registers.begin(), registers.end()); //!find register with minimum total time and assing the cunstomer
        *minRegister += customerTime;
    }

    long maxTime = *std::max_element(registers.begin() , registers.end());//!max total time
    return maxTime;
}

int main() {
    std::vector <int> customers = { 2,3,10 };
    int n = 2;
    long time = queueTime(customers, n);
    std::cout << "Time = " << time << std::endl;

    return 0;
}




!long queueTime(std::vector<int> customers, int n){
  long total = 0; //total time taken for the whole process

  if (n==1)   //Only one checkout till so the total time taken is the addition of time taken by each customer
  {
    for(int i=0; i<customers.size(); i++)
    {
      total = total + customers[i];
    }
  }

  else if(n==0)  //No checkout Tills
  {
    total = 0;
  }

  else if(customers.size()<n)    //The max time taken by a customer should be the ans
  {
    long max = customers[0];
    for(int i = 1; i<customers.size(); i++)
    {
      if (max < customers[i])
      {
        max = customers[i];
      }
    } total = max;
  }

  else
  {
    int size = customers.size();
here:;
    for (int j=0; j<size; j++)  //Shifting
      {
        if(customers[j] == 0)
        {
          for (int k=j; k<size; k++)
          {
            customers[k] = customers[k+1];
          }
          size = size - 1;
          j--;  //redirecting the pointer to move back
        }
      }
      long min = customers[0];

    if (size==0)
      {
          goto jump;
      }

    for (int i=1; i<n; i++)  //Getting the min time of a customer from all those who are active
    {
      if(min > customers[i] && customers[i] != 0)
      {
        min = customers[i];
      }
    }

    total += min;  //Adding the min time to the total

    for (int i=0; i<n; i++)  //Subtracting the min time from all the customers that are active
    {
      customers[i] = customers[i] - min;
    }
    goto here;
jump:;
  }
  return total;
}





!We need to write a function that takes this collection and returns the number of points our team (x) got in the championship by the rules given above.
Notes:
our team always plays 10 matches in the championship
0 <= x <= 4
0 <= y <= 4

#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

int points(const std::array <std::string, 10>& games) {
    int totalSum = 0;
    for (const std :: string match : games ) {
        int x = match[0] - '0';
        int y = match[2] - '0';

        if (x > y) {
            totalSum += 3;
        }
        else if (x = y ) {
            totalSum += 1;
        }
        else {
            totalSum += 0;
        }
    }
    return totalSum;
}

int main() {
    std::array<std::string, 10> matchResults = { "3:1", "2:2", "0:1", "4:0", "1:2", "3:3", "2:1", "0:0", "1:3", "4:4" };
    int result = points(matchResults);
    std::cout << "Result = " << result << std::endl;
    return 0;
}


!You probably know the "like" system from Facebook and other pages. People can "like" blog posts, pictures or other items. We want to create the text that should be displayed next to such an item.
Implement the function which takes an array containing the names of people that like an item. It must return the display text as shown in the examples:
[]                                -->  "no one likes this"
["Peter"]                         -->  "Peter likes this"
["Jacob", "Alex"]                 -->  "Jacob and Alex like this"
["Max", "John", "Mark"]           -->  "Max, John and Mark like this"
["Alex", "Jacob", "Mark", "Max"]  -->  "Alex, Jacob and 2 others like this"
?SOLUTION
#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

std::string likes(const std :: vector <std :: string> &names) {
    if (names.empty()) {
        return "no one likes this";
    }
    else {
        for (size_t name = 0; name < names.size(); name++) {
            if (names.size() == 1 ) {
                return names[0] +  " likes this";
            }
            else if (names.size() == 2) {
                return names[0] + " and " + names[1] + " like this";
            }
            else if (names.size() == 3 ) {
                return names[0] + ", " + names[1] + " and " + names[2] + " like this";
            }
            else if (names.size() >= 4 ) {
                return names[0] + ", " + names[1] + " and " + std::to_string(names.size() - 2) + " others like this";
            }
        }
    }
}

int main() {
    std::vector <std::string>  names = { "Alex", "Jacob", "Mark", "Max" };
    std::string result = likes(names);
    std::cout << "Result = " << result << std::endl;
    return 0;
}

!Your team is writing a fancy new text editor and you've been tasked with implementing the line numbering.
Write a function which takes a list of strings and returns each line prepended by the correct number.
The numbering starts at 1. The format is n: string. Notice the colon and space in between.
Examples: (Input --> Output)
[] --> []
["a", "b", "c"] --> ["1: a", "2: b", "3: c"]
?SOLUTION
#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

std::vector <std::string> number(const std::vector <std::string>& lines) {
    std::vector <std::string> newArr;
    if (lines.empty()) {
        return {};
    }
    else {
        for (size_t i = 0; i < lines.size(); i++) {
            newArr.push_back(std::to_string(i + 1) + ": " + lines[i]);
        }
    }
    return newArr;
}

int main() {
    std::vector <std::string> lines = { "a", "b", "c" };
    std::vector <std::string> result = number(lines);
    for (const std::string& number : result) {
        std::cout << number << std::endl;
    }
    return 0;
}

!In a small town the population is p0 = 1000 at the beginning of a year. The population regularly increases by 2 percent per year and moreover 50 new inhabitants per year come to live in the town. How many years does the town need to see its population greater or equal to p = 1200 inhabitants?
At the end of the first year there will be:
1000 + 1000 * 0.02 + 50 => 1070 inhabitants

At the end of the 2nd year there will be:
1070 + 1070 * 0.02 + 50 => 1141 inhabitants (** number of inhabitants is an integer **)

At the end of the 3rd year there will be:
1141 + 1141 * 0.02 + 50 => 1213

It will need 3 entire years.

?SOLUTION
#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

class Arge {
public:
    static int nbYear(int p0, double percent, int aug, int p) {
        int population_perc = p0 * (percent / 100);
        int population_total = p0 + (population_perc)+aug;
        int numberOfYear = 1;
        while (population_total < p) {
            population_perc = population_total * (percent / 100);
            population_total = population_total + population_perc + aug;
            numberOfYear += 1;
        }
        return numberOfYear;
    }
};

int main() {
    int p0;
    double percent;
    int aug;
    int p;
    cout << "Enter the population : ";
    cin >> p0 ;
    cout << "Enter the percent : ";
    cin >> percent;
    cout << "Enter the aug : ";
    cin >> aug;
    cout << "Enter the future population : ";
    cin >> p;
    Arge myobj;
    int result = myobj.nbYear(p0 , percent , aug , p);
    std::cout << "How many years you need to complete the task: " <<  result << std::endl;
    return 0;
}

!You are given two arrays a1 and a2 of strings. Each string is composed with letters from a to z. Let x be any string in the first array and y be any string in the second array.
Find max(abs(length(x) − length(y)))
If a1 and/or a2 are empty return -1 in each language except in Haskell (F#) where you will return Nothing (None).

Example:
a1 = ["hoqq", "bbllkw", "oox", "ejjuyyy", "plmiis", "xxxzgpsssa", "xxwwkktt", "znnnnfqknaz", "qqquuhii", "dvvvwz"]
a2 = ["cccooommaaqqoxii", "gggqaffhhh", "tttoowwwmmww"]
mxdiflg(a1, a2) --> 13

?SOLUTION
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;

class MaxDifflength {
public :
    static int mxdiflg(std::vector <std::string>& a1, std::vector<std::string>& a2) {
        if ((a1.empty() && a2.empty() || (a1.empty() || a2.empty()))  ) {
            return -1;
        }
        int maxLength = 0;

        for (const std :: string x : a1) {
            for (const std::string y : a2) {
                int maxDiffrence = std::abs(static_cast <int> (x.length()) - static_cast <int> (y.length()));
                maxLength = std::max(maxLength , maxDiffrence);
            }
        }
        return maxLength;
    }
};

int main() {
    std::vector <std::string > arr1 = { "hoqq", "bbllkw", "oox", "ejjuyyy", "plmiis", "xxxzgpsssa", "xxwwkktt", "znnnnfqknaz", "qqquuhii", "dvvvwz" };
    std::vector <std::string> arr2 = { "cccooommaaqqoxii", "gggqaffhhh", "tttoowwwmmww" };
    MaxDifflength myObj;
    int result = myObj.mxdiflg(arr1 , arr2);
    std::cout << "REsult = " << result << std::endl;
    return 0;
}

!We want to know the index of the vowels in a given word, for example, there are two vowels in the word super (the second and fourth letters).
So given a string "super", we should return a list of [2, 4].
Some examples:
Mmmm  => []
Super => [2,4]
Apple => [1,5]
YoMama -> [1,2,4,6]
?SOLUTION
#include <iostream>
#include <string>
#include <vector>

std::vector <int> vowelLindeces(const std :: string& word) {
    const std::string vowels  = "aeiouyAEIOUY";
    std::vector <int> indices;
    for (size_t i = 0; i < word.length(); i++) {
        if (vowels.find(word[i]) != std :: string :: npos) {
            indices.push_back(i + 1);
        }
    }
    return indices;
}

int main() {
    std::string word = "Super";
    std::vector <int> result = vowelLindeces(word);
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}

!Your task is to return the sum of Triangular Numbers up-to-and-including the nth Triangular Number.
Triangular Number: "any of the series of numbers (1, 3, 6, 10, 15, etc.) obtained by continued summation of the natural numbers 1, 2, 3, 4, 5, etc."
[01]
02 [03]
04 05 [06]
07 08 09 [10]
11 12 13 14 [15]
16 17 18 19 20 [21]
?SOLUTION
#include <iostream>
#include <string>
using namespace std;

int sumTriangularNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * (i + 1) / 2;
    }
    return sum;
}

int main() {
    int num = 6;
    int result = sumTriangularNumbers(num);
    cout << "Result = " << result << endl;
    return 0;
}

!Given two arrays a and b write a function comp(a, b) (orcompSame(a, b)) that checks whether the two arrays have the "same" elements, with the same multiplicities (the multiplicity of a member is the number of times it appears). "Same" means, here, that the elements in b are the elements in a squared, regardless of the order.
!Examples
Valid arrays
a = [121, 144, 19, 161, 19, 144, 19, 11]
b = [121, 14641, 20736, 361, 25921, 361, 20736, 361]
comp(a, b) returns true because in b 121 is the square of 11, 14641 is the square of 121, 20736 the square of 144, 361 the square of 19, 25921 the square of 161, and so on. It gets obvious if we write b's elements in terms of squares:

a = [121, 144, 19, 161, 19, 144, 19, 11]
b = [11*11, 121*121, 144*144, 19*19, 161*161, 19*19, 144*144, 19*19]
Invalid arrays
If, for example, we change the first number to something else, comp is not returning true anymore:

a = [121, 144, 19, 161, 19, 144, 19, 11]
b = [132, 14641, 20736, 361, 25921, 361, 20736, 361]
comp(a,b) returns false because in b 132 is not the square of any number of a.

a = [121, 144, 19, 161, 19, 144, 19, 11]
b = [121, 14641, 20736, 36100, 25921, 361, 20736, 361]
?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Same {
public :
    static bool comp(std :: vector <int> &a , std :: vector <int> &b){
        if (a.size() != b.size()) {
            return false;
        }

        std::transform(a.begin(), a.end(), a.begin(), [](int x) {return x * x; });
        std::sort(a.begin(), a.end());
        std::sort(b.begin(), b.end());

        return a == b;
    }
};

!OR

class Same {
public:
  static bool comp(std::vector<int>, std::vector<int>);
};

bool Same::comp(std::vector<int> a, std::vector<int> b) {
  for (auto& v : a) {
    v = v * v;
  }
  std::sort(a.begin(), a.end());
  std::sort(b.begin(), b.end());
  return a == b;
}

int main() {
    std::vector <int> a = { 121, 144, 19, 161, 19, 144, 19, 11 };
    std::vector <int> b = { 121, 14641, 20736, 361, 25921, 361, 20736, 361 };

    if (Same ::comp (a, b)) {
        std::cout << "True" << std::endl;
    }
    else {
        std::cout << "False" << std::endl;
    }

    return 0;
}


!Given an array (arr) as an argument complete the function countSmileys that should return the total number of smiling faces.
!Rules for a smiling face:
Each smiley face must contain a valid pair of eyes. Eyes can be marked as : or ;
A smiley face can have a nose but it does not have to. Valid characters for a nose are - or ~
Every smiling face must have a smiling mouth that should be marked with either ) or D
No additional characters are allowed except for those mentioned.

Valid smiley face examples: :) :D ;-D :~)
Invalid smiley faces: ;( :> :} :]

Example
countSmileys([':)', ';(', ';}', ':-D']);       // should return 2;
countSmileys([';D', ':-(', ':-)', ';~)']);     // should return 3;
countSmileys([';]', ':[', ';*', ':$', ';-D']); // should return 1;

?SOLUTION
#include <iostream>
#include <string>
#include <vector>

int countSmileys(std::vector <std::string> &arr) {
    if (arr.empty()) {
        return 0;
    }
    int sumOfSmileys = 0;

    for (std :: string s : arr) {
        if (s.length() == 2) {
            if ((s[0] == ':' || s[0] == ';') && (s[1] == ')' || s[1] == 'D')) {
                sumOfSmileys++;
            }
        }
        else if (s.length() == 3) {
            if ((s[0] == ':' || s[0] == ';') && (s[1] == '-' || s[1] == '~') && ((s[2] == ')' || s[2] == 'D'))) {
                sumOfSmileys++;
            }
        }
    }
    return sumOfSmileys;
}

!OR

#include <regex>

int countSmileys(std::vector<std::string> arr){
  int count = 0;
  std::regex smiles_regex("[:|;](-|~)?[)|D]");

  for (auto &smile : arr) {
    if (std::regex_match(smile, smiles_regex))
      count++;
  }

  return count;
}

int main() {
    std::vector <std::string> arr = { ":)", ";(", ";}", ":-D" };
    int sum = countSmileys(arr);
    std::cout << "Result = " << sum << std::endl;
    return 0;
}

!Given an array of numbers, return a new array of length number containing the last even numbers from the original array (in the same order). The original array will be not empty and will contain at least "number" even numbers.

For example:
([1, 2, 3, 4, 5, 6, 7, 8, 9], 3) => [4, 6, 8]
([-22, 5, 3, 11, 26, -6, -7, -8, -9, -8, 26], 2) => [-8, 26]

#include <iostream>
#include <string>
#include <vector>

std::vector <int> evenNumbers(std :: vector <int> arr , int n) {
    std::vector <int> newArr = arr;
    int amount = 0;
    for (int i = arr.size() - 1; amount < n && i >= 0; i-- ) {
        if (arr[i] % 2 == 0 ) {
            newArr.insert(newArr.begin(), arr[i]);
            amount++;
        }
    }
    return newArr;
}

int main() {
    std::vector <int> arr = { 1, 2, 3, 4, 5, 6, 7, 8};
    int num = 3;
    std::vector <int> result = evenNumbers(arr, num);
    std::cout << "Even numbers ";
    for (int n : result) {
        std::cout << n <<  " ";
    }
    std::cout << std::endl;
    return 0;
}


!Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

Examples:
solution('abc', 'bc') // returns true
solution('abc', 'd') // returns false

#include <iostream>
#include <string>
#include <vector>

bool solution(std::string const& str, std::string const& ending) {
    if (str.length() < ending.length()) {
        return false;
    }
    std::string last = str.substr(str.length() - ending.length());

    return last == ending;
};

!OR
bool solution(std::string const& str, std::string const& ending) {
    const int startLen = str.length();
    const int endLen = ending.length();

    if (startLen  < endLen) {
        return false;
    }

    for (int i = 1; i <= endLen; i++) {
        if (str[startLen - 1] != ending[endLen - i] ) {
            return false;
        }
    }
    return true;
};

int main() {
    std::string const str = "abc";
    std::string const ending = "bc";
    bool result = solution(str, ending);
    if (result) {
        std::cout << "True" << std::endl;
    }
    else {
        std::cout << "False" << std::endl;
    }
    return 0;
}

!Count the number of divisors of a positive integer n.
Random tests go up to n = 500000.
Examples (input --> output)
4 --> 3 // we have 3 divisors - 1, 2 and 4
5 --> 2 // we have 2 divisors - 1 and 5
12 --> 6 // we have 6 divisors - 1, 2, 3, 4, 6 and 12
30 --> 8 // we have 8 divisors - 1, 2, 3, 5, 6, 10, 15 and 30
?SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>

int devision(int num) {
    int count = 0;
    for (int i = 1; i * i  <= num; i++) {
        if (num % i == 0 ) {
            count++;
            if (i != num / i) { // check if  n / i is a different divisor of n
                count++;
            }
        }
    }
    return count;
}

int main() {
    int num = 30;
    int result = devision(num);
    std::cout << "Result = " << result << std::endl;
    return 0;
}

!In John's car the GPS records every s seconds the distance travelled from an origin (distances are measured in an arbitrary but consistent unit). For example, below is part of a record with s = 15:
x = [0.0, 0.19, 0.5, 0.75, 1.0, 1.25, 1.5, 1.75, 2.0, 2.25]
The sections are:
0.0-0.19, 0.19-0.5, 0.5-0.75, 0.75-1.0, 1.0-1.25, 1.25-1.50, 1.5-1.75, 1.75-2.0, 2.0-2.25
We can calculate John's average hourly speed on every section and we get:

[45.6, 74.4, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0]
Given s and x the task is to return as an integer the *floor* of the maximum average speed per hour obtained on the sections of x. If x length is less than or equal to 1 return 0 since the car didn't move.

Example:
With the above data your function gps(s, x) should return 74

Note
With floats it can happen that results depends on the operations order. To calculate hourly speed you can use:
 (3600 * delta_distance) / s.
?SOLUTION

#include <iostream>
#include <string>
#include <vector>

class GpsSpeed {
public :
    static int gps(int s, std::vector <double >& x) {
        int n = x.size();
        if (n <= 1) {
            return 0;
        }
        int seconds = s;
        int theHiggestSpeed = 0 ;
        for (int i = 0; i < n - 1; i++) {
            double deltaDistance = x[i + 1] - x[i];
            int speed = (3600 * deltaDistance) / s;
            if (speed > theHiggestSpeed) {
                theHiggestSpeed = speed;
            }
        }
        return theHiggestSpeed;
    }
};

int main() {
    int s = 15;
    std::vector <double >  x = { 0.0, 0.19, 0.5, 0.75, 1.0, 1.25, 1.5, 1.75, 2.0, 2.25 };
    GpsSpeed myObj;
    myObj.gps(s , x);
    std::cout << "Result = " << myObj.gps(s, x) << std::endl;
    return 0;
}


!Given a positive number n > 1 find the prime factor decomposition of n. The result will be a string with the following form :

 "(p1**n1)(p2**n2)...(pk**nk)"
with the p(i) in increasing order and n(i) empty if n(i) is 1.

Example: n = 86240 should return "(2**5)(5)(7**2)(11)"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

class PrimeDecomp {
public :
    static std::string factors(int n) {
        std::string result = "";
        std::vector <int> primes;

        for (int i = 2; i <= n; i++ ) {
            while (n % i == 0) {
                primes.push_back(i);
                n /= i;
            }
        }

        int count = 1;
        for (size_t i = 0; i < primes.size(); i++) {
            if (i + 1 < primes.size() && primes[i] == primes[i + 1]) {
                count++;
            }
            else {
                if (count == 1) {
                    result += "(" + std::to_string(primes[i]) + ")";
                }
                else {
                    result += "(" + std::to_string(primes[i]) + "**" + std::to_string(count) + ")";
                }
                count = 1;
            }
        }
        return result;
    }
};

int main() {
    int lst = 86240;
    std::cout << "Result = " << PrimeDecomp ::factors(lst) << std::endl;
    return 0;
}



!MY ANSWEAR
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

std::string encrypt(std::string S, int N) {
    if (S.empty() || N <= 0) {
        return S;
    }

    for (int i = 0; i < N; i++) {
        std::string odd = "";
        std::string even = "";

        for (int j = 0; j < S.length(); j++) {
            // If the index is odd, append the character to odd
            if (j % 2 == 1) {
                odd += S[j];
            }else {
                even += S[j];
            }
        }
        S = odd + even;
    }
    return S;
}

std::string decrypt(std::string S, int N) {
    if (S.empty() || N <= 0) {
        return S;
    }

    for (int i = 0; i < N; i++) {
        std::string decrypted = "";
        int mid = S.length() / 2;

        for (int j = 0; j < mid; j++) {
            decrypted += S[mid + j];
            decrypted += S[j];
        }
        // If S has an odd length, append the last character from the second half to decrypted
        if (S.length() % 2 == 1) {
            decrypted += S[S.length() - 1];
        }
        S = decrypted;
    }
    return S;
}

void test() {
    std::cout << encrypt("012345", 1) << std::endl; // "135024"
    std::cout << encrypt("012345", 2) << std::endl; // "304152"
    std::cout << encrypt("012345", 3) << std::endl; // "012345"

    std::cout << encrypt("01234", 1) << std::endl; // "13024"
    std::cout << encrypt("01234", 2) << std::endl; // "32104"
    std::cout << encrypt("01234", 3) << std::endl; // "20314"

    std::cout << decrypt("135024", 1) << std::endl; // "012345"
    std::cout << decrypt("304152", 2) << std::endl; // "012345"

    std::cout << decrypt("13024", 1) << std::endl; // "01234"
    std::cout << decrypt("32104", 2) << std::endl; // "01234"
}


int main() {
    test();
    return 0;
}

!CODEWARS ANSWEAR
std::string encrypt(std::string text, int n)
{
    if (n > 0) {
      std::string one, two;
      for(int i=0; i<text.length(); i++) {
        if (i%2) one+=text[i];
        else two+=text[i];
      }
      text=one+two;
      return encrypt(text, n-1);
    }
    return text;
}

std::string decrypt(std::string text, int n)
{
    if (n > 0) {
      std::string temp;
      char xd = text[text.length()-1];
      for (int i=0; i<text.length()/2; i++) {
        temp+=text[text.length()/2+i];
        temp+=text[i];
      }
      if (text.length()%2) temp.push_back(xd);
      return decrypt(temp, n-1);
    }
    return text;
}

!Some numbers have funny properties. For example:
89 --> 8¹ + 9² = 89 * 1
695 --> 6² + 9³ + 5⁴= 1390 = 695 * 2
46288 --> 4³ + 6⁴+ 2⁵ + 8⁶ + 8⁷ = 2360688 = 46288 * 51

Given a positive integer n written as abcd... (a, b, c, d... being digits) and a positive integer p
we want to find a positive integer k, if it exists, such that the sum of the digits of n taken to the successive powers of p is equal to k * n.
In other words:
Is there an integer k such as : (a ^ p + b ^ (p+1) + c ^(p+2) + d ^ (p+3) + ...) = n * k

If it is the case we will return k, if not return -1.

Note: n and p will always be given as strictly positive integers.

digPow(89, 1) should return 1 since 8¹ + 9² = 89 = 89 * 1
digPow(92, 1) should return -1 since there is no k such as 9¹ + 2² equals 92 * k
digPow(695, 2) should return 2 since 6² + 9³ + 5⁴= 1390 = 695 * 2
?SOLUTION
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

class DigPow {
public :
    static int digPow(int n, int p) {


    }
};

int main() {
    int n = 89;
    int p = 1;
    static int result = digPow(int n, int p);
    std::cout << "Result = " << result << std::endl;
    return 0;
}


The prime numbers are not regularly spaced. For example from 2 to 3 the gap is 1. From 3 to 5 the gap is 2. From 7 to 11 it is 4. Between 2 and 50 we have the following pairs of 2-gaps primes: 3-5, 5-7, 11-13, 17-19, 29-31, 41-43
A prime gap of length n is a run of n-1 consecutive composite numbers between two successive primes (see: http://mathworld.wolfram.com/PrimeGaps.html).
We will write a function gap with parameters:
g (integer >= 2) which indicates the gap we are looking for
m (integer > 2) which gives the start of the search (m inclusive)
n (integer >= m) which gives the end of the search (n inclusive)
In the example above gap(2, 3, 50) will return [3, 5] or (3, 5) or {3, 5} which is the first pair between 3 and 50 with a 2-gap.
So this function should return the first pair of two prime numbers spaced with a gap of g between the limits m, n if these numbers exist otherwise `nil or null or None or Nothing (or ... depending on the language).

In such a case (no pair of prime numbers with a gap of `g`)
In C: return [0, 0]
In C++, Lua, COBOL: return `{0, 0}`.
In F#: return `[||]`.
In Kotlin, Dart and Prolog: return `[]`.
In Pascal: return Type TGap (0, 0).
Examples:
- gap(2, 5, 7) --> [5, 7] or (5, 7) or {5, 7}
gap(2, 5, 5) --> nil. In C++ {0, 0}. In F# [||]. In Kotlin, Dart and Prolog return []`
gap(4, 130, 200) --> [163, 167] or (163, 167) or {163, 167}
([193, 197] is also such a 4-gap primes between 130 and 200 but it's not the first pair)
gap(6,100,110) --> nil or {0, 0} or ... : between 100 and 110 we have 101, 103, 107, 109 but 101-107is not a 6-gap because there is 103in between and 103-109is not a 6-gap because there is 107in between.
You can see more examples of return in Sample Tests.

Note for Go
For Go: nil slice is expected when there are no gap between m and n. Example: gap(11,30000,100000) --> nil

!MY ANSWEAR
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <array>

// Use the std namespace
using namespace std;

class GapInPrimes {
public:
    bool is_prime(int n) {
        if (n <= 1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;
        for (int i = 3; i <= sqrt(n); i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    };

    vector<int> gap(int g, int m, int n) {
        // Initialize the previous prime to -1
        int prev = -1;
        // Loop through the range [m, n]
        for (int i = m; i <= n; i++) {
            // If the current number is prime
            if (is_prime(i)) {
                // If the previous prime is not -1 and the gap is equal to g
                if (prev != -1 && i - prev == g) {
                    // Return the pair as a vector
                    return { prev, i };
                }
                // Update the previous prime to the current one
                prev = i;
            }
        }
        // If no pair is found, return {0, 0} as instructed
        return { 0, 0 };
    }
}; // Add a semicolon here

int main() {
    GapInPrimes myObj;
    vector<int> result = myObj.gap(2, 5, 7);
    // Print the result as a pair of numbers
    cout << "Result = (" << result[0] << ", " << result[1] << ")\n";
    return 0;
}


!BLACKBOX ANSWEAR
#include <iostream>
#include <vector>

using namespace std;

vector<int> gap(int g, int m, int n) {
    vector<int> result(2, 0);
    for (int i = m; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            int next = i + g;
            bool isNextPrime = true;
            for (int j = 2; j * j <= next; j++) {
                if (next % j == 0) {
                    isNextPrime = false;
                    break;
                }
            }
            if (isNextPrime) {
                result[0] = i;
                result[1] = next;
                break;
            }
        }
    }
    return result;
}

int main() {
    vector<int> result = gap(2, 3, 50);
    if (result[0] == 0 && result[1] == 0) {
        cout << "No pair of prime numbers with a gap of 2 between 3 and 50" << endl;
    } else {
        cout << "The first pair of two prime numbers spaced with a gap of 2 between 3 and 50 is: " << result[0] << " and " << result[1] << endl;
    }
    return 0;
}


!The main idea is to count all the occurring characters in a string. If you have a string like aba, then the result should be {'a': 2, 'b': 1}.
What if the string is empty? Then the result should be empty object literal, {}.
?SOLUTION
#include <iostream>
#include <vector>
#include <string>
#include <map>

std::map <char, unsigned> count(const std :: string & string) {
    if (string.empty()) {
        return {};
    }
    std::map <char, unsigned> char_count;
    for (char it : string) {
        char_count[it]++;
    }
    return char_count;
}

int main() {
    const std::string str = "aba";
    std::map <char, unsigned> result = count(str);
    for (auto it: result ) {
        std::cout << it.first << ": " << it.second << std::endl;
    }
    return 0;
}


!Your job is to write a function which increments a string, to create a new string.
If the string already ends with a number, the number should be incremented by 1.
If the string does not end with a number. the number 1 should be appended to the new string.
Examples:
foo -> foo1
foobar23 -> foobar24
foo0042 -> foo0043
foo9 -> foo10
foo099 -> foo100
Attention: If the number has leading zeros the amount of digits should be considered.

?SOLUTION (Not all test is successful)
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <array>
#include <map>

std::string incrementString(std::string& str) {
    int lastDigit = str.find_last_of("0123456789");

    if (lastDigit == std :: string :: npos) {
        str += "1";
    }
    else {
        int number = stoi(str.substr(lastDigit));
        number++;
        std::string number_str = std::to_string(number);
        str.replace(lastDigit , number_str.length() , number_str);
    }
    return str;
}


int main() {
    std::string str = "foo99";
    std::string result = incrementString(str);
    std::cout << "Result = " << result << std::endl;
    return 0;
}

Given an array of integers, find the one that appears an odd number of times.
There will always be only one integer that appears an odd number of times.
Examples
[7] should return 7, because it occurs 1 time (which is odd).
[0] should return 0, because it occurs 1 time (which is odd).
[1,1,2] should return 2, because it occurs 1 time (which is odd).
[0,1,0,1,0] should return 0, because it occurs 3 times (which is odd).
[1,2,2,3,3,3,4,3,3,3,2,2,1] should return 4, because it appears 1 time (which is odd).

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <array>
#include <map>

int findOdd(const std :: vector <int>& numbers) {
    std::map <int, int> hash;
    for (int i = 0; i < numbers.size(); i++) {
        hash[numbers[i]]++;
    }
    for (auto it = hash.begin(); it != hash.end(); it++) {
        if (it-> second % 2 == 1) {
            return it->first;
        }
    }
    return -1;
}

int main() {
    std::vector <int> numbers = { 1,1,2 };
    int result = findOdd(numbers);
    std::cout << "result = " << result << std::endl;
    return 0;
}

!Given a string s. You have to return another string such that even-indexed and odd-indexed characters of s are grouped and groups are space-separated (see sample below)
Note:
0 is considered to be an even index.
All input strings are valid with no spaces
input: 'CodeWars'
output 'CdWr oeas'
S[0] = 'C'
S[1] = 'o'
S[2] = 'd'
S[3] = 'e'
S[4] = 'W'
S[5] = 'a'
S[6] = 'r'
S[7] = 's'
?SOLUTION

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

string sortMyString(const string &s) {
    string oddGroup ;
    string evenGroup ;
    for (size_t i = 0; i < s.length(); i++) {
        if (i % 2 == 0) {
            evenGroup += s[i];
        }
        else {
            oddGroup += s[i];
        }
    }
    return  evenGroup + " " + oddGroup;
}

int main() {
    const string s = "CodeWars";
    string result = sortMyString(s);
    cout << "Result = " << result << endl;
    return 0;
}



!Step 1: Create a function called encode() to replace all the lowercase vowels in a given string with numbers according to the following pattern:
a -> 1
e -> 2
i -> 3
o -> 4
u -> 5
For example, encode("hello") would return "h2ll4". There is no need to worry about uppercase vowels in this kata.
Step 2: Now create a function called decode() to turn the numbers back into vowels according to the same pattern shown above.
For example, decode("h3 th2r2") would return "hi there".
For the sake of simplicity, you can assume that any numbers passed into the function will correspond to vowels.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string encode(string str) {
    string vowels = "aeiou";
    string numbers = "12345";
    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j < vowels.length(); j++) {
            if (str[i] == vowels[j]) {
                str[i] = numbers[j];
            }
        }
    }
    return str;
}

string decode(string str) {
    string vowels = "aeiou";
    string numbers = "12345";
    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j < numbers.length(); j++) {
            if (str[i] == numbers[j]) {
                str[i] = vowels[j];
            }
        }
    }
    return str;
}

int main() {
    std::string str = "hello";
    std::string result = encode(str);
    std::cout << "String = " << result << std::endl;
    return 0;
}

!OR

#include <iostream>
#include <string>

std::string encode(const std::string& input) {
    std::string encoded = input;
    for (char& c : encoded) {
        switch (c) {
            case 'a': c = '1'; break;
            case 'e': c = '2'; break;
            case 'i': c = '3'; break;
            case 'o': c = '4'; break;
            case 'u': c = '5'; break;
        }
    }
    return encoded;
}

std::string decode(const std::string& input) {
    std::string decoded = input;
    for (char& c : decoded) {
        switch (c) {
            case '1': c = 'a'; break;
            case '2': c = 'e'; break;
            case '3': c = 'i'; break;
            case '4': c = 'o'; break;
            case '5': c = 'u'; break;
        }
    }
    return decoded;
}

int main() {
    std::string original = "hello";
    std::string encoded = encode(original);
    std::string decoded = decode(encoded);
    std::cout << "Original: " << original << std::endl;
    std::cout << "Encoded: " << encoded << std::endl;
    std::cout << "Decoded: " << decoded << std::endl;
    return 0;
}


!Well met with Fibonacci bigger brother, AKA Tribonacci.
As the name may already reveal, it works basically like a Fibonacci, but summing the last 3 (instead of 2) numbers of the sequence to generate the next. And, worse part of it, regrettably I won't get to hear non-native Italian speakers trying to pronounce it :(
So, if we are to start our Tribonacci sequence with [1, 1, 1] as a starting input (AKA signature), we have this sequence:
[1, 1 ,1, 3, 5, 9, 17, 31, ...]
But what if we started with [0, 0, 1] as a signature? As starting with [0, 1] instead of [1, 1] basically shifts the common Fibonacci sequence by once place, you may be tempted to think that we would get the same sequence shifted by 2 places, but that is not the case and we would get:
[0, 0, 1, 1, 2, 4, 7, 13, 24, ...]
Well, you may have guessed it by now, but to be clear: you need to create a fibonacci function that given a signature array/list, returns the first n elements - signature included of the so seeded sequence.
Signature will always contain 3 numbers; n will always be a non-negative number; if n == 0, then return an empty array (except in C return NULL) and be ready for anything else which is not clearly specified ;)

#include <iostream>
#include <vector>
#include <string>

std::vector <int> tribonacci(std::vector <int> signature, int n) {
    std::vector <int> result;
    for (int i = 0; i < n; i++) {
        result.push_back((i < 3) ? signature[i] : result[i - 1] + result[i- 2]  + result[i- 3]) ;
    }
    return result;
};

int main() {
    std::vector <int> signature = {1 , 1 , 1};
    int n = 10;
    std::vector <int> result = tribonacci(signature, n);
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}

!Convert number to reversed array of digits
Given a random non-negative number, you have to return the digits of this number within an array in reverse order.

Example(Input => Output):
35231 => [1,3,2,5,3]
0 => [0]

#include <iostream>
#include <vector>
#include <string>

std::vector <int> digitize(unsigned long n) {
    std::vector <int> digits;
    do {
        digits.push_back(n % 10);
        n /= 10;
    } while (n > 0);
    return digits;
}

int main() {
    unsigned long n = 12546;
    std::vector <int> result = digitize(n);
    for (int num : result ) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

!I always thought that my old friend John was rather richer than he looked, but I never knew exactly how much money he actually had. One day (as I was plying him with questions) he said:

"Imagine I have between m and n Zloty..." (or did he say Quetzal? I can't remember!)
"If I were to buy 9 cars costing c each, I'd only have 1 Zloty (or was it Meticals?) left."
"And if I were to buy 7 boats at b each, I'd only have 2 Ringglets (or was it Zloty?) left."
Could you tell me in each possible case:

how much money f he could possibly have ?
the cost c of a car?
the cost b of a boat?
So, I will have a better idea about his fortune. Note that if m-n is big enough, you might have a lot of possible answers.

Each answer should be given as ["M: f", "B: b", "C: c"] and all the answers as [ ["M: f", "B: b", "C: c"], ... ]. "M" stands for money, "B" for boats, "C" for cars.

Note: m, n, f, b, c are positive integers, where 0 <= m <= n or m >= n >= 0. m and n are inclusive.

Examples:
howmuch(1, 100)      => [["M: 37", "B: 5", "C: 4"], ["M: 100", "B: 14", "C: 11"]]
howmuch(1000, 1100)  => [["M: 1045", "B: 149", "C: 116"]]
howmuch(10000, 9950) => [["M: 9991", "B: 1427", "C: 1110"]]
howmuch(0, 200)      => [["M: 37", "B: 5", "C: 4"], ["M: 100", "B: 14", "C: 11"], ["M: 163", "B: 23", "C: 18"]]
Explanation of the results for howmuch(1, 100):

In the first answer his possible fortune is 37:
so he can buy 7 boats each worth 5: 37 - 7 * 5 = 2
or he can buy 9 cars worth 4 each: 37 - 9 * 4 = 1
The second possible answer is 100:
he can buy 7 boats each worth 14: 100 - 7 * 14 = 2
or he can buy 9 cars worth 11: 100 - 9 * 11 = 1
Note
See "Sample Tests" to know the format of the return. write in C++

#include <iostream>
#include <vector>
#include <string>

class Carboat {
public :
    static std :: string howmuch(int m, int n) {
        std::string result = "";
        for (int f = std::max(m, 0); f < n; f++) {
            int carsCount = (f - 1) / 9;
            int boatsCount = (f - 2) / 7;

            if (9 * carsCount == f - 1 && 7 * boatsCount == f - 2) {
                int c = (f - 1) / 9;
                int b = (f - 2) / 7;

                result += "M: " + std::to_string(f) + " C: " + std::to_string(c) + " B: " + std::to_string(b) + "\n";
            }
        }
        return result;
    }
};

int main() {
    Carboat myObj;
    myObj.howmuch(1, 100);
    std::cout << "Result = " << myObj.howmuch(1, 100) << std::endl;
    return 0;
}


!Given an input of an array of digits, return the array with each digit incremented by its position in the array: the first digit will be incremented by 1, the second digit by 2, etc. Make sure to start counting your positions from 1 ( and not 0 ).
Your result can only contain single digit numbers, so if adding a digit with its position gives you a multiple-digit number, only the last digit of the number should be returned.
Notes:
return an empty array if your array is empty
arrays will only contain numbers so don't worry about checking that
Examples:
[1, 2, 3]  -->  [2, 4, 6]   #  [1+1, 2+2, 3+3]

#include <iostream>
#include <vector>
#include <string>

std::vector <int> incrementer(std::vector <int> nums) {
    std::vector <int> result;
    for (int i = 0; i < nums.size(); i++) {
        int incrementedNum = (nums[i] + (i + 1)) % 10;
        result.push_back(incrementedNum);
    }
    return result;
}

int main() {
    std::vector <int> nums = { 1 , 2 , 3 , 4 };
    std::vector <int> result = incrementer(nums);
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}

!Write a function that converts any sentence into a V A P O R W A V E sentence. a V A P O R W A V E
sentence converts all the letters into uppercase, and adds 2 spaces between each letter (or special character) to create this V A P O R W A V E effect.
Note that spaces should be ignored in this case.

#include <iostream>
#include <string>

std::string vaporcode(const std::string &str) {
    std::string result ;

    for (char i : str) {
        if (i != ' ') {
            result += std::toupper(i);
            result += "  ";
        }
    }
    return result;
}

int main() {
    std::string input = "Lets go to the movies";
    std::string result = vaporcode(input);
    std::cout << "result = " << result << std::endl;
    return 0;
}

!The maximum sum subarray problem consists in finding the maximum sum of a contiguous subsequence in an array or list of integers:
maxSequence({-2, 1, -3, 4, -1, 2, 1, -5, 4});
//should be 6: {4, -1, 2, 1}
Easy case is when the list is made up of only positive numbers and the maximum sum is the sum of the whole array. If the list is made up of only negative numbers, return 0 instead.
Empty list is considered to have zero greatest sum. Note that the empty list or array is also a valid sublist/subarray.

#include <iostream>
#include <vector>
#include <string>

int maxSequence(const std::vector <int>& arr) {
    int maxSum = 0;
    int currentSum = 0;
    for (int num : arr) {
        currentSum += num;
        maxSum = std::max(maxSum, currentSum);
        if (currentSum < 0 ) {
            currentSum = 0;
        }
    }
    return maxSum;
}

int main() {
    const std::vector <int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    std::cout << maxSequence(arr);
    return 0;
}


!Your task is to construct a building which will be a pile of n cubes.
The cube at the bottom will have a volume of n^3 the cube above will have volume of
(n-1)^3 and so on until the top which will have a volume of 1^3. You are given the total volume m
of the building. Being given m can you find the number n of cubes you will have to build?
The parameter of the function findNb (find_nb, find-nb, findNb, ...) will be an integer m and you have to return the integer n such as
n^3 + (n-1)^3 + (n-2)^3 + .. + 1^3 = m f such a n exists or -1 if there is no such n.
Examples:
findNb(1071225) --> 45

findNb(91716553919377) --> -1

#include <iostream>
#include <cmath>

class Asum {
public :
    static long long findNb(long long m) {
        long long target = sqrt(2 * sqrt(1.0 * m));// √2√m
        if ((target * (target + 1 ) / 2 ) * (target * (target + 1) / 2)) {
            return target;
        }
        else {
            return -1;
        }
    }
};

class Asum {
public :
    static long long findNb(long long m) {
        long long i;
        for (i = 1; m > 0; i++)
            m -= (i * i * i);

        if (m == 0 ) {
            return i - 1;
        }
        else {
            return -1;
        }
    }
};

int main() {
    Asum myobj;
    myobj.findNb(1071225);
    std::cout << myobj.findNb(1071225) << std::endl;
    return 0;
}

!You are given an array(list) strarr of strings and an integer k. Your task is to return the first longest string consisting of k consecutive strings taken in the array.
Examples:
strarr = ["tree", "foling", "trashy", "blue", "abcdef", "uvwxyz"], k = 2

Concatenate the consecutive strings of strarr by 2, we get:

treefoling   (length 10)  concatenation of strarr[0] and strarr[1]
folingtrashy ("      12)  concatenation of strarr[1] and strarr[2]
trashyblue   ("      10)  concatenation of strarr[2] and strarr[3]
blueabcdef   ("      10)  concatenation of strarr[3] and strarr[4]
abcdefuvwxyz ("      12)  concatenation of strarr[4] and strarr[5]

Two strings are the longest: "folingtrashy" and "abcdefuvwxyz".
The first that came is "folingtrashy" so
longest_consec(strarr, 2) should return "folingtrashy".

In the same way:
longest_consec(["zone", "abigail", "theta", "form", "libe", "zas", "theta", "abigail"], 2) --> "abigailtheta"
n being the length of the string array, if n = 0 or k > n or k <= 0 return "" (return Nothing in Elm, "nothing" in Erlang).

#include <iostream>
#include <vector>
#include <sstream>
#include <string>

class LongestConsec {
public :
    static std::string longestConsec(const std::vector <std::string>& strarr, int k){
        int n = strarr.size();
        if (n == 0 || k > 0 || k <= 0 ) {
            return "";
        }
        int maxElement = 0;
        std::string result = "";
        for (int i = 0; i <= n - k; i++) {
            std::string current = "";
            for (int j = i; j < i + k; j++ ) {
                current += strarr[j];
            }
            if (current.length() > maxElement) {
                maxElement = current.length();
                result = current;
            }
        }
        return result;
    }
};

int main() {
    std::vector <std::string>  strarr = { "zone", "abigail", "theta", "form", "libe", "zas", "theta", "abigail" };
    std::string result = LongestConsec::longestConsec(strarr, 2);
    std::cout << "Result = " << result << std::endl;
    return 0;
}

!Complete the method which accepts an array of integers, and returns one of the following:
"yes, ascending" - if the numbers in the array are sorted in an ascending order
"yes, descending" - if the numbers in the array are sorted in a descending order
"no" - otherwise
You can assume the array will always be valid, and there will always be one correct answer.

#include <iostream>
#include <string>

std::string is_sorted_and_how(std::vector <int> array) {
    bool desceding = true;
    bool asceding = true;
    for (int i = 1; i < array.size(); i++) {
        if (array[i] < array[i - 1]) {
            desceding = false;
        }
        else if (array[i] > array[i - 1]) {
            asceding = false;
        }
    }
    if (desceding) {
        return "True";
    }
    else if (asceding) {
        return "False";
    }
    else {
        return "No";
    }
}
int main() {
    std::vector <int> array = {1 , 2 , 3 , 4 , 5 };
    std::string result = is_sorted_and_how(array);
    std::cout << "Result = " << result << std::endl;
    return 0;
}

In this little assignment you are given a string of space separated numbers, and have to return the highest and lowest number.

Examples
highAndLow("1 2 3 4 5");  // return "5 1"
highAndLow("1 2 -3 4 5"); // return "5 -3"
highAndLow("1 9 3 4 -5"); // return "9 -5"
Notes
All numbers are valid Int32, no need to validate them.
There will always be at least one number in the input string.
Output string must be two numbers separated by a single space, and highest number is first. in C++ with main function


#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>

std::string high_and_low(std::string numbers)
{
    std::stringstream ss(numbers); // create object which we use to extract numbers and store to vector
    std::vector <int> nums;
    int n;
    while (ss >> n)
    {
        nums.push_back(n);
    }
    auto minmax = std::minmax_element(nums.begin(), nums.end());
    return std::to_string(*minmax.second) + " " + std::to_string(*minmax.first);
}

int main()
{
    std:: string str = " 1 2 3 4 5 ";
    std::string result = high_and_low(str);
    std::cout << "Result = " << result;
    return 0;

}

Complete the function that calculates the area of the red square, when the length of the circular arc A is given as the input. Return the result rounded to two decimals.
Note: use the π value provided in your language (Math::PI, M_PI, math.pi, etc) in C++

#include <iostream>
#include <cmath>
using namespace std;

# define M_PI 3.14159265358979323846

double square_area(double A)
{
    return round(pow(2 * A / M_PI, 2) * 100) / 100;
}

int main()
{
    double A = 14.0;
    double result = square_area( A);
    std::cout << "Result = " << result;
    return 0;

}

Define a method/function that removes from a given array of integers all the values contained in a second array.

Examples (input -> output):
* [1, 1, 2, 3, 1, 2, 3, 4], [1, 3] -> [2, 2, 4]
* [1, 1, 2, 3, 1, 2, 3, 4, 4, 3, 5, 6, 7, 2, 8], [1, 3, 4, 2] -> [5, 6, 7, 8]
* [8, 2, 7, 2, 3, 4, 6, 5, 4, 4, 1, 2, 3], [2, 4, 3] -> [8, 7, 6, 5, 1]


#include <iostream>
#include <cmath>
#include <vector>
std::vector <int> remove_values(std::vector <int> integers, std::vector <int>values)
{
    std::vector <int> result;
    for (int i = 0; i < integers.size(); i++)
    {
        if (find(values.begin(), values.end() , integers[i]) == values.end())
        {
            result.push_back(integers[i]);
        }
    }
    return result;
}
int main()
{
    std::vector <int > integers = { 1, 1, 2, 3, 1, 2, 3, 4 };
    std::vector <int> values = { 1 , 2 };
    std::vector <int>  result = remove_values(integers , values);
    for (int i = 0; i < result.size(); i++)
    {
        std::cout << result[i] << " ";
    }
    return 0;
}

The vowel substrings in the word codewarriors are o,e,a,io.
The longest of these has a length of 2. Given a lowercase string that has alphabetic characters only (both vowels and consonants) and no spaces, return the length of the longest vowel substring.
Vowels are any of aeiou.

#include <iostream>
using namespace std;
int solve(string s)
{
    int max_len = 0 ;
    int curr_len = 0;
    for (char ch : s)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' ||  ch == 'u' || ch == 'o' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||  ch == 'U' || ch == 'O')
        {
            curr_len++;
            max_len = max(max_len, curr_len);
        }
        else {
            curr_len = 0;
        }
    }
    return max_len;
}


A palindrome is a series of characters that read the same forwards as backwards such as "hannah", "racecar" and "lol".

For this Kata you need to write a function that takes a string of characters and returns the length, as an integer value, of longest alphanumeric palindrome that could be made by combining the characters in any order but using each character only once. The function should not be case sensitive.

For example if passed "Hannah" it should return 6 and if passed "aabbcc_yYx_" it should return 9 because one possible palindrome would be "abcyxycba".

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

unsigned int longestPalindrome(const string& str)
{
    unordered_map <char, int> freq;
    for (char c : str)
    {
        if (isalnum(c))
        {
            freq[c]++;
        }
    }

    int odd_count = 0;
    for (auto p : freq)
    {
        if (p.second % 2 == 0)
        {
            odd_count++;
        }
    }
    return str.length() - odd_count + (odd_count > 0);

}


int main()
{
    const string s1 = "Hannah";
    const string s2 = "aabbcc_yYx_";
    cout << longestPalindrome(s1) << endl;
    cout << longestPalindrome(s2) << endl;
    return 0;

}

Jumping number is the number that All adjacent digits in it differ by 1.

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;


string jumpingNUmber(int number)
{
    string newStr = to_string(number);
    if (newStr.size() == 1 )
    {
        return "Jumping!!";
    }
    for (size_t i = 0 ; i < newStr.size() - 1; i++)
    {
        int digit1 = newStr[i] - '0';
        int digit2 = newStr[i + 1] - '0';

        if (std :: abs(digit1 - digit2) != 1)
        {
            return "Not";
        }
    }
    return "Jumping!!";
}

int main()
{
    int number = 9;
    string result = jumpingNUmber(number);
    cout << "Result = " << result << endl;
    return 0;
}


Given an array/list [] of integers , Find all the LEADERS in the array.

Notes
Array/list size is at least 3 .

Array/list's numbers Will be mixture of positives , negatives and zeros

Repetition of numbers in the array/list could occur.

Returned Array/list should store the leading numbers in the same order in the original array/list .

Input >> Output Examples
arrayLeaders ({1, 2, 3, 4, 0}) ==> return {4}
Explanation:
4 is greater than the sum all the elements to its right side

Note : The last element 0 is equal to right sum of its elements (abstract zero).

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

vector <int> arrayLeaders(const vector<int>& numbers)
{
    int num = numbers.size();
    int rightSum = 0;
    vector <int> result;

    for (int i = 0 ; i < num;i++)
    {
        rightSum = 0;

        for (int j = i + 1; j < num; j++)
        {
            rightSum += numbers[j];
        }
        if (numbers[i] > rightSum)
        {
            result.push_back(numbers[i]);
        }
    }
    return result;
}


The Pied Piper has been enlisted to play his magical tune and coax all the rats out of town.

But some of the rats are deaf and are going the wrong way!

Kata Task
How many deaf rats are there?

Legend
P = The Pied Piper
O~ = Rat going left
~O = Rat going right
Example
ex1 ~O~O~O~O P has 0 deaf rats

ex2 P O~ O~ ~O O~ has 1 deaf rat

ex3 ~O~O~O~OP~O~OO~ has 2 deaf rats

int countDeafRats(const std::string& town) {
    int deafRats = 0;

    // Find the position of the Pied Piper 'P'
    size_t piedPiperPos = town.find('P');

    // Iterate through the rats in the town
    for (size_t i = 0; i < town.length(); i++) {
        // Skip spaces
        if (town[i] == ' ')
            continue;

        // Check if it's a rat and determine its direction
        char ratDirection = town[i];
        size_t ratPos = (ratDirection == 'O') ? i : i + 1; // Adjust position for rats going left

        // Check if the rat is deaf (going the wrong way)
        if ((ratDirection == '~' && ratPos < piedPiperPos) ||
            (ratDirection == 'O' && ratPos > piedPiperPos)) {
            deafRats++;
        }
    }

    return deafRats;
}


There is a bus moving in the city which takes and drops some people at each bus stop.

You are provided with a list (or array) of integer pairs. Elements of each pair represent the number of people that get on the bus (the first item) and the number of people that get off the bus (the second item) at a bus stop.

Your task is to return the number of people who are still on the bus after the last bus stop (after the last array). Even though it is the last bus stop, the bus might not be empty and some people might still be inside the bus, they are probably sleeping there :D

#include <iostream>
#include <utility>
#include <vector>

unsigned int number(const std ::vector<std ::pair<int, int>> &busStops)
{
  int total = 0;
  for (const auto &stop : busStops)
  {
    total += stop.first - stop.second;
  }
  return std ::max(0, total);
}

int main()
{
  const std ::vector<std ::pair<int, int>> busStops = {{3, 0}, {9, 1}, {4, 10}, {12, 2}, {6, 7}};
  unsigned int total = number(busStops);
  std ::cout << "Result = " << total << std ::endl;
  return 0;
}



Compare two strings by comparing the sum of their values (ASCII character code).

For comparing treat all letters as UpperCase
null/NULL/Nil/None should be treated as empty strings
If the string contains other characters than letters, treat the whole string as it would be empty
Your method should return true, if the strings are equal and false if they are not equal.

"AD", "BC"  -> equal
"AD", "DD"  -> not equal
"gf", "FG"  -> equal

#include <iostream>
#include <vector>
#include <cctype>
bool compare (std :: string s1 , std ::string s2 )
{
     int sum1 = 0, sum2 = 0;
    // Helper function to calculate sum of ASCII values for a string
    auto calculateSum = [](const std::string& str) {
        int sum = 0;
        for (char ch : str) {
            if (std::isalpha(ch)) {
                sum += std::toupper(ch);
            } else {
                // Treat non-alphabetic characters as if the string is empty
                return 0;
            }
        }
        return sum;
    };
    // Calculate sums for both strings
    sum1 = calculateSum(s1);
    sum2 = calculateSum(s2);

    // Compare the calculated sums
    return sum1 == sum2;
}

int main()
{
  std :: string str1 = "AD";
  std :: string str2 = "DD";
  bool result = compare ( str1 ,str2 ) ;
  std :: cout << "Result = " << std :: boolalpha << result << std :: endl;
  return 0;
}

Welcome.

In this kata you are required to, given a string, replace every letter with its position in the alphabet.

If anything in the text isn't a letter, ignore it and don't return it.

"a" = 1, "b" = 2, etc.

Example
alphabet_position("The sunset sets at twelve o' clock.")
Should return "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11" ( as a string )

#include <iostream>
#include <cctype>
#include <string>

std ::string alphabet_position(const std ::string &text)
{
    std ::string result;
    for (char letter : text)
    {
        if (std ::isalpha(letter))
        {
            char lowercase = std ::tolower(letter);

            int position = lowercase - 'a' + 1;

            result += std ::to_string(position) + " ";
        }
    }

    result.erase(result.find_last_not_of(" ") + 1);
    return result;
}

int main()
{
    const std ::string text = "The sunset sets at twelve o' clock.";
    std ::string result = alphabet_position(text);
    std ::cout << "Result = " << result;
    return 0;
}


Your task in this kata is to implement a function that calculates the sum of the integers inside a string. For example, in the string "The30quick20brown10f0x1203jumps914ov3r1349the102l4zy dog", the sum of the integers is 3635.
#include <iostream>
#include <sstream>
#include <string>

std ::string sumOfIntegers(const std ::string &str)
{
    int sum = 0 ;
    std :: stringstream ss;
    bool inNumber = false;

    for (char ch : str) 
    {
        if (std :: isdigit(ch))
        {
            ss << ch ; // add a string to the stringstream object
            inNumber = true;
        }else 
        {
            if ( inNumber) 
            {
                sum += std :: stoi(ss.str());
                ss.str("");
                inNumber = false ;
            }
        }
    }

    if (inNumber) 
    {
        sum += std :: stoi(ss.str());
    }

   return result;
}

int main()
{
    const std ::string str = "The30quick20brown10f0x1203jumps914ov3r1349the102l4zy dog";
    std ::string result = sumOfIntegers(str);
    std ::cout << "Result = " << result;
    return 0;
}


Longest Palindrome
Find the length of the longest substring in the given string s that is the same in reverse.

As an example, if the input was “I like racecars that go fast”, the substring (racecar) length would be 7.

If the length of the input string is 0, the return value must be 0.

Example:
"a" -> 1 
"aab" -> 2  
"abcde" -> 1
"zzbaabcd" -> 4
"" -> 0

#include <iostream>
#include <string>
using namespace std ;

int longest_palindrome(const std :: string &s) 
{
    int n = s.length();
    if (n == 0 ) 
    {
        return 0 ;
    }

    int start = 0 , maxLength = 1;
    bool dp[n][n];

    //All substring of length 1 are palindromes
    for (int i = 0 ; i < n ; i++) 
    {
        dp[i][i] = true ;
    }

    //check for substring of length 2
    for (int i = 0 ; i < n - 1 ; i++) 
    {
        if (s[i] == s[i + 1])
        {
            dp[i][i+ 1] = true ;
            start = i ;
            maxLength = 2;
        }else
        {
            dp[i][i+ 1] = false ; 
        }
    }

    //check for length greater then 2
    for (int k = 3 ; k <= n ; k++) 
    {
        for (int i = 0 ; i < n - k + 1; i++) 
        {
            int j = i + k - 1;
            if (dp[i + 1] [j - 1] && s[i] == s[j])
            {
                dp[i][j] = true ;
                start = i ;
                maxLength = k;
            }else 
            {
                 dp[i][j] = false ;
            }

        }
    }

    cout << "Longest palindrome : " ;
    for (int i = start ; i < start + maxLength;i++) 
    {
        cout << s[i];
    }
    cout << endl;
    return maxLength;
}



Consider the word "abode". We can see that the letter a is in position 1 and b is in position 2. In the alphabet, a and b are also in positions 1 and 2. Notice also that d and e in abode occupy the positions they would occupy in the alphabet, which are positions 4 and 5.

Given an array of words, return an array of the number of letters that occupy their positions in the alphabet for each word. For example,

solve(["abode","ABc","xyzD"]) = [4, 3, 1]
#include <iostream>
#include <string>
using namespace std ;

vector <int> solve (const vector<string> & arr) 
{
   vector <int> result ;

    for (const string word : arr) 
    {
        int count = 0 ;
        for (int i = 0 ; i < word.lenght() ; i++) 
        {
            char lower = tolower(word[i]);
            if (lower - 'a' == i)
            {
                count++;
            }
        }
        result.push_back(count);
    }

   return result ;
}

int main()
{
    vector <string> words  = {"abode", "hello", "world", "alphabet"};
    vector<int> result = solve (words) ;

    cout << "Result = " ;
    for (int count : result ) 
    {
        cout << count << " ";
    }
    cout << endl;

    return 0;
}



In this Kata, you will be given two strings a and b and your task will be to return the characters that are not common in the two strings.

For example:

solve("xyab","xzca") = "ybzc" 
--The first string has 'yb' which is not in the second string. 
--The second string has 'zc' which is not in the first string. 


std :: string slove(std :: string a, std :: string b) 
{
    std :: string result;
  
    for (char i : a) 
    {
        if (b.find(i) == std :: string:: npos ) 
        {
            result += i;
        }
    }

    for (char i : b) 
    {
        if (a.find(i) == std :: string ::npos) 
        {
            result += i ;
        }
    }

    return result;
}

!OR

std :: string so(std :: string s, std :: string st)
{
    std :: string result;
    for (char ch : s) 
    {
        for (size_t i = 0 ; i < st.size(); i++) 
        {
            if (ch == st[i]) break;
            if (i == st.size() - 1) result.push_back(ch);
        }
    }
    return result;
}

std :: string slove(std :: string a, std :: string b) 
{
  std :: string result = so(a,b) + so(b , a);
  return result;
}


All we eat is water and dry matter.

Let us begin with an example:

John bought potatoes: their weight is 100 kilograms. Potatoes contain water and dry matter. The water content is 99 percent of the total weight. He thinks they are too wet and puts them in an oven - at low temperature - for them to lose some water.

At the output the water content is only 98%.

What is the total weight in kilograms (water content plus dry matter) coming out of the oven?

He finds 50 kilograms and he thinks he made a mistake: "So much weight lost for such a small change in water content!"

Can you help him?

Task
Write function potatoes with

int parameter p0 - initial percent of water-
int parameter w0 - initial weight -
int parameter p1 - final percent of water -

int potatoes(int p0, int w0, int p1)
{
     
    return (w0 * (100 - p0)) / (100 - p1);
}


Write a function that reverses the bits in an integer.

For example, the number 417 is 110100001 in binary. Reversing the binary is 100001011 which is 267.

You can assume that the number is not negative.

unsigned int reverse_bits(unsigned int n) {
  int rev = 0 ;
  
  while (n > 0) 
  {
    rev <<= 1;
    if (n & 1 == 1) 
    
      rev ^= 1;
    
    n >>= 1;
  }
  return rev;
}


Task
Given an array of N integers, you have to find how many times you have to add up the smallest numbers in the array until their Sum becomes greater or equal to K.

Notes:
List size is at least 3.

All numbers will be positive.

Numbers could occur more than once , (Duplications may exist).

Threshold K will always be reachable.

Input >> Output Examples
minimumSteps({1, 10, 12, 9, 2, 3}, 6)  ==>  return (2)


int minimumSteps(std :: vector <int> &numbers , int input) 
{
    std :: vector <int> sorted_Arr = numbers;
    std :: sort(numbers.begin() , numbers.end());

    int sum = 0 ;
    int steps = 0 ;

    for(int i : sorted_Arr) 
    {
        sum += i ;
        steps++;
        if(sum >= input) 
        {
            return steps -1;
        }
    }

    return -1;
   
}

To participate in a prize draw each one gives his/her firstname.

Each letter of a firstname has a value which is its rank in the English alphabet. A and a have rank 1, B and b rank 2 and so on.

The length of the firstname is added to the sum of these ranks hence a number som.

An array of random weights is linked to the firstnames and each som is multiplied by its corresponding weight to get what they call a winning number.

Example:
names: "COLIN,AMANDBA,AMANDAB,CAROL,PauL,JOSEPH"
weights: [1, 4, 4, 5, 2, 1]

PauL -> som = length of firstname + 16 + 1 + 21 + 12 = 4 + 50 -> 54
The *weight* associated with PauL is 2 so PauL's *winning number* is 54 * 2 = 108.
Now one can sort the firstnames in decreasing order of the winning numbers. When two people have the same winning number sort them alphabetically by their firstnames.

Task:
parameters: st a string of firstnames, we an array of weights, n a rank

return: the firstname of the participant whose rank is n (ranks are numbered from 1)

Example:
names: "COLIN,AMANDBA,AMANDAB,CAROL,PauL,JOSEPH"
weights: [1, 4, 4, 5, 2, 1]
n: 4

The function should return: "PauL"
Notes:
The weight array is at least as long as the number of names, it may be longer.

If st is empty return "No participants".

If n is greater than the number of participants then return "Not enough participants".

See Examples Test Cases for more examples.

class Rank 
{
    public :
        static std :: string nthRank(const std :: string &st , std :: vector<int> &we , int n ) 
        {
            if (st.empty()) {
                return "No participants";
            }

            // Split the input string into individual names
            std::vector<std::string> names;
            size_t pos = 0;
            size_t found = st.find(",");
            while (found != std::string::npos) {
                names.push_back(st.substr(pos, found - pos));
                pos = found + 1;
                found = st.find(",", pos);
            }
            names.push_back(st.substr(pos));

            if (n > names.size()) {
                return "Not enough participants";
            }

            // Calculate the winning numbers and store them in a vector
            std::vector<std::pair<std::string, int>> winningNumbers;
            for (size_t i = 0; i < names.size(); ++i) {
                int som = names[i].length();
                for (char c : names[i]) {
                    som += tolower(c) - 'a' + 1;
                }
                int winningNumber = som * weights[i];
                winningNumbers.push_back({names[i], winningNumber});
            }

            // Sort the vector of winning numbers in decreasing order of winning numbers,
            // and in case of a tie, alphabetically by firstnames
            std::sort(winningNumbers.begin(), winningNumbers.end(),
                    [](const auto& a, const auto& b) {
                        return (a.second > b.second) || (a.second == b.second && a.first < b.first);
                    });

            return winningNumbers[n - 1].first;
        }
}





class SumSquaredDivisors
{
public:
    static std::vector<std::pair<long long, long long>> listSquared(long long m, long long n);
};

std::vector<std::pair<long long, long long>> SumSquaredDivisors::listSquared(long long m, long long n) {
  std::vector<std::pair<long long, long long>> ans;
  long long ssd;
  float temp;
  
  for (long long i = m; i <= n; i++) {
    ssd = 0;
    for (long long j = 1; j <= i; j++) {
      if (i % j == 0) {
        ssd += j*j;
      }
    }// end of for j
    if (sqrt(ssd) == floor(sqrt(ssd))) {
          ans.push_back({i, ssd});
    }
  }// end of for i
  
  return ans;
}


Given an array of numbers (in string format), you must return a string. 
The numbers correspond to the letters of the alphabet in reverse order: a=26, z=1 etc. You should also account for '!', '?' and ' ' that are represented by '27', '28' and '29' respectively.

std :: string swicher(const std :: vector <std :: string> & arr) 
{
    std :: string result ;
    for (const std :: string numInStr : arr) 
    {
        int num = std :: stoi(numInStr);
        if (num >= 27 && num <= 29) 
        {
           char importantChar = (num == 27) ? '!' : ((num == 28) ? '?' : ' ');
            result += importantChar;
        }else if (num >= 1 && num <= 26)
        {   
            char letter = 'a' + (26 - num);
            result += letter;
        }else {
            return "Invalid input";
        }
    }
    return result;
};

Your job at E-Corp is both boring and difficult. It isn't made any easier by the fact that everyone constantly wants to have a meeting with you, and that the meeting rooms are always taken!
In this kata, you will be given an array. Each value represents a meeting room. Your job? Find the first empty one and return its index (N.B. There may be more than one empty room in some test cases

#include <bits/stdc++.h>
using namespace std;

int findEmptyRoom(vector<char> rooms) {
    for (int i = 0; i < rooms.size(); i++) {
        if (rooms[i] == 'O') {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<char> rooms = {'X', 'O', 'X', 'O', 'O'};
    int index = findEmptyRoom(rooms);
    if (index == -1) {
        cout << "No empty rooms found." << endl;
    } else {
        cout << "The index of the first empty room is " << index << "." << endl;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int calc (const std :: string x) 
{
    int sum = 0 ;
    for (char i : x) 
    {
        sum += static_cast<int>(i);
    }
    return sum;
}

int calcDiffrence (const std :: string x)
{
    std :: string total_1_str = "";
    for (char ch : x) 
    {
        total_1 += std :: to_string (static_cast<int>(ch));
    }

    for (char &ch : total_1) 
    {
        if (ch == '7') 
        {
            ch = '1';
        }
    }

    int total_1 = std :: stoi(total_1_str);
    int total_2 = calc(total_1_str);

    return total_1 - total_2;
}

Task
Given an array/list [] of integers , Construct a product array Of same size Such That prod[i] is equal to The Product of all the elements of Arr[] except Arr[i].

Notes
Array/list size is at least 2 .

Array/list's numbers Will be only Positives

Repetition of numbers in the array/list could occur.

Input >> Output Examples
productArray ({12,20}) ==>  return {20,12}
Explanation:
The first element in prod [] array 20 is the product of all array's elements except the first element

The second element 12 is the product of all array's elements except the second element .


vector <int> profuctArray (vector <int> numbers) 
{
    int n  = numbers.size();

    vector <int> LeftArr(n , 1); 
    vector <int> RightArr(n , 1);

    int left = 1;
    for (int i = 1 ; i < n; i++) {
        left *= numbers[i - 1];
        LeftArr[i] = left;
    }

    int right = 1;
    for (int i = n - 2 ; i >= 0 ; i--) {
        right *= numbers[i + 1];
        RightArr[i] = right;
    }

    vector <int> result (n);
    for (int i = 0 ; i < n; i++) {
        result[i] = LeftArr[i] * RightArr[i] ; 
    }
    return result;
}

int main() {
    vector <int> arr = {12 , 20};
    vector <int> result = profuctArray(arr);
    cout << "Original : " ;
    for (int num : arr ) {
        cout << num << " ";
    }

    cout << "New : " ;
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}

//find the nearlest year to 
bool HappyYear (unsigned short int year)
{
    std :: unordered_set <int> digits; //container 

    do {
        int digit = year % 10 ;
        if (digits.count(digtit) >  0) 
        {
            return false ;
        }
        digits.insert(digit) 
        year /= 10 ;

    }while (year > 0 )

    return true ;
}

unsigned short int nextHappyYear(unsigned short int year) 
{
    if (!HappyYear(++year)){

    }
    return year;
}


Task
Your task is to write a function called valid_spacing() or validSpacing() which checks if a string has valid spacing. The function should return either true or false (or the corresponding value in each language).

For this kata, the definition of valid spacing is one space between words, and no leading or trailing spaces. Words can be any consecutive sequence of non space characters. Below are some examples of what the function should return:

* 'Hello world'   => true
* ' Hello world'  => false
* 'Hello world  ' => false
* 'Hello  world'  => false
* 'Hello'         => true


bool valid_spacing (const std :: string &s) 
{
   if (s.empty() )
   {
    return true ;
   }

   if (std :: isspace(s.front()) || std :: isspace(s.back())) 
   {
    return false;
   }

  for (size_t i = 0 ; i < s.length() - 1; i++ )
  {
    if (std :: isspace(s[i]) && std :: isspace(s[i + 1])) 
    {
        return false;
    }
  }
   return true;
}

Remove the parentheses
In this kata you are given a string for example:

"example(unwanted thing)example"
Your task is to remove everything inside the parentheses as well as the parentheses themselves.

The example above would return:

"exampleexample"

std::string remove_parentheses(const std::string& str)
{
    std::string result;
    bool insideParenthese = false;

    for (char letter : str)
    {   
        if (letter == '(')
        {
            insideParenthese = true;
        }
        else if (letter == ')')
        {
            insideParenthese = false;
        }
        else if (!insideParenthese)
        {
            result += letter;
        }
    }   

    return result;
}


The goal of this exercise is to convert a string to a new string where each character in the
new string is "(" if that character appears only once in the original string, or ")" if that character appears more than once in the original string. Ignore capitalization when determining if a character is a duplicate.

Examples
"din"      =>  "((("
"recede"   =>  "()()()"
"Success"  =>  ")())())"
"(( @"     =>  "))((" 


std::string duplicate_encoder(const std::string& word)
{
    std::unordered_map <char, int> Char_count;

    for (char ch : word)
    {
         Char_count[std :: tolower (ch)]++;
    }

    std::string result;
    for (char ch : word)
    {
        if (Char_count[ch] == 1)
        {
            Char_count[ch] = '(';
            result += Char_count[ch];
        } else 
        {
            Char_count[ch] = ')';
            result += Char_count[ch];
        }
    }
    return result;
}


You will be given a string (x) featuring a cat 'C' and a mouse 'm'. The rest of the string will be made up of '.'.

You need to find out if the cat can catch the mouse from it's current position. The cat can jump over three characters. So:

C.....m returns 'Escaped!' <-- more than three characters between

C...m returns 'Caught!' <-- as there are three characters between the two, the cat can jump.

std::string cat_mouse(const std::string &x )
{
    size_t catPosition = x.find('C');
    size_t mousePosition = x.find('m'); 

    if (catPosition != std::string::npos && mousePosition != std::string::npos)
    {
        size_t distance = (mousePosition - catPosition);
    
        if (distance > 3)
        {
            return "Escaped!";
        }
        else {
            return "Caught!";
        }
    
    }
    else {
        return "Error";
    }
}


Find sum of two smallest numbers in array 

//FIRST
long sumTwoSmallestnumbers(std::vector <int> numbers)
{
    int smallest_one = INT_MAX;
    int smallest_two = INT_MAX;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] < smallest_one)
        {
            smallest_two = smallest_one;
            smallest_one = numbers[i];
        }
        else if (numbers[i] < smallest_two)
        {
            smallest_two = numbers[i];
        }
    }

    long sum = static_cast <long> (smallest_one) + (smallest_two);
    return sum;
}

//SECOND
#include <algorithm>
#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    std::sort(numbers.begin(), numbers.end());
    
    return (long)numbers[0] + (long)numbers[1];
}


ROT13 is a simple letter substitution cipher that replaces a letter with the letter 13 letters after it in the alphabet. ROT13 is an example of the Caesar cipher.

Create a function that takes a string and returns the string ciphered with Rot13. If there are numbers or special characters included in the string, they should be 
returned as they are. Only letters from the latin/english alphabet should be shifted, like in the original Rot13 "implementation".

std::string rot13(std::string msg)
{
    std::string result;
    for (char ch : msg)
    {
        if (std::isalpha(ch))
        {
           if (std::islower(ch) || std::isupper(ch))
           {
               result += (ch - 'a' + 13) % 26 + 'a';
           }
           else
           {
               result += (ch - 'a' + 13) % 26 + 'a';
           }
        }
        else
        {
            result += ch;
        }
    }
    return result;
}


OR


std::string rot13(std::string msg)
{
    std::string result;
    for (char ch : msg)
    {
        if (std::isalpha(ch))
        {
            char base = (std::islower(ch)) ? 'A' : 'a';
            result += (ch - base + 13) % 26 + base;
        }
        else {
            result += ch;
        }
       
    }
    return result;
}


Implement the function unique_in_order which takes as argument a sequence and returns a list of items without any elements with the same value next to each other and preserving the original order of elements.

For example:

uniqueInOrder("AAAABBBCCDAABBB") == {'A', 'B', 'C', 'D', 'A', 'B'}
uniqueInOrder("ABBCcAD")         == {'A', 'B', 'C', 'c', 'A', 'D'}
uniqueInOrder([1,2,2,3,3])       == {1,2,3}

template <typename T> std::vector <T> uniqueInOrder(const std::vector<T>& iterable)
{
	std::vector <T> result;
	for (const T& elem : iterable)
	{
		if (result.empty() || elem != iterable.back())
		{
			result.push_back(elem);
		}
	}
	return result;
}

std::vector <char> unigueInOrder(const std::string& iterable)
{
	std::vector <char> result;
	for (char elem : iterable)
	{
		if (result.empty() || elem != iterable.back())
		{
			result.push_back(elem);
		}
	}
	return result;
}

template <typename T>
void print(const std::vector<T>& arr)
{
	std::cout << "{";
	for (const auto& element : arr)
	{
		std::cout << element << ", ";
	}
	std::cout << "\b\b}" << std::endl;
}


Write a function that takes a string and an an integer n as parameters and returns a list of all words that are longer than n.

Example:

* With input "The quick brown fox jumps over the lazy dog", 4
* Return ['quick', 'brown', 'jumps']


std::vector <std::string> fileter_long_words(const std::string& sentence, int n)
{
	std::vector<std::string> result;
	std::stringstream ss(sentence);
	std::string word;
	while (ss >> word)  // read form stringstream object
	{
		if (word.length() > n)
		{
			result.push_back(word);
		}
	}
	return result;
}


You are given a list of unique integers arr, and two integers a and b. Your task is to find out whether or not a and b appear consecutively in arr, and return 
a boolean value (True if a and b are consecutive, False otherwise).  It is guaranteed

bool consecutive(std::vector <int>& arr, int a, int b)
{
	int index1 = -1;
	int index2 = -1;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == a)
		{
			index1 = arr[i];
		}
		if (arr[i] == b)
		{
			index2 = arr[i];
		}
	}
	int diff = std::abs(index2 - index1);
	return diff == 1;
}
!OR

bool consecutive(std::vector <int> arr, int a, int b)
{
	return abs(std::find(arr.begin(), arr.end(), a) - std::find(arr.begin(), arr.end(), b)) == 1;
}


In your class, you have started lessons about arithmetic progression. Since you are also a programmer, you have decided to write a function that will return the first n elements of the sequence with the given common difference d and first element a. Note that the difference may be zero!

The result should be a string of numbers, separated by comma and space.

Example
# first element: 1, difference: 2, how many: 5
arithmetic_sequence_elements(1, 2, 5)

std::string arthmeticsequence(int a, int d, int n)
{
	std::vector <int> sequence(n);
	sequence[0] = a;

	for (int i = 1; i < n; i++)
	{
		sequence[i] = sequence[i - 1] + d;
	}

	std::string result;
	for (int i = 0; i < n; i++)
	{
		result += std::to_string(sequence[i]);
		if (i != n - 1)
		{
			result += ", ";
		}
	}
	return result;
}

!OR

std::string arthmeticsequence(int a, int d, int n)
{
	std::string result;
	for (int i = 0; i < n; i++)
	{
		result += std::to_string(a) + ", ";
		a += d;
	}
	return result.substr(0 , result.size() - 2);
}




Given a string of words, you need to find the highest scoring word.

Each letter of a word scores points according to its position in the alphabet: a = 1, b = 2, c = 3 etc.

For example, the score of abad is 8 (1 + 2 + 1 + 4).

You need to return the highest scoring word as a string.

If two words score the same, return the word that appears earliest in the original string.

All letters will be lowercase and all inputs will be valid.


std::string higeestScoringWord(const std::string& str)
{
	std::vector <int> result;
	std::stringstream ss(str);
	std::string word;
	while (ss >> word)
	{
		int sumOfWord = 0;
		for (char i : word)
		{
			sumOfWord += static_cast<int>(tolower(i)) - 'a' + 1;
		}
		result.push_back(sumOfWord);
	}
	auto max = std::max_element(result.begin(), result.end());

	size_t index = std::distance(result.begin(), max);

	ss.clear(); //clear stringstream
	ss.str(str); //// Reset stringstream with the original string
	for (size_t i = 0; i <= index; ++i)
	{
		ss >> word;
	}
	return word;
}


In this Kata, you will be given an array of unique elements, and your task is to rearrange the values so that the first max value is followed by the first minimum, followed by second max value then second min value, etc.

For example:

solve([15,11,10,7,12]) = [15,7,12,10,11]

std::vector <int> solve(std::vector <int> v)
{
	std::vector<int> sortedV = v;
	std::sort(sortedV.begin(), sortedV.end());
	std::vector <int> result(v.size());
	int i = 0;
	int j = sortedV.size() - 1;
	for (int k = 0; k < sortedV.size(); k++)
	{
		if (k % 2 == 0)
		{
			sortedV[k] = result[j];
			j--;
		}
		else {
			sortedV[k] = result[i];
			i++;
		}
	}
	return result;
}

Complete the solution so that it returns a formatted string. The return value should equal "Value is VALUE" where value is a 5 digit padded number.

Example:

solution(5); // should return "Value is 00005

#include <iomanip>
std::string solution(int n)
{
	std::ostringstream oss;
	oss << "Value is : " << std::setw(5) << std::setfill('0') << n;
	return oss;
}

std :: setw() = to set the width of the output
std :: setfill() = to set the character 




Task
Given a number determine if it Automorphic or not .

The number passed to the function is positive
Input >> Output Examples
autoMorphic (25) -->> return "Automorphic" 
Explanation:
25 squared is 625 , Ends with the same number's digits which are 25 .

autoMorphic (13) -->> return "Not!!"

std::string autoMorphic(int number)
{
    long long square = static_cast<long long>(number) * number;
    std::string strNumber = std::to_string(number);
    std::string strSquare = std::to_string(square);

    if (strSquare.substr(strSquare.length() - strNumber.length()) == strNumber) {
        return "Automorphic";
    }
    else {
        return "Not Automorphic";
    }
}


Your task is to determine how many files of the copy queue you will be able to save into your Hard Disk Drive. The files must be saved in the order they appear in the queue.

Zero size files can always be saved even HD full.

Input:
Array of file sizes (0 <= s <= 100)
Capacity of the HD (0 <= c <= 500)
Output:
Number of files that can be fully saved in the HD.


int save(std::vector <int> size, int hd)
{
	int total_size = 0;
	int num_files = 0;
	for (int i = 0; i < size.size(); i++)
	{
		if (total_size + size[i] <= hd)
		{
			total_size += size[i];
			num_files++;
		}
		else {
			break;
		}
	}
	return num_files
}


Task
Write a function that accepts a fight string which consists of only small letters and * which represents a bomb drop place. Return who wins the fight after bombs are exploded. When the left side wins return Left side wins!, and when the right side wins return Right side wins!. In other cases, return Let's fight again!.

The left side letters and their power:

 w - 4
 p - 3 
 b - 2
 s - 1
The right side letters and their power:

 m - 4
 q - 3 
 d - 2
 z - 1
The other letters don't have power and are only victims.
The * bombs kill the adjacent letters ( i.e. aa*aa => a___a, **aa** => ______ );

Example
AlphabetWar("s*zz");           //=> Right side wins!
AlphabetWar("*zd*qm*wp*bs*"); //=> Let's fight again!
AlphabetWar("zzzz*s*");       //=> Right side wins!
AlphabetWar("www*www****z");  //=> Left side wins!

std::string alphabetWar(std::string fight)
{
	const std::unordered_map <char, int> lefiSide = 
	{
		{'w' , 4},
		{'p' , 3},
		{'b' , 2},
		{'s' , 1}
	};

	const std::unordered_map <char, int> rightSide = 
	{
		{'m' , 4},
		{'q' , 3},
		{'d' , 2},
		{'z' , 1}
	};

	for (size_t i = 0; i < fight.size(); i++)
	{
		if (fight[i] == '*')
		{
			if (i > 0) fight[i - 1] = ' ';
			if (i < fight.size() - 1 && fight[i + 1] != '*') fight[i + 1] = ' ';
		}
	}

	int countLeft = 0;
	int countRight = 0;
	for (char i : fight)
	{
		if (lefiSide.find(i) != lefiSide.end())
		{
			countLeft += lefiSide.at(i);
		}
		else if (rightSide.find(i) != rightSide.end()){
			countRight += rightSide.at(i);
		}
	}

	if (countLeft > countRight)
	{
		return "Left side wins!";
	}
	else if (countLeft < countRight)
	{
		return "Right side wins!";
	}
	else {
		return "Let's fight again!";
	}

}


Implement length to count the number of nodes in a linked list.
Length(null) => 0
Length(1 -> 2 -> 3 -> null) => 3
Implement Count() to count the occurrences of an integer in a linked list.

Count(null, 1) => 0
Count(1 -> 2 -> 3 -> nullptr, 1) => 1
Count(1 -> 1 -> 1 -> 2 -> 2 -> 2 -> 2 -> 3 -> 3 -> nullptr, 2) => 4

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(nullptr) {};
};

int lenght(ListNode* head)
{
	int count = 0;
	ListNode* current = head;
	while (current != nullptr)
	{
		count++;
		current = current->next;
	}
	return count;
}

int Count(ListNode* head, int data)
{
	int count = 0;
	ListNode* current = head;
	while (current != nullptr)
	{
		if (current->val == data) 
		{
			count++;
		}
		current = current->next;
	}
	return count;
}


Time to win the lottery!

Given a lottery ticket (ticket), represented by an array of 2-value arrays, you must find out if you've won the jackpot.

Example ticket:

{ { "ABC", 65 }, { "HGR", 74 }, { "BYHT", 74 } }
To do this, you must first count the 'mini-wins' on your ticket. Each subarray has both a string and a number within it. If the character code of any of the characters in the string matches the number, you get a mini win. Note you can only have one mini win per sub array.

Once you have counted all of your mini wins, compare that number to the other input provided (win). If your total is more than or equal to (win), return 'Winner!'. Else return 'Loser!'.

std::string bingo(std::vector <std::pair<std::string, int>> ticket, int win)
{
	int minWins = 0;
	for (const auto& pair : ticket)
	{
		const std::string& str = pair.first;
		int num = pair.second;
		for (char i : str)
		{
			if (i == num)
			{
				minWins++;
				break;
			}
		}
	}

	if (minWins >= win)
	{
		return "Winner!";
	}
	else {
		return "Loser!";
	}
}


The accounts of the "Fat to Fit Club (FFC)" association are supervised by John as a volunteered accountant. 
The association is funded through financial donations from generous benefactors. 
John has a list of the first n donations: [14, 30, 5, 7, 9, 11, 15] 
He wants to know how much the next benefactor should give to the association so 
that the average of the first n + 1 donations should reach an average of 30. 
After doing the math he found 149. He thinks that he could have made a mistake.

if dons = [14, 30, 5, 7, 9, 11, 15] then new_avg(dons, 30) --> 149

Could you help him?

Task
The function new_avg(arr, navg) should return the expected donation (rounded up to the next integer) that will permit to reach the average navg.

static long long newAvg(std::vector <double>& arr, double navg)
{
	long long  sum = 0;
	for (int i : arr)
	{
		sum += i;
	}

	long long desired_sum = static_cast<long long> (navg) * (arr.size() + 1);

	long long Donnation = (desired_sum - sum);

	if (Donnation <= 0)
	{
		throw std::logic_error("Desired average is not achievable");
	}

	return static_cast<int> (std::ceil(Donnation));
}



std::vector <std::string> rotate(const std::string& s)
{
	if (s.empty())
	{
		return {" "};
	}

	/* ANOTHER OPTION
	std::vector<std::string > result;
	std::stringstream ss(s);
	std::string word;
	while (ss >> word)
	{
		for (size_t i = 0; i < word.size(); i++)
		{
			result.push_back(word.substr(i) + word.substr(0, i));
		}
	}
	*/
    /*
	std::vector <std::string> result;
	std::string rotate = s;

	for (size_t i = 0; i < s.size(); i++)
	{
		result.push_back(rotate);
		rotate = rotate.substr(i) + rotate[0];
	}

	return result;
}


Notes
Number passed is always Positive .
Return the result as String
Input >> Output Examples
disariumNumber(89) ==> return "Disarium !!"
Explanation:
Since , 8  + 9 = 89 , thus output is "Disarium !!"

std::string disariumNumber(int number)
{
	int sumOfStr = 0 ;
	std::string numStr = std::to_string (number);
	int position = 1;
	for (char digit : numStr)
	{
		int digitVal = digit - '0';
		sumOfStr += pow(digitVal, position);
		position++;
	}
	if (sumOfStr == number)
	{
		return "Disarium !!";
	}
	else {
		return "Not !!";
	}
}



The aim of the kata is to decompose n! (factorial n) into its prime factors.

Examples:

n = 12; decomp(12) -> "2^10 * 3^5 * 5^2 * 7 * 11"
since 12! is divisible by 2 ten times, by 3 five times, by 5 two times and by 7 and 11 only once.

n = 22; decomp(22) -> "2^19 * 3^9 * 5^4 * 7^3 * 11^2 * 13 * 17 * 19"

n = 25; decomp(25) -> 2^22 * 3^10 * 5^6 * 7^3 * 11^2 * 13 * 17 * 19 * 23
Prime numbers should be in increasing order. When the exponent of a prime is 1 don't put the exponent.


class FactList
{
	struct Element{
		int nr;
		int power;

		Element(int nr)
		{
			this->nr = nr;
			power = 1;
		}
	};

	vector<Element> factorialList;
	void AddElement(const int element);

public:
	void Add(const int nr);
	string Print();
};

void FactList::AddElement(const int element)
{
	auto it = find_if(factorialList.begin(), factorialList.end(), [&](const Element& el){return el.nr == element; });

	if (it == factorialList.end())
		factorialList.push_back(Element(element));
	else
		it->power++;
}

void FactList::Add(const int nr)
{
	int number = nr;
	int k = 2;

	while (number != 1)
	{
		while (number % k == 0)
		{
			AddElement(k);
			number /= k;
		}

		k += (k == 2) ? 1 : 2;
	}
}

std::string FactList::Print()
{
	sort(factorialList.begin(), factorialList.end(), [](const Element& el1, const Element& el2){return el1.nr < el2.nr;});

	string res;

	for (unsigned int i = 0; i < factorialList.size(); ++i)
	{
		if (i != 0)
			res += " * ";

		res += to_string(factorialList[i].nr);
		if (factorialList[i].power != 1)
		{
			res += '^';
			res += to_string(factorialList[i].power);
		}
	}

	return res;
}

std::string decomp(int n) {
	FactList factList;
	for (int i = 2; i <= n; ++i)
		factList.Add(i);
	
	return factList.Print();
}


dataand data1 are two strings with rainfall records of a few cities for months from January to December. The records of towns are separated by \n. The name of each town is followed by :.

data and towns can be seen in "Your Test Cases:".

Task:
function: mean(town, strng) should return the average of rainfall for the city town and the strng data or data1 (In R and Julia this function is called avg).
function: variance(town, strng) should return the variance of rainfall for the city town and the strng data or data1.
Examples:
mean("London", data), 51.19(9999999999996) 
variance("London", data), 57.42(833333333374)
Notes:
if functions mean or variance have as parameter town a city which has no records return -1 or -1.0 (depending on the language)


static double mean(std::string town, const std::string& strng)
{
	std::istringstream iss(strng);
	std::string line;

	while (std::getline(iss, line))
	{
		if (line.find(town + ':') == 0)
		{
			std::vector<double> rain_fall;
			std::istringstream line_stream(line.substr(town.size() + 1));
			double value;
			while (line_stream >> value)
			{
				rain_fall.push_back(value);
			}
			if (rain_fall.empty())
			{
				return -1.0;
			}

			double total_rainfall = 0;
			for (double r : rain_fall)
			{
				total_rainfall += r;
			}

			return total_rainfall / rain_fall.size();
		}
	}
	return -1.0;
}

static double variance(std::string town, const std::string& strng)
{
    double mean_value = mean(town, strng);

    if (mean_value == -1.0)
    {
        return -1.0;
    }

    std::istringstream iss(strng);
    std::string line;
    while (std::getline(iss, line))
    {
        if (line.find(town + ':') == 0)
        {
            std::vector<double> rain_fall;
            std::istringstream line_stream(line.substr(town.size() + 1));
            double value;
            while (line_stream >> value)
            {
                rain_fall.push_back(value);
            }
            if (rain_fall.empty())
            {
                return -1.0;
            }

            double sum_squares = 0;
            for (double r : rain_fall)
            {
                sum_squares += std::pow(r - mean_value, 2);
            }

            return sum_squares / rain_fall.size();
        }
    }
    return -1.0;
}

The Fibonacci numbers are the numbers in the following integer sequence (Fn):

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, ...

such as

F(n) = F(n-1) + F(n-2) with F(0) = 0 and F(1) = 1.

Given a number, say prod (for product), we search two Fibonacci numbers F(n) and F(n+1) verifying

F(n) * F(n+1) = prod.

Your function productFib takes an integer (prod) and returns an array:

[F(n), F(n+1), true] or {F(n), F(n+1), 1} or (F(n), F(n+1), True)
depending on the language if F(n) * F(n+1) = prod.

If you don't find two consecutive F(n) verifying F(n) * F(n+1) = prodyou will return

[F(n), F(n+1), false] or {F(n), F(n+1), 0} or (F(n), F(n+1), False)
F(n) being the smallest one such as F(n) * F(n+1) > prod.

Some Examples of Return:
(depend on the language)

productFib(714) # should return (21, 34, true), 
                # since F(8) = 21, F(9) = 34 and 714 = 21 * 34

typedef unsigned long long ull;
class ProdFib
{
public :
	static std::vector <ull> productFib(ull prod)
	{
		ull fib1 = 0;
		ull fib2 = 0;
		while (fib1 * fib2 < prod)
		{
			ull temp = fib1;
			fib1 = fib2;
			fib2 = temp + fib2;
		}
		return { fib1 , fib2 , fib1 * fib2 == prod };
	}
};


The input is a string str of digits. Cut the string into chunks (a chunk here is a substring of the initial string) 
of size sz (ignore the last chunk if its size is less than sz).

If a chunk represents an integer such as the sum of the cubes of its digits is divisible by 2, reverse that chunk; otherwise rotate it to the left by one position.
Put together these modified chunks and return the result as a string.

sz is <= 0 or if str is empty return ""
sz is greater (>) than the length of str it is impossible to take a chunk of size sz hence return "".
Examples:
revrot("123456987654", 6) --> "234561876549"
revrot("123456987653", 6) --> "234561356789"
revrot("66443875", 4) --> "44668753"
revrot("66443875", 8) --> "64438756"
revrot("664438769", 8) --> "67834466"
revrot("123456779", 8) --> "23456771"

//MY BUT IT ALSO CORRECT 
std::string revrot(const std::string& str, int sz) {
    if (sz <= 0 || str.empty() || sz > str.size()) return "";

    std::string result;
    for (size_t i = 0; i + sz <= str.size(); i += sz) {
        std::string chunk = str.substr(i, sz);
        int sum_of_cubes = 0;
        for (char digit : chunk) {
            int num = digit - '0';
            sum_of_cubes += num * num * num;
        }
        if (sum_of_cubes % 2 == 0) {
            // Reverse the chunk
            result += std::string(chunk.rbegin(), chunk.rend());
        } else {
            // Rotate the chunk to the left by one position
            result += chunk.substr(1) + chunk[0];
        }
    }
    return result;
}
!ORRRR

class RevRot
{
public:
	static std::string revRot(const std::string &str, unsigned int sz)
	{
		if (sz <= 0 || sz > str.size() || str.empty()) return "";
		std::string s, res;
		for (size_t i = 0; i <= str.size() - sz; i += sz)
		{
			s = str.substr(i, sz);
			unsigned int sum = std::accumulate(s.begin(), s.end(), 0, [](unsigned int a, int b) { return a + std::pow(b - '0', 3); });
			if (sum % 2 == 0) res += std::string(s.rbegin(), s.rend());
			else res += s.substr(1,s.size()) + s.substr(0,1);
		}
		return res;
	}
};



Given a range [L, R], find the number of integers in that range which have an odd number of odd divisors. For example, 1 has only one divisor and it is odd, 9 has three divisors {1, 3, 9} and all of them are odd. Meanwhile, 18 has six divisors {1, 2, 3, 6, 9, 18} but three of them are odd. So 1, 9 and 18 have an odd number of odd divisors.

Range: (1 ≤ L ≤ R ≤ 1018)  and this pise of code can you complete it typedef unsigned long long int ULL;


//CORRECT 
#include <cmath>

using ULL = unsigned long long int;

ULL flsq(const long double x) {
    return std::sqrt(x);
}

ULL odd_isReal(const ULL L, const ULL R) {
    return flsq(R) - flsq(L - 1) + flsq(R / 2.) - flsq((L - 1) / 2.);
}

!ORRRR

// find the divisours 
static std::vector <ULL> fins_divisors(ULL num)
{
	std::vector <ULL>  count_divisors;
	for (ULL i = 1; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			count_divisors.push_back(i);
			if (i != sqrt(num))
			{
				count_divisors.push_back(num / i);
			}
		}
	}
	return count_divisors;
}

//check divisors 
static std::vector <ULL> check_divisors(std::vector <ULL> &count_divisors)
{
	std::vector <ULL> result;
	for (size_t i = 0; i < count_divisors.size(); i++)
	{
		if (count_divisors[i] % 2 != 0) 
		{
			result.push_back(count_divisors[i]);
		}
	}
	return result;
}

static ULL odd_isReal(ULL L, ULL R)
{
	ULL count = 0;
	for (ULL i = L; i <= R; i++)
	{
		std::vector<ULL> divisors = fins_divisors(i);
		std::vector <ULL> oddDivisors = check_divisors(divisors);
		if (oddDivisors.size() % 2 != 0)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	ULL L = 1, R = 100;
	ULL result = odd_isReal(L, R);
	std::cout << "Result = " << result << std::endl;
	return 0;

}

Your task is to write a function that does just what the title suggests (so, fair warning, be aware that you are not getting out of it just throwing a lame bas sorting method there) with an array/list/vector of integers and the expected number n of smallest elements to return.
the number of elements to be returned cannot be higher than the array/list/vector length;
elements can be duplicated;
in case of duplicates, just return them according to the original order (see third example for more clarity).
Same examples and more in the test cases:

firstNSmallest({1,2,3,4,5},3) == {1,2,3}
firstNSmallest({5,4,3,2,1},3) == {3,2,1}

std::vector<int> firstNSmallest(const std::vector<int>& arr, int n) {
    std::vector<int> result;

    // Edge case: If n is 0 or negative, or greater than the array size, return empty vector.
    if (n <= 0 || n > arr.size())
        return result;

    // Create a vector of pairs to store both the value and its index.
    std::vector<std::pair<int, int>> indexedArr;
    for (int i = 0; i < arr.size(); ++i) {
        indexedArr.push_back(std::make_pair(arr[i], i));
    }

    // Sort the indexed array based on the values while maintaining original order for duplicates.
    std::stable_sort(indexedArr.begin(), indexedArr.end());

    // Add the first n smallest elements to the result vector in their original order.
    for (int i = 0; i < n; ++i) {
        result.push_back(indexedArr[i].first);
    }

    return result;
}



Write a function that accepts fight string consists of only small letters and return who wins the fight. When the left side wins return Left side wins!, when the right side wins return Right side wins!, in other case return Let's fight again!.

The left side letters and their power:

 w - 4
 p - 3
 b - 2
 s - 1
The right side letters and their power:

 m - 4
 q - 3
 d - 2
 z - 1
The other letters don't have power and are only victims.

Example
AlphabetWar("z");        //=> Right side wins!
AlphabetWar("zdqmwpbs"); //=> Let's fight again!
AlphabetWar("zzzzs");    //=> Right side wins!
AlphabetWar("wwwwwwz");  //=> Left s

std::string alphabet_War(std::string fight)
{
	std::unordered_map <char, int> power{
		 {'w', 4}, {'p', 3}, {'b', 2}, {'s', 1},
		{'m', -4}, {'q', -3}, {'d', -2}, {'z', -1}
	};

	int count_right = 0;
	int count_left = 0;

	for (char i : fight)
	{
		if (power.find(i) != power.end())
		{
			if (power[i] > 0)
			{
				count_left += power[i];
			}
			else
			{
				count_right -= power[i];
			}
		}
	}
	if (count_right > count_left)
	{
		return "Right side wins!";
	}
	else if (count_left > count_right)
	{
		return "Left side wins!";
	}
	else if (count_right == count_left)
	{
		return "Let's fight again!";
	}
}

!ORRRR 

string alphabetWar(string fight){
  int n(0);
  for (auto c(fight.begin()); c!= fight.end(); ++c){
    switch (*c){
      case 'w': ++n;
      case 'p': ++n;
      case 'b': ++n;
      case 's': ++n; break;
      case 'm': --n;
      case 'q': --n;
      case 'd': --n;
      case 'z': --n;
      default: break;
    }
  }
  return !n ? "Let's fight again!" : n > 0 ? "Left side wins!" : "Right side wins!";
}

You have a positive number n consisting of digits. You can do at most one operation: 
Choosing the index of a digit in the number,
remove this digit at that index and insert it back to another or at the same place 
in the number in order to find the smallest number you can get.

Task:
Return an array or a tuple or a string depending on the language (see "Sample Tests") with

the smallest number you got
the index i of the digit d you took, i as small as possible
the index j (as small as possible) where you insert this digit d to have the smallest number.
Examples:
smallest(261235) --> [126235, 2, 0] or (126235, 2, 0) or "126235, 2, 0"
126235 is the smallest number gotten by taking 1 at index 2 and putting it at index 0

smallest(209917) --> [29917, 0, 1] or ...

[29917, 1, 0] could be a solution too but index `i` in [29917, 1, 0] is greater than 
index `i` in [29917, 0, 1].

class ToSmallest {
public:
	static std::vector<long long> smallest(long long n)
	{
		std::string new_Num = std::to_string(n);
		std::vector <long long> result{ n , 0 , 0 };

		for (size_t i = 0; i < new_Num.size(); ++i)
		{
			for (size_t j = 0; j <= new_Num.size(); ++j)
			{
				if (i != j)
				{
					std::string new_str = new_Num;
					char digit = new_str[i];
					new_str.erase(new_str.begin() + i);
					new_str.insert(new_str.begin() + j, digit);

					if (std::stoll(new_str) < result[0])
					{
						result[0] = std::stoll(new_str);
						result[1] = i;
						result[2] = j;
					}
				}
			}
		}
		return result;
	}
};


Task
We need a function to collect these numbers, that may receive two integers 
�
a, 
�
b that defines the range 
[
�
,
�
]
[a,b] (inclusive) and outputs a list of the sorted numbers in the range that fulfills the property described above.

Examples
Let's see some cases (input -> output):

1, 10  --> [1, 2, 3, 4, 5, 6, 7, 8, 9]
1, 100 --> [1, 2, 3, 4, 5, 6, 7, 8, 9, 89]

static bool isEureka(int num)
{
	int sum = 0;
	int count = 1;
	std::string digits = std::to_string(num);
	for (auto i : digits)
	{
		sum += pow(i - '0', count);
		count++;
	}
	return sum == num;
}

std::vector <unsigned int> sumDigPow(unsigned int a, unsigned int b)
{
	std::vector <unsigned int> result;
	for (; a <= b; a++)
	{
		if (isEureka(a))
		{
			result.push_back(a);
		}
	}
	return result;
}

HOW TO FIND SUM OF THE TREE

struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
};

Node* newNode(int data)
{
	Node* node = new Node;
	node->data = data;
	node->right = node->left = NULL;
	return node;
}

void inorder(Node* root)
{
	if (root == NULL)
		return;
	inorder(root->left);
	std::cout << root->data << " ";
	inorder(root->right);
}


int sumTheTreeValue(Node* root)
{
	if (root == NULL)
		return 0;
	return (root->data + sumTheTreeValue(root->left) + sumTheTreeValue(root->right));
}


int main()
{
	Node* root = newNode(8);
	root->left = newNode(7);
	root->right = newNode(6);
	root->left->left = newNode(5);
	root->left->right = newNode(4);
	root->right->left = newNode(3);
	root->right->right = newNode(2);
	std :: cout << "The inorder of the given binary tree is: ";
	inorder(root);
	std :: cout <<  std :: endl;
	std :: cout << "Sum of nodes: " << sumTheTreeValue(root);;
	return 0;
}

!!!!!OOORRRRR

struct Node
{
	int data;
	Node* left;
	Node* right;
};

int sumTheTreeValue(Node* root)
{
	if (root == nullptr)
		return 0;
	int sum = (root->data);
	sum += sumTheTreeValue(root->left);
	sum += sumTheTreeValue(root->right);
	return sum;
}


Well met with Fibonacci bigger brother, AKA Tribonacci.

As the name may already reveal, it works basically like a Fibonacci, but summing the last 3 (instead of 2) numbers of the sequence to generate the next. And, worse part of it, regrettably I won't get to hear non-native Italian speakers trying to pronounce it :(

So, if we are to start our Tribonacci sequence with [1, 1, 1] as a starting input (AKA signature), we have this sequence:

[1, 1 ,1, 3, 5, 9, 17, 31, ...]

std::vector <int> tribonacci(std::vector <int> signature, int n )
{
	std::vector <int> result;

	if (n == 0)
	{
		return result;
	}

	for (int i = 0; i < 3 && i < n; i++)
	{
		result.push_back(signature[i]);
	}

	for (int i = 3; i < n; i++)
	{
		int next = result[i - 1] + result[i - 2] + result[i - 3];
		result.push_back(next);
	}
	return result;
}

!!!ORRR
std::vector <int> tribonacci(std::vector <int> signature, int n )
{
	signature.resize(n);

	for (int i = 3; i < n; i++)
	{
		signature[i] = signature[i - 1] + signature[i - 2] + signature[i - 3];
	}
	return signature;
}


If you have completed the Tribonacci sequence kata, you would know by now that mister Fibonacci has at least a bigger brother. If not, give it a quick look to get how things work.

Well, time to expand the family a little more: think of a Quadribonacci starting with a signature of 4 elements and each following element is the sum of the 4 previous, a Pentabonacci (well Cinquebonacci would probably sound a bit more italian, but it would also sound really awful) with a signature of 5 elements and each following element is the sum of the 5 previous, and so on.

Well, guess what? You have to build a Xbonacci function that takes a signature of X elements - and remember each next element is the sum of the last X elements - and returns the first n elements of the so seeded sequence.

xbonacci {1,1,1,1} 10 = {1,1,1,1,4,7,13,25,49,94}
xbonacci {0,0,0,0,1} 10 = {0,0,0,0,1,1,2,4,8,16}
xbonacci {1,0,0,0,0,0,1} 10 = {1,0,0,0,0,0,1,2,3,6}
xbonacci {1,1} produces the Fibonacci sequence


std::vector <int> tribonacci(std::vector <int> signature, int n )
{
	int x = signature.size();
	std::vector <int> result;
	if (n == 0)
	{
		return result;
	}

	for (int i = 0; i < x ; i++)
	{
		result.push_back(signature[i]);
	}

	for (int i = x; i < n; i++)
	{
		int next = 0;
		for (int j = i - x; j < i; j++)
		{
			next += result[j];
		}
		 result.push_back(next);
	}

	result.resize(n);
	return result;
}

!OORRR 

std::vector <int> tribonacci(std::vector <int> signature, int n )
{
	signature.resize(n);
	int x = signature.size();

	for (int i = x; i < n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			signature[i] += signature[i - j];
		}
	}
	return signature;
}



Task :
Given a List [] of n integers , find minimum number to be inserted in a list, so that sum of all elements of list should equal the closest prime number .

Notes
List size is at least 2 .

List's numbers will only positives (n > 0) .

Repetition of numbers in the list could occur .

The newer list's sum should equal the closest prime number .

Input >> Output Examples
1- minimumNumber ({3,1,2}) ==> return (1)



Take the following IPv4 address: 128.32.10.1. This address has 4 octets where each octet is a single byte (or 8 bits).

1st octet 128 has the binary representation: 10000000
2nd octet 32 has the binary representation: 00100000
3rd octet 10 has the binary representation: 00001010
4th octet 1 has the binary representation: 00000001
So 128.32.10.1 == 10000000.00100000.00001010.00000001

//convert ip number into binarry 
std::string ipToBinary(std::string& ip)
{
	std::stringstream ss(ip);
	std::string octet;
	std::string ipBinary;

	while (std::getline(ss, octet, '.'))
	{
		int value = std::stoi(octet);

		ipBinary += std::bitset<8>(value).to_string();
	}

	return ipBinary;
}

Because the above IP address has 32 bits, we can represent it as the 32 bit number: 2149583361.

Write a function ip_to_int32(ip) ( JS: ipToInt32(ip) ) that takes an IPv4 address and returns a 32 bit number.

Example
"128.32.10.1" => 2149583361

uint32_t  ip_to_int32(std::string& ip)
{
	std::vector <int> octets;
	std::stringstream ss(ip);
	std::string octet;

	while (std::getline(ss, octet, '.'))
	{
		octets.push_back(std :: stoi(octet));
	}
	// Calculate the 32-bit number using bitwise operations
	uint32_t result = (octets[0] << 24) | (octets[1] << 16) | (octets[2] << 8) | octets[3];
	return result;
}

!OORRR 
uint32_t ip_to_int32(const string& ip) {
    string str;
    uint32_t res = 0;
    stringstream ss(ip);
    while (getline(ss, str, '.')) {
        res <<= 8;
        res += stoi(str);
    }
    return res;
}



!!!!!RETURN SEQUENCE OF THE XBONACCI USING COMPLEX NUMBERS 
std::vector<std::complex<double>> xbonacci(std::vector <std::complex<double>> signature, double n)
{
	double x = signature.size();

	for (double i = x; i < n; i++)
	{
		std::complex<double> nextElem = 0;
		for (double j = 1; j <= x; j++)
		{
			if (i - j >= 0)
			{
				nextElem += signature[i - j];
			}
			signature.push_back(nextElem);
		}
	}
	return signature;
}

int main()
{
	std::vector <std::complex<double>> signature = { {-1.0 , -1.0} , {-0.5 , -0.10} };
	double n = 10.0;
	std::vector <std::complex<double>> result = xbonacci(signature, n);

	std::cout << "sequence : " << std::endl;
	for (const auto& num : result)
	{
		std::cout << num << ", ";
	}
	std::cout << std::endl;
	return 0;
}

sequence :
(-1,-1), (-0.5,-0.1), (-0.5,-0.1), (-1.5,-1.1), (-0.5,-0.1), (-1,-0.2), (-1.5,-1.1), (-2,-1.2), 
-0.5,-0.1), (-2,-1.2), (-1,-0.2),
 (-1.5,-0.3), (-1.5,-1.1), (-2.5,-1.3), (-2,-1.2), (-3.5,-2.3), (-0.5,-0.1), (-2.5,-1.3),

*/

