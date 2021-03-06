#include "Company.h"
#include <map>
#include <string>

using namespace std;

// Constructors

Company::Company(){
	name = "";
	DriverList d;
	LineList l;
	drivers = d;
	lines = l;
}

Company::Company(string name, LineList lines , DriverList drivers){
	this->name = name;
	this->lines = lines;
	this->drivers = drivers;
}

// Get methods

string Company::getName() const{
  return name;
}

LineList Company::getLines() const {
	return lines;
}

DriverList Company::getDrivers() const {
	return drivers;
}

vector<Bus> Company::getBuses() const{
	return buses;
}

// Set methods

void Company::setLine(int index, Line newLine) {
	lines[index] = newLine;
}

void Company::setDriver(int index, Driver newDriver) {
	drivers[index] = newDriver;
}

void Company::setBus(Bus bus){
	for(int i= 0; i<buses.size(); i++){
		if(buses.at(i).getLineId() == bus.getLineId() && buses.at(i).getBusOrderInLine() == bus.getBusOrderInLine()){
			buses.at(i) = bus;
		}
	}
}

// Mutating methods

void Company::addLine(Line l) {
	lines[l.getId()] = l;
}

void Company::addDriver(Driver d){
	drivers[d.getId()] = d;
}

void Company::addBus(Bus bus){
	buses.push_back(bus);
}

void Company::eraseLine(int id){
	lines.erase(id);
}

void Company::eraseDriver(int id){
	drivers.erase(id);
}

