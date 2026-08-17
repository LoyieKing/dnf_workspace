# Dispatcher_Float_RDATA_Modulation

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 08264b5c Dispatcher_Float_RDATA_Modulation::check_error  [0x08264b5c-0x8264b65] ===
 8264b5c:	55                   	push   %ebp
 8264b5d:	89 e5                	mov    %esp,%ebp
 8264b5f:	b8 00 00 00 00       	mov    $0x0,%eax
 8264b64:	5d                   	pop    %ebp
 8264b65:	c3                   	ret

```

```c
// Dispatcher_Float_RDATA_Modulation::check_error @ 0x8264b5c

/* Dispatcher_Float_RDATA_Modulation::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_Float_RDATA_Modulation::check_error(CUser *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## process

```asm
// === 08264acc Dispatcher_Float_RDATA_Modulation::process  [0x08264acc-0x8264b5b] ===
 8264acc:	55                   	push   %ebp
 8264acd:	89 e5                	mov    %esp,%ebp
 8264acf:	83 ec 38             	sub    $0x38,%esp
 8264ad2:	8b 45 10             	mov    0x10(%ebp),%eax
 8264ad5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8264ad9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8264adc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8264ae0:	8b 45 08             	mov    0x8(%ebp),%eax
 8264ae3:	89 04 24             	mov    %eax,(%esp)
 8264ae6:	e8 71 00 00 00       	call   8264b5c <_ZN33Dispatcher_Float_RDATA_Modulation11check_errorEP5CUserR8MSG_BASE>
 8264aeb:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8264aee:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8264af2:	74 07                	je     8264afb <_ZN33Dispatcher_Float_RDATA_Modulation7processEP5CUserR8MSG_BASER9ParamBase+0x2f>
 8264af4:	b8 00 00 00 00       	mov    $0x0,%eax
 8264af9:	eb 5f                	jmp    8264b5a <_ZN33Dispatcher_Float_RDATA_Modulation7processEP5CUserR8MSG_BASER9ParamBase+0x8e>
 8264afb:	8b 45 10             	mov    0x10(%ebp),%eax
 8264afe:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8264b01:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8264b04:	8b 40 10             	mov    0x10(%eax),%eax
 8264b07:	35 1f 99 ab 59       	xor    $0x59ab991f,%eax
 8264b0c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8264b0f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8264b12:	8b 40 14             	mov    0x14(%eax),%eax
 8264b15:	35 2b 71 93 1f       	xor    $0x1f93712b,%eax
 8264b1a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8264b1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8264b20:	89 04 24             	mov    %eax,(%esp)
 8264b23:	e8 32 4e e9 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8264b28:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8264b2b:	89 54 24 14          	mov    %edx,0x14(%esp)
 8264b2f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8264b32:	89 54 24 10          	mov    %edx,0x10(%esp)
 8264b36:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8264b3d:	00 
 8264b3e:	c7 44 24 08 49 03 00 	movl   $0x349,0x8(%esp)
 8264b45:	00 
 8264b46:	8b 55 0c             	mov    0xc(%ebp),%edx
 8264b49:	89 54 24 04          	mov    %edx,0x4(%esp)
 8264b4d:	89 04 24             	mov    %eax,(%esp)
 8264b50:	e8 29 41 e9 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8264b55:	b8 00 00 00 00       	mov    $0x0,%eax
 8264b5a:	c9                   	leave
 8264b5b:	c3                   	ret

```

```c
// Dispatcher_Float_RDATA_Modulation::process @ 0x8264acc

/* Dispatcher_Float_RDATA_Modulation::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_Float_RDATA_Modulation::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  CHackAnalyzer *pCVar4;
  
  iVar3 = check_error(param_1,param_2);
  if (iVar3 == 0) {
    uVar1 = *(uint *)(param_3 + 0x10);
    uVar2 = *(uint *)(param_3 + 0x14);
    pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt
              (pCVar4,param_2,0x349,1,uVar1 ^ 0x59ab991f,uVar2 ^ 0x1f93712b);
  }
  return 0;
}

```

---

## read

```asm
// === 08264a3a Dispatcher_Float_RDATA_Modulation::read  [0x08264a3a-0x8264acb] ===
 8264a3a:	55                   	push   %ebp
 8264a3b:	89 e5                	mov    %esp,%ebp
 8264a3d:	83 ec 18             	sub    $0x18,%esp
 8264a40:	8b 45 10             	mov    0x10(%ebp),%eax
 8264a43:	83 c0 10             	add    $0x10,%eax
 8264a46:	89 44 24 04          	mov    %eax,0x4(%esp)
 8264a4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8264a4d:	89 04 24             	mov    %eax,(%esp)
 8264a50:	e8 eb 87 32 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8264a55:	83 f0 01             	xor    $0x1,%eax
 8264a58:	84 c0                	test   %al,%al
 8264a5a:	74 26                	je     8264a82 <_ZN33Dispatcher_Float_RDATA_Modulation4readER9PacketBufR8MSG_BASE+0x48>
 8264a5c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8264a63:	00 
 8264a64:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8264a6b:	00 
 8264a6c:	c7 44 24 04 80 c6 be 	movl   $0x8bec680,0x4(%esp)
 8264a73:	08 
 8264a74:	c7 04 24 82 05 00 00 	movl   $0x582,(%esp)
 8264a7b:	e8 57 be 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 8264a80:	eb 47                	jmp    8264ac9 <_ZN33Dispatcher_Float_RDATA_Modulation4readER9PacketBufR8MSG_BASE+0x8f>
 8264a82:	8b 45 10             	mov    0x10(%ebp),%eax
 8264a85:	83 c0 14             	add    $0x14,%eax
 8264a88:	89 44 24 04          	mov    %eax,0x4(%esp)
 8264a8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8264a8f:	89 04 24             	mov    %eax,(%esp)
 8264a92:	e8 a9 87 32 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8264a97:	83 f0 01             	xor    $0x1,%eax
 8264a9a:	84 c0                	test   %al,%al
 8264a9c:	74 26                	je     8264ac4 <_ZN33Dispatcher_Float_RDATA_Modulation4readER9PacketBufR8MSG_BASE+0x8a>
 8264a9e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8264aa5:	00 
 8264aa6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8264aad:	00 
 8264aae:	c7 44 24 04 80 c6 be 	movl   $0x8bec680,0x4(%esp)
 8264ab5:	08 
 8264ab6:	c7 04 24 86 05 00 00 	movl   $0x586,(%esp)
 8264abd:	e8 15 be 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 8264ac2:	eb 05                	jmp    8264ac9 <_ZN33Dispatcher_Float_RDATA_Modulation4readER9PacketBufR8MSG_BASE+0x8f>
 8264ac4:	b8 00 00 00 00       	mov    $0x0,%eax
 8264ac9:	c9                   	leave
 8264aca:	c3                   	ret
 8264acb:	90                   	nop

```

```c
// Dispatcher_Float_RDATA_Modulation::read @ 0x8264a3a

/* Dispatcher_Float_RDATA_Modulation::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Float_RDATA_Modulation::read
          (Dispatcher_Float_RDATA_Modulation *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x10));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x14));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x586,
                       "virtual int Dispatcher_Float_RDATA_Modulation::read(PacketBuf&, MSG_BASE&)",
                       0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x582,
                     "virtual int Dispatcher_Float_RDATA_Modulation::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}

```

