# Dispatcher_Break_Away_Quest_Check

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## process

```asm
// === 081d390a Dispatcher_Break_Away_Quest_Check::process  [0x081d390a-0x81d3a71] ===
 81d390a:	55                   	push   %ebp
 81d390b:	89 e5                	mov    %esp,%ebp
 81d390d:	56                   	push   %esi
 81d390e:	53                   	push   %ebx
 81d390f:	83 ec 20             	sub    $0x20,%esp
 81d3912:	8b 45 14             	mov    0x14(%ebp),%eax
 81d3915:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d3918:	8b 45 10             	mov    0x10(%ebp),%eax
 81d391b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d391e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d3921:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d3925:	84 c0                	test   %al,%al
 81d3927:	74 3c                	je     81d3965 <_ZN33Dispatcher_Break_Away_Quest_Check7processEP5CUserR8MSG_BASER9ParamBase+0x5b>
 81d3929:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d392c:	89 04 24             	mov    %eax,(%esp)
 81d392f:	e8 3a c3 05 00       	call   822fc6e <_ZN5CUser27getBreakAwayDungeonClearCntEv>
 81d3934:	85 c0                	test   %eax,%eax
 81d3936:	0f 94 c0             	sete   %al
 81d3939:	84 c0                	test   %al,%al
 81d393b:	74 19                	je     81d3956 <_ZN33Dispatcher_Break_Away_Quest_Check7processEP5CUserR8MSG_BASER9ParamBase+0x4c>
 81d393d:	a1 6c f7 41 09       	mov    0x941f76c,%eax
 81d3942:	8b 55 0c             	mov    0xc(%ebp),%edx
 81d3945:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d3949:	89 04 24             	mov    %eax,(%esp)
 81d394c:	e8 13 98 14 00       	call   831d164 <_ZN18break_away_prevent23CBreakAwayPreventSystem31giveBreakAwayDungeonClearRewardEP5CUser>
 81d3951:	e9 10 01 00 00       	jmp    81d3a66 <_ZN33Dispatcher_Break_Away_Quest_Check7processEP5CUserR8MSG_BASER9ParamBase+0x15c>
 81d3956:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d3959:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 81d3960:	e9 01 01 00 00       	jmp    81d3a66 <_ZN33Dispatcher_Break_Away_Quest_Check7processEP5CUserR8MSG_BASER9ParamBase+0x15c>
 81d3965:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81d396c:	ff 
 81d396d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3970:	89 04 24             	mov    %eax,(%esp)
 81d3973:	e8 e4 c2 05 00       	call   822fc5c <_ZN5CUser27setBreakAwayDungeonClearCntEi>
 81d3978:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d397f:	00 
 81d3980:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3983:	89 04 24             	mov    %eax,(%esp)
 81d3986:	e8 f1 c2 05 00       	call   822fc7c <_ZN5CUser21setBreakAwayQuestTimeEj>
 81d398b:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81d3990:	c7 44 24 08 d9 31 00 	movl   $0x31d9,0x8(%esp)
 81d3997:	00 
 81d3998:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81d399f:	08 
 81d39a0:	89 04 24             	mov    %eax,(%esp)
 81d39a3:	e8 de c0 0b 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81d39a8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81d39af:	00 
 81d39b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d39b4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d39b7:	89 04 24             	mov    %eax,(%esp)
 81d39ba:	e8 67 52 ef ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81d39bf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d39c2:	89 04 24             	mov    %eax,(%esp)
 81d39c5:	e8 7c 52 ef ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81d39ca:	c7 44 24 04 44 01 00 	movl   $0x144,0x4(%esp)
 81d39d1:	00 
 81d39d2:	89 04 24             	mov    %eax,(%esp)
 81d39d5:	e8 7c 52 ef ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81d39da:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d39dd:	89 04 24             	mov    %eax,(%esp)
 81d39e0:	e8 b1 52 ef ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81d39e5:	89 c3                	mov    %eax,%ebx
 81d39e7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d39ea:	89 04 24             	mov    %eax,(%esp)
 81d39ed:	e8 54 52 ef ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81d39f2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d39f6:	89 04 24             	mov    %eax,(%esp)
 81d39f9:	e8 58 52 ef ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81d39fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3a01:	89 04 24             	mov    %eax,(%esp)
 81d3a04:	e8 65 69 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81d3a09:	89 c3                	mov    %eax,%ebx
 81d3a0b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d3a0e:	89 04 24             	mov    %eax,(%esp)
 81d3a11:	e8 30 52 ef ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81d3a16:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d3a1a:	89 04 24             	mov    %eax,(%esp)
 81d3a1d:	e8 70 e8 f0 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 81d3a22:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81d3a27:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81d3a2a:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d3a2e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81d3a35:	00 
 81d3a36:	89 04 24             	mov    %eax,(%esp)
 81d3a39:	e8 a0 d5 39 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81d3a3e:	eb 1b                	jmp    81d3a5b <_ZN33Dispatcher_Break_Away_Quest_Check7processEP5CUserR8MSG_BASER9ParamBase+0x151>
 81d3a40:	89 d3                	mov    %edx,%ebx
 81d3a42:	89 c6                	mov    %eax,%esi
 81d3a44:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d3a47:	89 04 24             	mov    %eax,(%esp)
 81d3a4a:	e8 83 8e 44 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81d3a4f:	89 f0                	mov    %esi,%eax
 81d3a51:	89 da                	mov    %ebx,%edx
 81d3a53:	89 04 24             	mov    %eax,(%esp)
 81d3a56:	e8 f5 fc 90 00       	call   8ae3750 <_Unwind_Resume>
 81d3a5b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d3a5e:	89 04 24             	mov    %eax,(%esp)
 81d3a61:	e8 6c 8e 44 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81d3a66:	b8 00 00 00 00       	mov    $0x0,%eax
 81d3a6b:	83 c4 20             	add    $0x20,%esp
 81d3a6e:	5b                   	pop    %ebx
 81d3a6f:	5e                   	pop    %esi
 81d3a70:	5d                   	pop    %ebp
 81d3a71:	c3                   	ret

```

```c
// Dispatcher_Break_Away_Quest_Check::process @ 0x81d390a

/* Dispatcher_Break_Away_Quest_Check::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Break_Away_Quest_Check::process
          (Dispatcher_Break_Away_Quest_Check *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  int iVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  uint uVar4;
  CStreamGuard local_1c [8];
  ParamBase *local_14;
  MSG_BASE *local_10;
  
  local_14 = param_3;
  local_10 = param_2;
  if (param_2[0xd] == (MSG_BASE)0x0) {
    CUser::setBreakAwayDungeonClearCnt(param_1,-1);
    CUser::setBreakAwayQuestTime(param_1,0);
    pSVar2 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x31d9);
    CStreamGuard::CStreamGuard(local_1c,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 081d39d5 to 081d3a3d has its CatchHandler @ 081d3a40 */
    CStreamGuard::operator<<(pCVar3,0x144);
    iVar1 = CUser::GetUID(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,iVar1);
    uVar4 = CUser::get_acc_id(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,uVar4);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
    CStreamGuard::~CStreamGuard(local_1c);
  }
  else {
    iVar1 = CUser::getBreakAwayDungeonClearCnt(param_1);
    if (iVar1 == 0) {
      break_away_prevent::CBreakAwayPreventSystem::giveBreakAwayDungeonClearReward
                (GlobalData::s_BreakAwaySys,param_1);
    }
    else {
      *(undefined4 *)(local_14 + 4) = 1;
    }
  }
  return 0;
}

```

---

## read

```asm
// === 081d38ba Dispatcher_Break_Away_Quest_Check::read  [0x081d38ba-0x81d3909] ===
 81d38ba:	55                   	push   %ebp
 81d38bb:	89 e5                	mov    %esp,%ebp
 81d38bd:	83 ec 18             	sub    $0x18,%esp
 81d38c0:	8b 45 10             	mov    0x10(%ebp),%eax
 81d38c3:	83 c0 0d             	add    $0xd,%eax
 81d38c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d38ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d38cd:	89 04 24             	mov    %eax,(%esp)
 81d38d0:	e8 4d 96 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81d38d5:	83 f0 01             	xor    $0x1,%eax
 81d38d8:	84 c0                	test   %al,%al
 81d38da:	74 26                	je     81d3902 <_ZN33Dispatcher_Break_Away_Quest_Check4readER9PacketBufR8MSG_BASE+0x48>
 81d38dc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d38e3:	00 
 81d38e4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d38eb:	00 
 81d38ec:	c7 44 24 04 e0 33 bd 	movl   $0x8bd33e0,0x4(%esp)
 81d38f3:	08 
 81d38f4:	c7 04 24 97 31 00 00 	movl   $0x3197,(%esp)
 81d38fb:	e8 d7 cf 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d3900:	eb 05                	jmp    81d3907 <_ZN33Dispatcher_Break_Away_Quest_Check4readER9PacketBufR8MSG_BASE+0x4d>
 81d3902:	b8 00 00 00 00       	mov    $0x0,%eax
 81d3907:	c9                   	leave
 81d3908:	c3                   	ret
 81d3909:	90                   	nop

```

```c
// Dispatcher_Break_Away_Quest_Check::read @ 0x81d38ba

/* Dispatcher_Break_Away_Quest_Check::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Break_Away_Quest_Check::read
          (Dispatcher_Break_Away_Quest_Check *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x3197,
                     "virtual int Dispatcher_Break_Away_Quest_Check::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d3a72 Dispatcher_Break_Away_Quest_Check::send  [0x081d3a72-0x81d3bbb] ===
 81d3a72:	55                   	push   %ebp
 81d3a73:	89 e5                	mov    %esp,%ebp
 81d3a75:	56                   	push   %esi
 81d3a76:	53                   	push   %ebx
 81d3a77:	83 ec 30             	sub    $0x30,%esp
 81d3a7a:	8b 45 10             	mov    0x10(%ebp),%eax
 81d3a7d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d3a80:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d3a83:	8b 40 04             	mov    0x4(%eax),%eax
 81d3a86:	85 c0                	test   %eax,%eax
 81d3a88:	0f 85 8b 00 00 00    	jne    81d3b19 <_ZN33Dispatcher_Break_Away_Quest_Check4sendEP5CUserR9ParamBase+0xa7>
 81d3a8e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d3a91:	89 04 24             	mov    %eax,(%esp)
 81d3a94:	e8 b3 a2 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d3a99:	c7 44 24 08 6d 01 00 	movl   $0x16d,0x8(%esp)
 81d3aa0:	00 
 81d3aa1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d3aa8:	00 
 81d3aa9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d3aac:	89 04 24             	mov    %eax,(%esp)
 81d3aaf:	e8 48 7e ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d3ab4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d3abb:	00 
 81d3abc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d3abf:	89 04 24             	mov    %eax,(%esp)
 81d3ac2:	e8 59 7e ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d3ac7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d3ace:	00 
 81d3acf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d3ad2:	89 04 24             	mov    %eax,(%esp)
 81d3ad5:	e8 7e 7e ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d3ada:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d3add:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d3ae1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3ae4:	89 04 24             	mov    %eax,(%esp)
 81d3ae7:	e8 ce 4a 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d3aec:	eb 1b                	jmp    81d3b09 <_ZN33Dispatcher_Break_Away_Quest_Check4sendEP5CUserR9ParamBase+0x97>
 81d3aee:	89 d3                	mov    %edx,%ebx
 81d3af0:	89 c6                	mov    %eax,%esi
 81d3af2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d3af5:	89 04 24             	mov    %eax,(%esp)
 81d3af8:	e8 83 a3 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d3afd:	89 f0                	mov    %esi,%eax
 81d3aff:	89 da                	mov    %ebx,%edx
 81d3b01:	89 04 24             	mov    %eax,(%esp)
 81d3b04:	e8 47 fc 90 00       	call   8ae3750 <_Unwind_Resume>
 81d3b09:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d3b0c:	89 04 24             	mov    %eax,(%esp)
 81d3b0f:	e8 6c a3 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d3b14:	e9 9b 00 00 00       	jmp    81d3bb4 <_ZN33Dispatcher_Break_Away_Quest_Check4sendEP5CUserR9ParamBase+0x142>
 81d3b19:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d3b1c:	89 04 24             	mov    %eax,(%esp)
 81d3b1f:	e8 28 a2 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d3b24:	c7 44 24 08 6d 01 00 	movl   $0x16d,0x8(%esp)
 81d3b2b:	00 
 81d3b2c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d3b33:	00 
 81d3b34:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d3b37:	89 04 24             	mov    %eax,(%esp)
 81d3b3a:	e8 bd 7d ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d3b3f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d3b46:	00 
 81d3b47:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d3b4a:	89 04 24             	mov    %eax,(%esp)
 81d3b4d:	e8 ce 7d ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d3b52:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d3b55:	8b 40 04             	mov    0x4(%eax),%eax
 81d3b58:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d3b5c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d3b5f:	89 04 24             	mov    %eax,(%esp)
 81d3b62:	e8 3d 63 f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81d3b67:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d3b6e:	00 
 81d3b6f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d3b72:	89 04 24             	mov    %eax,(%esp)
 81d3b75:	e8 de 7d ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d3b7a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d3b7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d3b81:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3b84:	89 04 24             	mov    %eax,(%esp)
 81d3b87:	e8 2e 4a 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d3b8c:	eb 1b                	jmp    81d3ba9 <_ZN33Dispatcher_Break_Away_Quest_Check4sendEP5CUserR9ParamBase+0x137>
 81d3b8e:	89 d3                	mov    %edx,%ebx
 81d3b90:	89 c6                	mov    %eax,%esi
 81d3b92:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d3b95:	89 04 24             	mov    %eax,(%esp)
 81d3b98:	e8 e3 a2 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d3b9d:	89 f0                	mov    %esi,%eax
 81d3b9f:	89 da                	mov    %ebx,%edx
 81d3ba1:	89 04 24             	mov    %eax,(%esp)
 81d3ba4:	e8 a7 fb 90 00       	call   8ae3750 <_Unwind_Resume>
 81d3ba9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d3bac:	89 04 24             	mov    %eax,(%esp)
 81d3baf:	e8 cc a2 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d3bb4:	83 c4 30             	add    $0x30,%esp
 81d3bb7:	5b                   	pop    %ebx
 81d3bb8:	5e                   	pop    %esi
 81d3bb9:	5d                   	pop    %ebp
 81d3bba:	c3                   	ret
 81d3bbb:	90                   	nop

```

```c
// Dispatcher_Break_Away_Quest_Check::send @ 0x81d3a72

/* Dispatcher_Break_Away_Quest_Check::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Break_Away_Quest_Check::send
          (Dispatcher_Break_Away_Quest_Check *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d3aaf to 081d3aeb has its CatchHandler @ 081d3aee */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x16d);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081d3b3a to 081d3b8b has its CatchHandler @ 081d3b8e */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x16d);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,*(int *)(local_10 + 4));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(param_1,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  return;
}

```

