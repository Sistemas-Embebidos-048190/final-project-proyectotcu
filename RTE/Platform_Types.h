/*
 * Archivo: Platform_Types.h
 * Define los tipos de datos básicos de AUTOSAR.
 */
#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

// --- Definiciones de Tipos de Datos Enteros ---
typedef unsigned char      uint8;
typedef signed char        sint8;
typedef unsigned short     uint16;
typedef signed short       sint16;
typedef unsigned int       uint32;
typedef signed int         sint32;

// --- Definiciones de Tipos Booleanos ---
#ifndef BOOL
#define BOOL
typedef uint8              boolean;
#endif

#ifndef FALSE
#define FALSE              (boolean)0
#endif
#ifndef TRUE
#define TRUE               (boolean)1
#endif

// --- Definición de Retorno Estándar ---
typedef uint8              Std_ReturnType;

#define E_OK               (Std_ReturnType)0x00
#define E_NOT_OK           (Std_ReturnType)0x01

#endif /* PLATFORM_TYPES_H */
