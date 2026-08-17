# CEventCharacterHandler

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## CEventCharacterHandler

```asm
// === 0848e29e CEventCharacterHandler::CEventCharacterHandler  [0x0848e29e-0x848e2a3] ===
 848e29e:	55                   	push   %ebp
 848e29f:	89 e5                	mov    %esp,%ebp
 848e2a1:	5d                   	pop    %ebp
 848e2a2:	c3                   	ret
 848e2a3:	90                   	nop

```

```c
// CEventCharacterHandler::CEventCharacterHandler @ 0x848e29e

/* CEventCharacterHandler::CEventCharacterHandler() */

void __thiscall CEventCharacterHandler::CEventCharacterHandler(CEventCharacterHandler *this)

{
  return;
}

```

---

## _AddItem

```asm
// === 0848e8e2 CEventCharacterHandler::_AddItem  [0x0848e8e2-0x848ea4f] ===
 848e8e2:	55                   	push   %ebp
 848e8e3:	89 e5                	mov    %esp,%ebp
 848e8e5:	56                   	push   %esi
 848e8e6:	53                   	push   %ebx
 848e8e7:	83 ec 40             	sub    $0x40,%esp
 848e8ea:	83 7d 10 ff          	cmpl   $0xffffffff,0x10(%ebp)
 848e8ee:	75 31                	jne    848e921 <_ZN22CEventCharacterHandler8_AddItemEP5CUsermii+0x3f>
 848e8f0:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 848e8f7:	e8 a2 d3 c3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 848e8fc:	8d 98 80 51 01 00    	lea    0x15180(%eax),%ebx
 848e902:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 848e909:	e8 90 d3 c3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 848e90e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 848e912:	89 44 24 04          	mov    %eax,0x4(%esp)
 848e916:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e919:	89 04 24             	mov    %eax,(%esp)
 848e91c:	e8 dd 19 22 00       	call   86b02fe <_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll>
 848e921:	8b 5d 10             	mov    0x10(%ebp),%ebx
 848e924:	e8 72 d8 c3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 848e929:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 848e92d:	89 04 24             	mov    %eax,(%esp)
 848e930:	e8 fd 10 ed ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 848e935:	89 45 f0             	mov    %eax,-0x10(%ebp)
 848e938:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 848e93c:	74 32                	je     848e970 <_ZN22CEventCharacterHandler8_AddItemEP5CUsermii+0x8e>
 848e93e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 848e941:	89 04 24             	mov    %eax,(%esp)
 848e944:	e8 b1 29 c6 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 848e949:	84 c0                	test   %al,%al
 848e94b:	74 23                	je     848e970 <_ZN22CEventCharacterHandler8_AddItemEP5CUsermii+0x8e>
 848e94d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 848e950:	89 04 24             	mov    %eax,(%esp)
 848e953:	e8 a4 e0 d9 ff       	call   822c9fc <_ZNK14CStackableItem17getStackableLimitEv>
 848e958:	3b 45 14             	cmp    0x14(%ebp),%eax
 848e95b:	0f 9c c0             	setl   %al
 848e95e:	84 c0                	test   %al,%al
 848e960:	74 0e                	je     848e970 <_ZN22CEventCharacterHandler8_AddItemEP5CUsermii+0x8e>
 848e962:	8b 45 f0             	mov    -0x10(%ebp),%eax
 848e965:	89 04 24             	mov    %eax,(%esp)
 848e968:	e8 8f e0 d9 ff       	call   822c9fc <_ZNK14CStackableItem17getStackableLimitEv>
 848e96d:	89 45 14             	mov    %eax,0x14(%ebp)
 848e970:	8b 45 10             	mov    0x10(%ebp),%eax
 848e973:	8b 55 18             	mov    0x18(%ebp),%edx
 848e976:	89 54 24 14          	mov    %edx,0x14(%esp)
 848e97a:	8d 55 dc             	lea    -0x24(%ebp),%edx
 848e97d:	89 54 24 10          	mov    %edx,0x10(%esp)
 848e981:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 848e988:	00 
 848e989:	8b 55 14             	mov    0x14(%ebp),%edx
 848e98c:	89 54 24 08          	mov    %edx,0x8(%esp)
 848e990:	89 44 24 04          	mov    %eax,0x4(%esp)
 848e994:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e997:	89 04 24             	mov    %eax,(%esp)
 848e99a:	e8 35 cd 1e 00       	call   867b6d4 <_ZN5CUser7AddItemEii14eItemAddReasonR14ENUM_ITEMSPACEi>
 848e99f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 848e9a2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 848e9a6:	0f 88 97 00 00 00    	js     848ea43 <_ZN22CEventCharacterHandler8_AddItemEP5CUsermii+0x161>
 848e9ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e9af:	89 04 24             	mov    %eax,(%esp)
 848e9b2:	e8 71 26 c7 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 848e9b7:	89 c6                	mov    %eax,%esi
 848e9b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e9bc:	89 04 24             	mov    %eax,(%esp)
 848e9bf:	e8 aa b9 c4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 848e9c4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 848e9cb:	00 
 848e9cc:	89 04 24             	mov    %eax,(%esp)
 848e9cf:	e8 77 a6 c7 ff       	call   810904b <_Z14NumberToStringji>
 848e9d4:	89 c3                	mov    %eax,%ebx
 848e9d6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 848e9dd:	00 
 848e9de:	c7 44 24 08 da 00 00 	movl   $0xda,0x8(%esp)
 848e9e5:	00 
 848e9e6:	c7 44 24 04 60 74 c7 	movl   $0x8c77460,0x4(%esp)
 848e9ed:	08 
 848e9ee:	8d 45 e0             	lea    -0x20(%ebp),%eax
 848e9f1:	89 04 24             	mov    %eax,(%esp)
 848e9f4:	e8 1f 0d 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 848e9f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 848e9fc:	89 44 24 10          	mov    %eax,0x10(%esp)
 848ea00:	89 74 24 0c          	mov    %esi,0xc(%esp)
 848ea04:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 848ea08:	c7 44 24 04 30 68 c7 	movl   $0x8c76830,0x4(%esp)
 848ea0f:	08 
 848ea10:	8d 45 e0             	lea    -0x20(%ebp),%eax
 848ea13:	89 04 24             	mov    %eax,(%esp)
 848ea16:	e8 6d 0d 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 848ea1b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 848ea1e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 848ea21:	89 54 24 0c          	mov    %edx,0xc(%esp)
 848ea25:	89 44 24 08          	mov    %eax,0x8(%esp)
 848ea29:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 848ea30:	00 
 848ea31:	8b 45 0c             	mov    0xc(%ebp),%eax
 848ea34:	89 04 24             	mov    %eax,(%esp)
 848ea37:	e8 1e dc 1e 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 848ea3c:	b8 01 00 00 00       	mov    $0x1,%eax
 848ea41:	eb 05                	jmp    848ea48 <_ZN22CEventCharacterHandler8_AddItemEP5CUsermii+0x166>
 848ea43:	b8 00 00 00 00       	mov    $0x0,%eax
 848ea48:	83 c4 40             	add    $0x40,%esp
 848ea4b:	5b                   	pop    %ebx
 848ea4c:	5e                   	pop    %esi
 848ea4d:	5d                   	pop    %ebp
 848ea4e:	c3                   	ret
 848ea4f:	90                   	nop

```

```c
// CEventCharacterHandler::_AddItem @ 0x848e8e2

/* CEventCharacterHandler::_AddItem(CUser*, unsigned long, int, int) */

bool __thiscall
CEventCharacterHandler::_AddItem
          (CEventCharacterHandler *this,CUser *param_1,ulong param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  CDataManager *this_00;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 local_28;
  cMyTrace local_24 [16];
  CStackableItem *local_14;
  int local_10;
  
  if (param_2 == 0xffffffff) {
    iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    lVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    WongWork::CHandlePremium::handleSetUserPCRoom(param_1,lVar3,iVar2 + 0x15180);
  }
  this_00 = (CDataManager *)G_CDataManager();
  local_14 = (CStackableItem *)CDataManager::find_item(this_00,param_2);
  if (((local_14 != (CStackableItem *)0x0) &&
      (cVar1 = CItem::is_stackable((CItem *)local_14), cVar1 != '\0')) &&
     (iVar2 = CStackableItem::getStackableLimit(local_14), iVar2 < param_3)) {
    param_3 = CStackableItem::getStackableLimit(local_14);
  }
  local_10 = CUser::AddItem(param_1,param_2,param_3,6,&local_28,param_4);
  bVar7 = -1 < local_10;
  if (bVar7) {
    uVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar5 = CUser::get_acc_id(param_1);
    uVar6 = NumberToString(uVar5,0);
    cMyTrace::cMyTrace(local_24,
                       "bool CEventCharacterHandler::_AddItem(CUser*, itemIndexOnlyServer_t, int, int)"
                       ,0xda,0);
    cMyTrace::operator()(local_24,"%s:\'%s\' GM Mode Add Item(%d).",uVar6,uVar4,local_10);
    CUser::SendUpdateItemList(param_1,1,local_28,local_10);
  }
  return bVar7;
}

```

---

## _MasterNewSkill

```asm
// === 0848e7d6 CEventCharacterHandler::_MasterNewSkill  [0x0848e7d6-0x848e8e1] ===
 848e7d6:	55                   	push   %ebp
 848e7d7:	89 e5                	mov    %esp,%ebp
 848e7d9:	53                   	push   %ebx
 848e7da:	83 ec 44             	sub    $0x44,%esp
 848e7dd:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 848e7e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e7e7:	89 04 24             	mov    %eax,(%esp)
 848e7ea:	e8 31 f7 c6 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 848e7ef:	89 c3                	mov    %eax,%ebx
 848e7f1:	e8 a5 d9 c3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 848e7f6:	8b 55 10             	mov    0x10(%ebp),%edx
 848e7f9:	89 54 24 08          	mov    %edx,0x8(%esp)
 848e7fd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 848e801:	89 04 24             	mov    %eax,(%esp)
 848e804:	e8 99 15 ed ff       	call   835fda2 <_ZNK12CDataManager10find_skillEii>
 848e809:	89 45 e8             	mov    %eax,-0x18(%ebp)
 848e80c:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 848e810:	75 0a                	jne    848e81c <_ZN22CEventCharacterHandler15_MasterNewSkillEP5CUserii+0x46>
 848e812:	b8 00 00 00 00       	mov    $0x0,%eax
 848e817:	e9 bf 00 00 00       	jmp    848e8db <_ZN22CEventCharacterHandler15_MasterNewSkillEP5CUserii+0x105>
 848e81c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 848e81f:	89 04 24             	mov    %eax,(%esp)
 848e822:	e8 6f 63 ee ff       	call   8374b96 <_ZNK6CSkill9get_groupEv>
 848e827:	89 45 ec             	mov    %eax,-0x14(%ebp)
 848e82a:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e82d:	89 04 24             	mov    %eax,(%esp)
 848e830:	e8 fb 08 da ff       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 848e835:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 848e83c:	00 
 848e83d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 848e844:	00 
 848e845:	8b 55 ec             	mov    -0x14(%ebp),%edx
 848e848:	89 54 24 08          	mov    %edx,0x8(%esp)
 848e84c:	8b 55 10             	mov    0x10(%ebp),%edx
 848e84f:	89 54 24 04          	mov    %edx,0x4(%esp)
 848e853:	89 04 24             	mov    %eax,(%esp)
 848e856:	e8 2b 62 17 00       	call   8604a86 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb>
 848e85b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 848e85e:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e861:	89 04 24             	mov    %eax,(%esp)
 848e864:	e8 c7 08 da ff       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 848e869:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 848e870:	00 
 848e871:	89 04 24             	mov    %eax,(%esp)
 848e874:	e8 65 7f 17 00       	call   86067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>
 848e879:	89 45 f4             	mov    %eax,-0xc(%ebp)
 848e87c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 848e880:	75 07                	jne    848e889 <_ZN22CEventCharacterHandler15_MasterNewSkillEP5CUserii+0xb3>
 848e882:	b8 00 00 00 00       	mov    $0x0,%eax
 848e887:	eb 52                	jmp    848e8db <_ZN22CEventCharacterHandler15_MasterNewSkillEP5CUserii+0x105>
 848e889:	c6 45 e5 00          	movb   $0x0,-0x1b(%ebp)
 848e88d:	8b 45 10             	mov    0x10(%ebp),%eax
 848e890:	88 45 e6             	mov    %al,-0x1a(%ebp)
 848e893:	8b 45 14             	mov    0x14(%ebp),%eax
 848e896:	89 c2                	mov    %eax,%edx
 848e898:	8b 45 f0             	mov    -0x10(%ebp),%eax
 848e89b:	01 c0                	add    %eax,%eax
 848e89d:	03 45 f4             	add    -0xc(%ebp),%eax
 848e8a0:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 848e8a4:	89 d1                	mov    %edx,%ecx
 848e8a6:	28 c1                	sub    %al,%cl
 848e8a8:	89 c8                	mov    %ecx,%eax
 848e8aa:	88 45 e7             	mov    %al,-0x19(%ebp)
 848e8ad:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 848e8b1:	84 c0                	test   %al,%al
 848e8b3:	7f 07                	jg     848e8bc <_ZN22CEventCharacterHandler15_MasterNewSkillEP5CUserii+0xe6>
 848e8b5:	b8 00 00 00 00       	mov    $0x0,%eax
 848e8ba:	eb 1f                	jmp    848e8db <_ZN22CEventCharacterHandler15_MasterNewSkillEP5CUserii+0x105>
 848e8bc:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 848e8c3:	00 
 848e8c4:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 848e8c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 848e8cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e8ce:	89 04 24             	mov    %eax,(%esp)
 848e8d1:	e8 cc c6 1d 00       	call   866afa2 <_ZN5CUser16master_new_skillER14stBuySkillInfob>
 848e8d6:	b8 01 00 00 00       	mov    $0x1,%eax
 848e8db:	83 c4 44             	add    $0x44,%esp
 848e8de:	5b                   	pop    %ebx
 848e8df:	5d                   	pop    %ebp
 848e8e0:	c3                   	ret
 848e8e1:	90                   	nop

```

```c
// CEventCharacterHandler::_MasterNewSkill @ 0x848e7d6

/* CEventCharacterHandler::_MasterNewSkill(CUser*, int, int) */

undefined4 __thiscall
CEventCharacterHandler::_MasterNewSkill
          (CEventCharacterHandler *this,CUser *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  CSkill *this_00;
  undefined4 uVar3;
  SkillSlot *pSVar4;
  
  iVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  iVar2 = G_CDataManager();
  this_00 = (CSkill *)CDataManager::find_skill(iVar2,iVar1);
  if (this_00 == (CSkill *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CSkill::get_group(this_00);
    pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
    iVar1 = SkillSlot::get_skillslot_no(pSVar4,param_2,uVar3,0,1);
    pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
    iVar2 = SkillSlot::get_skillslot_buf(pSVar4,0);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else if ((char)((char)param_3 - *(char *)(iVar1 * 2 + iVar2 + 1)) < '\x01') {
      uVar3 = 0;
    }
    else {
      CUser::master_new_skill((stBuySkillInfo *)param_1,true);
      uVar3 = 1;
    }
  }
  return uVar3;
}

```

---

## _SetClearedQuest

```asm
// === 0848e652 CEventCharacterHandler::_SetClearedQuest  [0x0848e652-0x848e7d5] ===
 848e652:	55                   	push   %ebp
 848e653:	89 e5                	mov    %esp,%ebp
 848e655:	83 ec 18             	sub    $0x18,%esp
 848e658:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e65b:	89 04 24             	mov    %eax,(%esp)
 848e65e:	e8 bd f8 c6 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 848e663:	85 c0                	test   %eax,%eax
 848e665:	0f 94 c0             	sete   %al
 848e668:	84 c0                	test   %al,%al
 848e66a:	74 23                	je     848e68f <_ZN22CEventCharacterHandler16_SetClearedQuestEP5CUser+0x3d>
 848e66c:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e66f:	89 04 24             	mov    %eax,(%esp)
 848e672:	e8 e7 c3 cb ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 848e677:	83 c0 04             	add    $0x4,%eax
 848e67a:	c7 44 24 04 7f 03 00 	movl   $0x37f,0x4(%esp)
 848e681:	00 
 848e682:	89 04 24             	mov    %eax,(%esp)
 848e685:	e8 ee d3 bf ff       	call   808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>
 848e68a:	e9 45 01 00 00       	jmp    848e7d4 <_ZN22CEventCharacterHandler16_SetClearedQuestEP5CUser+0x182>
 848e68f:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e692:	89 04 24             	mov    %eax,(%esp)
 848e695:	e8 86 f8 c6 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 848e69a:	83 f8 01             	cmp    $0x1,%eax
 848e69d:	0f 94 c0             	sete   %al
 848e6a0:	84 c0                	test   %al,%al
 848e6a2:	74 23                	je     848e6c7 <_ZN22CEventCharacterHandler16_SetClearedQuestEP5CUser+0x75>
 848e6a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e6a7:	89 04 24             	mov    %eax,(%esp)
 848e6aa:	e8 af c3 cb ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 848e6af:	83 c0 04             	add    $0x4,%eax
 848e6b2:	c7 44 24 04 82 03 00 	movl   $0x382,0x4(%esp)
 848e6b9:	00 
 848e6ba:	89 04 24             	mov    %eax,(%esp)
 848e6bd:	e8 b6 d3 bf ff       	call   808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>
 848e6c2:	e9 0d 01 00 00       	jmp    848e7d4 <_ZN22CEventCharacterHandler16_SetClearedQuestEP5CUser+0x182>
 848e6c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e6ca:	89 04 24             	mov    %eax,(%esp)
 848e6cd:	e8 4e f8 c6 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 848e6d2:	83 f8 02             	cmp    $0x2,%eax
 848e6d5:	0f 94 c0             	sete   %al
 848e6d8:	84 c0                	test   %al,%al
 848e6da:	74 23                	je     848e6ff <_ZN22CEventCharacterHandler16_SetClearedQuestEP5CUser+0xad>
 848e6dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e6df:	89 04 24             	mov    %eax,(%esp)
 848e6e2:	e8 77 c3 cb ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 848e6e7:	83 c0 04             	add    $0x4,%eax
 848e6ea:	c7 44 24 04 80 03 00 	movl   $0x380,0x4(%esp)
 848e6f1:	00 
 848e6f2:	89 04 24             	mov    %eax,(%esp)
 848e6f5:	e8 7e d3 bf ff       	call   808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>
 848e6fa:	e9 d5 00 00 00       	jmp    848e7d4 <_ZN22CEventCharacterHandler16_SetClearedQuestEP5CUser+0x182>
 848e6ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e702:	89 04 24             	mov    %eax,(%esp)
 848e705:	e8 16 f8 c6 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 848e70a:	83 f8 03             	cmp    $0x3,%eax
 848e70d:	0f 94 c0             	sete   %al
 848e710:	84 c0                	test   %al,%al
 848e712:	74 23                	je     848e737 <_ZN22CEventCharacterHandler16_SetClearedQuestEP5CUser+0xe5>
 848e714:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e717:	89 04 24             	mov    %eax,(%esp)
 848e71a:	e8 3f c3 cb ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 848e71f:	83 c0 04             	add    $0x4,%eax
 848e722:	c7 44 24 04 83 03 00 	movl   $0x383,0x4(%esp)
 848e729:	00 
 848e72a:	89 04 24             	mov    %eax,(%esp)
 848e72d:	e8 46 d3 bf ff       	call   808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>
 848e732:	e9 9d 00 00 00       	jmp    848e7d4 <_ZN22CEventCharacterHandler16_SetClearedQuestEP5CUser+0x182>
 848e737:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e73a:	89 04 24             	mov    %eax,(%esp)
 848e73d:	e8 de f7 c6 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 848e742:	83 f8 04             	cmp    $0x4,%eax
 848e745:	0f 94 c0             	sete   %al
 848e748:	84 c0                	test   %al,%al
 848e74a:	74 20                	je     848e76c <_ZN22CEventCharacterHandler16_SetClearedQuestEP5CUser+0x11a>
 848e74c:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e74f:	89 04 24             	mov    %eax,(%esp)
 848e752:	e8 07 c3 cb ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 848e757:	83 c0 04             	add    $0x4,%eax
 848e75a:	c7 44 24 04 81 03 00 	movl   $0x381,0x4(%esp)
 848e761:	00 
 848e762:	89 04 24             	mov    %eax,(%esp)
 848e765:	e8 0e d3 bf ff       	call   808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>
 848e76a:	eb 68                	jmp    848e7d4 <_ZN22CEventCharacterHandler16_SetClearedQuestEP5CUser+0x182>
 848e76c:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e76f:	89 04 24             	mov    %eax,(%esp)
 848e772:	e8 a9 f7 c6 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 848e777:	83 f8 05             	cmp    $0x5,%eax
 848e77a:	0f 94 c0             	sete   %al
 848e77d:	84 c0                	test   %al,%al
 848e77f:	74 20                	je     848e7a1 <_ZN22CEventCharacterHandler16_SetClearedQuestEP5CUser+0x14f>
 848e781:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e784:	89 04 24             	mov    %eax,(%esp)
 848e787:	e8 d2 c2 cb ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 848e78c:	83 c0 04             	add    $0x4,%eax
 848e78f:	c7 44 24 04 f9 13 00 	movl   $0x13f9,0x4(%esp)
 848e796:	00 
 848e797:	89 04 24             	mov    %eax,(%esp)
 848e79a:	e8 d9 d2 bf ff       	call   808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>
 848e79f:	eb 33                	jmp    848e7d4 <_ZN22CEventCharacterHandler16_SetClearedQuestEP5CUser+0x182>
 848e7a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e7a4:	89 04 24             	mov    %eax,(%esp)
 848e7a7:	e8 74 f7 c6 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 848e7ac:	83 f8 06             	cmp    $0x6,%eax
 848e7af:	0f 94 c0             	sete   %al
 848e7b2:	84 c0                	test   %al,%al
 848e7b4:	74 1e                	je     848e7d4 <_ZN22CEventCharacterHandler16_SetClearedQuestEP5CUser+0x182>
 848e7b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e7b9:	89 04 24             	mov    %eax,(%esp)
 848e7bc:	e8 9d c2 cb ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 848e7c1:	83 c0 04             	add    $0x4,%eax
 848e7c4:	c7 44 24 04 84 03 00 	movl   $0x384,0x4(%esp)
 848e7cb:	00 
 848e7cc:	89 04 24             	mov    %eax,(%esp)
 848e7cf:	e8 a4 d2 bf ff       	call   808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>
 848e7d4:	c9                   	leave
 848e7d5:	c3                   	ret

```

```c
// CEventCharacterHandler::_SetClearedQuest @ 0x848e652

/* CEventCharacterHandler::_SetClearedQuest(CUser*) */

void __thiscall
CEventCharacterHandler::_SetClearedQuest(CEventCharacterHandler *this,CUser *param_1)

{
  int iVar1;
  
  iVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  if (iVar1 == 0) {
    iVar1 = CUser::getCurCharacQuestW(param_1);
    WongWork::CQuestClear::setClearedQuest((CQuestClear *)(iVar1 + 4),0x37f);
  }
  else {
    iVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    if (iVar1 == 1) {
      iVar1 = CUser::getCurCharacQuestW(param_1);
      WongWork::CQuestClear::setClearedQuest((CQuestClear *)(iVar1 + 4),0x382);
    }
    else {
      iVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      if (iVar1 == 2) {
        iVar1 = CUser::getCurCharacQuestW(param_1);
        WongWork::CQuestClear::setClearedQuest((CQuestClear *)(iVar1 + 4),0x380);
      }
      else {
        iVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
        if (iVar1 == 3) {
          iVar1 = CUser::getCurCharacQuestW(param_1);
          WongWork::CQuestClear::setClearedQuest((CQuestClear *)(iVar1 + 4),899);
        }
        else {
          iVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
          if (iVar1 == 4) {
            iVar1 = CUser::getCurCharacQuestW(param_1);
            WongWork::CQuestClear::setClearedQuest((CQuestClear *)(iVar1 + 4),0x381);
          }
          else {
            iVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
            if (iVar1 == 5) {
              iVar1 = CUser::getCurCharacQuestW(param_1);
              WongWork::CQuestClear::setClearedQuest((CQuestClear *)(iVar1 + 4),0x13f9);
            }
            else {
              iVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
              if (iVar1 == 6) {
                iVar1 = CUser::getCurCharacQuestW(param_1);
                WongWork::CQuestClear::setClearedQuest((CQuestClear *)(iVar1 + 4),900);
              }
            }
          }
        }
      }
    }
  }
  return;
}

```

---

## _SetGrowType

```asm
// === 0848ea50 CEventCharacterHandler::_SetGrowType  [0x0848ea50-0x848eadd] ===
 848ea50:	55                   	push   %ebp
 848ea51:	89 e5                	mov    %esp,%ebp
 848ea53:	83 ec 28             	sub    $0x28,%esp
 848ea56:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 848ea5d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 848ea64:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 848ea68:	75 08                	jne    848ea72 <_ZN22CEventCharacterHandler12_SetGrowTypeEP5CUserii+0x22>
 848ea6a:	8b 45 14             	mov    0x14(%ebp),%eax
 848ea6d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 848ea70:	eb 41                	jmp    848eab3 <_ZN22CEventCharacterHandler12_SetGrowTypeEP5CUserii+0x63>
 848ea72:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 848ea76:	75 34                	jne    848eaac <_ZN22CEventCharacterHandler12_SetGrowTypeEP5CUserii+0x5c>
 848ea78:	8b 45 0c             	mov    0xc(%ebp),%eax
 848ea7b:	89 04 24             	mov    %eax,(%esp)
 848ea7e:	e8 11 22 c8 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 848ea83:	84 c0                	test   %al,%al
 848ea85:	0f 94 c0             	sete   %al
 848ea88:	84 c0                	test   %al,%al
 848ea8a:	74 07                	je     848ea93 <_ZN22CEventCharacterHandler12_SetGrowTypeEP5CUserii+0x43>
 848ea8c:	b8 00 00 00 00       	mov    $0x0,%eax
 848ea91:	eb 49                	jmp    848eadc <_ZN22CEventCharacterHandler12_SetGrowTypeEP5CUserii+0x8c>
 848ea93:	8b 45 0c             	mov    0xc(%ebp),%eax
 848ea96:	89 04 24             	mov    %eax,(%esp)
 848ea99:	e8 f6 21 c8 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 848ea9e:	0f be c0             	movsbl %al,%eax
 848eaa1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 848eaa4:	8b 45 14             	mov    0x14(%ebp),%eax
 848eaa7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 848eaaa:	eb 07                	jmp    848eab3 <_ZN22CEventCharacterHandler12_SetGrowTypeEP5CUserii+0x63>
 848eaac:	b8 00 00 00 00       	mov    $0x0,%eax
 848eab1:	eb 29                	jmp    848eadc <_ZN22CEventCharacterHandler12_SetGrowTypeEP5CUserii+0x8c>
 848eab3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 848eab6:	89 44 24 08          	mov    %eax,0x8(%esp)
 848eaba:	8b 45 f0             	mov    -0x10(%ebp),%eax
 848eabd:	89 44 24 04          	mov    %eax,0x4(%esp)
 848eac1:	8b 45 0c             	mov    0xc(%ebp),%eax
 848eac4:	89 04 24             	mov    %eax,(%esp)
 848eac7:	e8 7c c5 1e 00       	call   867b048 <_ZN5CUser17ChangeGrowType_GMEii>
 848eacc:	84 c0                	test   %al,%al
 848eace:	74 07                	je     848ead7 <_ZN22CEventCharacterHandler12_SetGrowTypeEP5CUserii+0x87>
 848ead0:	b8 01 00 00 00       	mov    $0x1,%eax
 848ead5:	eb 05                	jmp    848eadc <_ZN22CEventCharacterHandler12_SetGrowTypeEP5CUserii+0x8c>
 848ead7:	b8 00 00 00 00       	mov    $0x0,%eax
 848eadc:	c9                   	leave
 848eadd:	c3                   	ret

```

```c
// CEventCharacterHandler::_SetGrowType @ 0x848ea50

/* CEventCharacterHandler::_SetGrowType(CUser*, int, int) */

bool __thiscall
CEventCharacterHandler::_SetGrowType
          (CEventCharacterHandler *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  int local_14;
  int local_10;
  
  local_10 = 0;
  if (param_2 == 1) {
    local_14 = param_3;
  }
  else {
    if (param_2 != 2) {
      return false;
    }
    cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
    if (cVar1 == '\0') {
      return false;
    }
    cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
    local_14 = (int)cVar1;
    local_10 = param_3;
  }
  cVar1 = CUser::ChangeGrowType_GM(param_1,local_14,local_10);
  return cVar1 != '\0';
}

```

---

## _SetLevel

```asm
// === 0848eade CEventCharacterHandler::_SetLevel  [0x0848eade-0x848ebd5] ===
 848eade:	55                   	push   %ebp
 848eadf:	89 e5                	mov    %esp,%ebp
 848eae1:	83 ec 38             	sub    $0x38,%esp
 848eae4:	83 7d 10 46          	cmpl   $0x46,0x10(%ebp)
 848eae8:	7e 0a                	jle    848eaf4 <_ZN22CEventCharacterHandler9_SetLevelEP5CUseri+0x16>
 848eaea:	b8 00 00 00 00       	mov    $0x0,%eax
 848eaef:	e9 e0 00 00 00       	jmp    848ebd4 <_ZN22CEventCharacterHandler9_SetLevelEP5CUseri+0xf6>
 848eaf4:	c6 45 eb 01          	movb   $0x1,-0x15(%ebp)
 848eaf8:	8b 45 0c             	mov    0xc(%ebp),%eax
 848eafb:	89 04 24             	mov    %eax,(%esp)
 848eafe:	e8 b5 b7 c4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 848eb03:	8b 55 10             	mov    0x10(%ebp),%edx
 848eb06:	89 d1                	mov    %edx,%ecx
 848eb08:	29 c1                	sub    %eax,%ecx
 848eb0a:	89 c8                	mov    %ecx,%eax
 848eb0c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 848eb0f:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 848eb13:	75 09                	jne    848eb1e <_ZN22CEventCharacterHandler9_SetLevelEP5CUseri+0x40>
 848eb15:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 848eb19:	e9 b2 00 00 00       	jmp    848ebd0 <_ZN22CEventCharacterHandler9_SetLevelEP5CUseri+0xf2>
 848eb1e:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 848eb22:	7e 57                	jle    848eb7b <_ZN22CEventCharacterHandler9_SetLevelEP5CUseri+0x9d>
 848eb24:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 848eb2b:	eb 3f                	jmp    848eb6c <_ZN22CEventCharacterHandler9_SetLevelEP5CUseri+0x8e>
 848eb2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 848eb30:	89 04 24             	mov    %eax,(%esp)
 848eb33:	e8 80 b7 c4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 848eb38:	83 c0 01             	add    $0x1,%eax
 848eb3b:	89 45 d8             	mov    %eax,-0x28(%ebp)
 848eb3e:	c7 45 dc 46 00 00 00 	movl   $0x46,-0x24(%ebp)
 848eb45:	8d 45 d8             	lea    -0x28(%ebp),%eax
 848eb48:	89 44 24 04          	mov    %eax,0x4(%esp)
 848eb4c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 848eb4f:	89 04 24             	mov    %eax,(%esp)
 848eb52:	e8 b7 0d c5 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 848eb57:	8b 00                	mov    (%eax),%eax
 848eb59:	89 44 24 04          	mov    %eax,0x4(%esp)
 848eb5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 848eb60:	89 04 24             	mov    %eax,(%esp)
 848eb63:	e8 f4 bd 1e 00       	call   867a95c <_ZN5CUser14SetCharacLevelEi>
 848eb68:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 848eb6c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 848eb6f:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 848eb72:	0f 9c c0             	setl   %al
 848eb75:	84 c0                	test   %al,%al
 848eb77:	75 b4                	jne    848eb2d <_ZN22CEventCharacterHandler9_SetLevelEP5CUseri+0x4f>
 848eb79:	eb 55                	jmp    848ebd0 <_ZN22CEventCharacterHandler9_SetLevelEP5CUseri+0xf2>
 848eb7b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 848eb82:	eb 3f                	jmp    848ebc3 <_ZN22CEventCharacterHandler9_SetLevelEP5CUseri+0xe5>
 848eb84:	8b 45 0c             	mov    0xc(%ebp),%eax
 848eb87:	89 04 24             	mov    %eax,(%esp)
 848eb8a:	e8 29 b7 c4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 848eb8f:	83 e8 01             	sub    $0x1,%eax
 848eb92:	89 45 e0             	mov    %eax,-0x20(%ebp)
 848eb95:	c7 45 e4 46 00 00 00 	movl   $0x46,-0x1c(%ebp)
 848eb9c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 848eb9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 848eba3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 848eba6:	89 04 24             	mov    %eax,(%esp)
 848eba9:	e8 60 0d c5 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 848ebae:	8b 00                	mov    (%eax),%eax
 848ebb0:	89 44 24 04          	mov    %eax,0x4(%esp)
 848ebb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 848ebb7:	89 04 24             	mov    %eax,(%esp)
 848ebba:	e8 9d bd 1e 00       	call   867a95c <_ZN5CUser14SetCharacLevelEi>
 848ebbf:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
 848ebc3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 848ebc6:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 848ebc9:	0f 9f c0             	setg   %al
 848ebcc:	84 c0                	test   %al,%al
 848ebce:	75 b4                	jne    848eb84 <_ZN22CEventCharacterHandler9_SetLevelEP5CUseri+0xa6>
 848ebd0:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 848ebd4:	c9                   	leave
 848ebd5:	c3                   	ret

```

```c
// CEventCharacterHandler::_SetLevel @ 0x848eade

/* CEventCharacterHandler::_SetLevel(CUser*, int) */

undefined1 __thiscall
CEventCharacterHandler::_SetLevel(CEventCharacterHandler *this,CUser *param_1,int param_2)

{
  int *piVar1;
  int local_2c [3];
  int local_20;
  undefined1 local_19;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_2 < 0x47) {
    local_19 = 1;
    local_18 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    local_18 = param_2 - local_18;
    if (local_18 == 0) {
      local_19 = 0;
    }
    else if (local_18 < 1) {
      for (local_10 = 0; local_18 < local_10; local_10 = local_10 + -1) {
        local_2c[2] = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        local_2c[2] = local_2c[2] + -1;
        local_20 = 0x46;
        piVar1 = std::min<int>(&local_20,local_2c + 2);
        CUser::SetCharacLevel(param_1,*piVar1);
      }
    }
    else {
      for (local_14 = 0; local_14 < local_18; local_14 = local_14 + 1) {
        local_2c[0] = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        local_2c[0] = local_2c[0] + 1;
        local_2c[1] = 0x46;
        piVar1 = std::min<int>(local_2c + 1,local_2c);
        CUser::SetCharacLevel(param_1,*piVar1);
      }
    }
  }
  else {
    local_19 = 0;
  }
  return local_19;
}

```

---

## _UpdateEventCharacInfo

```asm
// === 0848e636 CEventCharacterHandler::_UpdateEventCharacInfo  [0x0848e636-0x848e651] ===
 848e636:	55                   	push   %ebp
 848e637:	89 e5                	mov    %esp,%ebp
 848e639:	83 ec 18             	sub    $0x18,%esp
 848e63c:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e63f:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 848e646:	ff 
 848e647:	89 04 24             	mov    %eax,(%esp)
 848e64a:	e8 0b 07 00 00       	call   848ed5a <_ZN15CUserCharacInfo34setCurCharacEventCharacterGrowtypeEc>
 848e64f:	c9                   	leave
 848e650:	c3                   	ret
 848e651:	90                   	nop

```

```c
// CEventCharacterHandler::_UpdateEventCharacInfo @ 0x848e636

/* CEventCharacterHandler::_UpdateEventCharacInfo(CUser*) */

void __thiscall
CEventCharacterHandler::_UpdateEventCharacInfo(CEventCharacterHandler *this,CUser *param_1)

{
  CUserCharacInfo::setCurCharacEventCharacterGrowtype((CUserCharacInfo *)param_1,-1);
  return;
}

```

---

## _checkMakeCommand

```asm
// === 0848ebd6 CEventCharacterHandler::_checkMakeCommand  [0x0848ebd6-0x848ec71] ===
 848ebd6:	55                   	push   %ebp
 848ebd7:	89 e5                	mov    %esp,%ebp
 848ebd9:	83 ec 28             	sub    $0x28,%esp
 848ebdc:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 848ebe3:	e8 b6 d0 c3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 848ebe8:	3d 6f 5d 05 4b       	cmp    $0x4b055d6f,%eax
 848ebed:	7e 13                	jle    848ec02 <_ZN22CEventCharacterHandler17_checkMakeCommandEP5CUseriRi+0x2c>
 848ebef:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 848ebf6:	e8 a3 d0 c3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 848ebfb:	3d 50 bf 3b 4b       	cmp    $0x4b3bbf50,%eax
 848ec00:	7e 07                	jle    848ec09 <_ZN22CEventCharacterHandler17_checkMakeCommandEP5CUseriRi+0x33>
 848ec02:	b8 01 00 00 00       	mov    $0x1,%eax
 848ec07:	eb 05                	jmp    848ec0e <_ZN22CEventCharacterHandler17_checkMakeCommandEP5CUseriRi+0x38>
 848ec09:	b8 00 00 00 00       	mov    $0x0,%eax
 848ec0e:	84 c0                	test   %al,%al
 848ec10:	74 07                	je     848ec19 <_ZN22CEventCharacterHandler17_checkMakeCommandEP5CUseriRi+0x43>
 848ec12:	b8 00 00 00 00       	mov    $0x0,%eax
 848ec17:	eb 57                	jmp    848ec70 <_ZN22CEventCharacterHandler17_checkMakeCommandEP5CUseriRi+0x9a>
 848ec19:	83 7d 10 46          	cmpl   $0x46,0x10(%ebp)
 848ec1d:	7e 07                	jle    848ec26 <_ZN22CEventCharacterHandler17_checkMakeCommandEP5CUseriRi+0x50>
 848ec1f:	b8 00 00 00 00       	mov    $0x0,%eax
 848ec24:	eb 4a                	jmp    848ec70 <_ZN22CEventCharacterHandler17_checkMakeCommandEP5CUseriRi+0x9a>
 848ec26:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 848ec2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 848ec30:	89 04 24             	mov    %eax,(%esp)
 848ec33:	e8 80 7a e1 ff       	call   82a66b8 <_ZN15CUserCharacInfo34getCurCharacEventCharacterGrowtypeEv>
 848ec38:	0f be c0             	movsbl %al,%eax
 848ec3b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 848ec3e:	83 7d f4 06          	cmpl   $0x6,-0xc(%ebp)
 848ec42:	7e 07                	jle    848ec4b <_ZN22CEventCharacterHandler17_checkMakeCommandEP5CUseriRi+0x75>
 848ec44:	b8 00 00 00 00       	mov    $0x0,%eax
 848ec49:	eb 25                	jmp    848ec70 <_ZN22CEventCharacterHandler17_checkMakeCommandEP5CUseriRi+0x9a>
 848ec4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 848ec4e:	89 04 24             	mov    %eax,(%esp)
 848ec51:	e8 ca f2 c6 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 848ec56:	89 c2                	mov    %eax,%edx
 848ec58:	89 d0                	mov    %edx,%eax
 848ec5a:	c1 e0 02             	shl    $0x2,%eax
 848ec5d:	01 d0                	add    %edx,%eax
 848ec5f:	01 c0                	add    %eax,%eax
 848ec61:	89 c2                	mov    %eax,%edx
 848ec63:	03 55 f4             	add    -0xc(%ebp),%edx
 848ec66:	8b 45 14             	mov    0x14(%ebp),%eax
 848ec69:	89 10                	mov    %edx,(%eax)
 848ec6b:	b8 01 00 00 00       	mov    $0x1,%eax
 848ec70:	c9                   	leave
 848ec71:	c3                   	ret

```

```c
// CEventCharacterHandler::_checkMakeCommand @ 0x848ebd6

/* CEventCharacterHandler::_checkMakeCommand(CUser*, int, int&) */

undefined4 __thiscall
CEventCharacterHandler::_checkMakeCommand
          (CEventCharacterHandler *this,CUser *param_1,int param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (0x4b055d6f < iVar3) {
    iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (iVar3 < 0x4b3bbf51) {
      bVar1 = false;
      goto LAB_0848ec0e;
    }
  }
  bVar1 = true;
LAB_0848ec0e:
  if (bVar1) {
    uVar4 = 0;
  }
  else if (param_2 < 0x47) {
    cVar2 = CUserCharacInfo::getCurCharacEventCharacterGrowtype((CUserCharacInfo *)param_1);
    if (cVar2 < 7) {
      iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      *param_3 = iVar3 * 10 + (int)cVar2;
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## _makeEventCharacter

```asm
// === 0848e2a4 CEventCharacterHandler::_makeEventCharacter  [0x0848e2a4-0x848e635] ===
 848e2a4:	55                   	push   %ebp
 848e2a5:	89 e5                	mov    %esp,%ebp
 848e2a7:	57                   	push   %edi
 848e2a8:	56                   	push   %esi
 848e2a9:	53                   	push   %ebx
 848e2aa:	83 ec 6c             	sub    $0x6c,%esp
 848e2ad:	c7 45 cc ff ff ff ff 	movl   $0xffffffff,-0x34(%ebp)
 848e2b4:	8d 45 cc             	lea    -0x34(%ebp),%eax
 848e2b7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 848e2bb:	8b 45 10             	mov    0x10(%ebp),%eax
 848e2be:	89 44 24 08          	mov    %eax,0x8(%esp)
 848e2c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e2c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 848e2c9:	8b 45 08             	mov    0x8(%ebp),%eax
 848e2cc:	89 04 24             	mov    %eax,(%esp)
 848e2cf:	e8 02 09 00 00       	call   848ebd6 <_ZN22CEventCharacterHandler17_checkMakeCommandEP5CUseriRi>
 848e2d4:	83 f0 01             	xor    $0x1,%eax
 848e2d7:	84 c0                	test   %al,%al
 848e2d9:	74 0a                	je     848e2e5 <_ZN22CEventCharacterHandler19_makeEventCharacterEP5CUseri+0x41>
 848e2db:	bb 00 00 00 00       	mov    $0x0,%ebx
 848e2e0:	e9 44 03 00 00       	jmp    848e629 <_ZN22CEventCharacterHandler19_makeEventCharacterEP5CUseri+0x385>
 848e2e5:	8b 7d cc             	mov    -0x34(%ebp),%edi
 848e2e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e2eb:	89 04 24             	mov    %eax,(%esp)
 848e2ee:	e8 35 2d c7 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 848e2f3:	89 c6                	mov    %eax,%esi
 848e2f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e2f8:	89 04 24             	mov    %eax,(%esp)
 848e2fb:	e8 6e c0 c4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 848e300:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 848e307:	00 
 848e308:	89 04 24             	mov    %eax,(%esp)
 848e30b:	e8 3b ad c7 ff       	call   810904b <_Z14NumberToStringji>
 848e310:	89 c3                	mov    %eax,%ebx
 848e312:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 848e319:	00 
 848e31a:	c7 44 24 08 2b 00 00 	movl   $0x2b,0x8(%esp)
 848e321:	00 
 848e322:	c7 44 24 04 c0 74 c7 	movl   $0x8c774c0,0x4(%esp)
 848e329:	08 
 848e32a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 848e32d:	89 04 24             	mov    %eax,(%esp)
 848e330:	e8 e3 13 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 848e335:	8b 45 10             	mov    0x10(%ebp),%eax
 848e338:	89 44 24 14          	mov    %eax,0x14(%esp)
 848e33c:	89 7c 24 10          	mov    %edi,0x10(%esp)
 848e340:	89 74 24 0c          	mov    %esi,0xc(%esp)
 848e344:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 848e348:	c7 44 24 04 04 68 c7 	movl   $0x8c76804,0x4(%esp)
 848e34f:	08 
 848e350:	8d 45 d0             	lea    -0x30(%ebp),%eax
 848e353:	89 04 24             	mov    %eax,(%esp)
 848e356:	e8 2d 14 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 848e35b:	8d 45 b0             	lea    -0x50(%ebp),%eax
 848e35e:	89 04 24             	mov    %eax,(%esp)
 848e361:	e8 68 09 00 00       	call   848ecce <_ZN20STEventCharacterInfoC1Ev>
 848e366:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 848e369:	e8 2d de c3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 848e36e:	8d 90 6c a8 00 00    	lea    0xa86c(%eax),%edx
 848e374:	8d 45 b0             	lea    -0x50(%ebp),%eax
 848e377:	89 44 24 0c          	mov    %eax,0xc(%esp)
 848e37b:	8b 45 10             	mov    0x10(%ebp),%eax
 848e37e:	89 44 24 08          	mov    %eax,0x8(%esp)
 848e382:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 848e386:	89 14 24             	mov    %edx,(%esp)
 848e389:	e8 94 d3 4c 00       	call   895b722 <_ZNK29EventCharacterParameterScript21GetEventCharacterInfoEiiR20STEventCharacterInfo>
 848e38e:	83 f0 01             	xor    $0x1,%eax
 848e391:	84 c0                	test   %al,%al
 848e393:	74 0a                	je     848e39f <_ZN22CEventCharacterHandler19_makeEventCharacterEP5CUseri+0xfb>
 848e395:	bb 00 00 00 00       	mov    $0x0,%ebx
 848e39a:	e9 7f 02 00 00       	jmp    848e61e <_ZN22CEventCharacterHandler19_makeEventCharacterEP5CUseri+0x37a>
 848e39f:	83 7d 10 0e          	cmpl   $0xe,0x10(%ebp)
 848e3a3:	0f 8e 9b 00 00 00    	jle    848e444 <_ZN22CEventCharacterHandler19_makeEventCharacterEP5CUseri+0x1a0>
 848e3a9:	c7 44 24 08 0f 00 00 	movl   $0xf,0x8(%esp)
 848e3b0:	00 
 848e3b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e3b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 848e3b8:	8b 45 08             	mov    0x8(%ebp),%eax
 848e3bb:	89 04 24             	mov    %eax,(%esp)
 848e3be:	e8 1b 07 00 00       	call   848eade <_ZN22CEventCharacterHandler9_SetLevelEP5CUseri>
 848e3c3:	0f b6 45 b0          	movzbl -0x50(%ebp),%eax
 848e3c7:	84 c0                	test   %al,%al
 848e3c9:	74 25                	je     848e3f0 <_ZN22CEventCharacterHandler19_makeEventCharacterEP5CUseri+0x14c>
 848e3cb:	0f b6 45 b0          	movzbl -0x50(%ebp),%eax
 848e3cf:	0f b6 c0             	movzbl %al,%eax
 848e3d2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 848e3d6:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 848e3dd:	00 
 848e3de:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e3e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 848e3e5:	8b 45 08             	mov    0x8(%ebp),%eax
 848e3e8:	89 04 24             	mov    %eax,(%esp)
 848e3eb:	e8 60 06 00 00       	call   848ea50 <_ZN22CEventCharacterHandler12_SetGrowTypeEP5CUserii>
 848e3f0:	83 7d 10 0f          	cmpl   $0xf,0x10(%ebp)
 848e3f4:	7e 67                	jle    848e45d <_ZN22CEventCharacterHandler19_makeEventCharacterEP5CUseri+0x1b9>
 848e3f6:	8b 45 10             	mov    0x10(%ebp),%eax
 848e3f9:	89 44 24 08          	mov    %eax,0x8(%esp)
 848e3fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e400:	89 44 24 04          	mov    %eax,0x4(%esp)
 848e404:	8b 45 08             	mov    0x8(%ebp),%eax
 848e407:	89 04 24             	mov    %eax,(%esp)
 848e40a:	e8 cf 06 00 00       	call   848eade <_ZN22CEventCharacterHandler9_SetLevelEP5CUseri>
 848e40f:	83 7d 10 31          	cmpl   $0x31,0x10(%ebp)
 848e413:	7e 48                	jle    848e45d <_ZN22CEventCharacterHandler19_makeEventCharacterEP5CUseri+0x1b9>
 848e415:	0f b6 45 b1          	movzbl -0x4f(%ebp),%eax
 848e419:	84 c0                	test   %al,%al
 848e41b:	74 40                	je     848e45d <_ZN22CEventCharacterHandler19_makeEventCharacterEP5CUseri+0x1b9>
 848e41d:	0f b6 45 b1          	movzbl -0x4f(%ebp),%eax
 848e421:	0f b6 c0             	movzbl %al,%eax
 848e424:	89 44 24 0c          	mov    %eax,0xc(%esp)
 848e428:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 848e42f:	00 
 848e430:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e433:	89 44 24 04          	mov    %eax,0x4(%esp)
 848e437:	8b 45 08             	mov    0x8(%ebp),%eax
 848e43a:	89 04 24             	mov    %eax,(%esp)
 848e43d:	e8 0e 06 00 00       	call   848ea50 <_ZN22CEventCharacterHandler12_SetGrowTypeEP5CUserii>
 848e442:	eb 19                	jmp    848e45d <_ZN22CEventCharacterHandler19_makeEventCharacterEP5CUseri+0x1b9>
 848e444:	8b 45 10             	mov    0x10(%ebp),%eax
 848e447:	89 44 24 08          	mov    %eax,0x8(%esp)
 848e44b:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e44e:	89 44 24 04          	mov    %eax,0x4(%esp)
 848e452:	8b 45 08             	mov    0x8(%ebp),%eax
 848e455:	89 04 24             	mov    %eax,(%esp)
 848e458:	e8 81 06 00 00       	call   848eade <_ZN22CEventCharacterHandler9_SetLevelEP5CUseri>
 848e45d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 848e464:	00 
 848e465:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 848e46c:	00 
 848e46d:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e470:	89 04 24             	mov    %eax,(%esp)
 848e473:	e8 82 9c 1e 00       	call   86780fa <_ZN5CUser15AddDungeonClearEii>
 848e478:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 848e47f:	00 
 848e480:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 848e487:	00 
 848e488:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e48b:	89 04 24             	mov    %eax,(%esp)
 848e48e:	e8 67 9c 1e 00       	call   86780fa <_ZN5CUser15AddDungeonClearEii>
 848e493:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e496:	89 44 24 04          	mov    %eax,0x4(%esp)
 848e49a:	8b 45 08             	mov    0x8(%ebp),%eax
 848e49d:	89 04 24             	mov    %eax,(%esp)
 848e4a0:	e8 ad 01 00 00       	call   848e652 <_ZN22CEventCharacterHandler16_SetClearedQuestEP5CUser>
 848e4a5:	8d 45 ac             	lea    -0x54(%ebp),%eax
 848e4a8:	8d 55 b0             	lea    -0x50(%ebp),%edx
 848e4ab:	83 c2 04             	add    $0x4,%edx
 848e4ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 848e4b2:	89 04 24             	mov    %eax,(%esp)
 848e4b5:	e8 f8 f0 c4 ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 848e4ba:	83 ec 04             	sub    $0x4,%esp
 848e4bd:	eb 40                	jmp    848e4ff <_ZN22CEventCharacterHandler19_makeEventCharacterEP5CUseri+0x25b>
 848e4bf:	8d 45 ac             	lea    -0x54(%ebp),%eax
 848e4c2:	89 04 24             	mov    %eax,(%esp)
 848e4c5:	e8 32 f1 c4 ff       	call   80dd5fc <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 848e4ca:	8b 58 04             	mov    0x4(%eax),%ebx
 848e4cd:	8d 45 ac             	lea    -0x54(%ebp),%eax
 848e4d0:	89 04 24             	mov    %eax,(%esp)
 848e4d3:	e8 24 f1 c4 ff       	call   80dd5fc <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 848e4d8:	8b 00                	mov    (%eax),%eax
 848e4da:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 848e4de:	89 44 24 08          	mov    %eax,0x8(%esp)
 848e4e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e4e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 848e4e9:	8b 45 08             	mov    0x8(%ebp),%eax
 848e4ec:	89 04 24             	mov    %eax,(%esp)
 848e4ef:	e8 e2 02 00 00       	call   848e7d6 <_ZN22CEventCharacterHandler15_MasterNewSkillEP5CUserii>
 848e4f4:	8d 45 ac             	lea    -0x54(%ebp),%eax
 848e4f7:	89 04 24             	mov    %eax,(%esp)
 848e4fa:	e8 0b 2d c8 ff       	call   811120a <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 848e4ff:	8d 45 e0             	lea    -0x20(%ebp),%eax
 848e502:	8d 55 b0             	lea    -0x50(%ebp),%edx
 848e505:	83 c2 04             	add    $0x4,%edx
 848e508:	89 54 24 04          	mov    %edx,0x4(%esp)
 848e50c:	89 04 24             	mov    %eax,(%esp)
 848e50f:	e8 c2 f0 c4 ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 848e514:	83 ec 04             	sub    $0x4,%esp
 848e517:	8d 45 e0             	lea    -0x20(%ebp),%eax
 848e51a:	89 44 24 04          	mov    %eax,0x4(%esp)
 848e51e:	8d 45 ac             	lea    -0x54(%ebp),%eax
 848e521:	89 04 24             	mov    %eax,(%esp)
 848e524:	e8 b5 2c c8 ff       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 848e529:	84 c0                	test   %al,%al
 848e52b:	75 92                	jne    848e4bf <_ZN22CEventCharacterHandler19_makeEventCharacterEP5CUseri+0x21b>
 848e52d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 848e530:	8d 55 b0             	lea    -0x50(%ebp),%edx
 848e533:	83 c2 10             	add    $0x10,%edx
 848e536:	89 54 24 04          	mov    %edx,0x4(%esp)
 848e53a:	89 04 24             	mov    %eax,(%esp)
 848e53d:	e8 72 08 00 00       	call   848edb4 <_ZNSt6vectorI20STEventCharacterItemSaIS0_EE5beginEv>
 848e542:	83 ec 04             	sub    $0x4,%esp
 848e545:	eb 52                	jmp    848e599 <_ZN22CEventCharacterHandler19_makeEventCharacterEP5CUseri+0x2f5>
 848e547:	8d 45 a8             	lea    -0x58(%ebp),%eax
 848e54a:	89 04 24             	mov    %eax,(%esp)
 848e54d:	e8 ee 08 00 00       	call   848ee40 <_ZNK9__gnu_cxx17__normal_iteratorIP20STEventCharacterItemSt6vectorIS1_SaIS1_EEEdeEv>
 848e552:	8b 70 08             	mov    0x8(%eax),%esi
 848e555:	8d 45 a8             	lea    -0x58(%ebp),%eax
 848e558:	89 04 24             	mov    %eax,(%esp)
 848e55b:	e8 e0 08 00 00       	call   848ee40 <_ZNK9__gnu_cxx17__normal_iteratorIP20STEventCharacterItemSt6vectorIS1_SaIS1_EEEdeEv>
 848e560:	8b 58 04             	mov    0x4(%eax),%ebx
 848e563:	8d 45 a8             	lea    -0x58(%ebp),%eax
 848e566:	89 04 24             	mov    %eax,(%esp)
 848e569:	e8 d2 08 00 00       	call   848ee40 <_ZNK9__gnu_cxx17__normal_iteratorIP20STEventCharacterItemSt6vectorIS1_SaIS1_EEEdeEv>
 848e56e:	8b 00                	mov    (%eax),%eax
 848e570:	89 74 24 10          	mov    %esi,0x10(%esp)
 848e574:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 848e578:	89 44 24 08          	mov    %eax,0x8(%esp)
 848e57c:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e57f:	89 44 24 04          	mov    %eax,0x4(%esp)
 848e583:	8b 45 08             	mov    0x8(%ebp),%eax
 848e586:	89 04 24             	mov    %eax,(%esp)
 848e589:	e8 54 03 00 00       	call   848e8e2 <_ZN22CEventCharacterHandler8_AddItemEP5CUsermii>
 848e58e:	8d 45 a8             	lea    -0x58(%ebp),%eax
 848e591:	89 04 24             	mov    %eax,(%esp)
 848e594:	e8 91 08 00 00       	call   848ee2a <_ZN9__gnu_cxx17__normal_iteratorIP20STEventCharacterItemSt6vectorIS1_SaIS1_EEEppEv>
 848e599:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 848e59c:	8d 55 b0             	lea    -0x50(%ebp),%edx
 848e59f:	83 c2 10             	add    $0x10,%edx
 848e5a2:	89 54 24 04          	mov    %edx,0x4(%esp)
 848e5a6:	89 04 24             	mov    %eax,(%esp)
 848e5a9:	e8 2a 08 00 00       	call   848edd8 <_ZNSt6vectorI20STEventCharacterItemSaIS0_EE3endEv>
 848e5ae:	83 ec 04             	sub    $0x4,%esp
 848e5b1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 848e5b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 848e5b8:	8d 45 a8             	lea    -0x58(%ebp),%eax
 848e5bb:	89 04 24             	mov    %eax,(%esp)
 848e5be:	e8 3b 08 00 00       	call   848edfe <_ZN9__gnu_cxxneIP20STEventCharacterItemSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 848e5c3:	84 c0                	test   %al,%al
 848e5c5:	75 80                	jne    848e547 <_ZN22CEventCharacterHandler19_makeEventCharacterEP5CUseri+0x2a3>
 848e5c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e5ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 848e5ce:	8b 45 08             	mov    0x8(%ebp),%eax
 848e5d1:	89 04 24             	mov    %eax,(%esp)
 848e5d4:	e8 5d 00 00 00       	call   848e636 <_ZN22CEventCharacterHandler22_UpdateEventCharacInfoEP5CUser>
 848e5d9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 848e5e0:	00 
 848e5e1:	c7 44 24 08 25 00 00 	movl   $0x25,0x8(%esp)
 848e5e8:	00 
 848e5e9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 848e5f0:	00 
 848e5f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 848e5f4:	89 04 24             	mov    %eax,(%esp)
 848e5f7:	e8 60 d4 1e 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 848e5fc:	bb 01 00 00 00       	mov    $0x1,%ebx
 848e601:	eb 1b                	jmp    848e61e <_ZN22CEventCharacterHandler19_makeEventCharacterEP5CUseri+0x37a>
 848e603:	89 d3                	mov    %edx,%ebx
 848e605:	89 c6                	mov    %eax,%esi
 848e607:	8d 45 b0             	lea    -0x50(%ebp),%eax
 848e60a:	89 04 24             	mov    %eax,(%esp)
 848e60d:	e8 dc fd f3 ff       	call   83ce3ee <_ZN20STEventCharacterInfoD1Ev>
 848e612:	89 f0                	mov    %esi,%eax
 848e614:	89 da                	mov    %ebx,%edx
 848e616:	89 04 24             	mov    %eax,(%esp)
 848e619:	e8 32 51 65 00       	call   8ae3750 <_Unwind_Resume>
 848e61e:	8d 45 b0             	lea    -0x50(%ebp),%eax
 848e621:	89 04 24             	mov    %eax,(%esp)
 848e624:	e8 c5 fd f3 ff       	call   83ce3ee <_ZN20STEventCharacterInfoD1Ev>
 848e629:	89 d8                	mov    %ebx,%eax
 848e62b:	8d 65 f4             	lea    -0xc(%ebp),%esp
 848e62e:	83 c4 00             	add    $0x0,%esp
 848e631:	5b                   	pop    %ebx
 848e632:	5e                   	pop    %esi
 848e633:	5f                   	pop    %edi
 848e634:	5d                   	pop    %ebp
 848e635:	c3                   	ret

```

```c
// CEventCharacterHandler::_makeEventCharacter @ 0x848e2a4

/* CEventCharacterHandler::_makeEventCharacter(CUser*, int) */

undefined4 __thiscall
CEventCharacterHandler::_makeEventCharacter(CEventCharacterHandler *this,CUser *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  ulong *puVar8;
  undefined4 uVar9;
  __normal_iterator<STEventCharacterItem*,std::vector<STEventCharacterItem,std::allocator<STEventCharacterItem>>>
  local_5c [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_58 [4];
  STEventCharacterInfo local_54;
  byte local_53;
  int local_38;
  cMyTrace local_34 [16];
  __normal_iterator local_24 [4];
  __normal_iterator local_20 [16];
  
  local_38 = -1;
  cVar1 = _checkMakeCommand(this,param_1,param_2,&local_38);
  iVar7 = local_38;
  if (cVar1 == '\x01') {
    uVar9 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar3 = CUser::get_acc_id(param_1);
    uVar4 = NumberToString(uVar3,0);
    cMyTrace::cMyTrace(local_34,"bool CEventCharacterHandler::_makeEventCharacter(CUser*, int)",0x2b
                       ,0);
    cMyTrace::operator()
              (local_34,"%s:\'%s\' Make Event Character(%d) level(%d).",uVar4,uVar9,iVar7,param_2);
    STEventCharacterInfo::STEventCharacterInfo(&local_54);
    iVar7 = local_38;
                    /* try { // try from 0848e369 to 0848e5fb has its CatchHandler @ 0848e603 */
    iVar5 = G_CDataManager();
    cVar1 = EventCharacterParameterScript::GetEventCharacterInfo
                      ((EventCharacterParameterScript *)(iVar5 + 0xa86c),iVar7,param_2,&local_54);
    if (cVar1 == '\x01') {
      if (param_2 < 0xf) {
        _SetLevel(this,param_1,param_2);
      }
      else {
        _SetLevel(this,param_1,0xf);
        if (local_54 != (STEventCharacterInfo)0x0) {
          _SetGrowType(this,param_1,1,(uint)(byte)local_54);
        }
        if (0xf < param_2) {
          _SetLevel(this,param_1,param_2);
          if ((0x31 < param_2) && (local_53 != 0)) {
            _SetGrowType(this,param_1,2,(uint)local_53);
          }
        }
      }
      CUser::AddDungeonClear(param_1,2,1);
      CUser::AddDungeonClear(param_1,0x1a,1);
      _SetClearedQuest(this,param_1);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      while( true ) {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
        bVar2 = __gnu_cxx::operator!=(local_58,local_24);
        if (!bVar2) break;
        iVar7 = __gnu_cxx::
                __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator*(local_58);
        iVar7 = *(int *)(iVar7 + 4);
        piVar6 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator*(local_58);
        _MasterNewSkill(this,param_1,*piVar6,iVar7);
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_58);
      }
      std::vector<STEventCharacterItem,std::allocator<STEventCharacterItem>>::begin();
      while( true ) {
        std::vector<STEventCharacterItem,std::allocator<STEventCharacterItem>>::end();
        bVar2 = __gnu_cxx::operator!=(local_5c,local_20);
        if (!bVar2) break;
        iVar7 = __gnu_cxx::
                __normal_iterator<STEventCharacterItem*,std::vector<STEventCharacterItem,std::allocator<STEventCharacterItem>>>
                ::operator*(local_5c);
        iVar7 = *(int *)(iVar7 + 8);
        iVar5 = __gnu_cxx::
                __normal_iterator<STEventCharacterItem*,std::vector<STEventCharacterItem,std::allocator<STEventCharacterItem>>>
                ::operator*(local_5c);
        iVar5 = *(int *)(iVar5 + 4);
        puVar8 = (ulong *)__gnu_cxx::
                          __normal_iterator<STEventCharacterItem*,std::vector<STEventCharacterItem,std::allocator<STEventCharacterItem>>>
                          ::operator*(local_5c);
        _AddItem(this,param_1,*puVar8,iVar5,iVar7);
        __gnu_cxx::
        __normal_iterator<STEventCharacterItem*,std::vector<STEventCharacterItem,std::allocator<STEventCharacterItem>>>
        ::operator++(local_5c);
      }
      _UpdateEventCharacInfo(this,param_1);
      CUser::SendNotiPacket(param_1,1,0x25,0);
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    STEventCharacterInfo::~STEventCharacterInfo(&local_54);
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}

```

