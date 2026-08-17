# ARAD__DISPATCHER__Arad_INTER_kSaveServerState

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08199278 ARAD::DISPATCHER::Arad_INTER_kSaveServerState::dispatch_sig  [0x08199278-0x81992fd] ===
 8199278:	55                   	push   %ebp
 8199279:	89 e5                	mov    %esp,%ebp
 819927b:	83 ec 38             	sub    $0x38,%esp
 819927e:	8b 45 10             	mov    0x10(%ebp),%eax
 8199281:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8199284:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8199288:	75 33                	jne    81992bd <_ZN4ARAD10DISPATCHER27Arad_INTER_kSaveServerState12dispatch_sigEP5CUserPci+0x45>
 819928a:	c7 44 24 10 50 1d ba 	movl   $0x8ba1d50,0x10(%esp)
 8199291:	08 
 8199292:	c7 44 24 0c 21 05 00 	movl   $0x521,0xc(%esp)
 8199299:	00 
 819929a:	c7 44 24 08 60 2f ba 	movl   $0x8ba2f60,0x8(%esp)
 81992a1:	08 
 81992a2:	c7 44 24 04 38 1c ba 	movl   $0x8ba1c38,0x4(%esp)
 81992a9:	08 
 81992aa:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81992b1:	e8 54 a9 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81992b6:	b8 22 05 00 00       	mov    $0x522,%eax
 81992bb:	eb 3f                	jmp    81992fc <_ZN4ARAD10DISPATCHER27Arad_INTER_kSaveServerState12dispatch_sigEP5CUserPci+0x84>
 81992bd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81992c0:	89 04 24             	mov    %eax,(%esp)
 81992c3:	e8 8a d3 fe ff       	call   8186652 <_ZN22AradServerStateMessageC1Ev>
 81992c8:	66 c7 45 e8 01 00    	movw   $0x1,-0x18(%ebp)
 81992ce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81992d1:	8b 40 12             	mov    0x12(%eax),%eax
 81992d4:	89 45 ea             	mov    %eax,-0x16(%ebp)
 81992d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81992da:	8b 40 0e             	mov    0xe(%eax),%eax
 81992dd:	89 c2                	mov    %eax,%edx
 81992df:	a1 f0 f7 41 09       	mov    0x941f7f0,%eax
 81992e4:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81992e7:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81992eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 81992ef:	89 04 24             	mov    %eax,(%esp)
 81992f2:	e8 77 00 01 00       	call   81a936e <_ZN4ARAD23Arad_ServerStateManager11insertStateE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessage>
 81992f7:	b8 00 00 00 00       	mov    $0x0,%eax
 81992fc:	c9                   	leave
 81992fd:	c3                   	ret

```

```c
// ARAD::DISPATCHER::Arad_INTER_kSaveServerState::dispatch_sig @ 0x8199278

/* ARAD::DISPATCHER::Arad_INTER_kSaveServerState::dispatch_sig(CUser*, char*, int) */

undefined4
ARAD::DISPATCHER::Arad_INTER_kSaveServerState::dispatch_sig
          (CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  undefined2 local_1c;
  undefined4 local_1a;
  int local_10;
  
  local_10 = param_3;
  if (param_3 == 0) {
    LogManager::logFormat
              (1,"localjapan/Arad_InterDispatcher.cpp",
               "virtual int ARAD::DISPATCHER::Arad_INTER_kSaveServerState::dispatch_sig(CUser*, char*, int)"
               ,0x521,"Packet_Arad_ApplyEffect is null.");
    uVar1 = 0x522;
  }
  else {
    AradServerStateMessage::AradServerStateMessage((AradServerStateMessage *)&local_1c);
    local_1c = 1;
    local_1a = *(undefined4 *)(local_10 + 0x12);
    Arad_ServerStateManager::insertState
              (GlobalData::s_serverStateManager_,*(undefined4 *)(local_10 + 0xe),&local_1c);
    uVar1 = 0;
  }
  return uVar1;
}

```

