#include <iostream>
#include<list>
#include <string>
#include <vector>
using namespace std;
class IterableIterator
        {
            public:
            vector<int>::iterator it;
            virtual pair<int,string> Dereference() =0;
            virtual bool NotEquals(const IterableIterator &others)=0;
        };
class ZipperIterator : public IterableIterator
{
    public:
    vector<int> Numbers={1,4,5,6};
    vector<string>Words={"cos","nic","what"};
    explicit ZipperIterator(vector<int>::const_iterator left_begin, vector<string>::const_iterator right_begin, vector<int>::const_iterator left_end, vector<string>::const_iterator right_end)
    {

    };
    pair<int,string> Dereference() override
    {
        return make_pair(1,"x");
    }
  bool NotEquals(const IterableIterator &others) override
  {
      return 1;
  }
};
int main()
{
    return 0;
}