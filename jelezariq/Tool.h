/*
 * Tool.h
 *
 *  Created on: 26.05.2017 ã.
 *      Author: user
 */

#ifndef TOOL_H_
#define TOOL_H_
#include <string>
#include <cstring>
#include <iostream>
using namespace std;

class Tool {
public:
	Tool();
	Tool(int records, string name, int count, float cost);
	virtual ~Tool();
	float getCost() const;
	void setCost(float cost);
	int getCount() const;
	void setCount(int count);
	const string& getName() const;
	void setName(const string& name);
	int getRecords() const;
	void setRecords(int records);
	void printInfo();

private:
	int records;
	string name;
	int count;
	float cost;
};

#endif /* TOOL_H_ */
