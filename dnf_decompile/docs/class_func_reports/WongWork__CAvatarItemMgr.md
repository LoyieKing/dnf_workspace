# WongWork__CAvatarItemMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 30

---

## AddAvatarItem

```asm
// === 082f99d6 WongWork::CAvatarItemMgr::AddAvatarItem  [0x082f99d6-0x82f9a41] ===
 82f99d6:	55                   	push   %ebp
 82f99d7:	89 e5                	mov    %esp,%ebp
 82f99d9:	83 ec 38             	sub    $0x38,%esp
 82f99dc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f99df:	8d 55 10             	lea    0x10(%ebp),%edx
 82f99e2:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f99e6:	8d 55 0c             	lea    0xc(%ebp),%edx
 82f99e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f99ed:	89 04 24             	mov    %eax,(%esp)
 82f99f0:	e8 6a 0d 00 00       	call   82fa75f <_ZSt9make_pairIRiRPN8WongWork11Avatar_ItemEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 82f99f5:	83 ec 04             	sub    $0x4,%esp
 82f99f8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f99fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f99ff:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82f9a02:	89 04 24             	mov    %eax,(%esp)
 82f9a05:	e8 94 0d 00 00       	call   82fa79e <_ZNSt4pairIKiPN8WongWork11Avatar_ItemEEC1IiS3_EEOS_IT_T0_E>
 82f9a0a:	8b 55 08             	mov    0x8(%ebp),%edx
 82f9a0d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82f9a10:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 82f9a13:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82f9a17:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9a1b:	89 04 24             	mov    %eax,(%esp)
 82f9a1e:	e8 ab 0d 00 00       	call   82fa7ce <_ZNSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE6insertERKS7_>
 82f9a23:	83 ec 04             	sub    $0x4,%esp
 82f9a26:	8b 55 10             	mov    0x10(%ebp),%edx
 82f9a29:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f9a2c:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f9a30:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9a34:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9a37:	89 04 24             	mov    %eax,(%esp)
 82f9a3a:	e8 0d 04 00 00       	call   82f9e4c <_ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE>
 82f9a3f:	c9                   	leave
 82f9a40:	c3                   	ret
 82f9a41:	90                   	nop

```

```c
// WongWork::CAvatarItemMgr::AddAvatarItem @ 0x82f99d6

/* WongWork::CAvatarItemMgr::AddAvatarItem(int, WongWork::Avatar_Item*) */

void __thiscall
WongWork::CAvatarItemMgr::AddAvatarItem(CAvatarItemMgr *this,int param_1,Avatar_Item *param_2)

{
  pair local_24 [8];
  pair<int_const,WongWork::Avatar_Item*> local_1c [8];
  int local_14 [4];
  
  std::make_pair<int&,WongWork::Avatar_Item*&>(local_14,(Avatar_Item **)&param_1);
  std::pair<int_const,WongWork::Avatar_Item*>::pair<int,WongWork::Avatar_Item*>
            (local_1c,(pair *)local_14);
  std::
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  ::insert(local_24);
  AddEmblemEndurance(this,param_1,param_2);
  return;
}

```

---

## AddEmblemEndurance

```asm
// === 082f9e4c WongWork::CAvatarItemMgr::AddEmblemEndurance  [0x082f9e4c-0x82f9f9d] ===
 82f9e4c:	55                   	push   %ebp
 82f9e4d:	89 e5                	mov    %esp,%ebp
 82f9e4f:	53                   	push   %ebx
 82f9e50:	83 ec 44             	sub    $0x44,%esp
 82f9e53:	8b 45 10             	mov    0x10(%ebp),%eax
 82f9e56:	89 04 24             	mov    %eax,(%esp)
 82f9e59:	e8 90 04 00 00       	call   82fa2ee <_ZNK8WongWork11Avatar_Item18getJewelSocketDataEv>
 82f9e5e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82f9e61:	66 c7 45 d6 00 00    	movw   $0x0,-0x2a(%ebp)
 82f9e67:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82f9e6e:	eb 7a                	jmp    82f9eea <_ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE+0x9e>
 82f9e70:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82f9e73:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 82f9e76:	89 d0                	mov    %edx,%eax
 82f9e78:	01 c0                	add    %eax,%eax
 82f9e7a:	01 d0                	add    %edx,%eax
 82f9e7c:	01 c0                	add    %eax,%eax
 82f9e7e:	8b 44 08 02          	mov    0x2(%eax,%ecx,1),%eax
 82f9e82:	85 c0                	test   %eax,%eax
 82f9e84:	74 5f                	je     82f9ee5 <_ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE+0x99>
 82f9e86:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82f9e89:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 82f9e8c:	89 d0                	mov    %edx,%eax
 82f9e8e:	01 c0                	add    %eax,%eax
 82f9e90:	01 d0                	add    %edx,%eax
 82f9e92:	01 c0                	add    %eax,%eax
 82f9e94:	8b 44 08 02          	mov    0x2(%eax,%ecx,1),%eax
 82f9e98:	89 c3                	mov    %eax,%ebx
 82f9e9a:	e8 fc 22 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82f9e9f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82f9ea3:	89 04 24             	mov    %eax,(%esp)
 82f9ea6:	e8 87 5b 06 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 82f9eab:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82f9eae:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82f9eb2:	0f 84 df 00 00 00    	je     82f9f97 <_ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE+0x14b>
 82f9eb8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f9ebb:	89 04 24             	mov    %eax,(%esp)
 82f9ebe:	e8 91 6d e1 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 82f9ec3:	89 c3                	mov    %eax,%ebx
 82f9ec5:	e8 d8 96 e9 ff       	call   81935a2 <_ZN4ARAD9SingletonI20AvatarRechargeServerE3GetEv>
 82f9eca:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82f9ece:	89 04 24             	mov    %eax,(%esp)
 82f9ed1:	e8 76 72 e9 ff       	call   819114c <_ZN20AvatarRechargeServer22GetRateFromEmblemGradeEi>
 82f9ed6:	89 c2                	mov    %eax,%edx
 82f9ed8:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 82f9edc:	8d 04 02             	lea    (%edx,%eax,1),%eax
 82f9edf:	66 89 45 d6          	mov    %ax,-0x2a(%ebp)
 82f9ee3:	eb 01                	jmp    82f9ee6 <_ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE+0x9a>
 82f9ee5:	90                   	nop
 82f9ee6:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82f9eea:	83 7d f0 04          	cmpl   $0x4,-0x10(%ebp)
 82f9eee:	0f 9e c0             	setle  %al
 82f9ef1:	84 c0                	test   %al,%al
 82f9ef3:	0f 85 77 ff ff ff    	jne    82f9e70 <_ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE+0x24>
 82f9ef9:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9efc:	8d 48 54             	lea    0x54(%eax),%ecx
 82f9eff:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82f9f02:	8d 55 0c             	lea    0xc(%ebp),%edx
 82f9f05:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f9f09:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82f9f0d:	89 04 24             	mov    %eax,(%esp)
 82f9f10:	e8 d9 33 dd ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 82f9f15:	83 ec 04             	sub    $0x4,%esp
 82f9f18:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9f1b:	8d 50 54             	lea    0x54(%eax),%edx
 82f9f1e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82f9f21:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9f25:	89 04 24             	mov    %eax,(%esp)
 82f9f28:	e8 ed 33 dd ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 82f9f2d:	83 ec 04             	sub    $0x4,%esp
 82f9f30:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82f9f33:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9f37:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82f9f3a:	89 04 24             	mov    %eax,(%esp)
 82f9f3d:	e8 ae d9 dc ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 82f9f42:	84 c0                	test   %al,%al
 82f9f44:	74 3a                	je     82f9f80 <_ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE+0x134>
 82f9f46:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 82f9f49:	89 44 24 08          	mov    %eax,0x8(%esp)
 82f9f4d:	8d 45 0c             	lea    0xc(%ebp),%eax
 82f9f50:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9f54:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82f9f57:	89 04 24             	mov    %eax,(%esp)
 82f9f5a:	e8 2f 0b 00 00       	call   82faa8e <_ZNSt4pairIKiiEC1IRiRsEEOT_OT0_>
 82f9f5f:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9f62:	8d 48 54             	lea    0x54(%eax),%ecx
 82f9f65:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82f9f68:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 82f9f6b:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f9f6f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82f9f73:	89 04 24             	mov    %eax,(%esp)
 82f9f76:	e8 d5 cd dc ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 82f9f7b:	83 ec 04             	sub    $0x4,%esp
 82f9f7e:	eb 18                	jmp    82f9f98 <_ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE+0x14c>
 82f9f80:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82f9f83:	89 04 24             	mov    %eax,(%esp)
 82f9f86:	e8 b5 33 dd ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 82f9f8b:	0f b7 55 d6          	movzwl -0x2a(%ebp),%edx
 82f9f8f:	0f bf d2             	movswl %dx,%edx
 82f9f92:	89 50 04             	mov    %edx,0x4(%eax)
 82f9f95:	eb 01                	jmp    82f9f98 <_ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE+0x14c>
 82f9f97:	90                   	nop
 82f9f98:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 82f9f9b:	c9                   	leave
 82f9f9c:	c3                   	ret
 82f9f9d:	90                   	nop

```

```c
// WongWork::CAvatarItemMgr::AddEmblemEndurance @ 0x82f9e4c

/* WongWork::CAvatarItemMgr::AddEmblemEndurance(int, WongWork::Avatar_Item const*) */

void __thiscall
WongWork::CAvatarItemMgr::AddEmblemEndurance(CAvatarItemMgr *this,int param_1,Avatar_Item *param_2)

{
  char cVar1;
  short sVar2;
  CDataManager *this_00;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_34 [6];
  short local_2e;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_2c [4];
  pair local_28 [8];
  pair<int_const,int> local_20 [8];
  int local_18;
  int local_14;
  CItem *local_10;
  
  local_18 = Avatar_Item::getJewelSocketData(param_2);
  local_2e = 0;
  local_14 = 0;
  do {
    if (4 < local_14) {
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                ((int *)local_34);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_2c);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                        (local_34,(_Rb_tree_iterator *)local_2c);
      if (cVar1 == '\0') {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_34);
        *(int *)(iVar3 + 4) = (int)local_2e;
      }
      else {
        std::pair<int_const,int>::pair<int&,short&>(local_20,&param_1,&local_2e);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_28);
      }
      return;
    }
    if (*(int *)(local_14 * 6 + 2 + local_18) != 0) {
      iVar3 = *(int *)(local_14 * 6 + 2 + local_18);
      this_00 = (CDataManager *)G_CDataManager();
      local_10 = (CItem *)CDataManager::find_item(this_00,iVar3);
      if (local_10 == (CItem *)0x0) {
        return;
      }
      CItem::get_grade(local_10);
      iVar3 = ARAD::Singleton<AvatarRechargeServer>::Get();
      sVar2 = AvatarRechargeServer::GetRateFromEmblemGrade(iVar3);
      local_2e = sVar2 + local_2e;
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## AssignAvatarItemInfo

```asm
// === 082f96a6 WongWork::CAvatarItemMgr::AssignAvatarItemInfo  [0x082f96a6-0x82f9771] ===
 82f96a6:	55                   	push   %ebp
 82f96a7:	89 e5                	mov    %esp,%ebp
 82f96a9:	83 ec 38             	sub    $0x38,%esp
 82f96ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f96af:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f96b3:	8b 45 08             	mov    0x8(%ebp),%eax
 82f96b6:	89 04 24             	mov    %eax,(%esp)
 82f96b9:	e8 da 06 00 00       	call   82f9d98 <_ZNK8WongWork14CAvatarItemMgr19_FindWaitAssignItemEi>
 82f96be:	89 45 dc             	mov    %eax,-0x24(%ebp)
 82f96c1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82f96c4:	85 c0                	test   %eax,%eax
 82f96c6:	75 0a                	jne    82f96d2 <_ZN8WongWork14CAvatarItemMgr20AssignAvatarItemInfoEiiiiPKc+0x2c>
 82f96c8:	b8 00 00 00 00       	mov    $0x0,%eax
 82f96cd:	e9 9d 00 00 00       	jmp    82f976f <_ZN8WongWork14CAvatarItemMgr20AssignAvatarItemInfoEiiiiPKc+0xc9>
 82f96d2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82f96d5:	8b 55 1c             	mov    0x1c(%ebp),%edx
 82f96d8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82f96dc:	8b 55 18             	mov    0x18(%ebp),%edx
 82f96df:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f96e3:	8b 55 14             	mov    0x14(%ebp),%edx
 82f96e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f96ea:	89 04 24             	mov    %eax,(%esp)
 82f96ed:	e8 42 0b 00 00       	call   82fa234 <_ZN8WongWork11Avatar_Item7SetDataEiiPKc>
 82f96f2:	8b 45 08             	mov    0x8(%ebp),%eax
 82f96f5:	8d 50 18             	lea    0x18(%eax),%edx
 82f96f8:	8d 45 0c             	lea    0xc(%ebp),%eax
 82f96fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f96ff:	89 14 24             	mov    %edx,(%esp)
 82f9702:	e8 7f 11 00 00       	call   82fa886 <_ZNSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE5eraseERS6_>
 82f9707:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f970a:	8d 55 dc             	lea    -0x24(%ebp),%edx
 82f970d:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f9711:	8d 55 10             	lea    0x10(%ebp),%edx
 82f9714:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9718:	89 04 24             	mov    %eax,(%esp)
 82f971b:	e8 3f 10 00 00       	call   82fa75f <_ZSt9make_pairIRiRPN8WongWork11Avatar_ItemEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 82f9720:	83 ec 04             	sub    $0x4,%esp
 82f9723:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9726:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f972a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82f972d:	89 04 24             	mov    %eax,(%esp)
 82f9730:	e8 69 10 00 00       	call   82fa79e <_ZNSt4pairIKiPN8WongWork11Avatar_ItemEEC1IiS3_EEOS_IT_T0_E>
 82f9735:	8b 55 08             	mov    0x8(%ebp),%edx
 82f9738:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82f973b:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 82f973e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82f9742:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9746:	89 04 24             	mov    %eax,(%esp)
 82f9749:	e8 80 10 00 00       	call   82fa7ce <_ZNSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE6insertERKS7_>
 82f974e:	83 ec 04             	sub    $0x4,%esp
 82f9751:	8b 55 dc             	mov    -0x24(%ebp),%edx
 82f9754:	8b 45 10             	mov    0x10(%ebp),%eax
 82f9757:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f975b:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f975f:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9762:	89 04 24             	mov    %eax,(%esp)
 82f9765:	e8 e2 06 00 00       	call   82f9e4c <_ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE>
 82f976a:	b8 01 00 00 00       	mov    $0x1,%eax
 82f976f:	c9                   	leave
 82f9770:	c3                   	ret
 82f9771:	90                   	nop

```

```c
// WongWork::CAvatarItemMgr::AssignAvatarItemInfo @ 0x82f96a6

/* WongWork::CAvatarItemMgr::AssignAvatarItemInfo(int, int, int, int, char const*) */

bool __thiscall
WongWork::CAvatarItemMgr::AssignAvatarItemInfo
          (CAvatarItemMgr *this,int param_1,int param_2,int param_3,int param_4,char *param_5)

{
  Avatar_Item *this_00;
  pair local_24 [8];
  pair<int_const,WongWork::Avatar_Item*> local_1c [8];
  int local_14 [4];
  
  this_00 = (Avatar_Item *)_FindWaitAssignItem((int)this);
  if (this_00 != (Avatar_Item *)0x0) {
    Avatar_Item::SetData(this_00,param_3,param_4,param_5);
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::erase((int *)(this + 0x18));
    std::make_pair<int&,WongWork::Avatar_Item*&>(local_14,(Avatar_Item **)&param_2);
    std::pair<int_const,WongWork::Avatar_Item*>::pair<int,WongWork::Avatar_Item*>
              (local_1c,(pair *)local_14);
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::insert(local_24);
    AddEmblemEndurance(this,param_2,this_00);
  }
  return this_00 != (Avatar_Item *)0x0;
}

```

---

## AssignAvatarItemKey

```asm
// === 082f9772 WongWork::CAvatarItemMgr::AssignAvatarItemKey  [0x082f9772-0x82f9819] ===
 82f9772:	55                   	push   %ebp
 82f9773:	89 e5                	mov    %esp,%ebp
 82f9775:	83 ec 38             	sub    $0x38,%esp
 82f9778:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f977b:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f977f:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9782:	89 04 24             	mov    %eax,(%esp)
 82f9785:	e8 0e 06 00 00       	call   82f9d98 <_ZNK8WongWork14CAvatarItemMgr19_FindWaitAssignItemEi>
 82f978a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 82f978d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82f9790:	85 c0                	test   %eax,%eax
 82f9792:	75 07                	jne    82f979b <_ZN8WongWork14CAvatarItemMgr19AssignAvatarItemKeyEii+0x29>
 82f9794:	b8 00 00 00 00       	mov    $0x0,%eax
 82f9799:	eb 7d                	jmp    82f9818 <_ZN8WongWork14CAvatarItemMgr19AssignAvatarItemKeyEii+0xa6>
 82f979b:	8b 45 08             	mov    0x8(%ebp),%eax
 82f979e:	8d 50 18             	lea    0x18(%eax),%edx
 82f97a1:	8d 45 0c             	lea    0xc(%ebp),%eax
 82f97a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f97a8:	89 14 24             	mov    %edx,(%esp)
 82f97ab:	e8 d6 10 00 00       	call   82fa886 <_ZNSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE5eraseERS6_>
 82f97b0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f97b3:	8d 55 dc             	lea    -0x24(%ebp),%edx
 82f97b6:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f97ba:	8d 55 10             	lea    0x10(%ebp),%edx
 82f97bd:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f97c1:	89 04 24             	mov    %eax,(%esp)
 82f97c4:	e8 96 0f 00 00       	call   82fa75f <_ZSt9make_pairIRiRPN8WongWork11Avatar_ItemEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 82f97c9:	83 ec 04             	sub    $0x4,%esp
 82f97cc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f97cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f97d3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82f97d6:	89 04 24             	mov    %eax,(%esp)
 82f97d9:	e8 c0 0f 00 00       	call   82fa79e <_ZNSt4pairIKiPN8WongWork11Avatar_ItemEEC1IiS3_EEOS_IT_T0_E>
 82f97de:	8b 55 08             	mov    0x8(%ebp),%edx
 82f97e1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82f97e4:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 82f97e7:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82f97eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f97ef:	89 04 24             	mov    %eax,(%esp)
 82f97f2:	e8 d7 0f 00 00       	call   82fa7ce <_ZNSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE6insertERKS7_>
 82f97f7:	83 ec 04             	sub    $0x4,%esp
 82f97fa:	8b 55 dc             	mov    -0x24(%ebp),%edx
 82f97fd:	8b 45 10             	mov    0x10(%ebp),%eax
 82f9800:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f9804:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9808:	8b 45 08             	mov    0x8(%ebp),%eax
 82f980b:	89 04 24             	mov    %eax,(%esp)
 82f980e:	e8 39 06 00 00       	call   82f9e4c <_ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE>
 82f9813:	b8 01 00 00 00       	mov    $0x1,%eax
 82f9818:	c9                   	leave
 82f9819:	c3                   	ret

```

```c
// WongWork::CAvatarItemMgr::AssignAvatarItemKey @ 0x82f9772

/* WongWork::CAvatarItemMgr::AssignAvatarItemKey(int, int) */

bool __thiscall
WongWork::CAvatarItemMgr::AssignAvatarItemKey(CAvatarItemMgr *this,int param_1,int param_2)

{
  Avatar_Item *pAVar1;
  pair local_24 [8];
  pair<int_const,WongWork::Avatar_Item*> local_1c [8];
  int local_14 [4];
  
  pAVar1 = (Avatar_Item *)_FindWaitAssignItem((int)this);
  if (pAVar1 != (Avatar_Item *)0x0) {
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::erase((int *)(this + 0x18));
    std::make_pair<int&,WongWork::Avatar_Item*&>(local_14,(Avatar_Item **)&param_2);
    std::pair<int_const,WongWork::Avatar_Item*>::pair<int,WongWork::Avatar_Item*>
              (local_1c,(pair *)local_14);
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::insert(local_24);
    AddEmblemEndurance(this,param_2,pAVar1);
  }
  return pAVar1 != (Avatar_Item *)0x0;
}

```

---

## EraseAvatarItem

```asm
// === 082f9a42 WongWork::CAvatarItemMgr::EraseAvatarItem  [0x082f9a42-0x82f9ae3] ===
 82f9a42:	55                   	push   %ebp
 82f9a43:	89 e5                	mov    %esp,%ebp
 82f9a45:	83 ec 28             	sub    $0x28,%esp
 82f9a48:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f9a4b:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9a4f:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9a52:	89 04 24             	mov    %eax,(%esp)
 82f9a55:	e8 da 02 00 00       	call   82f9d34 <_ZNK8WongWork14CAvatarItemMgr9_FindItemEi>
 82f9a5a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82f9a5d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82f9a61:	75 07                	jne    82f9a6a <_ZN8WongWork14CAvatarItemMgr15EraseAvatarItemEi+0x28>
 82f9a63:	b8 00 00 00 00       	mov    $0x0,%eax
 82f9a68:	eb 77                	jmp    82f9ae1 <_ZN8WongWork14CAvatarItemMgr15EraseAvatarItemEi+0x9f>
 82f9a6a:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9a6d:	8d 55 0c             	lea    0xc(%ebp),%edx
 82f9a70:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9a74:	89 04 24             	mov    %eax,(%esp)
 82f9a77:	e8 0a 0e 00 00       	call   82fa886 <_ZNSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE5eraseERS6_>
 82f9a7c:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9a7f:	8d 50 54             	lea    0x54(%eax),%edx
 82f9a82:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f9a85:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9a89:	89 04 24             	mov    %eax,(%esp)
 82f9a8c:	e8 89 38 dd ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 82f9a91:	83 ec 04             	sub    $0x4,%esp
 82f9a94:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9a97:	8d 48 54             	lea    0x54(%eax),%ecx
 82f9a9a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9a9d:	8d 55 0c             	lea    0xc(%ebp),%edx
 82f9aa0:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f9aa4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82f9aa8:	89 04 24             	mov    %eax,(%esp)
 82f9aab:	e8 3e 38 dd ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 82f9ab0:	83 ec 04             	sub    $0x4,%esp
 82f9ab3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f9ab6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9aba:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9abd:	89 04 24             	mov    %eax,(%esp)
 82f9ac0:	e8 03 09 de ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 82f9ac5:	84 c0                	test   %al,%al
 82f9ac7:	74 15                	je     82f9ade <_ZN8WongWork14CAvatarItemMgr15EraseAvatarItemEi+0x9c>
 82f9ac9:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9acc:	8d 50 54             	lea    0x54(%eax),%edx
 82f9acf:	8d 45 0c             	lea    0xc(%ebp),%eax
 82f9ad2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9ad6:	89 14 24             	mov    %edx,(%esp)
 82f9ad9:	e8 d2 0e 00 00       	call   82fa9b0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5eraseERS3_>
 82f9ade:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f9ae1:	c9                   	leave
 82f9ae2:	c3                   	ret
 82f9ae3:	90                   	nop

```

```c
// WongWork::CAvatarItemMgr::EraseAvatarItem @ 0x82f9a42

/* WongWork::CAvatarItemMgr::EraseAvatarItem(int) */

int WongWork::CAvatarItemMgr::EraseAvatarItem(int param_1)

{
  char cVar1;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  int local_10;
  
  local_10 = _FindItem(param_1);
  if (local_10 == 0) {
    local_10 = 0;
  }
  else {
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::erase((int *)param_1);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_18);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14)
    ;
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      (local_14,(_Rb_tree_iterator *)local_18);
    if (cVar1 != '\0') {
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::erase
                ((int *)(param_1 + 0x54));
    }
  }
  return local_10;
}

```

---

## GetAvatarInfo

```asm
// === 082f99bc WongWork::CAvatarItemMgr::GetAvatarInfo  [0x082f99bc-0x82f99d5] ===
 82f99bc:	55                   	push   %ebp
 82f99bd:	89 e5                	mov    %esp,%ebp
 82f99bf:	83 ec 18             	sub    $0x18,%esp
 82f99c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f99c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f99c9:	8b 45 08             	mov    0x8(%ebp),%eax
 82f99cc:	89 04 24             	mov    %eax,(%esp)
 82f99cf:	e8 d8 02 00 00       	call   82f9cac <_ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi>
 82f99d4:	c9                   	leave
 82f99d5:	c3                   	ret

```

```c
// WongWork::CAvatarItemMgr::GetAvatarInfo @ 0x82f99bc

/* WongWork::CAvatarItemMgr::GetAvatarInfo(int) const */

void __thiscall WongWork::CAvatarItemMgr::GetAvatarInfo(CAvatarItemMgr *this,int param_1)

{
  _FindItemAll(this,param_1);
  return;
}

```

---

## GetEmblemReduceRate

```asm
// === 082f9f9e WongWork::CAvatarItemMgr::GetEmblemReduceRate  [0x082f9f9e-0x82fa007] ===
 82f9f9e:	55                   	push   %ebp
 82f9f9f:	89 e5                	mov    %esp,%ebp
 82f9fa1:	83 ec 28             	sub    $0x28,%esp
 82f9fa4:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9fa7:	8d 48 54             	lea    0x54(%eax),%ecx
 82f9faa:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9fad:	8d 55 0c             	lea    0xc(%ebp),%edx
 82f9fb0:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f9fb4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82f9fb8:	89 04 24             	mov    %eax,(%esp)
 82f9fbb:	e8 2e 33 dd ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 82f9fc0:	83 ec 04             	sub    $0x4,%esp
 82f9fc3:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9fc6:	8d 50 54             	lea    0x54(%eax),%edx
 82f9fc9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82f9fcc:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9fd0:	89 04 24             	mov    %eax,(%esp)
 82f9fd3:	e8 42 33 dd ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 82f9fd8:	83 ec 04             	sub    $0x4,%esp
 82f9fdb:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82f9fde:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9fe2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9fe5:	89 04 24             	mov    %eax,(%esp)
 82f9fe8:	e8 db 03 de ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 82f9fed:	84 c0                	test   %al,%al
 82f9fef:	74 10                	je     82fa001 <_ZN8WongWork14CAvatarItemMgr19GetEmblemReduceRateEi+0x63>
 82f9ff1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9ff4:	89 04 24             	mov    %eax,(%esp)
 82f9ff7:	e8 44 33 dd ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 82f9ffc:	8b 40 04             	mov    0x4(%eax),%eax
 82f9fff:	eb 05                	jmp    82fa006 <_ZN8WongWork14CAvatarItemMgr19GetEmblemReduceRateEi+0x68>
 82fa001:	b8 00 00 00 00       	mov    $0x0,%eax
 82fa006:	c9                   	leave
 82fa007:	c3                   	ret

```

```c
// WongWork::CAvatarItemMgr::GetEmblemReduceRate @ 0x82f9f9e

/* WongWork::CAvatarItemMgr::GetEmblemReduceRate(int) */

undefined4 WongWork::CAvatarItemMgr::GetEmblemReduceRate(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## GetExpansionInfo

```asm
// === 082f992e WongWork::CAvatarItemMgr::GetExpansionInfo  [0x082f992e-0x82f9963] ===
 82f992e:	55                   	push   %ebp
 82f992f:	89 e5                	mov    %esp,%ebp
 82f9931:	83 ec 28             	sub    $0x28,%esp
 82f9934:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f9937:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f993b:	8b 45 08             	mov    0x8(%ebp),%eax
 82f993e:	89 04 24             	mov    %eax,(%esp)
 82f9941:	e8 66 03 00 00       	call   82f9cac <_ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi>
 82f9946:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82f9949:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82f994d:	75 07                	jne    82f9956 <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi+0x28>
 82f994f:	b8 00 00 00 00       	mov    $0x0,%eax
 82f9954:	eb 0b                	jmp    82f9961 <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi+0x33>
 82f9956:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f9959:	89 04 24             	mov    %eax,(%esp)
 82f995c:	e8 d5 09 00 00       	call   82fa336 <_ZNK8WongWork11Avatar_Item16getExpansionInfoEv>
 82f9961:	c9                   	leave
 82f9962:	c3                   	ret
 82f9963:	90                   	nop

```

```c
// WongWork::CAvatarItemMgr::GetExpansionInfo @ 0x82f992e

/* WongWork::CAvatarItemMgr::GetExpansionInfo(int) const */

undefined4 __thiscall WongWork::CAvatarItemMgr::GetExpansionInfo(CAvatarItemMgr *this,int param_1)

{
  Avatar_Item *this_00;
  undefined4 uVar1;
  
  this_00 = (Avatar_Item *)_FindItemAll(this,param_1);
  if (this_00 == (Avatar_Item *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = Avatar_Item::getExpansionInfo(this_00);
  }
  return uVar1;
}

```

---

## GetExpireDate

```asm
// === 082f981a WongWork::CAvatarItemMgr::GetExpireDate  [0x082f981a-0x82f984f] ===
 82f981a:	55                   	push   %ebp
 82f981b:	89 e5                	mov    %esp,%ebp
 82f981d:	83 ec 28             	sub    $0x28,%esp
 82f9820:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f9823:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9827:	8b 45 08             	mov    0x8(%ebp),%eax
 82f982a:	89 04 24             	mov    %eax,(%esp)
 82f982d:	e8 7a 04 00 00       	call   82f9cac <_ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi>
 82f9832:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82f9835:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82f9839:	75 07                	jne    82f9842 <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi+0x28>
 82f983b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 82f9840:	eb 0b                	jmp    82f984d <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi+0x33>
 82f9842:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f9845:	89 04 24             	mov    %eax,(%esp)
 82f9848:	e8 9d 09 00 00       	call   82fa1ea <_ZNK8WongWork11Avatar_Item13GetExpireDateEv>
 82f984d:	c9                   	leave
 82f984e:	c3                   	ret
 82f984f:	90                   	nop

```

```c
// WongWork::CAvatarItemMgr::GetExpireDate @ 0x82f981a

/* WongWork::CAvatarItemMgr::GetExpireDate(int) const */

undefined4 __thiscall WongWork::CAvatarItemMgr::GetExpireDate(CAvatarItemMgr *this,int param_1)

{
  Avatar_Item *this_00;
  undefined4 uVar1;
  
  this_00 = (Avatar_Item *)_FindItemAll(this,param_1);
  if (this_00 == (Avatar_Item *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = Avatar_Item::GetExpireDate(this_00);
  }
  return uVar1;
}

```

---

## GetIPGAgencyNo

```asm
// === 082f98c2 WongWork::CAvatarItemMgr::GetIPGAgencyNo  [0x082f98c2-0x82f98f7] ===
 82f98c2:	55                   	push   %ebp
 82f98c3:	89 e5                	mov    %esp,%ebp
 82f98c5:	83 ec 28             	sub    $0x28,%esp
 82f98c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f98cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f98cf:	8b 45 08             	mov    0x8(%ebp),%eax
 82f98d2:	89 04 24             	mov    %eax,(%esp)
 82f98d5:	e8 d2 03 00 00       	call   82f9cac <_ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi>
 82f98da:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82f98dd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82f98e1:	75 07                	jne    82f98ea <_ZNK8WongWork14CAvatarItemMgr14GetIPGAgencyNoEi+0x28>
 82f98e3:	b8 00 00 00 00       	mov    $0x0,%eax
 82f98e8:	eb 0b                	jmp    82f98f5 <_ZNK8WongWork14CAvatarItemMgr14GetIPGAgencyNoEi+0x33>
 82f98ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f98ed:	89 04 24             	mov    %eax,(%esp)
 82f98f0:	e8 0d 39 f3 ff       	call   822d202 <_ZNK8WongWork11Avatar_Item14GetIPGAgencyNoEv>
 82f98f5:	c9                   	leave
 82f98f6:	c3                   	ret
 82f98f7:	90                   	nop

```

```c
// WongWork::CAvatarItemMgr::GetIPGAgencyNo @ 0x82f98c2

/* WongWork::CAvatarItemMgr::GetIPGAgencyNo(int) const */

undefined4 __thiscall WongWork::CAvatarItemMgr::GetIPGAgencyNo(CAvatarItemMgr *this,int param_1)

{
  Avatar_Item *this_00;
  undefined4 uVar1;
  
  this_00 = (Avatar_Item *)_FindItemAll(this,param_1);
  if (this_00 == (Avatar_Item *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = Avatar_Item::GetIPGAgencyNo(this_00);
  }
  return uVar1;
}

```

---

## GetItem

```asm
// === 082f925c WongWork::CAvatarItemMgr::GetItem  [0x082f925c-0x82f9401] ===
 82f925c:	55                   	push   %ebp
 82f925d:	89 e5                	mov    %esp,%ebp
 82f925f:	53                   	push   %ebx
 82f9260:	83 ec 24             	sub    $0x24,%esp
 82f9263:	8b 55 08             	mov    0x8(%ebp),%edx
 82f9266:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9269:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f926d:	89 04 24             	mov    %eax,(%esp)
 82f9270:	e8 85 15 00 00       	call   82fa7fa <_ZNKSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 82f9275:	83 ec 04             	sub    $0x4,%esp
 82f9278:	8b 55 08             	mov    0x8(%ebp),%edx
 82f927b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f927e:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9282:	89 04 24             	mov    %eax,(%esp)
 82f9285:	e8 96 15 00 00       	call   82fa820 <_ZNKSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 82f928a:	83 ec 04             	sub    $0x4,%esp
 82f928d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82f9294:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82f929b:	e9 1f 01 00 00       	jmp    82f93bf <_ZNK8WongWork14CAvatarItemMgr7GetItemEP16AvatarDetailInfoPi+0x163>
 82f92a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f92a3:	6b c0 4b             	imul   $0x4b,%eax,%eax
 82f92a6:	89 c3                	mov    %eax,%ebx
 82f92a8:	03 5d 0c             	add    0xc(%ebp),%ebx
 82f92ab:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f92ae:	89 04 24             	mov    %eax,(%esp)
 82f92b1:	e8 c2 15 00 00       	call   82fa878 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEptEv>
 82f92b6:	8b 00                	mov    (%eax),%eax
 82f92b8:	89 03                	mov    %eax,(%ebx)
 82f92ba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f92bd:	6b c0 4b             	imul   $0x4b,%eax,%eax
 82f92c0:	89 c3                	mov    %eax,%ebx
 82f92c2:	03 5d 0c             	add    0xc(%ebp),%ebx
 82f92c5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f92c8:	89 04 24             	mov    %eax,(%esp)
 82f92cb:	e8 a8 15 00 00       	call   82fa878 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEptEv>
 82f92d0:	8b 40 04             	mov    0x4(%eax),%eax
 82f92d3:	89 04 24             	mov    %eax,(%esp)
 82f92d6:	e8 0f 0f 00 00       	call   82fa1ea <_ZNK8WongWork11Avatar_Item13GetExpireDateEv>
 82f92db:	89 43 04             	mov    %eax,0x4(%ebx)
 82f92de:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f92e1:	6b c0 4b             	imul   $0x4b,%eax,%eax
 82f92e4:	89 c3                	mov    %eax,%ebx
 82f92e6:	03 5d 0c             	add    0xc(%ebp),%ebx
 82f92e9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f92ec:	89 04 24             	mov    %eax,(%esp)
 82f92ef:	e8 84 15 00 00       	call   82fa878 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEptEv>
 82f92f4:	8b 40 04             	mov    0x4(%eax),%eax
 82f92f7:	89 04 24             	mov    %eax,(%esp)
 82f92fa:	e8 29 0f 00 00       	call   82fa228 <_ZNK8WongWork11Avatar_Item13GetRegistTimeEv>
 82f92ff:	89 43 08             	mov    %eax,0x8(%ebx)
 82f9302:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9305:	89 04 24             	mov    %eax,(%esp)
 82f9308:	e8 6b 15 00 00       	call   82fa878 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEptEv>
 82f930d:	8b 40 04             	mov    0x4(%eax),%eax
 82f9310:	89 04 24             	mov    %eax,(%esp)
 82f9313:	e8 ea 3e f3 ff       	call   822d202 <_ZNK8WongWork11Avatar_Item14GetIPGAgencyNoEv>
 82f9318:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82f931b:	6b d2 4b             	imul   $0x4b,%edx,%edx
 82f931e:	03 55 0c             	add    0xc(%ebp),%edx
 82f9321:	83 c2 0c             	add    $0xc,%edx
 82f9324:	c7 44 24 08 19 00 00 	movl   $0x19,0x8(%esp)
 82f932b:	00 
 82f932c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9330:	89 14 24             	mov    %edx,(%esp)
 82f9333:	e8 98 45 d8 ff       	call   807d8d0 <strncpy@plt>
 82f9338:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f933b:	6b c0 4b             	imul   $0x4b,%eax,%eax
 82f933e:	89 c3                	mov    %eax,%ebx
 82f9340:	03 5d 0c             	add    0xc(%ebp),%ebx
 82f9343:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9346:	89 04 24             	mov    %eax,(%esp)
 82f9349:	e8 2a 15 00 00       	call   82fa878 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEptEv>
 82f934e:	8b 40 04             	mov    0x4(%eax),%eax
 82f9351:	89 04 24             	mov    %eax,(%esp)
 82f9354:	e8 95 0f 00 00       	call   82fa2ee <_ZNK8WongWork11Avatar_Item18getJewelSocketDataEv>
 82f9359:	8b 10                	mov    (%eax),%edx
 82f935b:	89 53 29             	mov    %edx,0x29(%ebx)
 82f935e:	8b 50 04             	mov    0x4(%eax),%edx
 82f9361:	89 53 2d             	mov    %edx,0x2d(%ebx)
 82f9364:	8b 50 08             	mov    0x8(%eax),%edx
 82f9367:	89 53 31             	mov    %edx,0x31(%ebx)
 82f936a:	8b 50 0c             	mov    0xc(%eax),%edx
 82f936d:	89 53 35             	mov    %edx,0x35(%ebx)
 82f9370:	8b 50 10             	mov    0x10(%eax),%edx
 82f9373:	89 53 39             	mov    %edx,0x39(%ebx)
 82f9376:	8b 50 14             	mov    0x14(%eax),%edx
 82f9379:	89 53 3d             	mov    %edx,0x3d(%ebx)
 82f937c:	8b 50 18             	mov    0x18(%eax),%edx
 82f937f:	89 53 41             	mov    %edx,0x41(%ebx)
 82f9382:	0f b7 40 1c          	movzwl 0x1c(%eax),%eax
 82f9386:	66 89 43 45          	mov    %ax,0x45(%ebx)
 82f938a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f938d:	6b c0 4b             	imul   $0x4b,%eax,%eax
 82f9390:	89 c3                	mov    %eax,%ebx
 82f9392:	03 5d 0c             	add    0xc(%ebp),%ebx
 82f9395:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9398:	89 04 24             	mov    %eax,(%esp)
 82f939b:	e8 d8 14 00 00       	call   82fa878 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEptEv>
 82f93a0:	8b 40 04             	mov    0x4(%eax),%eax
 82f93a3:	89 04 24             	mov    %eax,(%esp)
 82f93a6:	e8 97 0f 00 00       	call   82fa342 <_ZNK8WongWork11Avatar_Item19getExnansionInfoRefEv>
 82f93ab:	8b 00                	mov    (%eax),%eax
 82f93ad:	89 43 47             	mov    %eax,0x47(%ebx)
 82f93b0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f93b3:	89 04 24             	mov    %eax,(%esp)
 82f93b6:	e8 9f 14 00 00       	call   82fa85a <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEppEv>
 82f93bb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82f93bf:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f93c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f93c6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f93c9:	89 04 24             	mov    %eax,(%esp)
 82f93cc:	e8 75 14 00 00       	call   82fa846 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEneERKS6_>
 82f93d1:	84 c0                	test   %al,%al
 82f93d3:	74 0d                	je     82f93e2 <_ZNK8WongWork14CAvatarItemMgr7GetItemEP16AvatarDetailInfoPi+0x186>
 82f93d5:	83 7d f4 72          	cmpl   $0x72,-0xc(%ebp)
 82f93d9:	7f 07                	jg     82f93e2 <_ZNK8WongWork14CAvatarItemMgr7GetItemEP16AvatarDetailInfoPi+0x186>
 82f93db:	b8 01 00 00 00       	mov    $0x1,%eax
 82f93e0:	eb 05                	jmp    82f93e7 <_ZNK8WongWork14CAvatarItemMgr7GetItemEP16AvatarDetailInfoPi+0x18b>
 82f93e2:	b8 00 00 00 00       	mov    $0x0,%eax
 82f93e7:	84 c0                	test   %al,%al
 82f93e9:	0f 85 b1 fe ff ff    	jne    82f92a0 <_ZNK8WongWork14CAvatarItemMgr7GetItemEP16AvatarDetailInfoPi+0x44>
 82f93ef:	8b 45 10             	mov    0x10(%ebp),%eax
 82f93f2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82f93f5:	89 10                	mov    %edx,(%eax)
 82f93f7:	b8 01 00 00 00       	mov    $0x1,%eax
 82f93fc:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 82f93ff:	c9                   	leave
 82f9400:	c3                   	ret
 82f9401:	90                   	nop

```

```c
// WongWork::CAvatarItemMgr::GetItem @ 0x82f925c

/* WongWork::CAvatarItemMgr::GetItem(AvatarDetailInfo*, int*) const */

undefined4 __thiscall
WongWork::CAvatarItemMgr::GetItem(CAvatarItemMgr *this,AvatarDetailInfo *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  char *__src;
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  local_18 [4];
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  local_14 [4];
  int local_10;
  
  std::
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  ::begin(local_14);
  std::
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  ::end(local_18);
  local_10 = 0;
  while( true ) {
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> *)
                       local_14,(_Rb_tree_const_iterator *)local_18);
    if ((cVar2 == '\0') || (0x72 < local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    iVar3 = local_10 * 0x4b;
    puVar4 = (undefined4 *)
             std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                       ((_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> *)
                        local_14);
    *(undefined4 *)(param_1 + iVar3) = *puVar4;
    iVar3 = local_10 * 0x4b;
    iVar5 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> *)
                       local_14);
    uVar6 = Avatar_Item::GetExpireDate(*(Avatar_Item **)(iVar5 + 4));
    *(undefined4 *)(param_1 + iVar3 + 4) = uVar6;
    iVar3 = local_10 * 0x4b;
    iVar5 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> *)
                       local_14);
    uVar6 = Avatar_Item::GetRegistTime(*(Avatar_Item **)(iVar5 + 4));
    *(undefined4 *)(param_1 + iVar3 + 8) = uVar6;
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> *)
                       local_14);
    __src = (char *)Avatar_Item::GetIPGAgencyNo(*(Avatar_Item **)(iVar3 + 4));
    strncpy((char *)(param_1 + local_10 * 0x4b + 0xc),__src,0x19);
    iVar3 = local_10;
    iVar5 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> *)
                       local_14);
    puVar4 = (undefined4 *)Avatar_Item::getJewelSocketData(*(Avatar_Item **)(iVar5 + 4));
    *(undefined4 *)(param_1 + iVar3 * 0x4b + 0x29) = *puVar4;
    *(undefined4 *)(param_1 + iVar3 * 0x4b + 0x2d) = puVar4[1];
    *(undefined4 *)(param_1 + iVar3 * 0x4b + 0x31) = puVar4[2];
    *(undefined4 *)(param_1 + iVar3 * 0x4b + 0x35) = puVar4[3];
    *(undefined4 *)(param_1 + iVar3 * 0x4b + 0x39) = puVar4[4];
    *(undefined4 *)(param_1 + iVar3 * 0x4b + 0x3d) = puVar4[5];
    *(undefined4 *)(param_1 + iVar3 * 0x4b + 0x41) = puVar4[6];
    *(undefined2 *)(param_1 + iVar3 * 0x4b + 0x45) = *(undefined2 *)(puVar4 + 7);
    iVar3 = local_10 * 0x4b;
    iVar5 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> *)
                       local_14);
    puVar4 = (undefined4 *)Avatar_Item::getExnansionInfoRef(*(Avatar_Item **)(iVar5 + 4));
    *(undefined4 *)(param_1 + iVar3 + 0x47) = *puVar4;
    std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator++
              ((_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> *)local_14);
    local_10 = local_10 + 1;
  }
  *param_2 = local_10;
  return 1;
}

```

---

## GetRegistTime

```asm
// === 082f988c WongWork::CAvatarItemMgr::GetRegistTime  [0x082f988c-0x82f98c1] ===
 82f988c:	55                   	push   %ebp
 82f988d:	89 e5                	mov    %esp,%ebp
 82f988f:	83 ec 28             	sub    $0x28,%esp
 82f9892:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f9895:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9899:	8b 45 08             	mov    0x8(%ebp),%eax
 82f989c:	89 04 24             	mov    %eax,(%esp)
 82f989f:	e8 08 04 00 00       	call   82f9cac <_ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi>
 82f98a4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82f98a7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82f98ab:	75 07                	jne    82f98b4 <_ZNK8WongWork14CAvatarItemMgr13GetRegistTimeEi+0x28>
 82f98ad:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 82f98b2:	eb 0b                	jmp    82f98bf <_ZNK8WongWork14CAvatarItemMgr13GetRegistTimeEi+0x33>
 82f98b4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f98b7:	89 04 24             	mov    %eax,(%esp)
 82f98ba:	e8 69 09 00 00       	call   82fa228 <_ZNK8WongWork11Avatar_Item13GetRegistTimeEv>
 82f98bf:	c9                   	leave
 82f98c0:	c3                   	ret
 82f98c1:	90                   	nop

```

```c
// WongWork::CAvatarItemMgr::GetRegistTime @ 0x82f988c

/* WongWork::CAvatarItemMgr::GetRegistTime(int) const */

undefined4 __thiscall WongWork::CAvatarItemMgr::GetRegistTime(CAvatarItemMgr *this,int param_1)

{
  Avatar_Item *this_00;
  undefined4 uVar1;
  
  this_00 = (Avatar_Item *)_FindItemAll(this,param_1);
  if (this_00 == (Avatar_Item *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = Avatar_Item::GetRegistTime(this_00);
  }
  return uVar1;
}

```

---

## GetRemainDate

```asm
// === 082f9850 WongWork::CAvatarItemMgr::GetRemainDate  [0x082f9850-0x82f988b] ===
 82f9850:	55                   	push   %ebp
 82f9851:	89 e5                	mov    %esp,%ebp
 82f9853:	83 ec 28             	sub    $0x28,%esp
 82f9856:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f9859:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f985d:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9860:	89 04 24             	mov    %eax,(%esp)
 82f9863:	e8 44 04 00 00       	call   82f9cac <_ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi>
 82f9868:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82f986b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82f986f:	75 07                	jne    82f9878 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii+0x28>
 82f9871:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 82f9876:	eb 12                	jmp    82f988a <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii+0x3a>
 82f9878:	8b 45 10             	mov    0x10(%ebp),%eax
 82f987b:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f987f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f9882:	89 04 24             	mov    %eax,(%esp)
 82f9885:	e8 6a 09 00 00       	call   82fa1f4 <_ZNK8WongWork11Avatar_Item13GetRemainDateEi>
 82f988a:	c9                   	leave
 82f988b:	c3                   	ret

```

```c
// WongWork::CAvatarItemMgr::GetRemainDate @ 0x82f9850

/* WongWork::CAvatarItemMgr::GetRemainDate(int, int) const */

undefined4 __thiscall
WongWork::CAvatarItemMgr::GetRemainDate(CAvatarItemMgr *this,int param_1,int param_2)

{
  Avatar_Item *this_00;
  undefined4 uVar1;
  
  this_00 = (Avatar_Item *)_FindItemAll(this,param_1);
  if (this_00 == (Avatar_Item *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = Avatar_Item::GetRemainDate(this_00,param_2);
  }
  return uVar1;
}

```

---

## RegistItem

```asm
// === 082f8fb0 WongWork::CAvatarItemMgr::RegistItem  [0x082f8fb0-0x82f901b] ===
 82f8fb0:	55                   	push   %ebp
 82f8fb1:	89 e5                	mov    %esp,%ebp
 82f8fb3:	57                   	push   %edi
 82f8fb4:	56                   	push   %esi
 82f8fb5:	53                   	push   %ebx
 82f8fb6:	83 ec 3c             	sub    $0x3c,%esp
 82f8fb9:	8b 45 10             	mov    0x10(%ebp),%eax
 82f8fbc:	88 45 e4             	mov    %al,-0x1c(%ebp)
 82f8fbf:	0f b6 5d e4          	movzbl -0x1c(%ebp),%ebx
 82f8fc3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8fc6:	83 c0 47             	add    $0x47,%eax
 82f8fc9:	89 45 e0             	mov    %eax,-0x20(%ebp)
 82f8fcc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8fcf:	8d 78 29             	lea    0x29(%eax),%edi
 82f8fd2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8fd5:	8d 70 0c             	lea    0xc(%eax),%esi
 82f8fd8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8fdb:	8b 48 08             	mov    0x8(%eax),%ecx
 82f8fde:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8fe1:	8b 50 04             	mov    0x4(%eax),%edx
 82f8fe4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8fe7:	8b 00                	mov    (%eax),%eax
 82f8fe9:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 82f8fed:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 82f8ff0:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 82f8ff4:	89 7c 24 14          	mov    %edi,0x14(%esp)
 82f8ff8:	89 74 24 10          	mov    %esi,0x10(%esp)
 82f8ffc:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 82f9000:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f9004:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9008:	8b 45 08             	mov    0x8(%ebp),%eax
 82f900b:	89 04 24             	mov    %eax,(%esp)
 82f900e:	e8 09 00 00 00       	call   82f901c <_ZN8WongWork14CAvatarItemMgr10RegistItemEiiiPKcRK20stAvatarEmblemInfo_tRK23stAvatarExpansionInfo_tb>
 82f9013:	83 c4 3c             	add    $0x3c,%esp
 82f9016:	5b                   	pop    %ebx
 82f9017:	5e                   	pop    %esi
 82f9018:	5f                   	pop    %edi
 82f9019:	5d                   	pop    %ebp
 82f901a:	c3                   	ret
 82f901b:	90                   	nop

```

```c
// WongWork::CAvatarItemMgr::RegistItem @ 0x82f8fb0

/* WongWork::CAvatarItemMgr::RegistItem(AvatarDetailInfo const&, bool) */

void __thiscall
WongWork::CAvatarItemMgr::RegistItem(CAvatarItemMgr *this,AvatarDetailInfo *param_1,bool param_2)

{
  RegistItem(this,*(int *)param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8),
             (char *)(param_1 + 0xc),(stAvatarEmblemInfo_t *)(param_1 + 0x29),
             (stAvatarExpansionInfo_t *)(param_1 + 0x47),param_2);
  return;
}

```

---

## RegistItem_082f901c

```asm
// === 082f901c WongWork::CAvatarItemMgr::RegistItem  [0x082f901c-0x82f913d] ===
 82f901c:	55                   	push   %ebp
 82f901d:	89 e5                	mov    %esp,%ebp
 82f901f:	83 ec 58             	sub    $0x58,%esp
 82f9022:	8b 45 24             	mov    0x24(%ebp),%eax
 82f9025:	88 45 c4             	mov    %al,-0x3c(%ebp)
 82f9028:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f902b:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f902f:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9032:	89 04 24             	mov    %eax,(%esp)
 82f9035:	e8 fa 0c 00 00       	call   82f9d34 <_ZNK8WongWork14CAvatarItemMgr9_FindItemEi>
 82f903a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82f903d:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82f9041:	74 0a                	je     82f904d <_ZN8WongWork14CAvatarItemMgr10RegistItemEiiiPKcRK20stAvatarEmblemInfo_tRK23stAvatarExpansionInfo_tb+0x31>
 82f9043:	b8 00 00 00 00       	mov    $0x0,%eax
 82f9048:	e9 ee 00 00 00       	jmp    82f913b <_ZN8WongWork14CAvatarItemMgr10RegistItemEiiiPKcRK20stAvatarEmblemInfo_tRK23stAvatarExpansionInfo_tb+0x11f>
 82f904d:	c7 04 24 80 bd 43 09 	movl   $0x943bd80,(%esp)
 82f9054:	e8 c3 14 00 00       	call   82fa51c <_ZN11DynamicPoolIN8WongWork11Avatar_ItemEE7AcquireEv>
 82f9059:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 82f905c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82f9063:	80 7d c4 00          	cmpb   $0x0,-0x3c(%ebp)
 82f9067:	74 20                	je     82f9089 <_ZN8WongWork14CAvatarItemMgr10RegistItemEiiiPKcRK20stAvatarEmblemInfo_tRK23stAvatarExpansionInfo_tb+0x6d>
 82f9069:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 82f906d:	74 20                	je     82f908f <_ZN8WongWork14CAvatarItemMgr10RegistItemEiiiPKcRK20stAvatarEmblemInfo_tRK23stAvatarExpansionInfo_tb+0x73>
 82f906f:	81 7d 10 6d 01 00 00 	cmpl   $0x16d,0x10(%ebp)
 82f9076:	74 17                	je     82f908f <_ZN8WongWork14CAvatarItemMgr10RegistItemEiiiPKcRK20stAvatarEmblemInfo_tRK23stAvatarExpansionInfo_tb+0x73>
 82f9078:	8b 45 10             	mov    0x10(%ebp),%eax
 82f907b:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 82f9081:	03 45 14             	add    0x14(%ebp),%eax
 82f9084:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82f9087:	eb 06                	jmp    82f908f <_ZN8WongWork14CAvatarItemMgr10RegistItemEiiiPKcRK20stAvatarEmblemInfo_tRK23stAvatarExpansionInfo_tb+0x73>
 82f9089:	8b 45 10             	mov    0x10(%ebp),%eax
 82f908c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82f908f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82f9092:	8b 55 18             	mov    0x18(%ebp),%edx
 82f9095:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82f9099:	8b 55 14             	mov    0x14(%ebp),%edx
 82f909c:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f90a0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82f90a3:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f90a7:	89 04 24             	mov    %eax,(%esp)
 82f90aa:	e8 85 11 00 00       	call   82fa234 <_ZN8WongWork11Avatar_Item7SetDataEiiPKc>
 82f90af:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82f90b2:	8b 55 1c             	mov    0x1c(%ebp),%edx
 82f90b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f90b9:	89 04 24             	mov    %eax,(%esp)
 82f90bc:	e8 a9 11 00 00       	call   82fa26a <_ZN8WongWork11Avatar_Item19setEmblemSocketDataERK20stAvatarEmblemInfo_t>
 82f90c1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82f90c4:	8b 55 20             	mov    0x20(%ebp),%edx
 82f90c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f90cb:	89 04 24             	mov    %eax,(%esp)
 82f90ce:	e8 53 12 00 00       	call   82fa326 <_ZN8WongWork11Avatar_Item16setExpansionInfoERK23stAvatarExpansionInfo_t>
 82f90d3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82f90d6:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 82f90d9:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f90dd:	8d 55 0c             	lea    0xc(%ebp),%edx
 82f90e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f90e4:	89 04 24             	mov    %eax,(%esp)
 82f90e7:	e8 73 16 00 00       	call   82fa75f <_ZSt9make_pairIRiRPN8WongWork11Avatar_ItemEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 82f90ec:	83 ec 04             	sub    $0x4,%esp
 82f90ef:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82f90f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f90f6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82f90f9:	89 04 24             	mov    %eax,(%esp)
 82f90fc:	e8 9d 16 00 00       	call   82fa79e <_ZNSt4pairIKiPN8WongWork11Avatar_ItemEEC1IiS3_EEOS_IT_T0_E>
 82f9101:	8b 55 08             	mov    0x8(%ebp),%edx
 82f9104:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82f9107:	8d 4d e0             	lea    -0x20(%ebp),%ecx
 82f910a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82f910e:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9112:	89 04 24             	mov    %eax,(%esp)
 82f9115:	e8 b4 16 00 00       	call   82fa7ce <_ZNSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE6insertERKS7_>
 82f911a:	83 ec 04             	sub    $0x4,%esp
 82f911d:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 82f9120:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f9123:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f9127:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f912b:	8b 45 08             	mov    0x8(%ebp),%eax
 82f912e:	89 04 24             	mov    %eax,(%esp)
 82f9131:	e8 16 0d 00 00       	call   82f9e4c <_ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE>
 82f9136:	b8 01 00 00 00       	mov    $0x1,%eax
 82f913b:	c9                   	leave
 82f913c:	c3                   	ret
 82f913d:	90                   	nop

```

```c
// WongWork::CAvatarItemMgr::RegistItem @ 0x82f901c

/* WongWork::CAvatarItemMgr::RegistItem(int, int, int, char const*, stAvatarEmblemInfo_t const&,
   stAvatarExpansionInfo_t const&, bool) */

undefined4 __thiscall
WongWork::CAvatarItemMgr::RegistItem
          (CAvatarItemMgr *this,int param_1,int param_2,int param_3,char *param_4,
          stAvatarEmblemInfo_t *param_5,stAvatarExpansionInfo_t *param_6,bool param_7)

{
  bool bVar1;
  undefined4 uVar2;
  Avatar_Item *this_00;
  undefined3 in_stack_00000021;
  pair local_2c [8];
  pair<int_const,WongWork::Avatar_Item*> local_24 [8];
  int local_1c [2];
  int local_14;
  int local_10;
  
  bVar1 = param_7;
  local_14 = _FindItem((int)this);
  if (local_14 == 0) {
    this_00 = (Avatar_Item *)
              DynamicPool<WongWork::Avatar_Item>::Acquire
                        ((DynamicPool<WongWork::Avatar_Item> *)m_AvatarItemPool);
    local_10 = 0;
    if (bVar1) {
      if ((param_2 != 0) && (param_2 != 0x16d)) {
        local_10 = param_2 * 0x15180 + param_3;
      }
    }
    else {
      local_10 = param_2;
    }
    Avatar_Item::SetData(this_00,local_10,param_3,param_4);
    Avatar_Item::setEmblemSocketData(this_00,param_5);
    Avatar_Item::setExpansionInfo(this_00,param_6);
    std::make_pair<int&,WongWork::Avatar_Item*&>(local_1c,(Avatar_Item **)&param_1);
    std::pair<int_const,WongWork::Avatar_Item*>::pair<int,WongWork::Avatar_Item*>
              (local_24,(pair *)local_1c);
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::insert(local_2c);
    AddEmblemEndurance(this,param_1,this_00);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## RegistNotAssignedAvatarItem

```asm
// === 082f94bc WongWork::CAvatarItemMgr::RegistNotAssignedAvatarItem  [0x082f94bc-0x82f95f3] ===
 82f94bc:	55                   	push   %ebp
 82f94bd:	89 e5                	mov    %esp,%ebp
 82f94bf:	83 ec 48             	sub    $0x48,%esp
 82f94c2:	8b 45 18             	mov    0x18(%ebp),%eax
 82f94c5:	88 45 d4             	mov    %al,-0x2c(%ebp)
 82f94c8:	8b 45 08             	mov    0x8(%ebp),%eax
 82f94cb:	89 04 24             	mov    %eax,(%esp)
 82f94ce:	e8 2f 09 00 00       	call   82f9e02 <_ZN8WongWork14CAvatarItemMgr14_AssignTempKeyEv>
 82f94d3:	89 45 dc             	mov    %eax,-0x24(%ebp)
 82f94d6:	c7 04 24 80 bd 43 09 	movl   $0x943bd80,(%esp)
 82f94dd:	e8 3a 10 00 00       	call   82fa51c <_ZN11DynamicPoolIN8WongWork11Avatar_ItemEE7AcquireEv>
 82f94e2:	89 45 d8             	mov    %eax,-0x28(%ebp)
 82f94e5:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82f94e9:	74 09                	je     82f94f4 <_ZN8WongWork14CAvatarItemMgr27RegistNotAssignedAvatarItemEiiPKcbRK20stAvatarEmblemInfo_t+0x38>
 82f94eb:	81 7d 0c 6d 01 00 00 	cmpl   $0x16d,0xc(%ebp)
 82f94f2:	75 23                	jne    82f9517 <_ZN8WongWork14CAvatarItemMgr27RegistNotAssignedAvatarItemEiiPKcbRK20stAvatarEmblemInfo_t+0x5b>
 82f94f4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82f94f7:	8b 55 14             	mov    0x14(%ebp),%edx
 82f94fa:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82f94fe:	8b 55 10             	mov    0x10(%ebp),%edx
 82f9501:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f9505:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82f950c:	00 
 82f950d:	89 04 24             	mov    %eax,(%esp)
 82f9510:	e8 1f 0d 00 00       	call   82fa234 <_ZN8WongWork11Avatar_Item7SetDataEiiPKc>
 82f9515:	eb 5e                	jmp    82f9575 <_ZN8WongWork14CAvatarItemMgr27RegistNotAssignedAvatarItemEiiPKcbRK20stAvatarEmblemInfo_t+0xb9>
 82f9517:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 82f951b:	83 f0 01             	xor    $0x1,%eax
 82f951e:	84 c0                	test   %al,%al
 82f9520:	74 2d                	je     82f954f <_ZN8WongWork14CAvatarItemMgr27RegistNotAssignedAvatarItemEiiPKcbRK20stAvatarEmblemInfo_t+0x93>
 82f9522:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f9525:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 82f952b:	89 c2                	mov    %eax,%edx
 82f952d:	03 55 10             	add    0x10(%ebp),%edx
 82f9530:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82f9533:	8b 4d 14             	mov    0x14(%ebp),%ecx
 82f9536:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 82f953a:	8b 4d 10             	mov    0x10(%ebp),%ecx
 82f953d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82f9541:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9545:	89 04 24             	mov    %eax,(%esp)
 82f9548:	e8 e7 0c 00 00       	call   82fa234 <_ZN8WongWork11Avatar_Item7SetDataEiiPKc>
 82f954d:	eb 26                	jmp    82f9575 <_ZN8WongWork14CAvatarItemMgr27RegistNotAssignedAvatarItemEiiPKcbRK20stAvatarEmblemInfo_t+0xb9>
 82f954f:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f9552:	8b 55 10             	mov    0x10(%ebp),%edx
 82f9555:	8d 0c 02             	lea    (%edx,%eax,1),%ecx
 82f9558:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82f955b:	8b 55 14             	mov    0x14(%ebp),%edx
 82f955e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82f9562:	8b 55 10             	mov    0x10(%ebp),%edx
 82f9565:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f9569:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82f956d:	89 04 24             	mov    %eax,(%esp)
 82f9570:	e8 bf 0c 00 00       	call   82fa234 <_ZN8WongWork11Avatar_Item7SetDataEiiPKc>
 82f9575:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82f9578:	8b 55 1c             	mov    0x1c(%ebp),%edx
 82f957b:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f957f:	89 04 24             	mov    %eax,(%esp)
 82f9582:	e8 e3 0c 00 00       	call   82fa26a <_ZN8WongWork11Avatar_Item19setEmblemSocketDataERK20stAvatarEmblemInfo_t>
 82f9587:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82f958a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82f9591:	00 
 82f9592:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82f9599:	00 
 82f959a:	89 04 24             	mov    %eax,(%esp)
 82f959d:	e8 58 0d 00 00       	call   82fa2fa <_ZN8WongWork11Avatar_Item8setColorEss>
 82f95a2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f95a5:	8d 55 d8             	lea    -0x28(%ebp),%edx
 82f95a8:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f95ac:	8d 55 dc             	lea    -0x24(%ebp),%edx
 82f95af:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f95b3:	89 04 24             	mov    %eax,(%esp)
 82f95b6:	e8 a4 11 00 00       	call   82fa75f <_ZSt9make_pairIRiRPN8WongWork11Avatar_ItemEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 82f95bb:	83 ec 04             	sub    $0x4,%esp
 82f95be:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f95c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f95c5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82f95c8:	89 04 24             	mov    %eax,(%esp)
 82f95cb:	e8 ce 11 00 00       	call   82fa79e <_ZNSt4pairIKiPN8WongWork11Avatar_ItemEEC1IiS3_EEOS_IT_T0_E>
 82f95d0:	8b 45 08             	mov    0x8(%ebp),%eax
 82f95d3:	8d 48 18             	lea    0x18(%eax),%ecx
 82f95d6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82f95d9:	8d 55 e8             	lea    -0x18(%ebp),%edx
 82f95dc:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f95e0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82f95e4:	89 04 24             	mov    %eax,(%esp)
 82f95e7:	e8 e2 11 00 00       	call   82fa7ce <_ZNSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE6insertERKS7_>
 82f95ec:	83 ec 04             	sub    $0x4,%esp
 82f95ef:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82f95f2:	c9                   	leave
 82f95f3:	c3                   	ret

```

```c
// WongWork::CAvatarItemMgr::RegistNotAssignedAvatarItem @ 0x82f94bc

/* WongWork::CAvatarItemMgr::RegistNotAssignedAvatarItem(int, int, char const*, bool,
   stAvatarEmblemInfo_t const&) */

Avatar_Item * __thiscall
WongWork::CAvatarItemMgr::RegistNotAssignedAvatarItem
          (CAvatarItemMgr *this,int param_1,int param_2,char *param_3,bool param_4,
          stAvatarEmblemInfo_t *param_5)

{
  Avatar_Item *this_00;
  Avatar_Item *local_28;
  pair local_24 [8];
  pair<int_const,WongWork::Avatar_Item*> local_1c [8];
  int local_14 [4];
  
  local_28 = (Avatar_Item *)_AssignTempKey(this);
  this_00 = (Avatar_Item *)
            DynamicPool<WongWork::Avatar_Item>::Acquire
                      ((DynamicPool<WongWork::Avatar_Item> *)m_AvatarItemPool);
  if ((param_1 == 0) || (param_1 == 0x16d)) {
    Avatar_Item::SetData(this_00,0,param_2,param_3);
  }
  else if (param_4) {
    Avatar_Item::SetData(this_00,param_2 + param_1,param_2,param_3);
  }
  else {
    Avatar_Item::SetData(this_00,param_1 * 0x15180 + param_2,param_2,param_3);
  }
  Avatar_Item::setEmblemSocketData(this_00,param_5);
  Avatar_Item::setColor(this_00,0,0);
  std::make_pair<int&,WongWork::Avatar_Item*&>(local_14,&local_28);
  std::pair<int_const,WongWork::Avatar_Item*>::pair<int,WongWork::Avatar_Item*>
            (local_1c,(pair *)local_14);
  std::
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  ::insert(local_24);
  return local_28;
}

```

---

## RegistNotAssignedAvatarItem_082f95f4

```asm
// === 082f95f4 WongWork::CAvatarItemMgr::RegistNotAssignedAvatarItem  [0x082f95f4-0x82f96a5] ===
 82f95f4:	55                   	push   %ebp
 82f95f5:	89 e5                	mov    %esp,%ebp
 82f95f7:	83 ec 38             	sub    $0x38,%esp
 82f95fa:	8b 45 08             	mov    0x8(%ebp),%eax
 82f95fd:	89 04 24             	mov    %eax,(%esp)
 82f9600:	e8 fd 07 00 00       	call   82f9e02 <_ZN8WongWork14CAvatarItemMgr14_AssignTempKeyEv>
 82f9605:	89 45 dc             	mov    %eax,-0x24(%ebp)
 82f9608:	c7 04 24 80 bd 43 09 	movl   $0x943bd80,(%esp)
 82f960f:	e8 08 0f 00 00       	call   82fa51c <_ZN11DynamicPoolIN8WongWork11Avatar_ItemEE7AcquireEv>
 82f9614:	89 45 d8             	mov    %eax,-0x28(%ebp)
 82f9617:	8b 55 13             	mov    0x13(%ebp),%edx
 82f961a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82f961d:	c7 44 24 0c 80 fc c1 	movl   $0x8c1fc80,0xc(%esp)
 82f9624:	08 
 82f9625:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82f962c:	00 
 82f962d:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9631:	89 04 24             	mov    %eax,(%esp)
 82f9634:	e8 fb 0b 00 00       	call   82fa234 <_ZN8WongWork11Avatar_Item7SetDataEiiPKc>
 82f9639:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82f963c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82f9643:	00 
 82f9644:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82f964b:	00 
 82f964c:	89 04 24             	mov    %eax,(%esp)
 82f964f:	e8 a6 0c 00 00       	call   82fa2fa <_ZN8WongWork11Avatar_Item8setColorEss>
 82f9654:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9657:	8d 55 d8             	lea    -0x28(%ebp),%edx
 82f965a:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f965e:	8d 55 dc             	lea    -0x24(%ebp),%edx
 82f9661:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9665:	89 04 24             	mov    %eax,(%esp)
 82f9668:	e8 f2 10 00 00       	call   82fa75f <_ZSt9make_pairIRiRPN8WongWork11Avatar_ItemEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 82f966d:	83 ec 04             	sub    $0x4,%esp
 82f9670:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9673:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9677:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82f967a:	89 04 24             	mov    %eax,(%esp)
 82f967d:	e8 1c 11 00 00       	call   82fa79e <_ZNSt4pairIKiPN8WongWork11Avatar_ItemEEC1IiS3_EEOS_IT_T0_E>
 82f9682:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9685:	8d 48 18             	lea    0x18(%eax),%ecx
 82f9688:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82f968b:	8d 55 e8             	lea    -0x18(%ebp),%edx
 82f968e:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f9692:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82f9696:	89 04 24             	mov    %eax,(%esp)
 82f9699:	e8 30 11 00 00       	call   82fa7ce <_ZNSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE6insertERKS7_>
 82f969e:	83 ec 04             	sub    $0x4,%esp
 82f96a1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82f96a4:	c9                   	leave
 82f96a5:	c3                   	ret

```

```c
// WongWork::CAvatarItemMgr::RegistNotAssignedAvatarItem @ 0x82f95f4

/* WongWork::CAvatarItemMgr::RegistNotAssignedAvatarItem(Inven_Item) */

Avatar_Item *
WongWork::CAvatarItemMgr::RegistNotAssignedAvatarItem
          (CAvatarItemMgr *param_1,undefined4 param_2,undefined8 param_3)

{
  Avatar_Item *this;
  Avatar_Item *local_28;
  pair local_24 [8];
  pair<int_const,WongWork::Avatar_Item*> local_1c [8];
  int local_14 [4];
  
  local_28 = (Avatar_Item *)_AssignTempKey(param_1);
  this = (Avatar_Item *)
         DynamicPool<WongWork::Avatar_Item>::Acquire
                   ((DynamicPool<WongWork::Avatar_Item> *)m_AvatarItemPool);
  Avatar_Item::SetData(this,param_3._3_4_,0,"");
  Avatar_Item::setColor(this,0,0);
  std::make_pair<int&,WongWork::Avatar_Item*&>(local_14,&local_28);
  std::pair<int_const,WongWork::Avatar_Item*>::pair<int,WongWork::Avatar_Item*>
            (local_1c,(pair *)local_14);
  std::
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  ::insert(local_24);
  return local_28;
}

```

---

## Reset

```asm
// === 082f9ae4 WongWork::CAvatarItemMgr::Reset  [0x082f9ae4-0x82f9cab] ===
 82f9ae4:	55                   	push   %ebp
 82f9ae5:	89 e5                	mov    %esp,%ebp
 82f9ae7:	83 ec 38             	sub    $0x38,%esp
 82f9aea:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9aed:	c7 40 30 01 00 00 00 	movl   $0x1,0x30(%eax)
 82f9af4:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9af7:	89 04 24             	mov    %eax,(%esp)
 82f9afa:	e8 cb 0e 00 00       	call   82fa9ca <_ZNKSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE5emptyEv>
 82f9aff:	84 c0                	test   %al,%al
 82f9b01:	74 19                	je     82f9b1c <_ZN8WongWork14CAvatarItemMgr5ResetEv+0x38>
 82f9b03:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9b06:	83 c0 18             	add    $0x18,%eax
 82f9b09:	89 04 24             	mov    %eax,(%esp)
 82f9b0c:	e8 b9 0e 00 00       	call   82fa9ca <_ZNKSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE5emptyEv>
 82f9b11:	84 c0                	test   %al,%al
 82f9b13:	74 07                	je     82f9b1c <_ZN8WongWork14CAvatarItemMgr5ResetEv+0x38>
 82f9b15:	b8 01 00 00 00       	mov    $0x1,%eax
 82f9b1a:	eb 05                	jmp    82f9b21 <_ZN8WongWork14CAvatarItemMgr5ResetEv+0x3d>
 82f9b1c:	b8 00 00 00 00       	mov    $0x0,%eax
 82f9b21:	84 c0                	test   %al,%al
 82f9b23:	0f 85 7f 01 00 00    	jne    82f9ca8 <_ZN8WongWork14CAvatarItemMgr5ResetEv+0x1c4>
 82f9b29:	8b 55 08             	mov    0x8(%ebp),%edx
 82f9b2c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82f9b2f:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9b33:	89 04 24             	mov    %eax,(%esp)
 82f9b36:	e8 a3 0e 00 00       	call   82fa9de <_ZNSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 82f9b3b:	83 ec 04             	sub    $0x4,%esp
 82f9b3e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82f9b41:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9b45:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82f9b48:	89 04 24             	mov    %eax,(%esp)
 82f9b4b:	e8 b4 0e 00 00       	call   82faa04 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEC1ERKSt17_Rb_tree_iteratorIS5_E>
 82f9b50:	8b 55 08             	mov    0x8(%ebp),%edx
 82f9b53:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f9b56:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9b5a:	89 04 24             	mov    %eax,(%esp)
 82f9b5d:	e8 b2 0e 00 00       	call   82faa14 <_ZNSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 82f9b62:	83 ec 04             	sub    $0x4,%esp
 82f9b65:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f9b68:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9b6c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82f9b6f:	89 04 24             	mov    %eax,(%esp)
 82f9b72:	e8 8d 0e 00 00       	call   82faa04 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEC1ERKSt17_Rb_tree_iteratorIS5_E>
 82f9b77:	eb 3f                	jmp    82f9bb8 <_ZN8WongWork14CAvatarItemMgr5ResetEv+0xd4>
 82f9b79:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82f9b7c:	89 04 24             	mov    %eax,(%esp)
 82f9b7f:	e8 f4 0c 00 00       	call   82fa878 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEptEv>
 82f9b84:	8b 40 04             	mov    0x4(%eax),%eax
 82f9b87:	89 04 24             	mov    %eax,(%esp)
 82f9b8a:	e8 cb 07 00 00       	call   82fa35a <_ZN8WongWork11Avatar_Item4initEv>
 82f9b8f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82f9b92:	89 04 24             	mov    %eax,(%esp)
 82f9b95:	e8 de 0c 00 00       	call   82fa878 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEptEv>
 82f9b9a:	8b 40 04             	mov    0x4(%eax),%eax
 82f9b9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9ba1:	c7 04 24 80 bd 43 09 	movl   $0x943bd80,(%esp)
 82f9ba8:	e8 f3 0c 00 00       	call   82fa8a0 <_ZN11DynamicPoolIN8WongWork11Avatar_ItemEE4FreeEPS1_>
 82f9bad:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82f9bb0:	89 04 24             	mov    %eax,(%esp)
 82f9bb3:	e8 a2 0c 00 00       	call   82fa85a <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEppEv>
 82f9bb8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82f9bbb:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9bbf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82f9bc2:	89 04 24             	mov    %eax,(%esp)
 82f9bc5:	e8 7c 0c 00 00       	call   82fa846 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEneERKS6_>
 82f9bca:	84 c0                	test   %al,%al
 82f9bcc:	75 ab                	jne    82f9b79 <_ZN8WongWork14CAvatarItemMgr5ResetEv+0x95>
 82f9bce:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9bd1:	8d 50 18             	lea    0x18(%eax),%edx
 82f9bd4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9bd7:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9bdb:	89 04 24             	mov    %eax,(%esp)
 82f9bde:	e8 fb 0d 00 00       	call   82fa9de <_ZNSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 82f9be3:	83 ec 04             	sub    $0x4,%esp
 82f9be6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9be9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9bed:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82f9bf0:	89 04 24             	mov    %eax,(%esp)
 82f9bf3:	e8 0c 0e 00 00       	call   82faa04 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEC1ERKSt17_Rb_tree_iteratorIS5_E>
 82f9bf8:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9bfb:	8d 50 18             	lea    0x18(%eax),%edx
 82f9bfe:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82f9c01:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9c05:	89 04 24             	mov    %eax,(%esp)
 82f9c08:	e8 07 0e 00 00       	call   82faa14 <_ZNSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 82f9c0d:	83 ec 04             	sub    $0x4,%esp
 82f9c10:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82f9c13:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9c17:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82f9c1a:	89 04 24             	mov    %eax,(%esp)
 82f9c1d:	e8 e2 0d 00 00       	call   82faa04 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEC1ERKSt17_Rb_tree_iteratorIS5_E>
 82f9c22:	eb 29                	jmp    82f9c4d <_ZN8WongWork14CAvatarItemMgr5ResetEv+0x169>
 82f9c24:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82f9c27:	89 04 24             	mov    %eax,(%esp)
 82f9c2a:	e8 49 0c 00 00       	call   82fa878 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEptEv>
 82f9c2f:	8b 40 04             	mov    0x4(%eax),%eax
 82f9c32:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9c36:	c7 04 24 80 bd 43 09 	movl   $0x943bd80,(%esp)
 82f9c3d:	e8 5e 0c 00 00       	call   82fa8a0 <_ZN11DynamicPoolIN8WongWork11Avatar_ItemEE4FreeEPS1_>
 82f9c42:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82f9c45:	89 04 24             	mov    %eax,(%esp)
 82f9c48:	e8 0d 0c 00 00       	call   82fa85a <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEppEv>
 82f9c4d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82f9c50:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9c54:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82f9c57:	89 04 24             	mov    %eax,(%esp)
 82f9c5a:	e8 e7 0b 00 00       	call   82fa846 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEneERKS6_>
 82f9c5f:	84 c0                	test   %al,%al
 82f9c61:	75 c1                	jne    82f9c24 <_ZN8WongWork14CAvatarItemMgr5ResetEv+0x140>
 82f9c63:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9c66:	89 04 24             	mov    %eax,(%esp)
 82f9c69:	e8 cc 0d 00 00       	call   82faa3a <_ZNSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE5clearEv>
 82f9c6e:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9c71:	83 c0 18             	add    $0x18,%eax
 82f9c74:	89 04 24             	mov    %eax,(%esp)
 82f9c77:	e8 be 0d 00 00       	call   82faa3a <_ZNSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE5clearEv>
 82f9c7c:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9c7f:	83 c0 34             	add    $0x34,%eax
 82f9c82:	89 04 24             	mov    %eax,(%esp)
 82f9c85:	e8 5e 6a e5 ff       	call   81506e8 <_ZN20stAvatarEmblemInfo_t4initEv>
 82f9c8a:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9c8d:	83 c0 54             	add    $0x54,%eax
 82f9c90:	89 04 24             	mov    %eax,(%esp)
 82f9c93:	e8 46 d0 dc ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 82f9c98:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9c9b:	83 c0 6c             	add    $0x6c,%eax
 82f9c9e:	89 04 24             	mov    %eax,(%esp)
 82f9ca1:	e8 38 d0 dc ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 82f9ca6:	eb 01                	jmp    82f9ca9 <_ZN8WongWork14CAvatarItemMgr5ResetEv+0x1c5>
 82f9ca8:	90                   	nop
 82f9ca9:	c9                   	leave
 82f9caa:	c3                   	ret
 82f9cab:	90                   	nop

```

```c
// WongWork::CAvatarItemMgr::Reset @ 0x82f9ae4

/* WongWork::CAvatarItemMgr::Reset() */

void __thiscall WongWork::CAvatarItemMgr::Reset(CAvatarItemMgr *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> local_2c [4];
  _Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> local_28 [4];
  _Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> local_24 [4];
  _Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> local_20 [4];
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  local_1c [4];
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  local_18 [4];
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  local_14 [4];
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  local_10 [12];
  
  *(undefined4 *)(this + 0x30) = 1;
  cVar2 = std::
          map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
          ::empty((map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
                   *)this);
  if (cVar2 != '\0') {
    cVar2 = std::
            map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
            ::empty((map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
                     *)(this + 0x18));
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_082f9b21;
    }
  }
  bVar1 = false;
LAB_082f9b21:
  if (!bVar1) {
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::end(local_1c);
    std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::
    _Rb_tree_const_iterator(local_20,(_Rb_tree_iterator *)local_1c);
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::begin(local_18);
    std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::
    _Rb_tree_const_iterator(local_28,(_Rb_tree_iterator *)local_18);
    while( true ) {
      cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator!=
                        (local_28,(_Rb_tree_const_iterator *)local_20);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                        (local_28);
      Avatar_Item::init(*(Avatar_Item **)(iVar3 + 4));
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                        (local_28);
      DynamicPool<WongWork::Avatar_Item>::Free
                ((DynamicPool<WongWork::Avatar_Item> *)m_AvatarItemPool,*(Avatar_Item **)(iVar3 + 4)
                );
      std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator++
                (local_28);
    }
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::end(local_14);
    std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::
    _Rb_tree_const_iterator(local_24,(_Rb_tree_iterator *)local_14);
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::begin(local_10);
    std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::
    _Rb_tree_const_iterator(local_2c,(_Rb_tree_iterator *)local_10);
    while( true ) {
      cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator!=
                        (local_2c,(_Rb_tree_const_iterator *)local_24);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                        (local_2c);
      DynamicPool<WongWork::Avatar_Item>::Free
                ((DynamicPool<WongWork::Avatar_Item> *)m_AvatarItemPool,*(Avatar_Item **)(iVar3 + 4)
                );
      std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator++
                (local_2c);
    }
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::clear((map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
             *)this);
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::clear((map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
             *)(this + 0x18));
    stAvatarEmblemInfo_t::init((stAvatarEmblemInfo_t *)(this + 0x34));
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x54)
              );
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x6c)
              );
  }
  return;
}

```

---

## SaveEndurance

```asm
// === 082fa0a8 WongWork::CAvatarItemMgr::SaveEndurance  [0x082fa0a8-0x82fa154] ===
 82fa0a8:	55                   	push   %ebp
 82fa0a9:	89 e5                	mov    %esp,%ebp
 82fa0ab:	53                   	push   %ebx
 82fa0ac:	83 ec 24             	sub    $0x24,%esp
 82fa0af:	8b 45 08             	mov    0x8(%ebp),%eax
 82fa0b2:	83 c0 6c             	add    $0x6c,%eax
 82fa0b5:	89 04 24             	mov    %eax,(%esp)
 82fa0b8:	e8 03 03 00 00       	call   82fa3c0 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5emptyEv>
 82fa0bd:	84 c0                	test   %al,%al
 82fa0bf:	0f 85 8a 00 00 00    	jne    82fa14f <_ZN8WongWork14CAvatarItemMgr13SaveEnduranceEv+0xa7>
 82fa0c5:	8b 45 08             	mov    0x8(%ebp),%eax
 82fa0c8:	8d 50 6c             	lea    0x6c(%eax),%edx
 82fa0cb:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82fa0ce:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fa0d2:	89 04 24             	mov    %eax,(%esp)
 82fa0d5:	e8 c6 7e e5 ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 82fa0da:	83 ec 04             	sub    $0x4,%esp
 82fa0dd:	8b 45 08             	mov    0x8(%ebp),%eax
 82fa0e0:	8d 50 6c             	lea    0x6c(%eax),%edx
 82fa0e3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82fa0e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fa0ea:	89 04 24             	mov    %eax,(%esp)
 82fa0ed:	e8 28 32 dd ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 82fa0f2:	83 ec 04             	sub    $0x4,%esp
 82fa0f5:	eb 32                	jmp    82fa129 <_ZN8WongWork14CAvatarItemMgr13SaveEnduranceEv+0x81>
 82fa0f7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82fa0fa:	89 04 24             	mov    %eax,(%esp)
 82fa0fd:	e8 3e 32 dd ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 82fa102:	8b 58 04             	mov    0x4(%eax),%ebx
 82fa105:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82fa108:	89 04 24             	mov    %eax,(%esp)
 82fa10b:	e8 30 32 dd ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 82fa110:	8b 00                	mov    (%eax),%eax
 82fa112:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82fa116:	89 04 24             	mov    %eax,(%esp)
 82fa119:	e8 90 6d e9 ff       	call   8190eae <_ZN20AvatarRechargeServer23SaveAvatarEnduranceUnitEii>
 82fa11e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82fa121:	89 04 24             	mov    %eax,(%esp)
 82fa124:	e8 1d 06 de ff       	call   80da746 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEv>
 82fa129:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82fa12c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82fa130:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82fa133:	89 04 24             	mov    %eax,(%esp)
 82fa136:	e8 8d 02 de ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 82fa13b:	84 c0                	test   %al,%al
 82fa13d:	75 b8                	jne    82fa0f7 <_ZN8WongWork14CAvatarItemMgr13SaveEnduranceEv+0x4f>
 82fa13f:	8b 45 08             	mov    0x8(%ebp),%eax
 82fa142:	83 c0 6c             	add    $0x6c,%eax
 82fa145:	89 04 24             	mov    %eax,(%esp)
 82fa148:	e8 91 cb dc ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 82fa14d:	eb 01                	jmp    82fa150 <_ZN8WongWork14CAvatarItemMgr13SaveEnduranceEv+0xa8>
 82fa14f:	90                   	nop
 82fa150:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 82fa153:	c9                   	leave
 82fa154:	c3                   	ret

```

```c
// WongWork::CAvatarItemMgr::SaveEndurance @ 0x82fa0a8

/* WongWork::CAvatarItemMgr::SaveEndurance() */

void __thiscall WongWork::CAvatarItemMgr::SaveEndurance(CAvatarItemMgr *this)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [8];
  
  cVar1 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::empty
                    ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                     (this + 0x6c));
  if (cVar1 == '\0') {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_10);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_14);
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_10,
                         (_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_10);
      iVar2 = *(int *)(iVar2 + 4);
      piVar3 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_10);
      AvatarRechargeServer::SaveAvatarEnduranceUnit(*piVar3,iVar2);
      std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_10);
    }
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x6c)
              );
  }
  return;
}

```

---

## SetAvatarColor

```asm
// === 082f9964 WongWork::CAvatarItemMgr::SetAvatarColor  [0x082f9964-0x82f99bb] ===
 82f9964:	55                   	push   %ebp
 82f9965:	89 e5                	mov    %esp,%ebp
 82f9967:	83 ec 38             	sub    $0x38,%esp
 82f996a:	8b 55 10             	mov    0x10(%ebp),%edx
 82f996d:	8b 45 14             	mov    0x14(%ebp),%eax
 82f9970:	66 89 55 e4          	mov    %dx,-0x1c(%ebp)
 82f9974:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 82f9978:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f997b:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f997f:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9982:	89 04 24             	mov    %eax,(%esp)
 82f9985:	e8 22 03 00 00       	call   82f9cac <_ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi>
 82f998a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82f998d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82f9991:	75 07                	jne    82f999a <_ZN8WongWork14CAvatarItemMgr14SetAvatarColorEiss+0x36>
 82f9993:	b8 00 00 00 00       	mov    $0x0,%eax
 82f9998:	eb 20                	jmp    82f99ba <_ZN8WongWork14CAvatarItemMgr14SetAvatarColorEiss+0x56>
 82f999a:	0f bf 55 e0          	movswl -0x20(%ebp),%edx
 82f999e:	0f bf 45 e4          	movswl -0x1c(%ebp),%eax
 82f99a2:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f99a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f99aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f99ad:	89 04 24             	mov    %eax,(%esp)
 82f99b0:	e8 45 09 00 00       	call   82fa2fa <_ZN8WongWork11Avatar_Item8setColorEss>
 82f99b5:	b8 01 00 00 00       	mov    $0x1,%eax
 82f99ba:	c9                   	leave
 82f99bb:	c3                   	ret

```

```c
// WongWork::CAvatarItemMgr::SetAvatarColor @ 0x82f9964

/* WongWork::CAvatarItemMgr::SetAvatarColor(int, short, short) */

bool __thiscall
WongWork::CAvatarItemMgr::SetAvatarColor
          (CAvatarItemMgr *this,int param_1,short param_2,short param_3)

{
  Avatar_Item *this_00;
  
  this_00 = (Avatar_Item *)_FindItemAll(this,param_1);
  if (this_00 != (Avatar_Item *)0x0) {
    Avatar_Item::setColor(this_00,param_2,param_3);
  }
  return this_00 != (Avatar_Item *)0x0;
}

```

---

## UnRegistItem

```asm
// === 082f9402 WongWork::CAvatarItemMgr::UnRegistItem  [0x082f9402-0x82f94bb] ===
 82f9402:	55                   	push   %ebp
 82f9403:	89 e5                	mov    %esp,%ebp
 82f9405:	83 ec 28             	sub    $0x28,%esp
 82f9408:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f940b:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f940f:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9412:	89 04 24             	mov    %eax,(%esp)
 82f9415:	e8 1a 09 00 00       	call   82f9d34 <_ZNK8WongWork14CAvatarItemMgr9_FindItemEi>
 82f941a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82f941d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82f9421:	75 0a                	jne    82f942d <_ZN8WongWork14CAvatarItemMgr12UnRegistItemEi+0x2b>
 82f9423:	b8 00 00 00 00       	mov    $0x0,%eax
 82f9428:	e9 8c 00 00 00       	jmp    82f94b9 <_ZN8WongWork14CAvatarItemMgr12UnRegistItemEi+0xb7>
 82f942d:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9430:	8d 55 0c             	lea    0xc(%ebp),%edx
 82f9433:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9437:	89 04 24             	mov    %eax,(%esp)
 82f943a:	e8 47 14 00 00       	call   82fa886 <_ZNSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE5eraseERS6_>
 82f943f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f9442:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9446:	c7 04 24 80 bd 43 09 	movl   $0x943bd80,(%esp)
 82f944d:	e8 4e 14 00 00       	call   82fa8a0 <_ZN11DynamicPoolIN8WongWork11Avatar_ItemEE4FreeEPS1_>
 82f9452:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9455:	8d 50 54             	lea    0x54(%eax),%edx
 82f9458:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f945b:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f945f:	89 04 24             	mov    %eax,(%esp)
 82f9462:	e8 b3 3e dd ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 82f9467:	83 ec 04             	sub    $0x4,%esp
 82f946a:	8b 45 08             	mov    0x8(%ebp),%eax
 82f946d:	8d 48 54             	lea    0x54(%eax),%ecx
 82f9470:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9473:	8d 55 0c             	lea    0xc(%ebp),%edx
 82f9476:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f947a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82f947e:	89 04 24             	mov    %eax,(%esp)
 82f9481:	e8 68 3e dd ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 82f9486:	83 ec 04             	sub    $0x4,%esp
 82f9489:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f948c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9490:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9493:	89 04 24             	mov    %eax,(%esp)
 82f9496:	e8 2d 0f de ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 82f949b:	84 c0                	test   %al,%al
 82f949d:	74 15                	je     82f94b4 <_ZN8WongWork14CAvatarItemMgr12UnRegistItemEi+0xb2>
 82f949f:	8b 45 08             	mov    0x8(%ebp),%eax
 82f94a2:	8d 50 54             	lea    0x54(%eax),%edx
 82f94a5:	8d 45 0c             	lea    0xc(%ebp),%eax
 82f94a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f94ac:	89 14 24             	mov    %edx,(%esp)
 82f94af:	e8 fc 14 00 00       	call   82fa9b0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5eraseERS3_>
 82f94b4:	b8 01 00 00 00       	mov    $0x1,%eax
 82f94b9:	c9                   	leave
 82f94ba:	c3                   	ret
 82f94bb:	90                   	nop

```

```c
// WongWork::CAvatarItemMgr::UnRegistItem @ 0x82f9402

/* WongWork::CAvatarItemMgr::UnRegistItem(int) */

undefined4 WongWork::CAvatarItemMgr::UnRegistItem(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  Avatar_Item *local_10;
  
  local_10 = (Avatar_Item *)_FindItem(param_1);
  if (local_10 == (Avatar_Item *)0x0) {
    uVar2 = 0;
  }
  else {
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::erase((int *)param_1);
    DynamicPool<WongWork::Avatar_Item>::Free
              ((DynamicPool<WongWork::Avatar_Item> *)m_AvatarItemPool,local_10);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_18);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14)
    ;
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      (local_14,(_Rb_tree_iterator *)local_18);
    if (cVar1 != '\0') {
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::erase
                ((int *)(param_1 + 0x54));
    }
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## UpdateEndurance

```asm
// === 082fa008 WongWork::CAvatarItemMgr::UpdateEndurance  [0x082fa008-0x82fa0a7] ===
 82fa008:	55                   	push   %ebp
 82fa009:	89 e5                	mov    %esp,%ebp
 82fa00b:	83 ec 38             	sub    $0x38,%esp
 82fa00e:	8b 45 08             	mov    0x8(%ebp),%eax
 82fa011:	8d 48 6c             	lea    0x6c(%eax),%ecx
 82fa014:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82fa017:	8d 55 0c             	lea    0xc(%ebp),%edx
 82fa01a:	89 54 24 08          	mov    %edx,0x8(%esp)
 82fa01e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82fa022:	89 04 24             	mov    %eax,(%esp)
 82fa025:	e8 c4 32 dd ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 82fa02a:	83 ec 04             	sub    $0x4,%esp
 82fa02d:	8b 45 08             	mov    0x8(%ebp),%eax
 82fa030:	8d 50 6c             	lea    0x6c(%eax),%edx
 82fa033:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82fa036:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fa03a:	89 04 24             	mov    %eax,(%esp)
 82fa03d:	e8 d8 32 dd ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 82fa042:	83 ec 04             	sub    $0x4,%esp
 82fa045:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82fa048:	89 44 24 04          	mov    %eax,0x4(%esp)
 82fa04c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82fa04f:	89 04 24             	mov    %eax,(%esp)
 82fa052:	e8 99 d8 dc ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 82fa057:	84 c0                	test   %al,%al
 82fa059:	74 3a                	je     82fa095 <_ZN8WongWork14CAvatarItemMgr15UpdateEnduranceEii+0x8d>
 82fa05b:	8d 45 10             	lea    0x10(%ebp),%eax
 82fa05e:	89 44 24 08          	mov    %eax,0x8(%esp)
 82fa062:	8d 45 0c             	lea    0xc(%ebp),%eax
 82fa065:	89 44 24 04          	mov    %eax,0x4(%esp)
 82fa069:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82fa06c:	89 04 24             	mov    %eax,(%esp)
 82fa06f:	e8 4c 0a 00 00       	call   82faac0 <_ZNSt4pairIKiiEC1IRiS3_EEOT_OT0_>
 82fa074:	8b 45 08             	mov    0x8(%ebp),%eax
 82fa077:	8d 48 6c             	lea    0x6c(%eax),%ecx
 82fa07a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82fa07d:	8d 55 f0             	lea    -0x10(%ebp),%edx
 82fa080:	89 54 24 08          	mov    %edx,0x8(%esp)
 82fa084:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82fa088:	89 04 24             	mov    %eax,(%esp)
 82fa08b:	e8 c0 cc dc ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 82fa090:	83 ec 04             	sub    $0x4,%esp
 82fa093:	eb 11                	jmp    82fa0a6 <_ZN8WongWork14CAvatarItemMgr15UpdateEnduranceEii+0x9e>
 82fa095:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82fa098:	89 04 24             	mov    %eax,(%esp)
 82fa09b:	e8 a0 32 dd ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 82fa0a0:	8b 55 10             	mov    0x10(%ebp),%edx
 82fa0a3:	89 50 04             	mov    %edx,0x4(%eax)
 82fa0a6:	c9                   	leave
 82fa0a7:	c3                   	ret

```

```c
// WongWork::CAvatarItemMgr::UpdateEndurance @ 0x82fa008

/* WongWork::CAvatarItemMgr::UpdateEndurance(int, int) */

void __thiscall
WongWork::CAvatarItemMgr::UpdateEndurance(CAvatarItemMgr *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_24 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_20 [4];
  pair local_1c [8];
  pair<int_const,int> local_14 [16];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_20);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_24);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                    (local_20,(_Rb_tree_iterator *)local_24);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_20);
    *(int *)(iVar2 + 4) = param_2;
  }
  else {
    std::pair<int_const,int>::pair<int&,int&>(local_14,&param_1,&param_2);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_1c);
  }
  return;
}

```

---

## _AssignTempKey

```asm
// === 082f9e02 WongWork::CAvatarItemMgr::_AssignTempKey  [0x082f9e02-0x82f9e4b] ===
 82f9e02:	55                   	push   %ebp
 82f9e03:	89 e5                	mov    %esp,%ebp
 82f9e05:	83 ec 28             	sub    $0x28,%esp
 82f9e08:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9e0b:	8b 40 30             	mov    0x30(%eax),%eax
 82f9e0e:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 82f9e13:	75 0a                	jne    82f9e1f <_ZN8WongWork14CAvatarItemMgr14_AssignTempKeyEv+0x1d>
 82f9e15:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9e18:	c7 40 30 00 00 00 00 	movl   $0x0,0x30(%eax)
 82f9e1f:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9e22:	8b 40 30             	mov    0x30(%eax),%eax
 82f9e25:	8d 50 01             	lea    0x1(%eax),%edx
 82f9e28:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9e2b:	89 50 30             	mov    %edx,0x30(%eax)
 82f9e2e:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9e31:	8b 40 30             	mov    0x30(%eax),%eax
 82f9e34:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82f9e37:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f9e3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9e3e:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9e41:	89 04 24             	mov    %eax,(%esp)
 82f9e44:	e8 69 05 00 00       	call   82fa3b2 <_ZNK8WongWork14CAvatarItemMgr12_MakeTempKeyEi>
 82f9e49:	c9                   	leave
 82f9e4a:	c3                   	ret
 82f9e4b:	90                   	nop

```

```c
// WongWork::CAvatarItemMgr::_AssignTempKey @ 0x82f9e02

/* WongWork::CAvatarItemMgr::_AssignTempKey() */

void __thiscall WongWork::CAvatarItemMgr::_AssignTempKey(CAvatarItemMgr *this)

{
  if (*(int *)(this + 0x30) == 0x7fffffff) {
    *(undefined4 *)(this + 0x30) = 0;
  }
  *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
  _MakeTempKey(this,*(int *)(this + 0x30));
  return;
}

```

---

## _FindItem

```asm
// === 082f9d34 WongWork::CAvatarItemMgr::_FindItem  [0x082f9d34-0x82f9d97] ===
 82f9d34:	55                   	push   %ebp
 82f9d35:	89 e5                	mov    %esp,%ebp
 82f9d37:	83 ec 28             	sub    $0x28,%esp
 82f9d3a:	8b 55 08             	mov    0x8(%ebp),%edx
 82f9d3d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9d40:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 82f9d43:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82f9d47:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9d4b:	89 04 24             	mov    %eax,(%esp)
 82f9d4e:	e8 fb 0c 00 00       	call   82faa4e <_ZNKSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE4findERS6_>
 82f9d53:	83 ec 04             	sub    $0x4,%esp
 82f9d56:	8b 55 08             	mov    0x8(%ebp),%edx
 82f9d59:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82f9d5c:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9d60:	89 04 24             	mov    %eax,(%esp)
 82f9d63:	e8 b8 0a 00 00       	call   82fa820 <_ZNKSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 82f9d68:	83 ec 04             	sub    $0x4,%esp
 82f9d6b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82f9d6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9d72:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9d75:	89 04 24             	mov    %eax,(%esp)
 82f9d78:	e8 fd 0c 00 00       	call   82faa7a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEeqERKS6_>
 82f9d7d:	84 c0                	test   %al,%al
 82f9d7f:	74 07                	je     82f9d88 <_ZNK8WongWork14CAvatarItemMgr9_FindItemEi+0x54>
 82f9d81:	b8 00 00 00 00       	mov    $0x0,%eax
 82f9d86:	eb 0e                	jmp    82f9d96 <_ZNK8WongWork14CAvatarItemMgr9_FindItemEi+0x62>
 82f9d88:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9d8b:	89 04 24             	mov    %eax,(%esp)
 82f9d8e:	e8 e5 0a 00 00       	call   82fa878 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEptEv>
 82f9d93:	8b 40 04             	mov    0x4(%eax),%eax
 82f9d96:	c9                   	leave
 82f9d97:	c3                   	ret

```

```c
// WongWork::CAvatarItemMgr::_FindItem @ 0x82f9d34

/* WongWork::CAvatarItemMgr::_FindItem(int) const */

undefined4 WongWork::CAvatarItemMgr::_FindItem(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> local_14 [4];
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  local_10 [12];
  
  std::
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  ::find((int *)local_14);
  std::
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator==
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                      (local_14);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## _FindItemAll

```asm
// === 082f9cac WongWork::CAvatarItemMgr::_FindItemAll  [0x082f9cac-0x82f9d33] ===
 82f9cac:	55                   	push   %ebp
 82f9cad:	89 e5                	mov    %esp,%ebp
 82f9caf:	83 ec 28             	sub    $0x28,%esp
 82f9cb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f9cb5:	89 04 24             	mov    %eax,(%esp)
 82f9cb8:	e8 50 35 f3 ff       	call   822d20d <_ZN8WongWork14CAvatarItemMgr9IsTempKeyEi>
 82f9cbd:	84 c0                	test   %al,%al
 82f9cbf:	74 14                	je     82f9cd5 <_ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi+0x29>
 82f9cc1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f9cc4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9cc8:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9ccb:	89 04 24             	mov    %eax,(%esp)
 82f9cce:	e8 c5 00 00 00       	call   82f9d98 <_ZNK8WongWork14CAvatarItemMgr19_FindWaitAssignItemEi>
 82f9cd3:	eb 5c                	jmp    82f9d31 <_ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi+0x85>
 82f9cd5:	8b 55 08             	mov    0x8(%ebp),%edx
 82f9cd8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9cdb:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 82f9cde:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82f9ce2:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9ce6:	89 04 24             	mov    %eax,(%esp)
 82f9ce9:	e8 60 0d 00 00       	call   82faa4e <_ZNKSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE4findERS6_>
 82f9cee:	83 ec 04             	sub    $0x4,%esp
 82f9cf1:	8b 55 08             	mov    0x8(%ebp),%edx
 82f9cf4:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82f9cf7:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9cfb:	89 04 24             	mov    %eax,(%esp)
 82f9cfe:	e8 1d 0b 00 00       	call   82fa820 <_ZNKSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 82f9d03:	83 ec 04             	sub    $0x4,%esp
 82f9d06:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82f9d09:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9d0d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9d10:	89 04 24             	mov    %eax,(%esp)
 82f9d13:	e8 62 0d 00 00       	call   82faa7a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEeqERKS6_>
 82f9d18:	84 c0                	test   %al,%al
 82f9d1a:	74 07                	je     82f9d23 <_ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi+0x77>
 82f9d1c:	b8 00 00 00 00       	mov    $0x0,%eax
 82f9d21:	eb 0e                	jmp    82f9d31 <_ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi+0x85>
 82f9d23:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9d26:	89 04 24             	mov    %eax,(%esp)
 82f9d29:	e8 4a 0b 00 00       	call   82fa878 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEptEv>
 82f9d2e:	8b 40 04             	mov    0x4(%eax),%eax
 82f9d31:	c9                   	leave
 82f9d32:	c3                   	ret
 82f9d33:	90                   	nop

```

```c
// WongWork::CAvatarItemMgr::_FindItemAll @ 0x82f9cac

/* WongWork::CAvatarItemMgr::_FindItemAll(int) const */

undefined4 __thiscall WongWork::CAvatarItemMgr::_FindItemAll(CAvatarItemMgr *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> local_14 [4];
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  local_10 [12];
  
  cVar1 = IsTempKey(param_1);
  if (cVar1 == '\0') {
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::find((int *)local_14);
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator==
                      (local_14,(_Rb_tree_const_iterator *)local_10);
    if (cVar1 == '\0') {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                        (local_14);
      uVar2 = *(undefined4 *)(iVar3 + 4);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = _FindWaitAssignItem((int)this);
  }
  return uVar2;
}

```

---

## _FindWaitAssignItem

```asm
// === 082f9d98 WongWork::CAvatarItemMgr::_FindWaitAssignItem  [0x082f9d98-0x82f9e01] ===
 82f9d98:	55                   	push   %ebp
 82f9d99:	89 e5                	mov    %esp,%ebp
 82f9d9b:	83 ec 28             	sub    $0x28,%esp
 82f9d9e:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9da1:	8d 48 18             	lea    0x18(%eax),%ecx
 82f9da4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9da7:	8d 55 0c             	lea    0xc(%ebp),%edx
 82f9daa:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f9dae:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82f9db2:	89 04 24             	mov    %eax,(%esp)
 82f9db5:	e8 94 0c 00 00       	call   82faa4e <_ZNKSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE4findERS6_>
 82f9dba:	83 ec 04             	sub    $0x4,%esp
 82f9dbd:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9dc0:	8d 50 18             	lea    0x18(%eax),%edx
 82f9dc3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82f9dc6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f9dca:	89 04 24             	mov    %eax,(%esp)
 82f9dcd:	e8 4e 0a 00 00       	call   82fa820 <_ZNKSt3mapIiPN8WongWork11Avatar_ItemESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 82f9dd2:	83 ec 04             	sub    $0x4,%esp
 82f9dd5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82f9dd8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9ddc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9ddf:	89 04 24             	mov    %eax,(%esp)
 82f9de2:	e8 93 0c 00 00       	call   82faa7a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEeqERKS6_>
 82f9de7:	84 c0                	test   %al,%al
 82f9de9:	74 07                	je     82f9df2 <_ZNK8WongWork14CAvatarItemMgr19_FindWaitAssignItemEi+0x5a>
 82f9deb:	b8 00 00 00 00       	mov    $0x0,%eax
 82f9df0:	eb 0e                	jmp    82f9e00 <_ZNK8WongWork14CAvatarItemMgr19_FindWaitAssignItemEi+0x68>
 82f9df2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f9df5:	89 04 24             	mov    %eax,(%esp)
 82f9df8:	e8 7b 0a 00 00       	call   82fa878 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN8WongWork11Avatar_ItemEEEptEv>
 82f9dfd:	8b 40 04             	mov    0x4(%eax),%eax
 82f9e00:	c9                   	leave
 82f9e01:	c3                   	ret

```

```c
// WongWork::CAvatarItemMgr::_FindWaitAssignItem @ 0x82f9d98

/* WongWork::CAvatarItemMgr::_FindWaitAssignItem(int) const */

undefined4 WongWork::CAvatarItemMgr::_FindWaitAssignItem(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> local_14 [4];
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  local_10 [12];
  
  std::
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  ::find((int *)local_14);
  std::
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator==
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                      (local_14);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## getJewelSocketData

```asm
// === 082f98f8 WongWork::CAvatarItemMgr::getJewelSocketData  [0x082f98f8-0x82f992d] ===
 82f98f8:	55                   	push   %ebp
 82f98f9:	89 e5                	mov    %esp,%ebp
 82f98fb:	83 ec 28             	sub    $0x28,%esp
 82f98fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f9901:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9905:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9908:	89 04 24             	mov    %eax,(%esp)
 82f990b:	e8 9c 03 00 00       	call   82f9cac <_ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi>
 82f9910:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82f9913:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82f9917:	75 08                	jne    82f9921 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi+0x29>
 82f9919:	8b 45 08             	mov    0x8(%ebp),%eax
 82f991c:	83 c0 34             	add    $0x34,%eax
 82f991f:	eb 0b                	jmp    82f992c <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi+0x34>
 82f9921:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f9924:	89 04 24             	mov    %eax,(%esp)
 82f9927:	e8 c2 09 00 00       	call   82fa2ee <_ZNK8WongWork11Avatar_Item18getJewelSocketDataEv>
 82f992c:	c9                   	leave
 82f992d:	c3                   	ret

```

```c
// WongWork::CAvatarItemMgr::getJewelSocketData @ 0x82f98f8

/* WongWork::CAvatarItemMgr::getJewelSocketData(int) const */

CAvatarItemMgr * __thiscall
WongWork::CAvatarItemMgr::getJewelSocketData(CAvatarItemMgr *this,int param_1)

{
  Avatar_Item *this_00;
  CAvatarItemMgr *pCVar1;
  
  this_00 = (Avatar_Item *)_FindItemAll(this,param_1);
  if (this_00 == (Avatar_Item *)0x0) {
    pCVar1 = this + 0x34;
  }
  else {
    pCVar1 = (CAvatarItemMgr *)Avatar_Item::getJewelSocketData(this_00);
  }
  return pCVar1;
}

```

---

## isSocketAvatar

```asm
// === 082f9228 WongWork::CAvatarItemMgr::isSocketAvatar  [0x082f9228-0x82f925b] ===
 82f9228:	55                   	push   %ebp
 82f9229:	89 e5                	mov    %esp,%ebp
 82f922b:	83 ec 28             	sub    $0x28,%esp
 82f922e:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f9231:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9235:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9238:	89 04 24             	mov    %eax,(%esp)
 82f923b:	e8 b8 06 00 00       	call   82f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>
 82f9240:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82f9243:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f9246:	0f b7 00             	movzwl (%eax),%eax
 82f9249:	66 85 c0             	test   %ax,%ax
 82f924c:	75 07                	jne    82f9255 <_ZN8WongWork14CAvatarItemMgr14isSocketAvatarEi+0x2d>
 82f924e:	b8 00 00 00 00       	mov    $0x0,%eax
 82f9253:	eb 05                	jmp    82f925a <_ZN8WongWork14CAvatarItemMgr14isSocketAvatarEi+0x32>
 82f9255:	b8 01 00 00 00       	mov    $0x1,%eax
 82f925a:	c9                   	leave
 82f925b:	c3                   	ret

```

```c
// WongWork::CAvatarItemMgr::isSocketAvatar @ 0x82f9228

/* WongWork::CAvatarItemMgr::isSocketAvatar(int) */

bool __thiscall WongWork::CAvatarItemMgr::isSocketAvatar(CAvatarItemMgr *this,int param_1)

{
  short *psVar1;
  
  psVar1 = (short *)getJewelSocketData(this,param_1);
  return *psVar1 != 0;
}

```

---

## setEmblemSocketData

```asm
// === 082f91ce WongWork::CAvatarItemMgr::setEmblemSocketData  [0x082f91ce-0x82f9227] ===
 82f91ce:	55                   	push   %ebp
 82f91cf:	89 e5                	mov    %esp,%ebp
 82f91d1:	83 ec 28             	sub    $0x28,%esp
 82f91d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f91d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f91db:	8b 45 08             	mov    0x8(%ebp),%eax
 82f91de:	89 04 24             	mov    %eax,(%esp)
 82f91e1:	e8 4e 0b 00 00       	call   82f9d34 <_ZNK8WongWork14CAvatarItemMgr9_FindItemEi>
 82f91e6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82f91e9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82f91ed:	75 07                	jne    82f91f6 <_ZN8WongWork14CAvatarItemMgr19setEmblemSocketDataEiRK20stAvatarEmblemInfo_t+0x28>
 82f91ef:	b8 00 00 00 00       	mov    $0x0,%eax
 82f91f4:	eb 30                	jmp    82f9226 <_ZN8WongWork14CAvatarItemMgr19setEmblemSocketDataEiRK20stAvatarEmblemInfo_t+0x58>
 82f91f6:	8b 45 10             	mov    0x10(%ebp),%eax
 82f91f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f91fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f9200:	89 04 24             	mov    %eax,(%esp)
 82f9203:	e8 62 10 00 00       	call   82fa26a <_ZN8WongWork11Avatar_Item19setEmblemSocketDataERK20stAvatarEmblemInfo_t>
 82f9208:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f920b:	89 44 24 08          	mov    %eax,0x8(%esp)
 82f920f:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f9212:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9216:	8b 45 08             	mov    0x8(%ebp),%eax
 82f9219:	89 04 24             	mov    %eax,(%esp)
 82f921c:	e8 2b 0c 00 00       	call   82f9e4c <_ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE>
 82f9221:	b8 01 00 00 00       	mov    $0x1,%eax
 82f9226:	c9                   	leave
 82f9227:	c3                   	ret

```

```c
// WongWork::CAvatarItemMgr::setEmblemSocketData @ 0x82f91ce

/* WongWork::CAvatarItemMgr::setEmblemSocketData(int, stAvatarEmblemInfo_t const&) */

bool __thiscall
WongWork::CAvatarItemMgr::setEmblemSocketData
          (CAvatarItemMgr *this,int param_1,stAvatarEmblemInfo_t *param_2)

{
  Avatar_Item *this_00;
  
  this_00 = (Avatar_Item *)_FindItem((int)this);
  if (this_00 != (Avatar_Item *)0x0) {
    Avatar_Item::setEmblemSocketData(this_00,param_2);
    AddEmblemEndurance(this,param_1,this_00);
  }
  return this_00 != (Avatar_Item *)0x0;
}

```

---

## updateEmblemSocket

```asm
// === 082f913e WongWork::CAvatarItemMgr::updateEmblemSocket  [0x082f913e-0x82f91cd] ===
 82f913e:	55                   	push   %ebp
 82f913f:	89 e5                	mov    %esp,%ebp
 82f9141:	83 ec 28             	sub    $0x28,%esp
 82f9144:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f9147:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f914b:	8b 45 08             	mov    0x8(%ebp),%eax
 82f914e:	89 04 24             	mov    %eax,(%esp)
 82f9151:	e8 de 0b 00 00       	call   82f9d34 <_ZNK8WongWork14CAvatarItemMgr9_FindItemEi>
 82f9156:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82f9159:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82f915d:	75 07                	jne    82f9166 <_ZN8WongWork14CAvatarItemMgr18updateEmblemSocketEijPcPm+0x28>
 82f915f:	b8 00 00 00 00       	mov    $0x0,%eax
 82f9164:	eb 65                	jmp    82f91cb <_ZN8WongWork14CAvatarItemMgr18updateEmblemSocketEijPcPm+0x8d>
 82f9166:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82f916d:	eb 31                	jmp    82f91a0 <_ZN8WongWork14CAvatarItemMgr18updateEmblemSocketEijPcPm+0x62>
 82f916f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f9172:	c1 e0 02             	shl    $0x2,%eax
 82f9175:	03 45 18             	add    0x18(%ebp),%eax
 82f9178:	8b 10                	mov    (%eax),%edx
 82f917a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f917d:	8b 4d 14             	mov    0x14(%ebp),%ecx
 82f9180:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 82f9183:	0f b6 00             	movzbl (%eax),%eax
 82f9186:	0f be c0             	movsbl %al,%eax
 82f9189:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f918d:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f9191:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82f9194:	89 04 24             	mov    %eax,(%esp)
 82f9197:	e8 0a 11 00 00       	call   82fa2a6 <_ZN8WongWork11Avatar_Item18updateEmblemSocketEjj>
 82f919c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82f91a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f91a3:	3b 45 10             	cmp    0x10(%ebp),%eax
 82f91a6:	0f 92 c0             	setb   %al
 82f91a9:	84 c0                	test   %al,%al
 82f91ab:	75 c2                	jne    82f916f <_ZN8WongWork14CAvatarItemMgr18updateEmblemSocketEijPcPm+0x31>
 82f91ad:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82f91b0:	89 44 24 08          	mov    %eax,0x8(%esp)
 82f91b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f91b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f91bb:	8b 45 08             	mov    0x8(%ebp),%eax
 82f91be:	89 04 24             	mov    %eax,(%esp)
 82f91c1:	e8 86 0c 00 00       	call   82f9e4c <_ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE>
 82f91c6:	b8 01 00 00 00       	mov    $0x1,%eax
 82f91cb:	c9                   	leave
 82f91cc:	c3                   	ret
 82f91cd:	90                   	nop

```

```c
// WongWork::CAvatarItemMgr::updateEmblemSocket @ 0x82f913e

/* WongWork::CAvatarItemMgr::updateEmblemSocket(int, unsigned int, char*, unsigned long*) */

undefined4 __thiscall
WongWork::CAvatarItemMgr::updateEmblemSocket
          (CAvatarItemMgr *this,int param_1,uint param_2,char *param_3,ulong *param_4)

{
  Avatar_Item *this_00;
  undefined4 uVar1;
  uint local_10;
  
  this_00 = (Avatar_Item *)_FindItem((int)this);
  if (this_00 == (Avatar_Item *)0x0) {
    uVar1 = 0;
  }
  else {
    for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
      Avatar_Item::updateEmblemSocket(this_00,(int)param_3[local_10],param_4[local_10]);
    }
    AddEmblemEndurance(this,param_1,this_00);
    uVar1 = 1;
  }
  return uVar1;
}

```

