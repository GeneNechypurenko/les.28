#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class Article
{
	int id;
	string title;
	string description;
	bool isShow;
public:
	Article(int id, string title);

	int getId() const;
	string getTitle() const;

	friend void printArticles(const vector<Article>& ar);
};

