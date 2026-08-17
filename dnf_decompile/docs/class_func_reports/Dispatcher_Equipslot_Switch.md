# Dispatcher_Equipslot_Switch

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081d614a Dispatcher_Equipslot_Switch::check_error  [0x081d614a-0x81d61bd] ===
 81d614a:	55                   	push   %ebp
 81d614b:	89 e5                	mov    %esp,%ebp
 81d614d:	83 ec 18             	sub    $0x18,%esp
 81d6150:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81d6154:	75 26                	jne    81d617c <_ZN27Dispatcher_Equipslot_Switch11check_errorEP5CUserR8MSG_BASE+0x32>
 81d6156:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d615d:	00 
 81d615e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d6165:	00 
 81d6166:	c7 44 24 04 c0 2b bd 	movl   $0x8bd2bc0,0x4(%esp)
 81d616d:	08 
 81d616e:	c7 04 24 1c 3e 00 00 	movl   $0x3e1c,(%esp)
 81d6175:	e8 5d a7 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d617a:	eb 40                	jmp    81d61bc <_ZN27Dispatcher_Equipslot_Switch11check_errorEP5CUserR8MSG_BASE+0x72>
 81d617c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d617f:	89 04 24             	mov    %eax,(%esp)
 81d6182:	e8 05 42 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d6187:	83 f8 02             	cmp    $0x2,%eax
 81d618a:	0f 9e c0             	setle  %al
 81d618d:	84 c0                	test   %al,%al
 81d618f:	74 26                	je     81d61b7 <_ZN27Dispatcher_Equipslot_Switch11check_errorEP5CUserR8MSG_BASE+0x6d>
 81d6191:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d6198:	00 
 81d6199:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d61a0:	00 
 81d61a1:	c7 44 24 04 c0 2b bd 	movl   $0x8bd2bc0,0x4(%esp)
 81d61a8:	08 
 81d61a9:	c7 04 24 1d 3e 00 00 	movl   $0x3e1d,(%esp)
 81d61b0:	e8 22 a7 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d61b5:	eb 05                	jmp    81d61bc <_ZN27Dispatcher_Equipslot_Switch11check_errorEP5CUserR8MSG_BASE+0x72>
 81d61b7:	b8 00 00 00 00       	mov    $0x0,%eax
 81d61bc:	c9                   	leave
 81d61bd:	c3                   	ret

```

```c
// Dispatcher_Equipslot_Switch::check_error @ 0x81d614a

/* Dispatcher_Equipslot_Switch::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_Equipslot_Switch::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = LineFunc(0x3e1c,"int Dispatcher_Equipslot_Switch::check_error(CUser*, MSG_BASE&)",0,0);
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 < 3) {
      uVar1 = LineFunc(0x3e1d,"int Dispatcher_Equipslot_Switch::check_error(CUser*, MSG_BASE&)",0,0)
      ;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 081d61be Dispatcher_Equipslot_Switch::process  [0x081d61be-0x81d62c1] ===
 81d61be:	55                   	push   %ebp
 81d61bf:	89 e5                	mov    %esp,%ebp
 81d61c1:	83 ec 38             	sub    $0x38,%esp
 81d61c4:	8b 45 10             	mov    0x10(%ebp),%eax
 81d61c7:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d61cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d61ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d61d2:	8b 45 08             	mov    0x8(%ebp),%eax
 81d61d5:	89 04 24             	mov    %eax,(%esp)
 81d61d8:	e8 6d ff ff ff       	call   81d614a <_ZN27Dispatcher_Equipslot_Switch11check_errorEP5CUserR8MSG_BASE>
 81d61dd:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d61e0:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81d61e4:	7e 27                	jle    81d620d <_ZN27Dispatcher_Equipslot_Switch7processEP5CUserR8MSG_BASER9ParamBase+0x4f>
 81d61e6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d61e9:	0f b6 c0             	movzbl %al,%eax
 81d61ec:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d61f0:	c7 44 24 04 8d 01 00 	movl   $0x18d,0x4(%esp)
 81d61f7:	00 
 81d61f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d61fb:	89 04 24             	mov    %eax,(%esp)
 81d61fe:	e8 3f 5d 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d6203:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d6208:	e9 b2 00 00 00       	jmp    81d62bf <_ZN27Dispatcher_Equipslot_Switch7processEP5CUserR8MSG_BASER9ParamBase+0x101>
 81d620d:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81d6211:	79 41                	jns    81d6254 <_ZN27Dispatcher_Equipslot_Switch7processEP5CUserR8MSG_BASER9ParamBase+0x96>
 81d6213:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 81d621a:	00 
 81d621b:	c7 44 24 04 8d 01 00 	movl   $0x18d,0x4(%esp)
 81d6222:	00 
 81d6223:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d6226:	89 04 24             	mov    %eax,(%esp)
 81d6229:	e8 14 5d 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d622e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d6235:	00 
 81d6236:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d623d:	00 
 81d623e:	c7 44 24 04 60 2b bd 	movl   $0x8bd2b60,0x4(%esp)
 81d6245:	08 
 81d6246:	c7 04 24 2c 3e 00 00 	movl   $0x3e2c,(%esp)
 81d624d:	e8 85 a6 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d6252:	eb 6b                	jmp    81d62bf <_ZN27Dispatcher_Equipslot_Switch7processEP5CUserR8MSG_BASER9ParamBase+0x101>
 81d6254:	8b 45 10             	mov    0x10(%ebp),%eax
 81d6257:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d625a:	8b 45 14             	mov    0x14(%ebp),%eax
 81d625d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d6260:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 81d6267:	00 
 81d6268:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d626b:	89 04 24             	mov    %eax,(%esp)
 81d626e:	e8 11 73 f0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 81d6273:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d6276:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d6279:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81d627d:	0f be c8             	movsbl %al,%ecx
 81d6280:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d6283:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d6287:	0f be d0             	movsbl %al,%edx
 81d628a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d628d:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 81d6291:	0f be c0             	movsbl %al,%eax
 81d6294:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81d6298:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81d629c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d62a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d62a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d62a7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d62aa:	89 04 24             	mov    %eax,(%esp)
 81d62ad:	e8 8c 31 2c 00       	call   849943e <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc>
 81d62b2:	89 c2                	mov    %eax,%edx
 81d62b4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d62b7:	88 50 04             	mov    %dl,0x4(%eax)
 81d62ba:	b8 00 00 00 00       	mov    $0x0,%eax
 81d62bf:	c9                   	leave
 81d62c0:	c3                   	ret
 81d62c1:	90                   	nop

```

```c
// Dispatcher_Equipslot_Switch::process @ 0x81d61be

/* Dispatcher_Equipslot_Switch::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Equipslot_Switch::process
          (Dispatcher_Equipslot_Switch *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ParamBase PVar1;
  uint uVar2;
  undefined4 uVar3;
  CExpandEquipslot *this_00;
  MSG_BASE *pMVar4;
  
  pMVar4 = param_2;
  uVar2 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if ((int)uVar2 < 1) {
    if ((int)uVar2 < 0) {
      CUser::SendCmdErrorPacket(param_1,0x18d,0x15);
      uVar3 = LineFunc(0x3e2c,
                       "virtual int Dispatcher_Equipslot_Switch::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,0,0);
    }
    else {
      this_00 = (CExpandEquipslot *)CUser::GetCharacExpandData(param_1,9,pMVar4);
      PVar1 = (ParamBase)
              CExpandEquipslot::EquipslotSwitch
                        (this_00,param_1,(char)param_2[0xf],(char)param_2[0xd],(char)param_2[0xe]);
      param_3[4] = PVar1;
      uVar3 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x18d,uVar2 & 0xff);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

```

---

## read

```asm
// === 081d606e Dispatcher_Equipslot_Switch::read  [0x081d606e-0x81d6149] ===
 81d606e:	55                   	push   %ebp
 81d606f:	89 e5                	mov    %esp,%ebp
 81d6071:	83 ec 28             	sub    $0x28,%esp
 81d6074:	8b 45 10             	mov    0x10(%ebp),%eax
 81d6077:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d607a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d607d:	83 c0 0d             	add    $0xd,%eax
 81d6080:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d6084:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d6087:	89 04 24             	mov    %eax,(%esp)
 81d608a:	e8 93 6e 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81d608f:	83 f0 01             	xor    $0x1,%eax
 81d6092:	84 c0                	test   %al,%al
 81d6094:	74 29                	je     81d60bf <_ZN27Dispatcher_Equipslot_Switch4readER9PacketBufR8MSG_BASE+0x51>
 81d6096:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d609d:	00 
 81d609e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d60a5:	00 
 81d60a6:	c7 44 24 04 00 2c bd 	movl   $0x8bd2c00,0x4(%esp)
 81d60ad:	08 
 81d60ae:	c7 04 24 12 3e 00 00 	movl   $0x3e12,(%esp)
 81d60b5:	e8 1d a8 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d60ba:	e9 89 00 00 00       	jmp    81d6148 <_ZN27Dispatcher_Equipslot_Switch4readER9PacketBufR8MSG_BASE+0xda>
 81d60bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d60c2:	83 c0 0e             	add    $0xe,%eax
 81d60c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d60c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d60cc:	89 04 24             	mov    %eax,(%esp)
 81d60cf:	e8 4e 6e 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81d60d4:	83 f0 01             	xor    $0x1,%eax
 81d60d7:	84 c0                	test   %al,%al
 81d60d9:	74 26                	je     81d6101 <_ZN27Dispatcher_Equipslot_Switch4readER9PacketBufR8MSG_BASE+0x93>
 81d60db:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d60e2:	00 
 81d60e3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d60ea:	00 
 81d60eb:	c7 44 24 04 00 2c bd 	movl   $0x8bd2c00,0x4(%esp)
 81d60f2:	08 
 81d60f3:	c7 04 24 14 3e 00 00 	movl   $0x3e14,(%esp)
 81d60fa:	e8 d8 a7 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d60ff:	eb 47                	jmp    81d6148 <_ZN27Dispatcher_Equipslot_Switch4readER9PacketBufR8MSG_BASE+0xda>
 81d6101:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d6104:	83 c0 0f             	add    $0xf,%eax
 81d6107:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d610b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d610e:	89 04 24             	mov    %eax,(%esp)
 81d6111:	e8 0c 6e 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81d6116:	83 f0 01             	xor    $0x1,%eax
 81d6119:	84 c0                	test   %al,%al
 81d611b:	74 26                	je     81d6143 <_ZN27Dispatcher_Equipslot_Switch4readER9PacketBufR8MSG_BASE+0xd5>
 81d611d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d6124:	00 
 81d6125:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d612c:	00 
 81d612d:	c7 44 24 04 00 2c bd 	movl   $0x8bd2c00,0x4(%esp)
 81d6134:	08 
 81d6135:	c7 04 24 16 3e 00 00 	movl   $0x3e16,(%esp)
 81d613c:	e8 96 a7 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d6141:	eb 05                	jmp    81d6148 <_ZN27Dispatcher_Equipslot_Switch4readER9PacketBufR8MSG_BASE+0xda>
 81d6143:	b8 00 00 00 00       	mov    $0x0,%eax
 81d6148:	c9                   	leave
 81d6149:	c3                   	ret

```

```c
// Dispatcher_Equipslot_Switch::read @ 0x81d606e

/* Dispatcher_Equipslot_Switch::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Equipslot_Switch::read
          (Dispatcher_Equipslot_Switch *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xf));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x3e16,
                         "virtual int Dispatcher_Equipslot_Switch::read(PacketBuf&, MSG_BASE&)",0,0)
        ;
      }
    }
    else {
      uVar2 = LineFunc(0x3e14,"virtual int Dispatcher_Equipslot_Switch::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x3e12,"virtual int Dispatcher_Equipslot_Switch::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d62c2 Dispatcher_Equipslot_Switch::send  [0x081d62c2-0x81d63e5] ===
 81d62c2:	55                   	push   %ebp
 81d62c3:	89 e5                	mov    %esp,%ebp
 81d62c5:	56                   	push   %esi
 81d62c6:	53                   	push   %ebx
 81d62c7:	83 ec 30             	sub    $0x30,%esp
 81d62ca:	8b 45 10             	mov    0x10(%ebp),%eax
 81d62cd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d62d0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d62d3:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81d62d7:	84 c0                	test   %al,%al
 81d62d9:	75 3a                	jne    81d6315 <_ZN27Dispatcher_Equipslot_Switch4sendEP5CUserR9ParamBase+0x53>
 81d62db:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 81d62e2:	00 
 81d62e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d62e6:	89 04 24             	mov    %eax,(%esp)
 81d62e9:	e8 96 72 f0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 81d62ee:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d62f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d62f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d62f8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d62fb:	89 04 24             	mov    %eax,(%esp)
 81d62fe:	e8 3b 35 2c 00       	call   849983e <_ZN16CExpandEquipslot15Send_Equip_InfoEP5CUser>
 81d6303:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d6306:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d630a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d630d:	89 04 24             	mov    %eax,(%esp)
 81d6310:	e8 67 42 2c 00       	call   849a57c <_ZN16CExpandEquipslot22Send_Expand_Equip_InfoEP5CUser>
 81d6315:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d6318:	89 04 24             	mov    %eax,(%esp)
 81d631b:	e8 2c 7a 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d6320:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d6323:	89 04 24             	mov    %eax,(%esp)
 81d6326:	e8 bb 55 ef ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81d632b:	c7 44 24 08 8d 01 00 	movl   $0x18d,0x8(%esp)
 81d6332:	00 
 81d6333:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d633a:	00 
 81d633b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d633e:	89 04 24             	mov    %eax,(%esp)
 81d6341:	e8 b6 55 ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d6346:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d6349:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81d634d:	84 c0                	test   %al,%al
 81d634f:	74 2e                	je     81d637f <_ZN27Dispatcher_Equipslot_Switch4sendEP5CUserR9ParamBase+0xbd>
 81d6351:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d6358:	00 
 81d6359:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d635c:	89 04 24             	mov    %eax,(%esp)
 81d635f:	e8 bc 55 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d6364:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d6367:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81d636b:	0f be c0             	movsbl %al,%eax
 81d636e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d6372:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d6375:	89 04 24             	mov    %eax,(%esp)
 81d6378:	e8 a3 55 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d637d:	eb 13                	jmp    81d6392 <_ZN27Dispatcher_Equipslot_Switch4sendEP5CUserR9ParamBase+0xd0>
 81d637f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d6386:	00 
 81d6387:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d638a:	89 04 24             	mov    %eax,(%esp)
 81d638d:	e8 8e 55 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d6392:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d6399:	00 
 81d639a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d639d:	89 04 24             	mov    %eax,(%esp)
 81d63a0:	e8 b3 55 ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d63a5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d63a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d63ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d63af:	89 04 24             	mov    %eax,(%esp)
 81d63b2:	e8 03 22 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d63b7:	eb 1b                	jmp    81d63d4 <_ZN27Dispatcher_Equipslot_Switch4sendEP5CUserR9ParamBase+0x112>
 81d63b9:	89 d3                	mov    %edx,%ebx
 81d63bb:	89 c6                	mov    %eax,%esi
 81d63bd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d63c0:	89 04 24             	mov    %eax,(%esp)
 81d63c3:	e8 b8 7a 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d63c8:	89 f0                	mov    %esi,%eax
 81d63ca:	89 da                	mov    %ebx,%edx
 81d63cc:	89 04 24             	mov    %eax,(%esp)
 81d63cf:	e8 7c d3 90 00       	call   8ae3750 <_Unwind_Resume>
 81d63d4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d63d7:	89 04 24             	mov    %eax,(%esp)
 81d63da:	e8 a1 7a 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d63df:	83 c4 30             	add    $0x30,%esp
 81d63e2:	5b                   	pop    %ebx
 81d63e3:	5e                   	pop    %esi
 81d63e4:	5d                   	pop    %ebp
 81d63e5:	c3                   	ret

```

```c
// Dispatcher_Equipslot_Switch::send @ 0x81d62c2

/* Dispatcher_Equipslot_Switch::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Equipslot_Switch::send
          (Dispatcher_Equipslot_Switch *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_20 [12];
  ParamBase *local_14;
  CExpandEquipslot *local_10;
  
  local_14 = param_2;
  if (param_2[4] == (ParamBase)0x0) {
    local_10 = (CExpandEquipslot *)CUser::GetCharacExpandData(param_1,9);
    CExpandEquipslot::Send_Equip_Info(local_10,param_1);
    CExpandEquipslot::Send_Expand_Equip_Info(local_10,param_1);
  }
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081d6326 to 081d63b6 has its CatchHandler @ 081d63b9 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x18d);
  if (local_14[4] == (ParamBase)0x0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)(char)local_14[4]);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  PacketGuard::~PacketGuard(local_20);
  return;
}

```

