# Dispatcher_InformNotice

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081e3008 Dispatcher_InformNotice::check_error  [0x081e3008-0x81e3055] ===
 81e3008:	55                   	push   %ebp
 81e3009:	89 e5                	mov    %esp,%ebp
 81e300b:	83 ec 28             	sub    $0x28,%esp
 81e300e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e3012:	75 07                	jne    81e301b <_ZN23Dispatcher_InformNotice11check_errorEP5CUserR8MSG_BASE+0x13>
 81e3014:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e3019:	eb 39                	jmp    81e3054 <_ZN23Dispatcher_InformNotice11check_errorEP5CUserR8MSG_BASE+0x4c>
 81e301b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e301e:	89 04 24             	mov    %eax,(%esp)
 81e3021:	e8 66 73 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e3026:	83 f8 02             	cmp    $0x2,%eax
 81e3029:	0f 9e c0             	setle  %al
 81e302c:	84 c0                	test   %al,%al
 81e302e:	74 07                	je     81e3037 <_ZN23Dispatcher_InformNotice11check_errorEP5CUserR8MSG_BASE+0x2f>
 81e3030:	b8 01 00 00 00       	mov    $0x1,%eax
 81e3035:	eb 1d                	jmp    81e3054 <_ZN23Dispatcher_InformNotice11check_errorEP5CUserR8MSG_BASE+0x4c>
 81e3037:	8b 45 10             	mov    0x10(%ebp),%eax
 81e303a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e303d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3040:	8b 40 0d             	mov    0xd(%eax),%eax
 81e3043:	83 f8 7f             	cmp    $0x7f,%eax
 81e3046:	76 07                	jbe    81e304f <_ZN23Dispatcher_InformNotice11check_errorEP5CUserR8MSG_BASE+0x47>
 81e3048:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e304d:	eb 05                	jmp    81e3054 <_ZN23Dispatcher_InformNotice11check_errorEP5CUserR8MSG_BASE+0x4c>
 81e304f:	b8 00 00 00 00       	mov    $0x0,%eax
 81e3054:	c9                   	leave
 81e3055:	c3                   	ret

```

```c
// Dispatcher_InformNotice::check_error @ 0x81e3008

/* Dispatcher_InformNotice::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_InformNotice::check_error(Dispatcher_InformNotice *this,CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 < 3) {
      uVar1 = 1;
    }
    else if (*(uint *)(param_2 + 0xd) < 0x80) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 081e2f78 Dispatcher_InformNotice::process  [0x081e2f78-0x81e3007] ===
 81e2f78:	55                   	push   %ebp
 81e2f79:	89 e5                	mov    %esp,%ebp
 81e2f7b:	83 ec 28             	sub    $0x28,%esp
 81e2f7e:	8b 45 14             	mov    0x14(%ebp),%eax
 81e2f81:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e2f84:	8b 45 10             	mov    0x10(%ebp),%eax
 81e2f87:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e2f8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2f8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2f92:	8b 45 08             	mov    0x8(%ebp),%eax
 81e2f95:	89 04 24             	mov    %eax,(%esp)
 81e2f98:	e8 6b 00 00 00       	call   81e3008 <_ZN23Dispatcher_InformNotice11check_errorEP5CUserR8MSG_BASE>
 81e2f9d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81e2fa0:	89 42 04             	mov    %eax,0x4(%edx)
 81e2fa3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e2fa6:	8b 40 04             	mov    0x4(%eax),%eax
 81e2fa9:	85 c0                	test   %eax,%eax
 81e2fab:	7e 07                	jle    81e2fb4 <_ZN23Dispatcher_InformNotice7processEP5CUserR8MSG_BASER9ParamBase+0x3c>
 81e2fad:	b8 00 00 00 00       	mov    $0x0,%eax
 81e2fb2:	eb 52                	jmp    81e3006 <_ZN23Dispatcher_InformNotice7processEP5CUserR8MSG_BASER9ParamBase+0x8e>
 81e2fb4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e2fb7:	8b 40 04             	mov    0x4(%eax),%eax
 81e2fba:	85 c0                	test   %eax,%eax
 81e2fbc:	79 28                	jns    81e2fe6 <_ZN23Dispatcher_InformNotice7processEP5CUserR8MSG_BASER9ParamBase+0x6e>
 81e2fbe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e2fc1:	8b 40 04             	mov    0x4(%eax),%eax
 81e2fc4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e2fcb:	00 
 81e2fcc:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e2fd0:	c7 44 24 04 c0 14 bd 	movl   $0x8bd14c0,0x4(%esp)
 81e2fd7:	08 
 81e2fd8:	c7 04 24 8c 59 00 00 	movl   $0x598c,(%esp)
 81e2fdf:	e8 f3 d8 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e2fe4:	eb 20                	jmp    81e3006 <_ZN23Dispatcher_InformNotice7processEP5CUserR8MSG_BASER9ParamBase+0x8e>
 81e2fe6:	8b 45 10             	mov    0x10(%ebp),%eax
 81e2fe9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e2fec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e2fef:	8b 40 0d             	mov    0xd(%eax),%eax
 81e2ff2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2ff6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2ff9:	89 04 24             	mov    %eax,(%esp)
 81e2ffc:	e8 55 c9 4a 00       	call   868f956 <_ZN5CUser22handleInformNoticeFlagEj>
 81e3001:	b8 00 00 00 00       	mov    $0x0,%eax
 81e3006:	c9                   	leave
 81e3007:	c3                   	ret

```

```c
// Dispatcher_InformNotice::process @ 0x81e2f78

/* Dispatcher_InformNotice::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_InformNotice::process
          (Dispatcher_InformNotice *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x598c,
                       "virtual int Dispatcher_InformNotice::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      CUser::handleInformNoticeFlag(param_1,*(uint *)(param_2 + 0xd));
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
// === 081e2f22 Dispatcher_InformNotice::read  [0x081e2f22-0x81e2f77] ===
 81e2f22:	55                   	push   %ebp
 81e2f23:	89 e5                	mov    %esp,%ebp
 81e2f25:	83 ec 28             	sub    $0x28,%esp
 81e2f28:	8b 45 10             	mov    0x10(%ebp),%eax
 81e2f2b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e2f2e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e2f31:	83 c0 0d             	add    $0xd,%eax
 81e2f34:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2f38:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2f3b:	89 04 24             	mov    %eax,(%esp)
 81e2f3e:	e8 fd a2 3a 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81e2f43:	83 f0 01             	xor    $0x1,%eax
 81e2f46:	84 c0                	test   %al,%al
 81e2f48:	74 26                	je     81e2f70 <_ZN23Dispatcher_InformNotice4readER9PacketBufR8MSG_BASE+0x4e>
 81e2f4a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e2f51:	00 
 81e2f52:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e2f59:	00 
 81e2f5a:	c7 44 24 04 20 15 bd 	movl   $0x8bd1520,0x4(%esp)
 81e2f61:	08 
 81e2f62:	c7 04 24 7d 59 00 00 	movl   $0x597d,(%esp)
 81e2f69:	e8 69 d9 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e2f6e:	eb 05                	jmp    81e2f75 <_ZN23Dispatcher_InformNotice4readER9PacketBufR8MSG_BASE+0x53>
 81e2f70:	b8 00 00 00 00       	mov    $0x0,%eax
 81e2f75:	c9                   	leave
 81e2f76:	c3                   	ret
 81e2f77:	90                   	nop

```

```c
// Dispatcher_InformNotice::read @ 0x81e2f22

/* Dispatcher_InformNotice::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_InformNotice::read(Dispatcher_InformNotice *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x597d,"virtual int Dispatcher_InformNotice::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081e3056 Dispatcher_InformNotice::send  [0x081e3056-0x81e30a3] ===
 81e3056:	55                   	push   %ebp
 81e3057:	89 e5                	mov    %esp,%ebp
 81e3059:	83 ec 28             	sub    $0x28,%esp
 81e305c:	8b 45 10             	mov    0x10(%ebp),%eax
 81e305f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e3062:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3065:	8b 40 04             	mov    0x4(%eax),%eax
 81e3068:	85 c0                	test   %eax,%eax
 81e306a:	75 15                	jne    81e3081 <_ZN23Dispatcher_InformNotice4sendEP5CUserR9ParamBase+0x2b>
 81e306c:	c7 44 24 04 de 01 00 	movl   $0x1de,0x4(%esp)
 81e3073:	00 
 81e3074:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3077:	89 04 24             	mov    %eax,(%esp)
 81e307a:	e8 21 8e 49 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81e307f:	eb 20                	jmp    81e30a1 <_ZN23Dispatcher_InformNotice4sendEP5CUserR9ParamBase+0x4b>
 81e3081:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3084:	8b 40 04             	mov    0x4(%eax),%eax
 81e3087:	0f b6 c0             	movzbl %al,%eax
 81e308a:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e308e:	c7 44 24 04 de 01 00 	movl   $0x1de,0x4(%esp)
 81e3095:	00 
 81e3096:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3099:	89 04 24             	mov    %eax,(%esp)
 81e309c:	e8 a1 8e 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e30a1:	c9                   	leave
 81e30a2:	c3                   	ret
 81e30a3:	90                   	nop

```

```c
// Dispatcher_InformNotice::send @ 0x81e3056

/* Dispatcher_InformNotice::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_InformNotice::send(Dispatcher_InformNotice *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1de);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1de,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

