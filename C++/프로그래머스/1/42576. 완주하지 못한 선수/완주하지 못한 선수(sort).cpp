#include <string>
#include <algorithm>
#include <vector>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	sort(participant.begin(), participant.end()); 
	sort(completion.begin(), completion.end());

	for (int i = 0; i < completion.size(); i++) {
		if (participant[i] != completion[i]) return participant[i]; // 미완주자가 한명이라서 사용할 수 있는 방법
	}
	return participant[participant.size() - 1];
}
