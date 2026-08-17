# Dispatcher_BlueMarble

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081e612c Dispatcher_BlueMarble::check_error  [0x081e612c-0x81e61f3] ===
 81e612c:	55                   	push   %ebp
 81e612d:	89 e5                	mov    %esp,%ebp
 81e612f:	83 ec 28             	sub    $0x28,%esp
 81e6132:	8b 45 10             	mov    0x10(%ebp),%eax
 81e6135:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81e6138:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e613c:	75 0a                	jne    81e6148 <_ZN21Dispatcher_BlueMarble11check_errorEP5CUserR8MSG_BASE+0x1c>
 81e613e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e6143:	e9 aa 00 00 00       	jmp    81e61f2 <_ZN21Dispatcher_BlueMarble11check_errorEP5CUserR8MSG_BASE+0xc6>
 81e6148:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e614b:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e614f:	3c 06                	cmp    $0x6,%al
 81e6151:	75 0a                	jne    81e615d <_ZN21Dispatcher_BlueMarble11check_errorEP5CUserR8MSG_BASE+0x31>
 81e6153:	b8 00 00 00 00       	mov    $0x0,%eax
 81e6158:	e9 95 00 00 00       	jmp    81e61f2 <_ZN21Dispatcher_BlueMarble11check_errorEP5CUserR8MSG_BASE+0xc6>
 81e615d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6160:	89 04 24             	mov    %eax,(%esp)
 81e6163:	e8 62 ad 4a 00       	call   8690eca <_ZNK5CUser12getMoveSpaceEv>
 81e6168:	83 f8 01             	cmp    $0x1,%eax
 81e616b:	0f 95 c0             	setne  %al
 81e616e:	84 c0                	test   %al,%al
 81e6170:	74 07                	je     81e6179 <_ZN21Dispatcher_BlueMarble11check_errorEP5CUserR8MSG_BASE+0x4d>
 81e6172:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 81e6177:	eb 79                	jmp    81e61f2 <_ZN21Dispatcher_BlueMarble11check_errorEP5CUserR8MSG_BASE+0xc6>
 81e6179:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e617c:	89 04 24             	mov    %eax,(%esp)
 81e617f:	e8 62 f1 46 00       	call   86552e6 <_ZN5CUser13getBlueMarbleEv>
 81e6184:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e6187:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81e618b:	75 07                	jne    81e6194 <_ZN21Dispatcher_BlueMarble11check_errorEP5CUserR8MSG_BASE+0x68>
 81e618d:	b8 fd ff ff ff       	mov    $0xfffffffd,%eax
 81e6192:	eb 5e                	jmp    81e61f2 <_ZN21Dispatcher_BlueMarble11check_errorEP5CUserR8MSG_BASE+0xc6>
 81e6194:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6197:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e619b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e619e:	89 04 24             	mov    %eax,(%esp)
 81e61a1:	e8 ce 2e ef ff       	call   80d9074 <_ZNK10BlueMarble11getUserSlotEP5CUser>
 81e61a6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e61a9:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 81e61ad:	75 07                	jne    81e61b6 <_ZN21Dispatcher_BlueMarble11check_errorEP5CUserR8MSG_BASE+0x8a>
 81e61af:	b8 fc ff ff ff       	mov    $0xfffffffc,%eax
 81e61b4:	eb 3c                	jmp    81e61f2 <_ZN21Dispatcher_BlueMarble11check_errorEP5CUserR8MSG_BASE+0xc6>
 81e61b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e61b9:	89 04 24             	mov    %eax,(%esp)
 81e61bc:	e8 cb 41 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e61c1:	83 f8 0b             	cmp    $0xb,%eax
 81e61c4:	74 17                	je     81e61dd <_ZN21Dispatcher_BlueMarble11check_errorEP5CUserR8MSG_BASE+0xb1>
 81e61c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e61c9:	89 04 24             	mov    %eax,(%esp)
 81e61cc:	e8 bb 41 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e61d1:	83 f8 05             	cmp    $0x5,%eax
 81e61d4:	74 07                	je     81e61dd <_ZN21Dispatcher_BlueMarble11check_errorEP5CUserR8MSG_BASE+0xb1>
 81e61d6:	b8 01 00 00 00       	mov    $0x1,%eax
 81e61db:	eb 05                	jmp    81e61e2 <_ZN21Dispatcher_BlueMarble11check_errorEP5CUserR8MSG_BASE+0xb6>
 81e61dd:	b8 00 00 00 00       	mov    $0x0,%eax
 81e61e2:	84 c0                	test   %al,%al
 81e61e4:	74 07                	je     81e61ed <_ZN21Dispatcher_BlueMarble11check_errorEP5CUserR8MSG_BASE+0xc1>
 81e61e6:	b8 fb ff ff ff       	mov    $0xfffffffb,%eax
 81e61eb:	eb 05                	jmp    81e61f2 <_ZN21Dispatcher_BlueMarble11check_errorEP5CUserR8MSG_BASE+0xc6>
 81e61ed:	b8 00 00 00 00       	mov    $0x0,%eax
 81e61f2:	c9                   	leave
 81e61f3:	c3                   	ret

```

```c
// Dispatcher_BlueMarble::check_error @ 0x81e612c

/* Dispatcher_BlueMarble::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_BlueMarble::check_error(Dispatcher_BlueMarble *this,CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  int iVar2;
  BlueMarble *this_00;
  undefined4 uVar3;
  
  if (param_1 == (CUser *)0x0) {
    return 0xffffffff;
  }
  if (param_2[0xd] == (MSG_BASE)0x6) {
    return 0;
  }
  iVar2 = CUser::getMoveSpace(param_1);
  if (iVar2 != 1) {
    return 0xfffffffe;
  }
  this_00 = (BlueMarble *)CUser::getBlueMarble(param_1);
  if (this_00 != (BlueMarble *)0x0) {
    iVar2 = BlueMarble::getUserSlot(this_00,param_1);
    if (iVar2 != -1) {
      iVar2 = CUser::get_state(param_1);
      if ((iVar2 == 0xb) || (iVar2 = CUser::get_state(param_1), iVar2 == 5)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar3 = 0xfffffffb;
      }
      else {
        uVar3 = 0;
      }
      return uVar3;
    }
    return 0xfffffffc;
  }
  return 0xfffffffd;
}

```

---

## process

```asm
// === 081e5fdc Dispatcher_BlueMarble::process  [0x081e5fdc-0x81e612b] ===
 81e5fdc:	55                   	push   %ebp
 81e5fdd:	89 e5                	mov    %esp,%ebp
 81e5fdf:	83 ec 28             	sub    $0x28,%esp
 81e5fe2:	8b 45 14             	mov    0x14(%ebp),%eax
 81e5fe5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81e5fe8:	8b 45 10             	mov    0x10(%ebp),%eax
 81e5feb:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e5fef:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5ff2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e5ff6:	8b 45 08             	mov    0x8(%ebp),%eax
 81e5ff9:	89 04 24             	mov    %eax,(%esp)
 81e5ffc:	e8 2b 01 00 00       	call   81e612c <_ZN21Dispatcher_BlueMarble11check_errorEP5CUserR8MSG_BASE>
 81e6001:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81e6004:	89 42 04             	mov    %eax,0x4(%edx)
 81e6007:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e600a:	8b 40 04             	mov    0x4(%eax),%eax
 81e600d:	85 c0                	test   %eax,%eax
 81e600f:	7e 0a                	jle    81e601b <_ZN21Dispatcher_BlueMarble7processEP5CUserR8MSG_BASER9ParamBase+0x3f>
 81e6011:	b8 00 00 00 00       	mov    $0x0,%eax
 81e6016:	e9 0e 01 00 00       	jmp    81e6129 <_ZN21Dispatcher_BlueMarble7processEP5CUserR8MSG_BASER9ParamBase+0x14d>
 81e601b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e601e:	8b 40 04             	mov    0x4(%eax),%eax
 81e6021:	85 c0                	test   %eax,%eax
 81e6023:	79 2b                	jns    81e6050 <_ZN21Dispatcher_BlueMarble7processEP5CUserR8MSG_BASER9ParamBase+0x74>
 81e6025:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e6028:	8b 40 04             	mov    0x4(%eax),%eax
 81e602b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e6032:	00 
 81e6033:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e6037:	c7 44 24 04 e0 0d bd 	movl   $0x8bd0de0,0x4(%esp)
 81e603e:	08 
 81e603f:	c7 04 24 a9 60 00 00 	movl   $0x60a9,(%esp)
 81e6046:	e8 8c a8 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e604b:	e9 d9 00 00 00       	jmp    81e6129 <_ZN21Dispatcher_BlueMarble7processEP5CUserR8MSG_BASER9ParamBase+0x14d>
 81e6050:	8b 45 10             	mov    0x10(%ebp),%eax
 81e6053:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e6056:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6059:	89 04 24             	mov    %eax,(%esp)
 81e605c:	e8 85 f2 46 00       	call   86552e6 <_ZN5CUser13getBlueMarbleEv>
 81e6061:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e6064:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e6068:	0f 84 b6 00 00 00    	je     81e6124 <_ZN21Dispatcher_BlueMarble7processEP5CUserR8MSG_BASER9ParamBase+0x148>
 81e606e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e6071:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e6075:	0f be c0             	movsbl %al,%eax
 81e6078:	83 f8 07             	cmp    $0x7,%eax
 81e607b:	0f 87 a3 00 00 00    	ja     81e6124 <_ZN21Dispatcher_BlueMarble7processEP5CUserR8MSG_BASER9ParamBase+0x148>
 81e6081:	8b 04 85 e4 1b bc 08 	mov    0x8bc1be4(,%eax,4),%eax
 81e6088:	ff e0                	jmp    *%eax
 81e608a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e608d:	89 04 24             	mov    %eax,(%esp)
 81e6090:	e8 29 32 ef ff       	call   80d92be <_ZN10BlueMarble15startBlueMarbleEv>
 81e6095:	e9 8a 00 00 00       	jmp    81e6124 <_ZN21Dispatcher_BlueMarble7processEP5CUserR8MSG_BASER9ParamBase+0x148>
 81e609a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e609d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e60a1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e60a4:	89 04 24             	mov    %eax,(%esp)
 81e60a7:	e8 2c 33 ef ff       	call   80d93d8 <_ZN10BlueMarble13userThrowDiceEP5CUser>
 81e60ac:	eb 76                	jmp    81e6124 <_ZN21Dispatcher_BlueMarble7processEP5CUserR8MSG_BASER9ParamBase+0x148>
 81e60ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e60b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e60b5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e60b8:	89 04 24             	mov    %eax,(%esp)
 81e60bb:	e8 36 34 ef ff       	call   80d94f6 <_ZN10BlueMarble12enterDungeonEP5CUser>
 81e60c0:	eb 62                	jmp    81e6124 <_ZN21Dispatcher_BlueMarble7processEP5CUserR8MSG_BASER9ParamBase+0x148>
 81e60c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e60c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e60c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e60cc:	89 04 24             	mov    %eax,(%esp)
 81e60cf:	e8 9e 34 ef ff       	call   80d9572 <_ZN10BlueMarble13giveupDungeonEP5CUser>
 81e60d4:	eb 4e                	jmp    81e6124 <_ZN21Dispatcher_BlueMarble7processEP5CUserR8MSG_BASER9ParamBase+0x148>
 81e60d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e60d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e60dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e60e0:	89 04 24             	mov    %eax,(%esp)
 81e60e3:	e8 0c 36 ef ff       	call   80d96f4 <_ZN10BlueMarble12clearDungeonEP5CUser>
 81e60e8:	eb 3a                	jmp    81e6124 <_ZN21Dispatcher_BlueMarble7processEP5CUserR8MSG_BASER9ParamBase+0x148>
 81e60ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e60ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e60f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e60f4:	89 04 24             	mov    %eax,(%esp)
 81e60f7:	e8 90 36 ef ff       	call   80d978c <_ZN10BlueMarble11exitDungeonEP5CUser>
 81e60fc:	eb 26                	jmp    81e6124 <_ZN21Dispatcher_BlueMarble7processEP5CUserR8MSG_BASER9ParamBase+0x148>
 81e60fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6101:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e6105:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e6108:	89 04 24             	mov    %eax,(%esp)
 81e610b:	e8 26 30 ef ff       	call   80d9136 <_ZN10BlueMarble9leaveUserEP5CUser>
 81e6110:	eb 12                	jmp    81e6124 <_ZN21Dispatcher_BlueMarble7processEP5CUserR8MSG_BASER9ParamBase+0x148>
 81e6112:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6115:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e6119:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e611c:	89 04 24             	mov    %eax,(%esp)
 81e611f:	e8 e4 36 ef ff       	call   80d9808 <_ZN10BlueMarble13giveBonusItemEP5CUser>
 81e6124:	b8 00 00 00 00       	mov    $0x0,%eax
 81e6129:	c9                   	leave
 81e612a:	c3                   	ret
 81e612b:	90                   	nop

```

```c
// Dispatcher_BlueMarble::process @ 0x81e5fdc

/* Dispatcher_BlueMarble::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_BlueMarble::process
          (Dispatcher_BlueMarble *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  BlueMarble *this_00;
  
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x60a9,
                       "virtual int Dispatcher_BlueMarble::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),0);
    }
    else {
      this_00 = (BlueMarble *)CUser::getBlueMarble(param_1);
      if (this_00 != (BlueMarble *)0x0) {
        switch(param_2[0xd]) {
        case (MSG_BASE)0x0:
          BlueMarble::startBlueMarble(this_00);
          break;
        case (MSG_BASE)0x1:
          BlueMarble::userThrowDice(this_00,param_1);
          break;
        case (MSG_BASE)0x2:
          BlueMarble::enterDungeon(this_00,param_1);
          break;
        case (MSG_BASE)0x3:
          BlueMarble::giveupDungeon(this_00,param_1);
          break;
        case (MSG_BASE)0x4:
          BlueMarble::clearDungeon(this_00,param_1);
          break;
        case (MSG_BASE)0x5:
          BlueMarble::exitDungeon(this_00,param_1);
          break;
        case (MSG_BASE)0x6:
          BlueMarble::leaveUser(this_00,param_1);
          break;
        case (MSG_BASE)0x7:
          BlueMarble::giveBonusItem(this_00,param_1);
        }
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081e5f86 Dispatcher_BlueMarble::read  [0x081e5f86-0x81e5fdb] ===
 81e5f86:	55                   	push   %ebp
 81e5f87:	89 e5                	mov    %esp,%ebp
 81e5f89:	83 ec 28             	sub    $0x28,%esp
 81e5f8c:	8b 45 10             	mov    0x10(%ebp),%eax
 81e5f8f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e5f92:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e5f95:	83 c0 0d             	add    $0xd,%eax
 81e5f98:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e5f9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5f9f:	89 04 24             	mov    %eax,(%esp)
 81e5fa2:	e8 7b 6f 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81e5fa7:	83 f0 01             	xor    $0x1,%eax
 81e5faa:	84 c0                	test   %al,%al
 81e5fac:	74 26                	je     81e5fd4 <_ZN21Dispatcher_BlueMarble4readER9PacketBufR8MSG_BASE+0x4e>
 81e5fae:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e5fb5:	00 
 81e5fb6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e5fbd:	00 
 81e5fbe:	c7 44 24 04 40 0e bd 	movl   $0x8bd0e40,0x4(%esp)
 81e5fc5:	08 
 81e5fc6:	c7 04 24 9a 60 00 00 	movl   $0x609a,(%esp)
 81e5fcd:	e8 05 a9 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e5fd2:	eb 05                	jmp    81e5fd9 <_ZN21Dispatcher_BlueMarble4readER9PacketBufR8MSG_BASE+0x53>
 81e5fd4:	b8 00 00 00 00       	mov    $0x0,%eax
 81e5fd9:	c9                   	leave
 81e5fda:	c3                   	ret
 81e5fdb:	90                   	nop

```

```c
// Dispatcher_BlueMarble::read @ 0x81e5f86

/* Dispatcher_BlueMarble::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_BlueMarble::read(Dispatcher_BlueMarble *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x609a,"virtual int Dispatcher_BlueMarble::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081e61f4 Dispatcher_BlueMarble::send  [0x081e61f4-0x81e6241] ===
 81e61f4:	55                   	push   %ebp
 81e61f5:	89 e5                	mov    %esp,%ebp
 81e61f7:	83 ec 28             	sub    $0x28,%esp
 81e61fa:	8b 45 10             	mov    0x10(%ebp),%eax
 81e61fd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e6200:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e6203:	8b 40 04             	mov    0x4(%eax),%eax
 81e6206:	85 c0                	test   %eax,%eax
 81e6208:	75 15                	jne    81e621f <_ZN21Dispatcher_BlueMarble4sendEP5CUserR9ParamBase+0x2b>
 81e620a:	c7 44 24 04 f0 01 00 	movl   $0x1f0,0x4(%esp)
 81e6211:	00 
 81e6212:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6215:	89 04 24             	mov    %eax,(%esp)
 81e6218:	e8 83 5c 49 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81e621d:	eb 20                	jmp    81e623f <_ZN21Dispatcher_BlueMarble4sendEP5CUserR9ParamBase+0x4b>
 81e621f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e6222:	8b 40 04             	mov    0x4(%eax),%eax
 81e6225:	0f b6 c0             	movzbl %al,%eax
 81e6228:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e622c:	c7 44 24 04 f0 01 00 	movl   $0x1f0,0x4(%esp)
 81e6233:	00 
 81e6234:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6237:	89 04 24             	mov    %eax,(%esp)
 81e623a:	e8 03 5d 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e623f:	c9                   	leave
 81e6240:	c3                   	ret
 81e6241:	90                   	nop

```

```c
// Dispatcher_BlueMarble::send @ 0x81e61f4

/* Dispatcher_BlueMarble::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_BlueMarble::send(Dispatcher_BlueMarble *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1f0);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1f0,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

