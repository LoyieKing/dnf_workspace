# Dispatcher_UseBoosterItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## _onBoosterItemUseResult

```asm
// === 082099bc Dispatcher_UseBoosterItem::_onBoosterItemUseResult  [0x082099bc-0x8209a5d] ===
 82099bc:	55                   	push   %ebp
 82099bd:	89 e5                	mov    %esp,%ebp
 82099bf:	83 ec 28             	sub    $0x28,%esp
 82099c2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82099c5:	8b 55 10             	mov    0x10(%ebp),%edx
 82099c8:	89 54 24 04          	mov    %edx,0x4(%esp)
 82099cc:	89 04 24             	mov    %eax,(%esp)
 82099cf:	e8 30 13 f4 ff       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 82099d4:	83 ec 04             	sub    $0x4,%esp
 82099d7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82099da:	89 44 24 04          	mov    %eax,0x4(%esp)
 82099de:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82099e1:	89 04 24             	mov    %eax,(%esp)
 82099e4:	e8 03 91 f4 ff       	call   8152aec <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 82099e9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82099ec:	8b 55 10             	mov    0x10(%ebp),%edx
 82099ef:	89 54 24 04          	mov    %edx,0x4(%esp)
 82099f3:	89 04 24             	mov    %eax,(%esp)
 82099f6:	e8 ef 8e f4 ff       	call   81528ea <_ZNSt6vectorI10Inven_ItemSaIS0_EE3endEv>
 82099fb:	83 ec 04             	sub    $0x4,%esp
 82099fe:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8209a01:	89 44 24 04          	mov    %eax,0x4(%esp)
 8209a05:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8209a08:	89 04 24             	mov    %eax,(%esp)
 8209a0b:	e8 dc 90 f4 ff       	call   8152aec <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 8209a10:	eb 33                	jmp    8209a45 <_ZN25Dispatcher_UseBoosterItem23_onBoosterItemUseResultEP5CUserRSt6vectorI10Inven_ItemSaIS3_EEi+0x89>
 8209a12:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8209a15:	89 04 24             	mov    %eax,(%esp)
 8209a18:	e8 2b 91 f4 ff       	call   8152b48 <_ZNK9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 8209a1d:	8b 55 14             	mov    0x14(%ebp),%edx
 8209a20:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8209a24:	89 44 24 08          	mov    %eax,0x8(%esp)
 8209a28:	8b 45 0c             	mov    0xc(%ebp),%eax
 8209a2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8209a2f:	8b 45 08             	mov    0x8(%ebp),%eax
 8209a32:	89 04 24             	mov    %eax,(%esp)
 8209a35:	e8 d4 00 00 00       	call   8209b0e <_ZN25Dispatcher_UseBoosterItem18sendBroadCastItemsEP5CUserRK10Inven_Itemi>
 8209a3a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8209a3d:	89 04 24             	mov    %eax,(%esp)
 8209a40:	e8 ed 90 f4 ff       	call   8152b32 <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEppEv>
 8209a45:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8209a48:	89 44 24 04          	mov    %eax,0x4(%esp)
 8209a4c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8209a4f:	89 04 24             	mov    %eax,(%esp)
 8209a52:	e8 af 90 f4 ff       	call   8152b06 <_ZN9__gnu_cxxneIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8209a57:	84 c0                	test   %al,%al
 8209a59:	75 b7                	jne    8209a12 <_ZN25Dispatcher_UseBoosterItem23_onBoosterItemUseResultEP5CUserRSt6vectorI10Inven_ItemSaIS3_EEi+0x56>
 8209a5b:	c9                   	leave
 8209a5c:	c3                   	ret
 8209a5d:	90                   	nop

```

```c
// Dispatcher_UseBoosterItem::_onBoosterItemUseResult @ 0x82099bc

/* Dispatcher_UseBoosterItem::_onBoosterItemUseResult(CUser*, std::vector<Inven_Item,
   std::allocator<Inven_Item> >&, int) */

void __thiscall
Dispatcher_UseBoosterItem::_onBoosterItemUseResult
          (Dispatcher_UseBoosterItem *this,CUser *param_1,vector *param_2,int param_3)

{
  bool bVar1;
  Inven_Item *pIVar2;
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_1c [4];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator local_10 [12];
  
  std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
  __gnu_cxx::__normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  ::__normal_iterator<Inven_Item*>(local_18,local_14);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
  __gnu_cxx::__normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  ::__normal_iterator<Inven_Item*>(local_1c,local_10);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_18,local_1c);
    if (!bVar1) break;
    pIVar2 = (Inven_Item *)
             __gnu_cxx::
             __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
             ::operator*(local_18);
    sendBroadCastItems(this,param_1,pIVar2,param_3);
    __gnu_cxx::
    __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
    operator++(local_18);
  }
  return;
}

```

---

## _onBoosterItemUseResult_OnlyOne

```asm
// === 08209a5e Dispatcher_UseBoosterItem::_onBoosterItemUseResult_OnlyOne  [0x08209a5e-0x8209b0d] ===
 8209a5e:	55                   	push   %ebp
 8209a5f:	89 e5                	mov    %esp,%ebp
 8209a61:	83 ec 28             	sub    $0x28,%esp
 8209a64:	8b 45 10             	mov    0x10(%ebp),%eax
 8209a67:	89 04 24             	mov    %eax,(%esp)
 8209a6a:	e8 ef 0b f7 ff       	call   817a65e <_ZNKSt6vectorI10Inven_ItemSaIS0_EE4sizeEv>
 8209a6f:	83 f8 01             	cmp    $0x1,%eax
 8209a72:	0f 95 c0             	setne  %al
 8209a75:	84 c0                	test   %al,%al
 8209a77:	0f 85 8d 00 00 00    	jne    8209b0a <_ZN25Dispatcher_UseBoosterItem31_onBoosterItemUseResult_OnlyOneEP5CUserRSt6vectorI10Inven_ItemSaIS3_EEi+0xac>
 8209a7d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8209a80:	8b 55 10             	mov    0x10(%ebp),%edx
 8209a83:	89 54 24 04          	mov    %edx,0x4(%esp)
 8209a87:	89 04 24             	mov    %eax,(%esp)
 8209a8a:	e8 75 12 f4 ff       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 8209a8f:	83 ec 04             	sub    $0x4,%esp
 8209a92:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8209a97:	c7 44 24 04 64 00 00 	movl   $0x64,0x4(%esp)
 8209a9e:	00 
 8209a9f:	89 04 24             	mov    %eax,(%esp)
 8209aa2:	e8 f1 be f0 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8209aa7:	8b 10                	mov    (%eax),%edx
 8209aa9:	83 c2 34             	add    $0x34,%edx
 8209aac:	8b 12                	mov    (%edx),%edx
 8209aae:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8209ab5:	00 
 8209ab6:	89 04 24             	mov    %eax,(%esp)
 8209ab9:	ff d2                	call   *%edx
 8209abb:	84 c0                	test   %al,%al
 8209abd:	74 4c                	je     8209b0b <_ZN25Dispatcher_UseBoosterItem31_onBoosterItemUseResult_OnlyOneEP5CUserRSt6vectorI10Inven_ItemSaIS3_EEi+0xad>
 8209abf:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8209ac4:	c7 44 24 04 64 00 00 	movl   $0x64,0x4(%esp)
 8209acb:	00 
 8209acc:	89 04 24             	mov    %eax,(%esp)
 8209acf:	e8 c4 be f0 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8209ad4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8209ad7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8209adb:	74 2e                	je     8209b0b <_ZN25Dispatcher_UseBoosterItem31_onBoosterItemUseResult_OnlyOneEP5CUserRSt6vectorI10Inven_ItemSaIS3_EEi+0xad>
 8209add:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8209ae0:	89 04 24             	mov    %eax,(%esp)
 8209ae3:	e8 9e df 02 00       	call   8237a86 <_ZNK9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEptEv>
 8209ae8:	8b 40 02             	mov    0x2(%eax),%eax
 8209aeb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8209aef:	8b 45 14             	mov    0x14(%ebp),%eax
 8209af2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8209af6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8209af9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8209afd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8209b00:	89 04 24             	mov    %eax,(%esp)
 8209b03:	e8 b6 d8 ee ff       	call   80f73be <_ZN16GrowthEquipEvent18SelectGrowthWeaponER5CUserii>
 8209b08:	eb 01                	jmp    8209b0b <_ZN25Dispatcher_UseBoosterItem31_onBoosterItemUseResult_OnlyOneEP5CUserRSt6vectorI10Inven_ItemSaIS3_EEi+0xad>
 8209b0a:	90                   	nop
 8209b0b:	c9                   	leave
 8209b0c:	c3                   	ret
 8209b0d:	90                   	nop

```

```c
// Dispatcher_UseBoosterItem::_onBoosterItemUseResult_OnlyOne @ 0x8209a5e

/* Dispatcher_UseBoosterItem::_onBoosterItemUseResult_OnlyOne(CUser*, std::vector<Inven_Item,
   std::allocator<Inven_Item> >&, int) */

void __thiscall
Dispatcher_UseBoosterItem::_onBoosterItemUseResult_OnlyOne
          (Dispatcher_UseBoosterItem *this,CUser *param_1,vector *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_14 [4];
  GrowthEquipEvent *local_10;
  
  iVar2 = std::vector<Inven_Item,std::allocator<Inven_Item>>::size
                    ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_2);
  if (iVar2 == 1) {
    std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
    piVar3 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,100);
    cVar1 = (**(code **)(*piVar3 + 0x34))(piVar3,0);
    if (cVar1 != '\0') {
      local_10 = (GrowthEquipEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,100);
      if (local_10 != (GrowthEquipEvent *)0x0) {
        iVar2 = __gnu_cxx::
                __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                operator->(local_14);
        GrowthEquipEvent::SelectGrowthWeapon(local_10,param_1,param_3,*(int *)(iVar2 + 2));
      }
    }
  }
  return;
}

```

---

## dispatch_sig

```asm
// === 08208d40 Dispatcher_UseBoosterItem::dispatch_sig  [0x08208d40-0x82099bb] ===
 8208d40:	55                   	push   %ebp
 8208d41:	89 e5                	mov    %esp,%ebp
 8208d43:	57                   	push   %edi
 8208d44:	56                   	push   %esi
 8208d45:	53                   	push   %ebx
 8208d46:	81 ec 9c 01 00 00    	sub    $0x19c,%esp
 8208d4c:	66 c7 45 a0 ff ff    	movw   $0xffff,-0x60(%ebp)
 8208d52:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8208d55:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208d59:	8b 45 10             	mov    0x10(%ebp),%eax
 8208d5c:	89 04 24             	mov    %eax,(%esp)
 8208d5f:	e8 5c 42 38 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 8208d64:	83 f0 01             	xor    $0x1,%eax
 8208d67:	84 c0                	test   %al,%al
 8208d69:	74 2b                	je     8208d96 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x56>
 8208d6b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8208d72:	00 
 8208d73:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8208d7a:	00 
 8208d7b:	c7 44 24 04 80 e5 bc 	movl   $0x8bce580,0x4(%esp)
 8208d82:	08 
 8208d83:	c7 04 24 36 a4 00 00 	movl   $0xa436,(%esp)
 8208d8a:	e8 48 7b 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8208d8f:	89 c3                	mov    %eax,%ebx
 8208d91:	e9 19 0c 00 00       	jmp    82099af <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc6f>
 8208d96:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208d99:	89 04 24             	mov    %eax,(%esp)
 8208d9c:	e8 5d 15 ed ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 8208da1:	84 c0                	test   %al,%al
 8208da3:	75 18                	jne    8208dbd <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x7d>
 8208da5:	e8 3e be 3b 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 8208daa:	8b 55 0c             	mov    0xc(%ebp),%edx
 8208dad:	89 54 24 04          	mov    %edx,0x4(%esp)
 8208db1:	89 04 24             	mov    %eax,(%esp)
 8208db4:	e8 a5 1f 3c 00       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 8208db9:	84 c0                	test   %al,%al
 8208dbb:	74 07                	je     8208dc4 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x84>
 8208dbd:	b8 01 00 00 00       	mov    $0x1,%eax
 8208dc2:	eb 05                	jmp    8208dc9 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x89>
 8208dc4:	b8 00 00 00 00       	mov    $0x0,%eax
 8208dc9:	84 c0                	test   %al,%al
 8208dcb:	74 25                	je     8208df2 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xb2>
 8208dcd:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 8208dd4:	00 
 8208dd5:	c7 44 24 04 a3 00 00 	movl   $0xa3,0x4(%esp)
 8208ddc:	00 
 8208ddd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208de0:	89 04 24             	mov    %eax,(%esp)
 8208de3:	e8 5a 31 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8208de8:	bb 00 00 00 00       	mov    $0x0,%ebx
 8208ded:	e9 bd 0b 00 00       	jmp    82099af <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc6f>
 8208df2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208df5:	89 04 24             	mov    %eax,(%esp)
 8208df8:	e8 35 76 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8208dfd:	85 c0                	test   %eax,%eax
 8208dff:	0f 94 c0             	sete   %al
 8208e02:	84 c0                	test   %al,%al
 8208e04:	74 0a                	je     8208e10 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xd0>
 8208e06:	bb 3e a4 00 00       	mov    $0xa43e,%ebx
 8208e0b:	e9 9f 0b 00 00       	jmp    82099af <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc6f>
 8208e10:	0f b7 45 a0          	movzwl -0x60(%ebp),%eax
 8208e14:	0f bf d8             	movswl %ax,%ebx
 8208e17:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208e1a:	89 04 24             	mov    %eax,(%esp)
 8208e1d:	e8 5c 14 ed ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8208e22:	8d 95 1f ff ff ff    	lea    -0xe1(%ebp),%edx
 8208e28:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8208e2c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8208e33:	00 
 8208e34:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208e38:	89 14 24             	mov    %edx,(%esp)
 8208e3b:	e8 d8 2a 2f 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8208e40:	83 ec 04             	sub    $0x4,%esp
 8208e43:	8b 85 21 ff ff ff    	mov    -0xdf(%ebp),%eax
 8208e49:	89 c3                	mov    %eax,%ebx
 8208e4b:	e8 4b 33 ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 8208e50:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8208e54:	89 04 24             	mov    %eax,(%esp)
 8208e57:	e8 d6 6b 15 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8208e5c:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8208e5f:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 8208e63:	74 2e                	je     8208e93 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x153>
 8208e65:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8208e68:	8b 00                	mov    (%eax),%eax
 8208e6a:	83 c0 0c             	add    $0xc,%eax
 8208e6d:	8b 10                	mov    (%eax),%edx
 8208e6f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8208e72:	89 04 24             	mov    %eax,(%esp)
 8208e75:	ff d2                	call   *%edx
 8208e77:	83 f8 10             	cmp    $0x10,%eax
 8208e7a:	74 1e                	je     8208e9a <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x15a>
 8208e7c:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8208e7f:	8b 00                	mov    (%eax),%eax
 8208e81:	83 c0 0c             	add    $0xc,%eax
 8208e84:	8b 10                	mov    (%eax),%edx
 8208e86:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8208e89:	89 04 24             	mov    %eax,(%esp)
 8208e8c:	ff d2                	call   *%edx
 8208e8e:	83 f8 22             	cmp    $0x22,%eax
 8208e91:	74 07                	je     8208e9a <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x15a>
 8208e93:	b8 01 00 00 00       	mov    $0x1,%eax
 8208e98:	eb 05                	jmp    8208e9f <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x15f>
 8208e9a:	b8 00 00 00 00       	mov    $0x0,%eax
 8208e9f:	84 c0                	test   %al,%al
 8208ea1:	74 2b                	je     8208ece <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x18e>
 8208ea3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8208eaa:	00 
 8208eab:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8208eb2:	00 
 8208eb3:	c7 44 24 04 80 e5 bc 	movl   $0x8bce580,0x4(%esp)
 8208eba:	08 
 8208ebb:	c7 04 24 50 a4 00 00 	movl   $0xa450,(%esp)
 8208ec2:	e8 10 7a 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8208ec7:	89 c3                	mov    %eax,%ebx
 8208ec9:	e9 e1 0a 00 00       	jmp    82099af <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc6f>
 8208ece:	8b 85 21 ff ff ff    	mov    -0xdf(%ebp),%eax
 8208ed4:	3d c1 d3 28 00       	cmp    $0x28d3c1,%eax
 8208ed9:	74 17                	je     8208ef2 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x1b2>
 8208edb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208ede:	89 04 24             	mov    %eax,(%esp)
 8208ee1:	e8 a6 14 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8208ee6:	83 f8 03             	cmp    $0x3,%eax
 8208ee9:	74 07                	je     8208ef2 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x1b2>
 8208eeb:	b8 01 00 00 00       	mov    $0x1,%eax
 8208ef0:	eb 05                	jmp    8208ef7 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x1b7>
 8208ef2:	b8 00 00 00 00       	mov    $0x0,%eax
 8208ef7:	84 c0                	test   %al,%al
 8208ef9:	74 25                	je     8208f20 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x1e0>
 8208efb:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 8208f02:	00 
 8208f03:	c7 44 24 04 a3 00 00 	movl   $0xa3,0x4(%esp)
 8208f0a:	00 
 8208f0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208f0e:	89 04 24             	mov    %eax,(%esp)
 8208f11:	e8 2c 30 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8208f16:	bb 00 00 00 00       	mov    $0x0,%ebx
 8208f1b:	e9 8f 0a 00 00       	jmp    82099af <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc6f>
 8208f20:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208f23:	89 04 24             	mov    %eax,(%esp)
 8208f26:	e8 f5 4f ef ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8208f2b:	0f be d8             	movsbl %al,%ebx
 8208f2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208f31:	89 04 24             	mov    %eax,(%esp)
 8208f34:	e8 5b 7d f0 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 8208f39:	0f be c0             	movsbl %al,%eax
 8208f3c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8208f40:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208f44:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8208f47:	89 04 24             	mov    %eax,(%esp)
 8208f4a:	e8 53 5c 30 00       	call   850eba2 <_ZNK14CStackableItem21check_change_job_typeEcc>
 8208f4f:	83 f0 01             	xor    $0x1,%eax
 8208f52:	84 c0                	test   %al,%al
 8208f54:	74 25                	je     8208f7b <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x23b>
 8208f56:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 8208f5d:	00 
 8208f5e:	c7 44 24 04 a3 00 00 	movl   $0xa3,0x4(%esp)
 8208f65:	00 
 8208f66:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208f69:	89 04 24             	mov    %eax,(%esp)
 8208f6c:	e8 d1 2f 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8208f71:	bb 00 00 00 00       	mov    $0x0,%ebx
 8208f76:	e9 34 0a 00 00       	jmp    82099af <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc6f>
 8208f7b:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8208f7e:	89 04 24             	mov    %eax,(%esp)
 8208f81:	e8 0c 1d f4 ff       	call   814ac92 <_ZNSt6vectorI10Inven_ItemSaIS0_EEC1Ev>
 8208f86:	c6 45 93 00          	movb   $0x0,-0x6d(%ebp)
 8208f8a:	c6 45 92 00          	movb   $0x0,-0x6e(%ebp)
 8208f8e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8208f91:	8b 00                	mov    (%eax),%eax
 8208f93:	83 c0 0c             	add    $0xc,%eax
 8208f96:	8b 10                	mov    (%eax),%edx
 8208f98:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8208f9b:	89 04 24             	mov    %eax,(%esp)
 8208f9e:	ff d2                	call   *%edx
 8208fa0:	83 f8 22             	cmp    $0x22,%eax
 8208fa3:	0f 94 c0             	sete   %al
 8208fa6:	84 c0                	test   %al,%al
 8208fa8:	0f 84 c8 02 00 00    	je     8209276 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x536>
 8208fae:	8d 45 93             	lea    -0x6d(%ebp),%eax
 8208fb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208fb5:	8b 45 10             	mov    0x10(%ebp),%eax
 8208fb8:	89 04 24             	mov    %eax,(%esp)
 8208fbb:	e8 62 3f 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8208fc0:	83 f0 01             	xor    $0x1,%eax
 8208fc3:	84 c0                	test   %al,%al
 8208fc5:	74 2b                	je     8208ff2 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x2b2>
 8208fc7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8208fce:	00 
 8208fcf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8208fd6:	00 
 8208fd7:	c7 44 24 04 80 e5 bc 	movl   $0x8bce580,0x4(%esp)
 8208fde:	08 
 8208fdf:	c7 04 24 73 a4 00 00 	movl   $0xa473,(%esp)
 8208fe6:	e8 ec 78 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8208feb:	89 c3                	mov    %eax,%ebx
 8208fed:	e9 b2 09 00 00       	jmp    82099a4 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc64>
 8208ff2:	8d 45 92             	lea    -0x6e(%ebp),%eax
 8208ff5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208ff9:	8b 45 10             	mov    0x10(%ebp),%eax
 8208ffc:	89 04 24             	mov    %eax,(%esp)
 8208fff:	e8 1e 3f 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8209004:	83 f0 01             	xor    $0x1,%eax
 8209007:	84 c0                	test   %al,%al
 8209009:	74 2b                	je     8209036 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x2f6>
 820900b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8209012:	00 
 8209013:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820901a:	00 
 820901b:	c7 44 24 04 80 e5 bc 	movl   $0x8bce580,0x4(%esp)
 8209022:	08 
 8209023:	c7 04 24 75 a4 00 00 	movl   $0xa475,(%esp)
 820902a:	e8 a8 78 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820902f:	89 c3                	mov    %eax,%ebx
 8209031:	e9 6e 09 00 00       	jmp    82099a4 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc64>
 8209036:	8d 85 e2 fe ff ff    	lea    -0x11e(%ebp),%eax
 820903c:	89 04 24             	mov    %eax,(%esp)
 820903f:	e8 10 28 ec ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8209044:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8209047:	8b 80 6c 02 00 00    	mov    0x26c(%eax),%eax
 820904d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8209050:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8209054:	0f 85 3e 01 00 00    	jne    8209198 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x458>
 820905a:	8d 45 a2             	lea    -0x5e(%ebp),%eax
 820905d:	8d 55 92             	lea    -0x6e(%ebp),%edx
 8209060:	89 54 24 08          	mov    %edx,0x8(%esp)
 8209064:	8d 55 93             	lea    -0x6d(%ebp),%edx
 8209067:	89 54 24 04          	mov    %edx,0x4(%esp)
 820906b:	89 04 24             	mov    %eax,(%esp)
 820906e:	e8 00 e9 02 00       	call   8237973 <_ZSt9make_pairIRcS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 8209073:	83 ec 04             	sub    $0x4,%esp
 8209076:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8209079:	8d 88 4c 02 00 00    	lea    0x24c(%eax),%ecx
 820907f:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8209085:	8d 55 a2             	lea    -0x5e(%ebp),%edx
 8209088:	89 54 24 08          	mov    %edx,0x8(%esp)
 820908c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8209090:	89 04 24             	mov    %eax,(%esp)
 8209093:	e8 1a e9 02 00       	call   82379b2 <_ZNKSt3mapISt4pairIccESt6vectorI28stStackableBoosterItemInfo_tSaIS3_EESt4lessIS1_ESaIS0_IKS1_S5_EEE4findERS8_>
 8209098:	83 ec 04             	sub    $0x4,%esp
 820909b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 820909e:	8d 90 4c 02 00 00    	lea    0x24c(%eax),%edx
 82090a4:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 82090a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 82090ab:	89 04 24             	mov    %eax,(%esp)
 82090ae:	e8 2b e9 02 00       	call   82379de <_ZNKSt3mapISt4pairIccESt6vectorI28stStackableBoosterItemInfo_tSaIS3_EESt4lessIS1_ESaIS0_IKS1_S5_EEE3endEv>
 82090b3:	83 ec 04             	sub    $0x4,%esp
 82090b6:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 82090b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82090bd:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 82090c3:	89 04 24             	mov    %eax,(%esp)
 82090c6:	e8 39 e9 02 00       	call   8237a04 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKS0_IccESt6vectorI28stStackableBoosterItemInfo_tSaIS4_EEEEneERKS8_>
 82090cb:	84 c0                	test   %al,%al
 82090cd:	0f 84 c5 00 00 00    	je     8209198 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x458>
 82090d3:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 82090d9:	89 04 24             	mov    %eax,(%esp)
 82090dc:	e8 37 e9 02 00       	call   8237a18 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKS0_IccESt6vectorI28stStackableBoosterItemInfo_tSaIS4_EEEEptEv>
 82090e1:	83 c0 04             	add    $0x4,%eax
 82090e4:	89 04 24             	mov    %eax,(%esp)
 82090e7:	e8 3a e9 02 00       	call   8237a26 <_ZNKSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE5emptyEv>
 82090ec:	84 c0                	test   %al,%al
 82090ee:	0f 84 88 00 00 00    	je     820917c <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x43c>
 82090f4:	0f b6 45 92          	movzbl -0x6e(%ebp),%eax
 82090f8:	0f be f8             	movsbl %al,%edi
 82090fb:	0f b6 45 93          	movzbl -0x6d(%ebp),%eax
 82090ff:	0f be f0             	movsbl %al,%esi
 8209102:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8209105:	89 04 24             	mov    %eax,(%esp)
 8209108:	e8 3b 7b f0 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 820910d:	89 c3                	mov    %eax,%ebx
 820910f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8209116:	00 
 8209117:	c7 44 24 08 80 a4 00 	movl   $0xa480,0x8(%esp)
 820911e:	00 
 820911f:	c7 44 24 04 80 e5 bc 	movl   $0x8bce580,0x4(%esp)
 8209126:	08 
 8209127:	8d 45 a8             	lea    -0x58(%ebp),%eax
 820912a:	89 04 24             	mov    %eax,(%esp)
 820912d:	e8 e6 65 34 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8209132:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8209136:	89 74 24 0c          	mov    %esi,0xc(%esp)
 820913a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 820913e:	c7 44 24 04 cc 2a bc 	movl   $0x8bc2acc,0x4(%esp)
 8209145:	08 
 8209146:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8209149:	89 04 24             	mov    %eax,(%esp)
 820914c:	e8 37 66 34 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8209151:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8209158:	00 
 8209159:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8209160:	00 
 8209161:	c7 44 24 04 80 e5 bc 	movl   $0x8bce580,0x4(%esp)
 8209168:	08 
 8209169:	c7 04 24 81 a4 00 00 	movl   $0xa481,(%esp)
 8209170:	e8 62 77 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8209175:	89 c3                	mov    %eax,%ebx
 8209177:	e9 28 08 00 00       	jmp    82099a4 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc64>
 820917c:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8209182:	89 04 24             	mov    %eax,(%esp)
 8209185:	e8 8e e8 02 00       	call   8237a18 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKS0_IccESt6vectorI28stStackableBoosterItemInfo_tSaIS4_EEEEptEv>
 820918a:	83 c0 04             	add    $0x4,%eax
 820918d:	89 04 24             	mov    %eax,(%esp)
 8209190:	e8 d5 e8 02 00       	call   8237a6a <_ZNKSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE4sizeEv>
 8209195:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8209198:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 820919f:	eb 7b                	jmp    820921c <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x4dc>
 82091a1:	8d 85 e2 fe ff ff    	lea    -0x11e(%ebp),%eax
 82091a7:	89 04 24             	mov    %eax,(%esp)
 82091aa:	e8 29 26 ec ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 82091af:	8d 85 e2 fe ff ff    	lea    -0x11e(%ebp),%eax
 82091b5:	83 c0 02             	add    $0x2,%eax
 82091b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82091bc:	8b 45 10             	mov    0x10(%ebp),%eax
 82091bf:	89 04 24             	mov    %eax,(%esp)
 82091c2:	e8 b7 40 38 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 82091c7:	83 f0 01             	xor    $0x1,%eax
 82091ca:	84 c0                	test   %al,%al
 82091cc:	74 2b                	je     82091f9 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x4b9>
 82091ce:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82091d5:	00 
 82091d6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82091dd:	00 
 82091de:	c7 44 24 04 80 e5 bc 	movl   $0x8bce580,0x4(%esp)
 82091e5:	08 
 82091e6:	c7 04 24 8c a4 00 00 	movl   $0xa48c,(%esp)
 82091ed:	e8 e5 76 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82091f2:	89 c3                	mov    %eax,%ebx
 82091f4:	e9 ab 07 00 00       	jmp    82099a4 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc64>
 82091f9:	c7 85 e9 fe ff ff 01 	movl   $0x1,-0x117(%ebp)
 8209200:	00 00 00 
 8209203:	8d 85 e2 fe ff ff    	lea    -0x11e(%ebp),%eax
 8209209:	89 44 24 04          	mov    %eax,0x4(%esp)
 820920d:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8209210:	89 04 24             	mov    %eax,(%esp)
 8209213:	e8 4a e0 02 00       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 8209218:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 820921c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 820921f:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8209222:	7d 0d                	jge    8209231 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x4f1>
 8209224:	83 7d e4 13          	cmpl   $0x13,-0x1c(%ebp)
 8209228:	7f 07                	jg     8209231 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x4f1>
 820922a:	b8 01 00 00 00       	mov    $0x1,%eax
 820922f:	eb 05                	jmp    8209236 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x4f6>
 8209231:	b8 00 00 00 00       	mov    $0x0,%eax
 8209236:	84 c0                	test   %al,%al
 8209238:	0f 85 63 ff ff ff    	jne    82091a1 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x461>
 820923e:	0f b6 45 92          	movzbl -0x6e(%ebp),%eax
 8209242:	0f be c8             	movsbl %al,%ecx
 8209245:	0f b6 45 93          	movzbl -0x6d(%ebp),%eax
 8209249:	0f be d0             	movsbl %al,%edx
 820924c:	8b 85 21 ff ff ff    	mov    -0xdf(%ebp),%eax
 8209252:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8209255:	8d b3 00 97 07 00    	lea    0x79700(%ebx),%esi
 820925b:	8d 5d 94             	lea    -0x6c(%ebp),%ebx
 820925e:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8209262:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8209266:	89 54 24 08          	mov    %edx,0x8(%esp)
 820926a:	89 44 24 04          	mov    %eax,0x4(%esp)
 820926e:	89 34 24             	mov    %esi,(%esp)
 8209271:	e8 dc d8 47 00       	call   8686b52 <_ZN15cUserHistoryLog16UseSelectBoosterEjiiRSt6vectorI10Inven_ItemSaIS1_EE>
 8209276:	e8 da 7e f9 ff       	call   81a1155 <_ZN14GlobalInstanceI17Arad_GiftItem_SetE4instEv>
 820927b:	8b 55 d0             	mov    -0x30(%ebp),%edx
 820927e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8209282:	8b 55 0c             	mov    0xc(%ebp),%edx
 8209285:	89 54 24 04          	mov    %edx,0x4(%esp)
 8209289:	89 04 24             	mov    %eax,(%esp)
 820928c:	e8 33 9f f9 ff       	call   81a31c4 <_ZN17Arad_GiftItem_Set11level_checkEP5CUserPK14CStackableItem>
 8209291:	83 f0 01             	xor    $0x1,%eax
 8209294:	84 c0                	test   %al,%al
 8209296:	74 7e                	je     8209316 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x5d6>
 8209298:	8b b5 21 ff ff ff    	mov    -0xdf(%ebp),%esi
 820929e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 82092a5:	ff 
 82092a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82092a9:	89 04 24             	mov    %eax,(%esp)
 82092ac:	e8 ef 4c 44 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 82092b1:	89 c3                	mov    %eax,%ebx
 82092b3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82092ba:	00 
 82092bb:	c7 44 24 08 9b a4 00 	movl   $0xa49b,0x8(%esp)
 82092c2:	00 
 82092c3:	c7 44 24 04 80 e5 bc 	movl   $0x8bce580,0x4(%esp)
 82092ca:	08 
 82092cb:	8d 45 b8             	lea    -0x48(%ebp),%eax
 82092ce:	89 04 24             	mov    %eax,(%esp)
 82092d1:	e8 42 64 34 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82092d6:	89 74 24 0c          	mov    %esi,0xc(%esp)
 82092da:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82092de:	c7 44 24 04 fc 2a bc 	movl   $0x8bc2afc,0x4(%esp)
 82092e5:	08 
 82092e6:	8d 45 b8             	lea    -0x48(%ebp),%eax
 82092e9:	89 04 24             	mov    %eax,(%esp)
 82092ec:	e8 97 64 34 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82092f1:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 82092f8:	00 
 82092f9:	c7 44 24 04 a3 00 00 	movl   $0xa3,0x4(%esp)
 8209300:	00 
 8209301:	8b 45 0c             	mov    0xc(%ebp),%eax
 8209304:	89 04 24             	mov    %eax,(%esp)
 8209307:	e8 36 2c 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820930c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8209311:	e9 8e 06 00 00       	jmp    82099a4 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc64>
 8209316:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8209319:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 820931e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8209322:	c7 44 24 08 2a 00 00 	movl   $0x2a,0x8(%esp)
 8209329:	00 
 820932a:	8b 55 0c             	mov    0xc(%ebp),%edx
 820932d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8209331:	89 04 24             	mov    %eax,(%esp)
 8209334:	e8 4d f4 07 00       	call   8288786 <_ZN21CSecu_ProtectionField9CheckItemEP5CUser18SECURITY_PROTCTIONPK5CItem>
 8209339:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 820933c:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8209340:	74 27                	je     8209369 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x629>
 8209342:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8209345:	0f b6 c0             	movzbl %al,%eax
 8209348:	89 44 24 08          	mov    %eax,0x8(%esp)
 820934c:	c7 44 24 04 a3 00 00 	movl   $0xa3,0x4(%esp)
 8209353:	00 
 8209354:	8b 45 0c             	mov    0xc(%ebp),%eax
 8209357:	89 04 24             	mov    %eax,(%esp)
 820935a:	e8 e3 2b 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820935f:	bb 00 00 00 00       	mov    $0x0,%ebx
 8209364:	e9 3b 06 00 00       	jmp    82099a4 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc64>
 8209369:	8b 45 d0             	mov    -0x30(%ebp),%eax
 820936c:	89 04 24             	mov    %eax,(%esp)
 820936f:	e8 7a 7f ee ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 8209374:	89 c3                	mov    %eax,%ebx
 8209376:	8b 45 0c             	mov    0xc(%ebp),%eax
 8209379:	89 04 24             	mov    %eax,(%esp)
 820937c:	e8 37 0f ed ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8209381:	39 c3                	cmp    %eax,%ebx
 8209383:	0f 9f c0             	setg   %al
 8209386:	84 c0                	test   %al,%al
 8209388:	74 25                	je     82093af <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x66f>
 820938a:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 8209391:	00 
 8209392:	c7 44 24 04 a3 00 00 	movl   $0xa3,0x4(%esp)
 8209399:	00 
 820939a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820939d:	89 04 24             	mov    %eax,(%esp)
 82093a0:	e8 9d 2b 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82093a5:	bb 00 00 00 00       	mov    $0x0,%ebx
 82093aa:	e9 f5 05 00 00       	jmp    82099a4 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc64>
 82093af:	8b 45 0c             	mov    0xc(%ebp),%eax
 82093b2:	89 04 24             	mov    %eax,(%esp)
 82093b5:	e8 d4 0e ed ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 82093ba:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82093c1:	00 
 82093c2:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 82093c9:	00 
 82093ca:	89 04 24             	mov    %eax,(%esp)
 82093cd:	e8 92 bb 2f 00       	call   8504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>
 82093d2:	83 f0 01             	xor    $0x1,%eax
 82093d5:	84 c0                	test   %al,%al
 82093d7:	74 25                	je     82093fe <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x6be>
 82093d9:	c7 44 24 08 cb 00 00 	movl   $0xcb,0x8(%esp)
 82093e0:	00 
 82093e1:	c7 44 24 04 a3 00 00 	movl   $0xa3,0x4(%esp)
 82093e8:	00 
 82093e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82093ec:	89 04 24             	mov    %eax,(%esp)
 82093ef:	e8 4e 2b 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82093f4:	bb 00 00 00 00       	mov    $0x0,%ebx
 82093f9:	e9 a6 05 00 00       	jmp    82099a4 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc64>
 82093fe:	8b 85 21 ff ff ff    	mov    -0xdf(%ebp),%eax
 8209404:	89 44 24 04          	mov    %eax,0x4(%esp)
 8209408:	8b 45 0c             	mov    0xc(%ebp),%eax
 820940b:	89 04 24             	mov    %eax,(%esp)
 820940e:	e8 81 55 45 00       	call   865e994 <_ZNK5CUser17CheckCoolTimeItemEm>
 8209413:	84 c0                	test   %al,%al
 8209415:	74 25                	je     820943c <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x6fc>
 8209417:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 820941e:	00 
 820941f:	c7 44 24 04 a3 00 00 	movl   $0xa3,0x4(%esp)
 8209426:	00 
 8209427:	8b 45 0c             	mov    0xc(%ebp),%eax
 820942a:	89 04 24             	mov    %eax,(%esp)
 820942d:	e8 10 2b 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8209432:	bb 00 00 00 00       	mov    $0x0,%ebx
 8209437:	e9 68 05 00 00       	jmp    82099a4 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc64>
 820943c:	8b 45 d0             	mov    -0x30(%ebp),%eax
 820943f:	89 04 24             	mov    %eax,(%esp)
 8209442:	e8 01 36 02 00       	call   822ca48 <_ZNK14CStackableItem15IsDeletableItemEv>
 8209447:	84 c0                	test   %al,%al
 8209449:	74 70                	je     82094bb <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x77b>
 820944b:	0f b7 45 a0          	movzwl -0x60(%ebp),%eax
 820944f:	0f bf d8             	movswl %ax,%ebx
 8209452:	8b 45 0c             	mov    0xc(%ebp),%eax
 8209455:	89 04 24             	mov    %eax,(%esp)
 8209458:	e8 31 0e ed ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 820945d:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8209464:	00 
 8209465:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 820946c:	00 
 820946d:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8209474:	00 
 8209475:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8209479:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8209480:	00 
 8209481:	89 04 24             	mov    %eax,(%esp)
 8209484:	e8 83 ab 2f 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8209489:	83 f0 01             	xor    $0x1,%eax
 820948c:	84 c0                	test   %al,%al
 820948e:	74 2b                	je     82094bb <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x77b>
 8209490:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8209497:	00 
 8209498:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820949f:	00 
 82094a0:	c7 44 24 04 80 e5 bc 	movl   $0x8bce580,0x4(%esp)
 82094a7:	08 
 82094a8:	c7 04 24 d3 a4 00 00 	movl   $0xa4d3,(%esp)
 82094af:	e8 23 74 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82094b4:	89 c3                	mov    %eax,%ebx
 82094b6:	e9 e9 04 00 00       	jmp    82099a4 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc64>
 82094bb:	8b 85 21 ff ff ff    	mov    -0xdf(%ebp),%eax
 82094c1:	8b 55 d0             	mov    -0x30(%ebp),%edx
 82094c4:	89 54 24 08          	mov    %edx,0x8(%esp)
 82094c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82094cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82094cf:	89 04 24             	mov    %eax,(%esp)
 82094d2:	e8 8b 55 45 00       	call   865ea62 <_ZN5CUser22_processContinuousItemEjP14CStackableItem>
 82094d7:	0f b7 45 a0          	movzwl -0x60(%ebp),%eax
 82094db:	98                   	cwtl
 82094dc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82094e0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82094e7:	00 
 82094e8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82094ef:	00 
 82094f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82094f3:	89 04 24             	mov    %eax,(%esp)
 82094f6:	e8 dd 2d 47 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 82094fb:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8209502:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 8209509:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8209510:	e8 89 27 ec ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8209515:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8209518:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 820951e:	89 04 24             	mov    %eax,(%esp)
 8209521:	e8 1e 0d f7 ff       	call   817a244 <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tC1Ev>
 8209526:	0f b6 45 92          	movzbl -0x6e(%ebp),%eax
 820952a:	0f be d8             	movsbl %al,%ebx
 820952d:	0f b6 45 93          	movzbl -0x6d(%ebp),%eax
 8209531:	0f be c8             	movsbl %al,%ecx
 8209534:	8b 85 21 ff ff ff    	mov    -0xdf(%ebp),%eax
 820953a:	89 c2                	mov    %eax,%edx
 820953c:	a1 44 f7 41 09       	mov    0x941f744,%eax
 8209541:	c7 44 24 30 01 00 00 	movl   $0x1,0x30(%esp)
 8209548:	00 
 8209549:	c7 44 24 2c 00 00 00 	movl   $0x0,0x2c(%esp)
 8209550:	00 
 8209551:	89 5c 24 28          	mov    %ebx,0x28(%esp)
 8209555:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 8209559:	8d 8d 74 ff ff ff    	lea    -0x8c(%ebp),%ecx
 820955f:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 8209563:	8d 4d 94             	lea    -0x6c(%ebp),%ecx
 8209566:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 820956a:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 8209571:	00 
 8209572:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8209575:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8209579:	8d 4d 8c             	lea    -0x74(%ebp),%ecx
 820957c:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8209580:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 8209583:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8209587:	89 54 24 08          	mov    %edx,0x8(%esp)
 820958b:	8b 55 0c             	mov    0xc(%ebp),%edx
 820958e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8209592:	89 04 24             	mov    %eax,(%esp)
 8209595:	e8 e4 c2 11 00       	call   832587e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi>
 820959a:	84 c0                	test   %al,%al
 820959c:	0f 84 8f 00 00 00    	je     8209631 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x8f1>
 82095a2:	8b 45 8c             	mov    -0x74(%ebp),%eax
 82095a5:	85 c0                	test   %eax,%eax
 82095a7:	74 0a                	je     82095b3 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x873>
 82095a9:	bb 00 00 00 00       	mov    $0x0,%ebx
 82095ae:	e9 c6 03 00 00       	jmp    8209979 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc39>
 82095b3:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 82095b7:	74 20                	je     82095d9 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x899>
 82095b9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82095bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 82095c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82095c3:	89 04 24             	mov    %eax,(%esp)
 82095c6:	e8 ad 42 44 00       	call   864d878 <_ZN5CUser17IsRestrictedGoodsEi>
 82095cb:	83 f0 01             	xor    $0x1,%eax
 82095ce:	84 c0                	test   %al,%al
 82095d0:	74 07                	je     82095d9 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x899>
 82095d2:	b8 01 00 00 00       	mov    $0x1,%eax
 82095d7:	eb 05                	jmp    82095de <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x89e>
 82095d9:	b8 00 00 00 00       	mov    $0x0,%eax
 82095de:	84 c0                	test   %al,%al
 82095e0:	74 7a                	je     820965c <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x91c>
 82095e2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82095e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82095e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82095ec:	89 04 24             	mov    %eax,(%esp)
 82095ef:	e8 5a 42 44 00       	call   864d84e <_ZN5CUser18SetRestrictedGoodsEi>
 82095f4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82095fb:	00 
 82095fc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82095ff:	89 44 24 08          	mov    %eax,0x8(%esp)
 8209603:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8209606:	89 44 24 04          	mov    %eax,0x4(%esp)
 820960a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820960d:	89 04 24             	mov    %eax,(%esp)
 8209610:	e8 1b c4 11 00       	call   8325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>
 8209615:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8209618:	89 44 24 08          	mov    %eax,0x8(%esp)
 820961c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8209623:	00 
 8209624:	8b 45 0c             	mov    0xc(%ebp),%eax
 8209627:	89 04 24             	mov    %eax,(%esp)
 820962a:	e8 75 43 44 00       	call   864d9a4 <_ZN5CUser19SendRestrictedGoodsEbi>
 820962f:	eb 2b                	jmp    820965c <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x91c>
 8209631:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8209638:	00 
 8209639:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8209640:	00 
 8209641:	c7 44 24 04 80 e5 bc 	movl   $0x8bce580,0x4(%esp)
 8209648:	08 
 8209649:	c7 04 24 f6 a4 00 00 	movl   $0xa4f6,(%esp)
 8209650:	e8 82 72 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8209655:	89 c3                	mov    %eax,%ebx
 8209657:	e9 1d 03 00 00       	jmp    8209979 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc39>
 820965c:	8b 85 21 ff ff ff    	mov    -0xdf(%ebp),%eax
 8209662:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8209666:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8209669:	89 44 24 08          	mov    %eax,0x8(%esp)
 820966d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8209670:	89 44 24 04          	mov    %eax,0x4(%esp)
 8209674:	8b 45 08             	mov    0x8(%ebp),%eax
 8209677:	89 04 24             	mov    %eax,(%esp)
 820967a:	e8 3d 03 00 00       	call   82099bc <_ZN25Dispatcher_UseBoosterItem23_onBoosterItemUseResultEP5CUserRSt6vectorI10Inven_ItemSaIS3_EEi>
 820967f:	8b 85 21 ff ff ff    	mov    -0xdf(%ebp),%eax
 8209685:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8209689:	8d 45 94             	lea    -0x6c(%ebp),%eax
 820968c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8209690:	8b 45 0c             	mov    0xc(%ebp),%eax
 8209693:	89 44 24 04          	mov    %eax,0x4(%esp)
 8209697:	8b 45 08             	mov    0x8(%ebp),%eax
 820969a:	89 04 24             	mov    %eax,(%esp)
 820969d:	e8 bc 03 00 00       	call   8209a5e <_ZN25Dispatcher_UseBoosterItem31_onBoosterItemUseResult_OnlyOneEP5CUserRSt6vectorI10Inven_ItemSaIS3_EEi>
 82096a2:	8b 85 21 ff ff ff    	mov    -0xdf(%ebp),%eax
 82096a8:	3d b3 d1 28 00       	cmp    $0x28d1b3,%eax
 82096ad:	75 12                	jne    82096c1 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0x981>
 82096af:	8d 45 94             	lea    -0x6c(%ebp),%eax
 82096b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82096b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82096b9:	89 04 24             	mov    %eax,(%esp)
 82096bc:	e8 c1 10 48 00       	call   868a782 <_ZN5CUser32SendEventJarOutputItemStatisticsERKSt6vectorI10Inven_ItemSaIS1_EE>
 82096c1:	0f b7 45 a0          	movzwl -0x60(%ebp),%eax
 82096c5:	0f bf d8             	movswl %ax,%ebx
 82096c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82096cb:	89 04 24             	mov    %eax,(%esp)
 82096ce:	e8 ab 0b ed ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 82096d3:	8d 95 98 fe ff ff    	lea    -0x168(%ebp),%edx
 82096d9:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82096dd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82096e4:	00 
 82096e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82096e9:	89 14 24             	mov    %edx,(%esp)
 82096ec:	e8 27 22 2f 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 82096f1:	83 ec 04             	sub    $0x4,%esp
 82096f4:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 82096fa:	89 85 1f ff ff ff    	mov    %eax,-0xe1(%ebp)
 8209700:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 8209706:	89 85 23 ff ff ff    	mov    %eax,-0xdd(%ebp)
 820970c:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 8209712:	89 85 27 ff ff ff    	mov    %eax,-0xd9(%ebp)
 8209718:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 820971e:	89 85 2b ff ff ff    	mov    %eax,-0xd5(%ebp)
 8209724:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 820972a:	89 85 2f ff ff ff    	mov    %eax,-0xd1(%ebp)
 8209730:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 8209736:	89 85 33 ff ff ff    	mov    %eax,-0xcd(%ebp)
 820973c:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 8209742:	89 85 37 ff ff ff    	mov    %eax,-0xc9(%ebp)
 8209748:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 820974e:	89 85 3b ff ff ff    	mov    %eax,-0xc5(%ebp)
 8209754:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 820975a:	89 85 3f ff ff ff    	mov    %eax,-0xc1(%ebp)
 8209760:	8b 85 bc fe ff ff    	mov    -0x144(%ebp),%eax
 8209766:	89 85 43 ff ff ff    	mov    %eax,-0xbd(%ebp)
 820976c:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 8209772:	89 85 47 ff ff ff    	mov    %eax,-0xb9(%ebp)
 8209778:	8b 85 c4 fe ff ff    	mov    -0x13c(%ebp),%eax
 820977e:	89 85 4b ff ff ff    	mov    %eax,-0xb5(%ebp)
 8209784:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 820978a:	89 85 4f ff ff ff    	mov    %eax,-0xb1(%ebp)
 8209790:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 8209796:	89 85 53 ff ff ff    	mov    %eax,-0xad(%ebp)
 820979c:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 82097a2:	89 85 57 ff ff ff    	mov    %eax,-0xa9(%ebp)
 82097a8:	0f b6 85 d4 fe ff ff 	movzbl -0x12c(%ebp),%eax
 82097af:	88 85 5b ff ff ff    	mov    %al,-0xa5(%ebp)
 82097b5:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 82097bb:	89 04 24             	mov    %eax,(%esp)
 82097be:	e8 89 45 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82097c3:	c7 44 24 08 a3 00 00 	movl   $0xa3,0x8(%esp)
 82097ca:	00 
 82097cb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82097d2:	00 
 82097d3:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 82097d9:	89 04 24             	mov    %eax,(%esp)
 82097dc:	e8 1b 21 ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82097e1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82097e8:	00 
 82097e9:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 82097ef:	89 04 24             	mov    %eax,(%esp)
 82097f2:	e8 29 21 ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82097f7:	0f b7 45 a0          	movzwl -0x60(%ebp),%eax
 82097fb:	98                   	cwtl
 82097fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8209800:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8209806:	89 04 24             	mov    %eax,(%esp)
 8209809:	e8 96 06 ed ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 820980e:	8b 85 26 ff ff ff    	mov    -0xda(%ebp),%eax
 8209814:	89 44 24 04          	mov    %eax,0x4(%esp)
 8209818:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 820981e:	89 04 24             	mov    %eax,(%esp)
 8209821:	e8 16 21 ec ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8209826:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8209829:	89 04 24             	mov    %eax,(%esp)
 820982c:	e8 2d 0e f7 ff       	call   817a65e <_ZNKSt6vectorI10Inven_ItemSaIS0_EE4sizeEv>
 8209831:	89 44 24 04          	mov    %eax,0x4(%esp)
 8209835:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 820983b:	89 04 24             	mov    %eax,(%esp)
 820983e:	e8 61 06 ed ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8209843:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8209846:	8d 55 94             	lea    -0x6c(%ebp),%edx
 8209849:	89 54 24 04          	mov    %edx,0x4(%esp)
 820984d:	89 04 24             	mov    %eax,(%esp)
 8209850:	e8 af 14 f4 ff       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 8209855:	83 ec 04             	sub    $0x4,%esp
 8209858:	8d 45 c8             	lea    -0x38(%ebp),%eax
 820985b:	89 44 24 04          	mov    %eax,0x4(%esp)
 820985f:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8209865:	89 04 24             	mov    %eax,(%esp)
 8209868:	e8 7f 92 f4 ff       	call   8152aec <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 820986d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8209870:	8d 55 94             	lea    -0x6c(%ebp),%edx
 8209873:	89 54 24 04          	mov    %edx,0x4(%esp)
 8209877:	89 04 24             	mov    %eax,(%esp)
 820987a:	e8 6b 90 f4 ff       	call   81528ea <_ZNSt6vectorI10Inven_ItemSaIS0_EE3endEv>
 820987f:	83 ec 04             	sub    $0x4,%esp
 8209882:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8209885:	89 44 24 04          	mov    %eax,0x4(%esp)
 8209889:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 820988f:	89 04 24             	mov    %eax,(%esp)
 8209892:	e8 55 92 f4 ff       	call   8152aec <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 8209897:	eb 54                	jmp    82098ed <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xbad>
 8209899:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 820989f:	89 04 24             	mov    %eax,(%esp)
 82098a2:	e8 d5 0d f7 ff       	call   817a67c <_ZNK9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEptEv>
 82098a7:	8b 40 02             	mov    0x2(%eax),%eax
 82098aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 82098ae:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 82098b4:	89 04 24             	mov    %eax,(%esp)
 82098b7:	e8 80 20 ec ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82098bc:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 82098c2:	89 04 24             	mov    %eax,(%esp)
 82098c5:	e8 b2 0d f7 ff       	call   817a67c <_ZNK9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEptEv>
 82098ca:	8b 40 07             	mov    0x7(%eax),%eax
 82098cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82098d1:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 82098d7:	89 04 24             	mov    %eax,(%esp)
 82098da:	e8 5d 20 ec ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82098df:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 82098e5:	89 04 24             	mov    %eax,(%esp)
 82098e8:	e8 45 92 f4 ff       	call   8152b32 <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEppEv>
 82098ed:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 82098f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82098f7:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 82098fd:	89 04 24             	mov    %eax,(%esp)
 8209900:	e8 01 92 f4 ff       	call   8152b06 <_ZN9__gnu_cxxneIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8209905:	84 c0                	test   %al,%al
 8209907:	75 90                	jne    8209899 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xb59>
 8209909:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8209910:	00 
 8209911:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8209917:	89 04 24             	mov    %eax,(%esp)
 820991a:	e8 39 20 ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 820991f:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8209925:	89 44 24 04          	mov    %eax,0x4(%esp)
 8209929:	8b 45 0c             	mov    0xc(%ebp),%eax
 820992c:	89 04 24             	mov    %eax,(%esp)
 820992f:	e8 86 ec 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8209934:	bb 00 00 00 00       	mov    $0x0,%ebx
 8209939:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 820993f:	89 04 24             	mov    %eax,(%esp)
 8209942:	e8 39 45 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8209947:	eb 30                	jmp    8209979 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc39>
 8209949:	89 d3                	mov    %edx,%ebx
 820994b:	89 c6                	mov    %eax,%esi
 820994d:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8209953:	89 04 24             	mov    %eax,(%esp)
 8209956:	e8 25 45 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 820995b:	89 f0                	mov    %esi,%eax
 820995d:	89 da                	mov    %ebx,%edx
 820995f:	eb 00                	jmp    8209961 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc21>
 8209961:	89 d3                	mov    %edx,%ebx
 8209963:	89 c6                	mov    %eax,%esi
 8209965:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 820996b:	89 04 24             	mov    %eax,(%esp)
 820996e:	e8 89 09 f7 ff       	call   817a2fc <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tD1Ev>
 8209973:	89 f0                	mov    %esi,%eax
 8209975:	89 da                	mov    %ebx,%edx
 8209977:	eb 10                	jmp    8209989 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc49>
 8209979:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 820997f:	89 04 24             	mov    %eax,(%esp)
 8209982:	e8 75 09 f7 ff       	call   817a2fc <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tD1Ev>
 8209987:	eb 1b                	jmp    82099a4 <_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf+0xc64>
 8209989:	89 d3                	mov    %edx,%ebx
 820998b:	89 c6                	mov    %eax,%esi
 820998d:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8209990:	89 04 24             	mov    %eax,(%esp)
 8209993:	e8 0e 13 f4 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 8209998:	89 f0                	mov    %esi,%eax
 820999a:	89 da                	mov    %ebx,%edx
 820999c:	89 04 24             	mov    %eax,(%esp)
 820999f:	e8 ac 9d 8d 00       	call   8ae3750 <_Unwind_Resume>
 82099a4:	8d 45 94             	lea    -0x6c(%ebp),%eax
 82099a7:	89 04 24             	mov    %eax,(%esp)
 82099aa:	e8 f7 12 f4 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 82099af:	89 d8                	mov    %ebx,%eax
 82099b1:	8d 65 f4             	lea    -0xc(%ebp),%esp
 82099b4:	83 c4 00             	add    $0x0,%esp
 82099b7:	5b                   	pop    %ebx
 82099b8:	5e                   	pop    %esi
 82099b9:	5f                   	pop    %edi
 82099ba:	5d                   	pop    %ebp
 82099bb:	c3                   	ret

```

```c
// Dispatcher_UseBoosterItem::dispatch_sig @ 0x8208d40

/* Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UseBoosterItem::dispatch_sig
          (Dispatcher_UseBoosterItem *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  CPrivateStoreMgr *this_00;
  int iVar5;
  CDataManager *this_01;
  Arad_GiftItem_Set *this_02;
  undefined4 uVar6;
  CInventory *pCVar7;
  int iVar8;
  undefined1 local_16c [12];
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130;
  Inven_Item local_122 [2];
  ulong uStack_120;
  undefined4 local_11b;
  undefined2 local_e5;
  undefined2 uStack_e3;
  undefined2 uStack_e1;
  undefined1 uStack_df;
  int iStack_de;
  undefined1 uStack_da;
  undefined4 local_d9;
  undefined4 local_d5;
  undefined4 local_d1;
  undefined4 local_cd;
  undefined4 local_c9;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined4 local_bd;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined4 local_ad;
  undefined1 local_a9;
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_a8 [4];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_a4 [4];
  _Rb_tree_const_iterator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>
  local_a0 [4];
  PacketGuard local_9c [12];
  stCeraShopItemParam_t local_90 [24];
  int local_78;
  char local_72;
  char local_71;
  vector<Inven_Item,std::allocator<Inven_Item>> local_70 [12];
  short local_64;
  char local_62 [2];
  map<std::pair<char,char>,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>>
  local_60 [4];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  __normal_iterator local_3c [4];
  __normal_iterator local_38 [4];
  CStackableItem *local_34;
  uint local_30;
  int local_2c;
  long local_28;
  int local_24;
  int local_20;
  
  local_64 = -1;
  cVar1 = PacketBuf::get_short(param_2,&local_64);
  if (cVar1 != '\x01') {
    uVar4 = LineFunc(0xa436,
                     "virtual int Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar4;
  }
  cVar1 = CUser::CheckInTrade(param_1);
  if (cVar1 == '\0') {
    this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    cVar1 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,param_1);
    if (cVar1 != '\0') goto LAB_08208dbd;
    bVar3 = false;
  }
  else {
LAB_08208dbd:
    bVar3 = true;
  }
  if (bVar3) {
    CUser::SendCmdErrorPacket(param_1,0xa3,0x13);
    return 0;
  }
  iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar5 == 0) {
    return 0xa43e;
  }
  iVar8 = (int)local_64;
  iVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  uVar4 = 1;
  CInventory::GetInvenSlot((int)&local_e5,iVar5);
  iVar5 = CONCAT22(uStack_e1,uStack_e3);
  this_01 = (CDataManager *)G_CDataManager();
  local_34 = (CStackableItem *)CDataManager::find_item(this_01,iVar5);
  if ((local_34 == (CStackableItem *)0x0) ||
     ((iVar5 = (**(code **)(*(int *)local_34 + 0xc))(local_34,iVar5,uVar4,iVar8), iVar5 != 0x10 &&
      (iVar5 = (**(code **)(*(int *)local_34 + 0xc))(local_34), iVar5 != 0x22)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    uVar4 = LineFunc(0xa450,
                     "virtual int Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar4;
  }
  if ((CONCAT22(uStack_e1,uStack_e3) == 0x28d3c1) || (iVar5 = CUser::get_state(param_1), iVar5 == 3)
     ) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    CUser::SendCmdErrorPacket(param_1,0xa3,0x13);
    return 0;
  }
  cVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
  cVar1 = CStackableItem::check_change_job_type(local_34,cVar2,cVar1);
  if (cVar1 != '\x01') {
    CUser::SendCmdErrorPacket(param_1,0xa3,0x17);
    return 0;
  }
  std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_70);
  local_71 = '\0';
  local_72 = '\0';
                    /* try { // try from 08208f9e to 08209525 has its CatchHandler @ 08209989 */
  iVar5 = (**(code **)(*(int *)local_34 + 0xc))(local_34);
  if (iVar5 == 0x22) {
    cVar1 = PacketBuf::get_byte(param_2,&local_71);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_2,&local_72);
      if (cVar1 == '\x01') {
        Inven_Item::Inven_Item(local_122);
        local_24 = *(int *)(local_34 + 0x26c);
        if (local_24 == 0) {
          std::make_pair<char&,char&>(local_62,&local_71);
          std::
          map<std::pair<char,char>,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>>
          ::find(local_a0);
          std::
          map<std::pair<char,char>,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>>
          ::end(local_60);
          cVar1 = std::
                  _Rb_tree_const_iterator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>
                  ::operator!=(local_a0,(_Rb_tree_const_iterator *)local_60);
          if (cVar1 != '\0') {
            std::
            _Rb_tree_const_iterator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>
            ::operator->(local_a0);
            cVar1 = std::
                    vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
                    ::empty();
            if (cVar1 != '\0') {
              iVar8 = (int)local_72;
              iVar5 = (int)local_71;
              uVar4 = CItem::get_index((CItem *)local_34);
              cMyTrace::cMyTrace(local_5c,
                                 "virtual int Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0xa480,5);
              cMyTrace::operator()
                        (local_5c,"selectionBooster empty : %d, category:%d,%d\n",uVar4,iVar5,iVar8)
              ;
              uVar4 = LineFunc(0xa481,
                               "virtual int Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_082099a4;
            }
            iVar5 = std::
                    _Rb_tree_const_iterator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>
                    ::operator->(local_a0);
            local_24 = std::
                       vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
                       ::size((vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
                               *)(iVar5 + 4));
          }
        }
        local_20 = 0;
        while( true ) {
          if ((local_20 < local_24) && (local_20 < 0x14)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (!bVar3) {
            cUserHistoryLog::UseSelectBooster
                      ((cUserHistoryLog *)(param_1 + 0x79700),CONCAT22(uStack_e1,uStack_e3),
                       (int)local_71,(int)local_72,(vector *)local_70);
            goto LAB_08209276;
          }
          Inven_Item::reset(local_122);
          cVar1 = PacketBuf::get_int(param_2,&uStack_120);
          if (cVar1 != '\x01') break;
          local_11b = 1;
          std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back(local_70,local_122);
          local_20 = local_20 + 1;
        }
        uVar4 = LineFunc(0xa48c,
                         "virtual int Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)",0
                         ,0);
      }
      else {
        uVar4 = LineFunc(0xa475,
                         "virtual int Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)",0
                         ,0);
      }
    }
    else {
      uVar4 = LineFunc(0xa473,
                       "virtual int Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)",0,0
                      );
    }
  }
  else {
LAB_08209276:
    this_02 = (Arad_GiftItem_Set *)GlobalInstance<Arad_GiftItem_Set>::inst();
    cVar1 = Arad_GiftItem_Set::level_check(this_02,param_1,local_34);
    if (cVar1 == '\x01') {
      local_30 = CSecu_ProtectionField::CheckItem
                           (GlobalData::s_pSecuProtectionField,param_1,0x2a,local_34);
      if (local_30 == 0) {
        iVar5 = CItem::getUsableLevel((CItem *)local_34);
        iVar8 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        if (iVar8 < iVar5) {
          CUser::SendCmdErrorPacket(param_1,0xa3,0x13);
          uVar4 = 0;
        }
        else {
          pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          cVar1 = CInventory::check_empty_count(pCVar7,5,1);
          if (cVar1 == '\x01') {
            cVar1 = CUser::CheckCoolTimeItem(param_1,CONCAT22(uStack_e1,uStack_e3));
            if (cVar1 == '\0') {
              cVar1 = CStackableItem::IsDeletableItem(local_34);
              if (cVar1 != '\0') {
                iVar5 = (int)local_64;
                pCVar7 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                cVar1 = CInventory::delete_item(pCVar7,1,iVar5,1,3,1);
                if (cVar1 != '\x01') {
                  uVar4 = LineFunc(0xa4d3,
                                   "virtual int Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  goto LAB_082099a4;
                }
              }
              CUser::_processContinuousItem(param_1,CONCAT22(uStack_e1,uStack_e3),local_34);
              CUser::SendUpdateItem(param_1,1,0,(int)local_64);
              local_2c = 0;
              local_78 = 0;
              local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
              WongWork::CCeraShop::stCeraShopItemParam_t::stCeraShopItemParam_t(local_90);
                    /* try { // try from 08209595 to 082097c2 has its CatchHandler @ 08209961 */
              cVar1 = WongWork::CCeraShop::ProcessSpecialItem
                                (GlobalData::s_pCeraShop,param_1,CONCAT22(uStack_e1,uStack_e3),
                                 local_2c,&local_78,local_28,true,(vector *)local_70,local_90,
                                 local_71,local_72,false,1);
              if (cVar1 == '\0') {
                uVar4 = LineFunc(0xa4f6,
                                 "virtual int Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
              else if (local_78 == 0) {
                if ((local_2c == 0) ||
                   (cVar1 = CUser::IsRestrictedGoods(param_1,local_2c), cVar1 == '\x01')) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) {
                  CUser::SetRestrictedGoods(param_1,local_2c);
                  WongWork::CCeraShop::SaveFeaturedIdx(param_1,local_2c,local_28,0);
                  CUser::SendRestrictedGoods(param_1,true,local_2c);
                }
                _onBoosterItemUseResult
                          (this,param_1,(vector *)local_70,CONCAT22(uStack_e1,uStack_e3));
                _onBoosterItemUseResult_OnlyOne
                          (this,param_1,(vector *)local_70,CONCAT22(uStack_e1,uStack_e3));
                if (CONCAT22(uStack_e1,uStack_e3) == 0x28d1b3) {
                  CUser::SendEventJarOutputItemStatistics(param_1,(vector *)local_70);
                }
                iVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                CInventory::GetInvenSlot((int)local_16c,iVar5);
                local_e5 = (undefined2)local_16c._0_4_;
                uStack_e3 = SUB42(local_16c._0_4_,2);
                uStack_e1 = (undefined2)local_16c._4_4_;
                uStack_df = SUB41(local_16c._4_4_,2);
                iStack_de._1_3_ = (undefined3)local_16c._8_4_;
                iStack_de = CONCAT31(iStack_de._1_3_,SUB41(local_16c._4_4_,3));
                uStack_da = SUB41(local_16c._8_4_,3);
                local_d9 = local_160;
                local_d5 = local_15c;
                local_d1 = local_158;
                local_cd = local_154;
                local_c9 = local_150;
                local_c5 = local_14c;
                local_c1 = local_148;
                local_bd = local_144;
                local_b9 = local_140;
                local_b5 = local_13c;
                local_b1 = local_138;
                local_ad = local_134;
                local_a9 = local_130;
                PacketGuard::PacketGuard(local_9c);
                    /* try { // try from 082097dc to 08209933 has its CatchHandler @ 08209949 */
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_9c,1,0xa3);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_9c,1);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,(int)local_64);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_9c,iStack_de);
                iVar5 = std::vector<Inven_Item,std::allocator<Inven_Item>>::size(local_70);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,iVar5);
                std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
                __gnu_cxx::
                __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                ::__normal_iterator<Inven_Item*>(local_a4,local_3c);
                std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
                __gnu_cxx::
                __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                ::__normal_iterator<Inven_Item*>(local_a8,local_38);
                while (bVar3 = __gnu_cxx::operator!=(local_a4,local_a8), bVar3) {
                  iVar5 = __gnu_cxx::
                          __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                          ::operator->(local_a4);
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_9c,*(int *)(iVar5 + 2));
                  iVar5 = __gnu_cxx::
                          __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                          ::operator->(local_a4);
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_9c,*(int *)(iVar5 + 7));
                  __gnu_cxx::
                  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                  ::operator++(local_a4);
                }
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_9c,true);
                CUser::Send(param_1,local_9c);
                uVar4 = 0;
                    /* try { // try from 08209942 to 08209946 has its CatchHandler @ 08209961 */
                PacketGuard::~PacketGuard(local_9c);
              }
              else {
                uVar4 = 0;
              }
                    /* try { // try from 08209982 to 08209986 has its CatchHandler @ 08209989 */
              WongWork::CCeraShop::stCeraShopItemParam_t::~stCeraShopItemParam_t(local_90);
            }
            else {
              CUser::SendCmdErrorPacket(param_1,0xa3,0x13);
              uVar4 = 0;
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0xa3,0xcb);
            uVar4 = 0;
          }
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0xa3,local_30 & 0xff);
        uVar4 = 0;
      }
    }
    else {
      uVar4 = CONCAT22(uStack_e1,uStack_e3);
      uVar6 = CUser::get_charac_no(param_1,-1);
      cMyTrace::cMyTrace(local_4c,
                         "virtual int Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)",
                         0xa49b,0);
      cMyTrace::operator()
                (local_4c,"stackable item level check charac_no[%d], item_id(%d)",uVar6,uVar4);
      CUser::SendCmdErrorPacket(param_1,0xa3,0x13);
      uVar4 = 0;
    }
  }
LAB_082099a4:
  std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_70);
  return uVar4;
}

```

---

## sendBroadCastItems

```asm
// === 08209b0e Dispatcher_UseBoosterItem::sendBroadCastItems  [0x08209b0e-0x8209c8b] ===
 8209b0e:	55                   	push   %ebp
 8209b0f:	89 e5                	mov    %esp,%ebp
 8209b11:	56                   	push   %esi
 8209b12:	53                   	push   %ebx
 8209b13:	83 ec 20             	sub    $0x20,%esp
 8209b16:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8209b1a:	0f 84 64 01 00 00    	je     8209c84 <_ZN25Dispatcher_UseBoosterItem18sendBroadCastItemsEP5CUserRK10Inven_Itemi+0x176>
 8209b20:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8209b24:	e8 72 26 ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 8209b29:	8d 90 bc b5 00 00    	lea    0xb5bc(%eax),%edx
 8209b2f:	8b 45 14             	mov    0x14(%ebp),%eax
 8209b32:	89 44 24 04          	mov    %eax,0x4(%esp)
 8209b36:	89 14 24             	mov    %edx,(%esp)
 8209b39:	e8 5e f2 70 00       	call   8918d9c <_ZNK21stBroadCastItemScript14isUnCommonItemEi>
 8209b3e:	84 c0                	test   %al,%al
 8209b40:	74 2b                	je     8209b6d <_ZN25Dispatcher_UseBoosterItem18sendBroadCastItemsEP5CUserRK10Inven_Itemi+0x5f>
 8209b42:	8b 45 10             	mov    0x10(%ebp),%eax
 8209b45:	8b 40 02             	mov    0x2(%eax),%eax
 8209b48:	89 c3                	mov    %eax,%ebx
 8209b4a:	e8 4c 26 ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 8209b4f:	8d 90 bc b5 00 00    	lea    0xb5bc(%eax),%edx
 8209b55:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8209b59:	8b 45 14             	mov    0x14(%ebp),%eax
 8209b5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8209b60:	89 14 24             	mov    %edx,(%esp)
 8209b63:	e8 96 f2 70 00       	call   8918dfe <_ZNK21stBroadCastItemScript23checkUnCommonNestedItemEii>
 8209b68:	88 45 f7             	mov    %al,-0x9(%ebp)
 8209b6b:	eb 21                	jmp    8209b8e <_ZN25Dispatcher_UseBoosterItem18sendBroadCastItemsEP5CUserRK10Inven_Itemi+0x80>
 8209b6d:	8b 45 10             	mov    0x10(%ebp),%eax
 8209b70:	8b 40 02             	mov    0x2(%eax),%eax
 8209b73:	89 c3                	mov    %eax,%ebx
 8209b75:	e8 21 26 ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 8209b7a:	05 bc b5 00 00       	add    $0xb5bc,%eax
 8209b7f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8209b83:	89 04 24             	mov    %eax,(%esp)
 8209b86:	e8 51 f1 70 00       	call   8918cdc <_ZNK21stBroadCastItemScript15checkCommonItemEi>
 8209b8b:	88 45 f7             	mov    %al,-0x9(%ebp)
 8209b8e:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 8209b92:	0f 84 ed 00 00 00    	je     8209c85 <_ZN25Dispatcher_UseBoosterItem18sendBroadCastItemsEP5CUserRK10Inven_Itemi+0x177>
 8209b98:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8209b9b:	89 04 24             	mov    %eax,(%esp)
 8209b9e:	e8 a9 41 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8209ba3:	c7 44 24 08 56 00 00 	movl   $0x56,0x8(%esp)
 8209baa:	00 
 8209bab:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8209bb2:	00 
 8209bb3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8209bb6:	89 04 24             	mov    %eax,(%esp)
 8209bb9:	e8 3e 1d ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8209bbe:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8209bc5:	00 
 8209bc6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8209bc9:	89 04 24             	mov    %eax,(%esp)
 8209bcc:	e8 4f 1d ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8209bd1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8209bd8:	00 
 8209bd9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8209bdc:	89 04 24             	mov    %eax,(%esp)
 8209bdf:	e8 3c 1d ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8209be4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8209be7:	89 04 24             	mov    %eax,(%esp)
 8209bea:	e8 8d 07 ed ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8209bef:	0f b7 c0             	movzwl %ax,%eax
 8209bf2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8209bf6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8209bf9:	89 04 24             	mov    %eax,(%esp)
 8209bfc:	e8 a3 02 ed ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8209c01:	8b 45 10             	mov    0x10(%ebp),%eax
 8209c04:	8b 40 02             	mov    0x2(%eax),%eax
 8209c07:	89 44 24 04          	mov    %eax,0x4(%esp)
 8209c0b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8209c0e:	89 04 24             	mov    %eax,(%esp)
 8209c11:	e8 26 1d ec ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8209c16:	8b 45 10             	mov    0x10(%ebp),%eax
 8209c19:	89 04 24             	mov    %eax,(%esp)
 8209c1c:	e8 4b b4 ee ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8209c21:	0f b6 c0             	movzbl %al,%eax
 8209c24:	89 44 24 04          	mov    %eax,0x4(%esp)
 8209c28:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8209c2b:	89 04 24             	mov    %eax,(%esp)
 8209c2e:	e8 ed 1c ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8209c33:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8209c3a:	00 
 8209c3b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8209c3e:	89 04 24             	mov    %eax,(%esp)
 8209c41:	e8 12 1d ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8209c46:	e8 5c 07 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 8209c4b:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8209c4e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8209c52:	89 04 24             	mov    %eax,(%esp)
 8209c55:	e8 ba ef 4b 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 8209c5a:	eb 1b                	jmp    8209c77 <_ZN25Dispatcher_UseBoosterItem18sendBroadCastItemsEP5CUserRK10Inven_Itemi+0x169>
 8209c5c:	89 d3                	mov    %edx,%ebx
 8209c5e:	89 c6                	mov    %eax,%esi
 8209c60:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8209c63:	89 04 24             	mov    %eax,(%esp)
 8209c66:	e8 15 42 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8209c6b:	89 f0                	mov    %esi,%eax
 8209c6d:	89 da                	mov    %ebx,%edx
 8209c6f:	89 04 24             	mov    %eax,(%esp)
 8209c72:	e8 d9 9a 8d 00       	call   8ae3750 <_Unwind_Resume>
 8209c77:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8209c7a:	89 04 24             	mov    %eax,(%esp)
 8209c7d:	e8 fe 41 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8209c82:	eb 01                	jmp    8209c85 <_ZN25Dispatcher_UseBoosterItem18sendBroadCastItemsEP5CUserRK10Inven_Itemi+0x177>
 8209c84:	90                   	nop
 8209c85:	83 c4 20             	add    $0x20,%esp
 8209c88:	5b                   	pop    %ebx
 8209c89:	5e                   	pop    %esi
 8209c8a:	5d                   	pop    %ebp
 8209c8b:	c3                   	ret

```

```c
// Dispatcher_UseBoosterItem::sendBroadCastItems @ 0x8209b0e

/* Dispatcher_UseBoosterItem::sendBroadCastItems(CUser*, Inven_Item const&, int) */

void __thiscall
Dispatcher_UseBoosterItem::sendBroadCastItems
          (Dispatcher_UseBoosterItem *this,CUser *param_1,Inven_Item *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  GameWorld *this_00;
  PacketGuard local_1c [15];
  char local_d;
  
  if (param_1 != (CUser *)0x0) {
    local_d = 0;
    iVar2 = G_CDataManager();
    cVar1 = stBroadCastItemScript::isUnCommonItem(iVar2 + 0xb5bc);
    if (cVar1 == '\0') {
      iVar2 = *(int *)(param_2 + 2);
      iVar3 = G_CDataManager();
      local_d = stBroadCastItemScript::checkCommonItem
                          ((stBroadCastItemScript *)(iVar3 + 0xb5bc),iVar2);
    }
    else {
      iVar2 = *(int *)(param_2 + 2);
      iVar3 = G_CDataManager();
      local_d = stBroadCastItemScript::checkUnCommonNestedItem
                          ((stBroadCastItemScript *)(iVar3 + 0xb5bc),param_3,iVar2);
    }
    if (local_d != '\0') {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08209bb9 to 08209c59 has its CatchHandler @ 08209c5c */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x56);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      uVar4 = CUser::get_unique_id(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar4 & 0xffff);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(param_2 + 2));
      uVar4 = Inven_Item::GetUpgrade(param_2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,uVar4 & 0xff);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      this_00 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(this_00,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return;
}

```

