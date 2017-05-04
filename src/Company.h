#ifndef COMPANY_H_
#define COMPANY_H_


#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "Line.h"
#include "Driver.h"

  typedef map<int, Driver> DriverList;
  typedef map<int, Line> LineList;

using namespace std;

class Company{

 private:
  string name;
  DriverList drivers;
  LineList lines;


 public:
  // CONSTRUCTORS
  Company(string nome, LineList lines, DriverList drivers);
  Company();

  // GET METHODS

  LineList getLines() const; // returns lines map
  DriverList getDrivers() const; // returns drivers map

//  Line getLine(int index) const; // returns line of lines vector at index
//  Driver getDriver(int index) const; // returns driver of drivers vector at index

  string getName() const; // returns company name

  // SET METHODS

  void setLine(int index, Line newLine); // replaces line at index with newLine
  void setDriver(int index, Driver newDriver); // replaces driver at index with newDriver

  // OTHER METHODS

  void addLine(Line l);
  void addDriver(Driver d);
  void eraseLine(int id);
  void eraseDriver(int id);

  void distribuiServico();  // funcao que implementa a afectacao de servico
};


#endif
