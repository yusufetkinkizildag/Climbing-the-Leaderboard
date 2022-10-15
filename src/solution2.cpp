

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player)
{
    vector<int> results(player.size());
    ranked.erase(unique(begin(ranked), end(ranked)), end(ranked));
    transform(cbegin(player), cend(player), begin(results), [&ranked](auto const score) noexcept
    {
        return distance(begin(ranked), find_if(begin(ranked), end(ranked), [&score](auto const rank) noexcept{ return score >= rank; })) + 1;
    });
    return results;
}