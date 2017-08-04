#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
	void solveSudoku(vector<vector<char>>& board) {
		auto reset = [](bool* set) {for (int i = 0; i < 9; i++) set[i] = false;};
		auto gezi = [](int x, int y) {return y/3*3+x/3;};
		bool set[9];
		memset(set,false,sizeof(set));
        int remain = 9;
        int num_remain = 0;
        for (int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    num_remain++;
                }
            }
        }
        while(num_remain > 0){
            for (int i=0;i<9;i++){
                for(int j=0;j<9;j++){
                    if(board[i][j] == '.'){
						reset(set);
                        for (int k = 0;k < 9;k++){
                            if(board[i][k]!='.'){
                                set[board[i][k]-'0'-1] = true;
                            }
							if (board[k][j] != '.') {
								set[board[k][j] - '0' - 1] = true;
							}
							if (board[gezi(i, j) % 3 * 3 + k % 3][gezi(i, j) / 3 * 3 + k / 3] != '.') {
								set[board[gezi(i, j) % 3 * 3 + k % 3][gezi(i, j) / 3 * 3 + k / 3] - '0' - 1] = true;
							}
                        }
						bool found = false;
						int tempresult;
						for (int l = 0; l < 9; l++) {
							if (!set[l]) {
								if (found) {
									found = false;
									break;
								}
								tempresult = l+1;
								found = true;
							}
						}
						if (found) {
							board[i][j] = '0'+tempresult;
							num_remain--;
						}
                    }
                }
            }
        }
	}
};