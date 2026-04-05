# Semana 12 - Matrices en C++

Ejercicios de la semana 12 sobre el uso de arrays bidimensionales (matrices) en C++.

## Ejercicios

### 1. `tablero.cpp` — Suma de matrices 4x4
El programa pide al usuario que ingrese los 16 elementos de una matriz A de 4x4.
Luego la suma con una matriz B predefinida (identidad) y muestra el resultado.

**Conceptos aplicados:**
- Arrays bidimensionales
- Loops `for` anidados
- Entrada de datos con `cin`

**Ejemplo de salida:**
```
Matriz A:
1 0 0 0
0 1 0 0
0 0 1 0
0 0 0 1

Matriz B:
1 0 0 0
0 1 0 0
0 0 1 0
0 0 0 1

Matriz resultado (A + B):
2 0 0 0
0 2 0 0
0 0 2 0
0 0 0 2
```

---

### 2. `transpuesta.cpp` — Transpuesta de una matriz 3x3
El programa toma una matriz 3x3 predefinida, calcula su transpuesta y muestra ambas.

La transpuesta se obtiene intercambiando filas por columnas: `transpuesta[i][j] = matriz[j][i]`

**Conceptos aplicados:**
- Arrays bidimensionales
- Loops `for` anidados
- Lógica de intercambio de índices

**Ejemplo de salida:**
```
Matriz original:
1 2 3
4 5 6
7 8 9

Matriz transpuesta:
1 4 7
2 5 8
3 6 9
```

---

## Cómo compilar y ejecutar

```bash
# Ejercicio 1
g++ tablero.cpp -o tablero
./tablero

# Ejercicio 2
g++ transpuesta.cpp -o transpuesta
./transpuesta
```

## Tecnologías
- C++
- Librerías estándar: `iostream`
