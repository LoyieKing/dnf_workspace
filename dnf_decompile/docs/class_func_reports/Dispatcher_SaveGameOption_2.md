# Dispatcher_SaveGameOption_2

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 081cf050 Dispatcher_SaveGameOption_2::check_error  [0x081cf050-0x81cf0a5] ===
 81cf050:	55                   	push   %ebp
 81cf051:	89 e5                	mov    %esp,%ebp
 81cf053:	83 ec 18             	sub    $0x18,%esp
 81cf056:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81cf05a:	75 26                	jne    81cf082 <_ZN27Dispatcher_SaveGameOption_211check_errorEP5CUserR8MSG_BASE+0x32>
 81cf05c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cf063:	00 
 81cf064:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cf06b:	00 
 81cf06c:	c7 44 24 04 e0 41 bd 	movl   $0x8bd41e0,0x4(%esp)
 81cf073:	08 
 81cf074:	c7 04 24 fa 28 00 00 	movl   $0x28fa,(%esp)
 81cf07b:	e8 57 18 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cf080:	eb 21                	jmp    81cf0a3 <_ZN27Dispatcher_SaveGameOption_211check_errorEP5CUserR8MSG_BASE+0x53>
 81cf082:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf085:	89 04 24             	mov    %eax,(%esp)
 81cf088:	e8 ff b2 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81cf08d:	83 f8 01             	cmp    $0x1,%eax
 81cf090:	0f 9e c0             	setle  %al
 81cf093:	84 c0                	test   %al,%al
 81cf095:	74 07                	je     81cf09e <_ZN27Dispatcher_SaveGameOption_211check_errorEP5CUserR8MSG_BASE+0x4e>
 81cf097:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81cf09c:	eb 05                	jmp    81cf0a3 <_ZN27Dispatcher_SaveGameOption_211check_errorEP5CUserR8MSG_BASE+0x53>
 81cf09e:	b8 00 00 00 00       	mov    $0x0,%eax
 81cf0a3:	c9                   	leave
 81cf0a4:	c3                   	ret
 81cf0a5:	90                   	nop

```

```c
// Dispatcher_SaveGameOption_2::check_error @ 0x81cf050

/* Dispatcher_SaveGameOption_2::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_SaveGameOption_2::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = LineFunc(0x28fa,"int Dispatcher_SaveGameOption_2::check_error(CUser*, MSG_BASE&)",0,0);
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 < 2) {
      uVar1 = 0xffffffff;
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
// === 081cee64 Dispatcher_SaveGameOption_2::process  [0x081cee64-0x81cf04f] ===
 81cee64:	55                   	push   %ebp
 81cee65:	89 e5                	mov    %esp,%ebp
 81cee67:	56                   	push   %esi
 81cee68:	53                   	push   %ebx
 81cee69:	83 ec 30             	sub    $0x30,%esp
 81cee6c:	8b 45 10             	mov    0x10(%ebp),%eax
 81cee6f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cee73:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cee76:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cee7a:	8b 45 08             	mov    0x8(%ebp),%eax
 81cee7d:	89 04 24             	mov    %eax,(%esp)
 81cee80:	e8 cb 01 00 00       	call   81cf050 <_ZN27Dispatcher_SaveGameOption_211check_errorEP5CUserR8MSG_BASE>
 81cee85:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81cee88:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81cee8c:	7e 08                	jle    81cee96 <_ZN27Dispatcher_SaveGameOption_27processEP5CUserR8MSG_BASER9ParamBase+0x32>
 81cee8e:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 81cee91:	e9 b0 01 00 00       	jmp    81cf046 <_ZN27Dispatcher_SaveGameOption_27processEP5CUserR8MSG_BASER9ParamBase+0x1e2>
 81cee96:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81cee9a:	79 0a                	jns    81ceea6 <_ZN27Dispatcher_SaveGameOption_27processEP5CUserR8MSG_BASER9ParamBase+0x42>
 81cee9c:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 81ceea1:	e9 a0 01 00 00       	jmp    81cf046 <_ZN27Dispatcher_SaveGameOption_27processEP5CUserR8MSG_BASER9ParamBase+0x1e2>
 81ceea6:	8b 45 10             	mov    0x10(%ebp),%eax
 81ceea9:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81ceeac:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ceeaf:	89 04 24             	mov    %eax,(%esp)
 81ceeb2:	e8 97 0d 06 00       	call   822fc4e <_ZN5CUser16GetGameOptionRefEv>
 81ceeb7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81ceeba:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ceebd:	89 04 24             	mov    %eax,(%esp)
 81ceec0:	e8 5b f0 f2 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81ceec5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ceec9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ceecc:	89 04 24             	mov    %eax,(%esp)
 81ceecf:	e8 1e 40 4c 00       	call   8692ef2 <_ZN5CUser19GetCharacHotKeyTypeEi>
 81ceed4:	88 45 f3             	mov    %al,-0xd(%ebp)
 81ceed7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81ceeda:	8d 50 11             	lea    0x11(%eax),%edx
 81ceedd:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 81ceee1:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ceee5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ceee9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ceeec:	89 04 24             	mov    %eax,(%esp)
 81ceeef:	e8 ac 7e 2e 00       	call   84b6da0 <_ZN11CGameOption21IsHotKeyOptionChangedEhR13CHotkeyOption>
 81ceef4:	83 f0 01             	xor    $0x1,%eax
 81ceef7:	84 c0                	test   %al,%al
 81ceef9:	74 0a                	je     81cef05 <_ZN27Dispatcher_SaveGameOption_27processEP5CUserR8MSG_BASER9ParamBase+0xa1>
 81ceefb:	bb 00 00 00 00       	mov    $0x0,%ebx
 81cef00:	e9 41 01 00 00       	jmp    81cf046 <_ZN27Dispatcher_SaveGameOption_27processEP5CUserR8MSG_BASER9ParamBase+0x1e2>
 81cef05:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81cef08:	8d 50 11             	lea    0x11(%eax),%edx
 81cef0b:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 81cef0f:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cef13:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cef17:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cef1a:	89 04 24             	mov    %eax,(%esp)
 81cef1d:	e8 ce 7d 2e 00       	call   84b6cf0 <_ZN11CGameOption15SetHotKeyOptionEhR13CHotkeyOption>
 81cef22:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81cef27:	c7 44 24 08 e1 28 00 	movl   $0x28e1,0x8(%esp)
 81cef2e:	00 
 81cef2f:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81cef36:	08 
 81cef37:	89 04 24             	mov    %eax,(%esp)
 81cef3a:	e8 47 0b 0c 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81cef3f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81cef46:	00 
 81cef47:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cef4b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81cef4e:	89 04 24             	mov    %eax,(%esp)
 81cef51:	e8 d0 9c ef ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81cef56:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81cef59:	89 04 24             	mov    %eax,(%esp)
 81cef5c:	e8 e5 9c ef ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81cef61:	c7 44 24 04 31 01 00 	movl   $0x131,0x4(%esp)
 81cef68:	00 
 81cef69:	89 04 24             	mov    %eax,(%esp)
 81cef6c:	e8 e5 9c ef ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81cef71:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cef74:	89 04 24             	mov    %eax,(%esp)
 81cef77:	e8 1a 9d ef ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81cef7c:	89 c3                	mov    %eax,%ebx
 81cef7e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81cef81:	89 04 24             	mov    %eax,(%esp)
 81cef84:	e8 bd 9c ef ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81cef89:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cef8d:	89 04 24             	mov    %eax,(%esp)
 81cef90:	e8 c1 9c ef ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81cef95:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81cef98:	89 04 24             	mov    %eax,(%esp)
 81cef9b:	e8 ae 9c ef ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81cefa0:	89 04 24             	mov    %eax,(%esp)
 81cefa3:	e8 0c 7f 06 00       	call   8236eb4 <_ZN12CStreamGuard11GetInBufferI29SIG_LOAD_CHARAC_HOTKEY_OPTIONEEPT_v>
 81cefa8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cefab:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cefae:	89 04 24             	mov    %eax,(%esp)
 81cefb1:	e8 b8 b3 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cefb6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cefb9:	89 02                	mov    %eax,(%edx)
 81cefbb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cefbe:	89 04 24             	mov    %eax,(%esp)
 81cefc1:	e8 5a ef f2 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81cefc6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cefca:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cefcd:	89 04 24             	mov    %eax,(%esp)
 81cefd0:	e8 1d 3f 4c 00       	call   8692ef2 <_ZN5CUser19GetCharacHotKeyTypeEi>
 81cefd5:	89 c2                	mov    %eax,%edx
 81cefd7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cefda:	88 50 04             	mov    %dl,0x4(%eax)
 81cefdd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81cefe0:	8d 50 11             	lea    0x11(%eax),%edx
 81cefe3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cefe6:	83 c0 05             	add    $0x5,%eax
 81cefe9:	c7 44 24 08 bc 00 00 	movl   $0xbc,0x8(%esp)
 81ceff0:	00 
 81ceff1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ceff5:	89 04 24             	mov    %eax,(%esp)
 81ceff8:	e8 a3 e8 ea ff       	call   807d8a0 <memcpy@plt>
 81ceffd:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81cf002:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81cf005:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cf009:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81cf010:	00 
 81cf011:	89 04 24             	mov    %eax,(%esp)
 81cf014:	e8 c5 1f 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81cf019:	bb 00 00 00 00       	mov    $0x0,%ebx
 81cf01e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81cf021:	89 04 24             	mov    %eax,(%esp)
 81cf024:	e8 a9 d8 44 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81cf029:	eb 1b                	jmp    81cf046 <_ZN27Dispatcher_SaveGameOption_27processEP5CUserR8MSG_BASER9ParamBase+0x1e2>
 81cf02b:	89 d3                	mov    %edx,%ebx
 81cf02d:	89 c6                	mov    %eax,%esi
 81cf02f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81cf032:	89 04 24             	mov    %eax,(%esp)
 81cf035:	e8 98 d8 44 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81cf03a:	89 f0                	mov    %esi,%eax
 81cf03c:	89 da                	mov    %ebx,%edx
 81cf03e:	89 04 24             	mov    %eax,(%esp)
 81cf041:	e8 0a 47 91 00       	call   8ae3750 <_Unwind_Resume>
 81cf046:	89 d8                	mov    %ebx,%eax
 81cf048:	83 c4 30             	add    $0x30,%esp
 81cf04b:	5b                   	pop    %ebx
 81cf04c:	5e                   	pop    %esi
 81cf04d:	5d                   	pop    %ebp
 81cf04e:	c3                   	ret
 81cf04f:	90                   	nop

```

```c
// Dispatcher_SaveGameOption_2::process @ 0x81cee64

/* Dispatcher_SaveGameOption_2::process(CUser*, MSG_BASE&, ParamBase&) */

int Dispatcher_SaveGameOption_2::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  SIG_LOAD_CHARAC_HOTKEY_OPTION SVar2;
  int iVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  undefined4 uVar6;
  CStreamGuard local_28 [8];
  int local_20;
  ParamBase *local_1c;
  CGameOption *local_18;
  uchar local_11;
  SIG_LOAD_CHARAC_HOTKEY_OPTION *local_10;
  
  iVar3 = check_error(param_1,param_2);
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      iVar3 = -1;
    }
    else {
      local_1c = param_3;
      local_20 = iVar3;
      local_18 = (CGameOption *)CUser::GetGameOptionRef((CUser *)param_2);
      iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_2);
      local_11 = CUser::GetCharacHotKeyType((CUser *)param_2,iVar3);
      cVar1 = CGameOption::IsHotKeyOptionChanged
                        (local_18,local_11,(CHotkeyOption *)(local_1c + 0x11));
      if (cVar1 == '\x01') {
        CGameOption::SetHotKeyOption(local_18,local_11,(CHotkeyOption *)(local_1c + 0x11));
        pSVar4 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x28e1)
        ;
        CStreamGuard::CStreamGuard(local_28,pSVar4,true);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 081cef6c to 081cf018 has its CatchHandler @ 081cf02b */
        CStreamGuard::operator<<(pCVar5,0x131);
        iVar3 = CUser::GetUID((CUser *)param_2);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_28);
        CStreamGuard::operator<<(pCVar5,iVar3);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_28);
        local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_CHARAC_HOTKEY_OPTION>(pCVar5);
        uVar6 = CUser::get_acc_id((CUser *)param_2);
        *(undefined4 *)local_10 = uVar6;
        iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_2);
        SVar2 = (SIG_LOAD_CHARAC_HOTKEY_OPTION)CUser::GetCharacHotKeyType((CUser *)param_2,iVar3);
        local_10[4] = SVar2;
        memcpy(local_10 + 5,local_1c + 0x11,0xbc);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_28);
        iVar3 = 0;
        CStreamGuard::~CStreamGuard(local_28);
      }
      else {
        iVar3 = 0;
      }
    }
  }
  return iVar3;
}

```

---

## read

```asm
// === 081ceda4 Dispatcher_SaveGameOption_2::read  [0x081ceda4-0x81cee63] ===
 81ceda4:	55                   	push   %ebp
 81ceda5:	89 e5                	mov    %esp,%ebp
 81ceda7:	83 ec 28             	sub    $0x28,%esp
 81cedaa:	8b 45 10             	mov    0x10(%ebp),%eax
 81cedad:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cedb0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cedb3:	83 c0 0d             	add    $0xd,%eax
 81cedb6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cedba:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cedbd:	89 04 24             	mov    %eax,(%esp)
 81cedc0:	e8 7b e4 3b 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81cedc5:	83 f0 01             	xor    $0x1,%eax
 81cedc8:	84 c0                	test   %al,%al
 81cedca:	75 0d                	jne    81cedd9 <_ZN27Dispatcher_SaveGameOption_24readER9PacketBufR8MSG_BASE+0x35>
 81cedcc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cedcf:	8b 40 0d             	mov    0xd(%eax),%eax
 81cedd2:	3d bc 00 00 00       	cmp    $0xbc,%eax
 81cedd7:	76 07                	jbe    81cede0 <_ZN27Dispatcher_SaveGameOption_24readER9PacketBufR8MSG_BASE+0x3c>
 81cedd9:	b8 01 00 00 00       	mov    $0x1,%eax
 81cedde:	eb 05                	jmp    81cede5 <_ZN27Dispatcher_SaveGameOption_24readER9PacketBufR8MSG_BASE+0x41>
 81cede0:	b8 00 00 00 00       	mov    $0x0,%eax
 81cede5:	84 c0                	test   %al,%al
 81cede7:	74 26                	je     81cee0f <_ZN27Dispatcher_SaveGameOption_24readER9PacketBufR8MSG_BASE+0x6b>
 81cede9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cedf0:	00 
 81cedf1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cedf8:	00 
 81cedf9:	c7 44 24 04 20 42 bd 	movl   $0x8bd4220,0x4(%esp)
 81cee00:	08 
 81cee01:	c7 04 24 bc 28 00 00 	movl   $0x28bc,(%esp)
 81cee08:	e8 ca 1a 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cee0d:	eb 53                	jmp    81cee62 <_ZN27Dispatcher_SaveGameOption_24readER9PacketBufR8MSG_BASE+0xbe>
 81cee0f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cee12:	8b 40 0d             	mov    0xd(%eax),%eax
 81cee15:	89 c2                	mov    %eax,%edx
 81cee17:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cee1a:	83 c0 11             	add    $0x11,%eax
 81cee1d:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cee21:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cee25:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cee28:	89 04 24             	mov    %eax,(%esp)
 81cee2b:	e8 82 e5 3b 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 81cee30:	83 f0 01             	xor    $0x1,%eax
 81cee33:	84 c0                	test   %al,%al
 81cee35:	74 26                	je     81cee5d <_ZN27Dispatcher_SaveGameOption_24readER9PacketBufR8MSG_BASE+0xb9>
 81cee37:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cee3e:	00 
 81cee3f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cee46:	00 
 81cee47:	c7 44 24 04 20 42 bd 	movl   $0x8bd4220,0x4(%esp)
 81cee4e:	08 
 81cee4f:	c7 04 24 bd 28 00 00 	movl   $0x28bd,(%esp)
 81cee56:	e8 7c 1a 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cee5b:	eb 05                	jmp    81cee62 <_ZN27Dispatcher_SaveGameOption_24readER9PacketBufR8MSG_BASE+0xbe>
 81cee5d:	b8 00 00 00 00       	mov    $0x0,%eax
 81cee62:	c9                   	leave
 81cee63:	c3                   	ret

```

```c
// Dispatcher_SaveGameOption_2::read @ 0x81ceda4

/* Dispatcher_SaveGameOption_2::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SaveGameOption_2::read
          (Dispatcher_SaveGameOption_2 *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xd));
  if ((cVar2 == '\x01') && (*(uint *)(param_2 + 0xd) < 0xbd)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = LineFunc(0x28bc,"virtual int Dispatcher_SaveGameOption_2::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  else {
    cVar2 = PacketBuf::get_binary(param_1,(char *)(param_2 + 0x11),*(int *)(param_2 + 0xd));
    if (cVar2 == '\x01') {
      uVar3 = 0;
    }
    else {
      uVar3 = LineFunc(0x28bd,"virtual int Dispatcher_SaveGameOption_2::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  return uVar3;
}

```

