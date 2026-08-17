# Inter_SecedePower

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d49d6 Inter_SecedePower::dispatch_sig  [0x084d49d6-0x84d4bd1] ===
 84d49d6:	55                   	push   %ebp
 84d49d7:	89 e5                	mov    %esp,%ebp
 84d49d9:	56                   	push   %esi
 84d49da:	53                   	push   %ebx
 84d49db:	83 ec 50             	sub    $0x50,%esp
 84d49de:	8b 45 10             	mov    0x10(%ebp),%eax
 84d49e1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d49e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d49e7:	89 04 24             	mov    %eax,(%esp)
 84d49ea:	e8 9d 59 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d49ef:	83 f8 02             	cmp    $0x2,%eax
 84d49f2:	0f 9e c0             	setle  %al
 84d49f5:	84 c0                	test   %al,%al
 84d49f7:	74 0a                	je     84d4a03 <_ZN17Inter_SecedePower12dispatch_sigEP5CUserPci+0x2d>
 84d49f9:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d49fe:	e9 c6 01 00 00       	jmp    84d4bc9 <_ZN17Inter_SecedePower12dispatch_sigEP5CUserPci+0x1f3>
 84d4a03:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d4a0a:	ff 
 84d4a0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d4a0e:	89 04 24             	mov    %eax,(%esp)
 84d4a11:	e8 8a 95 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d4a16:	89 c2                	mov    %eax,%edx
 84d4a18:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d4a1b:	8b 40 12             	mov    0x12(%eax),%eax
 84d4a1e:	39 c2                	cmp    %eax,%edx
 84d4a20:	0f 95 c0             	setne  %al
 84d4a23:	84 c0                	test   %al,%al
 84d4a25:	74 57                	je     84d4a7e <_ZN17Inter_SecedePower12dispatch_sigEP5CUserPci+0xa8>
 84d4a27:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d4a2a:	8b 58 12             	mov    0x12(%eax),%ebx
 84d4a2d:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d4a34:	ff 
 84d4a35:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d4a38:	89 04 24             	mov    %eax,(%esp)
 84d4a3b:	e8 60 95 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d4a40:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84d4a44:	89 44 24 14          	mov    %eax,0x14(%esp)
 84d4a48:	c7 44 24 10 50 90 c8 	movl   $0x8c89050,0x10(%esp)
 84d4a4f:	08 
 84d4a50:	c7 44 24 0c 20 36 00 	movl   $0x3620,0xc(%esp)
 84d4a57:	00 
 84d4a58:	c7 44 24 08 00 c8 c8 	movl   $0x8c8c800,0x8(%esp)
 84d4a5f:	08 
 84d4a60:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d4a67:	08 
 84d4a68:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d4a6f:	e8 96 f1 5f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d4a74:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d4a79:	e9 4b 01 00 00       	jmp    84d4bc9 <_ZN17Inter_SecedePower12dispatch_sigEP5CUserPci+0x1f3>
 84d4a7e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d4a81:	89 04 24             	mov    %eax,(%esp)
 84d4a84:	e8 c3 92 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d4a89:	c7 44 24 08 b5 00 00 	movl   $0xb5,0x8(%esp)
 84d4a90:	00 
 84d4a91:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d4a98:	00 
 84d4a99:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d4a9c:	89 04 24             	mov    %eax,(%esp)
 84d4a9f:	e8 58 6e bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d4aa4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d4aa7:	8b 40 0a             	mov    0xa(%eax),%eax
 84d4aaa:	85 c0                	test   %eax,%eax
 84d4aac:	75 2e                	jne    84d4adc <_ZN17Inter_SecedePower12dispatch_sigEP5CUserPci+0x106>
 84d4aae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d4ab5:	00 
 84d4ab6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d4ab9:	89 04 24             	mov    %eax,(%esp)
 84d4abc:	e8 5f 6e bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d4ac1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d4ac4:	0f b6 40 16          	movzbl 0x16(%eax),%eax
 84d4ac8:	0f b6 c0             	movzbl %al,%eax
 84d4acb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d4acf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d4ad2:	89 04 24             	mov    %eax,(%esp)
 84d4ad5:	e8 46 6e bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d4ada:	eb 28                	jmp    84d4b04 <_ZN17Inter_SecedePower12dispatch_sigEP5CUserPci+0x12e>
 84d4adc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d4ae3:	00 
 84d4ae4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d4ae7:	89 04 24             	mov    %eax,(%esp)
 84d4aea:	e8 31 6e bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d4aef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d4af2:	8b 40 0a             	mov    0xa(%eax),%eax
 84d4af5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d4af9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d4afc:	89 04 24             	mov    %eax,(%esp)
 84d4aff:	e8 1c 6e bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d4b04:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d4b0b:	00 
 84d4b0c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d4b0f:	89 04 24             	mov    %eax,(%esp)
 84d4b12:	e8 41 6e bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d4b17:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d4b1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d4b1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d4b21:	89 04 24             	mov    %eax,(%esp)
 84d4b24:	e8 91 3a 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d4b29:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d4b2c:	89 04 24             	mov    %eax,(%esp)
 84d4b2f:	e8 30 b6 d5 ff       	call   8230164 <_ZN5CUser14GetGuildDBInfoEv>
 84d4b34:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d4b37:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4b3a:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 84d4b3e:	0f b6 d0             	movzbl %al,%edx
 84d4b41:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4b44:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d4b4b:	00 
 84d4b4c:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d4b50:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d4b54:	8d 45 ca             	lea    -0x36(%ebp),%eax
 84d4b57:	89 04 24             	mov    %eax,(%esp)
 84d4b5a:	e8 3b 86 01 00       	call   84ed19a <_ZN12STGuildProxyC1EPKchh>
 84d4b5f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d4b62:	89 04 24             	mov    %eax,(%esp)
 84d4b65:	e8 02 a9 d5 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 84d4b6a:	89 c3                	mov    %eax,%ebx
 84d4b6c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d4b6f:	89 04 24             	mov    %eax,(%esp)
 84d4b72:	e8 19 71 bf ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84d4b77:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 84d4b7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d4b81:	89 14 24             	mov    %edx,(%esp)
 84d4b84:	e8 2f 88 c4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84d4b89:	8d 55 ca             	lea    -0x36(%ebp),%edx
 84d4b8c:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d4b90:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d4b94:	89 04 24             	mov    %eax,(%esp)
 84d4b97:	e8 c2 9d f9 ff       	call   846e95e <_ZN17CGuildServerProxy20ModifyGuildInfoProxyEjR12STGuildProxy>
 84d4b9c:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d4ba1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d4ba4:	89 04 24             	mov    %eax,(%esp)
 84d4ba7:	e8 d4 92 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d4bac:	eb 1b                	jmp    84d4bc9 <_ZN17Inter_SecedePower12dispatch_sigEP5CUserPci+0x1f3>
 84d4bae:	89 d3                	mov    %edx,%ebx
 84d4bb0:	89 c6                	mov    %eax,%esi
 84d4bb2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d4bb5:	89 04 24             	mov    %eax,(%esp)
 84d4bb8:	e8 c3 92 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d4bbd:	89 f0                	mov    %esi,%eax
 84d4bbf:	89 da                	mov    %ebx,%edx
 84d4bc1:	89 04 24             	mov    %eax,(%esp)
 84d4bc4:	e8 87 eb 60 00       	call   8ae3750 <_Unwind_Resume>
 84d4bc9:	89 d8                	mov    %ebx,%eax
 84d4bcb:	83 c4 50             	add    $0x50,%esp
 84d4bce:	5b                   	pop    %ebx
 84d4bcf:	5e                   	pop    %esi
 84d4bd0:	5d                   	pop    %ebp
 84d4bd1:	c3                   	ret

```

```c
// Inter_SecedePower::dispatch_sig @ 0x84d49d6

/* Inter_SecedePower::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SecedePower::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
  
  local_14 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    iVar1 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar1 == *(int *)(local_14 + 0x12)) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084d4a9f to 084d4b9b has its CatchHandler @ 084d4bae */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0xb5);
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
      STGuildProxy::STGuildProxy(local_3a,local_10,local_10[0x1b],'\0');
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
                 "virtual int Inter_SecedePower::dispatch_sig(CUser*, char*, int)",0x3620,
                 "Inter_SecedePower::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharNo(%d)"
                 ,uVar2,uVar4);
    }
  }
  return 0;
}

```

