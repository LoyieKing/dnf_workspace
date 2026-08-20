# InsertItem

`_ZN25LevelupSupportEventManger10InsertItemEP5CUseriR10ENUM_ERROR`

`LevelupSupportEventManger::InsertItem(CUser*, int, ENUM_ERROR&)`

| 类 | 地址 |
|---|---|
| `LevelupSupportEventManger` | `0x081473cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081473cc  _ZN25LevelupSupportEventManger10InsertItemEP5CUseriR10ENUM_ERROR
#           LevelupSupportEventManger::InsertItem(CUser*, int, ENUM_ERROR&)
# range [0x081473cc, 0x08147723]
081473cc +0x000:  push   %ebp
081473cd +0x001:  mov    %esp,%ebp
081473cf +0x003:  push   %esi
081473d0 +0x004:  push   %ebx
081473d1 +0x005:  sub    $0xb0,%esp
081473d7 +0x00b:  mov    0xc(%ebp),%eax
081473da +0x00e:  mov    0x8(%ebp),%edx
081473dd +0x011:  add    $0x8d0e4,%edx
081473e3 +0x017:  mov    %eax,0x4(%esp)
081473e7 +0x01b:  mov    %edx,(%esp)
081473ea +0x01e:  call   08147d16 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x209>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x209
081473ef +0x023:  movw   $0x2,0x2(%eax)
081473f5 +0x029:  mov    0xc(%ebp),%eax
081473f8 +0x02c:  mov    0x8(%ebp),%edx
081473fb +0x02f:  add    $0x8d0e4,%edx
08147401 +0x035:  mov    %eax,0x4(%esp)
08147405 +0x039:  mov    %edx,(%esp)
08147408 +0x03c:  call   08147d16 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x209>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x209
0814740d +0x041:  movzwl (%eax),%eax
08147410 +0x044:  movzwl %ax,%ebx
08147413 +0x047:  call   08147d68 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x25b>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x25b
08147418 +0x04c:  mov    %ebx,0x4(%esp)
0814741c +0x050:  mov    %eax,(%esp)
0814741f +0x053:  call   08147724 <_ZN25LevelupSupportEventManger17GetItemInfoVectorEi>  ; LevelupSupportEventManger::GetItemInfoVector(int)
08147424 +0x058:  mov    %eax,-0x24(%ebp)
08147427 +0x05b:  cmpl   $0x0,-0x24(%ebp)
0814742b +0x05f:  jne    0814743b <+0x6f>
0814742d +0x061:  mov    0x10(%ebp),%eax
08147430 +0x064:  movl   $0x15,(%eax)
08147436 +0x06a:  jmp    0814771a <+0x34e>
0814743b +0x06f:  movl   $0x0,-0x20(%ebp)
08147442 +0x076:  mov    -0x24(%ebp),%eax
08147445 +0x079:  mov    %eax,(%esp)
08147448 +0x07c:  call   08147dfc <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x2ef>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x2ef
0814744d +0x081:  mov    %eax,-0x1c(%ebp)
08147450 +0x084:  jmp    081476a8 <+0x2dc>
08147455 +0x089:  mov    -0x20(%ebp),%eax
08147458 +0x08c:  mov    %eax,0x4(%esp)
0814745c +0x090:  mov    -0x24(%ebp),%eax
0814745f +0x093:  mov    %eax,(%esp)
08147462 +0x096:  call   08147e18 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x30b>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x30b
08147467 +0x09b:  mov    (%eax),%eax
08147469 +0x09d:  mov    %eax,%ebx
0814746b +0x09f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08147470 +0x0a4:  mov    %ebx,0x4(%esp)
08147474 +0x0a8:  mov    %eax,(%esp)
08147477 +0x0ab:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0814747c +0x0b0:  mov    %eax,-0x18(%ebp)
0814747f +0x0b3:  cmpl   $0x0,-0x18(%ebp)
08147483 +0x0b7:  jne    081474be <+0xf2>
08147485 +0x0b9:  mov    0x10(%ebp),%eax
08147488 +0x0bc:  movl   $0x15,(%eax)
0814748e +0x0c2:  mov    -0x20(%ebp),%eax
08147491 +0x0c5:  mov    %eax,0x4(%esp)
08147495 +0x0c9:  mov    -0x24(%ebp),%eax
08147498 +0x0cc:  mov    %eax,(%esp)
0814749b +0x0cf:  call   08147e18 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x30b>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x30b
081474a0 +0x0d4:  mov    (%eax),%eax
081474a2 +0x0d6:  mov    %eax,0x8(%esp)
081474a6 +0x0da:  mov    0x8(%ebp),%eax
081474a9 +0x0dd:  mov    %eax,0x4(%esp)
081474ad +0x0e1:  movl   $" LevelupSupportEventManger::InsertItem",(%esp)
081474b4 +0x0e8:  call   08197caf <_ZN4ARAD11PRINT_ERROR9find_itemEPcP5CUseri>  ; ARAD::PRINT_ERROR::find_item(char*, CUser*, int)
081474b9 +0x0ed:  jmp    0814771a <+0x34e>
081474be +0x0f2:  lea    -0x61(%ebp),%eax
081474c1 +0x0f5:  mov    %eax,(%esp)
081474c4 +0x0f8:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081474c9 +0x0fd:  mov    -0x18(%ebp),%eax
081474cc +0x100:  mov    %eax,(%esp)
081474cf +0x103:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
081474d4 +0x108:  mov    %eax,-0x5f(%ebp)
081474d7 +0x10b:  mov    -0x18(%ebp),%eax
081474da +0x10e:  mov    (%eax),%eax
081474dc +0x110:  add    $0x8,%eax
081474df +0x113:  mov    (%eax),%edx
081474e1 +0x115:  lea    -0x61(%ebp),%eax
081474e4 +0x118:  mov    %eax,0x4(%esp)
081474e8 +0x11c:  mov    -0x18(%ebp),%eax
081474eb +0x11f:  mov    %eax,(%esp)
081474ee +0x122:  call   *%edx
081474f0 +0x124:  mov    -0x20(%ebp),%eax
081474f3 +0x127:  mov    %eax,0x4(%esp)
081474f7 +0x12b:  mov    -0x24(%ebp),%eax
081474fa +0x12e:  mov    %eax,(%esp)
081474fd +0x131:  call   08147e18 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x30b>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x30b
08147502 +0x136:  movzwl 0x4(%eax),%eax
08147506 +0x13a:  cwtl
08147507 +0x13b:  mov    %eax,0x4(%esp)
0814750b +0x13f:  lea    -0x61(%ebp),%eax
0814750e +0x142:  mov    %eax,(%esp)
08147511 +0x145:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08147516 +0x14a:  mov    0x8(%ebp),%eax
08147519 +0x14d:  mov    %eax,(%esp)
0814751c +0x150:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08147521 +0x155:  movl   $0x1,0x4c(%esp)
08147529 +0x15d:  movl   $0x1,0x48(%esp)
08147531 +0x165:  movl   $0xd,0x44(%esp)
08147539 +0x16d:  mov    -0x61(%ebp),%edx
0814753c +0x170:  mov    %edx,0x4(%esp)
08147540 +0x174:  mov    -0x5d(%ebp),%edx
08147543 +0x177:  mov    %edx,0x8(%esp)
08147547 +0x17b:  mov    -0x59(%ebp),%edx
0814754a +0x17e:  mov    %edx,0xc(%esp)
0814754e +0x182:  mov    -0x55(%ebp),%edx
08147551 +0x185:  mov    %edx,0x10(%esp)
08147555 +0x189:  mov    -0x51(%ebp),%edx
08147558 +0x18c:  mov    %edx,0x14(%esp)
0814755c +0x190:  mov    -0x4d(%ebp),%edx
0814755f +0x193:  mov    %edx,0x18(%esp)
08147563 +0x197:  mov    -0x49(%ebp),%edx
08147566 +0x19a:  mov    %edx,0x1c(%esp)
0814756a +0x19e:  mov    -0x45(%ebp),%edx
0814756d +0x1a1:  mov    %edx,0x20(%esp)
08147571 +0x1a5:  mov    -0x41(%ebp),%edx
08147574 +0x1a8:  mov    %edx,0x24(%esp)
08147578 +0x1ac:  mov    -0x3d(%ebp),%edx
0814757b +0x1af:  mov    %edx,0x28(%esp)
0814757f +0x1b3:  mov    -0x39(%ebp),%edx
08147582 +0x1b6:  mov    %edx,0x2c(%esp)
08147586 +0x1ba:  mov    -0x35(%ebp),%edx
08147589 +0x1bd:  mov    %edx,0x30(%esp)
0814758d +0x1c1:  mov    -0x31(%ebp),%edx
08147590 +0x1c4:  mov    %edx,0x34(%esp)
08147594 +0x1c8:  mov    -0x2d(%ebp),%edx
08147597 +0x1cb:  mov    %edx,0x38(%esp)
0814759b +0x1cf:  mov    -0x29(%ebp),%edx
0814759e +0x1d2:  mov    %edx,0x3c(%esp)
081475a2 +0x1d6:  movzbl -0x25(%ebp),%edx
081475a6 +0x1da:  mov    %dl,0x40(%esp)
081475aa +0x1de:  mov    %eax,(%esp)
081475ad +0x1e1:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
081475b2 +0x1e6:  mov    %ax,-0x12(%ebp)
081475b6 +0x1ea:  movzwl -0x12(%ebp),%eax
081475ba +0x1ee:  not    %eax
081475bc +0x1f0:  shr    $0xf,%ax
081475c0 +0x1f4:  test   %al,%al
081475c2 +0x1f6:  je     081475ec <+0x220>
081475c4 +0x1f8:  movswl -0x12(%ebp),%eax
081475c8 +0x1fc:  mov    %eax,0xc(%esp)
081475cc +0x200:  movl   $0x0,0x8(%esp)
081475d4 +0x208:  movl   $0x1,0x4(%esp)
081475dc +0x210:  mov    0x8(%ebp),%eax
081475df +0x213:  mov    %eax,(%esp)
081475e2 +0x216:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081475e7 +0x21b:  jmp    081476a4 <+0x2d8>
081475ec +0x220:  movl   $0x0,0xc(%esp)
081475f4 +0x228:  movl   $"game_server_msg_241",0x8(%esp)
081475fc +0x230:  movl   $0x4,0x4(%esp)
08147604 +0x238:  movl   $&g_scriptStringManager_,(%esp)
0814760b +0x23f:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08147610 +0x244:  mov    %eax,-0x10(%ebp)
08147613 +0x247:  movl   $0x0,0xc(%esp)
0814761b +0x24f:  movl   $"game_server_msg_242",0x8(%esp)
08147623 +0x257:  movl   $0x4,0x4(%esp)
0814762b +0x25f:  movl   $&g_scriptStringManager_,(%esp)
08147632 +0x266:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08147637 +0x26b:  mov    %eax,-0xc(%ebp)
0814763a +0x26e:  mov    0x8(%ebp),%eax
0814763d +0x271:  mov    %eax,(%esp)
08147640 +0x274:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08147645 +0x279:  mov    %eax,%ebx
08147647 +0x27b:  mov    -0xc(%ebp),%eax
0814764a +0x27e:  mov    %eax,(%esp)
0814764d +0x281:  call   0807e3b0 <_init+0xca8>
08147652 +0x286:  mov    %eax,%esi
08147654 +0x288:  mov    0x8(%ebp),%eax
08147657 +0x28b:  mov    %eax,(%esp)
0814765a +0x28e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0814765f +0x293:  movl   $0x0,0x24(%esp)
08147667 +0x29b:  movl   $0x0,0x20(%esp)
0814766f +0x2a3:  mov    %ebx,0x1c(%esp)
08147673 +0x2a7:  movl   $0xf,0x18(%esp)
0814767b +0x2af:  mov    %esi,0x14(%esp)
0814767f +0x2b3:  mov    -0xc(%ebp),%edx
08147682 +0x2b6:  mov    %edx,0x10(%esp)
08147686 +0x2ba:  mov    %eax,0xc(%esp)
0814768a +0x2be:  movl   $0x0,0x8(%esp)
08147692 +0x2c6:  lea    -0x61(%ebp),%eax
08147695 +0x2c9:  mov    %eax,0x4(%esp)
08147699 +0x2cd:  mov    -0x10(%ebp),%eax
0814769c +0x2d0:  mov    %eax,(%esp)
0814769f +0x2d3:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
081476a4 +0x2d8:  addl   $0x1,-0x20(%ebp)
081476a8 +0x2dc:  mov    -0x20(%ebp),%eax
081476ab +0x2df:  cmp    -0x1c(%ebp),%eax
081476ae +0x2e2:  setb   %al
081476b1 +0x2e5:  test   %al,%al
081476b3 +0x2e7:  jne    08147455 <+0x89>
081476b9 +0x2ed:  mov    0xc(%ebp),%eax
081476bc +0x2f0:  mov    0x8(%ebp),%edx
081476bf +0x2f3:  add    $0x8d0e4,%edx
081476c5 +0x2f9:  mov    %eax,0x4(%esp)
081476c9 +0x2fd:  mov    %edx,(%esp)
081476cc +0x300:  call   08147d16 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x209>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x209
081476d1 +0x305:  movzwl (%eax),%eax
081476d4 +0x308:  movzwl %ax,%esi
081476d7 +0x30b:  mov    0x8(%ebp),%eax
081476da +0x30e:  mov    %eax,(%esp)
081476dd +0x311:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081476e2 +0x316:  mov    %eax,%ebx
081476e4 +0x318:  mov    0x8(%ebp),%eax
081476e7 +0x31b:  mov    %eax,(%esp)
081476ea +0x31e:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081476ef +0x323:  movl   $0x2,0xc(%esp)
081476f7 +0x32b:  mov    %esi,0x8(%esp)
081476fb +0x32f:  mov    %ebx,0x4(%esp)
081476ff +0x333:  mov    %eax,(%esp)
08147702 +0x336:  call   0844cc2e <_ZN26DB_SaveEventLevelupSupport11makeRequestEiiii>  ; DB_SaveEventLevelupSupport::makeRequest(int, int, int, int)
08147707 +0x33b:  movl   $0x0,0x4(%esp)
0814770f +0x343:  mov    0x8(%ebp),%eax
08147712 +0x346:  mov    %eax,(%esp)
08147715 +0x349:  call   0814701e <_ZN25LevelupSupportEventManger15SendCharacStateEP5CUseri>  ; LevelupSupportEventManger::SendCharacState(CUser*, int)
0814771a +0x34e:  add    $0xb0,%esp
08147720 +0x354:  pop    %ebx
08147721 +0x355:  pop    %esi
08147722 +0x356:  pop    %ebp
08147723 +0x357:  ret
```

## 反编译 C

```c
// LevelupSupportEventManger::InsertItem @ 0x81473cc

/* LevelupSupportEventManger::InsertItem(CUser*, int, ENUM_ERROR&) */

void LevelupSupportEventManger::InsertItem(CUser *param_1,int param_2,ENUM_ERROR *param_3)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  CDataManager *this;
  undefined4 uVar4;
  size_t sVar5;
  undefined4 uVar6;
  ushort *puVar7;
  int iVar8;
  undefined2 local_65;
  undefined2 uStack_63;
  undefined2 uStack_61;
  undefined2 uStack_5f;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined1 local_29;
  vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>> *local_28;
  uint local_24;
  uint local_20;
  CItem *local_1c;
  short local_16;
  undefined4 local_14;
  char *local_10;
  
  iVar2 = std::
          vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
          ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                        *)(param_1 + 0x8d0e4),param_2);
  *(undefined2 *)(iVar2 + 2) = 2;
  std::
  vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
  ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                *)(param_1 + 0x8d0e4),param_2);
  iVar2 = ARAD::Singleton<LevelupSupportEventManger>::Get();
  local_28 = (vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>
              *)GetItemInfoVector(iVar2);
  if (local_28 ==
      (vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>> *)0x0)
  {
    *(undefined4 *)param_3 = 0x15;
  }
  else {
    local_24 = 0;
    local_20 = std::
               vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>
               ::size(local_28);
    for (; local_24 < local_20; local_24 = local_24 + 1) {
      piVar3 = (int *)std::
                      vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>
                      ::at(local_28,local_24);
      iVar2 = *piVar3;
      this = (CDataManager *)G_CDataManager();
      local_1c = (CItem *)CDataManager::find_item(this,iVar2);
      if (local_1c == (CItem *)0x0) {
        *(undefined4 *)param_3 = 0x15;
        piVar3 = (int *)std::
                        vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>
                        ::at(local_28,local_24);
        ARAD::PRINT_ERROR::find_item(" LevelupSupportEventManger::InsertItem",param_1,*piVar3);
        return;
      }
      Inven_Item::Inven_Item((Inven_Item *)&local_65);
      uVar4 = CItem::get_index(local_1c);
      uStack_63 = (undefined2)uVar4;
      uStack_61 = (undefined2)((uint)uVar4 >> 0x10);
      (**(code **)(*(int *)local_1c + 8))(local_1c,&local_65);
      iVar2 = std::
              vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>
              ::at(local_28,local_24);
      Inven_Item::set_add_info((Inven_Item *)&local_65,(int)*(short *)(iVar2 + 4));
      uVar4 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_16 = CInventory::insertItemIntoInventory
                           (uVar4,CONCAT22(uStack_63,local_65),CONCAT22(uStack_5f,uStack_61),
                            local_5d,local_59,local_55,local_51,local_4d,local_49,local_45,local_41,
                            local_3d,local_39,local_35,local_31,local_2d,local_29,0xd,1,1);
      if (local_16 < 0) {
        local_14 = RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_241",(bool *)0x0);
        local_10 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "game_server_msg_242",(bool *)0x0);
        uVar4 = CUser::GetServerGroup(param_1);
        sVar5 = strlen(local_10);
        uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (local_14,&local_65,0,uVar6,local_10,sVar5,0xf,uVar4,0,0);
      }
      else {
        CUser::SendUpdateItem(param_1,1,0,(int)local_16);
      }
    }
    puVar7 = (ushort *)
             std::
             vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
             ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                           *)(param_1 + 0x8d0e4),param_2);
    uVar1 = *puVar7;
    iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    iVar8 = CUser::GetUID(param_1);
    DB_SaveEventLevelupSupport::makeRequest(iVar8,iVar2,(uint)uVar1,2);
    SendCharacState(param_1,0);
  }
  return;
}
```
