#include <iostream>

bool gameOver;


// skapa spelfönstret, bredd och höjd
const int width {40};

const int height {20};

// variabler för huvudet och matens position
int x, y, fruitX, fruitY, score;


// skapa kontroll av masken
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };

eDirection dir;

void Setup()

{

    gameOver = false;

    dir = STOP;

    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}


void Draw()

{

    // rensa skärmen
    system("cls");

    // rita taket
    for (int i = 0; i < width+2; i++)
        
        std::cout << "*";
        std::cout << std::endl;
    

        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)

                {
                    if (j == 0)


                        // rita vänstra väggen
                        std::cout << "*";                    

                        std::cout << " ";

                    if (j == width - 1)

                        // rita högra väggen
                        std::cout << "*";

                }

                    std::cout << std::endl;

        }        

    // rita golvet
    for (int i = 0; i < width+2; i++)

        std::cout << "*";

        std::cout << std::endl;

}


void Input()

{




}


void Logic()

{




}


int main()

{

    system("Color 70");

    Setup();

    while(!gameOver)

    {

        Draw();
        Input();
        Logic();

        //Sleep(10);

    }




    return 0;

}