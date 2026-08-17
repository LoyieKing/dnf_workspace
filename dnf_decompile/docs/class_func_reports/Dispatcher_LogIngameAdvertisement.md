# Dispatcher_LogIngameAdvertisement

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081e4ec8 Dispatcher_LogIngameAdvertisement::check_error  [0x081e4ec8-0x81e4f03] ===
 81e4ec8:	55                   	push   %ebp
 81e4ec9:	89 e5                	mov    %esp,%ebp
 81e4ecb:	83 ec 28             	sub    $0x28,%esp
 81e4ece:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e4ed2:	75 07                	jne    81e4edb <_ZN33Dispatcher_LogIngameAdvertisement11check_errorEP5CUserR8MSG_BASE+0x13>
 81e4ed4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e4ed9:	eb 27                	jmp    81e4f02 <_ZN33Dispatcher_LogIngameAdvertisement11check_errorEP5CUserR8MSG_BASE+0x3a>
 81e4edb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e4ede:	89 04 24             	mov    %eax,(%esp)
 81e4ee1:	e8 a6 54 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e4ee6:	83 f8 01             	cmp    $0x1,%eax
 81e4ee9:	0f 9e c0             	setle  %al
 81e4eec:	84 c0                	test   %al,%al
 81e4eee:	74 07                	je     81e4ef7 <_ZN33Dispatcher_LogIngameAdvertisement11check_errorEP5CUserR8MSG_BASE+0x2f>
 81e4ef0:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81e4ef5:	eb 0b                	jmp    81e4f02 <_ZN33Dispatcher_LogIngameAdvertisement11check_errorEP5CUserR8MSG_BASE+0x3a>
 81e4ef7:	8b 45 10             	mov    0x10(%ebp),%eax
 81e4efa:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e4efd:	b8 00 00 00 00       	mov    $0x0,%eax
 81e4f02:	c9                   	leave
 81e4f03:	c3                   	ret

```

```c
// Dispatcher_LogIngameAdvertisement::check_error @ 0x81e4ec8

/* Dispatcher_LogIngameAdvertisement::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_LogIngameAdvertisement::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 < 2) {
      uVar1 = 0x7fffffff;
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
// === 081e4df2 Dispatcher_LogIngameAdvertisement::process  [0x081e4df2-0x81e4ec7] ===
 81e4df2:	55                   	push   %ebp
 81e4df3:	89 e5                	mov    %esp,%ebp
 81e4df5:	57                   	push   %edi
 81e4df6:	56                   	push   %esi
 81e4df7:	53                   	push   %ebx
 81e4df8:	83 ec 4c             	sub    $0x4c,%esp
 81e4dfb:	8b 45 14             	mov    0x14(%ebp),%eax
 81e4dfe:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81e4e01:	8b 45 10             	mov    0x10(%ebp),%eax
 81e4e04:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e4e08:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e4e0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4e0f:	8b 45 08             	mov    0x8(%ebp),%eax
 81e4e12:	89 04 24             	mov    %eax,(%esp)
 81e4e15:	e8 ae 00 00 00       	call   81e4ec8 <_ZN33Dispatcher_LogIngameAdvertisement11check_errorEP5CUserR8MSG_BASE>
 81e4e1a:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81e4e1d:	89 42 04             	mov    %eax,0x4(%edx)
 81e4e20:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e4e23:	8b 40 04             	mov    0x4(%eax),%eax
 81e4e26:	85 c0                	test   %eax,%eax
 81e4e28:	7e 0a                	jle    81e4e34 <_ZN33Dispatcher_LogIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase+0x42>
 81e4e2a:	b8 00 00 00 00       	mov    $0x0,%eax
 81e4e2f:	e9 8b 00 00 00       	jmp    81e4ebf <_ZN33Dispatcher_LogIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase+0xcd>
 81e4e34:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e4e37:	8b 40 04             	mov    0x4(%eax),%eax
 81e4e3a:	85 c0                	test   %eax,%eax
 81e4e3c:	79 28                	jns    81e4e66 <_ZN33Dispatcher_LogIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase+0x74>
 81e4e3e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e4e41:	8b 40 04             	mov    0x4(%eax),%eax
 81e4e44:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e4e4b:	00 
 81e4e4c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e4e50:	c7 44 24 04 40 10 bd 	movl   $0x8bd1040,0x4(%esp)
 81e4e57:	08 
 81e4e58:	c7 04 24 83 5d 00 00 	movl   $0x5d83,(%esp)
 81e4e5f:	e8 73 ba 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e4e64:	eb 59                	jmp    81e4ebf <_ZN33Dispatcher_LogIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase+0xcd>
 81e4e66:	8b 45 10             	mov    0x10(%ebp),%eax
 81e4e69:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81e4e6c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e4e6f:	8b 40 11             	mov    0x11(%eax),%eax
 81e4e72:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81e4e75:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e4e78:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81e4e7c:	0f be f8             	movsbl %al,%edi
 81e4e7f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e4e82:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e4e86:	0f bf f0             	movswl %ax,%esi
 81e4e89:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e4e8c:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e4e90:	0f be d8             	movsbl %al,%ebx
 81e4e93:	e8 51 7b f1 ff       	call   80fc9e9 <_Z23InGameADManagerInstancev>
 81e4e98:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81e4e9b:	89 54 24 14          	mov    %edx,0x14(%esp)
 81e4e9f:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81e4ea3:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81e4ea7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e4eab:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e4eae:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e4eb2:	89 04 24             	mov    %eax,(%esp)
 81e4eb5:	e8 9c 8b f1 ff       	call   80fda56 <_ZN27CInGameAdvertisementManager8WriteLogEP5CUsercscj>
 81e4eba:	b8 00 00 00 00       	mov    $0x0,%eax
 81e4ebf:	83 c4 4c             	add    $0x4c,%esp
 81e4ec2:	5b                   	pop    %ebx
 81e4ec3:	5e                   	pop    %esi
 81e4ec4:	5f                   	pop    %edi
 81e4ec5:	5d                   	pop    %ebp
 81e4ec6:	c3                   	ret
 81e4ec7:	90                   	nop

```

```c
// Dispatcher_LogIngameAdvertisement::process @ 0x81e4df2

/* Dispatcher_LogIngameAdvertisement::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_LogIngameAdvertisement::process
          (Dispatcher_LogIngameAdvertisement *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  MSG_BASE MVar1;
  MSG_BASE MVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  CInGameAdvertisementManager *this_00;
  
  uVar5 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar5;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar5 = LineFunc(0x5d83,
                       "virtual int Dispatcher_LogIngameAdvertisement::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      uVar4 = *(uint *)(param_2 + 0x11);
      MVar1 = param_2[0x10];
      sVar3 = *(short *)(param_2 + 0xe);
      MVar2 = param_2[0xd];
      this_00 = (CInGameAdvertisementManager *)InGameADManagerInstance();
      CInGameAdvertisementManager::WriteLog(this_00,param_1,(char)MVar2,sVar3,(char)MVar1,uVar4);
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

---

## read

```asm
// === 081e4cd0 Dispatcher_LogIngameAdvertisement::read  [0x081e4cd0-0x81e4df1] ===
 81e4cd0:	55                   	push   %ebp
 81e4cd1:	89 e5                	mov    %esp,%ebp
 81e4cd3:	83 ec 28             	sub    $0x28,%esp
 81e4cd6:	8b 45 10             	mov    0x10(%ebp),%eax
 81e4cd9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e4cdc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e4cdf:	83 c0 0d             	add    $0xd,%eax
 81e4ce2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4ce6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e4ce9:	89 04 24             	mov    %eax,(%esp)
 81e4cec:	e8 31 82 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81e4cf1:	83 f0 01             	xor    $0x1,%eax
 81e4cf4:	84 c0                	test   %al,%al
 81e4cf6:	74 29                	je     81e4d21 <_ZN33Dispatcher_LogIngameAdvertisement4readER9PacketBufR8MSG_BASE+0x51>
 81e4cf8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e4cff:	00 
 81e4d00:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e4d07:	00 
 81e4d08:	c7 44 24 04 a0 10 bd 	movl   $0x8bd10a0,0x4(%esp)
 81e4d0f:	08 
 81e4d10:	c7 04 24 6f 5d 00 00 	movl   $0x5d6f,(%esp)
 81e4d17:	e8 bb bb 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e4d1c:	e9 ce 00 00 00       	jmp    81e4def <_ZN33Dispatcher_LogIngameAdvertisement4readER9PacketBufR8MSG_BASE+0x11f>
 81e4d21:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e4d24:	83 c0 0e             	add    $0xe,%eax
 81e4d27:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4d2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e4d2e:	89 04 24             	mov    %eax,(%esp)
 81e4d31:	e8 8a 82 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81e4d36:	83 f0 01             	xor    $0x1,%eax
 81e4d39:	84 c0                	test   %al,%al
 81e4d3b:	74 29                	je     81e4d66 <_ZN33Dispatcher_LogIngameAdvertisement4readER9PacketBufR8MSG_BASE+0x96>
 81e4d3d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e4d44:	00 
 81e4d45:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e4d4c:	00 
 81e4d4d:	c7 44 24 04 a0 10 bd 	movl   $0x8bd10a0,0x4(%esp)
 81e4d54:	08 
 81e4d55:	c7 04 24 71 5d 00 00 	movl   $0x5d71,(%esp)
 81e4d5c:	e8 76 bb 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e4d61:	e9 89 00 00 00       	jmp    81e4def <_ZN33Dispatcher_LogIngameAdvertisement4readER9PacketBufR8MSG_BASE+0x11f>
 81e4d66:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e4d69:	83 c0 10             	add    $0x10,%eax
 81e4d6c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4d70:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e4d73:	89 04 24             	mov    %eax,(%esp)
 81e4d76:	e8 a7 81 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81e4d7b:	83 f0 01             	xor    $0x1,%eax
 81e4d7e:	84 c0                	test   %al,%al
 81e4d80:	74 26                	je     81e4da8 <_ZN33Dispatcher_LogIngameAdvertisement4readER9PacketBufR8MSG_BASE+0xd8>
 81e4d82:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e4d89:	00 
 81e4d8a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e4d91:	00 
 81e4d92:	c7 44 24 04 a0 10 bd 	movl   $0x8bd10a0,0x4(%esp)
 81e4d99:	08 
 81e4d9a:	c7 04 24 73 5d 00 00 	movl   $0x5d73,(%esp)
 81e4da1:	e8 31 bb 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e4da6:	eb 47                	jmp    81e4def <_ZN33Dispatcher_LogIngameAdvertisement4readER9PacketBufR8MSG_BASE+0x11f>
 81e4da8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e4dab:	83 c0 11             	add    $0x11,%eax
 81e4dae:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4db2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e4db5:	89 04 24             	mov    %eax,(%esp)
 81e4db8:	e8 83 84 3a 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81e4dbd:	83 f0 01             	xor    $0x1,%eax
 81e4dc0:	84 c0                	test   %al,%al
 81e4dc2:	74 26                	je     81e4dea <_ZN33Dispatcher_LogIngameAdvertisement4readER9PacketBufR8MSG_BASE+0x11a>
 81e4dc4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e4dcb:	00 
 81e4dcc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e4dd3:	00 
 81e4dd4:	c7 44 24 04 a0 10 bd 	movl   $0x8bd10a0,0x4(%esp)
 81e4ddb:	08 
 81e4ddc:	c7 04 24 75 5d 00 00 	movl   $0x5d75,(%esp)
 81e4de3:	e8 ef ba 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e4de8:	eb 05                	jmp    81e4def <_ZN33Dispatcher_LogIngameAdvertisement4readER9PacketBufR8MSG_BASE+0x11f>
 81e4dea:	b8 00 00 00 00       	mov    $0x0,%eax
 81e4def:	c9                   	leave
 81e4df0:	c3                   	ret
 81e4df1:	90                   	nop

```

```c
// Dispatcher_LogIngameAdvertisement::read @ 0x81e4cd0

/* Dispatcher_LogIngameAdvertisement::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_LogIngameAdvertisement::read
          (Dispatcher_LogIngameAdvertisement *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x11));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x5d75,
                           "virtual int Dispatcher_LogIngameAdvertisement::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x5d73,
                         "virtual int Dispatcher_LogIngameAdvertisement::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x5d71,
                       "virtual int Dispatcher_LogIngameAdvertisement::read(PacketBuf&, MSG_BASE&)",
                       0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x5d6f,
                     "virtual int Dispatcher_LogIngameAdvertisement::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081e4f04 Dispatcher_LogIngameAdvertisement::send  [0x081e4f04-0x81e4f51] ===
 81e4f04:	55                   	push   %ebp
 81e4f05:	89 e5                	mov    %esp,%ebp
 81e4f07:	83 ec 28             	sub    $0x28,%esp
 81e4f0a:	8b 45 10             	mov    0x10(%ebp),%eax
 81e4f0d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e4f10:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e4f13:	8b 40 04             	mov    0x4(%eax),%eax
 81e4f16:	85 c0                	test   %eax,%eax
 81e4f18:	75 15                	jne    81e4f2f <_ZN33Dispatcher_LogIngameAdvertisement4sendEP5CUserR9ParamBase+0x2b>
 81e4f1a:	c7 44 24 04 ea 01 00 	movl   $0x1ea,0x4(%esp)
 81e4f21:	00 
 81e4f22:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e4f25:	89 04 24             	mov    %eax,(%esp)
 81e4f28:	e8 73 6f 49 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81e4f2d:	eb 20                	jmp    81e4f4f <_ZN33Dispatcher_LogIngameAdvertisement4sendEP5CUserR9ParamBase+0x4b>
 81e4f2f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e4f32:	8b 40 04             	mov    0x4(%eax),%eax
 81e4f35:	0f b6 c0             	movzbl %al,%eax
 81e4f38:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e4f3c:	c7 44 24 04 ea 01 00 	movl   $0x1ea,0x4(%esp)
 81e4f43:	00 
 81e4f44:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e4f47:	89 04 24             	mov    %eax,(%esp)
 81e4f4a:	e8 f3 6f 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e4f4f:	c9                   	leave
 81e4f50:	c3                   	ret
 81e4f51:	90                   	nop

```

```c
// Dispatcher_LogIngameAdvertisement::send @ 0x81e4f04

/* Dispatcher_LogIngameAdvertisement::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_LogIngameAdvertisement::send
          (Dispatcher_LogIngameAdvertisement *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1ea);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1ea,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

