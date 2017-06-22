/*
 * Tool.cpp
 *
 *  Created on: 26.05.2017 ã.
 *      Author: user
 */

#include "Tool.h"

Tool::Tool() {
	this->records = 0 ;
	setName(" ") ;
	this->count = 0 ;
	this->cost = 0 ;
}

Tool::~Tool() {
	// TODO Auto-generated destructor stub
}

float Tool::getCost() const {
	return cost;
}

void Tool::setCost(float cost) {
	this->cost = cost;
}

int Tool::getCount() const {
	return count;
}

void Tool::setCount(int count) {
	this->count = count;
}

const string& Tool::getName() const {
	return name;
}

void Tool::setName(const string& name) {
	this->name = name;
}

int Tool::getRecords() const {
	return records;
}

Tool::Tool(int records, string name, int count, float cost) {
	setRecords(records);
	setName(name);
	setCount(count);
	setCost(cost);
}

void Tool::setRecords(int records) {
	this->records = records;
}

void Tool::printInfo() {
	cout << getRecords() << " " << getName() << " " <<
	getCount() << " " << getCost() << endl;
}
