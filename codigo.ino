

//Aqui establecemos las variables de tipo int (numero) para indicar en que pines se encuentran los componentes
const int rele1 = 7; //Lo de "Const" hace referencia a que es una variable constante que no puede ser cambiada
const int rele2 = 8;


void setup() {

  //En esta seccion se inicializa el código, establecemos los pines antes mencionados como OUTPUT para indicar que esos pines son de SALIDA de datos
  pinMode(rele1, OUTPUT);
  pinMode(rele2, OUTPUT);

  //Iniciamos la consola de la salida (Herramientas->Monitor Serie) a 9600 baudios
  Serial.begin(9600);

}

void loop() {
  // En esta linea establecemos una variable de temperatura, en este caso la pondremos de forma aleatoria, pero esto se sustituiria por el numero devuelto por la placa DH11
 int temperatura = random(10, 30);


 // Imprimimos en la consola de salida el resultado
 Serial.print("Temperatura: ");
 Serial.println(temperatura);


 Si la temperatura es mayor que 25, se hace lo siguiente
 if(temperatura > 25){

  //Imprimimos que se está ejecutando en la consola
  Serial.println("Temperatura mayor de 25 grados detectada, actuando motores en reversa");
  delay(1000);
  digitalWrite(rele1, HIGH); // Encendemos el RELE1 (HIGH es el nivel de voltaje)
  delay(1000); // Esperamos un segundo
  digitalWrite(rele1, LOW); // Apagamos el rele con el voltaje LOW
  delay(1000); // Esperamos un segundo
  digitalWrite(rele2, HIGH); // Encendemos el RELE2 (HIGH es el nivel de voltaje)
  delay(1000); // Esperamos un segundo
  digitalWrite(rele2, LOW); // Apagamos el rele con el voltaje LOW
  delay(1000); // Esperamos un segundo
 }

 delay(1000); //Aqui esperamos un segundo por cada repeticion, para que la placa no ejecute todo de seguido
}
