class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "Zero";

        vector<string> less_than_twenty = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        vector<string> ten_places = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

        auto two_digit = [&](int num) {
            if (num < 20) return less_than_twenty[num];
            else {
                int tens = num / 10;
                int ones = num % 10;
                return ten_places[tens] + (ones == 0 ? "" : " " + less_than_twenty[ones]);
            }
        };

        auto three_digit = [&](int num) {
            if (num == 0) return string("");
            if (num < 100) return two_digit(num);
            return less_than_twenty[num / 100] + " Hundred" + (num % 100 == 0 ? "" : " " + two_digit(num % 100));
        };

        int billion = num / 1000000000;
        int million = (num / 1000000) % 1000;
        int thousand = (num / 1000) % 1000;
        int hundred = num % 1000;

        string res;
        if (billion) res += three_digit(billion) + " Billion";
        if (million) res += (res.empty() ? "" : " ") + three_digit(million) + " Million";
        if (thousand) res += (res.empty() ? "" : " ") + three_digit(thousand) + " Thousand";
        if (hundred) res += (res.empty() ? "" : " ") + three_digit(hundred);

        return res;
    }
};
