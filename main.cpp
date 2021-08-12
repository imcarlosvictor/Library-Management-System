#include <iostream>
#include <vector>
#include "bookshop.h"

int main()
{
  // Stores all books
  std::vector<struct Book> library_records;

  bool program = true;
  while (program) {
    // Menu
    std::cout << "\n\n|-------------------------------------------------------|\n";
    std::cout << "|\t\tLIBRARY MANAGEMENT SYSTEM\t\t|\n";
    std::cout << "|-------------------------------------------------------|\n";
    std::cout << "|\t\t1. Show Book Records\t\t\t|\n";
    std::cout << "|\t\t2. Add Book Records\t\t\t|\n";
    std::cout << "|\t\t3. Modify Book Records\t\t\t|\n";
    std::cout << "|\t\t4. Delete Book Records\t\t\t|\n";
    std::cout << "|\t\t5. Exit\t\t\t\t\t|\n";
    std::cout << "|-------------------------------------------------------|\n";

    // User Decision
    std::cout << "\n~ Select an option from above: ";
    int decision;
    std::cin >> decision;

    switch (decision) {
      case 1:
        ShowRecords(library_records);
        break;
      case 2:
        AddBook(library_records);
        break;
      case 3:
        ModifyRecords(library_records);
        break;
      case 4:
        DeleteRecord(library_records);
        break;
      case 5:
        break;
      default:
        std::cout << "Enter an valid option";
        continue;
    }
  }

  std::cout << "\n~ Session ended...";
  return 0;
}
