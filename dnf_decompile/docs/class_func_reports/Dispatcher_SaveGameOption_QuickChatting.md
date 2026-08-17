# Dispatcher_SaveGameOption_QuickChatting

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081cf1ac Dispatcher_SaveGameOption_QuickChatting::process  [0x081cf1ac-0x81cf353] ===
 81cf1ac:	55                   	push   %ebp
 81cf1ad:	89 e5                	mov    %esp,%ebp
 81cf1af:	56                   	push   %esi
 81cf1b0:	53                   	push   %ebx
 81cf1b1:	83 ec 30             	sub    $0x30,%esp
 81cf1b4:	8b 45 10             	mov    0x10(%ebp),%eax
 81cf1b7:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81cf1ba:	8b 45 14             	mov    0x14(%ebp),%eax
 81cf1bd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81cf1c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf1c3:	89 04 24             	mov    %eax,(%esp)
 81cf1c6:	e8 83 0a 06 00       	call   822fc4e <_ZN5CUser16GetGameOptionRefEv>
 81cf1cb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cf1ce:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81cf1d1:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 81cf1d5:	0f b6 c0             	movzbl %al,%eax
 81cf1d8:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81cf1db:	83 c2 12             	add    $0x12,%edx
 81cf1de:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cf1e2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cf1e6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cf1e9:	89 04 24             	mov    %eax,(%esp)
 81cf1ec:	e8 83 7c 2e 00       	call   84b6e74 <_ZN11CGameOption18SetQuickChatOptionERK20CQuickChattingOptionj>
 81cf1f1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81cf1f4:	89 04 24             	mov    %eax,(%esp)
 81cf1f7:	e8 9c ea 05 00       	call   822dc98 <_ZN14MSG_QUICK_CHAT13isLastMessageEv>
 81cf1fc:	84 c0                	test   %al,%al
 81cf1fe:	74 16                	je     81cf216 <_ZN39Dispatcher_SaveGameOption_QuickChatting7processEP5CUserR8MSG_BASER9ParamBase+0x6a>
 81cf200:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cf203:	89 04 24             	mov    %eax,(%esp)
 81cf206:	e8 e7 fd 05 00       	call   822eff2 <_ZN11CGameOption23isChanged_QuickChatDataEv>
 81cf20b:	84 c0                	test   %al,%al
 81cf20d:	74 07                	je     81cf216 <_ZN39Dispatcher_SaveGameOption_QuickChatting7processEP5CUserR8MSG_BASER9ParamBase+0x6a>
 81cf20f:	b8 01 00 00 00       	mov    $0x1,%eax
 81cf214:	eb 05                	jmp    81cf21b <_ZN39Dispatcher_SaveGameOption_QuickChatting7processEP5CUserR8MSG_BASER9ParamBase+0x6f>
 81cf216:	b8 00 00 00 00       	mov    $0x0,%eax
 81cf21b:	84 c0                	test   %al,%al
 81cf21d:	0f 84 24 01 00 00    	je     81cf347 <_ZN39Dispatcher_SaveGameOption_QuickChatting7processEP5CUserR8MSG_BASER9ParamBase+0x19b>
 81cf223:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81cf228:	c7 44 24 08 1b 29 00 	movl   $0x291b,0x8(%esp)
 81cf22f:	00 
 81cf230:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81cf237:	08 
 81cf238:	89 04 24             	mov    %eax,(%esp)
 81cf23b:	e8 46 08 0c 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81cf240:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81cf247:	00 
 81cf248:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf24c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81cf24f:	89 04 24             	mov    %eax,(%esp)
 81cf252:	e8 cf 99 ef ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81cf257:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81cf25a:	89 04 24             	mov    %eax,(%esp)
 81cf25d:	e8 e4 99 ef ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81cf262:	c7 44 24 04 39 02 00 	movl   $0x239,0x4(%esp)
 81cf269:	00 
 81cf26a:	89 04 24             	mov    %eax,(%esp)
 81cf26d:	e8 e4 99 ef ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81cf272:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf275:	89 04 24             	mov    %eax,(%esp)
 81cf278:	e8 19 9a ef ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81cf27d:	89 c3                	mov    %eax,%ebx
 81cf27f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81cf282:	89 04 24             	mov    %eax,(%esp)
 81cf285:	e8 bc 99 ef ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81cf28a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cf28e:	89 04 24             	mov    %eax,(%esp)
 81cf291:	e8 c0 99 ef ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81cf296:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81cf299:	89 04 24             	mov    %eax,(%esp)
 81cf29c:	e8 ad 99 ef ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81cf2a1:	89 04 24             	mov    %eax,(%esp)
 81cf2a4:	e8 21 7c 06 00       	call   8236eca <_ZN12CStreamGuard11GetInBufferI30SIG_SAVE_GAME_OPTION_QUICKCHATEEPT_v>
 81cf2a9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cf2ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf2af:	89 04 24             	mov    %eax,(%esp)
 81cf2b2:	e8 b7 b0 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cf2b7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cf2ba:	89 02                	mov    %eax,(%edx)
 81cf2bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cf2bf:	83 c0 04             	add    $0x4,%eax
 81cf2c2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cf2c9:	00 
 81cf2ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf2ce:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cf2d1:	89 04 24             	mov    %eax,(%esp)
 81cf2d4:	e8 07 7d 2e 00       	call   84b6fe0 <_ZN11CGameOption17CopyQuickChattingER20CQuickChattingOptionj>
 81cf2d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cf2dc:	05 30 01 00 00       	add    $0x130,%eax
 81cf2e1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81cf2e8:	00 
 81cf2e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf2ed:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cf2f0:	89 04 24             	mov    %eax,(%esp)
 81cf2f3:	e8 e8 7c 2e 00       	call   84b6fe0 <_ZN11CGameOption17CopyQuickChattingER20CQuickChattingOptionj>
 81cf2f8:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81cf2fd:	8d 55 e0             	lea    -0x20(%ebp),%edx
 81cf300:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cf304:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81cf30b:	00 
 81cf30c:	89 04 24             	mov    %eax,(%esp)
 81cf30f:	e8 ca 1c 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81cf314:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cf317:	89 04 24             	mov    %eax,(%esp)
 81cf31a:	e8 e3 fc 05 00       	call   822f002 <_ZN11CGameOption25resetFlag_QuickChatChnageEv>
 81cf31f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81cf322:	89 04 24             	mov    %eax,(%esp)
 81cf325:	e8 a8 d5 44 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81cf32a:	eb 1b                	jmp    81cf347 <_ZN39Dispatcher_SaveGameOption_QuickChatting7processEP5CUserR8MSG_BASER9ParamBase+0x19b>
 81cf32c:	89 d3                	mov    %edx,%ebx
 81cf32e:	89 c6                	mov    %eax,%esi
 81cf330:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81cf333:	89 04 24             	mov    %eax,(%esp)
 81cf336:	e8 97 d5 44 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81cf33b:	89 f0                	mov    %esi,%eax
 81cf33d:	89 da                	mov    %ebx,%edx
 81cf33f:	89 04 24             	mov    %eax,(%esp)
 81cf342:	e8 09 44 91 00       	call   8ae3750 <_Unwind_Resume>
 81cf347:	b8 00 00 00 00       	mov    $0x0,%eax
 81cf34c:	83 c4 30             	add    $0x30,%esp
 81cf34f:	5b                   	pop    %ebx
 81cf350:	5e                   	pop    %esi
 81cf351:	5d                   	pop    %ebp
 81cf352:	c3                   	ret
 81cf353:	90                   	nop

```

```c
// Dispatcher_SaveGameOption_QuickChatting::process @ 0x81cf1ac

/* Dispatcher_SaveGameOption_QuickChatting::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SaveGameOption_QuickChatting::process
          (Dispatcher_SaveGameOption_QuickChatting *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  undefined4 uVar6;
  CStreamGuard local_24 [8];
  MSG_BASE *local_1c;
  ParamBase *local_18;
  CGameOption *local_14;
  SIG_SAVE_GAME_OPTION_QUICKCHAT *local_10;
  
  local_1c = param_2;
  local_18 = param_3;
  local_14 = (CGameOption *)CUser::GetGameOptionRef(param_1);
  CGameOption::SetQuickChatOption
            (local_14,(CQuickChattingOption *)(local_1c + 0x12),(uint)(byte)local_1c[0x11]);
  cVar2 = MSG_QUICK_CHAT::isLastMessage((MSG_QUICK_CHAT *)local_1c);
  if (cVar2 != '\0') {
    cVar2 = CGameOption::isChanged_QuickChatData(local_14);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_081cf21b;
    }
  }
  bVar1 = false;
LAB_081cf21b:
  if (bVar1) {
    pSVar3 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x291b);
    CStreamGuard::CStreamGuard(local_24,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 081cf26d to 081cf313 has its CatchHandler @ 081cf32c */
    CStreamGuard::operator<<(pCVar4,0x239);
    iVar5 = CUser::GetUID(param_1);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar4,iVar5);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_24);
    local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_GAME_OPTION_QUICKCHAT>(pCVar4);
    uVar6 = CUser::get_acc_id(param_1);
    *(undefined4 *)local_10 = uVar6;
    CGameOption::CopyQuickChatting(local_14,(CQuickChattingOption *)(local_10 + 4),0);
    CGameOption::CopyQuickChatting(local_14,(CQuickChattingOption *)(local_10 + 0x130),1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_24);
    CGameOption::resetFlag_QuickChatChnage(local_14);
    CStreamGuard::~CStreamGuard(local_24);
  }
  return 0;
}

```

---

## read

```asm
// === 081cf0a6 Dispatcher_SaveGameOption_QuickChatting::read  [0x081cf0a6-0x81cf1ab] ===
 81cf0a6:	55                   	push   %ebp
 81cf0a7:	89 e5                	mov    %esp,%ebp
 81cf0a9:	83 ec 28             	sub    $0x28,%esp
 81cf0ac:	8b 45 10             	mov    0x10(%ebp),%eax
 81cf0af:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cf0b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cf0b5:	83 c0 11             	add    $0x11,%eax
 81cf0b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf0bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf0bf:	89 04 24             	mov    %eax,(%esp)
 81cf0c2:	e8 a9 de 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81cf0c7:	83 f0 01             	xor    $0x1,%eax
 81cf0ca:	84 c0                	test   %al,%al
 81cf0cc:	74 29                	je     81cf0f7 <_ZN39Dispatcher_SaveGameOption_QuickChatting4readER9PacketBufR8MSG_BASE+0x51>
 81cf0ce:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cf0d5:	00 
 81cf0d6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cf0dd:	00 
 81cf0de:	c7 44 24 04 80 41 bd 	movl   $0x8bd4180,0x4(%esp)
 81cf0e5:	08 
 81cf0e6:	c7 04 24 0a 29 00 00 	movl   $0x290a,(%esp)
 81cf0ed:	e8 e5 17 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cf0f2:	e9 b2 00 00 00       	jmp    81cf1a9 <_ZN39Dispatcher_SaveGameOption_QuickChatting4readER9PacketBufR8MSG_BASE+0x103>
 81cf0f7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cf0fa:	83 c0 0d             	add    $0xd,%eax
 81cf0fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf101:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf104:	89 04 24             	mov    %eax,(%esp)
 81cf107:	e8 34 e1 3b 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81cf10c:	83 f0 01             	xor    $0x1,%eax
 81cf10f:	84 c0                	test   %al,%al
 81cf111:	75 0d                	jne    81cf120 <_ZN39Dispatcher_SaveGameOption_QuickChatting4readER9PacketBufR8MSG_BASE+0x7a>
 81cf113:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cf116:	8b 40 0d             	mov    0xd(%eax),%eax
 81cf119:	3d 2c 01 00 00       	cmp    $0x12c,%eax
 81cf11e:	76 07                	jbe    81cf127 <_ZN39Dispatcher_SaveGameOption_QuickChatting4readER9PacketBufR8MSG_BASE+0x81>
 81cf120:	b8 01 00 00 00       	mov    $0x1,%eax
 81cf125:	eb 05                	jmp    81cf12c <_ZN39Dispatcher_SaveGameOption_QuickChatting4readER9PacketBufR8MSG_BASE+0x86>
 81cf127:	b8 00 00 00 00       	mov    $0x0,%eax
 81cf12c:	84 c0                	test   %al,%al
 81cf12e:	74 26                	je     81cf156 <_ZN39Dispatcher_SaveGameOption_QuickChatting4readER9PacketBufR8MSG_BASE+0xb0>
 81cf130:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cf137:	00 
 81cf138:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cf13f:	00 
 81cf140:	c7 44 24 04 80 41 bd 	movl   $0x8bd4180,0x4(%esp)
 81cf147:	08 
 81cf148:	c7 04 24 0b 29 00 00 	movl   $0x290b,(%esp)
 81cf14f:	e8 83 17 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cf154:	eb 53                	jmp    81cf1a9 <_ZN39Dispatcher_SaveGameOption_QuickChatting4readER9PacketBufR8MSG_BASE+0x103>
 81cf156:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cf159:	8b 40 0d             	mov    0xd(%eax),%eax
 81cf15c:	89 c2                	mov    %eax,%edx
 81cf15e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cf161:	83 c0 12             	add    $0x12,%eax
 81cf164:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cf168:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf16c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf16f:	89 04 24             	mov    %eax,(%esp)
 81cf172:	e8 3b e2 3b 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 81cf177:	83 f0 01             	xor    $0x1,%eax
 81cf17a:	84 c0                	test   %al,%al
 81cf17c:	74 26                	je     81cf1a4 <_ZN39Dispatcher_SaveGameOption_QuickChatting4readER9PacketBufR8MSG_BASE+0xfe>
 81cf17e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cf185:	00 
 81cf186:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cf18d:	00 
 81cf18e:	c7 44 24 04 80 41 bd 	movl   $0x8bd4180,0x4(%esp)
 81cf195:	08 
 81cf196:	c7 04 24 0c 29 00 00 	movl   $0x290c,(%esp)
 81cf19d:	e8 35 17 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cf1a2:	eb 05                	jmp    81cf1a9 <_ZN39Dispatcher_SaveGameOption_QuickChatting4readER9PacketBufR8MSG_BASE+0x103>
 81cf1a4:	b8 00 00 00 00       	mov    $0x0,%eax
 81cf1a9:	c9                   	leave
 81cf1aa:	c3                   	ret
 81cf1ab:	90                   	nop

```

```c
// Dispatcher_SaveGameOption_QuickChatting::read @ 0x81cf0a6

/* Dispatcher_SaveGameOption_QuickChatting::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SaveGameOption_QuickChatting::read
          (Dispatcher_SaveGameOption_QuickChatting *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x11));
  if (cVar2 == '\x01') {
    cVar2 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xd));
    if ((cVar2 == '\x01') && (*(uint *)(param_2 + 0xd) < 0x12d)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = LineFunc(0x290b,
                       "virtual int Dispatcher_SaveGameOption_QuickChatting::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
    else {
      cVar2 = PacketBuf::get_binary(param_1,(char *)(param_2 + 0x12),*(int *)(param_2 + 0xd));
      if (cVar2 == '\x01') {
        uVar3 = 0;
      }
      else {
        uVar3 = LineFunc(0x290c,
                         "virtual int Dispatcher_SaveGameOption_QuickChatting::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
    }
  }
  else {
    uVar3 = LineFunc(0x290a,
                     "virtual int Dispatcher_SaveGameOption_QuickChatting::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar3;
}

```

