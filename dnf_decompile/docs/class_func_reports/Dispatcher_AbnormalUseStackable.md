# Dispatcher_AbnormalUseStackable

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 08264a30 Dispatcher_AbnormalUseStackable::check_error  [0x08264a30-0x8264a39] ===
 8264a30:	55                   	push   %ebp
 8264a31:	89 e5                	mov    %esp,%ebp
 8264a33:	b8 00 00 00 00       	mov    $0x0,%eax
 8264a38:	5d                   	pop    %ebp
 8264a39:	c3                   	ret

```

```c
// Dispatcher_AbnormalUseStackable::check_error @ 0x8264a30

/* Dispatcher_AbnormalUseStackable::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_AbnormalUseStackable::check_error(CUser *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## process

```asm
// === 082649ae Dispatcher_AbnormalUseStackable::process  [0x082649ae-0x8264a2f] ===
 82649ae:	55                   	push   %ebp
 82649af:	89 e5                	mov    %esp,%ebp
 82649b1:	56                   	push   %esi
 82649b2:	53                   	push   %ebx
 82649b3:	83 ec 30             	sub    $0x30,%esp
 82649b6:	8b 45 10             	mov    0x10(%ebp),%eax
 82649b9:	89 44 24 08          	mov    %eax,0x8(%esp)
 82649bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 82649c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82649c4:	8b 45 08             	mov    0x8(%ebp),%eax
 82649c7:	89 04 24             	mov    %eax,(%esp)
 82649ca:	e8 61 00 00 00       	call   8264a30 <_ZN31Dispatcher_AbnormalUseStackable11check_errorEP5CUserR8MSG_BASE>
 82649cf:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82649d2:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82649d6:	74 07                	je     82649df <_ZN31Dispatcher_AbnormalUseStackable7processEP5CUserR8MSG_BASER9ParamBase+0x31>
 82649d8:	b8 00 00 00 00       	mov    $0x0,%eax
 82649dd:	eb 49                	jmp    8264a28 <_ZN31Dispatcher_AbnormalUseStackable7processEP5CUserR8MSG_BASER9ParamBase+0x7a>
 82649df:	8b 45 10             	mov    0x10(%ebp),%eax
 82649e2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82649e5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82649e8:	8b 70 14             	mov    0x14(%eax),%esi
 82649eb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82649ee:	8b 58 10             	mov    0x10(%eax),%ebx
 82649f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82649f4:	89 04 24             	mov    %eax,(%esp)
 82649f7:	e8 5e 4f e9 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 82649fc:	89 74 24 14          	mov    %esi,0x14(%esp)
 8264a00:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8264a04:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8264a0b:	00 
 8264a0c:	c7 44 24 08 a0 0f 00 	movl   $0xfa0,0x8(%esp)
 8264a13:	00 
 8264a14:	8b 55 0c             	mov    0xc(%ebp),%edx
 8264a17:	89 54 24 04          	mov    %edx,0x4(%esp)
 8264a1b:	89 04 24             	mov    %eax,(%esp)
 8264a1e:	e8 5b 42 e9 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8264a23:	b8 00 00 00 00       	mov    $0x0,%eax
 8264a28:	83 c4 30             	add    $0x30,%esp
 8264a2b:	5b                   	pop    %ebx
 8264a2c:	5e                   	pop    %esi
 8264a2d:	5d                   	pop    %ebp
 8264a2e:	c3                   	ret
 8264a2f:	90                   	nop

```

```c
// Dispatcher_AbnormalUseStackable::process @ 0x82649ae

/* Dispatcher_AbnormalUseStackable::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_AbnormalUseStackable::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  CHackAnalyzer *pCVar4;
  
  iVar3 = check_error(param_1,param_2);
  if (iVar3 == 0) {
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x10);
    pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_2,4000,1,uVar2,uVar1);
  }
  return 0;
}

```

---

## read

```asm
// === 0826491c Dispatcher_AbnormalUseStackable::read  [0x0826491c-0x82649ad] ===
 826491c:	55                   	push   %ebp
 826491d:	89 e5                	mov    %esp,%ebp
 826491f:	83 ec 18             	sub    $0x18,%esp
 8264922:	8b 45 10             	mov    0x10(%ebp),%eax
 8264925:	83 c0 10             	add    $0x10,%eax
 8264928:	89 44 24 04          	mov    %eax,0x4(%esp)
 826492c:	8b 45 0c             	mov    0xc(%ebp),%eax
 826492f:	89 04 24             	mov    %eax,(%esp)
 8264932:	e8 09 89 32 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8264937:	83 f0 01             	xor    $0x1,%eax
 826493a:	84 c0                	test   %al,%al
 826493c:	74 26                	je     8264964 <_ZN31Dispatcher_AbnormalUseStackable4readER9PacketBufR8MSG_BASE+0x48>
 826493e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8264945:	00 
 8264946:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 826494d:	00 
 826494e:	c7 44 24 04 e0 c6 be 	movl   $0x8bec6e0,0x4(%esp)
 8264955:	08 
 8264956:	c7 04 24 30 05 00 00 	movl   $0x530,(%esp)
 826495d:	e8 75 bf 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 8264962:	eb 47                	jmp    82649ab <_ZN31Dispatcher_AbnormalUseStackable4readER9PacketBufR8MSG_BASE+0x8f>
 8264964:	8b 45 10             	mov    0x10(%ebp),%eax
 8264967:	83 c0 14             	add    $0x14,%eax
 826496a:	89 44 24 04          	mov    %eax,0x4(%esp)
 826496e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8264971:	89 04 24             	mov    %eax,(%esp)
 8264974:	e8 c7 88 32 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8264979:	83 f0 01             	xor    $0x1,%eax
 826497c:	84 c0                	test   %al,%al
 826497e:	74 26                	je     82649a6 <_ZN31Dispatcher_AbnormalUseStackable4readER9PacketBufR8MSG_BASE+0x8a>
 8264980:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8264987:	00 
 8264988:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 826498f:	00 
 8264990:	c7 44 24 04 e0 c6 be 	movl   $0x8bec6e0,0x4(%esp)
 8264997:	08 
 8264998:	c7 04 24 34 05 00 00 	movl   $0x534,(%esp)
 826499f:	e8 33 bf 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 82649a4:	eb 05                	jmp    82649ab <_ZN31Dispatcher_AbnormalUseStackable4readER9PacketBufR8MSG_BASE+0x8f>
 82649a6:	b8 00 00 00 00       	mov    $0x0,%eax
 82649ab:	c9                   	leave
 82649ac:	c3                   	ret
 82649ad:	90                   	nop

```

```c
// Dispatcher_AbnormalUseStackable::read @ 0x826491c

/* Dispatcher_AbnormalUseStackable::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_AbnormalUseStackable::read
          (Dispatcher_AbnormalUseStackable *this,PacketBuf *param_1,MSG_BASE *param_2)

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
      uVar2 = LineFunc(0x534,
                       "virtual int Dispatcher_AbnormalUseStackable::read(PacketBuf&, MSG_BASE&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x530,
                     "virtual int Dispatcher_AbnormalUseStackable::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}

```

