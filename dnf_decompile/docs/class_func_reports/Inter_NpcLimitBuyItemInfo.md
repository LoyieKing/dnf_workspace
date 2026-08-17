# Inter_NpcLimitBuyItemInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## Inter_NpcLimitBuyItemInfo

```asm
// === 084e6502 Inter_NpcLimitBuyItemInfo::Inter_NpcLimitBuyItemInfo  [0x084e6502-0x84e6553] ===
 84e6502:	55                   	push   %ebp
 84e6503:	89 e5                	mov    %esp,%ebp
 84e6505:	83 ec 18             	sub    $0x18,%esp
 84e6508:	8b 45 08             	mov    0x8(%ebp),%eax
 84e650b:	89 04 24             	mov    %eax,(%esp)
 84e650e:	e8 ed 35 00 00       	call   84e9b00 <_ZN14ISigDispatcherC1Ev>
 84e6513:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6516:	c7 00 28 e5 c8 08    	movl   $0x8c8e528,(%eax)
 84e651c:	8b 45 08             	mov    0x8(%ebp),%eax
 84e651f:	83 c0 08             	add    $0x8,%eax
 84e6522:	89 04 24             	mov    %eax,(%esp)
 84e6525:	e8 64 f7 cc ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 84e652a:	8b 45 08             	mov    0x8(%ebp),%eax
 84e652d:	83 c0 1d             	add    $0x1d,%eax
 84e6530:	89 04 24             	mov    %eax,(%esp)
 84e6533:	e8 1c 53 be ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84e6538:	8b 45 08             	mov    0x8(%ebp),%eax
 84e653b:	83 c0 5a             	add    $0x5a,%eax
 84e653e:	89 04 24             	mov    %eax,(%esp)
 84e6541:	e8 0e 53 be ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84e6546:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6549:	89 04 24             	mov    %eax,(%esp)
 84e654c:	e8 c9 08 00 00       	call   84e6e1a <_ZN25Inter_NpcLimitBuyItemInfo5resetEv>
 84e6551:	c9                   	leave
 84e6552:	c3                   	ret
 84e6553:	90                   	nop

```

```c
// Inter_NpcLimitBuyItemInfo::Inter_NpcLimitBuyItemInfo @ 0x84e6502

/* Inter_NpcLimitBuyItemInfo::Inter_NpcLimitBuyItemInfo() */

void __thiscall
Inter_NpcLimitBuyItemInfo::Inter_NpcLimitBuyItemInfo(Inter_NpcLimitBuyItemInfo *this)

{
  ISigDispatcher::ISigDispatcher((ISigDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_sig_08c8e528;
  std::pair<int,int>::pair((pair<int,int> *)(this + 8));
  Inven_Item::Inven_Item((Inven_Item *)(this + 0x1d));
  Inven_Item::Inven_Item((Inven_Item *)(this + 0x5a));
  reset(this);
  return;
}

```

---

## checkError

```asm
// === 084e6acc Inter_NpcLimitBuyItemInfo::checkError  [0x084e6acc-0x84e6c41] ===
 84e6acc:	55                   	push   %ebp
 84e6acd:	89 e5                	mov    %esp,%ebp
 84e6acf:	56                   	push   %esi
 84e6ad0:	53                   	push   %ebx
 84e6ad1:	83 ec 10             	sub    $0x10,%esp
 84e6ad4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84e6ad8:	75 0a                	jne    84e6ae4 <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo+0x18>
 84e6ada:	b8 03 00 00 00       	mov    $0x3,%eax
 84e6adf:	e9 57 01 00 00       	jmp    84e6c3b <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo+0x16f>
 84e6ae4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e6ae7:	89 04 24             	mov    %eax,(%esp)
 84e6aea:	e8 9d 38 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e6aef:	83 f8 02             	cmp    $0x2,%eax
 84e6af2:	0f 9e c0             	setle  %al
 84e6af5:	84 c0                	test   %al,%al
 84e6af7:	74 0a                	je     84e6b03 <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo+0x37>
 84e6af9:	b8 03 00 00 00       	mov    $0x3,%eax
 84e6afe:	e9 38 01 00 00       	jmp    84e6c3b <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo+0x16f>
 84e6b03:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84e6b0a:	ff 
 84e6b0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e6b0e:	89 04 24             	mov    %eax,(%esp)
 84e6b11:	e8 8a 74 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84e6b16:	89 c2                	mov    %eax,%edx
 84e6b18:	8b 45 10             	mov    0x10(%ebp),%eax
 84e6b1b:	8b 40 12             	mov    0x12(%eax),%eax
 84e6b1e:	39 c2                	cmp    %eax,%edx
 84e6b20:	0f 95 c0             	setne  %al
 84e6b23:	84 c0                	test   %al,%al
 84e6b25:	74 0a                	je     84e6b31 <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo+0x65>
 84e6b27:	b8 03 00 00 00       	mov    $0x3,%eax
 84e6b2c:	e9 0a 01 00 00       	jmp    84e6c3b <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo+0x16f>
 84e6b31:	8b 45 10             	mov    0x10(%ebp),%eax
 84e6b34:	8b 50 16             	mov    0x16(%eax),%edx
 84e6b37:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6b3a:	89 50 04             	mov    %edx,0x4(%eax)
 84e6b3d:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6b40:	8b 40 04             	mov    0x4(%eax),%eax
 84e6b43:	85 c0                	test   %eax,%eax
 84e6b45:	75 0a                	jne    84e6b51 <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo+0x85>
 84e6b47:	b8 11 00 00 00       	mov    $0x11,%eax
 84e6b4c:	e9 ea 00 00 00       	jmp    84e6c3b <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo+0x16f>
 84e6b51:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6b54:	8b 40 04             	mov    0x4(%eax),%eax
 84e6b57:	89 c3                	mov    %eax,%ebx
 84e6b59:	e8 3d 56 be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84e6b5e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e6b62:	89 04 24             	mov    %eax,(%esp)
 84e6b65:	e8 c8 8e e7 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84e6b6a:	8b 55 08             	mov    0x8(%ebp),%edx
 84e6b6d:	89 42 18             	mov    %eax,0x18(%edx)
 84e6b70:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6b73:	8b 40 18             	mov    0x18(%eax),%eax
 84e6b76:	85 c0                	test   %eax,%eax
 84e6b78:	75 0a                	jne    84e6b84 <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo+0xb8>
 84e6b7a:	b8 11 00 00 00       	mov    $0x11,%eax
 84e6b7f:	e9 b7 00 00 00       	jmp    84e6c3b <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo+0x16f>
 84e6b84:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6b87:	8b 40 18             	mov    0x18(%eax),%eax
 84e6b8a:	89 04 24             	mov    %eax,(%esp)
 84e6b8d:	e8 62 6b 02 00       	call   850d6f4 <_ZNK5CItem15GetNeedMaterialEv>
 84e6b92:	8b 4d 08             	mov    0x8(%ebp),%ecx
 84e6b95:	8b 50 04             	mov    0x4(%eax),%edx
 84e6b98:	8b 00                	mov    (%eax),%eax
 84e6b9a:	89 41 08             	mov    %eax,0x8(%ecx)
 84e6b9d:	89 51 0c             	mov    %edx,0xc(%ecx)
 84e6ba0:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6ba3:	8b 40 08             	mov    0x8(%eax),%eax
 84e6ba6:	85 c0                	test   %eax,%eax
 84e6ba8:	74 0b                	je     84e6bb5 <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo+0xe9>
 84e6baa:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6bad:	8b 40 08             	mov    0x8(%eax),%eax
 84e6bb0:	83 f8 ff             	cmp    $0xffffffff,%eax
 84e6bb3:	75 07                	jne    84e6bbc <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo+0xf0>
 84e6bb5:	b8 17 00 00 00       	mov    $0x17,%eax
 84e6bba:	eb 7f                	jmp    84e6c3b <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo+0x16f>
 84e6bbc:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6bbf:	8d 70 5a             	lea    0x5a(%eax),%esi
 84e6bc2:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6bc5:	8b 58 08             	mov    0x8(%eax),%ebx
 84e6bc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e6bcb:	89 04 24             	mov    %eax,(%esp)
 84e6bce:	e8 f7 97 c9 ff       	call   81803ca <_ZNK15CUserCharacInfo21getCurCharacInvenRefREv>
 84e6bd3:	89 74 24 08          	mov    %esi,0x8(%esp)
 84e6bd7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e6bdb:	89 04 24             	mov    %eax,(%esp)
 84e6bde:	e8 49 53 01 00       	call   84fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>
 84e6be3:	8b 55 08             	mov    0x8(%ebp),%edx
 84e6be6:	89 42 14             	mov    %eax,0x14(%edx)
 84e6be9:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6bec:	8b 40 14             	mov    0x14(%eax),%eax
 84e6bef:	c1 e8 1f             	shr    $0x1f,%eax
 84e6bf2:	84 c0                	test   %al,%al
 84e6bf4:	74 07                	je     84e6bfd <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo+0x131>
 84e6bf6:	b8 15 00 00 00       	mov    $0x15,%eax
 84e6bfb:	eb 3e                	jmp    84e6c3b <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo+0x16f>
 84e6bfd:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6c00:	8b 40 0c             	mov    0xc(%eax),%eax
 84e6c03:	85 c0                	test   %eax,%eax
 84e6c05:	7e 18                	jle    84e6c1f <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo+0x153>
 84e6c07:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6c0a:	8b 58 0c             	mov    0xc(%eax),%ebx
 84e6c0d:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6c10:	83 c0 5a             	add    $0x5a,%eax
 84e6c13:	89 04 24             	mov    %eax,(%esp)
 84e6c16:	e8 1f 0c c1 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 84e6c1b:	39 c3                	cmp    %eax,%ebx
 84e6c1d:	7e 07                	jle    84e6c26 <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo+0x15a>
 84e6c1f:	b8 01 00 00 00       	mov    $0x1,%eax
 84e6c24:	eb 05                	jmp    84e6c2b <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo+0x15f>
 84e6c26:	b8 00 00 00 00       	mov    $0x0,%eax
 84e6c2b:	84 c0                	test   %al,%al
 84e6c2d:	74 07                	je     84e6c36 <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo+0x16a>
 84e6c2f:	b8 16 00 00 00       	mov    $0x16,%eax
 84e6c34:	eb 05                	jmp    84e6c3b <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo+0x16f>
 84e6c36:	b8 00 00 00 00       	mov    $0x0,%eax
 84e6c3b:	83 c4 10             	add    $0x10,%esp
 84e6c3e:	5b                   	pop    %ebx
 84e6c3f:	5e                   	pop    %esi
 84e6c40:	5d                   	pop    %ebp
 84e6c41:	c3                   	ret

```

```c
// Inter_NpcLimitBuyItemInfo::checkError @ 0x84e6acc

/* Inter_NpcLimitBuyItemInfo::checkError(CUser*, LimitNpcBuyItemInfo*) */

undefined4 __thiscall
Inter_NpcLimitBuyItemInfo::checkError
          (Inter_NpcLimitBuyItemInfo *this,CUser *param_1,LimitNpcBuyItemInfo *param_2)

{
  bool bVar1;
  int iVar2;
  CDataManager *this_00;
  undefined4 uVar3;
  undefined4 *puVar4;
  CInventory *this_01;
  int iVar5;
  
  if (param_1 == (CUser *)0x0) {
    return 3;
  }
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    return 3;
  }
  iVar2 = CUser::get_charac_no(param_1,-1);
  if (iVar2 != *(int *)(param_2 + 0x12)) {
    return 3;
  }
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_2 + 0x16);
  if (*(int *)(this + 4) != 0) {
    iVar2 = *(int *)(this + 4);
    this_00 = (CDataManager *)G_CDataManager();
    uVar3 = CDataManager::find_item(this_00,iVar2);
    *(undefined4 *)(this + 0x18) = uVar3;
    if (*(int *)(this + 0x18) == 0) {
      return 0x11;
    }
    puVar4 = (undefined4 *)CItem::GetNeedMaterial(*(CItem **)(this + 0x18));
    uVar3 = puVar4[1];
    *(undefined4 *)(this + 8) = *puVar4;
    *(undefined4 *)(this + 0xc) = uVar3;
    if ((*(int *)(this + 8) != 0) && (*(int *)(this + 8) != -1)) {
      iVar2 = *(int *)(this + 8);
      this_01 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
      uVar3 = CInventory::GetInvenData(this_01,iVar2,(Inven_Item *)(this + 0x5a));
      *(undefined4 *)(this + 0x14) = uVar3;
      if (-1 < *(int *)(this + 0x14)) {
        if ((*(int *)(this + 0xc) < 1) ||
           (iVar2 = *(int *)(this + 0xc),
           iVar5 = Inven_Item::get_add_info((Inven_Item *)(this + 0x5a)), iVar5 < iVar2)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          uVar3 = 0x16;
        }
        else {
          uVar3 = 0;
        }
        return uVar3;
      }
      return 0x15;
    }
    return 0x17;
  }
  return 0x11;
}

```

---

## dispatch_sig

```asm
// === 084e65a2 Inter_NpcLimitBuyItemInfo::dispatch_sig  [0x084e65a2-0x84e6acb] ===
 84e65a2:	55                   	push   %ebp
 84e65a3:	89 e5                	mov    %esp,%ebp
 84e65a5:	56                   	push   %esi
 84e65a6:	53                   	push   %ebx
 84e65a7:	81 ec d0 02 00 00    	sub    $0x2d0,%esp
 84e65ad:	8b 45 08             	mov    0x8(%ebp),%eax
 84e65b0:	89 04 24             	mov    %eax,(%esp)
 84e65b3:	e8 62 08 00 00       	call   84e6e1a <_ZN25Inter_NpcLimitBuyItemInfo5resetEv>
 84e65b8:	8b 45 10             	mov    0x10(%ebp),%eax
 84e65bb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e65be:	8d 45 d2             	lea    -0x2e(%ebp),%eax
 84e65c1:	89 04 24             	mov    %eax,(%esp)
 84e65c4:	e8 a7 2f 00 00       	call   84e9570 <_ZN21LimitNpcBuyItemUpdateC1Ev>
 84e65c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e65cc:	8b 58 0a             	mov    0xa(%eax),%ebx
 84e65cf:	e8 ba 5b be ff       	call   80cc18e <_Z14G_CGameManagerv>
 84e65d4:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 84e65db:	00 
 84e65dc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e65e0:	89 04 24             	mov    %eax,(%esp)
 84e65e3:	e8 bc e1 da ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 84e65e8:	89 45 0c             	mov    %eax,0xc(%ebp)
 84e65eb:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84e65ef:	75 60                	jne    84e6651 <_ZN25Inter_NpcLimitBuyItemInfo12dispatch_sigEP5CUserPci+0xaf>
 84e65f1:	c7 45 e8 03 00 00 00 	movl   $0x3,-0x18(%ebp)
 84e65f8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e65fb:	8b 40 16             	mov    0x16(%eax),%eax
 84e65fe:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84e6601:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e6604:	8b 40 12             	mov    0x12(%eax),%eax
 84e6607:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84e660a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e660d:	8b 40 1a             	mov    0x1a(%eax),%eax
 84e6610:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84e6613:	8d 5d d2             	lea    -0x2e(%ebp),%ebx
 84e6616:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e6619:	89 04 24             	mov    %eax,(%esp)
 84e661c:	e8 6f 56 be ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84e6621:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 84e6627:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e662b:	89 14 24             	mov    %edx,(%esp)
 84e662e:	e8 57 ba c2 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84e6633:	c7 44 24 08 1a 00 00 	movl   $0x1a,0x8(%esp)
 84e663a:	00 
 84e663b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e663f:	89 04 24             	mov    %eax,(%esp)
 84e6642:	e8 ad a7 f8 ff       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 84e6647:	b8 00 00 00 00       	mov    $0x0,%eax
 84e664c:	e9 71 04 00 00       	jmp    84e6ac2 <_ZN25Inter_NpcLimitBuyItemInfo12dispatch_sigEP5CUserPci+0x520>
 84e6651:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e6654:	8b 40 22             	mov    0x22(%eax),%eax
 84e6657:	85 c0                	test   %eax,%eax
 84e6659:	74 2a                	je     84e6685 <_ZN25Inter_NpcLimitBuyItemInfo12dispatch_sigEP5CUserPci+0xe3>
 84e665b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e665e:	8b 40 22             	mov    0x22(%eax),%eax
 84e6661:	0f b6 c0             	movzbl %al,%eax
 84e6664:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e6668:	c7 44 24 04 d1 01 00 	movl   $0x1d1,0x4(%esp)
 84e666f:	00 
 84e6670:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e6673:	89 04 24             	mov    %eax,(%esp)
 84e6676:	e8 c7 58 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84e667b:	b8 00 00 00 00       	mov    $0x0,%eax
 84e6680:	e9 3d 04 00 00       	jmp    84e6ac2 <_ZN25Inter_NpcLimitBuyItemInfo12dispatch_sigEP5CUserPci+0x520>
 84e6685:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e6688:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e668c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e668f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e6693:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6696:	89 04 24             	mov    %eax,(%esp)
 84e6699:	e8 2e 04 00 00       	call   84e6acc <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo>
 84e669e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84e66a1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e66a4:	85 c0                	test   %eax,%eax
 84e66a6:	0f 84 83 00 00 00    	je     84e672f <_ZN25Inter_NpcLimitBuyItemInfo12dispatch_sigEP5CUserPci+0x18d>
 84e66ac:	8b 45 08             	mov    0x8(%ebp),%eax
 84e66af:	8b 40 04             	mov    0x4(%eax),%eax
 84e66b2:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84e66b5:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84e66bc:	ff 
 84e66bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e66c0:	89 04 24             	mov    %eax,(%esp)
 84e66c3:	e8 d8 78 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84e66c8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84e66cb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e66ce:	8b 40 1a             	mov    0x1a(%eax),%eax
 84e66d1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84e66d4:	8d 5d d2             	lea    -0x2e(%ebp),%ebx
 84e66d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e66da:	89 04 24             	mov    %eax,(%esp)
 84e66dd:	e8 ae 55 be ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84e66e2:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 84e66e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e66ec:	89 14 24             	mov    %edx,(%esp)
 84e66ef:	e8 96 b9 c2 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84e66f4:	c7 44 24 08 1a 00 00 	movl   $0x1a,0x8(%esp)
 84e66fb:	00 
 84e66fc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e6700:	89 04 24             	mov    %eax,(%esp)
 84e6703:	e8 ec a6 f8 ff       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 84e6708:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e670b:	0f b6 c0             	movzbl %al,%eax
 84e670e:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e6712:	c7 44 24 04 d1 01 00 	movl   $0x1d1,0x4(%esp)
 84e6719:	00 
 84e671a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e671d:	89 04 24             	mov    %eax,(%esp)
 84e6720:	e8 1d 58 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84e6725:	b8 00 00 00 00       	mov    $0x0,%eax
 84e672a:	e9 93 03 00 00       	jmp    84e6ac2 <_ZN25Inter_NpcLimitBuyItemInfo12dispatch_sigEP5CUserPci+0x520>
 84e672f:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6732:	8b 50 04             	mov    0x4(%eax),%edx
 84e6735:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6738:	89 50 1f             	mov    %edx,0x1f(%eax)
 84e673b:	8b 45 08             	mov    0x8(%ebp),%eax
 84e673e:	8d 58 1d             	lea    0x1d(%eax),%ebx
 84e6741:	e8 55 5a be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84e6746:	8b 40 0c             	mov    0xc(%eax),%eax
 84e6749:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84e6750:	00 
 84e6751:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e6755:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e675c:	00 
 84e675d:	89 04 24             	mov    %eax,(%esp)
 84e6760:	e8 53 b8 02 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 84e6765:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e6768:	89 04 24             	mov    %eax,(%esp)
 84e676b:	e8 1e 3b bf ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84e6770:	89 c2                	mov    %eax,%edx
 84e6772:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 84e6779:	00 
 84e677a:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 84e6781:	00 
 84e6782:	c7 44 24 44 00 00 00 	movl   $0x0,0x44(%esp)
 84e6789:	00 
 84e678a:	8b 45 08             	mov    0x8(%ebp),%eax
 84e678d:	8b 48 1d             	mov    0x1d(%eax),%ecx
 84e6790:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84e6794:	8b 48 21             	mov    0x21(%eax),%ecx
 84e6797:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84e679b:	8b 48 25             	mov    0x25(%eax),%ecx
 84e679e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84e67a2:	8b 48 29             	mov    0x29(%eax),%ecx
 84e67a5:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84e67a9:	8b 48 2d             	mov    0x2d(%eax),%ecx
 84e67ac:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 84e67b0:	8b 48 31             	mov    0x31(%eax),%ecx
 84e67b3:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 84e67b7:	8b 48 35             	mov    0x35(%eax),%ecx
 84e67ba:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 84e67be:	8b 48 39             	mov    0x39(%eax),%ecx
 84e67c1:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 84e67c5:	8b 48 3d             	mov    0x3d(%eax),%ecx
 84e67c8:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 84e67cc:	8b 48 41             	mov    0x41(%eax),%ecx
 84e67cf:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 84e67d3:	8b 48 45             	mov    0x45(%eax),%ecx
 84e67d6:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 84e67da:	8b 48 49             	mov    0x49(%eax),%ecx
 84e67dd:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 84e67e1:	8b 48 4d             	mov    0x4d(%eax),%ecx
 84e67e4:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 84e67e8:	8b 48 51             	mov    0x51(%eax),%ecx
 84e67eb:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 84e67ef:	8b 48 55             	mov    0x55(%eax),%ecx
 84e67f2:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 84e67f6:	0f b6 40 59          	movzbl 0x59(%eax),%eax
 84e67fa:	88 44 24 40          	mov    %al,0x40(%esp)
 84e67fe:	89 14 24             	mov    %edx,(%esp)
 84e6801:	e8 80 c5 01 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 84e6806:	8b 55 08             	mov    0x8(%ebp),%edx
 84e6809:	89 42 10             	mov    %eax,0x10(%edx)
 84e680c:	8b 45 08             	mov    0x8(%ebp),%eax
 84e680f:	c6 40 1c 00          	movb   $0x0,0x1c(%eax)
 84e6813:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6816:	8b 40 10             	mov    0x10(%eax),%eax
 84e6819:	85 c0                	test   %eax,%eax
 84e681b:	0f 89 e8 01 00 00    	jns    84e6a09 <_ZN25Inter_NpcLimitBuyItemInfo12dispatch_sigEP5CUserPci+0x467>
 84e6821:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84e6824:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e682b:	00 
 84e682c:	c7 44 24 08 36 04 00 	movl   $0x436,0x8(%esp)
 84e6833:	00 
 84e6834:	c7 44 24 04 60 a6 3f 	movl   $0x93fa660,0x4(%esp)
 84e683b:	09 
 84e683c:	89 04 24             	mov    %eax,(%esp)
 84e683f:	e8 24 fe bd ff       	call   80c6668 <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>
 84e6844:	83 ec 04             	sub    $0x4,%esp
 84e6847:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84e684a:	89 04 24             	mov    %eax,(%esp)
 84e684d:	e8 9e fc 21 00       	call   87064f0 <_ZNKSs5c_strEv>
 84e6852:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 84e6859:	00 
 84e685a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e685e:	8d 45 bd             	lea    -0x43(%ebp),%eax
 84e6861:	89 04 24             	mov    %eax,(%esp)
 84e6864:	e8 67 70 b9 ff       	call   807d8d0 <strncpy@plt>
 84e6869:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84e686c:	89 04 24             	mov    %eax,(%esp)
 84e686f:	e8 6c 13 22 00       	call   8707be0 <_ZNSsD1Ev>
 84e6874:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84e6877:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e687e:	00 
 84e687f:	c7 44 24 08 37 04 00 	movl   $0x437,0x8(%esp)
 84e6886:	00 
 84e6887:	c7 44 24 04 60 a6 3f 	movl   $0x93fa660,0x4(%esp)
 84e688e:	09 
 84e688f:	89 04 24             	mov    %eax,(%esp)
 84e6892:	e8 d1 fd bd ff       	call   80c6668 <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>
 84e6897:	83 ec 04             	sub    $0x4,%esp
 84e689a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84e689d:	89 04 24             	mov    %eax,(%esp)
 84e68a0:	e8 4b fc 21 00       	call   87064f0 <_ZNKSs5c_strEv>
 84e68a5:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 84e68ac:	00 
 84e68ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e68b1:	8d 85 bd fe ff ff    	lea    -0x143(%ebp),%eax
 84e68b7:	89 04 24             	mov    %eax,(%esp)
 84e68ba:	e8 11 70 b9 ff       	call   807d8d0 <strncpy@plt>
 84e68bf:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84e68c2:	89 04 24             	mov    %eax,(%esp)
 84e68c5:	e8 16 13 22 00       	call   8707be0 <_ZNSsD1Ev>
 84e68ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e68cd:	89 04 24             	mov    %eax,(%esp)
 84e68d0:	e8 bb 53 be ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84e68d5:	89 c3                	mov    %eax,%ebx
 84e68d7:	8d 85 bd fe ff ff    	lea    -0x143(%ebp),%eax
 84e68dd:	89 04 24             	mov    %eax,(%esp)
 84e68e0:	e8 cb 7a b9 ff       	call   807e3b0 <strlen@plt>
 84e68e5:	89 c6                	mov    %eax,%esi
 84e68e7:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84e68ee:	ff 
 84e68ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e68f2:	89 04 24             	mov    %eax,(%esp)
 84e68f5:	e8 a6 76 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84e68fa:	8b 55 08             	mov    0x8(%ebp),%edx
 84e68fd:	8d 4a 1d             	lea    0x1d(%edx),%ecx
 84e6900:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84e6907:	00 
 84e6908:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 84e690f:	00 
 84e6910:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84e6914:	c7 44 24 18 1e 00 00 	movl   $0x1e,0x18(%esp)
 84e691b:	00 
 84e691c:	89 74 24 14          	mov    %esi,0x14(%esp)
 84e6920:	8d 95 bd fe ff ff    	lea    -0x143(%ebp),%edx
 84e6926:	89 54 24 10          	mov    %edx,0x10(%esp)
 84e692a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84e692e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84e6935:	00 
 84e6936:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84e693a:	8d 45 bd             	lea    -0x43(%ebp),%eax
 84e693d:	89 04 24             	mov    %eax,(%esp)
 84e6940:	e8 a3 ec 06 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 84e6945:	85 c0                	test   %eax,%eax
 84e6947:	0f 94 c0             	sete   %al
 84e694a:	84 c0                	test   %al,%al
 84e694c:	75 3b                	jne    84e6989 <_ZN25Inter_NpcLimitBuyItemInfo12dispatch_sigEP5CUserPci+0x3e7>
 84e694e:	e9 af 00 00 00       	jmp    84e6a02 <_ZN25Inter_NpcLimitBuyItemInfo12dispatch_sigEP5CUserPci+0x460>
 84e6953:	89 d3                	mov    %edx,%ebx
 84e6955:	89 c6                	mov    %eax,%esi
 84e6957:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84e695a:	89 04 24             	mov    %eax,(%esp)
 84e695d:	e8 7e 12 22 00       	call   8707be0 <_ZNSsD1Ev>
 84e6962:	89 f0                	mov    %esi,%eax
 84e6964:	89 da                	mov    %ebx,%edx
 84e6966:	89 04 24             	mov    %eax,(%esp)
 84e6969:	e8 e2 cd 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e696e:	89 d3                	mov    %edx,%ebx
 84e6970:	89 c6                	mov    %eax,%esi
 84e6972:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84e6975:	89 04 24             	mov    %eax,(%esp)
 84e6978:	e8 63 12 22 00       	call   8707be0 <_ZNSsD1Ev>
 84e697d:	89 f0                	mov    %esi,%eax
 84e697f:	89 da                	mov    %ebx,%edx
 84e6981:	89 04 24             	mov    %eax,(%esp)
 84e6984:	e8 c7 cd 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e6989:	c7 44 24 08 45 01 00 	movl   $0x145,0x8(%esp)
 84e6990:	00 
 84e6991:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e6998:	00 
 84e6999:	8d 85 78 fd ff ff    	lea    -0x288(%ebp),%eax
 84e699f:	89 04 24             	mov    %eax,(%esp)
 84e69a2:	e8 19 73 b9 ff       	call   807dcc0 <memset@plt>
 84e69a7:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 84e69ae:	00 
 84e69af:	8d 45 bd             	lea    -0x43(%ebp),%eax
 84e69b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e69b6:	8d 85 78 fd ff ff    	lea    -0x288(%ebp),%eax
 84e69bc:	83 c0 11             	add    $0x11,%eax
 84e69bf:	89 04 24             	mov    %eax,(%esp)
 84e69c2:	e8 09 6f b9 ff       	call   807d8d0 <strncpy@plt>
 84e69c7:	8b 45 08             	mov    0x8(%ebp),%eax
 84e69ca:	8b 40 1f             	mov    0x1f(%eax),%eax
 84e69cd:	89 85 b1 fd ff ff    	mov    %eax,-0x24f(%ebp)
 84e69d3:	8b 45 08             	mov    0x8(%ebp),%eax
 84e69d6:	8b 40 24             	mov    0x24(%eax),%eax
 84e69d9:	89 85 b5 fd ff ff    	mov    %eax,-0x24b(%ebp)
 84e69df:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e69e2:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 84e69e8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84e69ef:	00 
 84e69f0:	8d 85 78 fd ff ff    	lea    -0x288(%ebp),%eax
 84e69f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e69fa:	89 14 24             	mov    %edx,(%esp)
 84e69fd:	e8 e8 dd 19 00       	call   86847ea <_ZN15cUserHistoryLog8SendMailEP16MSG_MAILBOX_SENDj>
 84e6a02:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6a05:	c6 40 1c 01          	movb   $0x1,0x1c(%eax)
 84e6a09:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6a0c:	8b 70 0c             	mov    0xc(%eax),%esi
 84e6a0f:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6a12:	8b 58 14             	mov    0x14(%eax),%ebx
 84e6a15:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e6a18:	89 04 24             	mov    %eax,(%esp)
 84e6a1b:	e8 6e 38 bf ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84e6a20:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 84e6a27:	00 
 84e6a28:	c7 44 24 10 1a 00 00 	movl   $0x1a,0x10(%esp)
 84e6a2f:	00 
 84e6a30:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84e6a34:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e6a38:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e6a3f:	00 
 84e6a40:	89 04 24             	mov    %eax,(%esp)
 84e6a43:	e8 c4 d5 01 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 84e6a48:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84e6a4f:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6a52:	8b 40 04             	mov    0x4(%eax),%eax
 84e6a55:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84e6a58:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84e6a5f:	ff 
 84e6a60:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e6a63:	89 04 24             	mov    %eax,(%esp)
 84e6a66:	e8 35 75 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84e6a6b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84e6a6e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e6a71:	8b 40 1a             	mov    0x1a(%eax),%eax
 84e6a74:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84e6a77:	8d 5d d2             	lea    -0x2e(%ebp),%ebx
 84e6a7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e6a7d:	89 04 24             	mov    %eax,(%esp)
 84e6a80:	e8 0b 52 be ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84e6a85:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 84e6a8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e6a8f:	89 14 24             	mov    %edx,(%esp)
 84e6a92:	e8 f3 b5 c2 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84e6a97:	c7 44 24 08 1a 00 00 	movl   $0x1a,0x8(%esp)
 84e6a9e:	00 
 84e6a9f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e6aa3:	89 04 24             	mov    %eax,(%esp)
 84e6aa6:	e8 49 a3 f8 ff       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 84e6aab:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e6aae:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e6ab2:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6ab5:	89 04 24             	mov    %eax,(%esp)
 84e6ab8:	e8 85 01 00 00       	call   84e6c42 <_ZN25Inter_NpcLimitBuyItemInfo10sendPacketEP5CUser>
 84e6abd:	b8 00 00 00 00       	mov    $0x0,%eax
 84e6ac2:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84e6ac5:	83 c4 00             	add    $0x0,%esp
 84e6ac8:	5b                   	pop    %ebx
 84e6ac9:	5e                   	pop    %esi
 84e6aca:	5d                   	pop    %ebp
 84e6acb:	c3                   	ret

```

```c
// Inter_NpcLimitBuyItemInfo::dispatch_sig @ 0x84e65a2

/* Inter_NpcLimitBuyItemInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NpcLimitBuyItemInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  CUser *this;
  undefined4 uVar2;
  CMonitorServerProxy *pCVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  CInventory *pCVar7;
  undefined4 uVar8;
  MSG_MAILBOX_SEND local_28c [17];
  char acStack_27b [40];
  undefined4 local_253;
  undefined4 local_24f;
  char local_147 [256];
  char local_47 [21];
  LimitNpcBuyItemUpdate local_32 [10];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  string local_18 [4];
  string local_14 [4];
  LimitNpcBuyItemInfo *local_10;
  
  reset((Inter_NpcLimitBuyItemInfo *)param_1);
  local_10 = (LimitNpcBuyItemInfo *)param_3;
  LimitNpcBuyItemUpdate::LimitNpcBuyItemUpdate(local_32);
  iVar4 = *(int *)(local_10 + 10);
  iVar1 = G_CGameManager();
  uVar8 = 10;
  this = (CUser *)CGameManager::getUser(iVar1,iVar4);
  if (this == (CUser *)0x0) {
    local_1c = 3;
    local_28 = *(undefined4 *)(local_10 + 0x16);
    local_24 = *(undefined4 *)(local_10 + 0x12);
    local_20 = *(undefined4 *)(local_10 + 0x1a);
    uVar2 = CUser::GetServerGroup((CUser *)0x0);
    pCVar3 = (CMonitorServerProxy *)
             CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                       (GlobalData::s_monitor_proxy_mgr,uVar2,uVar8);
    CMonitorServerProxy::SendPacket(pCVar3,(char *)local_32,0x1a);
  }
  else if (*(int *)(local_10 + 0x22) == 0) {
    local_1c = checkError((Inter_NpcLimitBuyItemInfo *)param_1,this,local_10);
    if (local_1c == 0) {
      *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_1 + 4);
      iVar4 = G_CDataManager();
      CItemList::create_item(*(CItemList **)(iVar4 + 0xc),0,param_1 + 0x1d,1);
      uVar8 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      uVar8 = CInventory::insertItemIntoInventory
                        (uVar8,*(undefined4 *)(param_1 + 0x1d),*(undefined4 *)(param_1 + 0x21),
                         *(undefined4 *)(param_1 + 0x25),*(undefined4 *)(param_1 + 0x29),
                         *(undefined4 *)(param_1 + 0x2d),*(undefined4 *)(param_1 + 0x31),
                         *(undefined4 *)(param_1 + 0x35),*(undefined4 *)(param_1 + 0x39),
                         *(undefined4 *)(param_1 + 0x3d),*(undefined4 *)(param_1 + 0x41),
                         *(undefined4 *)(param_1 + 0x45),*(undefined4 *)(param_1 + 0x49),
                         *(undefined4 *)(param_1 + 0x4d),*(undefined4 *)(param_1 + 0x51),
                         *(undefined4 *)(param_1 + 0x55),param_1[0x59],0,1,0);
      *(undefined4 *)(param_1 + 0x10) = uVar8;
      param_1[0x1c] = (CUser)0x0;
      if (*(int *)(param_1 + 0x10) < 0) {
        np_server_xml::CServerXml::GetServerString((int)local_18,(bool *)g_ServerString_);
                    /* try { // try from 084e684d to 084e6851 has its CatchHandler @ 084e6953 */
        pcVar5 = (char *)std::string::c_str(local_18);
        strncpy(local_47,pcVar5,0x14);
        std::string::~string(local_18);
        np_server_xml::CServerXml::GetServerString((int)local_14,(bool *)g_ServerString_);
                    /* try { // try from 084e68a0 to 084e68a4 has its CatchHandler @ 084e696e */
        pcVar5 = (char *)std::string::c_str(local_14);
        strncpy(local_147,pcVar5,0xff);
        std::string::~string(local_14);
        uVar8 = CUser::GetServerGroup(this);
        sVar6 = strlen(local_147);
        uVar2 = CUser::get_charac_no(this,-1);
        iVar4 = WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                          (local_47,param_1 + 0x1d,0,uVar2,local_147,sVar6,0x1e,uVar8,0,0);
        if (iVar4 == 0) {
          memset(local_28c,0,0x145);
          strncpy(acStack_27b,local_47,0x14);
          local_253 = *(undefined4 *)(param_1 + 0x1f);
          local_24f = *(undefined4 *)(param_1 + 0x24);
          cUserHistoryLog::SendMail((cUserHistoryLog *)(this + 0x79700),local_28c,0);
        }
        param_1[0x1c] = (CUser)0x1;
      }
      uVar8 = *(undefined4 *)(param_1 + 0xc);
      uVar2 = *(undefined4 *)(param_1 + 0x14);
      pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      CInventory::delete_item(pCVar7,1,uVar2,uVar8,0x1a,1);
      local_1c = 0;
      local_28 = *(undefined4 *)(param_1 + 4);
      local_24 = CUser::get_charac_no(this,-1);
      local_20 = *(undefined4 *)(local_10 + 0x1a);
      uVar8 = CUser::GetServerGroup(this);
      pCVar3 = (CMonitorServerProxy *)
               CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                         (GlobalData::s_monitor_proxy_mgr,uVar8);
      CMonitorServerProxy::SendPacket(pCVar3,(char *)local_32,0x1a);
      sendPacket((Inter_NpcLimitBuyItemInfo *)param_1,this);
    }
    else {
      local_28 = *(undefined4 *)(param_1 + 4);
      local_24 = CUser::get_charac_no(this,-1);
      local_20 = *(undefined4 *)(local_10 + 0x1a);
      uVar8 = CUser::GetServerGroup(this);
      pCVar3 = (CMonitorServerProxy *)
               CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                         (GlobalData::s_monitor_proxy_mgr,uVar8);
      CMonitorServerProxy::SendPacket(pCVar3,(char *)local_32,0x1a);
      CUser::SendCmdErrorPacket(this,0x1d1,local_1c & 0xff);
    }
  }
  else {
    CUser::SendCmdErrorPacket(this,0x1d1,*(uint *)(local_10 + 0x22) & 0xff);
  }
  return 0;
}

```

---

## reset

```asm
// === 084e6e1a Inter_NpcLimitBuyItemInfo::reset  [0x084e6e1a-0x84e6e81] ===
 84e6e1a:	55                   	push   %ebp
 84e6e1b:	89 e5                	mov    %esp,%ebp
 84e6e1d:	83 ec 18             	sub    $0x18,%esp
 84e6e20:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6e23:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 84e6e2a:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6e2d:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 84e6e34:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6e37:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 84e6e3e:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6e41:	c7 40 10 ff ff ff ff 	movl   $0xffffffff,0x10(%eax)
 84e6e48:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6e4b:	c7 40 14 ff ff ff ff 	movl   $0xffffffff,0x14(%eax)
 84e6e52:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6e55:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 84e6e5c:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6e5f:	c6 40 1c 00          	movb   $0x0,0x1c(%eax)
 84e6e63:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6e66:	83 c0 1d             	add    $0x1d,%eax
 84e6e69:	89 04 24             	mov    %eax,(%esp)
 84e6e6c:	e8 67 49 be ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 84e6e71:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6e74:	83 c0 5a             	add    $0x5a,%eax
 84e6e77:	89 04 24             	mov    %eax,(%esp)
 84e6e7a:	e8 59 49 be ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 84e6e7f:	c9                   	leave
 84e6e80:	c3                   	ret
 84e6e81:	90                   	nop

```

```c
// Inter_NpcLimitBuyItemInfo::reset @ 0x84e6e1a

/* Inter_NpcLimitBuyItemInfo::reset() */

void __thiscall Inter_NpcLimitBuyItemInfo::reset(Inter_NpcLimitBuyItemInfo *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1c] = (Inter_NpcLimitBuyItemInfo)0x0;
  Inven_Item::reset((Inven_Item *)(this + 0x1d));
  Inven_Item::reset((Inven_Item *)(this + 0x5a));
  return;
}

```

---

## sendPacket

```asm
// === 084e6c42 Inter_NpcLimitBuyItemInfo::sendPacket  [0x084e6c42-0x84e6e19] ===
 84e6c42:	55                   	push   %ebp
 84e6c43:	89 e5                	mov    %esp,%ebp
 84e6c45:	56                   	push   %esi
 84e6c46:	53                   	push   %ebx
 84e6c47:	83 ec 20             	sub    $0x20,%esp
 84e6c4a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6c4d:	89 04 24             	mov    %eax,(%esp)
 84e6c50:	e8 f7 70 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e6c55:	c7 44 24 08 d1 01 00 	movl   $0x1d1,0x8(%esp)
 84e6c5c:	00 
 84e6c5d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e6c64:	00 
 84e6c65:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6c68:	89 04 24             	mov    %eax,(%esp)
 84e6c6b:	e8 8c 4c be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e6c70:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e6c77:	00 
 84e6c78:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6c7b:	89 04 24             	mov    %eax,(%esp)
 84e6c7e:	e8 9d 4c be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e6c83:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6c86:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 84e6c8a:	0f be c0             	movsbl %al,%eax
 84e6c8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e6c91:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6c94:	89 04 24             	mov    %eax,(%esp)
 84e6c97:	e8 84 4c be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e6c9c:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6c9f:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 84e6ca3:	84 c0                	test   %al,%al
 84e6ca5:	0f 85 ad 00 00 00    	jne    84e6d58 <_ZN25Inter_NpcLimitBuyItemInfo10sendPacketEP5CUser+0x116>
 84e6cab:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6cae:	8b 40 10             	mov    0x10(%eax),%eax
 84e6cb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e6cb5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6cb8:	89 04 24             	mov    %eax,(%esp)
 84e6cbb:	e8 e4 31 bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84e6cc0:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6cc3:	8b 40 1f             	mov    0x1f(%eax),%eax
 84e6cc6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e6cca:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6ccd:	89 04 24             	mov    %eax,(%esp)
 84e6cd0:	e8 67 4c be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e6cd5:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6cd8:	8b 40 24             	mov    0x24(%eax),%eax
 84e6cdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e6cdf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6ce2:	89 04 24             	mov    %eax,(%esp)
 84e6ce5:	e8 52 4c be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e6cea:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6ced:	0f b7 40 28          	movzwl 0x28(%eax),%eax
 84e6cf1:	0f b7 c0             	movzwl %ax,%eax
 84e6cf4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e6cf8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6cfb:	89 04 24             	mov    %eax,(%esp)
 84e6cfe:	e8 a1 31 bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84e6d03:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6d06:	83 c0 2e             	add    $0x2e,%eax
 84e6d09:	89 04 24             	mov    %eax,(%esp)
 84e6d0c:	e8 21 9a c6 ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 84e6d11:	0f b6 c0             	movzbl %al,%eax
 84e6d14:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e6d18:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6d1b:	89 04 24             	mov    %eax,(%esp)
 84e6d1e:	e8 fd 4b be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e6d23:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6d26:	83 c0 2e             	add    $0x2e,%eax
 84e6d29:	89 04 24             	mov    %eax,(%esp)
 84e6d2c:	e8 41 9a c6 ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 84e6d31:	0f b7 c0             	movzwl %ax,%eax
 84e6d34:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e6d38:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6d3b:	89 04 24             	mov    %eax,(%esp)
 84e6d3e:	e8 61 31 bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84e6d43:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6d46:	83 c0 1d             	add    $0x1d,%eax
 84e6d49:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e6d4d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6d50:	89 04 24             	mov    %eax,(%esp)
 84e6d53:	e8 36 9c c6 ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 84e6d58:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6d5b:	8b 40 5c             	mov    0x5c(%eax),%eax
 84e6d5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e6d62:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6d65:	89 04 24             	mov    %eax,(%esp)
 84e6d68:	e8 cf 4b be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e6d6d:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6d70:	8b 58 14             	mov    0x14(%eax),%ebx
 84e6d73:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e6d76:	89 04 24             	mov    %eax,(%esp)
 84e6d79:	e8 00 35 bf ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84e6d7e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e6d82:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e6d89:	00 
 84e6d8a:	89 04 24             	mov    %eax,(%esp)
 84e6d8d:	e8 4c 54 01 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 84e6d92:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e6d95:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84e6d99:	75 15                	jne    84e6db0 <_ZN25Inter_NpcLimitBuyItemInfo10sendPacketEP5CUser+0x16e>
 84e6d9b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e6da2:	00 
 84e6da3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6da6:	89 04 24             	mov    %eax,(%esp)
 84e6da9:	e8 8e 4b be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e6dae:	eb 15                	jmp    84e6dc5 <_ZN25Inter_NpcLimitBuyItemInfo10sendPacketEP5CUser+0x183>
 84e6db0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e6db3:	8b 40 07             	mov    0x7(%eax),%eax
 84e6db6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e6dba:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6dbd:	89 04 24             	mov    %eax,(%esp)
 84e6dc0:	e8 77 4b be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e6dc5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e6dcc:	00 
 84e6dcd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6dd0:	89 04 24             	mov    %eax,(%esp)
 84e6dd3:	e8 80 4b be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e6dd8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6ddb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e6ddf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e6de2:	89 04 24             	mov    %eax,(%esp)
 84e6de5:	e8 d0 17 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e6dea:	eb 1b                	jmp    84e6e07 <_ZN25Inter_NpcLimitBuyItemInfo10sendPacketEP5CUser+0x1c5>
 84e6dec:	89 d3                	mov    %edx,%ebx
 84e6dee:	89 c6                	mov    %eax,%esi
 84e6df0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6df3:	89 04 24             	mov    %eax,(%esp)
 84e6df6:	e8 85 70 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e6dfb:	89 f0                	mov    %esi,%eax
 84e6dfd:	89 da                	mov    %ebx,%edx
 84e6dff:	89 04 24             	mov    %eax,(%esp)
 84e6e02:	e8 49 c9 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e6e07:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6e0a:	89 04 24             	mov    %eax,(%esp)
 84e6e0d:	e8 6e 70 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e6e12:	83 c4 20             	add    $0x20,%esp
 84e6e15:	5b                   	pop    %ebx
 84e6e16:	5e                   	pop    %esi
 84e6e17:	5d                   	pop    %ebp
 84e6e18:	c3                   	ret
 84e6e19:	90                   	nop

```

```c
// Inter_NpcLimitBuyItemInfo::sendPacket @ 0x84e6c42

/* Inter_NpcLimitBuyItemInfo::sendPacket(CUser*) */

void __thiscall
Inter_NpcLimitBuyItemInfo::sendPacket(Inter_NpcLimitBuyItemInfo *this,CUser *param_1)

{
  int iVar1;
  uint uVar2;
  CInventory *this_00;
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e6c6b to 084e6de9 has its CatchHandler @ 084e6dec */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1d1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)this[0x1c]);
  if (this[0x1c] == (Inter_NpcLimitBuyItemInfo)0x0) {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,*(int *)(this + 0x10));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(this + 0x1f));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(this + 0x24));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(this + 0x28));
    uVar2 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(this + 0x2e));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,uVar2 & 0xff);
    uVar2 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(this + 0x2e));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar2 & 0xffff);
    InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_1c,(Inven_Item *)(this + 0x1d));
  }
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(this + 0x5c));
  iVar1 = *(int *)(this + 0x14);
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  local_10 = CInventory::GetInvenRef(this_00,1,iVar1);
  if (local_10 == 0) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,0);
  }
  else {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 7));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

---

## ~Inter_NpcLimitBuyItemInfo

```asm
// === 084e6554 Inter_NpcLimitBuyItemInfo::~Inter_NpcLimitBuyItemInfo  [0x084e6554-0x84e6583] ===
 84e6554:	55                   	push   %ebp
 84e6555:	89 e5                	mov    %esp,%ebp
 84e6557:	83 ec 18             	sub    $0x18,%esp
 84e655a:	8b 45 08             	mov    0x8(%ebp),%eax
 84e655d:	c7 00 28 e5 c8 08    	movl   $0x8c8e528,(%eax)
 84e6563:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6566:	89 04 24             	mov    %eax,(%esp)
 84e6569:	e8 4e be bf ff       	call   80e23bc <_ZN14ISigDispatcherD1Ev>
 84e656e:	b8 00 00 00 00       	mov    $0x0,%eax
 84e6573:	84 c0                	test   %al,%al
 84e6575:	74 0b                	je     84e6582 <_ZN25Inter_NpcLimitBuyItemInfoD1Ev+0x2e>
 84e6577:	8b 45 08             	mov    0x8(%ebp),%eax
 84e657a:	89 04 24             	mov    %eax,(%esp)
 84e657d:	e8 6e df 23 00       	call   87244f0 <_ZdlPv>
 84e6582:	c9                   	leave
 84e6583:	c3                   	ret

```

```c
// Inter_NpcLimitBuyItemInfo::~Inter_NpcLimitBuyItemInfo @ 0x84e6554

/* WARNING: Removing unreachable block (ram,0x084e6577) */
/* Inter_NpcLimitBuyItemInfo::~Inter_NpcLimitBuyItemInfo() */

void __thiscall
Inter_NpcLimitBuyItemInfo::~Inter_NpcLimitBuyItemInfo(Inter_NpcLimitBuyItemInfo *this)

{
  *(undefined ***)this = &PTR_dispatch_sig_08c8e528;
  ISigDispatcher::~ISigDispatcher((ISigDispatcher *)this);
  return;
}

```

---

## ~Inter_NpcLimitBuyItemInfo_084e6584

```asm
// === 084e6584 Inter_NpcLimitBuyItemInfo::~Inter_NpcLimitBuyItemInfo  [0x084e6584-0x84e65a1] ===
 84e6584:	55                   	push   %ebp
 84e6585:	89 e5                	mov    %esp,%ebp
 84e6587:	83 ec 18             	sub    $0x18,%esp
 84e658a:	8b 45 08             	mov    0x8(%ebp),%eax
 84e658d:	89 04 24             	mov    %eax,(%esp)
 84e6590:	e8 bf ff ff ff       	call   84e6554 <_ZN25Inter_NpcLimitBuyItemInfoD1Ev>
 84e6595:	8b 45 08             	mov    0x8(%ebp),%eax
 84e6598:	89 04 24             	mov    %eax,(%esp)
 84e659b:	e8 50 df 23 00       	call   87244f0 <_ZdlPv>
 84e65a0:	c9                   	leave
 84e65a1:	c3                   	ret

```

```c
// Inter_NpcLimitBuyItemInfo::~Inter_NpcLimitBuyItemInfo @ 0x84e6584

/* Inter_NpcLimitBuyItemInfo::~Inter_NpcLimitBuyItemInfo() */

void __thiscall
Inter_NpcLimitBuyItemInfo::~Inter_NpcLimitBuyItemInfo(Inter_NpcLimitBuyItemInfo *this)

{
  ~Inter_NpcLimitBuyItemInfo(this);
  operator_delete(this);
  return;
}

```

