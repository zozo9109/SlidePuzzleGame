#include<Bangtal.h>
#pragma comment(lib,"Bangtal.lib")


SceneID scene1, scene2;
ObjectID startButton, endButton, restartButton, Original, zoro1, zoro2, zoro3, zoro4, zoro5, zoro6, zoro7, zoro8, zoro9, blank;



ObjectID board[3][3] = {
	{zoro1, zoro2, zoro3},
	{zoro4, zoro5, zoro6},
	{zoro7, zoro8, zoro9},

};

int boardX[3] = {
	0, 200, 400
};

int boardY[3] = {
	400, 200, 0
};





ObjectID createObject(const char* name, const char* image, SceneID scene, int x, int y, bool shown) {
	ObjectID object = createObject(name, image);
	locateObject(object, scene, x, y);
	if (shown == true)
		if (shown) {
			showObject(object);
		}
	return object;

}

void mouseCallback(ObjectID object, int x, int y, MouseAction action) {
	if (object == endButton) {
		endGame();
	}

	else if (object == startButton) {
		hideObject(startButton);
		hideObject(endButton);
		enterScene(scene2);


	}

	//else if


	/* for (int i = 0; i < 3; i++) {
		for (int j = 0; int j < 3; i++) {
			if (object == board[i][j]) {
				if (i == 0 && j == 0) {
					if (board[i][j + 1] == blank) { */

}





int main() {

	setMouseCallback(mouseCallback);

	scene1 = createScene("퍼즐맞추기", "Original.jpg");

	scene2 = createScene("흰화면", "background.jpg");


	board[0][0] = createObject("조로1", "zoro1.jpg", scene2, boardX[0], boardY[0], true);
	board[0][1] = createObject("조로2", "zoro2.jpg", scene2, boardX[0], boardY[1], true);
	board[0][2] = createObject("조로3", "zoro3.jpg", scene2, boardX[0], boardY[2], true);
	board[1][0] = createObject("조로4", "zoro4.jpg", scene2, boardX[1], boardY[0], true);
	board[1][1] = createObject("조로5", "zoro5.jpg", scene2, boardX[1], boardY[1], true);
	board[1][2] = createObject("조로6", "zoro6.jpg", scene2, boardX[1], boardY[2], true);
	board[2][0] = createObject("조로7", "zoro7.jpg", scene2, boardX[2], boardY[0], true);
	board[2][1] = createObject("조로8", "zoro8.jpg", scene2, boardX[2], boardY[1], true);
	board[2][2] = createObject("조로9", "zoro9.jpg", scene2, boardX[2], boardY[2], false);



	startButton = createObject("시작버튼", "start.png", scene1, 280, 70, true);

	endButton = createObject("종료버튼", "end.png", scene1, 280, 20, true);

	//restartButton = createObject(





	startGame(scene1);
}
