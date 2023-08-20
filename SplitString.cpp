vector<string> SplitString(string s, char ch) {
    vector<string> splited_string;
    string temp_string = "";
    int ch_idx = 0;
    int idx = 0;
    while (true) {
        ch_idx = s.find(ch);
        if (ch_idx != string::npos) {
            temp_string = s.substr(idx, ch_idx);
            splited_string.push_back(temp_string);
            s = s.substr(ch_idx + 1);
        }
        else if (ch_idx == string::npos) {
            splited_string.push_back(s);
            break;
        }

    }

    return splited_string;
}