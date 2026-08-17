# WongWork__CDeathTower__CPacketHandler

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## appendPickupItem

```asm
// === 0845fdc0 WongWork::CDeathTower::CPacketHandler::appendPickupItem  [0x0845fdc0-0x845fe4b] ===
 845fdc0:	55                   	push   %ebp
 845fdc1:	89 e5                	mov    %esp,%ebp
 845fdc3:	83 ec 38             	sub    $0x38,%esp
 845fdc6:	8b 45 10             	mov    0x10(%ebp),%eax
 845fdc9:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 845fdcd:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 845fdd4:	eb 1f                	jmp    845fdf5 <_ZN8WongWork11CDeathTower14CPacketHandler16appendPickupItemEPctii+0x35>
 845fdd6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 845fdd9:	03 45 0c             	add    0xc(%ebp),%eax
 845fddc:	0f b6 00             	movzbl (%eax),%eax
 845fddf:	0f be d0             	movsbl %al,%edx
 845fde2:	8b 45 08             	mov    0x8(%ebp),%eax
 845fde5:	89 54 24 04          	mov    %edx,0x4(%esp)
 845fde9:	89 04 24             	mov    %eax,(%esp)
 845fdec:	e8 2f bb c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 845fdf1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 845fdf5:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 845fdf9:	0f 9e c0             	setle  %al
 845fdfc:	84 c0                	test   %al,%al
 845fdfe:	75 d6                	jne    845fdd6 <_ZN8WongWork11CDeathTower14CPacketHandler16appendPickupItemEPctii+0x16>
 845fe00:	0f b7 55 e4          	movzwl -0x1c(%ebp),%edx
 845fe04:	8b 45 08             	mov    0x8(%ebp),%eax
 845fe07:	89 54 24 04          	mov    %edx,0x4(%esp)
 845fe0b:	89 04 24             	mov    %eax,(%esp)
 845fe0e:	e8 91 a0 c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 845fe13:	8b 45 08             	mov    0x8(%ebp),%eax
 845fe16:	8b 55 14             	mov    0x14(%ebp),%edx
 845fe19:	89 54 24 04          	mov    %edx,0x4(%esp)
 845fe1d:	89 04 24             	mov    %eax,(%esp)
 845fe20:	e8 7f a0 c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 845fe25:	8b 45 08             	mov    0x8(%ebp),%eax
 845fe28:	8b 55 18             	mov    0x18(%ebp),%edx
 845fe2b:	89 54 24 04          	mov    %edx,0x4(%esp)
 845fe2f:	89 04 24             	mov    %eax,(%esp)
 845fe32:	e8 e9 ba c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 845fe37:	8b 45 08             	mov    0x8(%ebp),%eax
 845fe3a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 845fe41:	00 
 845fe42:	89 04 24             	mov    %eax,(%esp)
 845fe45:	e8 0e bb c6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 845fe4a:	c9                   	leave
 845fe4b:	c3                   	ret

```

```c
// WongWork::CDeathTower::CPacketHandler::appendPickupItem @ 0x845fdc0

/* WongWork::CDeathTower::CPacketHandler::appendPickupItem(char*, unsigned short, int, int) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::appendPickupItem
          (CPacketHandler *this,char *param_1,ushort param_2,int param_3,int param_4)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,(int)param_1[local_10]);
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,(uint)param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,param_3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,param_4);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}

```

---

## appendPickupMoney

```asm
// === 0845fcc4 WongWork::CDeathTower::CPacketHandler::appendPickupMoney  [0x0845fcc4-0x845fdbf] ===
 845fcc4:	55                   	push   %ebp
 845fcc5:	89 e5                	mov    %esp,%ebp
 845fcc7:	83 ec 28             	sub    $0x28,%esp
 845fcca:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 845fcd1:	e9 c5 00 00 00       	jmp    845fd9b <_ZN8WongWork11CDeathTower14CPacketHandler17appendPickupMoneyEPiS2_P6CParty+0xd7>
 845fcd6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 845fcd9:	89 44 24 04          	mov    %eax,0x4(%esp)
 845fcdd:	8b 45 14             	mov    0x14(%ebp),%eax
 845fce0:	89 04 24             	mov    %eax,(%esp)
 845fce3:	e8 7c 5a ce ff       	call   8145764 <_ZN6CParty8get_userEi>
 845fce8:	85 c0                	test   %eax,%eax
 845fcea:	74 19                	je     845fd05 <_ZN8WongWork11CDeathTower14CPacketHandler17appendPickupMoneyEPiS2_P6CParty+0x41>
 845fcec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 845fcef:	89 44 24 04          	mov    %eax,0x4(%esp)
 845fcf3:	8b 45 14             	mov    0x14(%ebp),%eax
 845fcf6:	89 04 24             	mov    %eax,(%esp)
 845fcf9:	e8 6a 5b ce ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 845fcfe:	83 f0 01             	xor    $0x1,%eax
 845fd01:	84 c0                	test   %al,%al
 845fd03:	74 07                	je     845fd0c <_ZN8WongWork11CDeathTower14CPacketHandler17appendPickupMoneyEPiS2_P6CParty+0x48>
 845fd05:	b8 01 00 00 00       	mov    $0x1,%eax
 845fd0a:	eb 05                	jmp    845fd11 <_ZN8WongWork11CDeathTower14CPacketHandler17appendPickupMoneyEPiS2_P6CParty+0x4d>
 845fd0c:	b8 00 00 00 00       	mov    $0x0,%eax
 845fd11:	84 c0                	test   %al,%al
 845fd13:	74 28                	je     845fd3d <_ZN8WongWork11CDeathTower14CPacketHandler17appendPickupMoneyEPiS2_P6CParty+0x79>
 845fd15:	8b 45 08             	mov    0x8(%ebp),%eax
 845fd18:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 845fd1f:	00 
 845fd20:	89 04 24             	mov    %eax,(%esp)
 845fd23:	e8 f8 bb c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 845fd28:	8b 45 08             	mov    0x8(%ebp),%eax
 845fd2b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 845fd32:	00 
 845fd33:	89 04 24             	mov    %eax,(%esp)
 845fd36:	e8 01 bc c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 845fd3b:	eb 5a                	jmp    845fd97 <_ZN8WongWork11CDeathTower14CPacketHandler17appendPickupMoneyEPiS2_P6CParty+0xd3>
 845fd3d:	8b 45 08             	mov    0x8(%ebp),%eax
 845fd40:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 845fd47:	00 
 845fd48:	89 04 24             	mov    %eax,(%esp)
 845fd4b:	e8 d0 bb c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 845fd50:	8b 45 f4             	mov    -0xc(%ebp),%eax
 845fd53:	c1 e0 02             	shl    $0x2,%eax
 845fd56:	03 45 0c             	add    0xc(%ebp),%eax
 845fd59:	8b 10                	mov    (%eax),%edx
 845fd5b:	8b 45 08             	mov    0x8(%ebp),%eax
 845fd5e:	89 54 24 04          	mov    %edx,0x4(%esp)
 845fd62:	89 04 24             	mov    %eax,(%esp)
 845fd65:	e8 d2 bb c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 845fd6a:	8b 45 08             	mov    0x8(%ebp),%eax
 845fd6d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 845fd74:	00 
 845fd75:	89 04 24             	mov    %eax,(%esp)
 845fd78:	e8 a3 bb c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 845fd7d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 845fd80:	c1 e0 02             	shl    $0x2,%eax
 845fd83:	03 45 10             	add    0x10(%ebp),%eax
 845fd86:	8b 10                	mov    (%eax),%edx
 845fd88:	8b 45 08             	mov    0x8(%ebp),%eax
 845fd8b:	89 54 24 04          	mov    %edx,0x4(%esp)
 845fd8f:	89 04 24             	mov    %eax,(%esp)
 845fd92:	e8 a5 bb c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 845fd97:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 845fd9b:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 845fd9f:	0f 9e c0             	setle  %al
 845fda2:	84 c0                	test   %al,%al
 845fda4:	0f 85 2c ff ff ff    	jne    845fcd6 <_ZN8WongWork11CDeathTower14CPacketHandler17appendPickupMoneyEPiS2_P6CParty+0x12>
 845fdaa:	8b 45 08             	mov    0x8(%ebp),%eax
 845fdad:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 845fdb4:	00 
 845fdb5:	89 04 24             	mov    %eax,(%esp)
 845fdb8:	e8 9b bb c6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 845fdbd:	c9                   	leave
 845fdbe:	c3                   	ret
 845fdbf:	90                   	nop

```

```c
// WongWork::CDeathTower::CPacketHandler::appendPickupMoney @ 0x845fcc4

/* WongWork::CDeathTower::CPacketHandler::appendPickupMoney(int*, int*, CParty*) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::appendPickupMoney
          (CPacketHandler *this,int *param_1,int *param_2,CParty *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_10;
  
  local_10 = 0;
  do {
    if (3 < local_10) {
      InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
      return;
    }
    iVar3 = CParty::get_user(param_3,local_10);
    if (iVar3 == 0) {
LAB_0845fd05:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(param_3,local_10);
      if (cVar2 != '\x01') goto LAB_0845fd05;
      bVar1 = false;
    }
    if (bVar1) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)this,0);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)this,param_1[local_10]);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)this,param_2[local_10]);
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

---

## makeCommonError

```asm
// === 0845fe4c WongWork::CDeathTower::CPacketHandler::makeCommonError  [0x0845fe4c-0x845fea5] ===
 845fe4c:	55                   	push   %ebp
 845fe4d:	89 e5                	mov    %esp,%ebp
 845fe4f:	83 ec 18             	sub    $0x18,%esp
 845fe52:	8b 55 0c             	mov    0xc(%ebp),%edx
 845fe55:	8b 45 08             	mov    0x8(%ebp),%eax
 845fe58:	89 54 24 08          	mov    %edx,0x8(%esp)
 845fe5c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 845fe63:	00 
 845fe64:	89 04 24             	mov    %eax,(%esp)
 845fe67:	e8 90 ba c6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 845fe6c:	8b 45 08             	mov    0x8(%ebp),%eax
 845fe6f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 845fe76:	00 
 845fe77:	89 04 24             	mov    %eax,(%esp)
 845fe7a:	e8 a1 ba c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 845fe7f:	8b 55 10             	mov    0x10(%ebp),%edx
 845fe82:	8b 45 08             	mov    0x8(%ebp),%eax
 845fe85:	89 54 24 04          	mov    %edx,0x4(%esp)
 845fe89:	89 04 24             	mov    %eax,(%esp)
 845fe8c:	e8 8f ba c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 845fe91:	8b 45 08             	mov    0x8(%ebp),%eax
 845fe94:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 845fe9b:	00 
 845fe9c:	89 04 24             	mov    %eax,(%esp)
 845fe9f:	e8 b4 ba c6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 845fea4:	c9                   	leave
 845fea5:	c3                   	ret

```

```c
// WongWork::CDeathTower::CPacketHandler::makeCommonError @ 0x845fe4c

/* WongWork::CDeathTower::CPacketHandler::makeCommonError(ENUM_CMDPACKET, ENUM_ERROR) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::makeCommonError(CPacketHandler *this,int param_2,int param_3)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,1,param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}

```

---

## makeDieState

```asm
// === 08460176 WongWork::CDeathTower::CPacketHandler::makeDieState  [0x08460176-0x84601d9] ===
 8460176:	55                   	push   %ebp
 8460177:	89 e5                	mov    %esp,%ebp
 8460179:	83 ec 28             	sub    $0x28,%esp
 846017c:	8b 45 0c             	mov    0xc(%ebp),%eax
 846017f:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 8460183:	8b 45 08             	mov    0x8(%ebp),%eax
 8460186:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 846018d:	00 
 846018e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8460195:	00 
 8460196:	89 04 24             	mov    %eax,(%esp)
 8460199:	e8 5e b7 c6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 846019e:	0f b7 55 f4          	movzwl -0xc(%ebp),%edx
 84601a2:	8b 45 08             	mov    0x8(%ebp),%eax
 84601a5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84601a9:	89 04 24             	mov    %eax,(%esp)
 84601ac:	e8 f3 9c c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84601b1:	8b 45 08             	mov    0x8(%ebp),%eax
 84601b4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84601bb:	00 
 84601bc:	89 04 24             	mov    %eax,(%esp)
 84601bf:	e8 5c b7 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84601c4:	8b 45 08             	mov    0x8(%ebp),%eax
 84601c7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84601ce:	00 
 84601cf:	89 04 24             	mov    %eax,(%esp)
 84601d2:	e8 81 b7 c6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84601d7:	c9                   	leave
 84601d8:	c3                   	ret
 84601d9:	90                   	nop

```

```c
// WongWork::CDeathTower::CPacketHandler::makeDieState @ 0x8460176

/* WongWork::CDeathTower::CPacketHandler::makeDieState(unsigned short) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::makeDieState(CPacketHandler *this,ushort param_1)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,0,0x20);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,(uint)param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,0);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}

```

---

## makeDisplayEPLP

```asm
// === 084604b0 WongWork::CDeathTower::CPacketHandler::makeDisplayEPLP  [0x084604b0-0x846050d] ===
 84604b0:	55                   	push   %ebp
 84604b1:	89 e5                	mov    %esp,%ebp
 84604b3:	83 ec 28             	sub    $0x28,%esp
 84604b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84604b9:	88 45 f4             	mov    %al,-0xc(%ebp)
 84604bc:	8b 45 08             	mov    0x8(%ebp),%eax
 84604bf:	c7 44 24 08 92 00 00 	movl   $0x92,0x8(%esp)
 84604c6:	00 
 84604c7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84604ce:	00 
 84604cf:	89 04 24             	mov    %eax,(%esp)
 84604d2:	e8 25 b4 c6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84604d7:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 84604db:	74 07                	je     84604e4 <_ZN8WongWork11CDeathTower14CPacketHandler15makeDisplayEPLPEb+0x34>
 84604dd:	b8 01 00 00 00       	mov    $0x1,%eax
 84604e2:	eb 05                	jmp    84604e9 <_ZN8WongWork11CDeathTower14CPacketHandler15makeDisplayEPLPEb+0x39>
 84604e4:	b8 00 00 00 00       	mov    $0x0,%eax
 84604e9:	8b 55 08             	mov    0x8(%ebp),%edx
 84604ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 84604f0:	89 14 24             	mov    %edx,(%esp)
 84604f3:	e8 28 b4 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84604f8:	8b 45 08             	mov    0x8(%ebp),%eax
 84604fb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8460502:	00 
 8460503:	89 04 24             	mov    %eax,(%esp)
 8460506:	e8 4d b4 c6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 846050b:	c9                   	leave
 846050c:	c3                   	ret
 846050d:	90                   	nop

```

```c
// WongWork::CDeathTower::CPacketHandler::makeDisplayEPLP @ 0x84604b0

/* WongWork::CDeathTower::CPacketHandler::makeDisplayEPLP(bool) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::makeDisplayEPLP(CPacketHandler *this,bool param_1)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,0,0x92);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,(uint)param_1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}

```

---

## makeDisplayRangking

```asm
// === 084601da WongWork::CDeathTower::CPacketHandler::makeDisplayRangking  [0x084601da-0x84602c3] ===
 84601da:	55                   	push   %ebp
 84601db:	89 e5                	mov    %esp,%ebp
 84601dd:	56                   	push   %esi
 84601de:	53                   	push   %ebx
 84601df:	83 ec 20             	sub    $0x20,%esp
 84601e2:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84601e5:	88 45 f4             	mov    %al,-0xc(%ebp)
 84601e8:	8b 45 08             	mov    0x8(%ebp),%eax
 84601eb:	c7 44 24 08 90 00 00 	movl   $0x90,0x8(%esp)
 84601f2:	00 
 84601f3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84601fa:	00 
 84601fb:	89 04 24             	mov    %eax,(%esp)
 84601fe:	e8 f9 b6 c6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8460203:	8b 55 18             	mov    0x18(%ebp),%edx
 8460206:	8b 45 08             	mov    0x8(%ebp),%eax
 8460209:	89 54 24 04          	mov    %edx,0x4(%esp)
 846020d:	89 04 24             	mov    %eax,(%esp)
 8460210:	e8 27 b7 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8460215:	8b 55 14             	mov    0x14(%ebp),%edx
 8460218:	8b 45 08             	mov    0x8(%ebp),%eax
 846021b:	89 54 24 04          	mov    %edx,0x4(%esp)
 846021f:	89 04 24             	mov    %eax,(%esp)
 8460222:	e8 15 b7 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8460227:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
 846022b:	8b 45 08             	mov    0x8(%ebp),%eax
 846022e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8460232:	89 04 24             	mov    %eax,(%esp)
 8460235:	e8 e6 b6 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 846023a:	8b 55 24             	mov    0x24(%ebp),%edx
 846023d:	8b 45 08             	mov    0x8(%ebp),%eax
 8460240:	89 54 24 04          	mov    %edx,0x4(%esp)
 8460244:	89 04 24             	mov    %eax,(%esp)
 8460247:	e8 f0 b6 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 846024c:	8b 75 08             	mov    0x8(%ebp),%esi
 846024f:	8b 45 20             	mov    0x20(%ebp),%eax
 8460252:	89 04 24             	mov    %eax,(%esp)
 8460255:	e8 0f 9b 00 00       	call   8469d69 <_ZN8WongWork18CDeathTowerRanking23makeDungeonIdx2TowerIdxEj>
 846025a:	89 c3                	mov    %eax,%ebx
 846025c:	8b 45 0c             	mov    0xc(%ebp),%eax
 846025f:	89 04 24             	mov    %eax,(%esp)
 8460262:	e8 e5 74 e4 ff       	call   82a774c <_ZN8WongWork18CDeathTowerRanking12getRankTableEj>
 8460267:	89 74 24 0c          	mov    %esi,0xc(%esp)
 846026b:	8b 55 10             	mov    0x10(%ebp),%edx
 846026e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8460272:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8460276:	89 04 24             	mov    %eax,(%esp)
 8460279:	e8 10 89 00 00       	call   8468b8e <_ZN8WongWork18CDeathTowerRanking22makeMyBestRecordPacketEjjR11PacketGuard>
 846027e:	8b 75 08             	mov    0x8(%ebp),%esi
 8460281:	8b 45 20             	mov    0x20(%ebp),%eax
 8460284:	89 04 24             	mov    %eax,(%esp)
 8460287:	e8 dd 9a 00 00       	call   8469d69 <_ZN8WongWork18CDeathTowerRanking23makeDungeonIdx2TowerIdxEj>
 846028c:	89 c3                	mov    %eax,%ebx
 846028e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8460291:	89 04 24             	mov    %eax,(%esp)
 8460294:	e8 b3 74 e4 ff       	call   82a774c <_ZN8WongWork18CDeathTowerRanking12getRankTableEj>
 8460299:	89 74 24 08          	mov    %esi,0x8(%esp)
 846029d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84602a1:	89 04 24             	mov    %eax,(%esp)
 84602a4:	e8 bf 89 00 00       	call   8468c68 <_ZN8WongWork18CDeathTowerRanking25makeTopRankerRecordPacketEjR11PacketGuard>
 84602a9:	8b 45 08             	mov    0x8(%ebp),%eax
 84602ac:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84602b3:	00 
 84602b4:	89 04 24             	mov    %eax,(%esp)
 84602b7:	e8 9c b6 c6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84602bc:	83 c4 20             	add    $0x20,%esp
 84602bf:	5b                   	pop    %ebx
 84602c0:	5e                   	pop    %esi
 84602c1:	5d                   	pop    %ebp
 84602c2:	c3                   	ret
 84602c3:	90                   	nop

```

```c
// WongWork::CDeathTower::CPacketHandler::makeDisplayRangking @ 0x84601da

/* WongWork::CDeathTower::CPacketHandler::makeDisplayRangking(unsigned int, unsigned int, unsigned
   int, unsigned int, bool, unsigned int, unsigned int) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::makeDisplayRangking
          (CPacketHandler *this,uint param_1,uint param_2,uint param_3,uint param_4,bool param_5,
          uint param_6,uint param_7)

{
  uint uVar1;
  CDeathTowerRanking *pCVar2;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,0,0x90);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)this,param_4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)this,param_3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,(uint)param_5);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)this,param_7);
  uVar1 = CDeathTowerRanking::makeDungeonIdx2TowerIdx(param_6);
  pCVar2 = (CDeathTowerRanking *)CDeathTowerRanking::getRankTable(param_1);
  CDeathTowerRanking::makeMyBestRecordPacket(pCVar2,uVar1,param_2,(PacketGuard *)this);
  uVar1 = CDeathTowerRanking::makeDungeonIdx2TowerIdx(param_6);
  pCVar2 = (CDeathTowerRanking *)CDeathTowerRanking::getRankTable(param_1);
  CDeathTowerRanking::makeTopRankerRecordPacket(pCVar2,uVar1,(PacketGuard *)this);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}

```

---

## makeDisplayReward

```asm
// === 084602c4 WongWork::CDeathTower::CPacketHandler::makeDisplayReward  [0x084602c4-0x84604af] ===
 84602c4:	55                   	push   %ebp
 84602c5:	89 e5                	mov    %esp,%ebp
 84602c7:	83 ec 28             	sub    $0x28,%esp
 84602ca:	8b 45 08             	mov    0x8(%ebp),%eax
 84602cd:	c7 44 24 08 91 00 00 	movl   $0x91,0x8(%esp)
 84602d4:	00 
 84602d5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84602dc:	00 
 84602dd:	89 04 24             	mov    %eax,(%esp)
 84602e0:	e8 17 b6 c6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84602e5:	8b 45 08             	mov    0x8(%ebp),%eax
 84602e8:	8b 55 0c             	mov    0xc(%ebp),%edx
 84602eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 84602ef:	89 04 24             	mov    %eax,(%esp)
 84602f2:	e8 45 b6 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84602f7:	8b 45 08             	mov    0x8(%ebp),%eax
 84602fa:	8b 55 10             	mov    0x10(%ebp),%edx
 84602fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8460301:	89 04 24             	mov    %eax,(%esp)
 8460304:	e8 17 b6 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8460309:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8460310:	eb 41                	jmp    8460353 <_ZN8WongWork11CDeathTower14CPacketHandler17makeDisplayRewardEiiPK10Inven_ItemiS4_iS4_iS4_+0x8f>
 8460312:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8460315:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8460318:	03 45 14             	add    0x14(%ebp),%eax
 846031b:	8b 40 02             	mov    0x2(%eax),%eax
 846031e:	89 c2                	mov    %eax,%edx
 8460320:	8b 45 08             	mov    0x8(%ebp),%eax
 8460323:	89 54 24 04          	mov    %edx,0x4(%esp)
 8460327:	89 04 24             	mov    %eax,(%esp)
 846032a:	e8 0d b6 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 846032f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8460332:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8460335:	03 45 14             	add    0x14(%ebp),%eax
 8460338:	89 04 24             	mov    %eax,(%esp)
 846033b:	e8 fa 74 c9 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 8460340:	8b 55 08             	mov    0x8(%ebp),%edx
 8460343:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460347:	89 14 24             	mov    %edx,(%esp)
 846034a:	e8 ed b5 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 846034f:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8460353:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8460356:	3b 45 10             	cmp    0x10(%ebp),%eax
 8460359:	0f 9c c0             	setl   %al
 846035c:	84 c0                	test   %al,%al
 846035e:	75 b2                	jne    8460312 <_ZN8WongWork11CDeathTower14CPacketHandler17makeDisplayRewardEiiPK10Inven_ItemiS4_iS4_iS4_+0x4e>
 8460360:	8b 45 08             	mov    0x8(%ebp),%eax
 8460363:	8b 55 18             	mov    0x18(%ebp),%edx
 8460366:	89 54 24 04          	mov    %edx,0x4(%esp)
 846036a:	89 04 24             	mov    %eax,(%esp)
 846036d:	e8 ae b5 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8460372:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8460379:	eb 41                	jmp    84603bc <_ZN8WongWork11CDeathTower14CPacketHandler17makeDisplayRewardEiiPK10Inven_ItemiS4_iS4_iS4_+0xf8>
 846037b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 846037e:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8460381:	03 45 1c             	add    0x1c(%ebp),%eax
 8460384:	8b 40 02             	mov    0x2(%eax),%eax
 8460387:	89 c2                	mov    %eax,%edx
 8460389:	8b 45 08             	mov    0x8(%ebp),%eax
 846038c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8460390:	89 04 24             	mov    %eax,(%esp)
 8460393:	e8 a4 b5 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8460398:	8b 45 ec             	mov    -0x14(%ebp),%eax
 846039b:	6b c0 3d             	imul   $0x3d,%eax,%eax
 846039e:	03 45 1c             	add    0x1c(%ebp),%eax
 84603a1:	89 04 24             	mov    %eax,(%esp)
 84603a4:	e8 91 74 c9 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 84603a9:	8b 55 08             	mov    0x8(%ebp),%edx
 84603ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 84603b0:	89 14 24             	mov    %edx,(%esp)
 84603b3:	e8 84 b5 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84603b8:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 84603bc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84603bf:	3b 45 18             	cmp    0x18(%ebp),%eax
 84603c2:	0f 9c c0             	setl   %al
 84603c5:	84 c0                	test   %al,%al
 84603c7:	75 b2                	jne    846037b <_ZN8WongWork11CDeathTower14CPacketHandler17makeDisplayRewardEiiPK10Inven_ItemiS4_iS4_iS4_+0xb7>
 84603c9:	8b 45 08             	mov    0x8(%ebp),%eax
 84603cc:	8b 55 20             	mov    0x20(%ebp),%edx
 84603cf:	89 54 24 04          	mov    %edx,0x4(%esp)
 84603d3:	89 04 24             	mov    %eax,(%esp)
 84603d6:	e8 45 b5 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84603db:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84603e2:	eb 41                	jmp    8460425 <_ZN8WongWork11CDeathTower14CPacketHandler17makeDisplayRewardEiiPK10Inven_ItemiS4_iS4_iS4_+0x161>
 84603e4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84603e7:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84603ea:	03 45 24             	add    0x24(%ebp),%eax
 84603ed:	8b 40 02             	mov    0x2(%eax),%eax
 84603f0:	89 c2                	mov    %eax,%edx
 84603f2:	8b 45 08             	mov    0x8(%ebp),%eax
 84603f5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84603f9:	89 04 24             	mov    %eax,(%esp)
 84603fc:	e8 3b b5 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8460401:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8460404:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8460407:	03 45 24             	add    0x24(%ebp),%eax
 846040a:	89 04 24             	mov    %eax,(%esp)
 846040d:	e8 28 74 c9 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 8460412:	8b 55 08             	mov    0x8(%ebp),%edx
 8460415:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460419:	89 14 24             	mov    %edx,(%esp)
 846041c:	e8 1b b5 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8460421:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8460425:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8460428:	3b 45 20             	cmp    0x20(%ebp),%eax
 846042b:	0f 9c c0             	setl   %al
 846042e:	84 c0                	test   %al,%al
 8460430:	75 b2                	jne    84603e4 <_ZN8WongWork11CDeathTower14CPacketHandler17makeDisplayRewardEiiPK10Inven_ItemiS4_iS4_iS4_+0x120>
 8460432:	8b 45 08             	mov    0x8(%ebp),%eax
 8460435:	8b 55 28             	mov    0x28(%ebp),%edx
 8460438:	89 54 24 04          	mov    %edx,0x4(%esp)
 846043c:	89 04 24             	mov    %eax,(%esp)
 846043f:	e8 dc b4 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8460444:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 846044b:	eb 41                	jmp    846048e <_ZN8WongWork11CDeathTower14CPacketHandler17makeDisplayRewardEiiPK10Inven_ItemiS4_iS4_iS4_+0x1ca>
 846044d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8460450:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8460453:	03 45 2c             	add    0x2c(%ebp),%eax
 8460456:	8b 40 02             	mov    0x2(%eax),%eax
 8460459:	89 c2                	mov    %eax,%edx
 846045b:	8b 45 08             	mov    0x8(%ebp),%eax
 846045e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8460462:	89 04 24             	mov    %eax,(%esp)
 8460465:	e8 d2 b4 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 846046a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 846046d:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8460470:	03 45 2c             	add    0x2c(%ebp),%eax
 8460473:	89 04 24             	mov    %eax,(%esp)
 8460476:	e8 bf 73 c9 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 846047b:	8b 55 08             	mov    0x8(%ebp),%edx
 846047e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460482:	89 14 24             	mov    %edx,(%esp)
 8460485:	e8 b2 b4 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 846048a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 846048e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8460491:	3b 45 28             	cmp    0x28(%ebp),%eax
 8460494:	0f 9c c0             	setl   %al
 8460497:	84 c0                	test   %al,%al
 8460499:	75 b2                	jne    846044d <_ZN8WongWork11CDeathTower14CPacketHandler17makeDisplayRewardEiiPK10Inven_ItemiS4_iS4_iS4_+0x189>
 846049b:	8b 45 08             	mov    0x8(%ebp),%eax
 846049e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84604a5:	00 
 84604a6:	89 04 24             	mov    %eax,(%esp)
 84604a9:	e8 aa b4 c6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84604ae:	c9                   	leave
 84604af:	c3                   	ret

```

```c
// WongWork::CDeathTower::CPacketHandler::makeDisplayReward @ 0x84602c4

/* WongWork::CDeathTower::CPacketHandler::makeDisplayReward(int, int, Inven_Item const*, int,
   Inven_Item const*, int, Inven_Item const*, int, Inven_Item const*) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::makeDisplayReward
          (CPacketHandler *this,int param_1,int param_2,Inven_Item *param_3,int param_4,
          Inven_Item *param_5,int param_6,Inven_Item *param_7,int param_8,Inven_Item *param_9)

{
  int iVar1;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,0,0x91);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)this,param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,param_2);
  for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)this,*(int *)(param_3 + local_1c * 0x3d + 2));
    iVar1 = Inven_Item::get_add_info(param_3 + local_1c * 0x3d);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)this,iVar1);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,param_4);
  for (local_18 = 0; local_18 < param_4; local_18 = local_18 + 1) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)this,*(int *)(param_5 + local_18 * 0x3d + 2));
    iVar1 = Inven_Item::get_add_info(param_5 + local_18 * 0x3d);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)this,iVar1);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,param_6);
  for (local_14 = 0; local_14 < param_6; local_14 = local_14 + 1) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)this,*(int *)(param_7 + local_14 * 0x3d + 2));
    iVar1 = Inven_Item::get_add_info(param_7 + local_14 * 0x3d);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)this,iVar1);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,param_8);
  for (local_10 = 0; local_10 < param_8; local_10 = local_10 + 1) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)this,*(int *)(param_9 + local_10 * 0x3d + 2));
    iVar1 = Inven_Item::get_add_info(param_9 + local_10 * 0x3d);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)this,iVar1);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}

```

---

## makeDropItem

```asm
// === 084600a6 WongWork::CDeathTower::CPacketHandler::makeDropItem  [0x084600a6-0x846012b] ===
 84600a6:	55                   	push   %ebp
 84600a7:	89 e5                	mov    %esp,%ebp
 84600a9:	83 ec 28             	sub    $0x28,%esp
 84600ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 84600af:	88 45 f4             	mov    %al,-0xc(%ebp)
 84600b2:	8b 45 08             	mov    0x8(%ebp),%eax
 84600b5:	c7 44 24 08 32 00 00 	movl   $0x32,0x8(%esp)
 84600bc:	00 
 84600bd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84600c4:	00 
 84600c5:	89 04 24             	mov    %eax,(%esp)
 84600c8:	e8 2f b8 c6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84600cd:	8b 45 08             	mov    0x8(%ebp),%eax
 84600d0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84600d7:	00 
 84600d8:	89 04 24             	mov    %eax,(%esp)
 84600db:	e8 40 b8 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84600e0:	0f be 55 f4          	movsbl -0xc(%ebp),%edx
 84600e4:	8b 45 08             	mov    0x8(%ebp),%eax
 84600e7:	89 54 24 04          	mov    %edx,0x4(%esp)
 84600eb:	89 04 24             	mov    %eax,(%esp)
 84600ee:	e8 2d b8 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84600f3:	8b 45 08             	mov    0x8(%ebp),%eax
 84600f6:	8b 55 10             	mov    0x10(%ebp),%edx
 84600f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84600fd:	89 04 24             	mov    %eax,(%esp)
 8460100:	e8 9f 9d c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8460105:	8b 45 08             	mov    0x8(%ebp),%eax
 8460108:	8b 55 14             	mov    0x14(%ebp),%edx
 846010b:	89 54 24 04          	mov    %edx,0x4(%esp)
 846010f:	89 04 24             	mov    %eax,(%esp)
 8460112:	e8 25 b8 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8460117:	8b 45 08             	mov    0x8(%ebp),%eax
 846011a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8460121:	00 
 8460122:	89 04 24             	mov    %eax,(%esp)
 8460125:	e8 2e b8 c6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 846012a:	c9                   	leave
 846012b:	c3                   	ret

```

```c
// WongWork::CDeathTower::CPacketHandler::makeDropItem @ 0x84600a6

/* WongWork::CDeathTower::CPacketHandler::makeDropItem(char, int, int) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::makeDropItem
          (CPacketHandler *this,char param_1,int param_2,int param_3)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,1,0x32);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,(int)param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)this,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}

```

---

## makeDropItemError

```asm
// === 0845fea6 WongWork::CDeathTower::CPacketHandler::makeDropItemError  [0x0845fea6-0x845ff19] ===
 845fea6:	55                   	push   %ebp
 845fea7:	89 e5                	mov    %esp,%ebp
 845fea9:	83 ec 28             	sub    $0x28,%esp
 845feac:	8b 45 14             	mov    0x14(%ebp),%eax
 845feaf:	88 45 f4             	mov    %al,-0xc(%ebp)
 845feb2:	8b 55 0c             	mov    0xc(%ebp),%edx
 845feb5:	8b 45 08             	mov    0x8(%ebp),%eax
 845feb8:	89 54 24 08          	mov    %edx,0x8(%esp)
 845febc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 845fec3:	00 
 845fec4:	89 04 24             	mov    %eax,(%esp)
 845fec7:	e8 30 ba c6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 845fecc:	8b 45 08             	mov    0x8(%ebp),%eax
 845fecf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 845fed6:	00 
 845fed7:	89 04 24             	mov    %eax,(%esp)
 845feda:	e8 41 ba c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 845fedf:	8b 55 10             	mov    0x10(%ebp),%edx
 845fee2:	8b 45 08             	mov    0x8(%ebp),%eax
 845fee5:	89 54 24 04          	mov    %edx,0x4(%esp)
 845fee9:	89 04 24             	mov    %eax,(%esp)
 845feec:	e8 2f ba c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 845fef1:	0f be 55 f4          	movsbl -0xc(%ebp),%edx
 845fef5:	8b 45 08             	mov    0x8(%ebp),%eax
 845fef8:	89 54 24 04          	mov    %edx,0x4(%esp)
 845fefc:	89 04 24             	mov    %eax,(%esp)
 845feff:	e8 1c ba c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 845ff04:	8b 45 08             	mov    0x8(%ebp),%eax
 845ff07:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 845ff0e:	00 
 845ff0f:	89 04 24             	mov    %eax,(%esp)
 845ff12:	e8 41 ba c6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 845ff17:	c9                   	leave
 845ff18:	c3                   	ret
 845ff19:	90                   	nop

```

```c
// WongWork::CDeathTower::CPacketHandler::makeDropItemError @ 0x845fea6

/* WongWork::CDeathTower::CPacketHandler::makeDropItemError(ENUM_CMDPACKET, ENUM_ERROR, char) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::makeDropItemError
          (CPacketHandler *this,int param_2,int param_3,char param_4)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,1,param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,param_3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,(int)param_4);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}

```

---

## makeDropItemNotify

```asm
// === 0845ff1a WongWork::CDeathTower::CPacketHandler::makeDropItemNotify  [0x0845ff1a-0x84600a5] ===
 845ff1a:	55                   	push   %ebp
 845ff1b:	89 e5                	mov    %esp,%ebp
 845ff1d:	83 ec 28             	sub    $0x28,%esp
 845ff20:	8b 55 0c             	mov    0xc(%ebp),%edx
 845ff23:	8b 45 18             	mov    0x18(%ebp),%eax
 845ff26:	66 89 55 f4          	mov    %dx,-0xc(%ebp)
 845ff2a:	66 89 45 f0          	mov    %ax,-0x10(%ebp)
 845ff2e:	8b 45 08             	mov    0x8(%ebp),%eax
 845ff31:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 845ff38:	00 
 845ff39:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 845ff40:	00 
 845ff41:	89 04 24             	mov    %eax,(%esp)
 845ff44:	e8 b3 b9 c6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 845ff49:	0f b7 55 f4          	movzwl -0xc(%ebp),%edx
 845ff4d:	8b 45 08             	mov    0x8(%ebp),%eax
 845ff50:	89 54 24 04          	mov    %edx,0x4(%esp)
 845ff54:	89 04 24             	mov    %eax,(%esp)
 845ff57:	e8 48 9f c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 845ff5c:	8b 45 08             	mov    0x8(%ebp),%eax
 845ff5f:	8b 55 10             	mov    0x10(%ebp),%edx
 845ff62:	89 54 24 04          	mov    %edx,0x4(%esp)
 845ff66:	89 04 24             	mov    %eax,(%esp)
 845ff69:	e8 36 9f c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 845ff6e:	8b 45 08             	mov    0x8(%ebp),%eax
 845ff71:	8b 55 14             	mov    0x14(%ebp),%edx
 845ff74:	89 54 24 04          	mov    %edx,0x4(%esp)
 845ff78:	89 04 24             	mov    %eax,(%esp)
 845ff7b:	e8 24 9f c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 845ff80:	0f b7 55 f0          	movzwl -0x10(%ebp),%edx
 845ff84:	8b 45 08             	mov    0x8(%ebp),%eax
 845ff87:	89 54 24 04          	mov    %edx,0x4(%esp)
 845ff8b:	89 04 24             	mov    %eax,(%esp)
 845ff8e:	e8 11 9f c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 845ff93:	8b 45 1c             	mov    0x1c(%ebp),%eax
 845ff96:	8b 40 12             	mov    0x12(%eax),%eax
 845ff99:	89 c2                	mov    %eax,%edx
 845ff9b:	8b 45 08             	mov    0x8(%ebp),%eax
 845ff9e:	89 54 24 04          	mov    %edx,0x4(%esp)
 845ffa2:	89 04 24             	mov    %eax,(%esp)
 845ffa5:	e8 92 b9 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 845ffaa:	8b 45 1c             	mov    0x1c(%ebp),%eax
 845ffad:	83 c0 10             	add    $0x10,%eax
 845ffb0:	89 04 24             	mov    %eax,(%esp)
 845ffb3:	e8 24 08 cf ff       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 845ffb8:	0f b6 d0             	movzbl %al,%edx
 845ffbb:	8b 45 08             	mov    0x8(%ebp),%eax
 845ffbe:	89 54 24 04          	mov    %edx,0x4(%esp)
 845ffc2:	89 04 24             	mov    %eax,(%esp)
 845ffc5:	e8 56 b9 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 845ffca:	8b 45 1c             	mov    0x1c(%ebp),%eax
 845ffcd:	83 c0 10             	add    $0x10,%eax
 845ffd0:	89 04 24             	mov    %eax,(%esp)
 845ffd3:	e8 62 78 c9 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 845ffd8:	8b 55 08             	mov    0x8(%ebp),%edx
 845ffdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 845ffdf:	89 14 24             	mov    %edx,(%esp)
 845ffe2:	e8 55 b9 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 845ffe7:	8b 45 1c             	mov    0x1c(%ebp),%eax
 845ffea:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 845ffee:	0f b7 d0             	movzwl %ax,%edx
 845fff1:	8b 45 08             	mov    0x8(%ebp),%eax
 845fff4:	89 54 24 04          	mov    %edx,0x4(%esp)
 845fff8:	89 04 24             	mov    %eax,(%esp)
 845fffb:	e8 a4 9e c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8460000:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8460003:	8b 40 1d             	mov    0x1d(%eax),%eax
 8460006:	89 c2                	mov    %eax,%edx
 8460008:	8b 45 08             	mov    0x8(%ebp),%eax
 846000b:	89 54 24 04          	mov    %edx,0x4(%esp)
 846000f:	89 04 24             	mov    %eax,(%esp)
 8460012:	e8 25 b9 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8460017:	8b 45 1c             	mov    0x1c(%ebp),%eax
 846001a:	83 c0 21             	add    $0x21,%eax
 846001d:	89 04 24             	mov    %eax,(%esp)
 8460020:	e8 0d 07 cf ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 8460025:	0f b6 d0             	movzbl %al,%edx
 8460028:	8b 45 08             	mov    0x8(%ebp),%eax
 846002b:	89 54 24 04          	mov    %edx,0x4(%esp)
 846002f:	89 04 24             	mov    %eax,(%esp)
 8460032:	e8 e9 b8 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8460037:	8b 45 1c             	mov    0x1c(%ebp),%eax
 846003a:	83 c0 21             	add    $0x21,%eax
 846003d:	89 04 24             	mov    %eax,(%esp)
 8460040:	e8 2d 07 cf ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 8460045:	0f b7 d0             	movzwl %ax,%edx
 8460048:	8b 45 08             	mov    0x8(%ebp),%eax
 846004b:	89 54 24 04          	mov    %edx,0x4(%esp)
 846004f:	89 04 24             	mov    %eax,(%esp)
 8460052:	e8 4d 9e c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8460057:	8b 45 1c             	mov    0x1c(%ebp),%eax
 846005a:	8d 50 10             	lea    0x10(%eax),%edx
 846005d:	8b 45 08             	mov    0x8(%ebp),%eax
 8460060:	89 54 24 04          	mov    %edx,0x4(%esp)
 8460064:	89 04 24             	mov    %eax,(%esp)
 8460067:	e8 22 09 cf ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 846006c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 846006f:	0f b6 00             	movzbl (%eax),%eax
 8460072:	84 c0                	test   %al,%al
 8460074:	74 07                	je     846007d <_ZN8WongWork11CDeathTower14CPacketHandler18makeDropItemNotifyEtiitRK8map_item+0x163>
 8460076:	b8 00 00 00 00       	mov    $0x0,%eax
 846007b:	eb 05                	jmp    8460082 <_ZN8WongWork11CDeathTower14CPacketHandler18makeDropItemNotifyEtiitRK8map_item+0x168>
 846007d:	b8 01 00 00 00       	mov    $0x1,%eax
 8460082:	8b 55 08             	mov    0x8(%ebp),%edx
 8460085:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460089:	89 14 24             	mov    %edx,(%esp)
 846008c:	e8 8f b8 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8460091:	8b 45 08             	mov    0x8(%ebp),%eax
 8460094:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 846009b:	00 
 846009c:	89 04 24             	mov    %eax,(%esp)
 846009f:	e8 b4 b8 c6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84600a4:	c9                   	leave
 84600a5:	c3                   	ret

```

```c
// WongWork::CDeathTower::CPacketHandler::makeDropItemNotify @ 0x845ff1a

/* WongWork::CDeathTower::CPacketHandler::makeDropItemNotify(unsigned short, int, int, unsigned
   short, map_item const&) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::makeDropItemNotify
          (CPacketHandler *this,ushort param_1,int param_2,int param_3,ushort param_4,
          map_item *param_5)

{
  uint uVar1;
  int iVar2;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,0,0x28);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,(uint)param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,param_3);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,(uint)param_4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)this,*(int *)(param_5 + 0x12));
  uVar1 = Inven_Item::GetItemAttr((Inven_Item *)(param_5 + 0x10));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,uVar1 & 0xff);
  iVar2 = Inven_Item::get_add_info((Inven_Item *)(param_5 + 0x10));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)this,iVar2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,(uint)*(ushort *)(param_5 + 0x1b));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)this,*(int *)(param_5 + 0x1d));
  uVar1 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(param_5 + 0x21));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,uVar1 & 0xff);
  uVar1 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(param_5 + 0x21));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,uVar1 & 0xffff);
  InterfacePacketBuf::put_packet((InterfacePacketBuf *)this,(Inven_Item *)(param_5 + 0x10));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,(uint)(*param_5 == (map_item)0x0));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}

```

---

## makeFinishLoading

```asm
// === 0846012c WongWork::CDeathTower::CPacketHandler::makeFinishLoading  [0x0846012c-0x8460175] ===
 846012c:	55                   	push   %ebp
 846012d:	89 e5                	mov    %esp,%ebp
 846012f:	83 ec 18             	sub    $0x18,%esp
 8460132:	8b 45 08             	mov    0x8(%ebp),%eax
 8460135:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 846013c:	00 
 846013d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8460144:	00 
 8460145:	89 04 24             	mov    %eax,(%esp)
 8460148:	e8 af b7 c6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 846014d:	8b 45 08             	mov    0x8(%ebp),%eax
 8460150:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8460157:	00 
 8460158:	89 04 24             	mov    %eax,(%esp)
 846015b:	e8 dc b7 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8460160:	8b 45 08             	mov    0x8(%ebp),%eax
 8460163:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 846016a:	00 
 846016b:	89 04 24             	mov    %eax,(%esp)
 846016e:	e8 e5 b7 c6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8460173:	c9                   	leave
 8460174:	c3                   	ret
 8460175:	90                   	nop

```

```c
// WongWork::CDeathTower::CPacketHandler::makeFinishLoading @ 0x846012c

/* WongWork::CDeathTower::CPacketHandler::makeFinishLoading() */

void __thiscall WongWork::CDeathTower::CPacketHandler::makeFinishLoading(CPacketHandler *this)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,0,0x1e);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)this,0);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}

```

---

## makePickupItemHeader

```asm
// === 0845fc6c WongWork::CDeathTower::CPacketHandler::makePickupItemHeader  [0x0845fc6c-0x845fcc3] ===
 845fc6c:	55                   	push   %ebp
 845fc6d:	89 e5                	mov    %esp,%ebp
 845fc6f:	83 ec 28             	sub    $0x28,%esp
 845fc72:	8b 55 0c             	mov    0xc(%ebp),%edx
 845fc75:	8b 45 10             	mov    0x10(%ebp),%eax
 845fc78:	66 89 55 f4          	mov    %dx,-0xc(%ebp)
 845fc7c:	66 89 45 f0          	mov    %ax,-0x10(%ebp)
 845fc80:	8b 45 08             	mov    0x8(%ebp),%eax
 845fc83:	c7 44 24 08 27 00 00 	movl   $0x27,0x8(%esp)
 845fc8a:	00 
 845fc8b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 845fc92:	00 
 845fc93:	89 04 24             	mov    %eax,(%esp)
 845fc96:	e8 61 bc c6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 845fc9b:	0f b7 55 f0          	movzwl -0x10(%ebp),%edx
 845fc9f:	8b 45 08             	mov    0x8(%ebp),%eax
 845fca2:	89 54 24 04          	mov    %edx,0x4(%esp)
 845fca6:	89 04 24             	mov    %eax,(%esp)
 845fca9:	e8 f6 a1 c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 845fcae:	0f b7 55 f4          	movzwl -0xc(%ebp),%edx
 845fcb2:	8b 45 08             	mov    0x8(%ebp),%eax
 845fcb5:	89 54 24 04          	mov    %edx,0x4(%esp)
 845fcb9:	89 04 24             	mov    %eax,(%esp)
 845fcbc:	e8 e3 a1 c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 845fcc1:	c9                   	leave
 845fcc2:	c3                   	ret
 845fcc3:	90                   	nop

```

```c
// WongWork::CDeathTower::CPacketHandler::makePickupItemHeader @ 0x845fc6c

/* WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::makePickupItemHeader
          (CPacketHandler *this,ushort param_1,ushort param_2)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,0,0x27);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,(uint)param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,(uint)param_1);
  return;
}

```

---

## makeUpdateItemList

```asm
// === 0846050e WongWork::CDeathTower::CPacketHandler::makeUpdateItemList  [0x0846050e-0x84605a1] ===
 846050e:	55                   	push   %ebp
 846050f:	89 e5                	mov    %esp,%ebp
 8460511:	56                   	push   %esi
 8460512:	53                   	push   %ebx
 8460513:	83 ec 10             	sub    $0x10,%esp
 8460516:	8b 45 08             	mov    0x8(%ebp),%eax
 8460519:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 8460520:	00 
 8460521:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8460528:	00 
 8460529:	89 04 24             	mov    %eax,(%esp)
 846052c:	e8 cb b3 c6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8460531:	8b 55 10             	mov    0x10(%ebp),%edx
 8460534:	8b 45 08             	mov    0x8(%ebp),%eax
 8460537:	89 54 24 04          	mov    %edx,0x4(%esp)
 846053b:	89 04 24             	mov    %eax,(%esp)
 846053e:	e8 dd b3 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8460543:	8b 45 08             	mov    0x8(%ebp),%eax
 8460546:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 846054d:	00 
 846054e:	89 04 24             	mov    %eax,(%esp)
 8460551:	e8 4e 99 c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8460556:	8b 75 08             	mov    0x8(%ebp),%esi
 8460559:	8b 45 10             	mov    0x10(%ebp),%eax
 846055c:	89 04 24             	mov    %eax,(%esp)
 846055f:	e8 e1 72 c9 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 8460564:	89 c3                	mov    %eax,%ebx
 8460566:	8b 45 0c             	mov    0xc(%ebp),%eax
 8460569:	89 04 24             	mov    %eax,(%esp)
 846056c:	e8 0d 9d c7 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8460571:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8460575:	8b 55 14             	mov    0x14(%ebp),%edx
 8460578:	89 54 24 08          	mov    %edx,0x8(%esp)
 846057c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8460580:	89 04 24             	mov    %eax,(%esp)
 8460583:	e8 34 c1 09 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 8460588:	8b 45 08             	mov    0x8(%ebp),%eax
 846058b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8460592:	00 
 8460593:	89 04 24             	mov    %eax,(%esp)
 8460596:	e8 bd b3 c6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 846059b:	83 c4 10             	add    $0x10,%esp
 846059e:	5b                   	pop    %ebx
 846059f:	5e                   	pop    %esi
 84605a0:	5d                   	pop    %ebp
 84605a1:	c3                   	ret

```

```c
// WongWork::CDeathTower::CPacketHandler::makeUpdateItemList @ 0x846050e

/* WongWork::CDeathTower::CPacketHandler::makeUpdateItemList(CUser*, ENUM_ITEMSPACE, int) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::makeUpdateItemList
          (CPacketHandler *this,CUserCharacInfo *param_1,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  CInventory *pCVar2;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,0,0xe);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,param_3);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,1);
  uVar1 = GetInvenTypeFromItemSpace(param_3);
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(param_1);
  CInventory::MakeItemPacket(pCVar2,uVar1,param_4,this);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}

```

