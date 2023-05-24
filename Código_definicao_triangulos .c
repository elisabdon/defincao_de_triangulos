#include <stdio.h>
#include <windows.h>

struct Retangulo {
    int x1, y1, x2, y2, x3, y3, x4, y4;
};

int retangulo_contido(struct Retangulo r1, struct Retangulo r2) {
    if (r1.x1 >= r2.x1 && r1.y1 >= r2.y1 &&
        r1.x2 <= r2.x2 && r1.y2 >= r2.y2 &&
        r1.x3 <= r2.x3 && r1.y3 <= r2.y3 &&
        r1.x4 >= r2.x4 && r1.y4 <= r2.y4) {
        return 1;
    }
		else {
		    return 0;
		}
}

int main() {
    struct Retangulo r1, r2;
    
    system("color 04");
    printf(" == Coordenadas do retangulo interno == ");
    printf("(x1, y1, x2, y2, x3, y3, x4, y4):");
    
    scanf("%d %d %d %d %d %d %d %d", &r1.x1, &r1.y1, &r1.x2, &r1.y2, &r1.x3, &r1.y3, &r1.x4, &r1.y4);
    system("cls");
    system("color 0D");
	printf("\n\n\t\t .  CARREGANDO .  ");
	Sleep(400); 
	system("cls");
	printf("\n\n\t\t . .  CARREGANDO . . ");
	Sleep(400); 
	system("cls");
	printf("\n\n\t\t . . .  CARREGANDO . . . ");
	Sleep(400); 
	system("cls");
	printf("\n\n\t\t . . . .  CAREGANDO . . . . ");
	Sleep(400); 
	system("cls");
    
    system("color 07");
    printf("== Coordenadas do retangulo externo == ");
    printf("(x1, y1, x2, y2, x3, y3, x4, y4):");
    scanf("%d %d %d %d %d %d %d %d", &r2.x1, &r2.y1, &r2.x2, &r2.y2, &r2.x3, &r2.y3, &r2.x4, &r2.y4);
    system("cls");
    system("color 0D");
	printf("\n\n\t\t .  CARREGANDO .  ");
	Sleep(400); 
	system("cls");
	printf("\n\n\t\t . .  CARREGANDO . . ");
	Sleep(400); 
	system("cls");
	printf("\n\n\t\t . . .  CARREGANDO . . . ");
	Sleep(400); 
	system("cls");
	printf("\n\n\t\t . . . .  CAREGANDO . . . . ");
	Sleep(400); 
	system("cls");
    
    int contido = retangulo_contido(r1, r2);
    printf("== resposta: %d ==\n", contido);
    
    return 0;
}