#include "Article.h"

Article::Article(int id, string title)
	:
	id(id),
	title(title),
	description(" "),
	isShow(false)
{}

int Article::getId() const
{
    return id;
}

string Article::getTitle()const
{
    return title;
}


void printArticles(const vector<Article>& ar)
{
    for (vector<Article>::const_iterator it = ar.begin(); it != ar.end(); ++it)
    {
        cout << "ID: " << it->id << endl;
        cout << "Title: " << it->title << endl;
        cout << "-----------------------" << endl;
    }
}