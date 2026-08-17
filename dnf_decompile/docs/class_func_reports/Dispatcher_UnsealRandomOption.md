# Dispatcher_UnsealRandomOption

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## _check_unseal_scroll_item

```asm
// === 08229644 Dispatcher_UnsealRandomOption::_check_unseal_scroll_item  [0x08229644-0x8229767] ===
 8229644:	55                   	push   %ebp
 8229645:	89 e5                	mov    %esp,%ebp
 8229647:	53                   	push   %ebx
 8229648:	81 ec 84 00 00 00    	sub    $0x84,%esp
 822964e:	8b 45 14             	mov    0x14(%ebp),%eax
 8229651:	66 89 45 94          	mov    %ax,-0x6c(%ebp)
 8229655:	66 83 7d 94 ff       	cmpw   $0xffff,-0x6c(%ebp)
 822965a:	0f 84 fe 00 00 00    	je     822975e <_ZN29Dispatcher_UnsealRandomOption25_check_unseal_scroll_itemEP5CUserPK10Inven_Itemt+0x11a>
 8229660:	0f b7 5d 94          	movzwl -0x6c(%ebp),%ebx
 8229664:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229667:	89 04 24             	mov    %eax,(%esp)
 822966a:	e8 0f 0c eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 822966f:	8d 55 a3             	lea    -0x5d(%ebp),%edx
 8229672:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8229676:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 822967d:	00 
 822967e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8229682:	89 14 24             	mov    %edx,(%esp)
 8229685:	e8 8e 22 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 822968a:	83 ec 04             	sub    $0x4,%esp
 822968d:	8b 45 a5             	mov    -0x5b(%ebp),%eax
 8229690:	89 c3                	mov    %eax,%ebx
 8229692:	e8 04 2b ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 8229697:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 822969b:	89 04 24             	mov    %eax,(%esp)
 822969e:	e8 8f 63 13 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 82296a3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 82296a6:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 82296aa:	75 0a                	jne    82296b6 <_ZN29Dispatcher_UnsealRandomOption25_check_unseal_scroll_itemEP5CUserPK10Inven_Itemt+0x72>
 82296ac:	b8 15 00 00 00       	mov    $0x15,%eax
 82296b1:	e9 ad 00 00 00       	jmp    8229763 <_ZN29Dispatcher_UnsealRandomOption25_check_unseal_scroll_itemEP5CUserPK10Inven_Itemt+0x11f>
 82296b6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82296b9:	89 04 24             	mov    %eax,(%esp)
 82296bc:	e8 39 7c ec ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 82296c1:	83 f0 01             	xor    $0x1,%eax
 82296c4:	84 c0                	test   %al,%al
 82296c6:	74 0a                	je     82296d2 <_ZN29Dispatcher_UnsealRandomOption25_check_unseal_scroll_itemEP5CUserPK10Inven_Itemt+0x8e>
 82296c8:	b8 11 00 00 00       	mov    $0x11,%eax
 82296cd:	e9 91 00 00 00       	jmp    8229763 <_ZN29Dispatcher_UnsealRandomOption25_check_unseal_scroll_itemEP5CUserPK10Inven_Itemt+0x11f>
 82296d2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82296d5:	8b 80 28 03 00 00    	mov    0x328(%eax),%eax
 82296db:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82296de:	83 7d e4 ff          	cmpl   $0xffffffff,-0x1c(%ebp)
 82296e2:	75 07                	jne    82296eb <_ZN29Dispatcher_UnsealRandomOption25_check_unseal_scroll_itemEP5CUserPK10Inven_Itemt+0xa7>
 82296e4:	b8 01 00 00 00       	mov    $0x1,%eax
 82296e9:	eb 78                	jmp    8229763 <_ZN29Dispatcher_UnsealRandomOption25_check_unseal_scroll_itemEP5CUserPK10Inven_Itemt+0x11f>
 82296eb:	e8 ab 2a ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 82296f0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82296f7:	00 
 82296f8:	89 04 24             	mov    %eax,(%esp)
 82296fb:	e8 f2 1e 00 00       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 8229700:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8229703:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8229706:	89 44 24 04          	mov    %eax,0x4(%esp)
 822970a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 822970d:	89 04 24             	mov    %eax,(%esp)
 8229710:	e8 4d 1b 00 00       	call   822b262 <_ZN17STExpertJobScript28GetUnsealScrollPossibleLevelEi>
 8229715:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8229718:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
 822971c:	75 07                	jne    8229725 <_ZN29Dispatcher_UnsealRandomOption25_check_unseal_scroll_itemEP5CUserPK10Inven_Itemt+0xe1>
 822971e:	b8 01 00 00 00       	mov    $0x1,%eax
 8229723:	eb 3e                	jmp    8229763 <_ZN29Dispatcher_UnsealRandomOption25_check_unseal_scroll_itemEP5CUserPK10Inven_Itemt+0x11f>
 8229725:	8b 45 10             	mov    0x10(%ebp),%eax
 8229728:	8b 40 02             	mov    0x2(%eax),%eax
 822972b:	89 c3                	mov    %eax,%ebx
 822972d:	e8 69 2a ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 8229732:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8229736:	89 04 24             	mov    %eax,(%esp)
 8229739:	e8 f4 62 13 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 822973e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8229741:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8229744:	89 04 24             	mov    %eax,(%esp)
 8229747:	e8 a2 7b ec ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 822974c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 822974f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8229752:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8229755:	7e 07                	jle    822975e <_ZN29Dispatcher_UnsealRandomOption25_check_unseal_scroll_itemEP5CUserPK10Inven_Itemt+0x11a>
 8229757:	b8 11 00 00 00       	mov    $0x11,%eax
 822975c:	eb 05                	jmp    8229763 <_ZN29Dispatcher_UnsealRandomOption25_check_unseal_scroll_itemEP5CUserPK10Inven_Itemt+0x11f>
 822975e:	b8 00 00 00 00       	mov    $0x0,%eax
 8229763:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8229766:	c9                   	leave
 8229767:	c3                   	ret

```

```c
// Dispatcher_UnsealRandomOption::_check_unseal_scroll_item @ 0x8229644

/* Dispatcher_UnsealRandomOption::_check_unseal_scroll_item(CUser*, Inven_Item const*, unsigned
   short) */

undefined4 __thiscall
Dispatcher_UnsealRandomOption::_check_unseal_scroll_item
          (Dispatcher_UnsealRandomOption *this,CUser *param_1,Inven_Item *param_2,ushort param_3)

{
  char cVar1;
  int iVar2;
  CDataManager *pCVar3;
  undefined1 local_61 [2];
  int local_5f;
  CItem *local_24;
  int local_20;
  int local_1c;
  int local_18;
  CItem *local_14;
  
  if (param_3 != 0xffff) {
    iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_61,iVar2);
    pCVar3 = (CDataManager *)G_CDataManager();
    local_24 = (CItem *)CDataManager::find_item(pCVar3,local_5f);
    if (local_24 == (CItem *)0x0) {
      return 0x15;
    }
    cVar1 = CItem::is_stackable(local_24);
    if (cVar1 != '\x01') {
      return 0x11;
    }
    local_20 = *(int *)(local_24 + 0x328);
    if (local_20 == -1) {
      return 1;
    }
    iVar2 = G_CDataManager();
    local_1c = CDataManager::GetExpertJobScript(iVar2);
    local_18 = STExpertJobScript::GetUnsealScrollPossibleLevel(local_1c);
    if (local_18 == -1) {
      return 1;
    }
    iVar2 = *(int *)(param_2 + 2);
    pCVar3 = (CDataManager *)G_CDataManager();
    local_14 = (CItem *)CDataManager::find_item(pCVar3,iVar2);
    iVar2 = CItem::getUsableLevel(local_14);
    if (local_18 < iVar2) {
      return 0x11;
    }
  }
  return 0;
}

```

---

## dispatch_sig

```asm
// === 08228e5e Dispatcher_UnsealRandomOption::dispatch_sig  [0x08228e5e-0x8229643] ===
 8228e5e:	55                   	push   %ebp
 8228e5f:	89 e5                	mov    %esp,%ebp
 8228e61:	57                   	push   %edi
 8228e62:	56                   	push   %esi
 8228e63:	53                   	push   %ebx
 8228e64:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 8228e6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228e6d:	89 04 24             	mov    %eax,(%esp)
 8228e70:	e8 17 15 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8228e75:	83 f8 02             	cmp    $0x2,%eax
 8228e78:	7e 0f                	jle    8228e89 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x2b>
 8228e7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228e7d:	89 04 24             	mov    %eax,(%esp)
 8228e80:	e8 ad 75 ef ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8228e85:	85 c0                	test   %eax,%eax
 8228e87:	75 07                	jne    8228e90 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x32>
 8228e89:	b8 01 00 00 00       	mov    $0x1,%eax
 8228e8e:	eb 05                	jmp    8228e95 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x37>
 8228e90:	b8 00 00 00 00       	mov    $0x0,%eax
 8228e95:	84 c0                	test   %al,%al
 8228e97:	74 0a                	je     8228ea3 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x45>
 8228e99:	bb 00 00 00 00       	mov    $0x0,%ebx
 8228e9e:	e9 93 07 00 00       	jmp    8229636 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x7d8>
 8228ea3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228ea6:	89 04 24             	mov    %eax,(%esp)
 8228ea9:	e8 50 14 eb ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 8228eae:	84 c0                	test   %al,%al
 8228eb0:	74 0a                	je     8228ebc <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x5e>
 8228eb2:	bb 00 00 00 00       	mov    $0x0,%ebx
 8228eb7:	e9 7a 07 00 00       	jmp    8229636 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x7d8>
 8228ebc:	66 c7 45 ca 00 00    	movw   $0x0,-0x36(%ebp)
 8228ec2:	8d 45 ca             	lea    -0x36(%ebp),%eax
 8228ec5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8228ec9:	8b 45 10             	mov    0x10(%ebp),%eax
 8228ecc:	89 04 24             	mov    %eax,(%esp)
 8228ecf:	e8 ec 40 36 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 8228ed4:	83 f0 01             	xor    $0x1,%eax
 8228ed7:	84 c0                	test   %al,%al
 8228ed9:	74 2b                	je     8228f06 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0xa8>
 8228edb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8228ee2:	00 
 8228ee3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8228eea:	00 
 8228eeb:	c7 44 24 04 c0 bf bc 	movl   $0x8bcbfc0,0x4(%esp)
 8228ef2:	08 
 8228ef3:	c7 04 24 7c e6 00 00 	movl   $0xe67c,(%esp)
 8228efa:	e8 d8 79 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8228eff:	89 c3                	mov    %eax,%ebx
 8228f01:	e9 30 07 00 00       	jmp    8229636 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x7d8>
 8228f06:	66 c7 45 c8 00 00    	movw   $0x0,-0x38(%ebp)
 8228f0c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8228f0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8228f13:	8b 45 10             	mov    0x10(%ebp),%eax
 8228f16:	89 04 24             	mov    %eax,(%esp)
 8228f19:	e8 92 41 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8228f1e:	83 f0 01             	xor    $0x1,%eax
 8228f21:	84 c0                	test   %al,%al
 8228f23:	74 2b                	je     8228f50 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0xf2>
 8228f25:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8228f2c:	00 
 8228f2d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8228f34:	00 
 8228f35:	c7 44 24 04 c0 bf bc 	movl   $0x8bcbfc0,0x4(%esp)
 8228f3c:	08 
 8228f3d:	c7 04 24 81 e6 00 00 	movl   $0xe681,(%esp)
 8228f44:	e8 8e 79 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8228f49:	89 c3                	mov    %eax,%ebx
 8228f4b:	e9 e6 06 00 00       	jmp    8229636 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x7d8>
 8228f50:	0f b7 45 ca          	movzwl -0x36(%ebp),%eax
 8228f54:	98                   	cwtl
 8228f55:	89 44 24 08          	mov    %eax,0x8(%esp)
 8228f59:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8228f60:	00 
 8228f61:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228f64:	89 04 24             	mov    %eax,(%esp)
 8228f67:	e8 d6 d9 41 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 8228f6c:	84 c0                	test   %al,%al
 8228f6e:	74 25                	je     8228f95 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x137>
 8228f70:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 8228f77:	00 
 8228f78:	c7 44 24 04 91 01 00 	movl   $0x191,0x4(%esp)
 8228f7f:	00 
 8228f80:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228f83:	89 04 24             	mov    %eax,(%esp)
 8228f86:	e8 b7 2f 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8228f8b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8228f90:	e9 a1 06 00 00       	jmp    8229636 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x7d8>
 8228f95:	0f b7 45 ca          	movzwl -0x36(%ebp),%eax
 8228f99:	0f bf d8             	movswl %ax,%ebx
 8228f9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228f9f:	89 04 24             	mov    %eax,(%esp)
 8228fa2:	e8 e7 12 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8228fa7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8228fab:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8228fb2:	00 
 8228fb3:	89 04 24             	mov    %eax,(%esp)
 8228fb6:	e8 f3 32 2d 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 8228fbb:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8228fbe:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8228fc2:	0f 94 c0             	sete   %al
 8228fc5:	84 c0                	test   %al,%al
 8228fc7:	74 25                	je     8228fee <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x190>
 8228fc9:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 8228fd0:	00 
 8228fd1:	c7 44 24 04 91 01 00 	movl   $0x191,0x4(%esp)
 8228fd8:	00 
 8228fd9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228fdc:	89 04 24             	mov    %eax,(%esp)
 8228fdf:	e8 5e 2f 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8228fe4:	bb 00 00 00 00       	mov    $0x0,%ebx
 8228fe9:	e9 48 06 00 00       	jmp    8229636 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x7d8>
 8228fee:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8228ff1:	8b 40 02             	mov    0x2(%eax),%eax
 8228ff4:	89 c3                	mov    %eax,%ebx
 8228ff6:	e8 a0 31 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 8228ffb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8228fff:	89 04 24             	mov    %eax,(%esp)
 8229002:	e8 2b 6a 13 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8229007:	89 45 dc             	mov    %eax,-0x24(%ebp)
 822900a:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 822900e:	75 25                	jne    8229035 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x1d7>
 8229010:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 8229017:	00 
 8229018:	c7 44 24 04 91 01 00 	movl   $0x191,0x4(%esp)
 822901f:	00 
 8229020:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229023:	89 04 24             	mov    %eax,(%esp)
 8229026:	e8 17 2f 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822902b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8229030:	e9 01 06 00 00       	jmp    8229636 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x7d8>
 8229035:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8229038:	89 04 24             	mov    %eax,(%esp)
 822903b:	e8 96 82 ec ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8229040:	83 f8 02             	cmp    $0x2,%eax
 8229043:	7f 0f                	jg     8229054 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x1f6>
 8229045:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8229048:	89 04 24             	mov    %eax,(%esp)
 822904b:	e8 1c c0 ec ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8229050:	3c 0a                	cmp    $0xa,%al
 8229052:	76 07                	jbe    822905b <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x1fd>
 8229054:	b8 01 00 00 00       	mov    $0x1,%eax
 8229059:	eb 05                	jmp    8229060 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x202>
 822905b:	b8 00 00 00 00       	mov    $0x0,%eax
 8229060:	84 c0                	test   %al,%al
 8229062:	74 4c                	je     82290b0 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x252>
 8229064:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 8229069:	c7 44 24 08 25 00 00 	movl   $0x25,0x8(%esp)
 8229070:	00 
 8229071:	8b 55 0c             	mov    0xc(%ebp),%edx
 8229074:	89 54 24 04          	mov    %edx,0x4(%esp)
 8229078:	89 04 24             	mov    %eax,(%esp)
 822907b:	e8 82 f9 05 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 8229080:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8229083:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8229087:	74 27                	je     82290b0 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x252>
 8229089:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 822908c:	0f b6 c0             	movzbl %al,%eax
 822908f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8229093:	c7 44 24 04 91 01 00 	movl   $0x191,0x4(%esp)
 822909a:	00 
 822909b:	8b 45 0c             	mov    0xc(%ebp),%eax
 822909e:	89 04 24             	mov    %eax,(%esp)
 82290a1:	e8 9c 2e 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82290a6:	bb 00 00 00 00       	mov    $0x0,%ebx
 82290ab:	e9 86 05 00 00       	jmp    8229636 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x7d8>
 82290b0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82290b3:	83 c0 25             	add    $0x25,%eax
 82290b6:	89 04 24             	mov    %eax,(%esp)
 82290b9:	e8 12 1b 00 00       	call   822abd0 <_ZN12RandomOption5emptyEv>
 82290be:	83 f0 01             	xor    $0x1,%eax
 82290c1:	84 c0                	test   %al,%al
 82290c3:	74 25                	je     82290ea <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x28c>
 82290c5:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 82290cc:	00 
 82290cd:	c7 44 24 04 91 01 00 	movl   $0x191,0x4(%esp)
 82290d4:	00 
 82290d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82290d8:	89 04 24             	mov    %eax,(%esp)
 82290db:	e8 62 2e 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82290e0:	bb 00 00 00 00       	mov    $0x0,%ebx
 82290e5:	e9 4c 05 00 00       	jmp    8229636 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x7d8>
 82290ea:	0f b7 45 c8          	movzwl -0x38(%ebp),%eax
 82290ee:	0f b7 c0             	movzwl %ax,%eax
 82290f1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82290f5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82290f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 82290fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82290ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8229103:	8b 45 08             	mov    0x8(%ebp),%eax
 8229106:	89 04 24             	mov    %eax,(%esp)
 8229109:	e8 36 05 00 00       	call   8229644 <_ZN29Dispatcher_UnsealRandomOption25_check_unseal_scroll_itemEP5CUserPK10Inven_Itemt>
 822910e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8229111:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8229115:	74 27                	je     822913e <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x2e0>
 8229117:	8b 45 e0             	mov    -0x20(%ebp),%eax
 822911a:	0f b6 c0             	movzbl %al,%eax
 822911d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8229121:	c7 44 24 04 91 01 00 	movl   $0x191,0x4(%esp)
 8229128:	00 
 8229129:	8b 45 0c             	mov    0xc(%ebp),%eax
 822912c:	89 04 24             	mov    %eax,(%esp)
 822912f:	e8 0e 2e 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8229134:	bb 00 00 00 00       	mov    $0x0,%ebx
 8229139:	e9 f8 04 00 00       	jmp    8229636 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x7d8>
 822913e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8229141:	89 04 24             	mov    %eax,(%esp)
 8229144:	e8 8d 81 ec ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8229149:	88 45 c4             	mov    %al,-0x3c(%ebp)
 822914c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 822914f:	89 04 24             	mov    %eax,(%esp)
 8229152:	e8 97 81 ec ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 8229157:	66 89 45 c6          	mov    %ax,-0x3a(%ebp)
 822915b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 822915e:	8b 00                	mov    (%eax),%eax
 8229160:	83 c0 50             	add    $0x50,%eax
 8229163:	8b 10                	mov    (%eax),%edx
 8229165:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8229168:	89 04 24             	mov    %eax,(%esp)
 822916b:	ff d2                	call   *%edx
 822916d:	88 45 c5             	mov    %al,-0x3b(%ebp)
 8229170:	e8 26 30 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 8229175:	8d 88 88 4f 00 00    	lea    0x4f88(%eax),%ecx
 822917b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 822917e:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 8229181:	89 54 24 08          	mov    %edx,0x8(%esp)
 8229185:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8229189:	89 04 24             	mov    %eax,(%esp)
 822918c:	e8 5d 41 ea ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 8229191:	83 ec 04             	sub    $0x4,%esp
 8229194:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8229197:	89 44 24 04          	mov    %eax,0x4(%esp)
 822919b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 822919e:	89 04 24             	mov    %eax,(%esp)
 82291a1:	e8 20 8e f2 ff       	call   8151fc6 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiiEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 82291a6:	e8 f0 2f ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 82291ab:	8d 90 88 4f 00 00    	lea    0x4f88(%eax),%edx
 82291b1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82291b4:	89 54 24 04          	mov    %edx,0x4(%esp)
 82291b8:	89 04 24             	mov    %eax,(%esp)
 82291bb:	e8 5a 41 ea ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 82291c0:	83 ec 04             	sub    $0x4,%esp
 82291c3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82291c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82291ca:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82291cd:	89 04 24             	mov    %eax,(%esp)
 82291d0:	e8 f1 8d f2 ff       	call   8151fc6 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiiEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 82291d5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82291d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82291dc:	8d 45 c0             	lea    -0x40(%ebp),%eax
 82291df:	89 04 24             	mov    %eax,(%esp)
 82291e2:	e8 4d eb e9 ff       	call   80c7d34 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEeqERKS3_>
 82291e7:	84 c0                	test   %al,%al
 82291e9:	74 25                	je     8229210 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x3b2>
 82291eb:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 82291f2:	00 
 82291f3:	c7 44 24 04 91 01 00 	movl   $0x191,0x4(%esp)
 82291fa:	00 
 82291fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82291fe:	89 04 24             	mov    %eax,(%esp)
 8229201:	e8 3c 2d 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8229206:	bb 00 00 00 00       	mov    $0x0,%ebx
 822920b:	e9 26 04 00 00       	jmp    8229636 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x7d8>
 8229210:	0f b7 45 c8          	movzwl -0x38(%ebp),%eax
 8229214:	66 83 f8 ff          	cmp    $0xffff,%ax
 8229218:	74 62                	je     822927c <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x41e>
 822921a:	0f b7 45 c8          	movzwl -0x38(%ebp),%eax
 822921e:	0f b7 d8             	movzwl %ax,%ebx
 8229221:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229224:	89 04 24             	mov    %eax,(%esp)
 8229227:	e8 52 10 eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 822922c:	8d 95 77 ff ff ff    	lea    -0x89(%ebp),%edx
 8229232:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8229236:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 822923d:	00 
 822923e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8229242:	89 14 24             	mov    %edx,(%esp)
 8229245:	e8 ce 26 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 822924a:	83 ec 04             	sub    $0x4,%esp
 822924d:	8b 85 7e ff ff ff    	mov    -0x82(%ebp),%eax
 8229253:	85 c0                	test   %eax,%eax
 8229255:	7f 74                	jg     82292cb <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x46d>
 8229257:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 822925e:	00 
 822925f:	c7 44 24 04 91 01 00 	movl   $0x191,0x4(%esp)
 8229266:	00 
 8229267:	8b 45 0c             	mov    0xc(%ebp),%eax
 822926a:	89 04 24             	mov    %eax,(%esp)
 822926d:	e8 d0 2c 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8229272:	bb 00 00 00 00       	mov    $0x0,%ebx
 8229277:	e9 ba 03 00 00       	jmp    8229636 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x7d8>
 822927c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 822927f:	89 04 24             	mov    %eax,(%esp)
 8229282:	e8 89 dc e9 ff       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 8229287:	8b 58 04             	mov    0x4(%eax),%ebx
 822928a:	8b 45 0c             	mov    0xc(%ebp),%eax
 822928d:	89 04 24             	mov    %eax,(%esp)
 8229290:	e8 e9 0f eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8229295:	89 04 24             	mov    %eax,(%esp)
 8229298:	e8 39 b5 f0 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 822929d:	39 c3                	cmp    %eax,%ebx
 822929f:	0f 9f c0             	setg   %al
 82292a2:	84 c0                	test   %al,%al
 82292a4:	74 25                	je     82292cb <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x46d>
 82292a6:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 82292ad:	00 
 82292ae:	c7 44 24 04 91 01 00 	movl   $0x191,0x4(%esp)
 82292b5:	00 
 82292b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82292b9:	89 04 24             	mov    %eax,(%esp)
 82292bc:	e8 81 2c 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82292c1:	bb 00 00 00 00       	mov    $0x0,%ebx
 82292c6:	e9 6b 03 00 00       	jmp    8229636 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x7d8>
 82292cb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82292ce:	83 c0 25             	add    $0x25,%eax
 82292d1:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 82292d7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82292da:	8b 00                	mov    (%eax),%eax
 82292dc:	83 c0 50             	add    $0x50,%eax
 82292df:	8b 10                	mov    (%eax),%edx
 82292e1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82292e4:	89 04 24             	mov    %eax,(%esp)
 82292e7:	ff d2                	call   *%edx
 82292e9:	89 c7                	mov    %eax,%edi
 82292eb:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82292ee:	89 04 24             	mov    %eax,(%esp)
 82292f1:	e8 1c 80 ec ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 82292f6:	89 c6                	mov    %eax,%esi
 82292f8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82292fb:	89 04 24             	mov    %eax,(%esp)
 82292fe:	e8 eb 7f ec ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 8229303:	89 c3                	mov    %eax,%ebx
 8229305:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8229308:	89 04 24             	mov    %eax,(%esp)
 822930b:	e8 c6 7f ec ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8229310:	89 c2                	mov    %eax,%edx
 8229312:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8229315:	8b 48 02             	mov    0x2(%eax),%ecx
 8229318:	a1 20 f8 41 09       	mov    0x941f820,%eax
 822931d:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 8229323:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8229329:	89 44 24 18          	mov    %eax,0x18(%esp)
 822932d:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8229331:	89 74 24 10          	mov    %esi,0x10(%esp)
 8229335:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8229339:	89 54 24 08          	mov    %edx,0x8(%esp)
 822933d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8229341:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 8229347:	89 04 24             	mov    %eax,(%esp)
 822934a:	e8 77 99 3c 00       	call   85f2cc6 <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption>
 822934f:	83 f0 01             	xor    $0x1,%eax
 8229352:	84 c0                	test   %al,%al
 8229354:	74 25                	je     822937b <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x51d>
 8229356:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 822935d:	00 
 822935e:	c7 44 24 04 91 01 00 	movl   $0x191,0x4(%esp)
 8229365:	00 
 8229366:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229369:	89 04 24             	mov    %eax,(%esp)
 822936c:	e8 d1 2b 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8229371:	bb 00 00 00 00       	mov    $0x0,%ebx
 8229376:	e9 bb 02 00 00       	jmp    8229636 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x7d8>
 822937b:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8229382:	e8 d7 b0 00 00       	call   823445e <_ZN11CSystemTime10getCurDateEv>
 8229387:	89 c3                	mov    %eax,%ebx
 8229389:	8b 45 0c             	mov    0xc(%ebp),%eax
 822938c:	89 04 24             	mov    %eax,(%esp)
 822938f:	e8 0c 60 00 00       	call   822f3a0 <_ZNK15CUserCharacInfo27get_charac_10_level_sectionEv>
 8229394:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8229398:	89 44 24 14          	mov    %eax,0x14(%esp)
 822939c:	c7 44 24 10 cc 18 bc 	movl   $0x8bc18cc,0x10(%esp)
 82293a3:	08 
 82293a4:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 82293ab:	00 
 82293ac:	c7 44 24 08 8e 38 bc 	movl   $0x8bc388e,0x8(%esp)
 82293b3:	08 
 82293b4:	c7 44 24 04 de 18 bc 	movl   $0x8bc18de,0x4(%esp)
 82293bb:	08 
 82293bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82293bf:	89 04 24             	mov    %eax,(%esp)
 82293c2:	e8 0b 6a 3e 00       	call   860fdd2 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z>
 82293c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82293ca:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 82293d0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82293d7:	00 
 82293d8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82293db:	89 44 24 04          	mov    %eax,0x4(%esp)
 82293df:	89 14 24             	mov    %edx,(%esp)
 82293e2:	e8 53 99 45 00       	call   8682d3a <_ZN15cUserHistoryLog12RandomOptionERK10Inven_ItemN18randomOptionReason1TE>
 82293e7:	0f b7 45 c8          	movzwl -0x38(%ebp),%eax
 82293eb:	66 83 f8 ff          	cmp    $0xffff,%ax
 82293ef:	0f 84 87 00 00 00    	je     822947c <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x61e>
 82293f5:	0f b7 45 c8          	movzwl -0x38(%ebp),%eax
 82293f9:	0f b7 d8             	movzwl %ax,%ebx
 82293fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82293ff:	89 04 24             	mov    %eax,(%esp)
 8229402:	e8 87 0e eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8229407:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 822940e:	00 
 822940f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8229416:	00 
 8229417:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 822941b:	89 04 24             	mov    %eax,(%esp)
 822941e:	e8 bb 64 2d 00       	call   84ff8de <_ZN10CInventory8use_itemEiii>
 8229423:	85 c0                	test   %eax,%eax
 8229425:	0f 95 c0             	setne  %al
 8229428:	84 c0                	test   %al,%al
 822942a:	74 25                	je     8229451 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x5f3>
 822942c:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8229433:	00 
 8229434:	c7 44 24 04 91 01 00 	movl   $0x191,0x4(%esp)
 822943b:	00 
 822943c:	8b 45 0c             	mov    0xc(%ebp),%eax
 822943f:	89 04 24             	mov    %eax,(%esp)
 8229442:	e8 fb 2a 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8229447:	bb 00 00 00 00       	mov    $0x0,%ebx
 822944c:	e9 e5 01 00 00       	jmp    8229636 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x7d8>
 8229451:	0f b7 45 c8          	movzwl -0x38(%ebp),%eax
 8229455:	0f b7 c0             	movzwl %ax,%eax
 8229458:	89 44 24 0c          	mov    %eax,0xc(%esp)
 822945c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8229463:	00 
 8229464:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822946b:	00 
 822946c:	8b 45 0c             	mov    0xc(%ebp),%eax
 822946f:	89 04 24             	mov    %eax,(%esp)
 8229472:	e8 61 2e 45 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8229477:	e9 b9 00 00 00       	jmp    8229535 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x6d7>
 822947c:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8229483:	e8 d6 af 00 00       	call   823445e <_ZN11CSystemTime10getCurDateEv>
 8229488:	89 c6                	mov    %eax,%esi
 822948a:	8b 45 0c             	mov    0xc(%ebp),%eax
 822948d:	89 04 24             	mov    %eax,(%esp)
 8229490:	e8 0b 5f 00 00       	call   822f3a0 <_ZNK15CUserCharacInfo27get_charac_10_level_sectionEv>
 8229495:	89 c3                	mov    %eax,%ebx
 8229497:	8d 45 c0             	lea    -0x40(%ebp),%eax
 822949a:	89 04 24             	mov    %eax,(%esp)
 822949d:	e8 6e da e9 ff       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 82294a2:	8b 40 04             	mov    0x4(%eax),%eax
 82294a5:	89 74 24 18          	mov    %esi,0x18(%esp)
 82294a9:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 82294ad:	c7 44 24 10 cc 18 bc 	movl   $0x8bc18cc,0x10(%esp)
 82294b4:	08 
 82294b5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82294b9:	c7 44 24 08 99 38 bc 	movl   $0x8bc3899,0x8(%esp)
 82294c0:	08 
 82294c1:	c7 44 24 04 de 18 bc 	movl   $0x8bc18de,0x4(%esp)
 82294c8:	08 
 82294c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82294cc:	89 04 24             	mov    %eax,(%esp)
 82294cf:	e8 fe 68 3e 00       	call   860fdd2 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z>
 82294d4:	8d 45 c0             	lea    -0x40(%ebp),%eax
 82294d7:	89 04 24             	mov    %eax,(%esp)
 82294da:	e8 31 da e9 ff       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 82294df:	8b 58 04             	mov    0x4(%eax),%ebx
 82294e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82294e5:	89 04 24             	mov    %eax,(%esp)
 82294e8:	e8 a1 0d eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 82294ed:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 82294f4:	00 
 82294f5:	c7 44 24 08 2c 00 00 	movl   $0x2c,0x8(%esp)
 82294fc:	00 
 82294fd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8229501:	89 04 24             	mov    %eax,(%esp)
 8229504:	e8 43 60 2d 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 8229509:	83 f0 01             	xor    $0x1,%eax
 822950c:	84 c0                	test   %al,%al
 822950e:	74 25                	je     8229535 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x6d7>
 8229510:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 8229517:	00 
 8229518:	c7 44 24 04 91 01 00 	movl   $0x191,0x4(%esp)
 822951f:	00 
 8229520:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229523:	89 04 24             	mov    %eax,(%esp)
 8229526:	e8 17 2a 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822952b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8229530:	e9 01 01 00 00       	jmp    8229636 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x7d8>
 8229535:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822953c:	00 
 822953d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8229544:	00 
 8229545:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822954c:	00 
 822954d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229550:	89 04 24             	mov    %eax,(%esp)
 8229553:	e8 02 31 45 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8229558:	c7 44 24 04 91 01 00 	movl   $0x191,0x4(%esp)
 822955f:	00 
 8229560:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229563:	89 04 24             	mov    %eax,(%esp)
 8229566:	e8 35 29 45 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 822956b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 822956e:	89 04 24             	mov    %eax,(%esp)
 8229571:	e8 d6 47 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8229576:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 822957d:	00 
 822957e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8229585:	00 
 8229586:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8229589:	89 04 24             	mov    %eax,(%esp)
 822958c:	e8 6b 23 ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8229591:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8229598:	00 
 8229599:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 822959c:	89 04 24             	mov    %eax,(%esp)
 822959f:	e8 7c 23 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82295a4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82295ab:	00 
 82295ac:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82295af:	89 04 24             	mov    %eax,(%esp)
 82295b2:	e8 ed 08 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82295b7:	0f b7 45 ca          	movzwl -0x36(%ebp),%eax
 82295bb:	0f bf d8             	movswl %ax,%ebx
 82295be:	8b 45 0c             	mov    0xc(%ebp),%eax
 82295c1:	89 04 24             	mov    %eax,(%esp)
 82295c4:	e8 b5 0c eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 82295c9:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 82295cc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82295d0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82295d4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82295db:	00 
 82295dc:	89 04 24             	mov    %eax,(%esp)
 82295df:	e8 d8 30 2d 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 82295e4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82295eb:	00 
 82295ec:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82295ef:	89 04 24             	mov    %eax,(%esp)
 82295f2:	e8 61 23 ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82295f7:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82295fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 82295fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229601:	89 04 24             	mov    %eax,(%esp)
 8229604:	e8 b1 ef 41 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8229609:	bb 00 00 00 00       	mov    $0x0,%ebx
 822960e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8229611:	89 04 24             	mov    %eax,(%esp)
 8229614:	e8 67 48 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8229619:	eb 1b                	jmp    8229636 <_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf+0x7d8>
 822961b:	89 d3                	mov    %edx,%ebx
 822961d:	89 c6                	mov    %eax,%esi
 822961f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8229622:	89 04 24             	mov    %eax,(%esp)
 8229625:	e8 56 48 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 822962a:	89 f0                	mov    %esi,%eax
 822962c:	89 da                	mov    %ebx,%edx
 822962e:	89 04 24             	mov    %eax,(%esp)
 8229631:	e8 1a a1 8b 00       	call   8ae3750 <_Unwind_Resume>
 8229636:	89 d8                	mov    %ebx,%eax
 8229638:	8d 65 f4             	lea    -0xc(%ebp),%esp
 822963b:	83 c4 00             	add    $0x0,%esp
 822963e:	5b                   	pop    %ebx
 822963f:	5e                   	pop    %esi
 8229640:	5f                   	pop    %edi
 8229641:	5d                   	pop    %ebp
 8229642:	c3                   	ret
 8229643:	90                   	nop

```

```c
// Dispatcher_UnsealRandomOption::dispatch_sig @ 0x8228e5e

/* Dispatcher_UnsealRandomOption::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UnsealRandomOption::dispatch_sig
          (Dispatcher_UnsealRandomOption *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  CInventory *pCVar6;
  CDataManager *this_00;
  uint uVar7;
  _Rb_tree_const_iterator *p_Var8;
  int iVar9;
  Inven_Item *pIVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  undefined1 local_8d [7];
  int local_86;
  PacketGuard local_50 [12];
  _Rb_tree_const_iterator<std::pair<int_const,int>> local_44 [4];
  undefined1 local_40;
  undefined1 local_3f;
  undefined2 local_3e;
  ushort local_3c;
  short local_3a;
  _Rb_tree_iterator local_38 [4];
  _Rb_tree_const_iterator<std::pair<int_const,int>> local_34 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_30 [4];
  Inven_Item *local_2c;
  CItem *local_28;
  uint local_24;
  uint local_20;
  
  iVar4 = CUser::get_state(param_1);
  if ((iVar4 < 3) ||
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  cVar2 = CUser::CheckInTrade(param_1);
  if (cVar2 != '\0') {
    return 0;
  }
  local_3a = 0;
  cVar2 = PacketBuf::get_short(param_2,&local_3a);
  if (cVar2 != '\x01') {
    uVar5 = LineFunc(0xe67c,
                     "virtual int Dispatcher_UnsealRandomOption::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
    return uVar5;
  }
  local_3c = 0;
  cVar2 = PacketBuf::get_short(param_2,&local_3c);
  if (cVar2 != '\x01') {
    uVar5 = LineFunc(0xe681,
                     "virtual int Dispatcher_UnsealRandomOption::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
    return uVar5;
  }
  cVar2 = CUser::CheckItemLock(param_1,1,(int)local_3a);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x191,0xd5);
    return 0;
  }
  iVar4 = (int)local_3a;
  pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  local_2c = (Inven_Item *)CInventory::GetInvenRef(pCVar6,1,iVar4);
  if (local_2c == (Inven_Item *)0x0) {
    CUser::SendCmdErrorPacket(param_1,0x191,0x11);
    return 0;
  }
  iVar4 = *(int *)(local_2c + 2);
  this_00 = (CDataManager *)G_CDataManager();
  local_28 = (CItem *)CDataManager::find_item(this_00,iVar4);
  if (local_28 != (CItem *)0x0) {
    iVar4 = CItem::get_rarity(local_28);
    if ((iVar4 < 3) && (bVar3 = Inven_Item::GetUpgrade(local_2c), bVar3 < 0xb)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) &&
       (local_20 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x25),
       local_20 != 0)) {
      CUser::SendCmdErrorPacket(param_1,0x191,local_20 & 0xff);
      return 0;
    }
    cVar2 = RandomOption::empty((RandomOption *)(local_2c + 0x25));
    if (cVar2 == '\x01') {
      uVar7 = (uint)local_3c;
      local_24 = _check_unseal_scroll_item(this,param_1,local_2c,local_3c);
      if (local_24 == 0) {
        local_40 = CItem::get_rarity(local_28);
        local_3e = CItem::getUsableLevel(local_28);
        local_3f = (**(code **)(*(int *)local_28 + 0x50))(local_28);
        G_CDataManager();
        puVar14 = &local_40;
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                  ((int *)local_38);
        std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
                  (local_44,local_38);
        G_CDataManager();
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_30);
        std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
                  (local_34,(_Rb_tree_iterator *)local_30);
        p_Var8 = (_Rb_tree_const_iterator *)local_34;
        cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator==(local_44,p_Var8);
        if (cVar2 == '\0') {
          if (local_3c == 0xffff) {
            iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->(local_44);
            iVar4 = *(int *)(iVar4 + 4);
            pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            iVar9 = CInventory::get_money(pCVar6);
            if (iVar9 < iVar4) {
              CUser::SendCmdErrorPacket(param_1,0x191,10);
              return 0;
            }
          }
          else {
            uVar7 = (uint)local_3c;
            p_Var8 = (_Rb_tree_const_iterator *)
                     CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            puVar14 = (undefined1 *)0x1;
            CInventory::GetInvenSlot((int)local_8d,(int)p_Var8);
            if (local_86 < 1) {
              CUser::SendCmdErrorPacket(param_1,0x191,0x16);
              return 0;
            }
          }
          pIVar10 = local_2c + 0x25;
          uVar5 = (**(code **)(*(int *)local_28 + 0x50))(local_28,p_Var8,puVar14,uVar7);
          uVar11 = CItem::getItemGroupName(local_28);
          uVar12 = CItem::getUsableLevel(local_28);
          uVar13 = CItem::get_rarity(local_28);
          cVar2 = random_option::CRandomOptionItemHandle::give_option
                            (GlobalData::g_randomOptionHandle,*(undefined4 *)(local_2c + 2),uVar13,
                             uVar12,uVar11,uVar5,pIVar10);
          if (cVar2 == '\x01') {
            uVar5 = CSystemTime::getCurDate((CSystemTime *)GlobalData::s_systemTime_);
            uVar11 = CUserCharacInfo::get_charac_10_level_section((CUserCharacInfo *)param_1);
            statistc_proxy::add(param_1,"log_random_option","unseal_cnt",1,"%d,\'%s\'",uVar11,uVar5)
            ;
            cUserHistoryLog::RandomOption((cUserHistoryLog *)(param_1 + 0x79700),local_2c,0);
            if (local_3c == 0xffff) {
              uVar5 = CSystemTime::getCurDate((CSystemTime *)GlobalData::s_systemTime_);
              uVar11 = CUserCharacInfo::get_charac_10_level_section((CUserCharacInfo *)param_1);
              iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->(local_44);
              statistc_proxy::add(param_1,"log_random_option","unseal_gold",*(uint *)(iVar4 + 4),
                                  "%d,\'%s\'",uVar11,uVar5);
              iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->(local_44);
              uVar5 = *(undefined4 *)(iVar4 + 4);
              pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              cVar2 = CInventory::use_money(pCVar6,uVar5,0x2c,1);
              if (cVar2 != '\x01') {
                CUser::SendCmdErrorPacket(param_1,0x191,10);
                return 0;
              }
            }
            else {
              uVar7 = (uint)local_3c;
              pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              iVar4 = CInventory::use_item(pCVar6,uVar7,1,1);
              if (iVar4 != 0) {
                CUser::SendCmdErrorPacket(param_1,0x191,0x16);
                return 0;
              }
              CUser::SendUpdateItem(param_1,1,0,local_3c);
            }
            CUser::SendUpdateItemList(param_1,1,0,0);
            CUser::SendCmdOkPacket(param_1,0x191);
            PacketGuard::PacketGuard(local_50);
                    /* try { // try from 0822958c to 08229608 has its CatchHandler @ 0822961b */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0xe);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,1);
            iVar4 = (int)local_3a;
            pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            CInventory::MakeItemPacket(pCVar6,1,iVar4,local_50);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
            CUser::Send(param_1,local_50);
            PacketGuard::~PacketGuard(local_50);
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x191,0x13);
          }
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0x191,0x11);
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x191,local_24 & 0xff);
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x191,0x13);
    }
    return 0;
  }
  CUser::SendCmdErrorPacket(param_1,0x191,0x11);
  return 0;
}

```

