# Dispatcher_SaveGameOption_1

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 081ced4e Dispatcher_SaveGameOption_1::check_error  [0x081ced4e-0x81ceda3] ===
 81ced4e:	55                   	push   %ebp
 81ced4f:	89 e5                	mov    %esp,%ebp
 81ced51:	83 ec 18             	sub    $0x18,%esp
 81ced54:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81ced58:	75 26                	jne    81ced80 <_ZN27Dispatcher_SaveGameOption_111check_errorEP5CUserR8MSG_BASE+0x32>
 81ced5a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ced61:	00 
 81ced62:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ced69:	00 
 81ced6a:	c7 44 24 04 80 42 bd 	movl   $0x8bd4280,0x4(%esp)
 81ced71:	08 
 81ced72:	c7 04 24 ad 28 00 00 	movl   $0x28ad,(%esp)
 81ced79:	e8 59 1b 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ced7e:	eb 21                	jmp    81ceda1 <_ZN27Dispatcher_SaveGameOption_111check_errorEP5CUserR8MSG_BASE+0x53>
 81ced80:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ced83:	89 04 24             	mov    %eax,(%esp)
 81ced86:	e8 01 b6 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ced8b:	83 f8 01             	cmp    $0x1,%eax
 81ced8e:	0f 9e c0             	setle  %al
 81ced91:	84 c0                	test   %al,%al
 81ced93:	74 07                	je     81ced9c <_ZN27Dispatcher_SaveGameOption_111check_errorEP5CUserR8MSG_BASE+0x4e>
 81ced95:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81ced9a:	eb 05                	jmp    81ceda1 <_ZN27Dispatcher_SaveGameOption_111check_errorEP5CUserR8MSG_BASE+0x53>
 81ced9c:	b8 00 00 00 00       	mov    $0x0,%eax
 81ceda1:	c9                   	leave
 81ceda2:	c3                   	ret
 81ceda3:	90                   	nop

```

```c
// Dispatcher_SaveGameOption_1::check_error @ 0x81ced4e

/* Dispatcher_SaveGameOption_1::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_SaveGameOption_1::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = LineFunc(0x28ad,"int Dispatcher_SaveGameOption_1::check_error(CUser*, MSG_BASE&)",0,0);
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
// === 081ceb38 Dispatcher_SaveGameOption_1::process  [0x081ceb38-0x81ced4d] ===
 81ceb38:	55                   	push   %ebp
 81ceb39:	89 e5                	mov    %esp,%ebp
 81ceb3b:	56                   	push   %esi
 81ceb3c:	53                   	push   %ebx
 81ceb3d:	83 ec 30             	sub    $0x30,%esp
 81ceb40:	8b 45 10             	mov    0x10(%ebp),%eax
 81ceb43:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ceb47:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ceb4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ceb4e:	8b 45 08             	mov    0x8(%ebp),%eax
 81ceb51:	89 04 24             	mov    %eax,(%esp)
 81ceb54:	e8 f5 01 00 00       	call   81ced4e <_ZN27Dispatcher_SaveGameOption_111check_errorEP5CUserR8MSG_BASE>
 81ceb59:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81ceb5c:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81ceb60:	7e 08                	jle    81ceb6a <_ZN27Dispatcher_SaveGameOption_17processEP5CUserR8MSG_BASER9ParamBase+0x32>
 81ceb62:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 81ceb65:	e9 da 01 00 00       	jmp    81ced44 <_ZN27Dispatcher_SaveGameOption_17processEP5CUserR8MSG_BASER9ParamBase+0x20c>
 81ceb6a:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81ceb6e:	79 0a                	jns    81ceb7a <_ZN27Dispatcher_SaveGameOption_17processEP5CUserR8MSG_BASER9ParamBase+0x42>
 81ceb70:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 81ceb75:	e9 ca 01 00 00       	jmp    81ced44 <_ZN27Dispatcher_SaveGameOption_17processEP5CUserR8MSG_BASER9ParamBase+0x20c>
 81ceb7a:	8b 45 10             	mov    0x10(%ebp),%eax
 81ceb7d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81ceb80:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ceb83:	83 c0 11             	add    $0x11,%eax
 81ceb86:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ceb8d:	00 
 81ceb8e:	89 04 24             	mov    %eax,(%esp)
 81ceb91:	e8 dc bf 05 00       	call   822ab72 <_ZNK10CETCOption12getETCOptionE15ENUM_OPTION_ETC>
 81ceb96:	0f bf d8             	movswl %ax,%ebx
 81ceb99:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ceb9c:	89 04 24             	mov    %eax,(%esp)
 81ceb9f:	e8 10 d3 4b 00       	call   868beb4 <_ZN15CUserCharacInfo30get_charac_visible_grow_avatarEv>
 81ceba4:	0f b6 c0             	movzbl %al,%eax
 81ceba7:	39 c3                	cmp    %eax,%ebx
 81ceba9:	0f 95 c0             	setne  %al
 81cebac:	84 c0                	test   %al,%al
 81cebae:	74 49                	je     81cebf9 <_ZN27Dispatcher_SaveGameOption_17processEP5CUserR8MSG_BASER9ParamBase+0xc1>
 81cebb0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cebb3:	83 c0 11             	add    $0x11,%eax
 81cebb6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81cebbd:	00 
 81cebbe:	89 04 24             	mov    %eax,(%esp)
 81cebc1:	e8 ac bf 05 00       	call   822ab72 <_ZNK10CETCOption12getETCOptionE15ENUM_OPTION_ETC>
 81cebc6:	66 85 c0             	test   %ax,%ax
 81cebc9:	0f 95 c0             	setne  %al
 81cebcc:	0f b6 d0             	movzbl %al,%edx
 81cebcf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cebd2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cebd6:	89 04 24             	mov    %eax,(%esp)
 81cebd9:	e8 52 d2 4b 00       	call   868be30 <_ZN15CUserCharacInfo30set_charac_visible_grow_avatarEb>
 81cebde:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cebe1:	89 04 24             	mov    %eax,(%esp)
 81cebe4:	e8 af d3 4b 00       	call   868bf98 <_ZN5CUser24send_charac_visible_dataEv>
 81cebe9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cebec:	05 f4 96 07 00       	add    $0x796f4,%eax
 81cebf1:	89 04 24             	mov    %eax,(%esp)
 81cebf4:	e8 e1 0f 06 00       	call   822fbda <_ZN14CCharacterView20enableSaveCharacViewEv>
 81cebf9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cebfc:	89 04 24             	mov    %eax,(%esp)
 81cebff:	e8 4a 10 06 00       	call   822fc4e <_ZN5CUser16GetGameOptionRefEv>
 81cec04:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cec07:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cec0a:	83 c0 11             	add    $0x11,%eax
 81cec0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cec11:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cec14:	89 04 24             	mov    %eax,(%esp)
 81cec17:	e8 2a 83 2e 00       	call   84b6f46 <_ZN11CGameOption18IsEtcOptionChangedER10CETCOption>
 81cec1c:	83 f0 01             	xor    $0x1,%eax
 81cec1f:	84 c0                	test   %al,%al
 81cec21:	74 0a                	je     81cec2d <_ZN27Dispatcher_SaveGameOption_17processEP5CUserR8MSG_BASER9ParamBase+0xf5>
 81cec23:	bb 00 00 00 00       	mov    $0x0,%ebx
 81cec28:	e9 17 01 00 00       	jmp    81ced44 <_ZN27Dispatcher_SaveGameOption_17processEP5CUserR8MSG_BASER9ParamBase+0x20c>
 81cec2d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cec30:	83 c0 11             	add    $0x11,%eax
 81cec33:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cec37:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cec3a:	89 04 24             	mov    %eax,(%esp)
 81cec3d:	e8 b2 81 2e 00       	call   84b6df4 <_ZN11CGameOption12SetEtcOptionER10CETCOption>
 81cec42:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81cec47:	c7 44 24 08 99 28 00 	movl   $0x2899,0x8(%esp)
 81cec4e:	00 
 81cec4f:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81cec56:	08 
 81cec57:	89 04 24             	mov    %eax,(%esp)
 81cec5a:	e8 27 0e 0c 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81cec5f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81cec66:	00 
 81cec67:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cec6b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81cec6e:	89 04 24             	mov    %eax,(%esp)
 81cec71:	e8 b0 9f ef ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81cec76:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81cec79:	89 04 24             	mov    %eax,(%esp)
 81cec7c:	e8 c5 9f ef ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81cec81:	c7 44 24 04 30 01 00 	movl   $0x130,0x4(%esp)
 81cec88:	00 
 81cec89:	89 04 24             	mov    %eax,(%esp)
 81cec8c:	e8 c5 9f ef ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81cec91:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cec94:	89 04 24             	mov    %eax,(%esp)
 81cec97:	e8 fa 9f ef ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81cec9c:	89 c3                	mov    %eax,%ebx
 81cec9e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ceca1:	89 04 24             	mov    %eax,(%esp)
 81ceca4:	e8 9d 9f ef ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81ceca9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cecad:	89 04 24             	mov    %eax,(%esp)
 81cecb0:	e8 a1 9f ef ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81cecb5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81cecb8:	89 04 24             	mov    %eax,(%esp)
 81cecbb:	e8 8e 9f ef ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81cecc0:	89 04 24             	mov    %eax,(%esp)
 81cecc3:	e8 d6 81 06 00       	call   8236e9e <_ZN12CStreamGuard11GetInBufferI22SIG_SAVE_GAME_OPTION_1EEPT_v>
 81cecc8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ceccb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cecce:	89 04 24             	mov    %eax,(%esp)
 81cecd1:	e8 98 b6 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cecd6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cecd9:	89 02                	mov    %eax,(%edx)
 81cecdb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cecde:	8d 50 11             	lea    0x11(%eax),%edx
 81cece1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cece4:	83 c0 04             	add    $0x4,%eax
 81cece7:	c7 44 24 08 48 00 00 	movl   $0x48,0x8(%esp)
 81cecee:	00 
 81cecef:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cecf3:	89 04 24             	mov    %eax,(%esp)
 81cecf6:	e8 a5 eb ea ff       	call   807d8a0 <memcpy@plt>
 81cecfb:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81ced00:	8d 55 e0             	lea    -0x20(%ebp),%edx
 81ced03:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ced07:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81ced0e:	00 
 81ced0f:	89 04 24             	mov    %eax,(%esp)
 81ced12:	e8 c7 22 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81ced17:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ced1c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ced1f:	89 04 24             	mov    %eax,(%esp)
 81ced22:	e8 ab db 44 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81ced27:	eb 1b                	jmp    81ced44 <_ZN27Dispatcher_SaveGameOption_17processEP5CUserR8MSG_BASER9ParamBase+0x20c>
 81ced29:	89 d3                	mov    %edx,%ebx
 81ced2b:	89 c6                	mov    %eax,%esi
 81ced2d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ced30:	89 04 24             	mov    %eax,(%esp)
 81ced33:	e8 9a db 44 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81ced38:	89 f0                	mov    %esi,%eax
 81ced3a:	89 da                	mov    %ebx,%edx
 81ced3c:	89 04 24             	mov    %eax,(%esp)
 81ced3f:	e8 0c 4a 91 00       	call   8ae3750 <_Unwind_Resume>
 81ced44:	89 d8                	mov    %ebx,%eax
 81ced46:	83 c4 30             	add    $0x30,%esp
 81ced49:	5b                   	pop    %ebx
 81ced4a:	5e                   	pop    %esi
 81ced4b:	5d                   	pop    %ebp
 81ced4c:	c3                   	ret
 81ced4d:	90                   	nop

```

```c
// Dispatcher_SaveGameOption_1::process @ 0x81ceb38

/* Dispatcher_SaveGameOption_1::process(CUser*, MSG_BASE&, ParamBase&) */

int Dispatcher_SaveGameOption_1::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  undefined4 uVar8;
  ParamBase *pPVar9;
  CStreamGuard local_24 [8];
  int local_1c;
  ParamBase *local_18;
  CGameOption *local_14;
  SIG_SAVE_GAME_OPTION_1 *local_10;
  
  pPVar9 = param_3;
  iVar5 = check_error(param_1,param_2);
  if (iVar5 < 1) {
    if (iVar5 < 0) {
      iVar5 = -1;
    }
    else {
      local_18 = param_3;
      local_1c = iVar5;
      uVar2 = CETCOption::getETCOption((CETCOption *)(param_3 + 0x11),1,pPVar9);
      uVar3 = CUserCharacInfo::get_charac_visible_grow_avatar((CUserCharacInfo *)param_2);
      if (uVar2 != (uVar3 & 0xff)) {
        sVar4 = CETCOption::getETCOption((CETCOption *)(local_18 + 0x11),1,pPVar9);
        CUserCharacInfo::set_charac_visible_grow_avatar((CUserCharacInfo *)param_2,sVar4 != 0);
        CUser::send_charac_visible_data((CUser *)param_2);
        CCharacterView::enableSaveCharacView((CCharacterView *)(param_2 + 0x796f4));
      }
      local_14 = (CGameOption *)CUser::GetGameOptionRef((CUser *)param_2);
      cVar1 = CGameOption::IsEtcOptionChanged(local_14,(CETCOption *)(local_18 + 0x11));
      if (cVar1 == '\x01') {
        CGameOption::SetEtcOption(local_14,(CETCOption *)(local_18 + 0x11));
        pSVar6 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x2899)
        ;
        CStreamGuard::CStreamGuard(local_24,pSVar6,true);
        pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 081cec8c to 081ced16 has its CatchHandler @ 081ced29 */
        CStreamGuard::operator<<(pCVar7,0x130);
        iVar5 = CUser::GetUID((CUser *)param_2);
        pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_24);
        CStreamGuard::operator<<(pCVar7,iVar5);
        pCVar7 = (CStreamGuard *)CStreamGuard::operator->(local_24);
        local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_GAME_OPTION_1>(pCVar7);
        uVar8 = CUser::get_acc_id((CUser *)param_2);
        *(undefined4 *)local_10 = uVar8;
        memcpy(local_10 + 4,local_18 + 0x11,0x48);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_24);
        iVar5 = 0;
        CStreamGuard::~CStreamGuard(local_24);
      }
      else {
        iVar5 = 0;
      }
    }
  }
  return iVar5;
}

```

---

## read

```asm
// === 081cea7a Dispatcher_SaveGameOption_1::read  [0x081cea7a-0x81ceb37] ===
 81cea7a:	55                   	push   %ebp
 81cea7b:	89 e5                	mov    %esp,%ebp
 81cea7d:	83 ec 28             	sub    $0x28,%esp
 81cea80:	8b 45 10             	mov    0x10(%ebp),%eax
 81cea83:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cea86:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cea89:	83 c0 0d             	add    $0xd,%eax
 81cea8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cea90:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cea93:	89 04 24             	mov    %eax,(%esp)
 81cea96:	e8 a5 e7 3b 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81cea9b:	83 f0 01             	xor    $0x1,%eax
 81cea9e:	84 c0                	test   %al,%al
 81ceaa0:	75 0b                	jne    81ceaad <_ZN27Dispatcher_SaveGameOption_14readER9PacketBufR8MSG_BASE+0x33>
 81ceaa2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ceaa5:	8b 40 0d             	mov    0xd(%eax),%eax
 81ceaa8:	83 f8 48             	cmp    $0x48,%eax
 81ceaab:	76 07                	jbe    81ceab4 <_ZN27Dispatcher_SaveGameOption_14readER9PacketBufR8MSG_BASE+0x3a>
 81ceaad:	b8 01 00 00 00       	mov    $0x1,%eax
 81ceab2:	eb 05                	jmp    81ceab9 <_ZN27Dispatcher_SaveGameOption_14readER9PacketBufR8MSG_BASE+0x3f>
 81ceab4:	b8 00 00 00 00       	mov    $0x0,%eax
 81ceab9:	84 c0                	test   %al,%al
 81ceabb:	74 26                	je     81ceae3 <_ZN27Dispatcher_SaveGameOption_14readER9PacketBufR8MSG_BASE+0x69>
 81ceabd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ceac4:	00 
 81ceac5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ceacc:	00 
 81ceacd:	c7 44 24 04 c0 42 bd 	movl   $0x8bd42c0,0x4(%esp)
 81cead4:	08 
 81cead5:	c7 04 24 60 28 00 00 	movl   $0x2860,(%esp)
 81ceadc:	e8 f6 1d 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ceae1:	eb 53                	jmp    81ceb36 <_ZN27Dispatcher_SaveGameOption_14readER9PacketBufR8MSG_BASE+0xbc>
 81ceae3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ceae6:	8b 40 0d             	mov    0xd(%eax),%eax
 81ceae9:	89 c2                	mov    %eax,%edx
 81ceaeb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ceaee:	83 c0 11             	add    $0x11,%eax
 81ceaf1:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ceaf5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ceaf9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ceafc:	89 04 24             	mov    %eax,(%esp)
 81ceaff:	e8 ae e8 3b 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 81ceb04:	83 f0 01             	xor    $0x1,%eax
 81ceb07:	84 c0                	test   %al,%al
 81ceb09:	74 26                	je     81ceb31 <_ZN27Dispatcher_SaveGameOption_14readER9PacketBufR8MSG_BASE+0xb7>
 81ceb0b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ceb12:	00 
 81ceb13:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ceb1a:	00 
 81ceb1b:	c7 44 24 04 c0 42 bd 	movl   $0x8bd42c0,0x4(%esp)
 81ceb22:	08 
 81ceb23:	c7 04 24 62 28 00 00 	movl   $0x2862,(%esp)
 81ceb2a:	e8 a8 1d 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ceb2f:	eb 05                	jmp    81ceb36 <_ZN27Dispatcher_SaveGameOption_14readER9PacketBufR8MSG_BASE+0xbc>
 81ceb31:	b8 00 00 00 00       	mov    $0x0,%eax
 81ceb36:	c9                   	leave
 81ceb37:	c3                   	ret

```

```c
// Dispatcher_SaveGameOption_1::read @ 0x81cea7a

/* Dispatcher_SaveGameOption_1::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SaveGameOption_1::read
          (Dispatcher_SaveGameOption_1 *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xd));
  if ((cVar2 == '\x01') && (*(uint *)(param_2 + 0xd) < 0x49)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = LineFunc(0x2860,"virtual int Dispatcher_SaveGameOption_1::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  else {
    cVar2 = PacketBuf::get_binary(param_1,(char *)(param_2 + 0x11),*(int *)(param_2 + 0xd));
    if (cVar2 == '\x01') {
      uVar3 = 0;
    }
    else {
      uVar3 = LineFunc(0x2862,"virtual int Dispatcher_SaveGameOption_1::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  return uVar3;
}

```

