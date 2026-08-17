# game_master__CMobileRestrictCommand

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084b3c60 game_master::CMobileRestrictCommand::execute  [0x084b3c60-0x84b3d11] ===
 84b3c60:	55                   	push   %ebp
 84b3c61:	89 e5                	mov    %esp,%ebp
 84b3c63:	53                   	push   %ebx
 84b3c64:	83 ec 34             	sub    $0x34,%esp
 84b3c67:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3c6a:	89 04 24             	mov    %eax,(%esp)
 84b3c6d:	e8 48 03 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b3c72:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b3c75:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3c78:	83 c0 08             	add    $0x8,%eax
 84b3c7b:	c7 44 24 04 6e 04 c8 	movl   $0x8c8046e,0x4(%esp)
 84b3c82:	08 
 84b3c83:	89 04 24             	mov    %eax,(%esp)
 84b3c86:	e8 16 cd bc ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 84b3c8b:	84 c0                	test   %al,%al
 84b3c8d:	74 67                	je     84b3cf6 <_ZN11game_master22CMobileRestrictCommand7executeEv+0x96>
 84b3c8f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b3c92:	89 04 24             	mov    %eax,(%esp)
 84b3c95:	e8 84 b1 cb ff       	call   816ee1e <_ZN5CUser17getGarenaAuthDataEv>
 84b3c9a:	8b 55 08             	mov    0x8(%ebp),%edx
 84b3c9d:	8b 52 0c             	mov    0xc(%edx),%edx
 84b3ca0:	88 50 2c             	mov    %dl,0x2c(%eax)
 84b3ca3:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3ca6:	8b 40 0c             	mov    0xc(%eax),%eax
 84b3ca9:	83 f8 01             	cmp    $0x1,%eax
 84b3cac:	75 07                	jne    84b3cb5 <_ZN11game_master22CMobileRestrictCommand7executeEv+0x55>
 84b3cae:	bb 75 04 c8 08       	mov    $0x8c80475,%ebx
 84b3cb3:	eb 05                	jmp    84b3cba <_ZN11game_master22CMobileRestrictCommand7executeEv+0x5a>
 84b3cb5:	bb 79 04 c8 08       	mov    $0x8c80479,%ebx
 84b3cba:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84b3cc1:	00 
 84b3cc2:	c7 44 24 08 3d 18 00 	movl   $0x183d,0x8(%esp)
 84b3cc9:	00 
 84b3cca:	c7 44 24 04 00 12 c8 	movl   $0x8c81200,0x4(%esp)
 84b3cd1:	08 
 84b3cd2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84b3cd5:	89 04 24             	mov    %eax,(%esp)
 84b3cd8:	e8 3b ba 09 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84b3cdd:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84b3ce1:	c7 44 24 04 7c 04 c8 	movl   $0x8c8047c,0x4(%esp)
 84b3ce8:	08 
 84b3ce9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84b3cec:	89 04 24             	mov    %eax,(%esp)
 84b3cef:	e8 94 ba 09 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84b3cf4:	eb 16                	jmp    84b3d0c <_ZN11game_master22CMobileRestrictCommand7executeEv+0xac>
 84b3cf6:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3cf9:	83 c0 08             	add    $0x8,%eax
 84b3cfc:	c7 44 24 04 ae 04 c8 	movl   $0x8c804ae,0x4(%esp)
 84b3d03:	08 
 84b3d04:	89 04 24             	mov    %eax,(%esp)
 84b3d07:	e8 95 cc bc ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 84b3d0c:	83 c4 34             	add    $0x34,%esp
 84b3d0f:	5b                   	pop    %ebx
 84b3d10:	5d                   	pop    %ebp
 84b3d11:	c3                   	ret

```

```c
// game_master::CMobileRestrictCommand::execute @ 0x84b3c60

/* game_master::CMobileRestrictCommand::execute() */

void __thiscall game_master::CMobileRestrictCommand::execute(CMobileRestrictCommand *this)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  cMyTrace local_20 [16];
  CUser *local_10;
  
  local_10 = (CUser *)CCommand::GetUser((CCommand *)this);
  bVar1 = std::operator==((string *)(this + 8),"mobile");
  if (bVar1) {
    iVar2 = CUser::getGarenaAuthData(local_10);
    *(char *)(iVar2 + 0x2c) = (char)*(undefined4 *)(this + 0xc);
    if (*(int *)(this + 0xc) == 1) {
      puVar3 = &DAT_08c80475;
    }
    else {
      puVar3 = &DAT_08c80479;
    }
    cMyTrace::cMyTrace(local_20,"virtual void game_master::CMobileRestrictCommand::execute()",0x183d
                       ,0);
    cMyTrace::operator()(local_20,"[GMCommand] Set mobile restricted. mobile auth:%s",puVar3);
  }
  else {
    std::operator==((string *)(this + 8),"character");
  }
  return;
}

```

---

## parse

```asm
// === 084b3bdc game_master::CMobileRestrictCommand::parse  [0x084b3bdc-0x84b3c5f] ===
 84b3bdc:	55                   	push   %ebp
 84b3bdd:	89 e5                	mov    %esp,%ebp
 84b3bdf:	83 ec 18             	sub    $0x18,%esp
 84b3be2:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3be5:	8b 40 04             	mov    0x4(%eax),%eax
 84b3be8:	85 c0                	test   %eax,%eax
 84b3bea:	74 70                	je     84b3c5c <_ZN11game_master22CMobileRestrictCommand5parseEv+0x80>
 84b3bec:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3bef:	8b 40 04             	mov    0x4(%eax),%eax
 84b3bf2:	05 1c 01 00 00       	add    $0x11c,%eax
 84b3bf7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84b3bfe:	00 
 84b3bff:	89 04 24             	mov    %eax,(%esp)
 84b3c02:	e8 c7 3e d8 ff       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 84b3c07:	8b 55 08             	mov    0x8(%ebp),%edx
 84b3c0a:	83 c2 08             	add    $0x8,%edx
 84b3c0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b3c11:	89 14 24             	mov    %edx,(%esp)
 84b3c14:	e8 e7 40 25 00       	call   8707d00 <_ZNSsaSERKSs>
 84b3c19:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3c1c:	8b 40 04             	mov    0x4(%eax),%eax
 84b3c1f:	05 1c 01 00 00       	add    $0x11c,%eax
 84b3c24:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84b3c2b:	00 
 84b3c2c:	89 04 24             	mov    %eax,(%esp)
 84b3c2f:	e8 9a 3e d8 ff       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 84b3c34:	89 04 24             	mov    %eax,(%esp)
 84b3c37:	e8 b4 28 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84b3c3c:	89 04 24             	mov    %eax,(%esp)
 84b3c3f:	e8 b6 54 c5 ff       	call   81090fa <_Z14StringToNumberPKc>
 84b3c44:	85 c0                	test   %eax,%eax
 84b3c46:	74 07                	je     84b3c4f <_ZN11game_master22CMobileRestrictCommand5parseEv+0x73>
 84b3c48:	b8 01 00 00 00       	mov    $0x1,%eax
 84b3c4d:	eb 05                	jmp    84b3c54 <_ZN11game_master22CMobileRestrictCommand5parseEv+0x78>
 84b3c4f:	b8 00 00 00 00       	mov    $0x0,%eax
 84b3c54:	8b 55 08             	mov    0x8(%ebp),%edx
 84b3c57:	89 42 0c             	mov    %eax,0xc(%edx)
 84b3c5a:	eb 01                	jmp    84b3c5d <_ZN11game_master22CMobileRestrictCommand5parseEv+0x81>
 84b3c5c:	90                   	nop
 84b3c5d:	c9                   	leave
 84b3c5e:	c3                   	ret
 84b3c5f:	90                   	nop

```

```c
// game_master::CMobileRestrictCommand::parse @ 0x84b3bdc

/* game_master::CMobileRestrictCommand::parse() */

void __thiscall game_master::CMobileRestrictCommand::parse(CMobileRestrictCommand *this)

{
  string *psVar1;
  char *pcVar2;
  int iVar3;
  
  if (*(int *)(this + 4) != 0) {
    psVar1 = (string *)
             std::vector<std::string,std::allocator<std::string>>::operator[]
                       ((vector<std::string,std::allocator<std::string>> *)
                        (*(int *)(this + 4) + 0x11c),1);
    std::string::operator=((string *)(this + 8),psVar1);
    psVar1 = (string *)
             std::vector<std::string,std::allocator<std::string>>::operator[]
                       ((vector<std::string,std::allocator<std::string>> *)
                        (*(int *)(this + 4) + 0x11c),2);
    pcVar2 = (char *)std::string::c_str(psVar1);
    iVar3 = StringToNumber(pcVar2);
    *(uint *)(this + 0xc) = (uint)(iVar3 != 0);
  }
  return;
}

```

