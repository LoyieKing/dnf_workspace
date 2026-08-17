# Inter_ReplyJoinPower

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d47d4 Inter_ReplyJoinPower::dispatch_sig  [0x084d47d4-0x84d49d5] ===
 84d47d4:	55                   	push   %ebp
 84d47d5:	89 e5                	mov    %esp,%ebp
 84d47d7:	56                   	push   %esi
 84d47d8:	53                   	push   %ebx
 84d47d9:	83 ec 50             	sub    $0x50,%esp
 84d47dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d47df:	89 04 24             	mov    %eax,(%esp)
 84d47e2:	e8 a5 5b c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d47e7:	83 f8 02             	cmp    $0x2,%eax
 84d47ea:	0f 9e c0             	setle  %al
 84d47ed:	84 c0                	test   %al,%al
 84d47ef:	74 0a                	je     84d47fb <_ZN20Inter_ReplyJoinPower12dispatch_sigEP5CUserPci+0x27>
 84d47f1:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d47f6:	e9 d2 01 00 00       	jmp    84d49cd <_ZN20Inter_ReplyJoinPower12dispatch_sigEP5CUserPci+0x1f9>
 84d47fb:	8b 45 10             	mov    0x10(%ebp),%eax
 84d47fe:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d4801:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d4808:	ff 
 84d4809:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d480c:	89 04 24             	mov    %eax,(%esp)
 84d480f:	e8 8c 97 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d4814:	89 c2                	mov    %eax,%edx
 84d4816:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d4819:	8b 40 12             	mov    0x12(%eax),%eax
 84d481c:	39 c2                	cmp    %eax,%edx
 84d481e:	0f 95 c0             	setne  %al
 84d4821:	84 c0                	test   %al,%al
 84d4823:	74 57                	je     84d487c <_ZN20Inter_ReplyJoinPower12dispatch_sigEP5CUserPci+0xa8>
 84d4825:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d4828:	8b 58 12             	mov    0x12(%eax),%ebx
 84d482b:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d4832:	ff 
 84d4833:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d4836:	89 04 24             	mov    %eax,(%esp)
 84d4839:	e8 62 97 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d483e:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84d4842:	89 44 24 14          	mov    %eax,0x14(%esp)
 84d4846:	c7 44 24 10 f8 8f c8 	movl   $0x8c88ff8,0x10(%esp)
 84d484d:	08 
 84d484e:	c7 44 24 0c fc 35 00 	movl   $0x35fc,0xc(%esp)
 84d4855:	00 
 84d4856:	c7 44 24 08 40 c8 c8 	movl   $0x8c8c840,0x8(%esp)
 84d485d:	08 
 84d485e:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d4865:	08 
 84d4866:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d486d:	e8 98 f3 5f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d4872:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d4877:	e9 51 01 00 00       	jmp    84d49cd <_ZN20Inter_ReplyJoinPower12dispatch_sigEP5CUserPci+0x1f9>
 84d487c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d487f:	89 04 24             	mov    %eax,(%esp)
 84d4882:	e8 c5 94 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d4887:	c7 44 24 08 b4 00 00 	movl   $0xb4,0x8(%esp)
 84d488e:	00 
 84d488f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d4896:	00 
 84d4897:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d489a:	89 04 24             	mov    %eax,(%esp)
 84d489d:	e8 5a 70 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d48a2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d48a5:	8b 40 0a             	mov    0xa(%eax),%eax
 84d48a8:	85 c0                	test   %eax,%eax
 84d48aa:	75 2e                	jne    84d48da <_ZN20Inter_ReplyJoinPower12dispatch_sigEP5CUserPci+0x106>
 84d48ac:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d48b3:	00 
 84d48b4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d48b7:	89 04 24             	mov    %eax,(%esp)
 84d48ba:	e8 61 70 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d48bf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d48c2:	0f b6 40 16          	movzbl 0x16(%eax),%eax
 84d48c6:	0f b6 c0             	movzbl %al,%eax
 84d48c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d48cd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d48d0:	89 04 24             	mov    %eax,(%esp)
 84d48d3:	e8 48 70 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d48d8:	eb 28                	jmp    84d4902 <_ZN20Inter_ReplyJoinPower12dispatch_sigEP5CUserPci+0x12e>
 84d48da:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d48e1:	00 
 84d48e2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d48e5:	89 04 24             	mov    %eax,(%esp)
 84d48e8:	e8 33 70 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d48ed:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d48f0:	8b 40 0a             	mov    0xa(%eax),%eax
 84d48f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d48f7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d48fa:	89 04 24             	mov    %eax,(%esp)
 84d48fd:	e8 1e 70 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d4902:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d4909:	00 
 84d490a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d490d:	89 04 24             	mov    %eax,(%esp)
 84d4910:	e8 43 70 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d4915:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d4918:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d491c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d491f:	89 04 24             	mov    %eax,(%esp)
 84d4922:	e8 93 3c 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d4927:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d492a:	89 04 24             	mov    %eax,(%esp)
 84d492d:	e8 32 b8 d5 ff       	call   8230164 <_ZN5CUser14GetGuildDBInfoEv>
 84d4932:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d4935:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d4938:	0f b6 40 16          	movzbl 0x16(%eax),%eax
 84d493c:	0f b6 c8             	movzbl %al,%ecx
 84d493f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4942:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 84d4946:	0f b6 d0             	movzbl %al,%edx
 84d4949:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d494c:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84d4950:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d4954:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d4958:	8d 45 ca             	lea    -0x36(%ebp),%eax
 84d495b:	89 04 24             	mov    %eax,(%esp)
 84d495e:	e8 37 88 01 00       	call   84ed19a <_ZN12STGuildProxyC1EPKchh>
 84d4963:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d4966:	89 04 24             	mov    %eax,(%esp)
 84d4969:	e8 fe aa d5 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 84d496e:	89 c3                	mov    %eax,%ebx
 84d4970:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d4973:	89 04 24             	mov    %eax,(%esp)
 84d4976:	e8 15 73 bf ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84d497b:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 84d4981:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d4985:	89 14 24             	mov    %edx,(%esp)
 84d4988:	e8 2b 8a c4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84d498d:	8d 55 ca             	lea    -0x36(%ebp),%edx
 84d4990:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d4994:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d4998:	89 04 24             	mov    %eax,(%esp)
 84d499b:	e8 be 9f f9 ff       	call   846e95e <_ZN17CGuildServerProxy20ModifyGuildInfoProxyEjR12STGuildProxy>
 84d49a0:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d49a5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d49a8:	89 04 24             	mov    %eax,(%esp)
 84d49ab:	e8 d0 94 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d49b0:	eb 1b                	jmp    84d49cd <_ZN20Inter_ReplyJoinPower12dispatch_sigEP5CUserPci+0x1f9>
 84d49b2:	89 d3                	mov    %edx,%ebx
 84d49b4:	89 c6                	mov    %eax,%esi
 84d49b6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d49b9:	89 04 24             	mov    %eax,(%esp)
 84d49bc:	e8 bf 94 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d49c1:	89 f0                	mov    %esi,%eax
 84d49c3:	89 da                	mov    %ebx,%edx
 84d49c5:	89 04 24             	mov    %eax,(%esp)
 84d49c8:	e8 83 ed 60 00       	call   8ae3750 <_Unwind_Resume>
 84d49cd:	89 d8                	mov    %ebx,%eax
 84d49cf:	83 c4 50             	add    $0x50,%esp
 84d49d2:	5b                   	pop    %ebx
 84d49d3:	5e                   	pop    %esi
 84d49d4:	5d                   	pop    %ebp
 84d49d5:	c3                   	ret

```

```c
// Inter_ReplyJoinPower::dispatch_sig @ 0x84d47d4

/* Inter_ReplyJoinPower::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReplyJoinPower::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  CGuildServerProxy *this;
  STGuildProxy local_3a [26];
  PacketGuard local_20 [12];
  int local_14;
  char *local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_14 = param_3;
    iVar1 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar1 == *(int *)(local_14 + 0x12)) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084d489d to 084d499f has its CatchHandler @ 084d49b2 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0xb4);
      if (*(int *)(local_14 + 10) == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x16));
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(int *)(local_14 + 10));
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      local_10 = (char *)CUser::GetGuildDBInfo((CUser *)param_2);
      STGuildProxy::STGuildProxy(local_3a,local_10,local_10[0x1b],*(uchar *)(local_14 + 0x16));
      uVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
      uVar4 = CUser::GetServerGroup((CUser *)param_2);
      this = (CGuildServerProxy *)
             CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4)
      ;
      CGuildServerProxy::ModifyGuildInfoProxy(this,uVar3,local_3a);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      uVar4 = *(undefined4 *)(local_14 + 0x12);
      uVar2 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_ReplyJoinPower::dispatch_sig(CUser*, char*, int)",0x35fc,
                 "Inter_ReplyJoinPower::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharNo(%d)"
                 ,uVar2,uVar4);
    }
  }
  return 0;
}

```

