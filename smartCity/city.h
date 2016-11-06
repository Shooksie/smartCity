#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <map>

using namespace std;


class cityClass {
private:
	string state;
	string name;
	int id;
	int population;
	int area;
	int numZips;
	map<int, zipCode> zipCodes;
public:
	void setName(string cityName) { name = cityName; }
	void setID(int Id) { id = Id; };
	void setPopulation(int populas) { population = populas; };
	void setArea(int areaSize) { area = areaSize; };
	void setNumDisc(int numOfzips) { numZips = numOfzips; };
};


class zipCode {
	int zip;
	int numPopulas;
};

class buidlings {
	string type, size;
	int dayBuilt, monthBuilt, yearBuilt;

};
