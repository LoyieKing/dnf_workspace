# Inter_OwnerisVIP

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e7c90 Inter_OwnerisVIP::dispatch_sig  [0x084e7c90-0x84e7eb7] ===
 84e7c90:	55                   	push   %ebp
 84e7c91:	89 e5                	mov    %esp,%ebp
 84e7c93:	53                   	push   %ebx
 84e7c94:	81 ec d4 00 00 00    	sub    $0xd4,%esp
 84e7c9a:	8b 45 10             	mov    0x10(%ebp),%eax
 84e7c9d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84e7ca0:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 84e7ca4:	75 40                	jne    84e7ce6 <_ZN16Inter_OwnerisVIP12dispatch_sigEP5CUserPci+0x56>
 84e7ca6:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84e7cad:	00 
 84e7cae:	c7 44 24 08 a6 6a 00 	movl   $0x6aa6,0x8(%esp)
 84e7cb5:	00 
 84e7cb6:	c7 44 24 04 c0 b4 c8 	movl   $0x8c8b4c0,0x4(%esp)
 84e7cbd:	08 
 84e7cbe:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e7cc1:	89 04 24             	mov    %eax,(%esp)
 84e7cc4:	e8 4f 7a 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e7cc9:	c7 44 24 04 80 a3 c8 	movl   $0x8c8a380,0x4(%esp)
 84e7cd0:	08 
 84e7cd1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e7cd4:	89 04 24             	mov    %eax,(%esp)
 84e7cd7:	e8 ac 7a 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e7cdc:	b8 a7 6a 00 00       	mov    $0x6aa7,%eax
 84e7ce1:	e9 c9 01 00 00       	jmp    84e7eaf <_ZN16Inter_OwnerisVIP12dispatch_sigEP5CUserPci+0x21f>
 84e7ce6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e7ce9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e7cec:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e7cef:	8b 50 08             	mov    0x8(%eax),%edx
 84e7cf2:	8b 40 04             	mov    0x4(%eax),%eax
 84e7cf5:	89 45 b8             	mov    %eax,-0x48(%ebp)
 84e7cf8:	89 55 bc             	mov    %edx,-0x44(%ebp)
 84e7cfb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e7cfe:	8b 40 22             	mov    0x22(%eax),%eax
 84e7d01:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e7d04:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e7d07:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 84e7d0a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e7d0d:	8b 58 0d             	mov    0xd(%eax),%ebx
 84e7d10:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e7d13:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 84e7d17:	0f b6 c8             	movzbl %al,%ecx
 84e7d1a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e7d1d:	8b 50 26             	mov    0x26(%eax),%edx
 84e7d20:	a1 60 f7 41 09       	mov    0x941f760,%eax
 84e7d25:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84e7d29:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84e7d2d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84e7d31:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 84e7d34:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e7d38:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84e7d3b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e7d3f:	89 04 24             	mov    %eax,(%esp)
 84e7d42:	e8 15 df c8 ff       	call   8175c5c <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi>
 84e7d47:	84 c0                	test   %al,%al
 84e7d49:	0f 84 25 01 00 00    	je     84e7e74 <_ZN16Inter_OwnerisVIP12dispatch_sigEP5CUserPci+0x1e4>
 84e7d4f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84e7d52:	89 45 9c             	mov    %eax,-0x64(%ebp)
 84e7d55:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84e7d58:	89 45 a0             	mov    %eax,-0x60(%ebp)
 84e7d5b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84e7d5e:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 84e7d61:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84e7d64:	89 45 a8             	mov    %eax,-0x58(%ebp)
 84e7d67:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e7d6a:	89 45 ac             	mov    %eax,-0x54(%ebp)
 84e7d6d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84e7d70:	89 45 b0             	mov    %eax,-0x50(%ebp)
 84e7d73:	8d 85 59 ff ff ff    	lea    -0xa7(%ebp),%eax
 84e7d79:	89 04 24             	mov    %eax,(%esp)
 84e7d7c:	e8 17 1d 00 00       	call   84e9a98 <_ZN22PCK_AUCTION_BIDDING_GPC1Ev>
 84e7d81:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e7d84:	89 04 24             	mov    %eax,(%esp)
 84e7d87:	e8 0a 0f be ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84e7d8c:	89 85 6b ff ff ff    	mov    %eax,-0x95(%ebp)
 84e7d92:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e7d95:	89 04 24             	mov    %eax,(%esp)
 84e7d98:	e8 b1 3e be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e7d9d:	89 85 6f ff ff ff    	mov    %eax,-0x91(%ebp)
 84e7da3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e7da6:	89 04 24             	mov    %eax,(%esp)
 84e7da9:	e8 84 86 c3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84e7dae:	83 c0 04             	add    $0x4,%eax
 84e7db1:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 84e7db8:	00 
 84e7db9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e7dbd:	8d 85 59 ff ff ff    	lea    -0xa7(%ebp),%eax
 84e7dc3:	83 c0 1a             	add    $0x1a,%eax
 84e7dc6:	89 04 24             	mov    %eax,(%esp)
 84e7dc9:	e8 02 5b b9 ff       	call   807d8d0 <strncpy@plt>
 84e7dce:	8b 45 b8             	mov    -0x48(%ebp),%eax
 84e7dd1:	8b 55 bc             	mov    -0x44(%ebp),%edx
 84e7dd4:	89 45 84             	mov    %eax,-0x7c(%ebp)
 84e7dd7:	89 55 88             	mov    %edx,-0x78(%ebp)
 84e7dda:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e7ddd:	89 45 80             	mov    %eax,-0x80(%ebp)
 84e7de0:	8b 45 b8             	mov    -0x48(%ebp),%eax
 84e7de3:	8b 55 bc             	mov    -0x44(%ebp),%edx
 84e7de6:	89 45 8c             	mov    %eax,-0x74(%ebp)
 84e7de9:	89 55 90             	mov    %edx,-0x70(%ebp)
 84e7dec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e7def:	89 45 94             	mov    %eax,-0x6c(%ebp)
 84e7df2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e7df5:	89 04 24             	mov    %eax,(%esp)
 84e7df8:	e8 51 3e be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e7dfd:	89 c3                	mov    %eax,%ebx
 84e7dff:	e8 1c a1 d4 ff       	call   8231f20 <_Z16G_CPrePayInfoMgrv>
 84e7e04:	8b 55 8c             	mov    -0x74(%ebp),%edx
 84e7e07:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e7e0b:	8b 55 90             	mov    -0x70(%ebp),%edx
 84e7e0e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84e7e12:	8b 55 94             	mov    -0x6c(%ebp),%edx
 84e7e15:	89 54 24 10          	mov    %edx,0x10(%esp)
 84e7e19:	8b 55 98             	mov    -0x68(%ebp),%edx
 84e7e1c:	89 54 24 14          	mov    %edx,0x14(%esp)
 84e7e20:	8b 55 9c             	mov    -0x64(%ebp),%edx
 84e7e23:	89 54 24 18          	mov    %edx,0x18(%esp)
 84e7e27:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84e7e2a:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 84e7e2e:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 84e7e31:	89 54 24 20          	mov    %edx,0x20(%esp)
 84e7e35:	8b 55 a8             	mov    -0x58(%ebp),%edx
 84e7e38:	89 54 24 24          	mov    %edx,0x24(%esp)
 84e7e3c:	8b 55 ac             	mov    -0x54(%ebp),%edx
 84e7e3f:	89 54 24 28          	mov    %edx,0x28(%esp)
 84e7e43:	8b 55 b0             	mov    -0x50(%ebp),%edx
 84e7e46:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 84e7e4a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e7e4e:	89 04 24             	mov    %eax,(%esp)
 84e7e51:	e8 66 52 00 00       	call   84ed0bc <_ZN14CPrePayInfoMgr16InsertPrePayInfoEi10PrePayInfo>
 84e7e56:	a1 4c be 40 09       	mov    0x940be4c,%eax
 84e7e5b:	8d 95 59 ff ff ff    	lea    -0xa7(%ebp),%edx
 84e7e61:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e7e65:	89 04 24             	mov    %eax,(%esp)
 84e7e68:	e8 bf fd e0 ff       	call   82f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 84e7e6d:	b8 00 00 00 00       	mov    $0x0,%eax
 84e7e72:	eb 3b                	jmp    84e7eaf <_ZN16Inter_OwnerisVIP12dispatch_sigEP5CUserPci+0x21f>
 84e7e74:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e7e7b:	00 
 84e7e7c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e7e7f:	89 04 24             	mov    %eax,(%esp)
 84e7e82:	e8 81 ab 1a 00       	call   8692a08 <_ZN5CUser13SetBuyingGoldEb>
 84e7e87:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84e7e8e:	00 
 84e7e8f:	c7 44 24 08 93 00 00 	movl   $0x93,0x8(%esp)
 84e7e96:	00 
 84e7e97:	c7 44 24 04 bc 00 00 	movl   $0xbc,0x4(%esp)
 84e7e9e:	00 
 84e7e9f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e7ea2:	89 04 24             	mov    %eax,(%esp)
 84e7ea5:	e8 78 41 19 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84e7eaa:	b8 00 00 00 00       	mov    $0x0,%eax
 84e7eaf:	81 c4 d4 00 00 00    	add    $0xd4,%esp
 84e7eb5:	5b                   	pop    %ebx
 84e7eb6:	5d                   	pop    %ebp
 84e7eb7:	c3                   	ret

```

```c
// Inter_OwnerisVIP::dispatch_sig @ 0x84e7c90

/* Inter_OwnerisVIP::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_OwnerisVIP::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  PCK_AUCTION_BIDDING_GP local_ab [18];
  undefined4 local_99;
  undefined4 local_95;
  char acStack_91 [13];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  cMyTrace local_28 [16];
  int local_18;
  CUser *local_14;
  undefined4 local_10;
  
  local_18 = param_3;
  if (param_3 == 0) {
    cMyTrace::cMyTrace(local_28,"virtual int Inter_OwnerisVIP::dispatch_sig(CUser*, char*, int)",
                       0x6aa6,5);
    cMyTrace::operator()(local_28,"[Check point auction error] internal data is null.");
    uVar2 = 0x6aa7;
  }
  else {
    local_14 = (CUser *)param_2;
    local_48 = *(undefined4 *)(param_3 + 8);
    local_4c = *(undefined4 *)(param_3 + 4);
    local_50 = *(undefined4 *)(param_3 + 0x22);
    local_10 = local_50;
    cVar1 = ItemVendingMachine::BuyAuctionItem
                      (GlobalData::s_pItemVendingMachine,(CUser *)param_2,
                       (AuctionNeedInfo *)&local_50,*(int *)(param_3 + 0x26),
                       *(bool *)(param_3 + 0xc),*(int *)(param_3 + 0xd));
    if (cVar1 == '\0') {
      CUser::SetBuyingGold(local_14,false);
      CUser::SendCmdErrorPacket(local_14,0xbc,0x93,1);
      uVar2 = 0;
    }
    else {
      local_68 = local_40;
      local_64 = local_3c;
      local_60 = local_38;
      local_5c = local_34;
      local_58 = local_30;
      local_54 = local_2c;
      PCK_AUCTION_BIDDING_GP::PCK_AUCTION_BIDDING_GP(local_ab);
      local_99 = CUser::GetUID(local_14);
      local_95 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_14);
      iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)local_14);
      strncpy(acStack_91,(char *)(iVar3 + 4),0xd);
      local_80 = local_4c;
      local_7c = local_48;
      local_84 = local_10;
      local_78 = local_4c;
      local_74 = local_48;
      local_70 = local_10;
      uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_14);
      uVar4 = G_CPrePayInfoMgr();
      CPrePayInfoMgr::InsertPrePayInfo
                (uVar4,uVar2,local_78,local_74,local_70,local_6c,local_68,local_64,local_60,local_5c
                 ,local_58,local_54);
      CCeraAuctionServerProxy::SendPacket
                (GlobalData::s_cera_auction_proxy,(PACKET_HEADER *)local_ab);
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

