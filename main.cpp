#include <iostream>

int main() {
    int count = 0;
    int co = 0;
    int round = 0;
    char field[3][3] = {{'_', '_', '_'},
                        {'_', '_', '_'},
                        {'_', '_', '_'}};
    while (round < 9) {
        int x, y;
        bool inputCheck = true;
        do {
            std::cout << "Cross turn. Input coordinates: " << std::endl;
            std::cin >> x >> y;
            if (field[x][y] != '_') {
                std::cout << "Error! Input again!" << std::endl;
                inputCheck = false;
            } else {
                field[x][y] = 'X';
                inputCheck = true;
                ++round;
            }
        } while (!inputCheck);
        for (int i = 0; i < 3; i++) {
            count = 0;
            co = 0;
            for (int f = 0; f < 3; f++) {
                if (field[f][i] == 'X') {
                    ++count;
                }
                if (count == 3) {
                    std::cout << "Cross win!" << std::endl;
                    std::cout << "Game area: " << std::endl;
                    for (int i = 0; i < 3; i++) {
                        for (int f = 0; f < 3; f++) {
                            std::cout << field[i][f] << " ";
                        }
                        std::cout << std::endl;
                    }
                    return 0;
                }
            } if (field[i][i] == 'X') {
                ++co;
            }
            if (co == 3) {
                std::cout << "Cross win!" << std::endl;
                std::cout << "Game area: " << std::endl;
                for (int i = 0; i < 3; i++) {
                    for (int f = 0; f < 3; f++) {
                        std::cout << field[i][f] << " ";
                    }
                    std::cout << std::endl;
                }
                return 0;
            }
        }
        if ((field[0][0] == 'X' && field[1][1] == 'X' && field[2][2] == 'X') ||
            (field[0][2] == 'X' && field[1][1] == 'X' && field[2][0] == 'X')) {
            std::cout << "Cross win!" << std::endl;
            std::cout << "Game area: " << std::endl;
            for (int i = 0; i < 3; i++) {
                for (int f = 0; f < 3; f++) {
                    std::cout << field[i][f] << " ";
                }
                std::cout << std::endl;
            }
            return 0;
        }
        std::cout << "Game area: " << std::endl;
        for (int i = 0; i < 3; i++) {
            for (int f = 0; f < 3; f++) {
                std::cout << field[i][f] << " ";
            }
            std::cout << std::endl;
        }
        do {
            std::cout << "Zero's turn. Input coordinates: " << std::endl;
            std::cin >> x >> y;
            if (field[x][y] != '_') {
                std::cout << "Error! Input again!" << std::endl;
                inputCheck = false;
            } else {
                field[x][y] = 'O';
                inputCheck = true;
                ++round;
            }
        } while (!inputCheck);
        for (int i = 0; i < 3; i++) {
            count = 0;
            co = 0;
            for (int f = 0; f < 3; f++) {
                if (field[f][i] == 'O') {
                    ++count;
                }
                if (count == 3) {
                    std::cout << "Zero win!" << std::endl;
                    std::cout << "Game area: " << std::endl;
                    for (int i = 0; i < 3; i++) {
                        for (int f = 0; f < 3; f++) {
                            std::cout << field[i][f] << " ";
                        }
                        std::cout << std::endl;
                    }
                    return 0;
                }
            } if (field[i][i] == 'O') {
                ++co;
            }
            if (co == 3) {
                std::cout << "Zero win!" << std::endl;
                std::cout << "Game area: " << std::endl;
                for (int i = 0; i < 3; i++) {
                    for (int f = 0; f < 3; f++) {
                        std::cout << field[i][f] << " ";
                    }
                    std::cout << std::endl;
                }
                return 0;
            }
        }
        if ((field[0][0] == 'O' && field[1][1] == 'O' && field[2][2] == 'O') ||
            (field[0][2] == 'O' && field[1][1] == 'O' && field[2][0] == 'O')) {
            std::cout << "Zero win!" << std::endl;
            std::cout << "Game area: " << std::endl;
            for (int i = 0; i < 3; i++) {
                for (int f = 0; f < 3; f++) {
                    std::cout << field[i][f] << " ";
                }
                std::cout << std::endl;
            }
            return 0;
        }
        std::cout << "Game area: " << std::endl;
        for (int i = 0; i < 3; i++) {
            for (int f = 0; f < 3; f++) {
                std::cout << field[i][f] << " ";
            }
            std::cout << std::endl;
        }
    }
    std::cout << "Draw";
return 0;
}