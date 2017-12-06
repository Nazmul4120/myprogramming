# myprogramming

#include <GL\glut.h>
#include <cstring>

GLfloat xRotated, yRotated, zRotated; GLdouble radius=1;

class Sphere
{
public:
    Sphere(){}//umuman ishlatilmayotgan konstruktor
    ~Sphere(){}//umuman ishlatilmayotgan destruktor
    static void special(int key, int x, int y)
    {
        switch (key)//Klaviaturani knopkalarini aniqlay oladigan funksiya
        {
            // Chapga yoki o'ngga tugmalari bosilganda y o'qi bo'yicha buramiz
            case GLUT_KEY_LEFT:
                yRotated += 2;
                break;
            case GLUT_KEY_RIGHT:
                yRotated -= 2;
                break;
            // Tepaga yoki pastga tugmalari bosilganda y o'qi bo'yicha buramiz
            case GLUT_KEY_UP:
                xRotated -= 2;
                break;
            case GLUT_KEY_DOWN:
                xRotated += 2;
                break;
            //quyidagi F1, F2, F3, F4, F5, F6 tugmalari bosilganda mos ravishda x, y, z o'qlari bo'yicha aylanadi
            case GLUT_KEY_F1:
                xRotated += 2;
                break;
            case GLUT_KEY_F2:
                xRotated -= 2;
                break;
            case GLUT_KEY_F3:
                yRotated += 2;
                break;
            case GLUT_KEY_F4:
                yRotated -= 2;
                break;
            case GLUT_KEY_F5:
                zRotated += 2;
                break;
            case GLUT_KEY_F6:
                zRotated -= 2;
                break;

            // home tugmasi oynani yopadi
            case GLUT_KEY_HOME:
                exit(0);
        }

        glutPostRedisplay();//Oynani qayta yuklash yoki ochish
    }
    void glu()
    {
        glutSpecialFunc(special);//Klaviaturadan bosilgan klavishlarni aniqlash uchun funksiya
    }
    void glu1()
    {
        glutMainLoop();//Glutning asosiy siklini ishga tushiradi va grafika shakllanadi
    }
    void glu2()
    {
        glutCreateWindow("Sphere Rotating Animation");//Opengl ishlashi uchun oyna ochish
    }
};


void redisplayFunc(void)
{

glMatrixMode(GL_MODELVIEW);
glClear(GL_COLOR_BUFFER_BIT);//Chizmalar buferini tozalash
glLoadIdentity();//Yaratilgan obyekt matritsasini hotirada saqlab turish
glTranslatef(0.0,0.0,-4.0);//Yaratilgan matritsani translatsiya qilinadigan matritsaga uzatadi
glColor3f(10.0, 10.0, 10.0);//Rang berish
glRotatef(xRotated,1.0,0.0,0.0);//Matritsani X o'qi bo'yicha aylantirish

glRotatef(yRotated,0.0,1.0,0.0);//Matritsani X o'qi bo'yicha aylantirish

glRotatef(zRotated,0.0,0.0,1.0);//Matritsani X o'qi bo'yicha aylantirish

glScalef(1.0,1.0,1.0);//Masshtab

glutSolidSphere(radius,30,30);//Sferik-shar yasash

glFlush();//Dasturni faoliyatini oshiradi
}

void reshapeFunc(int x, int y)
{
if (y == 0 || x == 0) return;
glMatrixMode(GL_PROJECTION);
glLoadIdentity();

gluPerspective(40.0,(GLdouble)x/(GLdouble)y,0.5,20.0);//Obyekt oynada qanday aks etishini ifodalash
glMatrixMode(GL_MODELVIEW);//Grafik obyektni 3 o'lchamli fazodagi koordinatlarini aniqlash
glViewport(0,0,x,y);//Grafikani ko'rsatish uchun butun oynadan foydalanish
}
Sphere *object;//Classning obyektini aniqlash
int balandligi, kengligi, radiusi;
int main(int argc, char **argv)
{
glutInit(&argc, argv);//Glutni initsializatsiya qilish
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);//Kompyuterga dasturdagi grafikani yaratilishini ifodalash
glutInitWindowSize(800, 600);//Dastur oynasini yaratish
object->glu2();//Classdagi funkisyani chaqirish
glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
xRotated = yRotated = zRotated = 30.0; xRotated=33; yRotated=40;//Kordinatalarni berish
glutDisplayFunc(redisplayFunc);//Obyektni ko'rsatish funksiyasi
glutReshapeFunc(reshapeFunc);//Dastur oynasi o'zgarganda ham obyektni holatini saqlaydigan funkisya
object->glu();//Classdagi funkisyani chaqirish
object->glu1();//Classdagi funkisyani chaqirish
return 0;
}

