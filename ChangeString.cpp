void ChangeString(string& s, string change_ch, char ch) {

    int idx = 0;
    while ((idx = s.find(change_ch, idx)) != string::npos) {
        s.replace(idx, change_ch.length(), 1, ch);
        idx += 1;
    }

}