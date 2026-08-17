# Dispatcher_SaveCharacterOption

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 081cea28 Dispatcher_SaveCharacterOption::check_error  [0x081cea28-0x81cea79] ===
 81cea28:	55                   	push   %ebp
 81cea29:	89 e5                	mov    %esp,%ebp
 81cea2b:	83 ec 18             	sub    $0x18,%esp
 81cea2e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81cea32:	75 07                	jne    81cea3b <_ZN30Dispatcher_SaveCharacterOption11check_errorEP5CUserR8MSG_BASE+0x13>
 81cea34:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81cea39:	eb 3c                	jmp    81cea77 <_ZN30Dispatcher_SaveCharacterOption11check_errorEP5CUserR8MSG_BASE+0x4f>
 81cea3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cea3e:	89 04 24             	mov    %eax,(%esp)
 81cea41:	e8 46 b9 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81cea46:	83 f8 01             	cmp    $0x1,%eax
 81cea49:	0f 9e c0             	setle  %al
 81cea4c:	84 c0                	test   %al,%al
 81cea4e:	74 07                	je     81cea57 <_ZN30Dispatcher_SaveCharacterOption11check_errorEP5CUserR8MSG_BASE+0x2f>
 81cea50:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 81cea55:	eb 20                	jmp    81cea77 <_ZN30Dispatcher_SaveCharacterOption11check_errorEP5CUserR8MSG_BASE+0x4f>
 81cea57:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cea5a:	89 04 24             	mov    %eax,(%esp)
 81cea5d:	e8 ec d1 ef ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81cea62:	85 c0                	test   %eax,%eax
 81cea64:	0f 94 c0             	sete   %al
 81cea67:	84 c0                	test   %al,%al
 81cea69:	74 07                	je     81cea72 <_ZN30Dispatcher_SaveCharacterOption11check_errorEP5CUserR8MSG_BASE+0x4a>
 81cea6b:	b8 fd ff ff ff       	mov    $0xfffffffd,%eax
 81cea70:	eb 05                	jmp    81cea77 <_ZN30Dispatcher_SaveCharacterOption11check_errorEP5CUserR8MSG_BASE+0x4f>
 81cea72:	b8 00 00 00 00       	mov    $0x0,%eax
 81cea77:	c9                   	leave
 81cea78:	c3                   	ret
 81cea79:	90                   	nop

```

```c
// Dispatcher_SaveCharacterOption::check_error @ 0x81cea28

/* Dispatcher_SaveCharacterOption::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_SaveCharacterOption::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 < 2) {
      uVar1 = 0xfffffffe;
    }
    else {
      iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      if (iVar2 == 0) {
        uVar1 = 0xfffffffd;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 081ce97c Dispatcher_SaveCharacterOption::process  [0x081ce97c-0x81cea27] ===
 81ce97c:	55                   	push   %ebp
 81ce97d:	89 e5                	mov    %esp,%ebp
 81ce97f:	83 ec 28             	sub    $0x28,%esp
 81ce982:	8b 45 14             	mov    0x14(%ebp),%eax
 81ce985:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ce988:	8b 45 10             	mov    0x10(%ebp),%eax
 81ce98b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ce98f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce992:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce996:	8b 45 08             	mov    0x8(%ebp),%eax
 81ce999:	89 04 24             	mov    %eax,(%esp)
 81ce99c:	e8 87 00 00 00       	call   81cea28 <_ZN30Dispatcher_SaveCharacterOption11check_errorEP5CUserR8MSG_BASE>
 81ce9a1:	89 c2                	mov    %eax,%edx
 81ce9a3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ce9a6:	89 50 04             	mov    %edx,0x4(%eax)
 81ce9a9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ce9ac:	8b 40 04             	mov    0x4(%eax),%eax
 81ce9af:	85 c0                	test   %eax,%eax
 81ce9b1:	7e 07                	jle    81ce9ba <_ZN30Dispatcher_SaveCharacterOption7processEP5CUserR8MSG_BASER9ParamBase+0x3e>
 81ce9b3:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce9b8:	eb 6c                	jmp    81cea26 <_ZN30Dispatcher_SaveCharacterOption7processEP5CUserR8MSG_BASER9ParamBase+0xaa>
 81ce9ba:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ce9bd:	8b 40 04             	mov    0x4(%eax),%eax
 81ce9c0:	85 c0                	test   %eax,%eax
 81ce9c2:	79 2f                	jns    81ce9f3 <_ZN30Dispatcher_SaveCharacterOption7processEP5CUserR8MSG_BASER9ParamBase+0x77>
 81ce9c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce9c7:	89 04 24             	mov    %eax,(%esp)
 81ce9ca:	e8 9f b9 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81ce9cf:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81ce9d2:	8b 52 04             	mov    0x4(%edx),%edx
 81ce9d5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ce9d9:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ce9dd:	c7 44 24 04 20 43 bd 	movl   $0x8bd4320,0x4(%esp)
 81ce9e4:	08 
 81ce9e5:	c7 04 24 3d 28 00 00 	movl   $0x283d,(%esp)
 81ce9ec:	e8 e6 1e 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ce9f1:	eb 33                	jmp    81cea26 <_ZN30Dispatcher_SaveCharacterOption7processEP5CUserR8MSG_BASER9ParamBase+0xaa>
 81ce9f3:	8b 45 10             	mov    0x10(%ebp),%eax
 81ce9f6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ce9f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce9fc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81cea03:	00 
 81cea04:	89 04 24             	mov    %eax,(%esp)
 81cea07:	e8 86 08 06 00       	call   822f292 <_ZN15CUserCharacInfo19setSaveCharacOptionEb>
 81cea0c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cea0f:	8d 50 11             	lea    0x11(%eax),%edx
 81cea12:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cea15:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cea19:	89 04 24             	mov    %eax,(%esp)
 81cea1c:	e8 8d 05 4c 00       	call   868efae <_ZN15CUserCharacInfo18SetCurCharacOptionER15CharacterOption>
 81cea21:	b8 00 00 00 00       	mov    $0x0,%eax
 81cea26:	c9                   	leave
 81cea27:	c3                   	ret

```

```c
// Dispatcher_SaveCharacterOption::process @ 0x81ce97c

/* Dispatcher_SaveCharacterOption::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SaveCharacterOption::process
          (Dispatcher_SaveCharacterOption *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x283d,
                       "virtual int Dispatcher_SaveCharacterOption::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar2);
    }
    else {
      CUserCharacInfo::setSaveCharacOption((CUserCharacInfo *)param_1,true);
      CUserCharacInfo::SetCurCharacOption
                ((CUserCharacInfo *)param_1,(CharacterOption *)(param_2 + 0x11));
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
// === 081ce8bc Dispatcher_SaveCharacterOption::read  [0x081ce8bc-0x81ce97b] ===
 81ce8bc:	55                   	push   %ebp
 81ce8bd:	89 e5                	mov    %esp,%ebp
 81ce8bf:	83 ec 28             	sub    $0x28,%esp
 81ce8c2:	8b 45 10             	mov    0x10(%ebp),%eax
 81ce8c5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ce8c8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce8cb:	83 c0 0d             	add    $0xd,%eax
 81ce8ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce8d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce8d5:	89 04 24             	mov    %eax,(%esp)
 81ce8d8:	e8 63 e9 3b 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81ce8dd:	83 f0 01             	xor    $0x1,%eax
 81ce8e0:	84 c0                	test   %al,%al
 81ce8e2:	75 0d                	jne    81ce8f1 <_ZN30Dispatcher_SaveCharacterOption4readER9PacketBufR8MSG_BASE+0x35>
 81ce8e4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce8e7:	8b 40 0d             	mov    0xd(%eax),%eax
 81ce8ea:	3d 00 02 00 00       	cmp    $0x200,%eax
 81ce8ef:	76 07                	jbe    81ce8f8 <_ZN30Dispatcher_SaveCharacterOption4readER9PacketBufR8MSG_BASE+0x3c>
 81ce8f1:	b8 01 00 00 00       	mov    $0x1,%eax
 81ce8f6:	eb 05                	jmp    81ce8fd <_ZN30Dispatcher_SaveCharacterOption4readER9PacketBufR8MSG_BASE+0x41>
 81ce8f8:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce8fd:	84 c0                	test   %al,%al
 81ce8ff:	74 26                	je     81ce927 <_ZN30Dispatcher_SaveCharacterOption4readER9PacketBufR8MSG_BASE+0x6b>
 81ce901:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ce908:	00 
 81ce909:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ce910:	00 
 81ce911:	c7 44 24 04 80 43 bd 	movl   $0x8bd4380,0x4(%esp)
 81ce918:	08 
 81ce919:	c7 04 24 29 28 00 00 	movl   $0x2829,(%esp)
 81ce920:	e8 b2 1f 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ce925:	eb 53                	jmp    81ce97a <_ZN30Dispatcher_SaveCharacterOption4readER9PacketBufR8MSG_BASE+0xbe>
 81ce927:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce92a:	8b 40 0d             	mov    0xd(%eax),%eax
 81ce92d:	89 c2                	mov    %eax,%edx
 81ce92f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce932:	83 c0 11             	add    $0x11,%eax
 81ce935:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ce939:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce93d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce940:	89 04 24             	mov    %eax,(%esp)
 81ce943:	e8 6a ea 3b 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 81ce948:	83 f0 01             	xor    $0x1,%eax
 81ce94b:	84 c0                	test   %al,%al
 81ce94d:	74 26                	je     81ce975 <_ZN30Dispatcher_SaveCharacterOption4readER9PacketBufR8MSG_BASE+0xb9>
 81ce94f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ce956:	00 
 81ce957:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ce95e:	00 
 81ce95f:	c7 44 24 04 80 43 bd 	movl   $0x8bd4380,0x4(%esp)
 81ce966:	08 
 81ce967:	c7 04 24 2b 28 00 00 	movl   $0x282b,(%esp)
 81ce96e:	e8 64 1f 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ce973:	eb 05                	jmp    81ce97a <_ZN30Dispatcher_SaveCharacterOption4readER9PacketBufR8MSG_BASE+0xbe>
 81ce975:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce97a:	c9                   	leave
 81ce97b:	c3                   	ret

```

```c
// Dispatcher_SaveCharacterOption::read @ 0x81ce8bc

/* Dispatcher_SaveCharacterOption::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SaveCharacterOption::read
          (Dispatcher_SaveCharacterOption *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xd));
  if ((cVar2 == '\x01') && (*(uint *)(param_2 + 0xd) < 0x201)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = LineFunc(0x2829,
                     "virtual int Dispatcher_SaveCharacterOption::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  else {
    cVar2 = PacketBuf::get_binary(param_1,(char *)(param_2 + 0x11),*(int *)(param_2 + 0xd));
    if (cVar2 == '\x01') {
      uVar3 = 0;
    }
    else {
      uVar3 = LineFunc(0x282b,
                       "virtual int Dispatcher_SaveCharacterOption::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  return uVar3;
}

```

