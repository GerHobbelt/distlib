// L. Schiffmann, July 2021

#ifndef PYLCS_HPP
#define PYLCS_HPP

#include <string>

int levenshtein_distance(const std::string &str1, const std::string &str2);

double jaroDistance(const std::string& a, const std::string& b);
double jaroWinklerDistance(const std::string& a, const std::string& b);

int levenshtein_dist(const std::string &word1, const std::string &word2);
double levenshtein_distp(const std::string &word1, const std::string &word2);

int dl_dist(const std::string &word1, const std::string &word2);
double dl_distp(const std::string &str1, const std::string &str2);


// L. Schiffmann, July 2021
// struct for max length and start position

struct structRet {
   int max;
   int start;
};

int lcs_length_(const std::string &str1, const std::string &str2);
structRet lcs2_length_(const std::string &str1, const std::string &str2);

std::string lcseq(const std::string &X, const std::string &Y);
std::string lcstr(const std::string &X, const std::string &Y);

#endif
