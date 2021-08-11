#include <iostream>
#include <vector>
#include "bookshop.h"

void ShowRecords(std::vector<struct Book> lib_records)
{
  std::cout << "\n|---------------------------------------------------------------------------------------------------------------------------------|\n";
  std::cout << "|\tBook ID\t\t|\tTitle\t\t|\tAuthor\t\t|\tYear Published\t\t|\tDate Added\t  |\n";
  std::cout << "|---------------------------------------------------------------------------------------------------------------------------------|\n";

  for ( auto i : lib_records ) {
    std::cout << "|\t"<< i.title << "\t|\t" << i.author << "\t|\t" << i.year_published << "\t|\t" << i.id << "\t|\t";
  }
}

void CheckAvailability()
{

}

void AddBook(std::vector<struct Book>& lib_records)
{
  std::string title;
  std::string author;
  std::string genre;
  int year_published;
  int book_ID;
  
  // Title
  std::cout << "Title: ";
  std::getline(std::cin, title);
  // Author
  std::cout << "Author: ";
  std::getline(std::cin, author);
  // Genre
  std::cout << "Genre: ";
  std::getline(std::cin, genre);
  // Publish year
  std::cout << "Year Pusblished: ";
  std::cin >> year_published;
  // ID
  std::cout << "Book ID: ";
  std::cin >> book_ID;

  // Create new object
  Book new_record = {title, author, genre, year_published, book_ID};
  std::cout << std::endl;
  std::cout << new_record.title << std::endl;
  std::cout << new_record.author << std::endl;
  std::cout << new_record.genre << std::endl;
  std::cout << new_record.year_published << std::endl;
  std::cout << new_record.id << std::endl;

  // Add to library records
  lib_records.push_back(new_record);
}

void ModifyRecords()
{

}

void DeleteRecord()
{

}
