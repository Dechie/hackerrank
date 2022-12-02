/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
     string result, middle;
     vector<string> tokens;
     
     stringstream check(s);
     
     while(getline(check, middle, ':'))
     {
         tokens.push_back(middle);
     }  
     
     string a, b;
     a = tokens[2].substr(0,2);
     b = tokens[2].substr(2,2);
     
     tokens[2] = a;
     tokens.push_back(b);
     
     int hour = stoi(tokens[0]);
     
     if (hour < 12)
     {
         if (tokens[3] == "AM")
            hour += 0;
        else if (tokens[3] == "PM")
            hour += 12;
     }
     
     else if (hour == 12)
     {
         if (tokens[3] == "AM")
            hour = 0;
        else if (tokens[3] == "PM")
            hour = 12;
     }
     
     string hr = to_string(hour);
     
     if (hour < 10)
        result += '0';
     result += hr;
     result += ':';
     
     for (int i = 1; i < 3; ++i)
     {
         result += tokens[i];
         
         if (i < 2)
            result += ':';
     }
     
     return result;
}
