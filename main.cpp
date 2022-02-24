#include <iostream>
#include <vector>
#include <map>
#include <cstdlib>
#include <fstream>
#include <random>
#include <algorithm>
#include <functional>
#include <numeric>
#include <string>
#include <thread>

using namespace std;



struct skill{
    string name;
    int level;
};

struct contributor{
    string name;
    vector<skill> skills;
};

struct project{
    string name;
    int length;
    int score;
    int best_before_day;
    int contributors_needed;
    vector<skill> skills_req;
};

struct assingnment{
    string project_name;
    vector<string> contributors_names;
};

int get


int main() {
    int C;
    int P;
    fstream in, out;


    for(int k = 1; k < 7; k++){

        vector<contributor> contributors;
        vector<project> projects;
        vector<assingnment> assignments;

        in.open(("../inputs/" + to_string(k) + ".txt"), ios::in);

        out.open(("../outputs/" + to_string(k) + ".txt"), ios::out);

        in >> C >> P;
        for (int z = 1; z < C; z++){
            contributor c;
            in >> c.name;
            int n_skils;
            in >> n_skils;
            for (int j = 0; j < n_skils; j++){
                skill s;
                in >> s.name;
                in >> s.level;
                c.skills.push_back(s);
            }
            contributors.push_back(c);
        }


        for (int z = 0; z < P; z++){
            project pr;
            in >> pr.name;
            in >> pr.length;
            in >> pr.score;
            in >> pr.best_before_day;
            in >> pr.contributors_needed;
            for (int q =0; q < pr.contributors_needed; q++){
                skill s;
                in >> s.name;
                in >> s.level;
                pr.skills_req.push_back(s);
            }
        }






        in.close();
        out.close();
    }





    return 0;
}
