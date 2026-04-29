#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    set<int> s;
    for(auto& n : nums) s.insert(n);
    return min(s.size(), nums.size() / 2);
}