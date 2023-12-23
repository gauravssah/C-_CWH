#include <iostream>
#include <string>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }

    virtual void display() = 0; // Do-nothing function -> pure virtual function.
};

class CWHVideo : public CWH
{
    float VideoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        VideoLength = vl;
    }

    void display()
    {
        cout << "This is an amazing video with title : " << title << endl;
        cout << "Rating : " << rating << " Out of 5 stars." << endl;
        cout << "Length of this video is : " << VideoLength << " minutes " << endl;
    }
};

class CWHText : public CWH
{
    int wordsCounts;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        wordsCounts = wc;
    }

    void display()
    {
        cout << "This is an amazing TextTutorial with title : " << title << endl;
        cout << "Rating : " << rating << " Out of 5 stars." << endl;
        cout << "Total Words in this tutorial : " << wordsCounts << " minutes " << endl;
    }
};

int main()
{

    string title;
    float rating, vlen;
    int words;

    // for Video -->
    title = "Lets learn cpp in one video.";
    vlen = 59.48;
    rating = 3.8;
    CWHVideo cpp(title, rating, vlen);

    // cpp.display();

    // for TextTutorial -->
    title = "Lets learn python in one page.";
    words = 400001;
    rating = 4.3;
    CWHText c(title, rating, words);
    // cpp.display();

    CWH *tuts[2];
    tuts[0] = &cpp;
    tuts[1] = &c;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
