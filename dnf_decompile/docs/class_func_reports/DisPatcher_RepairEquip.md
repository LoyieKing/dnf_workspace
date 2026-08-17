# DisPatcher_RepairEquip

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081c619c DisPatcher_RepairEquip::check_error  [0x081c619c-0x81c61e9] ===
 81c619c:	55                   	push   %ebp
 81c619d:	89 e5                	mov    %esp,%ebp
 81c619f:	53                   	push   %ebx
 81c61a0:	83 ec 14             	sub    $0x14,%esp
 81c61a3:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81c61a7:	75 07                	jne    81c61b0 <_ZN22DisPatcher_RepairEquip11check_errorEP5CUserR8MSG_BASE+0x14>
 81c61a9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81c61ae:	eb 33                	jmp    81c61e3 <_ZN22DisPatcher_RepairEquip11check_errorEP5CUserR8MSG_BASE+0x47>
 81c61b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c61b3:	89 04 24             	mov    %eax,(%esp)
 81c61b6:	e8 d1 41 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c61bb:	83 f8 0c             	cmp    $0xc,%eax
 81c61be:	77 16                	ja     81c61d6 <_ZN22DisPatcher_RepairEquip11check_errorEP5CUserR8MSG_BASE+0x3a>
 81c61c0:	ba 01 00 00 00       	mov    $0x1,%edx
 81c61c5:	89 d3                	mov    %edx,%ebx
 81c61c7:	89 c1                	mov    %eax,%ecx
 81c61c9:	d3 e3                	shl    %cl,%ebx
 81c61cb:	89 d8                	mov    %ebx,%eax
 81c61cd:	25 e8 15 00 00       	and    $0x15e8,%eax
 81c61d2:	85 c0                	test   %eax,%eax
 81c61d4:	75 07                	jne    81c61dd <_ZN22DisPatcher_RepairEquip11check_errorEP5CUserR8MSG_BASE+0x41>
 81c61d6:	b8 13 00 00 00       	mov    $0x13,%eax
 81c61db:	eb 06                	jmp    81c61e3 <_ZN22DisPatcher_RepairEquip11check_errorEP5CUserR8MSG_BASE+0x47>
 81c61dd:	90                   	nop
 81c61de:	b8 00 00 00 00       	mov    $0x0,%eax
 81c61e3:	83 c4 14             	add    $0x14,%esp
 81c61e6:	5b                   	pop    %ebx
 81c61e7:	5d                   	pop    %ebp
 81c61e8:	c3                   	ret
 81c61e9:	90                   	nop

```

```c
// DisPatcher_RepairEquip::check_error @ 0x81c619c

/* DisPatcher_RepairEquip::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_RepairEquip::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = CUser::get_state((CUser *)param_2);
    if ((uVar2 < 0xd) && ((1 << ((byte)uVar2 & 0x1f) & 0x15e8U) != 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x13;
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 081c6082 DisPatcher_RepairEquip::process  [0x081c6082-0x81c619b] ===
 81c6082:	55                   	push   %ebp
 81c6083:	89 e5                	mov    %esp,%ebp
 81c6085:	57                   	push   %edi
 81c6086:	56                   	push   %esi
 81c6087:	53                   	push   %ebx
 81c6088:	83 ec 4c             	sub    $0x4c,%esp
 81c608b:	8b 45 10             	mov    0x10(%ebp),%eax
 81c608e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c6092:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6095:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6099:	8b 45 08             	mov    0x8(%ebp),%eax
 81c609c:	89 04 24             	mov    %eax,(%esp)
 81c609f:	e8 f8 00 00 00       	call   81c619c <_ZN22DisPatcher_RepairEquip11check_errorEP5CUserR8MSG_BASE>
 81c60a4:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81c60a7:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81c60ab:	7e 27                	jle    81c60d4 <_ZN22DisPatcher_RepairEquip7processEP5CUserR8MSG_BASER9ParamBase+0x52>
 81c60ad:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c60b0:	0f b6 c0             	movzbl %al,%eax
 81c60b3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c60b7:	c7 44 24 04 19 00 00 	movl   $0x19,0x4(%esp)
 81c60be:	00 
 81c60bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c60c2:	89 04 24             	mov    %eax,(%esp)
 81c60c5:	e8 78 5e 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81c60ca:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81c60cf:	e9 c0 00 00 00       	jmp    81c6194 <_ZN22DisPatcher_RepairEquip7processEP5CUserR8MSG_BASER9ParamBase+0x112>
 81c60d4:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81c60d8:	79 30                	jns    81c610a <_ZN22DisPatcher_RepairEquip7processEP5CUserR8MSG_BASER9ParamBase+0x88>
 81c60da:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c60dd:	89 04 24             	mov    %eax,(%esp)
 81c60e0:	e8 89 42 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c60e5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c60e9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c60f0:	00 
 81c60f1:	c7 44 24 04 c0 57 bd 	movl   $0x8bd57c0,0x4(%esp)
 81c60f8:	08 
 81c60f9:	c7 04 24 00 15 00 00 	movl   $0x1500,(%esp)
 81c6100:	e8 d2 a7 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c6105:	e9 8a 00 00 00       	jmp    81c6194 <_ZN22DisPatcher_RepairEquip7processEP5CUserR8MSG_BASER9ParamBase+0x112>
 81c610a:	8b 45 10             	mov    0x10(%ebp),%eax
 81c610d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81c6110:	8b 45 14             	mov    0x14(%ebp),%eax
 81c6113:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81c6116:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c6119:	83 c0 0c             	add    $0xc,%eax
 81c611c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81c611f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c6122:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81c6126:	0f b7 f8             	movzwl %ax,%edi
 81c6129:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c612c:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81c6130:	0f bf f0             	movswl %ax,%esi
 81c6133:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c6136:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c613a:	0f be d8             	movsbl %al,%ebx
 81c613d:	e8 9b b9 f8 ff       	call   8151add <_Z7G_Storev>
 81c6142:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81c6145:	89 54 24 14          	mov    %edx,0x14(%esp)
 81c6149:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81c614d:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81c6151:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81c6155:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c6158:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c615c:	89 04 24             	mov    %eax,(%esp)
 81c615f:	e8 88 3b 45 00       	call   8619cec <_ZN5Store12repair_equipEP5CUsercstRt>
 81c6164:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c6167:	89 42 04             	mov    %eax,0x4(%edx)
 81c616a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c616d:	8b 40 04             	mov    0x4(%eax),%eax
 81c6170:	85 c0                	test   %eax,%eax
 81c6172:	75 1b                	jne    81c618f <_ZN22DisPatcher_RepairEquip7processEP5CUserR8MSG_BASER9ParamBase+0x10d>
 81c6174:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c6177:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81c617b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c617e:	88 50 08             	mov    %dl,0x8(%eax)
 81c6181:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c6184:	0f b7 50 0e          	movzwl 0xe(%eax),%edx
 81c6188:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c618b:	66 89 50 0a          	mov    %dx,0xa(%eax)
 81c618f:	b8 00 00 00 00       	mov    $0x0,%eax
 81c6194:	83 c4 4c             	add    $0x4c,%esp
 81c6197:	5b                   	pop    %ebx
 81c6198:	5e                   	pop    %esi
 81c6199:	5f                   	pop    %edi
 81c619a:	5d                   	pop    %ebp
 81c619b:	c3                   	ret

```

```c
// DisPatcher_RepairEquip::process @ 0x81c6082

/* DisPatcher_RepairEquip::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_RepairEquip::process
          (DisPatcher_RepairEquip *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  Store *this_00;
  
  uVar4 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if ((int)uVar4 < 1) {
    if ((int)uVar4 < 0) {
      uVar4 = CUser::get_acc_id(param_1);
      uVar5 = LineFunc(0x1500,
                       "virtual int DisPatcher_RepairEquip::process(CUser*, MSG_BASE&, ParamBase&)",
                       0,uVar4);
    }
    else {
      uVar2 = *(ushort *)(param_2 + 0x10);
      sVar3 = *(short *)(param_2 + 0xe);
      MVar1 = param_2[0xd];
      this_00 = (Store *)G_Store();
      uVar5 = Store::repair_equip(this_00,param_1,(char)MVar1,sVar3,uVar2,(ushort *)(param_3 + 0xc))
      ;
      *(undefined4 *)(param_3 + 4) = uVar5;
      if (*(int *)(param_3 + 4) == 0) {
        *(MSG_BASE *)(param_3 + 8) = param_2[0xd];
        *(undefined2 *)(param_3 + 10) = *(undefined2 *)(param_2 + 0xe);
      }
      uVar5 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x19,uVar4 & 0xff);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

```

---

## read

```asm
// === 081c5fa6 DisPatcher_RepairEquip::read  [0x081c5fa6-0x81c6081] ===
 81c5fa6:	55                   	push   %ebp
 81c5fa7:	89 e5                	mov    %esp,%ebp
 81c5fa9:	83 ec 28             	sub    $0x28,%esp
 81c5fac:	8b 45 10             	mov    0x10(%ebp),%eax
 81c5faf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c5fb2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c5fb5:	83 c0 0d             	add    $0xd,%eax
 81c5fb8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5fbc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5fbf:	89 04 24             	mov    %eax,(%esp)
 81c5fc2:	e8 5b 6f 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c5fc7:	83 f0 01             	xor    $0x1,%eax
 81c5fca:	84 c0                	test   %al,%al
 81c5fcc:	74 29                	je     81c5ff7 <_ZN22DisPatcher_RepairEquip4readER9PacketBufR8MSG_BASE+0x51>
 81c5fce:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c5fd5:	00 
 81c5fd6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c5fdd:	00 
 81c5fde:	c7 44 24 04 20 58 bd 	movl   $0x8bd5820,0x4(%esp)
 81c5fe5:	08 
 81c5fe6:	c7 04 24 e6 14 00 00 	movl   $0x14e6,(%esp)
 81c5fed:	e8 e5 a8 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c5ff2:	e9 89 00 00 00       	jmp    81c6080 <_ZN22DisPatcher_RepairEquip4readER9PacketBufR8MSG_BASE+0xda>
 81c5ff7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c5ffa:	83 c0 0e             	add    $0xe,%eax
 81c5ffd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6001:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6004:	89 04 24             	mov    %eax,(%esp)
 81c6007:	e8 a4 70 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c600c:	83 f0 01             	xor    $0x1,%eax
 81c600f:	84 c0                	test   %al,%al
 81c6011:	74 26                	je     81c6039 <_ZN22DisPatcher_RepairEquip4readER9PacketBufR8MSG_BASE+0x93>
 81c6013:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c601a:	00 
 81c601b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c6022:	00 
 81c6023:	c7 44 24 04 20 58 bd 	movl   $0x8bd5820,0x4(%esp)
 81c602a:	08 
 81c602b:	c7 04 24 e7 14 00 00 	movl   $0x14e7,(%esp)
 81c6032:	e8 a0 a8 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c6037:	eb 47                	jmp    81c6080 <_ZN22DisPatcher_RepairEquip4readER9PacketBufR8MSG_BASE+0xda>
 81c6039:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c603c:	83 c0 10             	add    $0x10,%eax
 81c603f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6043:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6046:	89 04 24             	mov    %eax,(%esp)
 81c6049:	e8 62 70 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c604e:	83 f0 01             	xor    $0x1,%eax
 81c6051:	84 c0                	test   %al,%al
 81c6053:	74 26                	je     81c607b <_ZN22DisPatcher_RepairEquip4readER9PacketBufR8MSG_BASE+0xd5>
 81c6055:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c605c:	00 
 81c605d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c6064:	00 
 81c6065:	c7 44 24 04 20 58 bd 	movl   $0x8bd5820,0x4(%esp)
 81c606c:	08 
 81c606d:	c7 04 24 e9 14 00 00 	movl   $0x14e9,(%esp)
 81c6074:	e8 5e a8 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c6079:	eb 05                	jmp    81c6080 <_ZN22DisPatcher_RepairEquip4readER9PacketBufR8MSG_BASE+0xda>
 81c607b:	b8 00 00 00 00       	mov    $0x0,%eax
 81c6080:	c9                   	leave
 81c6081:	c3                   	ret

```

```c
// DisPatcher_RepairEquip::read @ 0x81c5fa6

/* DisPatcher_RepairEquip::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_RepairEquip::read(DisPatcher_RepairEquip *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x14e9,"virtual int DisPatcher_RepairEquip::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0x14e7,"virtual int DisPatcher_RepairEquip::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x14e6,"virtual int DisPatcher_RepairEquip::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081c61ea DisPatcher_RepairEquip::send  [0x081c61ea-0x81c6329] ===
 81c61ea:	55                   	push   %ebp
 81c61eb:	89 e5                	mov    %esp,%ebp
 81c61ed:	56                   	push   %esi
 81c61ee:	53                   	push   %ebx
 81c61ef:	83 ec 20             	sub    $0x20,%esp
 81c61f2:	8b 45 10             	mov    0x10(%ebp),%eax
 81c61f5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c61f8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c61fb:	89 04 24             	mov    %eax,(%esp)
 81c61fe:	e8 49 7b 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81c6203:	c7 44 24 08 19 00 00 	movl   $0x19,0x8(%esp)
 81c620a:	00 
 81c620b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c6212:	00 
 81c6213:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c6216:	89 04 24             	mov    %eax,(%esp)
 81c6219:	e8 de 56 f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81c621e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6221:	8b 40 04             	mov    0x4(%eax),%eax
 81c6224:	85 c0                	test   %eax,%eax
 81c6226:	74 2d                	je     81c6255 <_ZN22DisPatcher_RepairEquip4sendEP5CUserR9ParamBase+0x6b>
 81c6228:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c622f:	00 
 81c6230:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c6233:	89 04 24             	mov    %eax,(%esp)
 81c6236:	e8 e5 56 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c623b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c623e:	8b 40 04             	mov    0x4(%eax),%eax
 81c6241:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6245:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c6248:	89 04 24             	mov    %eax,(%esp)
 81c624b:	e8 d0 56 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c6250:	e9 80 00 00 00       	jmp    81c62d5 <_ZN22DisPatcher_RepairEquip4sendEP5CUserR9ParamBase+0xeb>
 81c6255:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c625c:	00 
 81c625d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c6260:	89 04 24             	mov    %eax,(%esp)
 81c6263:	e8 b8 56 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c6268:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c626b:	89 04 24             	mov    %eax,(%esp)
 81c626e:	e8 0b 40 f1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81c6273:	89 04 24             	mov    %eax,(%esp)
 81c6276:	e8 5b e5 f6 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 81c627b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c627f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c6282:	89 04 24             	mov    %eax,(%esp)
 81c6285:	e8 b2 56 f0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81c628a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c628d:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 81c6291:	0f be c0             	movsbl %al,%eax
 81c6294:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6298:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c629b:	89 04 24             	mov    %eax,(%esp)
 81c629e:	e8 7d 56 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c62a3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c62a6:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 81c62aa:	0f b7 c0             	movzwl %ax,%eax
 81c62ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c62b1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c62b4:	89 04 24             	mov    %eax,(%esp)
 81c62b7:	e8 e8 3b f1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81c62bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c62bf:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 81c62c3:	0f b7 c0             	movzwl %ax,%eax
 81c62c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c62ca:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c62cd:	89 04 24             	mov    %eax,(%esp)
 81c62d0:	e8 cf 3b f1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81c62d5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c62dc:	00 
 81c62dd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c62e0:	89 04 24             	mov    %eax,(%esp)
 81c62e3:	e8 70 56 f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81c62e8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c62eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c62ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c62f2:	89 04 24             	mov    %eax,(%esp)
 81c62f5:	e8 c0 22 48 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81c62fa:	eb 1b                	jmp    81c6317 <_ZN22DisPatcher_RepairEquip4sendEP5CUserR9ParamBase+0x12d>
 81c62fc:	89 d3                	mov    %edx,%ebx
 81c62fe:	89 c6                	mov    %eax,%esi
 81c6300:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c6303:	89 04 24             	mov    %eax,(%esp)
 81c6306:	e8 75 7b 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c630b:	89 f0                	mov    %esi,%eax
 81c630d:	89 da                	mov    %ebx,%edx
 81c630f:	89 04 24             	mov    %eax,(%esp)
 81c6312:	e8 39 d4 91 00       	call   8ae3750 <_Unwind_Resume>
 81c6317:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c631a:	89 04 24             	mov    %eax,(%esp)
 81c631d:	e8 5e 7b 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c6322:	83 c4 20             	add    $0x20,%esp
 81c6325:	5b                   	pop    %ebx
 81c6326:	5e                   	pop    %esi
 81c6327:	5d                   	pop    %ebp
 81c6328:	c3                   	ret
 81c6329:	90                   	nop

```

```c
// DisPatcher_RepairEquip::send @ 0x81c61ea

/* DisPatcher_RepairEquip::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_RepairEquip::send(DisPatcher_RepairEquip *this,CUser *param_1,ParamBase *param_2)

{
  CInventory *this_00;
  int iVar1;
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081c6219 to 081c62f9 has its CatchHandler @ 081c62fc */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x19);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar1 = CInventory::get_money(this_00);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[8]);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 10));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 0xc));
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

