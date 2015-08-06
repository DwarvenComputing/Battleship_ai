class Board {
    private:
        int grid[100];
        Ship ships[5];
        enum { WATER, SHOT, FIRE};
        public:
        Board();
        void place_ship(Ship s);
        bool can_place(Ship s, int dir);
        
        
