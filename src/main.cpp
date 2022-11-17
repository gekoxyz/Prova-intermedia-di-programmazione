#include <iostream>
#include <vector>
#include "date.h"
#include "book.h"

using namespace std;

int main() {
    /* 
     * DATE TESTING
     */
    cout << "=== DATES TESTS ===" << endl;
    Date default_date{};
    cout << default_date << endl;
    cout << "IsLeapYear(2022) -> " << Date::IsLeapYear(2022) << endl;
    cout << "IsLeapYear(2012) -> " << Date::IsLeapYear(2012) << endl;
    Date date1{20, Date::Month::Nov, 2001};
    cout << date1 << endl;
    try {
        Date date2{30, Date::Month::Feb, 2022};
    } catch (Date::DATE_invalid){
        cout << "Data invalida";
    }
    cout << endl;

    /*
     * MINIMAL TESTING
     */
    cout << "=== BOOKS TESTS ===" << endl;
    std::vector<Book> shelf(10);
    //Book my_favourite_book("David", "Foster Wallace", "Una cosa divertente che non farò mai più", "887-521-837-4");

    Book book1;
    Book book2{"Titolo"};
    Book book3{"Titolo", "Nome"};
    Book book4{"Titolo", "Nome", "Cognome"};
    Book book5{"Titolo", "Nome", "Cognome", Date{}, Book::LENDING};

    std::cout << book1 << std::endl;
    std::cout << book2 << std::endl;
    std::cout << book3 << std::endl;
    std::cout << book4 << std::endl;
    std::cout << book5 << std::endl;

    return 0;
}


