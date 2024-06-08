//header
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

//deklarasi fungsi
void display();
void init();
void reshape(int, int);
void keyboard(unsigned char, int, int); //+1

//main program
int main (int argc, char** argv){
 //inisialisasi
 glutInit(&argc, argv);
 glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH ); //+2 GLUT_DEPTH : mengalokasikan sumbu z
 glutInitWindowPosition(200, 100); //atur sumbu x dan y
 glutInitWindowSize(1000, 1000); //atur lebar dan tinggi jendela
 glutCreateWindow("KAMAR TIDUR");

//Mendaftarkan fungsi callback
glutDisplayFunc(display); //memanggil fungsi display
glutReshapeFunc(reshape); //memanggil fungsi reshape
glutKeyboardFunc(keyboard); // +3 memanggil fungsi keyboard
init();
glutMainLoop(); //looping program utama
}
void init(){
 glEnable(GL_DEPTH_TEST); //+4
 glClearColor(0.0, 0.0, 0.0, 1.0);
}
void display(){
 //reset
 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //+5 glLoadIdentity();
 //alas lantai
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(210, 180, 140); // Warna Lantai
    glVertex3f(-15.0, -5.0, 25.0);
    glVertex3f(-15.0, -6.0, 25.0);
    glVertex3f(15.0, -6.0, 25.0);
    glVertex3f(15.0, -5.0, 25.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(210, 180, 140); // Warna Lantai
    glVertex3f(-15.0, -5.0, -10.0);
    glVertex3f(-15.0, -6.0, -10.0);
    glVertex3f(15.0, -6.0, -10.0);
    glVertex3f(15.0, -5.0, -10.0);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(210, 180, 140); // Warna Lantai
    glVertex3f(-15.0, -5.0, 25.0);
    glVertex3f(15.0, -5.0, 25.0);
    glVertex3f(15.0, -5.0, -10.0);
    glEnd();
    //bawah
    glBegin(GL_QUADS); //+8
    glColor3ub(210, 180, 140); // Warna Lantai   
    glVertex3f(-15.0, -6.0, -10.0);
    glVertex3f(-15.0, -6.0, 25.0);
    glVertex3f(15.0, -6.0, 25.0);
    glVertex3f(15.0, -6.0, -10.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(210, 180, 140); // Warna Lantai
    glVertex3f(15.0, -5.0, 25.0);
    glVertex3f(15.0, -6.0, 25.0);
    glVertex3f(15.0, -6.0, -10.0);
    glVertex3f(15.0, -5.0, -10.0);
    glEnd();

//tembok
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(230, 230, 250); // Warna ungu muda
    glVertex3f(-15.0, 15.0, -10.0);
    glVertex3f(-15.0, -6.0, -10.0);
    glVertex3f(15.0, -6.0, -10.0);
    glVertex3f(15.0, 15.0, -10.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(230, 230, 250); // Warna ungu muda
    glVertex3f(-15.0, 15.0, -11.0);
    glVertex3f(-15.0, -6.0, -11.0);
    glVertex3f(15.0, -6.0, -11.0);
    glVertex3f(15.0, 15.0, -11.0);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(230, 230, 250); // Warna ungu muda
    glVertex3f(-15.0, 15.0, -11.0);
    glVertex3f(-15.0, 15.0, -10.0);
    glVertex3f(15.0, 15.0, -10.0);
    glVertex3f(15.0, 15.0, -11.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(230, 230, 250); // Warna ungu muda
    glVertex3f(15.0, 15.0, -10.0);
    glVertex3f(15.0, -6.0, -10.0);
    glVertex3f(15.0, -6.0, -11.0);
    glVertex3f(15.0, 15.0, -11.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS); //+8
    glColor3ub(230, 230, 250); // Warna ungu muda
    glVertex3f(-15.0, 15.0, -11.0);
    glVertex3f(-15.0, -6.0, -11.0);
    glVertex3f(-15.0, -6.0, -10.0);
    glVertex3f(-15.0, 15.0, -10.0);
    glEnd();

//tembok kiri
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(221, 160, 221); // Warna ungu
    glVertex3f(-15.0, 15.0, -11.0);
    glVertex3f(-15.0, -6.0, -11.0);
    glVertex3f(-15.0, -6.0, 25.0);
    glVertex3f(-15.0, 15.0, 25.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(221, 160, 221); // Warna ungu
    glVertex3f(-16.0, 15.0, -11.0);
    glVertex3f(-16.0, -6.0, -11.0);
    glVertex3f(-16.0, -6.0, 25.0);
    glVertex3f(-16.0, 15.0, 25.0);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(221, 160, 221); // Warna ungu
    glVertex3f(-16.0, 15.0, -11.0);
    glVertex3f(-15.0, 15.0, -11.0);
    glVertex3f(-15.0, 15.0, 25.0);
    glVertex3f(-16.0, 15.0, 25.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(221, 160, 221); // Warna ungu
    glVertex3f(-15.0, 15.0, -11.0);
    glVertex3f(-15.0, -6.0, -11.0);
    glVertex3f(-16.0, -6.0, -11.0);
    glVertex3f(-16.0, 15.0, -11.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS); //+8
    glColor3ub(221, 160, 221); // Warna ungu
    glVertex3f(-15.0, 15.0, 25.0);
    glVertex3f(-15.0, -6.0, 25.0);
    glVertex3f(-16.0, -6.0, 25.0);
    glVertex3f(-16.0, 15.0, 25.0);
    glEnd();

//tembok kanan
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(221, 160, 221); // Warna ungu
    glVertex3f(15.0, 15.0, -11.0);
    glVertex3f(15.0, -6.0, -11.0);
    glVertex3f(15.0, -6.0, 0.0);
    glVertex3f(15.0, 15.0, 0.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(221, 160, 221); // Warna ungu
    glVertex3f(16.0, 15.0, -11.0);
    glVertex3f(16.0, -6.0, -11.0);
    glVertex3f(16.0, -6.0, 0.0);
    glVertex3f(16.0, 15.0, 0.0);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(221, 160, 221); // Warna ungu
    glVertex3f(16.0, 15.0, -11.0);
    glVertex3f(15.0, 15.0, -11.0);
    glVertex3f(15.0, 15.0, 0.0);
    glVertex3f(16.0, 15.0, 0.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(221, 160, 221); // Warna ungu
    glVertex3f(15.0, 15.0, -11.0);
    glVertex3f(15.0, -6.0, -11.0);
    glVertex3f(16.0, -6.0, -11.0);
    glVertex3f(16.0, 15.0, -11.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS); //+8
    glColor3ub(221, 160, 221); // Warna ungu
    glVertex3f(15.0, 15.0, 0.0);
    glVertex3f(15.0, -6.0, 0.0);
    glVertex3f(16.0, -6.0, 0.0);
    glVertex3f(16.0, 15.0, 0.0);
    glEnd();
 
    //kanan (kiri)
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(221, 160, 221); // Warna ungu
    glVertex3f(15.0, 15.0, 8.0);
    glVertex3f(15.0, -6.0, 8.0);
    glVertex3f(15.0, -6.0, 25.0);
    glVertex3f(15.0, 15.0, 25.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(221, 160, 221); // Warna ungu
    glVertex3f(16.0, 15.0, 8.0);
    glVertex3f(16.0, -6.0, 8.0);
    glVertex3f(16.0, -6.0, 25.0);
    glVertex3f(16.0, 15.0, 25.0);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(221, 160, 221); // Warna ungu
    glVertex3f(16.0, 15.0, 8.0);
    glVertex3f(15.0, 15.0, 8.0);
    glVertex3f(15.0, 15.0, 25.0);
    glVertex3f(16.0, 15.0, 25.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(221, 160, 221); // Warna ungu
    glVertex3f(15.0, 15.0, 8.0);
    glVertex3f(15.0, -6.0, 8.0);
    glVertex3f(16.0, -6.0, 8.0);
    glVertex3f(16.0, 15.0, 8.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS); //+8
    glColor3ub(221, 160, 221); // Warna ungu
    glVertex3f(15.0, 15.0, 25.0);
    glVertex3f(15.0, -6.0, 25.0);
    glVertex3f(16.0, -6.0, 25.0);
    glVertex3f(16.0, 15.0, 25.0);
    glEnd();

    //kanan (bawah)
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(230, 230, 250); // Warna ungu muda
    glVertex3f(15.0, 1.0, 0.0);
    glVertex3f(15.0, -6.0, 0.0);
    glVertex3f(15.0, -6.0, 8.0);
    glVertex3f(15.0, 1.0, 8.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(230, 230, 250); // Warna ungu muda
    glVertex3f(16.0, 1.0, 0.0);
    glVertex3f(16.0, -6.0, 0.0);
    glVertex3f(16.0, -6.0, 8.0);
    glVertex3f(16.0, 1.0, 8.0);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(230, 230, 250); // Warna ungu muda
    glVertex3f(16.0, 1.0, 0.0);
    glVertex3f(15.0, 1.0, 0.0);
    glVertex3f(15.0, 1.0, 8.0);
    glVertex3f(16.0, 1.0, 8.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(230, 230, 250); // Warna ungu muda
    glVertex3f(15.0, 1.0, 8.0);
    glVertex3f(15.0, -6.0, 8.0);
    glVertex3f(16.0, -6.0, 8.0);
    glVertex3f(16.0, 1.0, 8.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS); //+8
    glColor3ub(230, 230, 250); // Warna ungu muda
    glVertex3f(15.0, 1.0, 0.0);
    glVertex3f(15.0, -6.0, 0.0);
    glVertex3f(16.0, -6.0, 0.0);
    glVertex3f(16.0, 1.0, 0.0);
    glEnd();

    //kanan (atas)
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(230, 230, 250); // Warna ungu muda
    glVertex3f(15.0, 15.0, 0.0);
    glVertex3f(15.0, 5.0, 0.0);
    glVertex3f(15.0, 5.0, 8.0);
    glVertex3f(15.0, 15.0, 8.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(230, 230, 250); // Warna ungu muda
    glVertex3f(16.0, 15.0, 0.0);
    glVertex3f(16.0, 5.0, 0.0);
    glVertex3f(16.0, 5.0, 8.0);
    glVertex3f(16.0, 15.0, 8.0);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(230, 230, 250); // Warna ungu muda
    glVertex3f(16.0, 15.0, 0.0);
    glVertex3f(15.0, 15.0, 0.0);
    glVertex3f(15.0, 15.0, 8.0);
    glVertex3f(16.0, 15.0, 8.0);
    glEnd();
    //bawah
    glBegin(GL_QUADS); //+8
    glColor3ub(230, 230, 250); // Warna ungu muda
    glVertex3f(16.0, 5.0, 0.0);
    glVertex3f(15.0, 5.0, 0.0);
    glVertex3f(15.0, 5.0, 8.0);
    glVertex3f(16.0, 5.0, 8.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(230, 230, 250); // Warna ungu muda
    glVertex3f(15.0, 15.0, 8.0);
    glVertex3f(15.0, 5.0, 8.0);
    glVertex3f(16.0, 5.0, 8.0);
    glVertex3f(16.0, 15.0, 8.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS); //+8
    glColor3ub(230, 230, 250); // Warna ungu muda
    glVertex3f(15.0, 15.0, -1.0);
    glVertex3f(15.0, 5.0, -1.0);
    glVertex3f(16.0, 5.0, -1.0);
    glVertex3f(16.0, 15.0, -1.0);
    glEnd();

//jendela 1
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(186, 186, 186);
    glVertex3f(16.0, 5.0, 8.0);
    glVertex3f(16.0, 1.0, 8.0);
    glVertex3f(16.0, 1.0, 4.0);
    glVertex3f(16.0, 5.0, 4.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(186, 186, 186);
    glVertex3f(15.5, 5.0, 8.0);
    glVertex3f(15.5, 1.0, 8.0);
    glVertex3f(15.5, 1.0, 4.0);
    glVertex3f(15.5, 5.0, 4.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(204, 204, 204);
    glVertex3f(15.5, 5.0, 4.0);
    glVertex3f(15.5, 1.0, 4.0);
    glVertex3f(16.0, 1.0, 4.0);
    glVertex3f(16.0, 5.0, 4.0);
    glEnd();

//jendela 2
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(186, 186, 186);
    glVertex3f(19.0, 5.0, 4.0);
    glVertex3f(19.0, 1.0, 4.0);
    glVertex3f(16.0, 1.0, 0.0);
    glVertex3f(16.0, 5.0, 0.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(186, 186, 186);
    glVertex3f(18.5, 5.0, 4.0);
    glVertex3f(18.5, 1.0, 4.0);
    glVertex3f(15.5, 1.0, 0.0);
    glVertex3f(15.5, 5.0, 0.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(176, 176, 176);
    glVertex3f(18.5, 5.0, 4.0);
    glVertex3f(18.5, 1.0, 4.0);
    glVertex3f(19.0, 1.0, 4.0);
    glVertex3f(19.0, 5.0, 4.0);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(176, 176, 176);
    glVertex3f(15.5, 5.0, 0.0);
    glVertex3f(18.5, 5.0, 4.0);
    glVertex3f(19.0, 5.0, 4.0);
    glVertex3f(16.0, 5.0, 0.0);
    glEnd();

//tempat tidur
  //kayu1
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 2.0, 8.0);
    glVertex3f(-15.0, -5.0, 8.0);
    glVertex3f(-13.5, -5.0, 8.0);
    glVertex3f(-13.5, 2.0, 8.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 2.0, 6.5);
    glVertex3f(-15.0, -5.0, 6.5);
    glVertex3f(-13.5, -5.0, 6.5);
    glVertex3f(-13.5, 2.0, 6.5);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 2.0, 8.0);
    glVertex3f(-15.0, 2.0, 6.5);
    glVertex3f(-13.5, 2.0, 6.5);
    glVertex3f(-13.5, 2.0, 8.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(212, 202, 142);
    glVertex3f(-13.5, 2.0, 8.0);
    glVertex3f(-13.5, -5.0, 8.0);
    glVertex3f(-13.5, -5.0, 6.5);
    glVertex3f(-13.5, 2.0, 6.5);
    glEnd();
    //penyambung
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-13.5, -1.5, 8.0);
    glVertex3f(-13.5, -3.5, 8.0);
    glVertex3f(1.0, -3.5, 8.0);
    glVertex3f(1.0, -1.5, 8.0);
    glEnd();

//kayu2
    //depan
   glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 8.0);
    glVertex3f(1.0, -5.0, 8.0);
    glVertex3f(2.5, -5.0, 8.0);
    glVertex3f(2.5, 2.0, 8.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 6.5);
    glVertex3f(1.0, -5.0, 6.5);
    glVertex3f(2.5, -5.0, 6.5);
    glVertex3f(2.5, 2.0, 6.5);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 8.0);
    glVertex3f(1.0, 2.0, 6.5);
    glVertex3f(2.5, 2.0, 6.5);
    glVertex3f(2.5, 2.0, 8.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(212, 202, 142);
    glVertex3f(2.5, 2.0, 8.0);
    glVertex3f(2.5, -5.0, 8.0);
    glVertex3f(2.5, -5.0, 6.5);
    glVertex3f(2.5, 2.0, 6.5);
    glEnd();
    //kiri
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 8.0);
    glVertex3f(1.0, -5.0, 8.0);
    glVertex3f(1.0, -5.0, 6.5);
    glVertex3f(1.0, 2.0, 6.5);
    glEnd();
    //penyambung
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(2.5, 1.0, 6.5);
    glVertex3f(2.5, -3.5, 6.5);
    glVertex3f(2.5, -3.5, 2.0);
    glVertex3f(2.5, 1.0, 2.0);
    glEnd();
//kayu2
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 2.0);
    glVertex3f(1.0, -5.0, 2.0);
    glVertex3f(2.5, -5.0, 2.0);
    glVertex3f(2.5, 2.0, 2.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 0.5);
    glVertex3f(1.0, -5.0, 0.5);
    glVertex3f(2.5, -5.0, 0.5);
    glVertex3f(2.5, 2.0, 0.5);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 2.0);
    glVertex3f(1.0, 2.0, 0.5);
    glVertex3f(2.5, 2.0, 0.5);
    glVertex3f(2.5, 2.0, 2.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(2.5, 2.0, 2.0);
    glVertex3f(2.5, -5.0, 2.0);
    glVertex3f(2.5, -5.0, 0.5);
    glVertex3f(2.5, 2.0, 0.5);
    glEnd();
    //kiri
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 2.0);
    glVertex3f(1.0, -5.0, 2.0);
    glVertex3f(1.0, -5.0, 0.5);
    glVertex3f(1.0, 2.0, 0.5);
    glEnd();
    //penyambung
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-13.5, -1.5, 0.5);
    glVertex3f(-13.5, -3.5, 0.5);
    glVertex3f(1.0, -3.5, 0.5);
    glVertex3f(1.0, -1.5, 0.5);
    glEnd();
//kayu3
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 2.0, 2.0);
    glVertex3f(-15.0, -5.0, 2.0);
    glVertex3f(-13.5, -5.0, 2.0);
    glVertex3f(-13.5, 2.0, 2.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 2.0, 0.5);
    glVertex3f(-15.0, -5.0, 0.5);
    glVertex3f(-13.5, -5.0, 0.5);
    glVertex3f(-13.5, 2.0, 0.5);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 2.0, 2.0);
    glVertex3f(-15.0, 2.0, 0.5);
    glVertex3f(-13.5, 2.0, 0.5);
    glVertex3f(-13.5, 2.0, 2.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-13.5, 2.0, 2.0);
    glVertex3f(-13.5, -5.0, 2.0);
    glVertex3f(-13.5, -5.0, 0.5);
    glVertex3f(-13.5, 2.0, 0.5);
    glEnd();
    //penyambung
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-14.5, 1.0, 6.5);
    glVertex3f(-14.5, -3.5, 6.5);
    glVertex3f(-14.5, -3.5, 2.0);
    glVertex3f(-14.5, 1.0, 2.0);
    glEnd();

glFlush();
glutSwapBuffers();
}//fungsi untuk setting viewport
void reshape(int w, int h){
 glViewport(0,0, (GLsizei)w, (GLsizei)h); //membuat viewport sesuai ukuran jendela
 glMatrixMode(GL_PROJECTION); //merubah matrix mode menjadi gl_projection
 glLoadIdentity(); //reset transformasi misalnya rotasi pada display
 //gluOrtho2D(-10, 10, -10, 10); //setting spesifikasi proyeksi yang diinginkan (2D)
 //glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0); //+6 proyeksi orthografik 3D
 gluPerspective(30.0, w / h, 1.0, 1000.0); //proyeksi perspektif
/* set initial position */
glTranslatef(0.0, -5.0, -100.0);
 glMatrixMode(GL_MODELVIEW); //merubah matrix mode menjadi gl_modelview
}
//+7
void keyboard(unsigned char key, int x, int y)
{
/* this is the keyboard event handler
 the x and y parameters are the mouse
 coordinates when the key was struck */
switch (key)
{
case 'd':
 case 'D':
 glTranslated(-1.0, 0.0, 0.0);//geser kiri
 break;
 case 'a':
 case 'A':
 glTranslated(1.0, 0.0, 0.0);//geser kanan
 break;
 case 's':
 case 'S':
 glTranslated(0.0, 1.0, 0.0);//geser atas
 break;
 case 'w':
 case 'W':
 glTranslated(0.0, -1.0, 0.0);//geser bawah
 break;
 case 'q':
 case 'Q':
 glTranslated(0.0, 0.0, -1.0);//dalam objek
 break;
 case 'e':
 case 'E':
 glTranslated(0.0, 0.0, 1.0);//keluar objek
 break;
 case 'i':
 case 'I':
 glRotatef(2.0, 1.0, 0.0, 0.0);//rotate kanan
 break;
 case 'k':
 case 'K':
 glRotatef(2.0, -1.0, 0.0, 0.0);//rotate kanan
 break;
 case 'j':
 case 'J':
  glRotatef(2.0, 0.0, 1.0, 0.0);//rotate atas
 break;
 case 'l':
 case 'L':
  glRotatef(2.0, 0.0, -1.0, 0.0);//rotate atas
 break;
}
display(); //memanggil fungsi display atau bisa pakai glutPostRedisplay();
}
