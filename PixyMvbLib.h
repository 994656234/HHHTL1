/*****************************************************************************/
/*           Meng Engineering Badstrasse 18b 5408 Ennetbaden Markus Meng     */
/*           Phone: +41 56 222 44 10. All Rights Reserverd 2010              */
/*===========================================================================*/
/* NAME  : PixyMvbLib.h                                                      */
/* DATE  : 02.03.2010 Version 1.0                                            */
/* Author: Markus Meng                                                       */
/*===========================================================================*/

/*****************************************************************************/
/* Memo field                                                                */
/*****************************************************************************/
/*
 
 Version 1.0

*/

/*
*******************************************************************************
* Compile Check                                                               *
*******************************************************************************
*/

#ifndef PIXYMVBLIB_H
    #define PIXYMVBLIB_H PIXYMVBLIB_H

#ifdef __cplusplus /* C++ compiler support */
extern "C" {
#endif 


/*****************************************************************************/
/* Includes                                                                  */
/*****************************************************************************/
#include "./PixyTypes.h"

/*****************************************************************************/
/* Types                                                                     */
/*****************************************************************************/
typedef UNSIGNED16 PIXYMVB_Data[16];

/*****************************************************************************/
/* Defines                                                                   */
/*****************************************************************************/

#define PIXYMVB_MIN_DEVID 1    /* The lowest possible device/ID is 1         */
#define PIXYMVB_MAX_DEVID 4095 /* The highest val for the device ID is 4095  */

#define PIXYMVB_MIN_SNKTMESUPV  0 /* SnkTimeSupv Interval disabled           */
#define PIXYMVB_MAX_SNKTMESUPV  9 /* 256 msec SinkTimeSupv Intervall         */

#define PIXYMVB_OK              0
#define PIXYMVB_FAILED          1
#define PIXYMVB_PARAMERR        2
#define PIXYMVB_STATEERR        3

#define PIXYMVB_MIN_LOGADDRESS  1 /* 0 is reserved as the 'trash address'    */
#define PIXYMVB_MAX_LOGADDRESS  4095
#define PIXYMVB_MAX_WORDSIZE    16

#define PIXYMVB_STOP_STATE      4 /* Library State 'Stop'                    */
#define PIXYMVB_CONFIG_STATE    5 /* Library State 'Configuration'           */
#define PIXYMVB_OPERATION_STATE 6 /* Library State 'Operation'               */

#define PIXYMVB_TMTEST_OK       7
#define PIXYMVB_TMTEST_REGERR   8
#define PIXYMVB_TMTEST_MEMERR   9

#define PIXYMVB_MIN_TMMODEL     2 /* TM layout shall support 1023 docks      */
#define PIXYMVB_MAX_TMMODEL     3 /* TM layout shall support 4095 docks      */

/* Parameters for TMMODEL  = 0 (16K)   1 (32K)   2 (64K)   3 (256K)   4 (1M) */
#define PIXYMVB_MAX_TMSIZE {16*1024l, 32*1024l, 64*1024l, 256*1024l,1024*1024l}


#define PIXYMVB_SNKPORT         0
#define PIXYMVB_SRCPORT         1

#define PIXYMVB_PHY_OFG         0
#define PIXYMVB_PHY_ESD         1
#define PIXYMVB_PHY_EMD         2

/*****************************************************************************/
/* Defines of Function ID's of exposed Functions                             */
/*****************************************************************************/
#define PIXYMVB_CFGHWINIT_ID      1
#define PIXYMVB_ADDPORT_ID        2
#define PIXYMVB_DELPORT_ID        3
#define PIXYMVB_GETPORT_ID        4
#define PIXYMVB_PUTPORT_ID        5
#define PIXYMVB_GETVARIABLE_ID    6
#define PIXYMVB_PUTVARIABLE_ID    7
#define PIXYMVB_CHANGESTATE_ID    8
#define PIXYMVB_GETSTATE_ID       9
#define PIXYMVB_MEMTEST_ID       10
#define PIXYMVB_DUMPTMMEM_ID     11
#define PIXYMVB_GETLIBVERSION_ID 12


#define PIXYMVB_MAJLIBVERSION     1
#define PIXYMVB_MINLIBVERSION     0
          
/*
*******************************************************************************
* Function     : pixymvb_CfgHWInit (  )     FN-ID: PIXYMVB_CFGHWINIT_ID       *
*                                                                             *
* Applic. State: Stop                                                         *
*                                                                             *
* Param. in    : UNSIGNED8  tMModel         Specifies size of TM model to use *
*                UNSIGNED8  phyMode         Optical, ESD (RS485) or EMD Mode  *
*                UNSIGNED16 deviceID        Mvb network device ID 1...4095    *
*                UNSIGNED8  snkTmeSupvIntv  SnkTime supoervision Interval     * 
*                                                                             *
*                                                                             *
* Return Value : PIXYMVB_OK, PIXYMVB_FAILED, PIXYMVB_PARAMERR,                *
*                PIXYMVB_STATEERR                                             *
*                                                                             *
*******************************************************************************
* Description  : Initialize the mandatory ISA Bus IO Registers and map the    *
*                physical memory from the MVB traffic store into a user space.*
*                This call opens the MVB device. The device descriptor is     *
*                owned by the API. A macro is being used to peform this opera-*
*                tion. Portability. Put the MVBIP in the configuration mode.  *
*                configuration state is entered with this command.            *
*                                                                             *
*******************************************************************************
* History       1   10-02-03   mm Created                                     *
*******************************************************************************
*******************************************************************************
*/
SIGNED16 pixymvb_CfgHWInit ( UNSIGNED8 tMModel,
                             UNSIGNED8 phyMode,
                             UNSIGNED16 deviceID,
                             UNSIGNED8 snkTmeSupvIntv );

/*
*******************************************************************************
* Function     : pixymvb_AddPort (  )       FN-ID: PIXYMVB_ADDPORT_ID         *
*                                                                             *
* Applic. State: Configuration                                                *
*                                                                             *
* Param. in    : UNSIGNED16 logAddress      Logical Address on the MVB Bus    *
*                UNSIGNED8  direction       Port is Snk or Src on the MVB Bus *
*                UNSIGNED8  wordSize        Process Data Payload Size         *
*                PIXYMVB_Data *initVal      A reference for Data XChange      * 
*                                                                             *
*                                                                             *
* Return Value : PIXYMVB_OK, PIXYMVB_FAILED, PIXYMVB_PARAMERR,                *
*                PIXYMVB_STATEERR                                             *
*                                                                             *
*******************************************************************************
* Description  : Add one port with the logical network address "LogAddress" to*
*                the list of ports the traffic store will be configured for.  *
*                It will not operate on the contents of the traffic store it- *
*                self. It will modify an internal configuration structure only*
*                If the initVal argument is a NULL pointer, all data are init-*
*                ialized with zero.Initialize the mandatory ISA Bus IO Regis- *
*                ters and map the.                                            *
*                                                                             *
*******************************************************************************
* History       1   10-02-03   mm Created                                     *
*******************************************************************************
*******************************************************************************
*/
SIGNED16 pixymvb_AddPort ( UNSIGNED16 logAddress, UNSIGNED8 direction,
                           UNSIGNED8 wordSize, PIXYMVB_Data *initVal );

/*
*******************************************************************************
* Function     : pixymvb_DelPort (  )       FN-ID: PIXYMVB_DELPORT_ID         *
*                                                                             *
* Applic. State: Configuration                                                *
*                                                                             *
* Param. in    : UNSIGNED16 logAddress      Logical Address of the Port to Del*
*                                                                             *
* Return Value : PIXYMVB_OK, PIXYMVB_FAILED, PIXYMVB_PARAMERR,                *
*                PIXYMVB_STATEERR                                             *
*                                                                             *
*******************************************************************************
* Description  : Delete a port with the logical network address "LogAddress"  *
*                                                                             *
*******************************************************************************
* History       1   10-02-03   mm Created                                     *
*******************************************************************************
*******************************************************************************
*/
SIGNED16 pixymvb_DelPort ( UNSIGNED16 logAddress );

/*
*******************************************************************************
* Function     : pixymvb_GetPort (  )       FN-ID: PIXYMVB_GETPORT_ID         *
*                                                                             *
* Applic. State: Operation                                                    *
*                                                                             *
* Param. in    : UNSIGNED16 logAddress      Logical Address of the Port to Get*
*              : PIXYMVB_Data *portData     A Reference for the Data to Write *
*                UNSIGNED16 *snkTmeSupv     A Reference for the SinkTimeSupv  *
*                                                                             *
* Return Value : PIXYMVB_OK, PIXYMVB_FAILED, PIXYMVB_PARAMERR,                *
*                PIXYMVB_STATEERR                                             *
*                                                                             *
*******************************************************************************
* Description  : Get the data contents of the sink port identified with       *
*                "logAddress". The value of the sink time supvervision is up- *
*                dated as well. Returns an error if parameters are out of     *
*                range, or if the addressed port does not allow for an        *
*                unambiguous data retrieval from the traffic memory. For ex-  *
*                ample data retrieval for a port that has not been configured *
*                can not be read.                                             *
*                                                                             *
*******************************************************************************
* History       1   10-02-03   mm Created                                     *
*******************************************************************************
*******************************************************************************
*/
SIGNED16 pixymvb_GetPort ( UNSIGNED16 logAddress, PIXYMVB_Data *portData,
                           UNSIGNED16 *snkTmeSupv );

/*
*******************************************************************************
* Function     : pixymvb_PutPort (  )       FN-ID: PIXYMVB_PUTPORT_ID         *
*                                                                             *
* Applic. State: Operation                                                    *
*                                                                             *
* Param. in    : UNSIGNED16 logAddress      Logical Address of the Port to Set*
*              : PIXYMVB_Data *portData     A Reference for the Data to Read  *
*                                                                             *
* Return Value : PIXYMVB_OK, PIXYMVB_FAILED, PIXYMVB_PARAMERR,                *
*                PIXYMVB_STATEERR                                             *
*                                                                             *
*******************************************************************************
* Description  : Update the source port with the data contents stored in      *
*                portData. Returns an error if parameters are out of range,or *
*                if the addressed port does not allow for an unambiguous data *
*                write operation to the traffic memory. For exmple data write *
*                operation for a port that has not been configured to be      *
*                writeable can not be executed.                               *
*                                                                             *
*******************************************************************************
* History       1   10-02-03   mm Created                                     *
*******************************************************************************
*******************************************************************************
*/
SIGNED16 pixymvb_PutPort ( UNSIGNED16 logAddress, PIXYMVB_Data *portData );

/*
*******************************************************************************
* Function     : pixymvb_GetVariable (  )       FN-ID: PIXYMVB_GETVARIABLE_ID *
*                                                                             *
* Applic. State: Operation                                                    *
*                                                                             *
* Param. in    : PIXYMVB_Data *portData     A Reference for the Data to Read  *
*                UNSIGNED8 size             Size of the variable in Bits!     *
*                UNSIGNED8 offset           Offset in number of Bits the var- *
*                                           is embedded in *portData          *
*                UNSIGNED16 *variable       A ref. to the var to be updated   *
*                                                                             *
* Return Value : PIXYMVB_OK, PIXYMVB_FAILED, PIXYMVB_PARAMERR,                *
*                PIXYMVB_STATEERR                                             *
*                                                                             *
*******************************************************************************
* Description  : Get the variable out of the data type portData. Data are     *
*                swapped if required (little endian). Returns an error if pa- *
*                rameters are out of range. For example is the size and offset*
*                is not within the data element of the port being read earlier*
*                                                                             *
*******************************************************************************
* History       1   10-02-03   mm Created                                     *
*******************************************************************************
*******************************************************************************
*/
SIGNED16 pixymvb_GetVariable( PIXYMVB_Data *portData, UNSIGNED8 size,
                              UNSIGNED8 offset, UNSIGNED16 *variable );

/*
*******************************************************************************
* Function     : pixymvb_PutVariable (  )       FN-ID: PIXYMVB_PUTVARIABLE_ID *
*                                                                             *
* Applic. State: Operation                                                    *
*                                                                             *
* Param. in    : PIXYMVB_Data *portData     A Ref. to the Data to be stored!  *
*                UNSIGNED8 size             Size of the variable in Bits!     *
*                UNSIGNED8 offset           Offset in number of Bits the var- *
*                                           is embedded in *portData          *
*                UNSIGNED16 *variable       A ref. to the var to be read from *
*                                                                             *
* Return Value : PIXYMVB_OK, PIXYMVB_FAILED, PIXYMVB_PARAMERR,                *
*                PIXYMVB_STATEERR                                             *
*                                                                             *
*******************************************************************************
* Description  : Put the variable in the data type portData. Data are swapped *
*                if required (little endian). No data is written to the traf- *
*                fic memory. Returns an error if parameters are out of range. *
*                For example is the size and offset is not within the struct  *
*                element data of the port being written. Size/range mismatch. *
*                                                                             *
*******************************************************************************
* History       1   10-02-03   mm Created                                     *
*******************************************************************************
*******************************************************************************
*/
SIGNED16 pixymvb_PutVariable( PIXYMVB_Data *portData, UNSIGNED8 size,
                              UNSIGNED8 offset, UNSIGNED16 *variable );

/*
*******************************************************************************
* Function     : pixymvb_ChangeState (  )     FN-ID: PIXYMVB_CHANGESTATE_ID   *
*                                                                             *
* Applic. State: Configuration, Operation                                     *
*                                                                             *
* Param. in    : UNSIGNED16 libState          Library State Input             *
*                                                                             *
* Return Value : PIXYMVB_OK, PIXYMVB_PARAMERR, PIXYMVB_STATEERR               *
*                                                                             *
*******************************************************************************
* Description  : Change the State of the Library                              *
*                                                                             *
*******************************************************************************
* History       1   10-02-03   mm Created                                     *
*******************************************************************************
*******************************************************************************
*/
SIGNED16 pixymvb_ChangeState( UNSIGNED16 libState );

/*
*******************************************************************************
* Function     : pixymvb_GetState (  )     FN-ID: PIXYMVB_GETSTATE_ID         *
*                                                                             *
* Applic. State: Stop, Configuration, Operation                               *
*                                                                             *
* Param. in    : UNSIGNED16 *libState      A Ref. to Library State Variable to*
*                                          be updated.                        *
*                                                                             *
* Return Value : PIXYMVB_OK, PIXYMVB_PARAMERR                                 *
*                                                                             *
*******************************************************************************
* Description  : Get the current state of the library.                        *
*                                                                             *
*******************************************************************************
* History       1   10-02-03   mm Created                                     *
*******************************************************************************
*******************************************************************************
*/
SIGNED16 pixymvb_GetState( UNSIGNED16 *libState );

/*
*******************************************************************************
* Function     : pixymvb_MemTest (  )     FN-ID: PIXYMVB_MEMTEST_ID           *
*                                                                             *
* Applic. State: Configuration                                                *
*                                                                             *
* Param. in    : UNSIGNED16 *result       A Ref to the result variable ot the *
*                                         memory test.                        *
*                                                                             *
* Return Value : PIXYMVB_OK, PIXYMVB_STATEERR                                 *
*                                                                             *
*******************************************************************************
* Description  : Test the memory of the traffic store for error free access   *
*                and storage capability. The contents of the memory will be   *
*                cleared (set to allZero) at the end of this test. It is up to*
*                the application to decide if and when this test shall run.   *
*                It will take some time to complete, some seconds. A linear   *
*                feedback shiftregister algorithm will be used in order to    *
*                create a pseudo random data sequence for the memory test. The*
*                length of the pseudo data sequence before re-start must exeed*
*                the size of the traffic memory. If the registers of the MVBIP*
*                can not be accessed correctly an error is marked. If the me- *
*                mory of the traffic store has access or data content problem *
*                an error is set.                                             *
*                                                                             *
*******************************************************************************
* History       1   10-02-03   mm Created                                     *
*******************************************************************************
*******************************************************************************
*/
SIGNED16 pixymvb_MemTest( UNSIGNED16 *result );

/*
*******************************************************************************
* Function     : pixymvb_DumpTMMem (  )     FN-ID: PIXYMVB_DUMPTMMEM_ID       *
*                                                                             *
* Applic. State: Configuration, Operation                                     *
*                                                                             *
* Param. in    : UNSIGNED32 offset          A word Offset from the TM BaseAddr*
*                UNSIGNED16 size            The length in NrOfWords to Dump   *
*                UNSIGNED16 *variable       A ref to the buffer it will be    *
*                                           "dumped"                          *
*                                                                             *
* Return Value : PIXYMVB_OK, PIXYMVB_STATEERR, PIXYMVB_PARAMERR               *
*                                                                             *
*******************************************************************************
* Description  : Dump the contents of the traffic memory into a variable. This*
*                is mainly used for debugging the library and the application.*
*                The application software is responsible to provide a buffer  *
*                the traffic memory contents can be written to.               *
*                                                                             *
*******************************************************************************
* History       1   10-02-03   mm Created                                     *
*******************************************************************************
*******************************************************************************
*/
SIGNED16 pixymvb_DumpTMMem( UNSIGNED32 offset,
                            UNSIGNED16 size, UNSIGNED16 *variable );

/*
*******************************************************************************
* Function     : pixymvb_GetLibVersion (  ) FN-ID: PIXYMVB_GETLIBVERSION_ID   *
*                                                                             *
* Applic. State: Stop, Configuration, Operation                               *
*                                                                             *
* Param. in    : UNSIGNED32 *major          Ref of maj Version Index to updte *
*                UNSIGNED32 *minor          Ref of min Version Index to updte *
*                                                                             *
* Return Value : PIXYMVB_OK, PIXYMVB_PARAMERR                                 *
*                                                                             *
*******************************************************************************
* Description  : Get the version information of the library "PixyMvbLib"      *
*                                                                             *
*******************************************************************************
* History       1   10-02-03   mm Created                                     *
*******************************************************************************
*******************************************************************************
*/
SIGNED16 pixymvb_GetLibVersion( UNSIGNED32 *major, UNSIGNED32 *minor );

void pixymvb_ForceSwitch(void);

UNSIGNED8 pixymvb_GetLaa(void);

UNSIGNED8 pixymvb_GetRld(void);

UNSIGNED8 pixymvb_GetSlm(void);

void pixymvb_SetSlm(UNSIGNED8 isSlm);

#ifdef __cplusplus /* C++ compiler support */
}
#endif
#endif /* PIXYMVBLIB_H */
