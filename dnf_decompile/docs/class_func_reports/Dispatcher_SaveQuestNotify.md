# Dispatcher_SaveQuestNotify

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 0825eec4 Dispatcher_SaveQuestNotify::check_error  [0x0825eec4-0x825ef77] ===
 825eec4:	55                   	push   %ebp
 825eec5:	89 e5                	mov    %esp,%ebp
 825eec7:	53                   	push   %ebx
 825eec8:	83 ec 24             	sub    $0x24,%esp
 825eecb:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 825eecf:	74 0f                	je     825eee0 <_ZN26Dispatcher_SaveQuestNotify11check_errorEP5CUserR8MSG_BASE+0x1c>
 825eed1:	8b 45 0c             	mov    0xc(%ebp),%eax
 825eed4:	89 04 24             	mov    %eax,(%esp)
 825eed7:	e8 56 15 ec ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 825eedc:	85 c0                	test   %eax,%eax
 825eede:	75 07                	jne    825eee7 <_ZN26Dispatcher_SaveQuestNotify11check_errorEP5CUserR8MSG_BASE+0x23>
 825eee0:	b8 01 00 00 00       	mov    $0x1,%eax
 825eee5:	eb 05                	jmp    825eeec <_ZN26Dispatcher_SaveQuestNotify11check_errorEP5CUserR8MSG_BASE+0x28>
 825eee7:	b8 00 00 00 00       	mov    $0x0,%eax
 825eeec:	84 c0                	test   %al,%al
 825eeee:	74 07                	je     825eef7 <_ZN26Dispatcher_SaveQuestNotify11check_errorEP5CUserR8MSG_BASE+0x33>
 825eef0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 825eef5:	eb 7b                	jmp    825ef72 <_ZN26Dispatcher_SaveQuestNotify11check_errorEP5CUserR8MSG_BASE+0xae>
 825eef7:	8b 45 0c             	mov    0xc(%ebp),%eax
 825eefa:	89 04 24             	mov    %eax,(%esp)
 825eefd:	e8 8a b4 e7 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 825ef02:	83 f8 02             	cmp    $0x2,%eax
 825ef05:	0f 9e c0             	setle  %al
 825ef08:	84 c0                	test   %al,%al
 825ef0a:	74 07                	je     825ef13 <_ZN26Dispatcher_SaveQuestNotify11check_errorEP5CUserR8MSG_BASE+0x4f>
 825ef0c:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 825ef11:	eb 5f                	jmp    825ef72 <_ZN26Dispatcher_SaveQuestNotify11check_errorEP5CUserR8MSG_BASE+0xae>
 825ef13:	8b 45 10             	mov    0x10(%ebp),%eax
 825ef16:	89 45 ec             	mov    %eax,-0x14(%ebp)
 825ef19:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 825ef20:	eb 40                	jmp    825ef62 <_ZN26Dispatcher_SaveQuestNotify11check_errorEP5CUserR8MSG_BASE+0x9e>
 825ef22:	8b 55 f0             	mov    -0x10(%ebp),%edx
 825ef25:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825ef28:	8b 44 90 0d          	mov    0xd(%eax,%edx,4),%eax
 825ef2c:	85 c0                	test   %eax,%eax
 825ef2e:	74 2d                	je     825ef5d <_ZN26Dispatcher_SaveQuestNotify11check_errorEP5CUserR8MSG_BASE+0x99>
 825ef30:	8b 55 f0             	mov    -0x10(%ebp),%edx
 825ef33:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825ef36:	8b 44 90 0d          	mov    0xd(%eax,%edx,4),%eax
 825ef3a:	89 c3                	mov    %eax,%ebx
 825ef3c:	e8 5a d2 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 825ef41:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 825ef45:	89 04 24             	mov    %eax,(%esp)
 825ef48:	e8 79 0e 10 00       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 825ef4d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825ef50:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 825ef54:	75 08                	jne    825ef5e <_ZN26Dispatcher_SaveQuestNotify11check_errorEP5CUserR8MSG_BASE+0x9a>
 825ef56:	b8 fd ff ff ff       	mov    $0xfffffffd,%eax
 825ef5b:	eb 15                	jmp    825ef72 <_ZN26Dispatcher_SaveQuestNotify11check_errorEP5CUserR8MSG_BASE+0xae>
 825ef5d:	90                   	nop
 825ef5e:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 825ef62:	83 7d f0 09          	cmpl   $0x9,-0x10(%ebp)
 825ef66:	0f 9e c0             	setle  %al
 825ef69:	84 c0                	test   %al,%al
 825ef6b:	75 b5                	jne    825ef22 <_ZN26Dispatcher_SaveQuestNotify11check_errorEP5CUserR8MSG_BASE+0x5e>
 825ef6d:	b8 00 00 00 00       	mov    $0x0,%eax
 825ef72:	83 c4 24             	add    $0x24,%esp
 825ef75:	5b                   	pop    %ebx
 825ef76:	5d                   	pop    %ebp
 825ef77:	c3                   	ret

```

```c
// Dispatcher_SaveQuestNotify::check_error @ 0x825eec4

/* Dispatcher_SaveQuestNotify::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SaveQuestNotify::check_error
          (Dispatcher_SaveQuestNotify *this,CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int local_14;
  
  if ((param_1 == (CUser *)0x0) ||
     (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar2 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 < 3) {
      uVar3 = 0xfffffffe;
    }
    else {
      for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
        if (*(int *)(param_2 + local_14 * 4 + 0xd) != 0) {
          iVar2 = G_CDataManager();
          iVar2 = CDataManager::find_quest(iVar2);
          if (iVar2 == 0) {
            return 0xfffffffd;
          }
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## process

```asm
// === 0825edfc Dispatcher_SaveQuestNotify::process  [0x0825edfc-0x825eec3] ===
 825edfc:	55                   	push   %ebp
 825edfd:	89 e5                	mov    %esp,%ebp
 825edff:	53                   	push   %ebx
 825ee00:	83 ec 34             	sub    $0x34,%esp
 825ee03:	8b 45 14             	mov    0x14(%ebp),%eax
 825ee06:	89 45 ec             	mov    %eax,-0x14(%ebp)
 825ee09:	8b 45 10             	mov    0x10(%ebp),%eax
 825ee0c:	89 44 24 08          	mov    %eax,0x8(%esp)
 825ee10:	8b 45 0c             	mov    0xc(%ebp),%eax
 825ee13:	89 44 24 04          	mov    %eax,0x4(%esp)
 825ee17:	8b 45 08             	mov    0x8(%ebp),%eax
 825ee1a:	89 04 24             	mov    %eax,(%esp)
 825ee1d:	e8 a2 00 00 00       	call   825eec4 <_ZN26Dispatcher_SaveQuestNotify11check_errorEP5CUserR8MSG_BASE>
 825ee22:	8b 55 ec             	mov    -0x14(%ebp),%edx
 825ee25:	89 42 04             	mov    %eax,0x4(%edx)
 825ee28:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825ee2b:	8b 40 04             	mov    0x4(%eax),%eax
 825ee2e:	85 c0                	test   %eax,%eax
 825ee30:	7e 0a                	jle    825ee3c <_ZN26Dispatcher_SaveQuestNotify7processEP5CUserR8MSG_BASER9ParamBase+0x40>
 825ee32:	b8 00 00 00 00       	mov    $0x0,%eax
 825ee37:	e9 82 00 00 00       	jmp    825eebe <_ZN26Dispatcher_SaveQuestNotify7processEP5CUserR8MSG_BASER9ParamBase+0xc2>
 825ee3c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825ee3f:	8b 40 04             	mov    0x4(%eax),%eax
 825ee42:	85 c0                	test   %eax,%eax
 825ee44:	79 3d                	jns    825ee83 <_ZN26Dispatcher_SaveQuestNotify7processEP5CUserR8MSG_BASER9ParamBase+0x87>
 825ee46:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825ee49:	8b 40 04             	mov    0x4(%eax),%eax
 825ee4c:	89 44 24 14          	mov    %eax,0x14(%esp)
 825ee50:	c7 44 24 10 e0 85 be 	movl   $0x8be85e0,0x10(%esp)
 825ee57:	08 
 825ee58:	c7 44 24 0c cb 02 00 	movl   $0x2cb,0xc(%esp)
 825ee5f:	00 
 825ee60:	c7 44 24 08 60 9f be 	movl   $0x8be9f60,0x8(%esp)
 825ee67:	08 
 825ee68:	c7 44 24 04 fe 85 be 	movl   $0x8be85fe,0x4(%esp)
 825ee6f:	08 
 825ee70:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 825ee77:	e8 8e 4d 87 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 825ee7c:	b8 cc 02 00 00       	mov    $0x2cc,%eax
 825ee81:	eb 3b                	jmp    825eebe <_ZN26Dispatcher_SaveQuestNotify7processEP5CUserR8MSG_BASER9ParamBase+0xc2>
 825ee83:	8b 45 10             	mov    0x10(%ebp),%eax
 825ee86:	89 45 f0             	mov    %eax,-0x10(%ebp)
 825ee89:	c7 45 f4 28 00 00 00 	movl   $0x28,-0xc(%ebp)
 825ee90:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825ee93:	8d 58 0d             	lea    0xd(%eax),%ebx
 825ee96:	8b 45 0c             	mov    0xc(%ebp),%eax
 825ee99:	89 04 24             	mov    %eax,(%esp)
 825ee9c:	e8 bd bb ee ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 825eea1:	05 f4 75 00 00       	add    $0x75f4,%eax
 825eea6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 825eea9:	89 54 24 08          	mov    %edx,0x8(%esp)
 825eead:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 825eeb1:	89 04 24             	mov    %eax,(%esp)
 825eeb4:	e8 e7 e9 e1 ff       	call   807d8a0 <memcpy@plt>
 825eeb9:	b8 00 00 00 00       	mov    $0x0,%eax
 825eebe:	83 c4 34             	add    $0x34,%esp
 825eec1:	5b                   	pop    %ebx
 825eec2:	5d                   	pop    %ebp
 825eec3:	c3                   	ret

```

```c
// Dispatcher_SaveQuestNotify::process @ 0x825edfc

/* Dispatcher_SaveQuestNotify::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SaveQuestNotify::process
          (Dispatcher_SaveQuestNotify *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      LogManager::logFormat
                (1,"PacketDispatcher_Impl_2.cpp",
                 "virtual int Dispatcher_SaveQuestNotify::process(CUser*, MSG_BASE&, ParamBase&)",
                 0x2cb,"Dispatcher Check_Error No(%d)",*(undefined4 *)(param_3 + 4));
      uVar1 = 0x2cc;
    }
    else {
      iVar2 = CUser::getCurCharacQuestW(param_1);
      memcpy((void *)(iVar2 + 0x75f4),param_2 + 0xd,0x28);
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
// === 0825ed06 Dispatcher_SaveQuestNotify::read  [0x0825ed06-0x825edfb] ===
 825ed06:	55                   	push   %ebp
 825ed07:	89 e5                	mov    %esp,%ebp
 825ed09:	83 ec 28             	sub    $0x28,%esp
 825ed0c:	8b 45 10             	mov    0x10(%ebp),%eax
 825ed0f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 825ed12:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 825ed16:	8d 45 ef             	lea    -0x11(%ebp),%eax
 825ed19:	89 44 24 04          	mov    %eax,0x4(%esp)
 825ed1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 825ed20:	89 04 24             	mov    %eax,(%esp)
 825ed23:	e8 fa e1 32 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 825ed28:	83 f0 01             	xor    $0x1,%eax
 825ed2b:	84 c0                	test   %al,%al
 825ed2d:	74 29                	je     825ed58 <_ZN26Dispatcher_SaveQuestNotify4readER9PacketBufR8MSG_BASE+0x52>
 825ed2f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825ed36:	00 
 825ed37:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825ed3e:	00 
 825ed3f:	c7 44 24 04 c0 9f be 	movl   $0x8be9fc0,0x4(%esp)
 825ed46:	08 
 825ed47:	c7 04 24 b3 02 00 00 	movl   $0x2b3,(%esp)
 825ed4e:	e8 84 1b 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825ed53:	e9 a1 00 00 00       	jmp    825edf9 <_ZN26Dispatcher_SaveQuestNotify4readER9PacketBufR8MSG_BASE+0xf3>
 825ed58:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 825ed5c:	84 c0                	test   %al,%al
 825ed5e:	78 08                	js     825ed68 <_ZN26Dispatcher_SaveQuestNotify4readER9PacketBufR8MSG_BASE+0x62>
 825ed60:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 825ed64:	3c 05                	cmp    $0x5,%al
 825ed66:	7e 26                	jle    825ed8e <_ZN26Dispatcher_SaveQuestNotify4readER9PacketBufR8MSG_BASE+0x88>
 825ed68:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825ed6f:	00 
 825ed70:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825ed77:	00 
 825ed78:	c7 44 24 04 c0 9f be 	movl   $0x8be9fc0,0x4(%esp)
 825ed7f:	08 
 825ed80:	c7 04 24 b6 02 00 00 	movl   $0x2b6,(%esp)
 825ed87:	e8 4b 1b 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825ed8c:	eb 6b                	jmp    825edf9 <_ZN26Dispatcher_SaveQuestNotify4readER9PacketBufR8MSG_BASE+0xf3>
 825ed8e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 825ed95:	eb 4c                	jmp    825ede3 <_ZN26Dispatcher_SaveQuestNotify4readER9PacketBufR8MSG_BASE+0xdd>
 825ed97:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825ed9a:	c1 e0 02             	shl    $0x2,%eax
 825ed9d:	03 45 f0             	add    -0x10(%ebp),%eax
 825eda0:	83 c0 0d             	add    $0xd,%eax
 825eda3:	89 44 24 04          	mov    %eax,0x4(%esp)
 825eda7:	8b 45 0c             	mov    0xc(%ebp),%eax
 825edaa:	89 04 24             	mov    %eax,(%esp)
 825edad:	e8 8e e4 32 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 825edb2:	83 f0 01             	xor    $0x1,%eax
 825edb5:	84 c0                	test   %al,%al
 825edb7:	74 26                	je     825eddf <_ZN26Dispatcher_SaveQuestNotify4readER9PacketBufR8MSG_BASE+0xd9>
 825edb9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825edc0:	00 
 825edc1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825edc8:	00 
 825edc9:	c7 44 24 04 c0 9f be 	movl   $0x8be9fc0,0x4(%esp)
 825edd0:	08 
 825edd1:	c7 04 24 bb 02 00 00 	movl   $0x2bb,(%esp)
 825edd8:	e8 fa 1a 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825eddd:	eb 1a                	jmp    825edf9 <_ZN26Dispatcher_SaveQuestNotify4readER9PacketBufR8MSG_BASE+0xf3>
 825eddf:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 825ede3:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 825ede7:	0f be c0             	movsbl %al,%eax
 825edea:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 825eded:	0f 9f c0             	setg   %al
 825edf0:	84 c0                	test   %al,%al
 825edf2:	75 a3                	jne    825ed97 <_ZN26Dispatcher_SaveQuestNotify4readER9PacketBufR8MSG_BASE+0x91>
 825edf4:	b8 00 00 00 00       	mov    $0x0,%eax
 825edf9:	c9                   	leave
 825edfa:	c3                   	ret
 825edfb:	90                   	nop

```

```c
// Dispatcher_SaveQuestNotify::read @ 0x825ed06

/* Dispatcher_SaveQuestNotify::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SaveQuestNotify::read
          (Dispatcher_SaveQuestNotify *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char local_15;
  MSG_BASE *local_14;
  int local_10;
  
  local_14 = param_2;
  local_15 = '\0';
  cVar1 = PacketBuf::get_byte(param_1,&local_15);
  if (cVar1 == '\x01') {
    if ((local_15 < '\0') || ('\x05' < local_15)) {
      uVar2 = LineFunc(0x2b6,"virtual int Dispatcher_SaveQuestNotify::read(PacketBuf&, MSG_BASE&)",0
                       ,0);
    }
    else {
      for (local_10 = 0; local_10 < local_15; local_10 = local_10 + 1) {
        cVar1 = PacketBuf::get_int(param_1,(uint *)(local_14 + local_10 * 4 + 0xd));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(699,"virtual int Dispatcher_SaveQuestNotify::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
          return uVar2;
        }
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = LineFunc(0x2b3,"virtual int Dispatcher_SaveQuestNotify::read(PacketBuf&, MSG_BASE&)",0,0
                    );
  }
  return uVar2;
}

```

