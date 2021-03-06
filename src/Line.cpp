#include "Line.h"

// Constructors

Line::Line(){
	id = -1;
	freq = 0;
	vector<string> s;
	stops = s;
	vector<int> t;
	times = t;
}


Line::Line (unsigned int id, unsigned int freq, vector<string> stops, vector<int> times) {
	this->id = id;
	this->freq = freq;
	this->stops = stops;
	this->times = times;
}

// Get methods

unsigned int Line::getId() const{
  return id;
}

unsigned int Line::getFreq() const {
	return freq;
}

vector<string> Line::getStops() const{
  return stops;
}

vector<int> Line::getTimes() const{
  return times;
}

// Set methods

void Line::setId(unsigned int id) {
	this->id = id;
}

void Line::setFreq(unsigned int freq){
	this->freq = freq;
}

void Line::setStops(vector<string> stops) {
	this->stops = stops;
}

void Line::setTimes(vector<int> times) {
	this->times = times;
}
