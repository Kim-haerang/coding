#include <string>
#include <vector>

using namespace std;

int toMin(string str) {
    int m = stoi(str.substr(0, 2));  
    int s = stoi(str.substr(3, 2));  
    return m * 60 + s;
}

string toStr(int pos) {
    int h = pos / 60;
    int m = pos % 60;

    string hour = (h < 10 ? "0" + to_string(h) : to_string(h));
    string min = (m < 10 ? "0" + to_string(m) : to_string(m));

    return hour + ":" + min;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {

    int ipos = toMin(pos);
    int iop_start = toMin(op_start);
    int iop_end = toMin(op_end);
    int ivideo_len = toMin(video_len);
    
    if (ipos >= iop_start && ipos <= iop_end) ipos = iop_end;
        
    for (auto& c : commands) {
        if (c == "next") {
            ipos += 10;
            if (ipos > ivideo_len) ipos = ivideo_len;
            if (ipos >= iop_start && ipos < iop_end) ipos = iop_end;
        }
        else {
            ipos -= 10;
            if (ipos < 0) ipos = 0;
            if (ipos >= iop_start && ipos < iop_end) ipos = iop_end;
        }
    }
    return toStr(ipos);
}