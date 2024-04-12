/*
  Fundacion kinal
    Centro educativo tecnico laboral kinal
    Quinto perito
    Quinto electronica
    Codigo tecnico: EB5AM / EB5AV
    Curso: Taller de electronica y reparación de computadoras I
    Proyecto: Escritura de un pin digital (Encender y apagar un pin digital)
    Dev: profe. Alejandro Lopez Navas
    Fecha: 12 de abril
    jsolares-2023393
*/

//Directivas de preprocesador
#define LedNaranja 4      //pin4 conectado a un led
#define tiempo_espera 500 //tiempo entre estados del led

void setup() {
  pinMode(LedNaranja, OUTPUT); //pin4 como salida
  digitalWrite(LedNaranja, LOW); //Led conectado al pin13 inicia apagado
}
void loop(){
  digitalWrite(LedNaranja,HIGH); //enciende el Led conectado al pin4
  delay(tiempo_espera); //espera de 500 milisegundos
  digitalWrite(LedNaranja, LOW); //apago el led conectado al pin4
  delay(tiempo_espera); //espera de 500 milisegundos
}
