# Dispatcher_MailBox_Extract

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081cceea Dispatcher_MailBox_Extract::check_error  [0x081cceea-0x81ccf93] ===
 81cceea:	55                   	push   %ebp
 81cceeb:	89 e5                	mov    %esp,%ebp
 81cceed:	83 ec 28             	sub    $0x28,%esp
 81ccef0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ccef3:	89 04 24             	mov    %eax,(%esp)
 81ccef6:	e8 91 d4 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ccefb:	83 f8 03             	cmp    $0x3,%eax
 81ccefe:	75 0f                	jne    81ccf0f <_ZN26Dispatcher_MailBox_Extract11check_errorEP5CUserR8MSG_BASE+0x25>
 81ccf00:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ccf03:	89 04 24             	mov    %eax,(%esp)
 81ccf06:	e8 27 35 f5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81ccf0b:	85 c0                	test   %eax,%eax
 81ccf0d:	75 07                	jne    81ccf16 <_ZN26Dispatcher_MailBox_Extract11check_errorEP5CUserR8MSG_BASE+0x2c>
 81ccf0f:	b8 01 00 00 00       	mov    $0x1,%eax
 81ccf14:	eb 05                	jmp    81ccf1b <_ZN26Dispatcher_MailBox_Extract11check_errorEP5CUserR8MSG_BASE+0x31>
 81ccf16:	b8 00 00 00 00       	mov    $0x0,%eax
 81ccf1b:	84 c0                	test   %al,%al
 81ccf1d:	74 07                	je     81ccf26 <_ZN26Dispatcher_MailBox_Extract11check_errorEP5CUserR8MSG_BASE+0x3c>
 81ccf1f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81ccf24:	eb 6c                	jmp    81ccf92 <_ZN26Dispatcher_MailBox_Extract11check_errorEP5CUserR8MSG_BASE+0xa8>
 81ccf26:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81ccf2a:	74 0f                	je     81ccf3b <_ZN26Dispatcher_MailBox_Extract11check_errorEP5CUserR8MSG_BASE+0x51>
 81ccf2c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ccf2f:	89 04 24             	mov    %eax,(%esp)
 81ccf32:	e8 c7 d3 f0 ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 81ccf37:	84 c0                	test   %al,%al
 81ccf39:	74 07                	je     81ccf42 <_ZN26Dispatcher_MailBox_Extract11check_errorEP5CUserR8MSG_BASE+0x58>
 81ccf3b:	b8 01 00 00 00       	mov    $0x1,%eax
 81ccf40:	eb 05                	jmp    81ccf47 <_ZN26Dispatcher_MailBox_Extract11check_errorEP5CUserR8MSG_BASE+0x5d>
 81ccf42:	b8 00 00 00 00       	mov    $0x0,%eax
 81ccf47:	84 c0                	test   %al,%al
 81ccf49:	74 07                	je     81ccf52 <_ZN26Dispatcher_MailBox_Extract11check_errorEP5CUserR8MSG_BASE+0x68>
 81ccf4b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81ccf50:	eb 40                	jmp    81ccf92 <_ZN26Dispatcher_MailBox_Extract11check_errorEP5CUserR8MSG_BASE+0xa8>
 81ccf52:	8b 45 10             	mov    0x10(%ebp),%eax
 81ccf55:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ccf58:	e8 8b 7c 3f 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 81ccf5d:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ccf60:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ccf64:	89 04 24             	mov    %eax,(%esp)
 81ccf67:	e8 f2 dd 3f 00       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 81ccf6c:	84 c0                	test   %al,%al
 81ccf6e:	74 07                	je     81ccf77 <_ZN26Dispatcher_MailBox_Extract11check_errorEP5CUserR8MSG_BASE+0x8d>
 81ccf70:	b8 3c 00 00 00       	mov    $0x3c,%eax
 81ccf75:	eb 1b                	jmp    81ccf92 <_ZN26Dispatcher_MailBox_Extract11check_errorEP5CUserR8MSG_BASE+0xa8>
 81ccf77:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ccf7a:	89 04 24             	mov    %eax,(%esp)
 81ccf7d:	e8 7c d3 f0 ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 81ccf82:	84 c0                	test   %al,%al
 81ccf84:	74 07                	je     81ccf8d <_ZN26Dispatcher_MailBox_Extract11check_errorEP5CUserR8MSG_BASE+0xa3>
 81ccf86:	b8 da 00 00 00       	mov    $0xda,%eax
 81ccf8b:	eb 05                	jmp    81ccf92 <_ZN26Dispatcher_MailBox_Extract11check_errorEP5CUserR8MSG_BASE+0xa8>
 81ccf8d:	b8 00 00 00 00       	mov    $0x0,%eax
 81ccf92:	c9                   	leave
 81ccf93:	c3                   	ret

```

```c
// Dispatcher_MailBox_Extract::check_error @ 0x81cceea

/* Dispatcher_MailBox_Extract::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_MailBox_Extract::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CPrivateStoreMgr *this;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    if ((param_2 == (MSG_BASE *)0x0) ||
       (cVar2 = CUser::CheckInTrade((CUser *)param_2), cVar2 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar4 = 0xffffffff;
    }
    else {
      this = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
      cVar2 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this,(CUser *)param_2);
      if (cVar2 == '\0') {
        cVar2 = CUser::CheckInTrade((CUser *)param_2);
        if (cVar2 == '\0') {
          uVar4 = 0;
        }
        else {
          uVar4 = 0xda;
        }
      }
      else {
        uVar4 = 0x3c;
      }
    }
    return uVar4;
  }
  return 0xffffffff;
}

```

---

## process

```asm
// === 081cce50 Dispatcher_MailBox_Extract::process  [0x081cce50-0x81ccee9] ===
 81cce50:	55                   	push   %ebp
 81cce51:	89 e5                	mov    %esp,%ebp
 81cce53:	83 ec 28             	sub    $0x28,%esp
 81cce56:	8b 45 14             	mov    0x14(%ebp),%eax
 81cce59:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cce5c:	8b 45 10             	mov    0x10(%ebp),%eax
 81cce5f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cce63:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cce66:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cce6a:	8b 45 08             	mov    0x8(%ebp),%eax
 81cce6d:	89 04 24             	mov    %eax,(%esp)
 81cce70:	e8 75 00 00 00       	call   81cceea <_ZN26Dispatcher_MailBox_Extract11check_errorEP5CUserR8MSG_BASE>
 81cce75:	89 c2                	mov    %eax,%edx
 81cce77:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cce7a:	89 50 04             	mov    %edx,0x4(%eax)
 81cce7d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cce80:	8b 40 04             	mov    0x4(%eax),%eax
 81cce83:	85 c0                	test   %eax,%eax
 81cce85:	7e 07                	jle    81cce8e <_ZN26Dispatcher_MailBox_Extract7processEP5CUserR8MSG_BASER9ParamBase+0x3e>
 81cce87:	b8 00 00 00 00       	mov    $0x0,%eax
 81cce8c:	eb 59                	jmp    81ccee7 <_ZN26Dispatcher_MailBox_Extract7processEP5CUserR8MSG_BASER9ParamBase+0x97>
 81cce8e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cce91:	8b 40 04             	mov    0x4(%eax),%eax
 81cce94:	85 c0                	test   %eax,%eax
 81cce96:	79 2f                	jns    81ccec7 <_ZN26Dispatcher_MailBox_Extract7processEP5CUserR8MSG_BASER9ParamBase+0x77>
 81cce98:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cce9b:	89 04 24             	mov    %eax,(%esp)
 81cce9e:	e8 cb d4 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81ccea3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81ccea6:	8b 52 04             	mov    0x4(%edx),%edx
 81ccea9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ccead:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cceb1:	c7 44 24 04 80 4a bd 	movl   $0x8bd4a80,0x4(%esp)
 81cceb8:	08 
 81cceb9:	c7 04 24 5d 24 00 00 	movl   $0x245d,(%esp)
 81ccec0:	e8 12 3a 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ccec5:	eb 20                	jmp    81ccee7 <_ZN26Dispatcher_MailBox_Extract7processEP5CUserR8MSG_BASER9ParamBase+0x97>
 81ccec7:	8b 45 10             	mov    0x10(%ebp),%eax
 81cceca:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ccecd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cced0:	8b 40 0d             	mov    0xd(%eax),%eax
 81cced3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cced7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cceda:	89 04 24             	mov    %eax,(%esp)
 81ccedd:	e8 fc 7a 38 00       	call   85549de <_ZN8WongWork14CMailBoxHelper10GetPackegeEP5CUserj>
 81ccee2:	b8 00 00 00 00       	mov    $0x0,%eax
 81ccee7:	c9                   	leave
 81ccee8:	c3                   	ret
 81ccee9:	90                   	nop

```

```c
// Dispatcher_MailBox_Extract::process @ 0x81cce50

/* Dispatcher_MailBox_Extract::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_MailBox_Extract::process
          (Dispatcher_MailBox_Extract *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x245d,
                       "virtual int Dispatcher_MailBox_Extract::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar2);
    }
    else {
      WongWork::CMailBoxHelper::GetPackege(param_1,*(uint *)(param_2 + 0xd));
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
// === 081ccdfa Dispatcher_MailBox_Extract::read  [0x081ccdfa-0x81cce4f] ===
 81ccdfa:	55                   	push   %ebp
 81ccdfb:	89 e5                	mov    %esp,%ebp
 81ccdfd:	83 ec 28             	sub    $0x28,%esp
 81cce00:	8b 45 10             	mov    0x10(%ebp),%eax
 81cce03:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cce06:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cce09:	83 c0 0d             	add    $0xd,%eax
 81cce0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cce10:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cce13:	89 04 24             	mov    %eax,(%esp)
 81cce16:	e8 25 04 3c 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81cce1b:	83 f0 01             	xor    $0x1,%eax
 81cce1e:	84 c0                	test   %al,%al
 81cce20:	74 26                	je     81cce48 <_ZN26Dispatcher_MailBox_Extract4readER9PacketBufR8MSG_BASE+0x4e>
 81cce22:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cce29:	00 
 81cce2a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cce31:	00 
 81cce32:	c7 44 24 04 e0 4a bd 	movl   $0x8bd4ae0,0x4(%esp)
 81cce39:	08 
 81cce3a:	c7 04 24 4c 24 00 00 	movl   $0x244c,(%esp)
 81cce41:	e8 91 3a 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cce46:	eb 05                	jmp    81cce4d <_ZN26Dispatcher_MailBox_Extract4readER9PacketBufR8MSG_BASE+0x53>
 81cce48:	b8 00 00 00 00       	mov    $0x0,%eax
 81cce4d:	c9                   	leave
 81cce4e:	c3                   	ret
 81cce4f:	90                   	nop

```

```c
// Dispatcher_MailBox_Extract::read @ 0x81ccdfa

/* Dispatcher_MailBox_Extract::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_MailBox_Extract::read
          (Dispatcher_MailBox_Extract *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x244c,"virtual int Dispatcher_MailBox_Extract::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081ccf94 Dispatcher_MailBox_Extract::send  [0x081ccf94-0x81ccfdb] ===
 81ccf94:	55                   	push   %ebp
 81ccf95:	89 e5                	mov    %esp,%ebp
 81ccf97:	83 ec 28             	sub    $0x28,%esp
 81ccf9a:	8b 45 10             	mov    0x10(%ebp),%eax
 81ccf9d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ccfa0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ccfa3:	8b 40 04             	mov    0x4(%eax),%eax
 81ccfa6:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81ccfab:	74 2c                	je     81ccfd9 <_ZN26Dispatcher_MailBox_Extract4sendEP5CUserR9ParamBase+0x45>
 81ccfad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ccfb0:	8b 40 04             	mov    0x4(%eax),%eax
 81ccfb3:	85 c0                	test   %eax,%eax
 81ccfb5:	74 23                	je     81ccfda <_ZN26Dispatcher_MailBox_Extract4sendEP5CUserR9ParamBase+0x46>
 81ccfb7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ccfba:	8b 40 04             	mov    0x4(%eax),%eax
 81ccfbd:	0f b6 c0             	movzbl %al,%eax
 81ccfc0:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ccfc4:	c7 44 24 04 62 00 00 	movl   $0x62,0x4(%esp)
 81ccfcb:	00 
 81ccfcc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ccfcf:	89 04 24             	mov    %eax,(%esp)
 81ccfd2:	e8 6b ef 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81ccfd7:	eb 01                	jmp    81ccfda <_ZN26Dispatcher_MailBox_Extract4sendEP5CUserR9ParamBase+0x46>
 81ccfd9:	90                   	nop
 81ccfda:	c9                   	leave
 81ccfdb:	c3                   	ret

```

```c
// Dispatcher_MailBox_Extract::send @ 0x81ccf94

/* Dispatcher_MailBox_Extract::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_MailBox_Extract::send(Dispatcher_MailBox_Extract *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,0x62,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

