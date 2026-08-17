# Inter_CallGuildInviteToInvited

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d2b96 Inter_CallGuildInviteToInvited::dispatch_sig  [0x084d2b96-0x84d2dfd] ===
 84d2b96:	55                   	push   %ebp
 84d2b97:	89 e5                	mov    %esp,%ebp
 84d2b99:	56                   	push   %esi
 84d2b9a:	53                   	push   %ebx
 84d2b9b:	83 ec 40             	sub    $0x40,%esp
 84d2b9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2ba1:	89 04 24             	mov    %eax,(%esp)
 84d2ba4:	e8 e3 77 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d2ba9:	85 c0                	test   %eax,%eax
 84d2bab:	0f 94 c0             	sete   %al
 84d2bae:	84 c0                	test   %al,%al
 84d2bb0:	74 0a                	je     84d2bbc <_ZN30Inter_CallGuildInviteToInvited12dispatch_sigEP5CUserPci+0x26>
 84d2bb2:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d2bb7:	e9 39 02 00 00       	jmp    84d2df5 <_ZN30Inter_CallGuildInviteToInvited12dispatch_sigEP5CUserPci+0x25f>
 84d2bbc:	8b 45 10             	mov    0x10(%ebp),%eax
 84d2bbf:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84d2bc2:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d2bc9:	ff 
 84d2bca:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2bcd:	89 04 24             	mov    %eax,(%esp)
 84d2bd0:	e8 cb b3 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d2bd5:	89 c2                	mov    %eax,%edx
 84d2bd7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d2bda:	8b 40 0a             	mov    0xa(%eax),%eax
 84d2bdd:	39 c2                	cmp    %eax,%edx
 84d2bdf:	0f 95 c0             	setne  %al
 84d2be2:	84 c0                	test   %al,%al
 84d2be4:	74 57                	je     84d2c3d <_ZN30Inter_CallGuildInviteToInvited12dispatch_sigEP5CUserPci+0xa7>
 84d2be6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d2be9:	8b 58 0a             	mov    0xa(%eax),%ebx
 84d2bec:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d2bf3:	ff 
 84d2bf4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2bf7:	89 04 24             	mov    %eax,(%esp)
 84d2bfa:	e8 a1 b3 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d2bff:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84d2c03:	89 44 24 14          	mov    %eax,0x14(%esp)
 84d2c07:	c7 44 24 10 80 8d c8 	movl   $0x8c88d80,0x10(%esp)
 84d2c0e:	08 
 84d2c0f:	c7 44 24 0c 7b 33 00 	movl   $0x337b,0xc(%esp)
 84d2c16:	00 
 84d2c17:	c7 44 24 08 80 ca c8 	movl   $0x8c8ca80,0x8(%esp)
 84d2c1e:	08 
 84d2c1f:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d2c26:	08 
 84d2c27:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d2c2e:	e8 d7 0f 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d2c33:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d2c38:	e9 b8 01 00 00       	jmp    84d2df5 <_ZN30Inter_CallGuildInviteToInvited12dispatch_sigEP5CUserPci+0x25f>
 84d2c3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2c40:	89 04 24             	mov    %eax,(%esp)
 84d2c43:	e8 32 b0 1b 00       	call   868dc7a <_ZN5CUser14alonePlay_ModeEv>
 84d2c48:	84 c0                	test   %al,%al
 84d2c4a:	74 4c                	je     84d2c98 <_ZN30Inter_CallGuildInviteToInvited12dispatch_sigEP5CUserPci+0x102>
 84d2c4c:	c6 45 f6 02          	movb   $0x2,-0xa(%ebp)
 84d2c50:	0f b6 75 f6          	movzbl -0xa(%ebp),%esi
 84d2c54:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2c57:	89 04 24             	mov    %eax,(%esp)
 84d2c5a:	e8 ef 8f bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d2c5f:	89 c3                	mov    %eax,%ebx
 84d2c61:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2c64:	89 04 24             	mov    %eax,(%esp)
 84d2c67:	e8 24 90 bf ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84d2c6c:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 84d2c72:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d2c76:	89 14 24             	mov    %edx,(%esp)
 84d2c79:	e8 3a a7 c4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84d2c7e:	89 74 24 08          	mov    %esi,0x8(%esp)
 84d2c82:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d2c86:	89 04 24             	mov    %eax,(%esp)
 84d2c89:	e8 be b4 f9 ff       	call   846e14c <_ZN17CGuildServerProxy20SendReplyGuildInviteEjh>
 84d2c8e:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d2c93:	e9 5d 01 00 00       	jmp    84d2df5 <_ZN30Inter_CallGuildInviteToInvited12dispatch_sigEP5CUserPci+0x25f>
 84d2c98:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2c9b:	89 04 24             	mov    %eax,(%esp)
 84d2c9e:	e8 ab cf d5 ff       	call   822fc4e <_ZN5CUser16GetGameOptionRefEv>
 84d2ca3:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 84d2caa:	00 
 84d2cab:	89 04 24             	mov    %eax,(%esp)
 84d2cae:	e8 93 45 fe ff       	call   84b7246 <_ZN11CGameOption14get_etc_optionE15ENUM_OPTION_ETC>
 84d2cb3:	66 85 c0             	test   %ax,%ax
 84d2cb6:	0f 95 c0             	setne  %al
 84d2cb9:	84 c0                	test   %al,%al
 84d2cbb:	74 42                	je     84d2cff <_ZN30Inter_CallGuildInviteToInvited12dispatch_sigEP5CUserPci+0x169>
 84d2cbd:	c6 45 f7 03          	movb   $0x3,-0x9(%ebp)
 84d2cc1:	0f b6 75 f7          	movzbl -0x9(%ebp),%esi
 84d2cc5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2cc8:	89 04 24             	mov    %eax,(%esp)
 84d2ccb:	e8 7e 8f bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d2cd0:	89 c3                	mov    %eax,%ebx
 84d2cd2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2cd5:	89 04 24             	mov    %eax,(%esp)
 84d2cd8:	e8 b3 8f bf ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84d2cdd:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 84d2ce3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d2ce7:	89 14 24             	mov    %edx,(%esp)
 84d2cea:	e8 c9 a6 c4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84d2cef:	89 74 24 08          	mov    %esi,0x8(%esp)
 84d2cf3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d2cf7:	89 04 24             	mov    %eax,(%esp)
 84d2cfa:	e8 4d b4 f9 ff       	call   846e14c <_ZN17CGuildServerProxy20SendReplyGuildInviteEjh>
 84d2cff:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d2d02:	89 04 24             	mov    %eax,(%esp)
 84d2d05:	e8 42 b0 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d2d0a:	c7 44 24 08 93 00 00 	movl   $0x93,0x8(%esp)
 84d2d11:	00 
 84d2d12:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d2d19:	00 
 84d2d1a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d2d1d:	89 04 24             	mov    %eax,(%esp)
 84d2d20:	e8 d7 8b bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d2d25:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d2d28:	83 c0 30             	add    $0x30,%eax
 84d2d2b:	89 04 24             	mov    %eax,(%esp)
 84d2d2e:	e8 7d b6 ba ff       	call   807e3b0 <strlen@plt>
 84d2d33:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d2d36:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d2d39:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d2d3d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d2d40:	89 04 24             	mov    %eax,(%esp)
 84d2d43:	e8 f4 8b bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d2d48:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d2d4b:	8d 50 30             	lea    0x30(%eax),%edx
 84d2d4e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d2d51:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d2d55:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d2d59:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d2d5c:	89 04 24             	mov    %eax,(%esp)
 84d2d5f:	e8 80 46 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d2d64:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d2d67:	83 c0 12             	add    $0x12,%eax
 84d2d6a:	89 04 24             	mov    %eax,(%esp)
 84d2d6d:	e8 3e b6 ba ff       	call   807e3b0 <strlen@plt>
 84d2d72:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d2d75:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d2d78:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d2d7c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d2d7f:	89 04 24             	mov    %eax,(%esp)
 84d2d82:	e8 b5 8b bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d2d87:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d2d8a:	8d 50 12             	lea    0x12(%eax),%edx
 84d2d8d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d2d90:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d2d94:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d2d98:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d2d9b:	89 04 24             	mov    %eax,(%esp)
 84d2d9e:	e8 41 46 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d2da3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d2daa:	00 
 84d2dab:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d2dae:	89 04 24             	mov    %eax,(%esp)
 84d2db1:	e8 a2 8b bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d2db6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d2db9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d2dbd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2dc0:	89 04 24             	mov    %eax,(%esp)
 84d2dc3:	e8 f2 57 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d2dc8:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d2dcd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d2dd0:	89 04 24             	mov    %eax,(%esp)
 84d2dd3:	e8 a8 b0 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d2dd8:	eb 1b                	jmp    84d2df5 <_ZN30Inter_CallGuildInviteToInvited12dispatch_sigEP5CUserPci+0x25f>
 84d2dda:	89 d3                	mov    %edx,%ebx
 84d2ddc:	89 c6                	mov    %eax,%esi
 84d2dde:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d2de1:	89 04 24             	mov    %eax,(%esp)
 84d2de4:	e8 97 b0 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d2de9:	89 f0                	mov    %esi,%eax
 84d2deb:	89 da                	mov    %ebx,%edx
 84d2ded:	89 04 24             	mov    %eax,(%esp)
 84d2df0:	e8 5b 09 61 00       	call   8ae3750 <_Unwind_Resume>
 84d2df5:	89 d8                	mov    %ebx,%eax
 84d2df7:	83 c4 40             	add    $0x40,%esp
 84d2dfa:	5b                   	pop    %ebx
 84d2dfb:	5e                   	pop    %esi
 84d2dfc:	5d                   	pop    %ebp
 84d2dfd:	c3                   	ret

```

```c
// Inter_CallGuildInviteToInvited::dispatch_sig @ 0x84d2b96

/* Inter_CallGuildInviteToInvited::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CallGuildInviteToInvited::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  CGuildServerProxy *pCVar7;
  CGameOption *pCVar8;
  PacketGuard local_24 [12];
  int local_18;
  size_t local_14;
  undefined1 local_e;
  undefined1 local_d;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 != 0) {
    local_18 = param_3;
    iVar3 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar3 == *(int *)(local_18 + 10)) {
      cVar1 = CUser::alonePlay_Mode((CUser *)param_2);
      if (cVar1 == '\0') {
        pCVar8 = (CGameOption *)CUser::GetGameOptionRef((CUser *)param_2);
        sVar2 = CGameOption::get_etc_option(pCVar8,0x1e);
        if (sVar2 != 0) {
          local_d = 3;
          uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          uVar6 = CUser::GetServerGroup((CUser *)param_2);
          pCVar7 = (CGuildServerProxy *)
                   CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                             (GlobalData::s_guild_proxy_mgr,uVar6);
          CGuildServerProxy::SendReplyGuildInvite(pCVar7,uVar5,'\x03');
        }
        PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084d2d20 to 084d2dc7 has its CatchHandler @ 084d2dda */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x93);
        local_14 = strlen((char *)(local_18 + 0x30));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_14);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x30),local_14);
        local_14 = strlen((char *)(local_18 + 0x12));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_14);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x12),local_14);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        CUser::Send((CUser *)param_2,local_24);
        PacketGuard::~PacketGuard(local_24);
      }
      else {
        local_e = 2;
        uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        uVar6 = CUser::GetServerGroup((CUser *)param_2);
        pCVar7 = (CGuildServerProxy *)
                 CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                           (GlobalData::s_guild_proxy_mgr,uVar6);
        CGuildServerProxy::SendReplyGuildInvite(pCVar7,uVar5,'\x02');
      }
    }
    else {
      uVar6 = *(undefined4 *)(local_18 + 10);
      uVar4 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_CallGuildInviteToInvited::dispatch_sig(CUser*, char*, int)",
                 0x337b,
                 "MEMBER : Inter_CallGuildInviteToInvited::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar4,uVar6);
    }
  }
  return 0;
}

```

