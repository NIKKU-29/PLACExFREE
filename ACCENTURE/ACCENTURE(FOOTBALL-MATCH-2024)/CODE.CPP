#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

std::string determineWinner(const std::vector<std::string>& scores) {
    std::unordered_map<std::string, int> scoreCount;

    // Count the goals for each team
    for (const std::string& team : scores) {
        scoreCount[team]++;
    }

    // Determine the number of goals for TeamA and TeamB
    int teamA_goals = scoreCount["TeamA"];
    int teamB_goals = scoreCount["TeamB"];

    // Determine the result based on the scores
    if (teamA_goals > teamB_goals) {
        return "TeamA";
    } else if (teamB_goals > teamA_goals) {
        return "TeamB";
    } else {
        return "Tie";
    }
}

int main() {
    std::vector<std::string> scores = {"TeamA", "TeamB", "TeamA", "TeamA", "TeamB"};

    std::string winner = determineWinner(scores);
    std::cout << "The winner is: " << winner << std::endl;

    return 0;
}
