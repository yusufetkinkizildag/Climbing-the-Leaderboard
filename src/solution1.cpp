
namespace utils {
    auto const get_rank{[](auto const &v, auto const x) noexcept
    {
        auto low{begin(v)};
        auto high{end(v) - 1};
        auto mid{begin(v)};
        while (distance(low, high) >= 0) {
            mid = low + distance(low, high)/2;
            if (*mid == x) {
                return distance(begin(v), mid) + 1 ;
            }
            else if (*mid < x) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        if (high == mid) {
            return distance(begin(v), mid) + 2;
        }
        return distance(begin(v), mid) + 1;
    }};
} 
vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player)
{
    vector<int> results(player.size());
    ranked.erase(unique(begin(ranked), end(ranked)), end(ranked));
    transform(cbegin(player), cend(player), begin(results), bind(utils::get_rank, cref(ranked), placeholders::_1));
    return results;
}
