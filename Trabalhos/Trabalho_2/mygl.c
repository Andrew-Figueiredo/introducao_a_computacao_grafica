#include "mygl.h"
#include <stdlib.h>

void PutPixel(int x, int y, int r, int g, int b, int a)
{
    fb_ptr[4 * x + 4 * y * IMAGE_WIDTH + 0] = r;
    fb_ptr[4 * x + 4 * y * IMAGE_WIDTH + 1] = g;
    fb_ptr[4 * x + 4 * y * IMAGE_WIDTH + 2] = b;
    fb_ptr[4 * x + 4 * y * IMAGE_WIDTH + 3] = a;
}

void DrawLine(int x0, int y0, int x1, int y1, int r, int g, int b, int a, int r1, int g1, int b1, int a1)
{
    int dx = x1 - x0;
    int dy = y1 - y0;
    int x = x0, y = y0, d, incr_e, incr_ne;
    float dr = (r1 - r) / dx;
    float dg = (g1 - g) / dx;
    float db = (b1 - b) / dx;
    float da = (a1 - a) / dx;

    if (x0 == x1 && y0 > y1)
    {
        DrawLine(x0, y1, x1, y0, r, g, b, a, r1, g1, b1, a1);
        return;
    }
    else
    {
        if (x0 > x1)
        {
            DrawLine(x1, y1, x0, y0, r1, g1, b1, a1, r, g, b, a);
            return;
        }
    }

    PutPixel(x, y, r, g, b, a);

    if (dx > dy && dy > 0)
    {
        d = 2 * dy - dx;
        incr_e = 2 * dy;
        incr_ne = 2 * (dy - dx);
        while (x != x1)
        {
            if (d <= 0)
            {
                d += incr_e;
                x++;
            }
            else
            {
                d += incr_ne;
                y++;
                x++;
            }
            r = r + dr;
            g = g + dg;
            b = b + db;
            a = a + da;
            PutPixel(x, y, r, g, b, a);
        }
    }
    else
    {
        if (dy > 0)
        {
            d = 2 * dx - dy;
            incr_e = 2 * dx;
            incr_ne = 2 * (dx - dy);
            while (y != y1)
            {
                if (d <= 0)
                {
                    d += incr_e;
                    y++;
                }
                else
                {
                    d += incr_ne;
                    y++;
                    x++;
                }
                r = r + dr;
                g = g + dg;
                b = b + db;
                a = a + da;
                PutPixel(x, y, r, g, b, a);
            }
        }
        else
        {
            if (abs(dx) >= abs(dy))
            {
                dy = -dy;
                d = 2 * dy - dx;
                incr_e = 2 * dy;
                incr_ne = 2 * (dy - dx);

                while (x != x1)
                {
                    if (d <= 0)
                    {
                        d += incr_e;
                        x++;
                    }
                    else
                    {
                        d += incr_ne;
                        y--;
                        x++;
                    }
                    r = r + dr;
                    g = g + dg;
                    b = b + db;
                    a = a + da;
                    PutPixel(x, y, r, g, b, a);
                }
            }
            else
            {
                dy = -dy;
                d = 2 * dx - dy;
                incr_e = 2 * dx;
                incr_ne = 2 * (dx - dy);
                while (y != y1)
                {
                    if (d <= 0)
                    {
                        d += incr_e;
                        y--;
                    }
                    else
                    {
                        d += incr_ne;
                        y--;
                        x++;
                    }

                    r = r + dr;
                    g = g + dg;
                    b = b + db;
                    a = a + da;
                    PutPixel(x, y, r, g, b, a);
                }
            }
        }
    }
}


void DrawTriangle(int x0,int y0,int x1,int y1,int x2,int y2, int R, int G, int B, int A, int R1, int G1, int B1, int A1){
	DrawLine(x0,y0,x1,y1,R,G,B,A, R1,G1,B1,A1);
	DrawLine(x1,y1,x2,y2,R,G,B,A, R1,G1,B1,A1);
	DrawLine(x2,y2,x0,y0,R,G,B,A, R1,G1,B1,A1);	
}

//
// >>> Defina aqui as funções que você implementar <<<
//

// Definição da função que chamará as funções implementadas pelo aluno
void MyGlDraw(void)
{
    // Testar outros pontos e linhas e triangulos
    DrawLine(0,0,255,255,255,255,0,255,125,0,0,125);

    //
    // >>> Chame aqui as funções que você implementou <<<
    //
}
