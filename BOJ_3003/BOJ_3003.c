#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int KING, QUEEN, BISHOP, KNIGHT, PAWN, ROOK;
	int K_CHANGE = 0, Q_CHANGE = 0, R_CHANGE = 0, B_CHANGE = 0, KN_CHANGE = 0, P_CHANGE = 0;
	scanf("%d %d %d %d %d %d", &KING, &QUEEN, &ROOK, &BISHOP, &KNIGHT, &PAWN);
	if (KING != 1) {
		K_CHANGE = 1 - KING;
	}
	if (QUEEN != 1) {
		Q_CHANGE = 1 - QUEEN;
	}
	if (ROOK != 2) {
		R_CHANGE = 2 - ROOK;
	}
	if (BISHOP != 2) {
		B_CHANGE = 2 - BISHOP;
	}
	if (KNIGHT != 2) {
		KN_CHANGE = 2 - KNIGHT;
	}
	if (PAWN != 8) {
		P_CHANGE = 8 - PAWN;
	}
	printf("%d %d %d %d %d %d", K_CHANGE, Q_CHANGE, R_CHANGE, B_CHANGE, KN_CHANGE, P_CHANGE);

	return 0;
}
