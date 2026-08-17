# Dispatcher_DonateGuildFund

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081d4970 Dispatcher_DonateGuildFund::process  [0x081d4970-0x81d4b4b] ===
 81d4970:	55                   	push   %ebp
 81d4971:	89 e5                	mov    %esp,%ebp
 81d4973:	57                   	push   %edi
 81d4974:	56                   	push   %esi
 81d4975:	53                   	push   %ebx
 81d4976:	83 ec 3c             	sub    $0x3c,%esp
 81d4979:	8b 45 10             	mov    0x10(%ebp),%eax
 81d497c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81d497f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4982:	89 04 24             	mov    %eax,(%esp)
 81d4985:	e8 02 5a f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d498a:	83 f8 02             	cmp    $0x2,%eax
 81d498d:	0f 9e c0             	setle  %al
 81d4990:	84 c0                	test   %al,%al
 81d4992:	74 0a                	je     81d499e <_ZN26Dispatcher_DonateGuildFund7processEP5CUserR8MSG_BASER9ParamBase+0x2e>
 81d4994:	b8 00 00 00 00       	mov    $0x0,%eax
 81d4999:	e9 a6 01 00 00       	jmp    81d4b44 <_ZN26Dispatcher_DonateGuildFund7processEP5CUserR8MSG_BASER9ParamBase+0x1d4>
 81d499e:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81d49a3:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 81d49aa:	00 
 81d49ab:	8b 55 0c             	mov    0xc(%ebp),%edx
 81d49ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d49b2:	89 04 24             	mov    %eax,(%esp)
 81d49b5:	e8 48 40 0b 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81d49ba:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d49bd:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81d49c1:	74 27                	je     81d49ea <_ZN26Dispatcher_DonateGuildFund7processEP5CUserR8MSG_BASER9ParamBase+0x7a>
 81d49c3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d49c6:	0f b6 c0             	movzbl %al,%eax
 81d49c9:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d49cd:	c7 44 24 04 5b 01 00 	movl   $0x15b,0x4(%esp)
 81d49d4:	00 
 81d49d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d49d8:	89 04 24             	mov    %eax,(%esp)
 81d49db:	e8 62 75 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d49e0:	b8 00 00 00 00       	mov    $0x0,%eax
 81d49e5:	e9 5a 01 00 00       	jmp    81d4b44 <_ZN26Dispatcher_DonateGuildFund7processEP5CUserR8MSG_BASER9ParamBase+0x1d4>
 81d49ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d49ed:	89 04 24             	mov    %eax,(%esp)
 81d49f0:	e8 77 aa 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d49f5:	85 c0                	test   %eax,%eax
 81d49f7:	0f 94 c0             	sete   %al
 81d49fa:	84 c0                	test   %al,%al
 81d49fc:	74 0a                	je     81d4a08 <_ZN26Dispatcher_DonateGuildFund7processEP5CUserR8MSG_BASER9ParamBase+0x98>
 81d49fe:	b8 00 00 00 00       	mov    $0x0,%eax
 81d4a03:	e9 3c 01 00 00       	jmp    81d4b44 <_ZN26Dispatcher_DonateGuildFund7processEP5CUserR8MSG_BASER9ParamBase+0x1d4>
 81d4a08:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d4a0b:	8b 58 0d             	mov    0xd(%eax),%ebx
 81d4a0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4a11:	89 04 24             	mov    %eax,(%esp)
 81d4a14:	e8 6f 57 fa ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 81d4a19:	39 c3                	cmp    %eax,%ebx
 81d4a1b:	0f 9f c0             	setg   %al
 81d4a1e:	84 c0                	test   %al,%al
 81d4a20:	74 25                	je     81d4a47 <_ZN26Dispatcher_DonateGuildFund7processEP5CUserR8MSG_BASER9ParamBase+0xd7>
 81d4a22:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 81d4a29:	00 
 81d4a2a:	c7 44 24 04 5b 01 00 	movl   $0x15b,0x4(%esp)
 81d4a31:	00 
 81d4a32:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4a35:	89 04 24             	mov    %eax,(%esp)
 81d4a38:	e8 05 75 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d4a3d:	b8 00 00 00 00       	mov    $0x0,%eax
 81d4a42:	e9 fd 00 00 00       	jmp    81d4b44 <_ZN26Dispatcher_DonateGuildFund7processEP5CUserR8MSG_BASER9ParamBase+0x1d4>
 81d4a47:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d4a4a:	8b 40 0d             	mov    0xd(%eax),%eax
 81d4a4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d4a51:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4a54:	89 04 24             	mov    %eax,(%esp)
 81d4a57:	e8 c2 77 49 00       	call   866c21e <_ZN5CUser18IsAddableGuildFundEi>
 81d4a5c:	83 f0 01             	xor    $0x1,%eax
 81d4a5f:	84 c0                	test   %al,%al
 81d4a61:	74 25                	je     81d4a88 <_ZN26Dispatcher_DonateGuildFund7processEP5CUserR8MSG_BASER9ParamBase+0x118>
 81d4a63:	c7 44 24 08 5f 00 00 	movl   $0x5f,0x8(%esp)
 81d4a6a:	00 
 81d4a6b:	c7 44 24 04 5b 01 00 	movl   $0x15b,0x4(%esp)
 81d4a72:	00 
 81d4a73:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4a76:	89 04 24             	mov    %eax,(%esp)
 81d4a79:	e8 c4 74 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d4a7e:	b8 00 00 00 00       	mov    $0x0,%eax
 81d4a83:	e9 bc 00 00 00       	jmp    81d4b44 <_ZN26Dispatcher_DonateGuildFund7processEP5CUserR8MSG_BASER9ParamBase+0x1d4>
 81d4a88:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d4a8b:	8b 58 0d             	mov    0xd(%eax),%ebx
 81d4a8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4a91:	89 04 24             	mov    %eax,(%esp)
 81d4a94:	e8 f5 57 f0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81d4a99:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81d4aa0:	00 
 81d4aa1:	c7 44 24 08 2a 00 00 	movl   $0x2a,0x8(%esp)
 81d4aa8:	00 
 81d4aa9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d4aad:	89 04 24             	mov    %eax,(%esp)
 81d4ab0:	e8 97 aa 32 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 81d4ab5:	83 f0 01             	xor    $0x1,%eax
 81d4ab8:	84 c0                	test   %al,%al
 81d4aba:	74 22                	je     81d4ade <_ZN26Dispatcher_DonateGuildFund7processEP5CUserR8MSG_BASER9ParamBase+0x16e>
 81d4abc:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 81d4ac3:	00 
 81d4ac4:	c7 44 24 04 5b 01 00 	movl   $0x15b,0x4(%esp)
 81d4acb:	00 
 81d4acc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4acf:	89 04 24             	mov    %eax,(%esp)
 81d4ad2:	e8 6b 74 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d4ad7:	b8 00 00 00 00       	mov    $0x0,%eax
 81d4adc:	eb 66                	jmp    81d4b44 <_ZN26Dispatcher_DonateGuildFund7processEP5CUserR8MSG_BASER9ParamBase+0x1d4>
 81d4ade:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d4ae1:	8b 78 0d             	mov    0xd(%eax),%edi
 81d4ae4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4ae7:	89 04 24             	mov    %eax,(%esp)
 81d4aea:	e8 7d a9 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d4aef:	89 c3                	mov    %eax,%ebx
 81d4af1:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81d4af8:	ff 
 81d4af9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4afc:	89 04 24             	mov    %eax,(%esp)
 81d4aff:	e8 9c 94 47 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81d4b04:	89 c6                	mov    %eax,%esi
 81d4b06:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4b09:	89 04 24             	mov    %eax,(%esp)
 81d4b0c:	e8 7f 71 ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81d4b11:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 81d4b17:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d4b1b:	89 14 24             	mov    %edx,(%esp)
 81d4b1e:	e8 95 88 f4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81d4b23:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 81d4b2a:	00 
 81d4b2b:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81d4b2f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81d4b33:	89 74 24 04          	mov    %esi,0x4(%esp)
 81d4b37:	89 04 24             	mov    %eax,(%esp)
 81d4b3a:	e8 69 a6 29 00       	call   846f1a8 <_ZN17CGuildServerProxy16SendAddGuildFundEjjiN21Packet_Add_Guild_Fund9eFundTypeE>
 81d4b3f:	b8 00 00 00 00       	mov    $0x0,%eax
 81d4b44:	83 c4 3c             	add    $0x3c,%esp
 81d4b47:	5b                   	pop    %ebx
 81d4b48:	5e                   	pop    %esi
 81d4b49:	5f                   	pop    %edi
 81d4b4a:	5d                   	pop    %ebp
 81d4b4b:	c3                   	ret

```

```c
// Dispatcher_DonateGuildFund::process @ 0x81d4970

/* Dispatcher_DonateGuildFund::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_DonateGuildFund::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  CInventory *pCVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  CGuildServerProxy *pCVar10;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (2 < iVar3) {
    uVar4 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,10);
    if (uVar4 == 0) {
      iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
      if (iVar3 != 0) {
        iVar3 = *(int *)(param_3 + 0xd);
        iVar5 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_2);
        if (iVar5 < iVar3) {
          CUser::SendCmdErrorPacket((CUser *)param_2,0x15b,10);
        }
        else {
          cVar2 = CUser::IsAddableGuildFund((CUser *)param_2,*(int *)(param_3 + 0xd));
          if (cVar2 == '\x01') {
            uVar1 = *(undefined4 *)(param_3 + 0xd);
            pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
            cVar2 = CInventory::use_money(pCVar6,uVar1,0x2a,1);
            if (cVar2 == '\x01') {
              uVar1 = *(undefined4 *)(param_3 + 0xd);
              uVar7 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
              uVar8 = CUser::get_charac_no((CUser *)param_2,-1);
              uVar9 = CUser::GetServerGroup((CUser *)param_2);
              pCVar10 = (CGuildServerProxy *)
                        CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                                  (GlobalData::s_guild_proxy_mgr,uVar9);
              CGuildServerProxy::SendAddGuildFund(pCVar10,uVar8,uVar7,uVar1,1);
            }
            else {
              CUser::SendCmdErrorPacket((CUser *)param_2,0x15b,10);
            }
          }
          else {
            CUser::SendCmdErrorPacket((CUser *)param_2,0x15b,0x5f);
          }
        }
      }
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x15b,uVar4 & 0xff);
    }
  }
  return 0;
}

```

---

## read

```asm
// === 081d4920 Dispatcher_DonateGuildFund::read  [0x081d4920-0x81d496f] ===
 81d4920:	55                   	push   %ebp
 81d4921:	89 e5                	mov    %esp,%ebp
 81d4923:	83 ec 18             	sub    $0x18,%esp
 81d4926:	8b 45 10             	mov    0x10(%ebp),%eax
 81d4929:	83 c0 0d             	add    $0xd,%eax
 81d492c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d4930:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4933:	89 04 24             	mov    %eax,(%esp)
 81d4936:	e8 b5 87 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d493b:	83 f0 01             	xor    $0x1,%eax
 81d493e:	84 c0                	test   %al,%al
 81d4940:	74 26                	je     81d4968 <_ZN26Dispatcher_DonateGuildFund4readER9PacketBufR8MSG_BASE+0x48>
 81d4942:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d4949:	00 
 81d494a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d4951:	00 
 81d4952:	c7 44 24 04 c0 32 bd 	movl   $0x8bd32c0,0x4(%esp)
 81d4959:	08 
 81d495a:	c7 04 24 91 34 00 00 	movl   $0x3491,(%esp)
 81d4961:	e8 71 bf 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d4966:	eb 05                	jmp    81d496d <_ZN26Dispatcher_DonateGuildFund4readER9PacketBufR8MSG_BASE+0x4d>
 81d4968:	b8 00 00 00 00       	mov    $0x0,%eax
 81d496d:	c9                   	leave
 81d496e:	c3                   	ret
 81d496f:	90                   	nop

```

```c
// Dispatcher_DonateGuildFund::read @ 0x81d4920

/* Dispatcher_DonateGuildFund::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_DonateGuildFund::read
          (Dispatcher_DonateGuildFund *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x3491,"virtual int Dispatcher_DonateGuildFund::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}

```

