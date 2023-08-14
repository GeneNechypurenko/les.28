#include <iostream>

#include "Article.h"

using namespace std;

int main()
{
    vector<Article> ar;
    ar.push_back(Article(1, "T1"));
    ar.push_back(Article(2, "T2"));
    ar.push_back(Article(3, "T3"));
    ar.push_back(Article(4, "T4"));
    ar.push_back(Article(5, "T5"));

    printArticles(ar);

	return 0;
}