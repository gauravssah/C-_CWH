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

    virtual void display() {}
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

    // CWHVideo c("c in one video", 4.5, 40.45);
    // c.display();

    // same work as upper -->

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
    title = "Lets learn python in one video.";
    words = 400001;
    rating = 4.3;

    CWHText c(title, rating, words);
    // cpp.display();

    // Before using pointer and virtual function the display one fun is called every times.
    // Now it's calling its own display function.

    cout << endl;
    cout << "Display using pointers. " << endl;
    // display using pointers. ---->
    CWH *tuts[5];
    tuts[0] = &cpp;
    tuts[1] = &c;

    tuts[0]->display();
    cout << endl;
    tuts[1]->display();
    cout << endl;
    //  ************************

    // for Video tut -->
    title = "Dsa in one shorts";
    rating = 4.8;
    vlen = 48.52;

    CWHVideo Dsa(title, rating, vlen);
    tuts[2] = &Dsa;
    tuts[2]->display();
    cout << endl;

    // for Text tut -->
    title = "Dsa in one Page";
    rating = 3.8;
    words = 400;

    CWHText DsaText(title, rating, words);
    tuts[3] = &DsaText;
    tuts[3]->display();
    cout << endl;
    return 0;
}

// Rules for virtual functions  ----->
// 1. They cannot be static.
// 2. They are accessed by object pointers.
// 3. Virtual function can be a friend of another calss.
// 4. Virtual function in base class might not be used.
// 5. if a virtual function is defined in a base class, there is no necessity of redefining it in the derived class.