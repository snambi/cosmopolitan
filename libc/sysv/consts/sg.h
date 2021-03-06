#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_SG_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_SG_H_
#include "libc/runtime/symbolic.h"

#define SG_BIG_BUFF SYMBOLIC(SG_BIG_BUFF)
#define SG_DEFAULT_RETRIES SYMBOLIC(SG_DEFAULT_RETRIES)
#define SG_DEFAULT_TIMEOUT SYMBOLIC(SG_DEFAULT_TIMEOUT)
#define SG_DEF_COMMAND_Q SYMBOLIC(SG_DEF_COMMAND_Q)
#define SG_DEF_FORCE_LOW_DMA SYMBOLIC(SG_DEF_FORCE_LOW_DMA)
#define SG_DEF_FORCE_PACK_ID SYMBOLIC(SG_DEF_FORCE_PACK_ID)
#define SG_DEF_KEEP_ORPHAN SYMBOLIC(SG_DEF_KEEP_ORPHAN)
#define SG_DEF_RESERVED_SIZE SYMBOLIC(SG_DEF_RESERVED_SIZE)
#define SG_DEF_UNDERRUN_FLAG SYMBOLIC(SG_DEF_UNDERRUN_FLAG)
#define SG_DXFER_FROM_DEV SYMBOLIC(SG_DXFER_FROM_DEV)
#define SG_DXFER_NONE SYMBOLIC(SG_DXFER_NONE)
#define SG_DXFER_TO_DEV SYMBOLIC(SG_DXFER_TO_DEV)
#define SG_DXFER_TO_FROM_DEV SYMBOLIC(SG_DXFER_TO_FROM_DEV)
#define SG_EMULATED_HOST SYMBOLIC(SG_EMULATED_HOST)
#define SG_FLAG_DIRECT_IO SYMBOLIC(SG_FLAG_DIRECT_IO)
#define SG_FLAG_LUN_INHIBIT SYMBOLIC(SG_FLAG_LUN_INHIBIT)
#define SG_FLAG_NO_DXFER SYMBOLIC(SG_FLAG_NO_DXFER)
#define SG_GET_COMMAND_Q SYMBOLIC(SG_GET_COMMAND_Q)
#define SG_GET_KEEP_ORPHAN SYMBOLIC(SG_GET_KEEP_ORPHAN)
#define SG_GET_LOW_DMA SYMBOLIC(SG_GET_LOW_DMA)
#define SG_GET_NUM_WAITING SYMBOLIC(SG_GET_NUM_WAITING)
#define SG_GET_PACK_ID SYMBOLIC(SG_GET_PACK_ID)
#define SG_GET_REQUEST_TABLE SYMBOLIC(SG_GET_REQUEST_TABLE)
#define SG_GET_RESERVED_SIZE SYMBOLIC(SG_GET_RESERVED_SIZE)
#define SG_GET_SCSI_ID SYMBOLIC(SG_GET_SCSI_ID)
#define SG_GET_SG_TABLESIZE SYMBOLIC(SG_GET_SG_TABLESIZE)
#define SG_GET_TIMEOUT SYMBOLIC(SG_GET_TIMEOUT)
#define SG_GET_TRANSFORM SYMBOLIC(SG_GET_TRANSFORM)
#define SG_GET_VERSION_NUM SYMBOLIC(SG_GET_VERSION_NUM)
#define SG_INFO_CHECK SYMBOLIC(SG_INFO_CHECK)
#define SG_INFO_DIRECT_IO SYMBOLIC(SG_INFO_DIRECT_IO)
#define SG_INFO_DIRECT_IO_MASK SYMBOLIC(SG_INFO_DIRECT_IO_MASK)
#define SG_INFO_INDIRECT_IO SYMBOLIC(SG_INFO_INDIRECT_IO)
#define SG_INFO_MIXED_IO SYMBOLIC(SG_INFO_MIXED_IO)
#define SG_INFO_OK SYMBOLIC(SG_INFO_OK)
#define SG_INFO_OK_MASK SYMBOLIC(SG_INFO_OK_MASK)
#define SG_IO SYMBOLIC(SG_IO)
#define SG_MAX_QUEUE SYMBOLIC(SG_MAX_QUEUE)
#define SG_MAX_SENSE SYMBOLIC(SG_MAX_SENSE)
#define SG_NEXT_CMD_LEN SYMBOLIC(SG_NEXT_CMD_LEN)
#define SG_SCATTER_SZ SYMBOLIC(SG_SCATTER_SZ)
#define SG_SCSI_RESET SYMBOLIC(SG_SCSI_RESET)
#define SG_SCSI_RESET_BUS SYMBOLIC(SG_SCSI_RESET_BUS)
#define SG_SCSI_RESET_DEVICE SYMBOLIC(SG_SCSI_RESET_DEVICE)
#define SG_SCSI_RESET_HOST SYMBOLIC(SG_SCSI_RESET_HOST)
#define SG_SCSI_RESET_NOTHING SYMBOLIC(SG_SCSI_RESET_NOTHING)
#define SG_SET_COMMAND_Q SYMBOLIC(SG_SET_COMMAND_Q)
#define SG_SET_DEBUG SYMBOLIC(SG_SET_DEBUG)
#define SG_SET_FORCE_LOW_DMA SYMBOLIC(SG_SET_FORCE_LOW_DMA)
#define SG_SET_FORCE_PACK_ID SYMBOLIC(SG_SET_FORCE_PACK_ID)
#define SG_SET_KEEP_ORPHAN SYMBOLIC(SG_SET_KEEP_ORPHAN)
#define SG_SET_RESERVED_SIZE SYMBOLIC(SG_SET_RESERVED_SIZE)
#define SG_SET_TIMEOUT SYMBOLIC(SG_SET_TIMEOUT)
#define SG_SET_TRANSFORM SYMBOLIC(SG_SET_TRANSFORM)

#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const long SG_BIG_BUFF;
extern const long SG_DEFAULT_RETRIES;
extern const long SG_DEFAULT_TIMEOUT;
extern const long SG_DEF_COMMAND_Q;
extern const long SG_DEF_FORCE_LOW_DMA;
extern const long SG_DEF_FORCE_PACK_ID;
extern const long SG_DEF_KEEP_ORPHAN;
extern const long SG_DEF_RESERVED_SIZE;
extern const long SG_DEF_UNDERRUN_FLAG;
extern const long SG_DXFER_FROM_DEV;
extern const long SG_DXFER_NONE;
extern const long SG_DXFER_TO_DEV;
extern const long SG_DXFER_TO_FROM_DEV;
extern const long SG_EMULATED_HOST;
extern const long SG_FLAG_DIRECT_IO;
extern const long SG_FLAG_LUN_INHIBIT;
extern const long SG_FLAG_NO_DXFER;
extern const long SG_GET_COMMAND_Q;
extern const long SG_GET_KEEP_ORPHAN;
extern const long SG_GET_LOW_DMA;
extern const long SG_GET_NUM_WAITING;
extern const long SG_GET_PACK_ID;
extern const long SG_GET_REQUEST_TABLE;
extern const long SG_GET_RESERVED_SIZE;
extern const long SG_GET_SCSI_ID;
extern const long SG_GET_SG_TABLESIZE;
extern const long SG_GET_TIMEOUT;
extern const long SG_GET_TRANSFORM;
extern const long SG_GET_VERSION_NUM;
extern const long SG_INFO_CHECK;
extern const long SG_INFO_DIRECT_IO;
extern const long SG_INFO_DIRECT_IO_MASK;
extern const long SG_INFO_INDIRECT_IO;
extern const long SG_INFO_MIXED_IO;
extern const long SG_INFO_OK;
extern const long SG_INFO_OK_MASK;
extern const long SG_IO;
extern const long SG_MAX_QUEUE;
extern const long SG_MAX_SENSE;
extern const long SG_NEXT_CMD_LEN;
extern const long SG_SCATTER_SZ;
extern const long SG_SCSI_RESET;
extern const long SG_SCSI_RESET_BUS;
extern const long SG_SCSI_RESET_DEVICE;
extern const long SG_SCSI_RESET_HOST;
extern const long SG_SCSI_RESET_NOTHING;
extern const long SG_SET_COMMAND_Q;
extern const long SG_SET_DEBUG;
extern const long SG_SET_FORCE_LOW_DMA;
extern const long SG_SET_FORCE_PACK_ID;
extern const long SG_SET_KEEP_ORPHAN;
extern const long SG_SET_RESERVED_SIZE;
extern const long SG_SET_TIMEOUT;
extern const long SG_SET_TRANSFORM;

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_SG_H_ */
