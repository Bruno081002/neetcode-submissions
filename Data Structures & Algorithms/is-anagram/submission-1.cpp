class Solution {
public:
    bool isAnagram(string s, string t) {
        int sSize = s.length();
  int tSize = t.length();

  if (sSize != tSize) {
    return false;
  }
  for (int i = 0; i < sSize; i++) {
    size_t pos = t.find(s[i]);
    if (pos != string::npos) {
      t.erase(pos, 1);
      
    }else {
	    return false;
    }
  }
  if (t == "") {
    return true;
  }
  else{return false;}

    }
};
