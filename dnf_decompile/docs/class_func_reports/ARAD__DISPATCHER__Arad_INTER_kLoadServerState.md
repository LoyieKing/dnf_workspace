# ARAD__DISPATCHER__Arad_INTER_kLoadServerState

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081992fe ARAD::DISPATCHER::Arad_INTER_kLoadServerState::dispatch_sig  [0x081992fe-0x819935d] ===
 81992fe:	55                   	push   %ebp
 81992ff:	89 e5                	mov    %esp,%ebp
 8199301:	83 ec 38             	sub    $0x38,%esp
 8199304:	8b 45 10             	mov    0x10(%ebp),%eax
 8199307:	89 45 f4             	mov    %eax,-0xc(%ebp)
 819930a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 819930e:	75 33                	jne    8199343 <_ZN4ARAD10DISPATCHER27Arad_INTER_kLoadServerState12dispatch_sigEP5CUserPci+0x45>
 8199310:	c7 44 24 10 71 1d ba 	movl   $0x8ba1d71,0x10(%esp)
 8199317:	08 
 8199318:	c7 44 24 0c 33 05 00 	movl   $0x533,0xc(%esp)
 819931f:	00 
 8199320:	c7 44 24 08 00 2f ba 	movl   $0x8ba2f00,0x8(%esp)
 8199327:	08 
 8199328:	c7 44 24 04 38 1c ba 	movl   $0x8ba1c38,0x4(%esp)
 819932f:	08 
 8199330:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8199337:	e8 ce a8 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 819933c:	b8 34 05 00 00       	mov    $0x534,%eax
 8199341:	eb 19                	jmp    819935c <_ZN4ARAD10DISPATCHER27Arad_INTER_kLoadServerState12dispatch_sigEP5CUserPci+0x5e>
 8199343:	a1 f0 f7 41 09       	mov    0x941f7f0,%eax
 8199348:	8b 55 f4             	mov    -0xc(%ebp),%edx
 819934b:	89 54 24 04          	mov    %edx,0x4(%esp)
 819934f:	89 04 24             	mov    %eax,(%esp)
 8199352:	e8 73 ff 00 00       	call   81a92ca <_ZN4ARAD23Arad_ServerStateManager11insertStateEPN4arad14SigServerStateE>
 8199357:	b8 00 00 00 00       	mov    $0x0,%eax
 819935c:	c9                   	leave
 819935d:	c3                   	ret

```

```c
// ARAD::DISPATCHER::Arad_INTER_kLoadServerState::dispatch_sig @ 0x81992fe

/* ARAD::DISPATCHER::Arad_INTER_kLoadServerState::dispatch_sig(CUser*, char*, int) */

undefined4
ARAD::DISPATCHER::Arad_INTER_kLoadServerState::dispatch_sig
          (CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    LogManager::logFormat
              (1,"localjapan/Arad_InterDispatcher.cpp",
               "virtual int ARAD::DISPATCHER::Arad_INTER_kLoadServerState::dispatch_sig(CUser*, char*, int)"
               ,0x533,"SigServerState is null.");
    uVar1 = 0x534;
  }
  else {
    Arad_ServerStateManager::insertState
              (GlobalData::s_serverStateManager_,(SigServerState *)param_3);
    uVar1 = 0;
  }
  return uVar1;
}

```

