#include <iostream>
#include <vector>
#include <limits>
#include "bookshop.h"

void ShowRecords(std::vector<struct Book> lib_records)
{
  for (int i=0; i<lib_records.size(); ++i) {
    std::cout << "\n|~~ RECORD: " << i << " ~~" << std::endl;
    std::cout << "|ID: " << lib_records[i].id << std::endl;
    std::cout << "|TITLE: " << lib_records[i].title << std::endl;
    std::cout << "|AUTHOR: " << lib_records[i].author << std::endl;
    std::cout << "|PUBLISHED: " << lib_records[i].year_published << std::endl;

    // Print all the elements stored in the array
    std::cout << "|GENRE: ";
    for (auto i : lib_records[i].genre) {
      std::cout << i << " ";
    }
    std::cout << std::endl;
  }
}

void AddBook(std::vector<struct Book>& lib_records)
{
  std::string title;
  std::string author;
  std::string genre;
  int year_published;
  int book_ID;
  
  // Title
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cout << "\nTitle: ";
  std::getline(std::cin, title, '\n');
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  // Author
  std::cout << "Author: ";
  std::getline(std::cin, author, '\n');
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  // Genre
  std::cout << "Genre: ";
  std::string input;
  std::getline(std::cin, input, '\n');
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  // Publish year
  std::cout << "Year Published: ";
  std::cin >> year_published;
  // ID
  std::cout << "Book ID: ";
  std::cin >> book_ID;

  // Create new object
  /* Book new_record = {title, author, genre, year_published, book_ID}; */
  Book new_record;
  new_record.title = title;
  new_record.author = author;
  new_record.year_published = year_published;
  new_record.id = book_ID;

  for (auto c : input) {
    if (c == ' ') {
      new_record.genre.push_back(genre);
      genre = "";
    } else {
      genre += c;
    }
  }
  new_record.genre.push_back(genre);

  // Add to library records
  lib_records.push_back(new_record);

  // Print new object
  std::cout << "Successfully created record" << std::endl;
}

void ModifyRecords(std::vector<struct Book>& lib_records)
{
  std::cout << "Enter Book ID: ";
  int book_id;
  std::cin >> book_id;

  int index;
  for (int i=0; i<lib_records.size() ; ++i) {
    if (lib_records[i].id == book_id) {
      index = i;
      // Print information
      std::cout << "\n|~~ RECORD: " << i << " ~~" << std::endl;
      std::cout << "|ID: " << lib_records[i].id << std::endl;
      std::cout << "|TITLE: " << lib_records[i].title << std::endl;
      std::cout << "|AUTHOR: " << lib_records[i].author << std::endl;
      std::cout << "|PUBLISHED: " << lib_records[i].year_published << std::endl;

      // Print all the elements stored in the array
      std::cout << "|GENRE: ";
      for (auto i : lib_records[i].genre) {
        std::cout << i << " ";
      }
      std::cout << std::endl;
    }
  }

  // Delete record being modified
  lib_records.erase(lib_records.begin() + index);

  // Call to create a new record
  AddBook(lib_records);

}

void DeleteRecord(std::vector<struct Book>& lib_records)
{
  std::cout << "Enter Book ID: ";
  int book_id;
  std::cin >> book_id;

  int index;
  for (int i=0; i<lib_records.size(); ++i) {
    if (lib_records[i].id == book_id) {
      index = i;
      // Print information
      std::cout << "\n|~~ RECORD: " << i << " ~~" << std::endl;
      std::cout << "|ID: " << lib_records[i].id << std::endl;
      std::cout << "|TITLE: " << lib_records[i].title << std::endl;
      std::cout << "|AUTHOR: " << lib_records[i].author << std::endl;
      std::cout << "|PUBLISHED: " << lib_records[i].year_published << std::endl;
    }
  }

  std::cout << "Are you sure you want to delete this record? (y/n): ";
  char answer;
  std::cin >> answer;

  if (answer == 'y') {
    lib_records.erase(lib_records.begin() + index);
    std::cout << "Successfully deleted record" << std::endl;
  }
}
