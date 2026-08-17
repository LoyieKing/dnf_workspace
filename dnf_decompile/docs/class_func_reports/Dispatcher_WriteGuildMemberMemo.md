# Dispatcher_WriteGuildMemberMemo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821e748 Dispatcher_WriteGuildMemberMemo::dispatch_sig  [0x0821e748-0x821ea31] ===
 821e748:	55                   	push   %ebp
 821e749:	89 e5                	mov    %esp,%ebp
 821e74b:	56                   	push   %esi
 821e74c:	53                   	push   %ebx
 821e74d:	83 ec 50             	sub    $0x50,%esp
 821e750:	8b 45 0c             	mov    0xc(%ebp),%eax
 821e753:	89 04 24             	mov    %eax,(%esp)
 821e756:	e8 31 bc eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821e75b:	83 f8 02             	cmp    $0x2,%eax
 821e75e:	7e 0f                	jle    821e76f <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0x27>
 821e760:	8b 45 0c             	mov    0xc(%ebp),%eax
 821e763:	89 04 24             	mov    %eax,(%esp)
 821e766:	e8 c7 1c f0 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 821e76b:	85 c0                	test   %eax,%eax
 821e76d:	75 07                	jne    821e776 <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0x2e>
 821e76f:	b8 01 00 00 00       	mov    $0x1,%eax
 821e774:	eb 05                	jmp    821e77b <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0x33>
 821e776:	b8 00 00 00 00       	mov    $0x0,%eax
 821e77b:	84 c0                	test   %al,%al
 821e77d:	74 2b                	je     821e7aa <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0x62>
 821e77f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821e786:	00 
 821e787:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821e78e:	00 
 821e78f:	c7 44 24 04 20 d2 bc 	movl   $0x8bcd220,0x4(%esp)
 821e796:	08 
 821e797:	c7 04 24 5c d5 00 00 	movl   $0xd55c,(%esp)
 821e79e:	e8 34 21 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821e7a3:	89 c3                	mov    %eax,%ebx
 821e7a5:	e9 7f 02 00 00       	jmp    821ea29 <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0x2e1>
 821e7aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 821e7ad:	89 04 24             	mov    %eax,(%esp)
 821e7b0:	e8 b7 0c 01 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 821e7b5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 821e7b8:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 821e7bc:	75 25                	jne    821e7e3 <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0x9b>
 821e7be:	c7 44 24 08 22 00 00 	movl   $0x22,0x8(%esp)
 821e7c5:	00 
 821e7c6:	c7 44 24 04 e3 00 00 	movl   $0xe3,0x4(%esp)
 821e7cd:	00 
 821e7ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 821e7d1:	89 04 24             	mov    %eax,(%esp)
 821e7d4:	e8 69 d7 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821e7d9:	bb 00 00 00 00       	mov    $0x0,%ebx
 821e7de:	e9 46 02 00 00       	jmp    821ea29 <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0x2e1>
 821e7e3:	8d 45 db             	lea    -0x25(%ebp),%eax
 821e7e6:	ba 15 00 00 00       	mov    $0x15,%edx
 821e7eb:	b9 00 00 00 00       	mov    $0x0,%ecx
 821e7f0:	89 c3                	mov    %eax,%ebx
 821e7f2:	83 e3 01             	and    $0x1,%ebx
 821e7f5:	85 db                	test   %ebx,%ebx
 821e7f7:	74 08                	je     821e801 <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0xb9>
 821e7f9:	88 08                	mov    %cl,(%eax)
 821e7fb:	83 c0 01             	add    $0x1,%eax
 821e7fe:	83 ea 01             	sub    $0x1,%edx
 821e801:	89 c3                	mov    %eax,%ebx
 821e803:	83 e3 02             	and    $0x2,%ebx
 821e806:	85 db                	test   %ebx,%ebx
 821e808:	74 09                	je     821e813 <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0xcb>
 821e80a:	66 89 08             	mov    %cx,(%eax)
 821e80d:	83 c0 02             	add    $0x2,%eax
 821e810:	83 ea 02             	sub    $0x2,%edx
 821e813:	89 d6                	mov    %edx,%esi
 821e815:	83 e6 fc             	and    $0xfffffffc,%esi
 821e818:	bb 00 00 00 00       	mov    $0x0,%ebx
 821e81d:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 821e820:	83 c3 04             	add    $0x4,%ebx
 821e823:	39 f3                	cmp    %esi,%ebx
 821e825:	72 f6                	jb     821e81d <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0xd5>
 821e827:	01 d8                	add    %ebx,%eax
 821e829:	89 d3                	mov    %edx,%ebx
 821e82b:	83 e3 02             	and    $0x2,%ebx
 821e82e:	85 db                	test   %ebx,%ebx
 821e830:	74 06                	je     821e838 <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0xf0>
 821e832:	66 89 08             	mov    %cx,(%eax)
 821e835:	83 c0 02             	add    $0x2,%eax
 821e838:	83 e2 01             	and    $0x1,%edx
 821e83b:	85 d2                	test   %edx,%edx
 821e83d:	74 05                	je     821e844 <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0xfc>
 821e83f:	88 08                	mov    %cl,(%eax)
 821e841:	83 c0 01             	add    $0x1,%eax
 821e844:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 821e84b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821e84e:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e852:	8b 45 10             	mov    0x10(%ebp),%eax
 821e855:	89 04 24             	mov    %eax,(%esp)
 821e858:	e8 93 e8 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 821e85d:	83 f0 01             	xor    $0x1,%eax
 821e860:	84 c0                	test   %al,%al
 821e862:	74 2b                	je     821e88f <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0x147>
 821e864:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821e86b:	00 
 821e86c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821e873:	00 
 821e874:	c7 44 24 04 20 d2 bc 	movl   $0x8bcd220,0x4(%esp)
 821e87b:	08 
 821e87c:	c7 04 24 6a d5 00 00 	movl   $0xd56a,(%esp)
 821e883:	e8 4f 20 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821e888:	89 c3                	mov    %eax,%ebx
 821e88a:	e9 9a 01 00 00       	jmp    821ea29 <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0x2e1>
 821e88f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 821e892:	89 44 24 0c          	mov    %eax,0xc(%esp)
 821e896:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 821e89d:	00 
 821e89e:	8d 45 db             	lea    -0x25(%ebp),%eax
 821e8a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e8a5:	8b 45 10             	mov    0x10(%ebp),%eax
 821e8a8:	89 04 24             	mov    %eax,(%esp)
 821e8ab:	e8 0c ea 36 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 821e8b0:	83 f0 01             	xor    $0x1,%eax
 821e8b3:	84 c0                	test   %al,%al
 821e8b5:	74 2b                	je     821e8e2 <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0x19a>
 821e8b7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821e8be:	00 
 821e8bf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821e8c6:	00 
 821e8c7:	c7 44 24 04 20 d2 bc 	movl   $0x8bcd220,0x4(%esp)
 821e8ce:	08 
 821e8cf:	c7 04 24 6d d5 00 00 	movl   $0xd56d,(%esp)
 821e8d6:	e8 fc 1f 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821e8db:	89 c3                	mov    %eax,%ebx
 821e8dd:	e9 47 01 00 00       	jmp    821ea29 <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0x2e1>
 821e8e2:	e8 b4 d8 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 821e8e7:	8d 55 db             	lea    -0x25(%ebp),%edx
 821e8ea:	89 54 24 04          	mov    %edx,0x4(%esp)
 821e8ee:	89 04 24             	mov    %eax,(%esp)
 821e8f1:	e8 7c 4b 14 00       	call   8363472 <_ZN12CDataManager16hasPreventStringEPKc>
 821e8f6:	84 c0                	test   %al,%al
 821e8f8:	75 18                	jne    821e912 <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0x1ca>
 821e8fa:	e8 9c d8 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 821e8ff:	8d 55 db             	lea    -0x25(%ebp),%edx
 821e902:	89 54 24 04          	mov    %edx,0x4(%esp)
 821e906:	89 04 24             	mov    %eax,(%esp)
 821e909:	e8 00 45 14 00       	call   8362e0e <_ZN12CDataManager30hasSpecialCharacterExceptSpaceEPKc>
 821e90e:	84 c0                	test   %al,%al
 821e910:	74 07                	je     821e919 <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0x1d1>
 821e912:	b8 01 00 00 00       	mov    $0x1,%eax
 821e917:	eb 05                	jmp    821e91e <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0x1d6>
 821e919:	b8 00 00 00 00       	mov    $0x0,%eax
 821e91e:	84 c0                	test   %al,%al
 821e920:	74 25                	je     821e947 <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0x1ff>
 821e922:	c7 44 24 08 6c 00 00 	movl   $0x6c,0x8(%esp)
 821e929:	00 
 821e92a:	c7 44 24 04 e3 00 00 	movl   $0xe3,0x4(%esp)
 821e931:	00 
 821e932:	8b 45 0c             	mov    0xc(%ebp),%eax
 821e935:	89 04 24             	mov    %eax,(%esp)
 821e938:	e8 05 d6 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821e93d:	bb 00 00 00 00       	mov    $0x0,%ebx
 821e942:	e9 e2 00 00 00       	jmp    821ea29 <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0x2e1>
 821e947:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 821e94e:	ff 
 821e94f:	8b 45 0c             	mov    0xc(%ebp),%eax
 821e952:	89 04 24             	mov    %eax,(%esp)
 821e955:	e8 46 f6 42 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 821e95a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 821e95d:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 821e960:	8b 45 0c             	mov    0xc(%ebp),%eax
 821e963:	89 04 24             	mov    %eax,(%esp)
 821e966:	e8 25 d3 ea ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 821e96b:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 821e971:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e975:	89 14 24             	mov    %edx,(%esp)
 821e978:	e8 3b ea ef ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 821e97d:	8d 55 db             	lea    -0x25(%ebp),%edx
 821e980:	89 54 24 10          	mov    %edx,0x10(%esp)
 821e984:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 821e988:	8b 55 f4             	mov    -0xc(%ebp),%edx
 821e98b:	89 54 24 08          	mov    %edx,0x8(%esp)
 821e98f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 821e992:	89 54 24 04          	mov    %edx,0x4(%esp)
 821e996:	89 04 24             	mov    %eax,(%esp)
 821e999:	e8 b6 f8 24 00       	call   846e254 <_ZN17CGuildServerProxy15SendMemoToGuildEjiiPc>
 821e99e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 821e9a1:	89 04 24             	mov    %eax,(%esp)
 821e9a4:	e8 a3 f3 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 821e9a9:	c7 44 24 08 e3 00 00 	movl   $0xe3,0x8(%esp)
 821e9b0:	00 
 821e9b1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821e9b8:	00 
 821e9b9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 821e9bc:	89 04 24             	mov    %eax,(%esp)
 821e9bf:	e8 38 cf ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 821e9c4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821e9cb:	00 
 821e9cc:	8d 45 c8             	lea    -0x38(%ebp),%eax
 821e9cf:	89 04 24             	mov    %eax,(%esp)
 821e9d2:	e8 49 cf ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821e9d7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821e9de:	00 
 821e9df:	8d 45 c8             	lea    -0x38(%ebp),%eax
 821e9e2:	89 04 24             	mov    %eax,(%esp)
 821e9e5:	e8 6e cf ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 821e9ea:	8d 45 c8             	lea    -0x38(%ebp),%eax
 821e9ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e9f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 821e9f4:	89 04 24             	mov    %eax,(%esp)
 821e9f7:	e8 be 9b 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 821e9fc:	bb 00 00 00 00       	mov    $0x0,%ebx
 821ea01:	8d 45 c8             	lea    -0x38(%ebp),%eax
 821ea04:	89 04 24             	mov    %eax,(%esp)
 821ea07:	e8 74 f4 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821ea0c:	eb 1b                	jmp    821ea29 <_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf+0x2e1>
 821ea0e:	89 d3                	mov    %edx,%ebx
 821ea10:	89 c6                	mov    %eax,%esi
 821ea12:	8d 45 c8             	lea    -0x38(%ebp),%eax
 821ea15:	89 04 24             	mov    %eax,(%esp)
 821ea18:	e8 63 f4 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821ea1d:	89 f0                	mov    %esi,%eax
 821ea1f:	89 da                	mov    %ebx,%edx
 821ea21:	89 04 24             	mov    %eax,(%esp)
 821ea24:	e8 27 4d 8c 00       	call   8ae3750 <_Unwind_Resume>
 821ea29:	89 d8                	mov    %ebx,%eax
 821ea2b:	83 c4 50             	add    $0x50,%esp
 821ea2e:	5b                   	pop    %ebx
 821ea2f:	5e                   	pop    %esi
 821ea30:	5d                   	pop    %ebp
 821ea31:	c3                   	ret

```

```c
// Dispatcher_WriteGuildMemberMemo::dispatch_sig @ 0x821e748

/* Dispatcher_WriteGuildMemberMemo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_WriteGuildMemberMemo::dispatch_sig
          (Dispatcher_WriteGuildMemberMemo *this,CUser *param_1,PacketBuf *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  CDataManager *pCVar6;
  CGuildServerProxy *this_00;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  PacketGuard local_3c [12];
  int local_30;
  char local_29;
  char local_28 [20];
  uint local_14;
  int local_10;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) ||
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 == 0)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    uVar4 = LineFunc(0xd55c,
                     "virtual int Dispatcher_WriteGuildMemberMemo::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar4;
  }
  local_14 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
  if (local_14 == 0) {
    CUser::SendCmdErrorPacket(param_1,0xe3,0x22);
    return 0;
  }
  pcVar5 = &local_29;
  uVar7 = 0x15;
  bVar9 = ((uint)pcVar5 & 1) != 0;
  if (bVar9) {
    local_29 = '\0';
    pcVar5 = local_28;
    uVar7 = 0x14;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar7 = uVar7 - 2;
  }
  uVar8 = 0;
  do {
    pcVar1 = pcVar5 + uVar8;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar8 = uVar8 + 4;
  } while (uVar8 < (uVar7 & 0xfffffffc));
  pcVar5 = pcVar5 + uVar8;
  if ((uVar7 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar9) {
    *pcVar5 = '\0';
  }
  local_30 = 0;
  cVar2 = PacketBuf::get_int(param_2,&local_30);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0xd56a,
                     "virtual int Dispatcher_WriteGuildMemberMemo::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar4;
  }
  cVar2 = PacketBuf::get_str(param_2,&local_29,0x15,local_30);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0xd56d,
                     "virtual int Dispatcher_WriteGuildMemberMemo::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar4;
  }
  pCVar6 = (CDataManager *)G_CDataManager();
  cVar2 = CDataManager::hasPreventString(pCVar6,&local_29);
  if (cVar2 == '\0') {
    pCVar6 = (CDataManager *)G_CDataManager();
    cVar2 = CDataManager::hasSpecialCharacterExceptSpace(pCVar6,&local_29);
    if (cVar2 == '\0') {
      bVar9 = false;
      goto LAB_0821e91e;
    }
  }
  bVar9 = true;
LAB_0821e91e:
  if (bVar9) {
    CUser::SendCmdErrorPacket(param_1,0xe3,0x6c);
  }
  else {
    local_10 = CUser::get_charac_no(param_1,-1);
    iVar3 = local_30;
    uVar4 = CUser::GetServerGroup(param_1);
    this_00 = (CGuildServerProxy *)
              CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                        (GlobalData::s_guild_proxy_mgr,uVar4);
    CGuildServerProxy::SendMemoToGuild(this_00,local_14,local_10,iVar3,&local_29);
    PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 0821e9bf to 0821e9fb has its CatchHandler @ 0821ea0e */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,1,0xe3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
    CUser::Send(param_1,local_3c);
    PacketGuard::~PacketGuard(local_3c);
  }
  return 0;
}

```

