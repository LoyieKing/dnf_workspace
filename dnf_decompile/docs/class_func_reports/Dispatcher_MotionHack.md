# Dispatcher_MotionHack

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 0826464a Dispatcher_MotionHack::process  [0x0826464a-0x82646ad] ===
 826464a:	55                   	push   %ebp
 826464b:	89 e5                	mov    %esp,%ebp
 826464d:	56                   	push   %esi
 826464e:	53                   	push   %ebx
 826464f:	83 ec 30             	sub    $0x30,%esp
 8264652:	8b 45 10             	mov    0x10(%ebp),%eax
 8264655:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8264658:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826465b:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 826465f:	84 c0                	test   %al,%al
 8264661:	74 3e                	je     82646a1 <_ZN21Dispatcher_MotionHack7processEP5CUserR8MSG_BASER9ParamBase+0x57>
 8264663:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8264666:	8b 70 12             	mov    0x12(%eax),%esi
 8264669:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826466c:	8b 58 0e             	mov    0xe(%eax),%ebx
 826466f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8264672:	89 04 24             	mov    %eax,(%esp)
 8264675:	e8 e0 52 e9 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 826467a:	89 74 24 14          	mov    %esi,0x14(%esp)
 826467e:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8264682:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8264689:	00 
 826468a:	c7 44 24 08 83 00 00 	movl   $0x83,0x8(%esp)
 8264691:	00 
 8264692:	8b 55 0c             	mov    0xc(%ebp),%edx
 8264695:	89 54 24 04          	mov    %edx,0x4(%esp)
 8264699:	89 04 24             	mov    %eax,(%esp)
 826469c:	e8 dd 45 e9 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 82646a1:	b8 00 00 00 00       	mov    $0x0,%eax
 82646a6:	83 c4 30             	add    $0x30,%esp
 82646a9:	5b                   	pop    %ebx
 82646aa:	5e                   	pop    %esi
 82646ab:	5d                   	pop    %ebp
 82646ac:	c3                   	ret
 82646ad:	90                   	nop

```

```c
// Dispatcher_MotionHack::process @ 0x826464a

/* Dispatcher_MotionHack::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_MotionHack::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CHackAnalyzer *pCVar3;
  
  if (param_3[0xd] != (ParamBase)0x0) {
    uVar1 = *(undefined4 *)(param_3 + 0x12);
    uVar2 = *(undefined4 *)(param_3 + 0xe);
    pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar3,param_2,0x83,1,uVar2,uVar1);
  }
  return 0;
}

```

---

## read

```asm
// === 08264574 Dispatcher_MotionHack::read  [0x08264574-0x8264649] ===
 8264574:	55                   	push   %ebp
 8264575:	89 e5                	mov    %esp,%ebp
 8264577:	83 ec 18             	sub    $0x18,%esp
 826457a:	8b 45 10             	mov    0x10(%ebp),%eax
 826457d:	83 c0 0d             	add    $0xd,%eax
 8264580:	89 44 24 04          	mov    %eax,0x4(%esp)
 8264584:	8b 45 0c             	mov    0xc(%ebp),%eax
 8264587:	89 04 24             	mov    %eax,(%esp)
 826458a:	e8 e1 89 32 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 826458f:	83 f0 01             	xor    $0x1,%eax
 8264592:	84 c0                	test   %al,%al
 8264594:	74 29                	je     82645bf <_ZN21Dispatcher_MotionHack4readER9PacketBufR8MSG_BASE+0x4b>
 8264596:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 826459d:	00 
 826459e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82645a5:	00 
 82645a6:	c7 44 24 04 a0 c7 be 	movl   $0x8bec7a0,0x4(%esp)
 82645ad:	08 
 82645ae:	c7 04 24 14 04 00 00 	movl   $0x414,(%esp)
 82645b5:	e8 1d c3 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 82645ba:	e9 89 00 00 00       	jmp    8264648 <_ZN21Dispatcher_MotionHack4readER9PacketBufR8MSG_BASE+0xd4>
 82645bf:	8b 45 10             	mov    0x10(%ebp),%eax
 82645c2:	83 c0 0e             	add    $0xe,%eax
 82645c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82645c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82645cc:	89 04 24             	mov    %eax,(%esp)
 82645cf:	e8 6c 8c 32 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 82645d4:	83 f0 01             	xor    $0x1,%eax
 82645d7:	84 c0                	test   %al,%al
 82645d9:	74 26                	je     8264601 <_ZN21Dispatcher_MotionHack4readER9PacketBufR8MSG_BASE+0x8d>
 82645db:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82645e2:	00 
 82645e3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82645ea:	00 
 82645eb:	c7 44 24 04 a0 c7 be 	movl   $0x8bec7a0,0x4(%esp)
 82645f2:	08 
 82645f3:	c7 04 24 16 04 00 00 	movl   $0x416,(%esp)
 82645fa:	e8 d8 c2 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 82645ff:	eb 47                	jmp    8264648 <_ZN21Dispatcher_MotionHack4readER9PacketBufR8MSG_BASE+0xd4>
 8264601:	8b 45 10             	mov    0x10(%ebp),%eax
 8264604:	83 c0 12             	add    $0x12,%eax
 8264607:	89 44 24 04          	mov    %eax,0x4(%esp)
 826460b:	8b 45 0c             	mov    0xc(%ebp),%eax
 826460e:	89 04 24             	mov    %eax,(%esp)
 8264611:	e8 2a 8c 32 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8264616:	83 f0 01             	xor    $0x1,%eax
 8264619:	84 c0                	test   %al,%al
 826461b:	74 26                	je     8264643 <_ZN21Dispatcher_MotionHack4readER9PacketBufR8MSG_BASE+0xcf>
 826461d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8264624:	00 
 8264625:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 826462c:	00 
 826462d:	c7 44 24 04 a0 c7 be 	movl   $0x8bec7a0,0x4(%esp)
 8264634:	08 
 8264635:	c7 04 24 18 04 00 00 	movl   $0x418,(%esp)
 826463c:	e8 96 c2 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 8264641:	eb 05                	jmp    8264648 <_ZN21Dispatcher_MotionHack4readER9PacketBufR8MSG_BASE+0xd4>
 8264643:	b8 00 00 00 00       	mov    $0x0,%eax
 8264648:	c9                   	leave
 8264649:	c3                   	ret

```

```c
// Dispatcher_MotionHack::read @ 0x8264574

/* Dispatcher_MotionHack::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_MotionHack::read(Dispatcher_MotionHack *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x12));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x418,"virtual int Dispatcher_MotionHack::read(PacketBuf&, MSG_BASE&)",0,0)
        ;
      }
    }
    else {
      uVar2 = LineFunc(0x416,"virtual int Dispatcher_MotionHack::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x414,"virtual int Dispatcher_MotionHack::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

