/**
 ********************************************************************************
 * @file    Platform_Types.h
 * @author  ${user}
 * @date    ${date}
 * @brief   Define los tipos de datos básicos de AUTOSAR y valores estándar
 ********************************************************************************
 */

#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

/************************************
 * INCLUDES
 ************************************/

/************************************
 * MACROS AND DEFINES
 ************************************/

/* --- Definiciones de Valores Booleanos --- */
#ifndef FALSE
#define FALSE              (boolean)0
#endif

#ifndef TRUE
#define TRUE               (boolean)1
#endif

/* --- Definiciones de Retorno Estándar --- */
#define E_OK               (Std_ReturnType)0x00
#define E_NOT_OK           (Std_ReturnType)0x01

/************************************
 * TYPEDEFS
 ************************************/

/* --- Tipos de Datos Enteros --- */
typedef unsigned char      uint8;
typedef signed char        sint8;
typedef unsigned short     uint16;
typedef signed short       sint16;
typedef unsigned int       uint32;
typedef signed int         sint32;

/* --- Tipo Booleano (con guarda de seguridad) --- */
#ifndef BOOL
#define BOOL
typedef uint8              boolean;
#endif

/* --- Tipo de Retorno Estándar --- */
typedef uint8              Std_ReturnType;

/************************************
 * EXPORTED VARIABLES
 ************************************/

/************************************
 * GLOBAL FUNCTION PROTOTYPES
 ************************************/


#ifdef __cplusplus
}
#endif

#endif /* PLATFORM_TYPES_H */
