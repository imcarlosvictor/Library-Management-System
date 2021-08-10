#include <iostream>
#include <vector>
#include "bookshop.h"

int main()
{
  std::cout << "\n\n|-------------------------------------------------------|\n";
  std::cout << "|\t\tLIBRARY MANAGEMENT SYSTEM\t\t|\n";
  std::cout << "|-------------------------------------------------------|\n";
  std::cout << "|\t\t1. Show Book Records\t\t\t|\n";
  std::cout << "|\t\t2. Check Availability\t\t\t|\n";
  std::cout << "|\t\t3. Add Book Records\t\t\t|\n";
  std::cout << "|\t\t4. Modify Book Records\t\t\t|\n";
  std::cout << "|\t\t5. Delete Book Records\t\t\t|\n";
  std::cout << "|\t\t6. Exit\t\t\t\t\t|\n";
  std::cout << "|-------------------------------------------------------|\n";

  // Stores all books
  std::vector<struct Book> library_records;

  bool program = true;
  while (program) {
    std::cout << "\n~ Select an option from above: ";
    int decision;
    std::cin >> decision;

    switch (decision) {
      case 1:
        ShowRecords();
        break;
      case 2:
        CheckAvailability();
        break;    
      case 3: {
        AddBook(library_records);
        break;
              }
      case 4:
        ModifyRecords();
        break;
      case 5:
        DeleteRecord();
        break;
      case 6:
        break;
      default:
        std::cout << "Enter an valid option";
        continue;
    }
  }

  return 0;
}
