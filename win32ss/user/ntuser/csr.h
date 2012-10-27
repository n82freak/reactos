/* $Id$
 *
 * COPYRIGHT:        See COPYING in the top level directory
 * PROJECT:          ReactOS kernel
 * PURPOSE:          Interface to csrss
 * FILE:             subsys/win32k/include/csr.h
 * PROGRAMER:        Ge van Geldorp (ge@gse.nl)
 */

#pragma once

extern PEPROCESS CsrProcess;

NTSTATUS FASTCALL CsrInit(void);
NTSTATUS FASTCALL co_CsrNotify(IN OUT PCSR_API_MESSAGE ApiMessage,
                               IN ULONG DataLength);
NTSTATUS FASTCALL CsrCloseHandle(HANDLE Handle);
NTSTATUS WINAPI CsrInsertObject(HANDLE ObjectHandle,
                                 ACCESS_MASK DesiredAccess,
                                 PHANDLE Handle);

/* EOF */
