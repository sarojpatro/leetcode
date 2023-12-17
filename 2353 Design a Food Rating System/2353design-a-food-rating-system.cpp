class FoodRatings {
public:
    unordered_map<string, int> food_ratings;
    unordered_map<string, string> food_cuisine;
    unordered_map<string, set<pair<int, string>>> cuisine_rank_food;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i=0; i<foods.size();i++)
        {
            food_ratings[foods[i]] = ratings[i];
            food_cuisine[foods[i]] = cuisines[i];
            cuisine_rank_food[cuisines[i]].insert({-ratings[i], foods[i]});
        }
    }
    
    void changeRating(string food, int newRating) {
        cuisine_rank_food[food_cuisine[food]].erase({-food_ratings[food], food});
        food_ratings[food] = newRating;
        cuisine_rank_food[food_cuisine[food]].insert({-food_ratings[food], food});
    }
    
    string highestRated(string cuisine) {
        return begin(cuisine_rank_food[cuisine])->second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */
