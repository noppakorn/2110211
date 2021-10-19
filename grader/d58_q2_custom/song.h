#ifndef __SONG_H__
#define __SONG_H__

#include <functional>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include "priority_queue.h"

using namespace std;

class Song {
  public:
    std::string artist,title;
    int count;

    Song() { }
    Song(const Song &s) : artist(s.artist), title(s.title), count(s.count) { }
    Song(std::string artist,std::string title,int count) :  artist(artist), title(title), count(count) { }

    friend std::ostream& operator<<(std::ostream &out,const Song &s) {
      return out << "Artist: " << s.artist << " Title: " << s.title << " count: " << s.count;
    }
};


//  you have to write something below this line 
//  you *MIGHT* have to change the declaration of pq1 and pq2
auto c1 = [](Song &s1, Song &s2) {
  return s1.artist != s2.artist ? s1.artist > s2.artist : (s1.title != s2.title ? s1.title > s2.title : s1.count > s2.count);
};
auto c2 = [](Song &s1, Song &s2) {
  return s1.count != s2.count ? s1.count < s2.count : (s1.artist != s2.artist ? s1.artist > s2.artist : s1.title > s2.title);
};
CP::priority_queue<Song, decltype(c1)> pq1(c1);
CP::priority_queue<Song, decltype(c2)> pq2(c2);

#endif
