# ARAD__DISPATCHER__Arad_INTER_kDeleteServerState

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0819935e ARAD::DISPATCHER::Arad_INTER_kDeleteServerState::dispatch_sig  [0x0819935e-0x81993c3] ===
 819935e:	55                   	push   %ebp
 819935f:	89 e5                	mov    %esp,%ebp
 8199361:	83 ec 38             	sub    $0x38,%esp
 8199364:	8b 45 10             	mov    0x10(%ebp),%eax
 8199367:	89 45 f4             	mov    %eax,-0xc(%ebp)
 819936a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 819936e:	75 33                	jne    81993a3 <_ZN4ARAD10DISPATCHER29Arad_INTER_kDeleteServerState12dispatch_sigEP5CUserPci+0x45>
 8199370:	c7 44 24 10 8c 1d ba 	movl   $0x8ba1d8c,0x10(%esp)
 8199377:	08 
 8199378:	c7 44 24 0c 40 05 00 	movl   $0x540,0xc(%esp)
 819937f:	00 
 8199380:	c7 44 24 08 a0 2e ba 	movl   $0x8ba2ea0,0x8(%esp)
 8199387:	08 
 8199388:	c7 44 24 04 38 1c ba 	movl   $0x8ba1c38,0x4(%esp)
 819938f:	08 
 8199390:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8199397:	e8 6e a8 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 819939c:	b8 41 05 00 00       	mov    $0x541,%eax
 81993a1:	eb 1e                	jmp    81993c1 <_ZN4ARAD10DISPATCHER29Arad_INTER_kDeleteServerState12dispatch_sigEP5CUserPci+0x63>
 81993a3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81993a6:	8b 40 0e             	mov    0xe(%eax),%eax
 81993a9:	89 c2                	mov    %eax,%edx
 81993ab:	a1 f0 f7 41 09       	mov    0x941f7f0,%eax
 81993b0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81993b4:	89 04 24             	mov    %eax,(%esp)
 81993b7:	e8 18 00 01 00       	call   81a93d4 <_ZN4ARAD23Arad_ServerStateManager11deleteStateE23ENUM_GLOBAL_EFFECT_ARAD>
 81993bc:	b8 00 00 00 00       	mov    $0x0,%eax
 81993c1:	c9                   	leave
 81993c2:	c3                   	ret
 81993c3:	90                   	nop

```

```c
// ARAD::DISPATCHER::Arad_INTER_kDeleteServerState::dispatch_sig @ 0x819935e

/* ARAD::DISPATCHER::Arad_INTER_kDeleteServerState::dispatch_sig(CUser*, char*, int) */

undefined4
ARAD::DISPATCHER::Arad_INTER_kDeleteServerState::dispatch_sig
          (CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    LogManager::logFormat
              (1,"localjapan/Arad_InterDispatcher.cpp",
               "virtual int ARAD::DISPATCHER::Arad_INTER_kDeleteServerState::dispatch_sig(CUser*, char*, int)"
               ,0x540,"Packet_Arad_DeleteEffect is null.");
    uVar1 = 0x541;
  }
  else {
    Arad_ServerStateManager::deleteState
              (GlobalData::s_serverStateManager_,*(undefined4 *)(param_3 + 0xe));
    uVar1 = 0;
  }
  return uVar1;
}

```

