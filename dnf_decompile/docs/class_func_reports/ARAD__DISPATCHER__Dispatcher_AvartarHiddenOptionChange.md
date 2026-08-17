# ARAD__DISPATCHER__Dispatcher_AvartarHiddenOptionChange

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## checkWorkState

```asm
// === 0819f956 ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange::checkWorkState  [0x0819f956-0x819f9d5] ===
 819f956:	55                   	push   %ebp
 819f957:	89 e5                	mov    %esp,%ebp
 819f959:	83 ec 28             	sub    $0x28,%esp
 819f95c:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 819f961:	c7 44 24 08 2a 00 00 	movl   $0x2a,0x8(%esp)
 819f968:	00 
 819f969:	8b 55 0c             	mov    0xc(%ebp),%edx
 819f96c:	89 54 24 04          	mov    %edx,0x4(%esp)
 819f970:	89 04 24             	mov    %eax,(%esp)
 819f973:	e8 8a 90 0e 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 819f978:	89 45 f4             	mov    %eax,-0xc(%ebp)
 819f97b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 819f97f:	74 24                	je     819f9a5 <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange14checkWorkStateEP5CUserRN4arad27SigAvatarHiddenOptionChangeE+0x4f>
 819f981:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819f984:	0f b6 c0             	movzbl %al,%eax
 819f987:	89 44 24 08          	mov    %eax,0x8(%esp)
 819f98b:	c7 44 24 04 4c 02 00 	movl   $0x24c,0x4(%esp)
 819f992:	00 
 819f993:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f996:	89 04 24             	mov    %eax,(%esp)
 819f999:	e8 a4 c5 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819f99e:	b8 00 00 00 00       	mov    $0x0,%eax
 819f9a3:	eb 2e                	jmp    819f9d3 <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange14checkWorkStateEP5CUserRN4arad27SigAvatarHiddenOptionChangeE+0x7d>
 819f9a5:	e8 fa f6 fd ff       	call   817f0a4 <_ZN4ARAD9SingletonI29AvatarFixedHiddenOptionServerE3GetEv>
 819f9aa:	8b 55 10             	mov    0x10(%ebp),%edx
 819f9ad:	89 54 24 08          	mov    %edx,0x8(%esp)
 819f9b1:	8b 55 0c             	mov    0xc(%ebp),%edx
 819f9b4:	89 54 24 04          	mov    %edx,0x4(%esp)
 819f9b8:	89 04 24             	mov    %eax,(%esp)
 819f9bb:	e8 06 eb fd ff       	call   817e4c6 <_ZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE>
 819f9c0:	83 f0 01             	xor    $0x1,%eax
 819f9c3:	84 c0                	test   %al,%al
 819f9c5:	74 07                	je     819f9ce <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange14checkWorkStateEP5CUserRN4arad27SigAvatarHiddenOptionChangeE+0x78>
 819f9c7:	b8 00 00 00 00       	mov    $0x0,%eax
 819f9cc:	eb 05                	jmp    819f9d3 <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange14checkWorkStateEP5CUserRN4arad27SigAvatarHiddenOptionChangeE+0x7d>
 819f9ce:	b8 01 00 00 00       	mov    $0x1,%eax
 819f9d3:	c9                   	leave
 819f9d4:	c3                   	ret
 819f9d5:	90                   	nop

```

```c
// ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange::checkWorkState @ 0x819f956

/* ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange::checkWorkState(CUser*,
   arad::SigAvatarHiddenOptionChange&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange::checkWorkState
          (Dispatcher_AvartarHiddenOptionChange *this,CUser *param_1,
          SigAvatarHiddenOptionChange *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  AvatarFixedHiddenOptionServer *this_00;
  
  uVar2 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x2a);
  if (uVar2 == 0) {
    this_00 = (AvatarFixedHiddenOptionServer *)Singleton<AvatarFixedHiddenOptionServer>::Get();
    cVar1 = AvatarFixedHiddenOptionServer::CheckCondition(this_00,param_1,param_2);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x24c,uVar2 & 0xff);
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## dispatch_sig

```asm
// === 0819f6f8 ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange::dispatch_sig  [0x0819f6f8-0x819f955] ===
 819f6f8:	55                   	push   %ebp
 819f6f9:	89 e5                	mov    %esp,%ebp
 819f6fb:	56                   	push   %esi
 819f6fc:	53                   	push   %ebx
 819f6fd:	83 ec 20             	sub    $0x20,%esp
 819f700:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 819f704:	75 0a                	jne    819f710 <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0x18>
 819f706:	bb 32 06 00 00       	mov    $0x632,%ebx
 819f70b:	e9 3d 02 00 00       	jmp    819f94d <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0x255>
 819f710:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f713:	89 04 24             	mov    %eax,(%esp)
 819f716:	e8 17 0d f8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 819f71b:	85 c0                	test   %eax,%eax
 819f71d:	0f 94 c0             	sete   %al
 819f720:	84 c0                	test   %al,%al
 819f722:	74 0a                	je     819f72e <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0x36>
 819f724:	bb 00 00 00 00       	mov    $0x0,%ebx
 819f729:	e9 1f 02 00 00       	jmp    819f94d <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0x255>
 819f72e:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f731:	89 04 24             	mov    %eax,(%esp)
 819f734:	e8 53 ac f3 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 819f739:	83 f8 02             	cmp    $0x2,%eax
 819f73c:	7e 10                	jle    819f74e <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0x56>
 819f73e:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f741:	89 04 24             	mov    %eax,(%esp)
 819f744:	e8 43 ac f3 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 819f749:	83 f8 04             	cmp    $0x4,%eax
 819f74c:	7e 07                	jle    819f755 <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0x5d>
 819f74e:	b8 01 00 00 00       	mov    $0x1,%eax
 819f753:	eb 05                	jmp    819f75a <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0x62>
 819f755:	b8 00 00 00 00       	mov    $0x0,%eax
 819f75a:	84 c0                	test   %al,%al
 819f75c:	74 25                	je     819f783 <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0x8b>
 819f75e:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 819f765:	00 
 819f766:	c7 44 24 04 4c 02 00 	movl   $0x24c,0x4(%esp)
 819f76d:	00 
 819f76e:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f771:	89 04 24             	mov    %eax,(%esp)
 819f774:	e8 c9 c7 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819f779:	bb 00 00 00 00       	mov    $0x0,%ebx
 819f77e:	e9 ca 01 00 00       	jmp    819f94d <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0x255>
 819f783:	e8 1f ac f3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 819f788:	89 04 24             	mov    %eax,(%esp)
 819f78b:	e8 58 2d fa ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 819f790:	84 c0                	test   %al,%al
 819f792:	75 11                	jne    819f7a5 <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0xad>
 819f794:	e8 0e ac f3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 819f799:	89 04 24             	mov    %eax,(%esp)
 819f79c:	e8 11 13 00 00       	call   81a0ab2 <_ZNK9GameWorld16IsFreePvPChannelEv>
 819f7a1:	84 c0                	test   %al,%al
 819f7a3:	74 07                	je     819f7ac <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0xb4>
 819f7a5:	b8 01 00 00 00       	mov    $0x1,%eax
 819f7aa:	eb 05                	jmp    819f7b1 <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0xb9>
 819f7ac:	b8 00 00 00 00       	mov    $0x0,%eax
 819f7b1:	84 c0                	test   %al,%al
 819f7b3:	74 25                	je     819f7da <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0xe2>
 819f7b5:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 819f7bc:	00 
 819f7bd:	c7 44 24 04 4c 02 00 	movl   $0x24c,0x4(%esp)
 819f7c4:	00 
 819f7c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f7c8:	89 04 24             	mov    %eax,(%esp)
 819f7cb:	e8 72 c7 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819f7d0:	bb 00 00 00 00       	mov    $0x0,%ebx
 819f7d5:	e9 73 01 00 00       	jmp    819f94d <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0x255>
 819f7da:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f7dd:	89 04 24             	mov    %eax,(%esp)
 819f7e0:	e8 19 ab f3 ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 819f7e5:	84 c0                	test   %al,%al
 819f7e7:	74 25                	je     819f80e <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0x116>
 819f7e9:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 819f7f0:	00 
 819f7f1:	c7 44 24 04 4c 02 00 	movl   $0x24c,0x4(%esp)
 819f7f8:	00 
 819f7f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f7fc:	89 04 24             	mov    %eax,(%esp)
 819f7ff:	e8 3e c7 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819f804:	bb 00 00 00 00       	mov    $0x0,%ebx
 819f809:	e9 3f 01 00 00       	jmp    819f94d <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0x255>
 819f80e:	8d 45 f2             	lea    -0xe(%ebp),%eax
 819f811:	89 04 24             	mov    %eax,(%esp)
 819f814:	e8 43 11 00 00       	call   81a095c <_ZN4arad27SigAvatarHiddenOptionChangeC1Ev>
 819f819:	8d 45 f2             	lea    -0xe(%ebp),%eax
 819f81c:	89 44 24 04          	mov    %eax,0x4(%esp)
 819f820:	8b 45 10             	mov    0x10(%ebp),%eax
 819f823:	89 04 24             	mov    %eax,(%esp)
 819f826:	e8 95 d7 3e 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 819f82b:	83 f0 01             	xor    $0x1,%eax
 819f82e:	84 c0                	test   %al,%al
 819f830:	74 0a                	je     819f83c <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0x144>
 819f832:	bb 4d 06 00 00       	mov    $0x64d,%ebx
 819f837:	e9 11 01 00 00       	jmp    819f94d <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0x255>
 819f83c:	8d 45 f2             	lea    -0xe(%ebp),%eax
 819f83f:	83 c0 02             	add    $0x2,%eax
 819f842:	89 44 24 04          	mov    %eax,0x4(%esp)
 819f846:	8b 45 10             	mov    0x10(%ebp),%eax
 819f849:	89 04 24             	mov    %eax,(%esp)
 819f84c:	e8 6f d7 3e 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 819f851:	83 f0 01             	xor    $0x1,%eax
 819f854:	84 c0                	test   %al,%al
 819f856:	74 0a                	je     819f862 <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0x16a>
 819f858:	bb 51 06 00 00       	mov    $0x651,%ebx
 819f85d:	e9 eb 00 00 00       	jmp    819f94d <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0x255>
 819f862:	8d 45 f2             	lea    -0xe(%ebp),%eax
 819f865:	89 44 24 08          	mov    %eax,0x8(%esp)
 819f869:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f86c:	89 44 24 04          	mov    %eax,0x4(%esp)
 819f870:	8b 45 08             	mov    0x8(%ebp),%eax
 819f873:	89 04 24             	mov    %eax,(%esp)
 819f876:	e8 db 00 00 00       	call   819f956 <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange14checkWorkStateEP5CUserRN4arad27SigAvatarHiddenOptionChangeE>
 819f87b:	83 f0 01             	xor    $0x1,%eax
 819f87e:	84 c0                	test   %al,%al
 819f880:	74 0a                	je     819f88c <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0x194>
 819f882:	bb 00 00 00 00       	mov    $0x0,%ebx
 819f887:	e9 c1 00 00 00       	jmp    819f94d <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0x255>
 819f88c:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 819f891:	c7 44 24 08 59 06 00 	movl   $0x659,0x8(%esp)
 819f898:	00 
 819f899:	c7 44 24 04 60 9a ba 	movl   $0x8ba9a60,0x4(%esp)
 819f8a0:	08 
 819f8a1:	89 04 24             	mov    %eax,(%esp)
 819f8a4:	e8 dd 01 0f 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 819f8a9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 819f8b0:	00 
 819f8b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 819f8b5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819f8b8:	89 04 24             	mov    %eax,(%esp)
 819f8bb:	e8 66 93 f2 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 819f8c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f8c3:	89 04 24             	mov    %eax,(%esp)
 819f8c6:	e8 cb 93 f2 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 819f8cb:	89 44 24 08          	mov    %eax,0x8(%esp)
 819f8cf:	c7 44 24 04 2e 00 00 	movl   $0x2e,0x4(%esp)
 819f8d6:	00 
 819f8d7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819f8da:	89 04 24             	mov    %eax,(%esp)
 819f8dd:	e8 d4 7e ff ff       	call   81977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>
 819f8e2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819f8e5:	89 04 24             	mov    %eax,(%esp)
 819f8e8:	e8 61 93 f2 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 819f8ed:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 819f8f4:	00 
 819f8f5:	8d 55 f2             	lea    -0xe(%ebp),%edx
 819f8f8:	89 54 24 04          	mov    %edx,0x4(%esp)
 819f8fc:	89 04 24             	mov    %eax,(%esp)
 819f8ff:	e8 4e ed f3 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 819f904:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 819f909:	8d 55 e8             	lea    -0x18(%ebp),%edx
 819f90c:	89 54 24 08          	mov    %edx,0x8(%esp)
 819f910:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 819f917:	00 
 819f918:	89 04 24             	mov    %eax,(%esp)
 819f91b:	e8 be 16 3d 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 819f920:	bb 00 00 00 00       	mov    $0x0,%ebx
 819f925:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819f928:	89 04 24             	mov    %eax,(%esp)
 819f92b:	e8 a2 cf 47 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 819f930:	eb 1b                	jmp    819f94d <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf+0x255>
 819f932:	89 d3                	mov    %edx,%ebx
 819f934:	89 c6                	mov    %eax,%esi
 819f936:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819f939:	89 04 24             	mov    %eax,(%esp)
 819f93c:	e8 91 cf 47 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 819f941:	89 f0                	mov    %esi,%eax
 819f943:	89 da                	mov    %ebx,%edx
 819f945:	89 04 24             	mov    %eax,(%esp)
 819f948:	e8 03 3e 94 00       	call   8ae3750 <_Unwind_Resume>
 819f94d:	89 d8                	mov    %ebx,%eax
 819f94f:	83 c4 20             	add    $0x20,%esp
 819f952:	5b                   	pop    %ebx
 819f953:	5e                   	pop    %esi
 819f954:	5d                   	pop    %ebp
 819f955:	c3                   	ret

```

```c
// ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange::dispatch_sig @ 0x819f6f8

/* ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange::dispatch_sig
          (Dispatcher_AvartarHiddenOptionChange *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  Stream *pSVar5;
  CStreamGuard *this_00;
  undefined4 uVar6;
  CStreamGuard local_1c [10];
  SigAvatarHiddenOptionChange local_12 [2];
  short asStack_10 [2];
  
  if (param_1 == (CUser *)0x0) {
    return 0x632;
  }
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) || (iVar3 = CUser::get_state(param_1), 4 < iVar3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x24c,7);
    return 0;
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar4);
  if (cVar2 == '\0') {
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsFreePvPChannel(pGVar4);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0819f7b1;
    }
  }
  bVar1 = true;
LAB_0819f7b1:
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x24c,7);
    uVar6 = 0;
  }
  else {
    cVar2 = CUser::CheckInTrade(param_1);
    if (cVar2 == '\0') {
      arad::SigAvatarHiddenOptionChange::SigAvatarHiddenOptionChange(local_12);
      cVar2 = PacketBuf::get_short(param_2,(short *)local_12);
      if (cVar2 == '\x01') {
        cVar2 = PacketBuf::get_short(param_2,asStack_10);
        if (cVar2 == '\x01') {
          cVar2 = checkWorkState(this,param_1,local_12);
          if (cVar2 == '\x01') {
            pSVar5 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,
                                         "localjapan/Arad_PacketDispatcher.cpp",0x659);
            CStreamGuard::CStreamGuard(local_1c,pSVar5,true);
            uVar6 = CUser::GetUID(param_1);
                    /* try { // try from 0819f8dd to 0819f91f has its CatchHandler @ 0819f932 */
            make_internal_stream_jpn(local_1c,0x2e,uVar6);
            this_00 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
            CStreamGuard::put_binary(this_00,local_12,6);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_1c);
            uVar6 = 0;
            CStreamGuard::~CStreamGuard(local_1c);
          }
          else {
            uVar6 = 0;
          }
        }
        else {
          uVar6 = 0x651;
        }
      }
      else {
        uVar6 = 0x64d;
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x24c,7);
      uVar6 = 0;
    }
  }
  return uVar6;
}

```

