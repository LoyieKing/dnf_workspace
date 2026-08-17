# game_master__CAddItemPollutionCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084aaa00 game_master::CAddItemPollutionCmd::execute  [0x084aaa00-0x84aacb7] ===
 84aaa00:	55                   	push   %ebp
 84aaa01:	89 e5                	mov    %esp,%ebp
 84aaa03:	56                   	push   %esi
 84aaa04:	53                   	push   %ebx
 84aaa05:	83 ec 60             	sub    $0x60,%esp
 84aaa08:	8b 45 08             	mov    0x8(%ebp),%eax
 84aaa0b:	8b 40 08             	mov    0x8(%eax),%eax
 84aaa0e:	83 f8 ff             	cmp    $0xffffffff,%eax
 84aaa11:	75 3b                	jne    84aaa4e <_ZN11game_master20CAddItemPollutionCmd7executeEv+0x4e>
 84aaa13:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84aaa1a:	e8 7f 12 c2 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84aaa1f:	8d b0 80 51 01 00    	lea    0x15180(%eax),%esi
 84aaa25:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84aaa2c:	e8 6d 12 c2 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84aaa31:	89 c3                	mov    %eax,%ebx
 84aaa33:	8b 45 08             	mov    0x8(%ebp),%eax
 84aaa36:	89 04 24             	mov    %eax,(%esp)
 84aaa39:	e8 7c 95 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aaa3e:	89 74 24 08          	mov    %esi,0x8(%esp)
 84aaa42:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84aaa46:	89 04 24             	mov    %eax,(%esp)
 84aaa49:	e8 b0 58 20 00       	call   86b02fe <_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll>
 84aaa4e:	c7 45 e4 64 00 00 00 	movl   $0x64,-0x1c(%ebp)
 84aaa55:	8b 45 08             	mov    0x8(%ebp),%eax
 84aaa58:	8b 58 08             	mov    0x8(%eax),%ebx
 84aaa5b:	e8 3b 17 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84aaa60:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84aaa64:	89 04 24             	mov    %eax,(%esp)
 84aaa67:	e8 c6 4f eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84aaa6c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84aaa6f:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 84aaa73:	74 32                	je     84aaaa7 <_ZN11game_master20CAddItemPollutionCmd7executeEv+0xa7>
 84aaa75:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84aaa78:	89 04 24             	mov    %eax,(%esp)
 84aaa7b:	e8 7a 68 c4 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 84aaa80:	84 c0                	test   %al,%al
 84aaa82:	74 23                	je     84aaaa7 <_ZN11game_master20CAddItemPollutionCmd7executeEv+0xa7>
 84aaa84:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84aaa87:	89 04 24             	mov    %eax,(%esp)
 84aaa8a:	e8 6d 1f d8 ff       	call   822c9fc <_ZNK14CStackableItem17getStackableLimitEv>
 84aaa8f:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 84aaa92:	0f 9c c0             	setl   %al
 84aaa95:	84 c0                	test   %al,%al
 84aaa97:	74 0e                	je     84aaaa7 <_ZN11game_master20CAddItemPollutionCmd7executeEv+0xa7>
 84aaa99:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84aaa9c:	89 04 24             	mov    %eax,(%esp)
 84aaa9f:	e8 58 1f d8 ff       	call   822c9fc <_ZNK14CStackableItem17getStackableLimitEv>
 84aaaa4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84aaaa7:	8b 45 08             	mov    0x8(%ebp),%eax
 84aaaaa:	8b 58 08             	mov    0x8(%eax),%ebx
 84aaaad:	8b 45 08             	mov    0x8(%ebp),%eax
 84aaab0:	89 04 24             	mov    %eax,(%esp)
 84aaab3:	e8 02 95 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aaab8:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84aaabf:	00 
 84aaac0:	8d 55 d0             	lea    -0x30(%ebp),%edx
 84aaac3:	89 54 24 10          	mov    %edx,0x10(%esp)
 84aaac7:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 84aaace:	00 
 84aaacf:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84aaad2:	89 54 24 08          	mov    %edx,0x8(%esp)
 84aaad6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84aaada:	89 04 24             	mov    %eax,(%esp)
 84aaadd:	e8 f2 0b 1d 00       	call   867b6d4 <_ZN5CUser7AddItemEii14eItemAddReasonR14ENUM_ITEMSPACEi>
 84aaae2:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84aaae5:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 84aaae9:	0f 88 bb 01 00 00    	js     84aacaa <_ZN11game_master20CAddItemPollutionCmd7executeEv+0x2aa>
 84aaaef:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84aaaf2:	89 04 24             	mov    %eax,(%esp)
 84aaaf5:	e8 4b cd c4 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 84aaafa:	89 c3                	mov    %eax,%ebx
 84aaafc:	8b 45 08             	mov    0x8(%ebp),%eax
 84aaaff:	89 04 24             	mov    %eax,(%esp)
 84aab02:	e8 b3 94 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aab07:	89 04 24             	mov    %eax,(%esp)
 84aab0a:	e8 7f f7 c2 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84aab0f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84aab12:	89 54 24 08          	mov    %edx,0x8(%esp)
 84aab16:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84aab1a:	89 04 24             	mov    %eax,(%esp)
 84aab1d:	e8 8c 17 05 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 84aab22:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84aab25:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84aab29:	0f 84 7e 01 00 00    	je     84aacad <_ZN11game_master20CAddItemPollutionCmd7executeEv+0x2ad>
 84aab2f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84aab32:	83 c0 11             	add    $0x11,%eax
 84aab35:	89 04 24             	mov    %eax,(%esp)
 84aab38:	e8 f5 5b ca ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 84aab3d:	84 c0                	test   %al,%al
 84aab3f:	0f 94 c0             	sete   %al
 84aab42:	84 c0                	test   %al,%al
 84aab44:	0f 84 ac 00 00 00    	je     84aabf6 <_ZN11game_master20CAddItemPollutionCmd7executeEv+0x1f6>
 84aab4a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84aab51:	e8 31 70 20 00       	call   86b1b87 <_Z12get_rand_inti>
 84aab56:	83 c0 01             	add    $0x1,%eax
 84aab59:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84aab5c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84aab60:	0f 8e 90 00 00 00    	jle    84aabf6 <_ZN11game_master20CAddItemPollutionCmd7executeEv+0x1f6>
 84aab66:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 84aab6a:	0f 8f 86 00 00 00    	jg     84aabf6 <_ZN11game_master20CAddItemPollutionCmd7executeEv+0x1f6>
 84aab70:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84aab73:	89 04 24             	mov    %eax,(%esp)
 84aab76:	e8 2b 03 d8 ff       	call   822aea6 <_ZN23stInvestAmplifyOption_tC1Ev>
 84aab7b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84aab7e:	89 45 c8             	mov    %eax,-0x38(%ebp)
 84aab81:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 84aab85:	74 6f                	je     84aabf6 <_ZN11game_master20CAddItemPollutionCmd7executeEv+0x1f6>
 84aab87:	a1 e8 f7 41 09       	mov    0x941f7e8,%eax
 84aab8c:	8d 55 c8             	lea    -0x38(%ebp),%edx
 84aab8f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84aab93:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84aab96:	89 54 24 08          	mov    %edx,0x8(%esp)
 84aab9a:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84aab9d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84aaba1:	89 04 24             	mov    %eax,(%esp)
 84aaba4:	e8 87 9f d8 ff       	call   8234b30 <_ZNK14CItemAmplifier19investAmplifyOptionEPK5CItemR10Inven_ItemRK23stInvestAmplifyOption_t>
 84aaba9:	c6 45 c7 00          	movb   $0x0,-0x39(%ebp)
 84aabad:	66 c7 45 c4 00 00    	movw   $0x0,-0x3c(%ebp)
 84aabb3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84aabb6:	8d 50 11             	lea    0x11(%eax),%edx
 84aabb9:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84aabbc:	89 44 24 08          	mov    %eax,0x8(%esp)
 84aabc0:	8d 45 c7             	lea    -0x39(%ebp),%eax
 84aabc3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aabc7:	89 14 24             	mov    %edx,(%esp)
 84aabca:	e8 c1 28 fa ff       	call   844d490 <_ZNK17stAmplifyOption_t9getValuesERhRt>
 84aabcf:	0f b7 45 c4          	movzwl -0x3c(%ebp),%eax
 84aabd3:	0f b7 d0             	movzwl %ax,%edx
 84aabd6:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 84aabda:	83 c8 80             	or     $0xffffff80,%eax
 84aabdd:	0f b6 c0             	movzbl %al,%eax
 84aabe0:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 84aabe3:	83 c1 11             	add    $0x11,%ecx
 84aabe6:	89 54 24 08          	mov    %edx,0x8(%esp)
 84aabea:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aabee:	89 0c 24             	mov    %ecx,(%esp)
 84aabf1:	e8 ee 94 00 00       	call   84b40e4 <_ZN17stAmplifyOption_t6assignEht>
 84aabf6:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 84aabfa:	0f 88 b0 00 00 00    	js     84aacb0 <_ZN11game_master20CAddItemPollutionCmd7executeEv+0x2b0>
 84aac00:	8b 45 08             	mov    0x8(%ebp),%eax
 84aac03:	89 04 24             	mov    %eax,(%esp)
 84aac06:	e8 af 93 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aac0b:	89 04 24             	mov    %eax,(%esp)
 84aac0e:	e8 15 64 c5 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 84aac13:	89 c6                	mov    %eax,%esi
 84aac15:	8b 45 08             	mov    0x8(%ebp),%eax
 84aac18:	89 04 24             	mov    %eax,(%esp)
 84aac1b:	e8 9a 93 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aac20:	89 04 24             	mov    %eax,(%esp)
 84aac23:	e8 46 f7 c2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84aac28:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84aac2f:	00 
 84aac30:	89 04 24             	mov    %eax,(%esp)
 84aac33:	e8 13 e4 c5 ff       	call   810904b <_Z14NumberToStringji>
 84aac38:	89 c3                	mov    %eax,%ebx
 84aac3a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84aac41:	00 
 84aac42:	c7 44 24 08 b0 05 00 	movl   $0x5b0,0x8(%esp)
 84aac49:	00 
 84aac4a:	c7 44 24 04 c0 13 c8 	movl   $0x8c813c0,0x4(%esp)
 84aac51:	08 
 84aac52:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84aac55:	89 04 24             	mov    %eax,(%esp)
 84aac58:	e8 bb 4a 0a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84aac5d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84aac60:	89 44 24 10          	mov    %eax,0x10(%esp)
 84aac64:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84aac68:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84aac6c:	c7 44 24 04 3a fb c7 	movl   $0x8c7fb3a,0x4(%esp)
 84aac73:	08 
 84aac74:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84aac77:	89 04 24             	mov    %eax,(%esp)
 84aac7a:	e8 09 4b 0a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84aac7f:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 84aac82:	8b 45 08             	mov    0x8(%ebp),%eax
 84aac85:	89 04 24             	mov    %eax,(%esp)
 84aac88:	e8 2d 93 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aac8d:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84aac90:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84aac94:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84aac98:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84aac9f:	00 
 84aaca0:	89 04 24             	mov    %eax,(%esp)
 84aaca3:	e8 b2 19 1d 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 84aaca8:	eb 07                	jmp    84aacb1 <_ZN11game_master20CAddItemPollutionCmd7executeEv+0x2b1>
 84aacaa:	90                   	nop
 84aacab:	eb 04                	jmp    84aacb1 <_ZN11game_master20CAddItemPollutionCmd7executeEv+0x2b1>
 84aacad:	90                   	nop
 84aacae:	eb 01                	jmp    84aacb1 <_ZN11game_master20CAddItemPollutionCmd7executeEv+0x2b1>
 84aacb0:	90                   	nop
 84aacb1:	83 c4 60             	add    $0x60,%esp
 84aacb4:	5b                   	pop    %ebx
 84aacb5:	5e                   	pop    %esi
 84aacb6:	5d                   	pop    %ebp
 84aacb7:	c3                   	ret

```

```c
// game_master::CAddItemPollutionCmd::execute @ 0x84aaa00

/* game_master::CAddItemPollutionCmd::execute() */

void __thiscall game_master::CAddItemPollutionCmd::execute(CAddItemPollutionCmd *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  CUser *pCVar4;
  CDataManager *this_00;
  CUserCharacInfo *pCVar5;
  CInventory *this_01;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  ushort local_40;
  byte local_3d;
  int local_3c [2];
  undefined4 local_34;
  cMyTrace local_30 [16];
  int local_20;
  CStackableItem *local_1c;
  int local_18;
  Inven_Item *local_14;
  int local_10;
  
  if (*(int *)(this + 8) == -1) {
    iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    lVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    pCVar4 = (CUser *)CCommand::GetUser((CCommand *)this);
    WongWork::CHandlePremium::handleSetUserPCRoom(pCVar4,lVar3,iVar2 + 0x15180);
  }
  local_20 = 100;
  iVar2 = *(int *)(this + 8);
  this_00 = (CDataManager *)G_CDataManager();
  local_1c = (CStackableItem *)CDataManager::find_item(this_00,iVar2);
  if (((local_1c != (CStackableItem *)0x0) &&
      (cVar1 = CItem::is_stackable((CItem *)local_1c), cVar1 != '\0')) &&
     (iVar2 = CStackableItem::getStackableLimit(local_1c), iVar2 < local_20)) {
    local_20 = CStackableItem::getStackableLimit(local_1c);
  }
  uVar6 = *(undefined4 *)(this + 8);
  pCVar4 = (CUser *)CCommand::GetUser((CCommand *)this);
  local_18 = CUser::AddItem(pCVar4,uVar6,local_20,6,&local_34,0);
  if (-1 < local_18) {
    iVar2 = GetInvenTypeFromItemSpace(local_34);
    pCVar5 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
    this_01 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(pCVar5);
    local_14 = (Inven_Item *)CInventory::GetInvenRef(this_01,iVar2,local_18);
    if (local_14 != (Inven_Item *)0x0) {
      cVar1 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(local_14 + 0x11));
      if (cVar1 == '\0') {
        local_10 = get_rand_int(4);
        local_10 = local_10 + 1;
        if ((0 < local_10) && (local_10 < 5)) {
          stInvestAmplifyOption_t::stInvestAmplifyOption_t((stInvestAmplifyOption_t *)local_3c);
          local_3c[0] = local_10;
          if (local_1c != (CStackableItem *)0x0) {
            CItemAmplifier::investAmplifyOption
                      (GlobalData::s_itemAmplifier_,(CItem *)local_1c,local_14,
                       (stInvestAmplifyOption_t *)local_3c);
            local_3d = 0;
            local_40 = 0;
            stAmplifyOption_t::getValues((stAmplifyOption_t *)(local_14 + 0x11),&local_3d,&local_40)
            ;
            stAmplifyOption_t::assign
                      ((stAmplifyOption_t *)(local_14 + 0x11),local_3d | 0x80,local_40);
          }
        }
      }
      if (-1 < local_18) {
        pCVar5 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
        uVar6 = CUserCharacInfo::getCurCharacName(pCVar5);
        pCVar4 = (CUser *)CCommand::GetUser((CCommand *)this);
        uVar7 = CUser::get_acc_id(pCVar4);
        uVar8 = NumberToString(uVar7,0);
        cMyTrace::cMyTrace(local_30,"virtual void game_master::CAddItemPollutionCmd::execute()",
                           0x5b0,0);
        cMyTrace::operator()(local_30,"%s:\'%s\' GM Mode Add Item(%d).",uVar8,uVar6,local_18);
        pCVar4 = (CUser *)CCommand::GetUser((CCommand *)this);
        CUser::SendUpdateItemList(pCVar4,1,local_34,local_18);
      }
    }
  }
  return;
}

```

---

## parse

```asm
// === 084aa9c8 game_master::CAddItemPollutionCmd::parse  [0x084aa9c8-0x84aa9ff] ===
 84aa9c8:	55                   	push   %ebp
 84aa9c9:	89 e5                	mov    %esp,%ebp
 84aa9cb:	83 ec 18             	sub    $0x18,%esp
 84aa9ce:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa9d1:	8b 40 04             	mov    0x4(%eax),%eax
 84aa9d4:	83 c0 0c             	add    $0xc,%eax
 84aa9d7:	89 04 24             	mov    %eax,(%esp)
 84aa9da:	e8 89 46 df ff       	call   829f068 <_Z4trimRSs>
 84aa9df:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa9e2:	8b 40 04             	mov    0x4(%eax),%eax
 84aa9e5:	83 c0 0c             	add    $0xc,%eax
 84aa9e8:	89 04 24             	mov    %eax,(%esp)
 84aa9eb:	e8 00 bb 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84aa9f0:	89 04 24             	mov    %eax,(%esp)
 84aa9f3:	e8 f8 3c bd ff       	call   807e6f0 <atoi@plt>
 84aa9f8:	8b 55 08             	mov    0x8(%ebp),%edx
 84aa9fb:	89 42 08             	mov    %eax,0x8(%edx)
 84aa9fe:	c9                   	leave
 84aa9ff:	c3                   	ret

```

```c
// game_master::CAddItemPollutionCmd::parse @ 0x84aa9c8

/* game_master::CAddItemPollutionCmd::parse() */

void __thiscall game_master::CAddItemPollutionCmd::parse(CAddItemPollutionCmd *this)

{
  char *__nptr;
  int iVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  *(int *)(this + 8) = iVar1;
  return;
}

```

