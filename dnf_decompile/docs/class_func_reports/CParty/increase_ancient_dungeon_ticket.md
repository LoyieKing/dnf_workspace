# increase_ancient_dungeon_ticket

`_ZN6CParty31increase_ancient_dungeon_ticketEv`

`CParty::increase_ancient_dungeon_ticket()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859bc9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859bc9a  _ZN6CParty31increase_ancient_dungeon_ticketEv
#           CParty::increase_ancient_dungeon_ticket()
# range [0x0859bc9a, 0x0859bfe1]
0859bc9a +0x000:  push   %ebp
0859bc9b +0x001:  mov    %esp,%ebp
0859bc9d +0x003:  push   %esi
0859bc9e +0x004:  push   %ebx
0859bc9f +0x005:  sub    $0x1c0,%esp
0859bca5 +0x00b:  mov    0x8(%ebp),%eax
0859bca8 +0x00e:  mov    0xcac(%eax),%eax
0859bcae +0x014:  test   %eax,%eax
0859bcb0 +0x016:  je     0859bfd4 <+0x33a>
0859bcb6 +0x01c:  mov    0x8(%ebp),%eax
0859bcb9 +0x01f:  mov    0xcac(%eax),%eax
0859bcbf +0x025:  movzbl 0x89c(%eax),%eax
0859bcc6 +0x02c:  xor    $0x1,%eax
0859bcc9 +0x02f:  test   %al,%al
0859bccb +0x031:  jne    0859bfd7 <+0x33d>
0859bcd1 +0x037:  mov    0x8(%ebp),%eax
0859bcd4 +0x03a:  mov    0xcac(%eax),%eax
0859bcda +0x040:  mov    0x7f4(%eax),%eax
0859bce0 +0x046:  mov    %eax,-0x1c(%ebp)
0859bce3 +0x049:  mov    0x8(%ebp),%eax
0859bce6 +0x04c:  mov    0xcac(%eax),%eax
0859bcec +0x052:  mov    0x7f8(%eax),%eax
0859bcf2 +0x058:  mov    %eax,-0x18(%ebp)
0859bcf5 +0x05b:  mov    -0x1c(%ebp),%ebx
0859bcf8 +0x05e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0859bcfd +0x063:  mov    %ebx,0x4(%esp)
0859bd01 +0x067:  mov    %eax,(%esp)
0859bd04 +0x06a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0859bd09 +0x06f:  mov    %eax,-0x14(%ebp)
0859bd0c +0x072:  cmpl   $0x0,-0x14(%ebp)
0859bd10 +0x076:  je     0859bfd8 <+0x33e>
0859bd16 +0x07c:  lea    -0x6e(%ebp),%eax
0859bd19 +0x07f:  mov    %eax,(%esp)
0859bd1c +0x082:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0859bd21 +0x087:  mov    -0x1c(%ebp),%eax
0859bd24 +0x08a:  mov    %eax,-0x6c(%ebp)
0859bd27 +0x08d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0859bd2c +0x092:  mov    0xc(%eax),%eax
0859bd2f +0x095:  mov    -0x18(%ebp),%edx
0859bd32 +0x098:  mov    %edx,0xc(%esp)
0859bd36 +0x09c:  lea    -0x6e(%ebp),%edx
0859bd39 +0x09f:  mov    %edx,0x8(%esp)
0859bd3d +0x0a3:  movl   $0x0,0x4(%esp)
0859bd45 +0x0ab:  mov    %eax,(%esp)
0859bd48 +0x0ae:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
0859bd4d +0x0b3:  mov    -0x6c(%ebp),%eax
0859bd50 +0x0b6:  test   %eax,%eax
0859bd52 +0x0b8:  jne    0859bd63 <+0xc9>
0859bd54 +0x0ba:  lea    -0x6e(%ebp),%eax
0859bd57 +0x0bd:  mov    %eax,(%esp)
0859bd5a +0x0c0:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0859bd5f +0x0c5:  test   %eax,%eax
0859bd61 +0x0c7:  je     0859bd6a <+0xd0>
0859bd63 +0x0c9:  mov    $0x1,%eax
0859bd68 +0x0ce:  jmp    0859bd6f <+0xd5>
0859bd6a +0x0d0:  mov    $0x0,%eax
0859bd6f +0x0d5:  test   %al,%al
0859bd71 +0x0d7:  je     0859bfd8 <+0x33e>
0859bd77 +0x0dd:  movl   $0x0,-0x10(%ebp)
0859bd7e +0x0e4:  jmp    0859bfc3 <+0x329>
0859bd83 +0x0e9:  mov    -0x10(%ebp),%eax
0859bd86 +0x0ec:  mov    %eax,0x4(%esp)
0859bd8a +0x0f0:  mov    0x8(%ebp),%eax
0859bd8d +0x0f3:  mov    %eax,(%esp)
0859bd90 +0x0f6:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
0859bd95 +0x0fb:  xor    $0x1,%eax
0859bd98 +0x0fe:  test   %al,%al
0859bd9a +0x100:  jne    0859bfbe <+0x324>
0859bda0 +0x106:  movl   $0xffffffff,-0xc(%ebp)
0859bda7 +0x10d:  mov    -0x10(%ebp),%edx
0859bdaa +0x110:  mov    0x8(%ebp),%ecx
0859bdad +0x113:  mov    %edx,%eax
0859bdaf +0x115:  add    %eax,%eax
0859bdb1 +0x117:  add    %edx,%eax
0859bdb3 +0x119:  shl    $0x3,%eax
0859bdb6 +0x11c:  lea    (%ecx,%eax,1),%eax
0859bdb9 +0x11f:  add    $0x78,%eax
0859bdbc +0x122:  mov    (%eax),%eax
0859bdbe +0x124:  mov    %eax,(%esp)
0859bdc1 +0x127:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0859bdc6 +0x12c:  movl   $0x1,0x4c(%esp)
0859bdce +0x134:  movl   $0x1,0x48(%esp)
0859bdd6 +0x13c:  movl   $0x38,0x44(%esp)
0859bdde +0x144:  mov    -0x6e(%ebp),%edx
0859bde1 +0x147:  mov    %edx,0x4(%esp)
0859bde5 +0x14b:  mov    -0x6a(%ebp),%edx
0859bde8 +0x14e:  mov    %edx,0x8(%esp)
0859bdec +0x152:  mov    -0x66(%ebp),%edx
0859bdef +0x155:  mov    %edx,0xc(%esp)
0859bdf3 +0x159:  mov    -0x62(%ebp),%edx
0859bdf6 +0x15c:  mov    %edx,0x10(%esp)
0859bdfa +0x160:  mov    -0x5e(%ebp),%edx
0859bdfd +0x163:  mov    %edx,0x14(%esp)
0859be01 +0x167:  mov    -0x5a(%ebp),%edx
0859be04 +0x16a:  mov    %edx,0x18(%esp)
0859be08 +0x16e:  mov    -0x56(%ebp),%edx
0859be0b +0x171:  mov    %edx,0x1c(%esp)
0859be0f +0x175:  mov    -0x52(%ebp),%edx
0859be12 +0x178:  mov    %edx,0x20(%esp)
0859be16 +0x17c:  mov    -0x4e(%ebp),%edx
0859be19 +0x17f:  mov    %edx,0x24(%esp)
0859be1d +0x183:  mov    -0x4a(%ebp),%edx
0859be20 +0x186:  mov    %edx,0x28(%esp)
0859be24 +0x18a:  mov    -0x46(%ebp),%edx
0859be27 +0x18d:  mov    %edx,0x2c(%esp)
0859be2b +0x191:  mov    -0x42(%ebp),%edx
0859be2e +0x194:  mov    %edx,0x30(%esp)
0859be32 +0x198:  mov    -0x3e(%ebp),%edx
0859be35 +0x19b:  mov    %edx,0x34(%esp)
0859be39 +0x19f:  mov    -0x3a(%ebp),%edx
0859be3c +0x1a2:  mov    %edx,0x38(%esp)
0859be40 +0x1a6:  mov    -0x36(%ebp),%edx
0859be43 +0x1a9:  mov    %edx,0x3c(%esp)
0859be47 +0x1ad:  movzbl -0x32(%ebp),%edx
0859be4b +0x1b1:  mov    %dl,0x40(%esp)
0859be4f +0x1b5:  mov    %eax,(%esp)
0859be52 +0x1b8:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0859be57 +0x1bd:  mov    %eax,-0xc(%ebp)
0859be5a +0x1c0:  mov    -0xc(%ebp),%eax
0859be5d +0x1c3:  shr    $0x1f,%eax
0859be60 +0x1c6:  test   %al,%al
0859be62 +0x1c8:  je     0859bf86 <+0x2ec>
0859be68 +0x1ce:  movl   $0x0,0xc(%esp)
0859be70 +0x1d6:  movl   $"game_server_msg_53",0x8(%esp)
0859be78 +0x1de:  movl   $0x4,0x4(%esp)
0859be80 +0x1e6:  movl   $&g_scriptStringManager_,(%esp)
0859be87 +0x1ed:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0859be8c +0x1f2:  movl   $0x14,0x8(%esp)
0859be94 +0x1fa:  mov    %eax,0x4(%esp)
0859be98 +0x1fe:  lea    -0x31(%ebp),%eax
0859be9b +0x201:  mov    %eax,(%esp)
0859be9e +0x204:  call   0807d8d0 <_init+0x1c8>
0859bea3 +0x209:  movl   $0x0,0xc(%esp)
0859beab +0x211:  movl   $"game_server_msg_154",0x8(%esp)
0859beb3 +0x219:  movl   $0x4,0x4(%esp)
0859bebb +0x221:  movl   $&g_scriptStringManager_,(%esp)
0859bec2 +0x228:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0859bec7 +0x22d:  movl   $0xff,0x8(%esp)
0859becf +0x235:  mov    %eax,0x4(%esp)
0859bed3 +0x239:  lea    -0x16e(%ebp),%eax
0859bed9 +0x23f:  mov    %eax,(%esp)
0859bedc +0x242:  call   0807d8d0 <_init+0x1c8>
0859bee1 +0x247:  mov    -0x10(%ebp),%edx
0859bee4 +0x24a:  mov    0x8(%ebp),%ecx
0859bee7 +0x24d:  mov    %edx,%eax
0859bee9 +0x24f:  add    %eax,%eax
0859beeb +0x251:  add    %edx,%eax
0859beed +0x253:  shl    $0x3,%eax
0859bef0 +0x256:  lea    (%ecx,%eax,1),%eax
0859bef3 +0x259:  add    $0x78,%eax
0859bef6 +0x25c:  mov    (%eax),%eax
0859bef8 +0x25e:  mov    %eax,(%esp)
0859befb +0x261:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0859bf00 +0x266:  mov    %eax,%ebx
0859bf02 +0x268:  lea    -0x16e(%ebp),%eax
0859bf08 +0x26e:  mov    %eax,(%esp)
0859bf0b +0x271:  call   0807e3b0 <_init+0xca8>
0859bf10 +0x276:  mov    %eax,%esi
0859bf12 +0x278:  mov    -0x10(%ebp),%edx
0859bf15 +0x27b:  mov    0x8(%ebp),%ecx
0859bf18 +0x27e:  mov    %edx,%eax
0859bf1a +0x280:  add    %eax,%eax
0859bf1c +0x282:  add    %edx,%eax
0859bf1e +0x284:  shl    $0x3,%eax
0859bf21 +0x287:  lea    (%ecx,%eax,1),%eax
0859bf24 +0x28a:  add    $0x78,%eax
0859bf27 +0x28d:  mov    (%eax),%eax
0859bf29 +0x28f:  mov    %eax,(%esp)
0859bf2c +0x292:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0859bf31 +0x297:  movl   $0x0,0x24(%esp)
0859bf39 +0x29f:  movl   $0x0,0x20(%esp)
0859bf41 +0x2a7:  mov    %ebx,0x1c(%esp)
0859bf45 +0x2ab:  movl   $0x0,0x18(%esp)
0859bf4d +0x2b3:  mov    %esi,0x14(%esp)
0859bf51 +0x2b7:  lea    -0x16e(%ebp),%edx
0859bf57 +0x2bd:  mov    %edx,0x10(%esp)
0859bf5b +0x2c1:  mov    %eax,0xc(%esp)
0859bf5f +0x2c5:  movl   $0x0,0x8(%esp)
0859bf67 +0x2cd:  lea    -0x6e(%ebp),%eax
0859bf6a +0x2d0:  mov    %eax,0x4(%esp)
0859bf6e +0x2d4:  lea    -0x31(%ebp),%eax
0859bf71 +0x2d7:  mov    %eax,(%esp)
0859bf74 +0x2da:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
0859bf79 +0x2df:  lea    -0x6e(%ebp),%eax
0859bf7c +0x2e2:  mov    %eax,(%esp)
0859bf7f +0x2e5:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0859bf84 +0x2ea:  jmp    0859bfbf <+0x325>
0859bf86 +0x2ec:  mov    -0x10(%ebp),%edx
0859bf89 +0x2ef:  mov    0x8(%ebp),%ecx
0859bf8c +0x2f2:  mov    %edx,%eax
0859bf8e +0x2f4:  add    %eax,%eax
0859bf90 +0x2f6:  add    %edx,%eax
0859bf92 +0x2f8:  shl    $0x3,%eax
0859bf95 +0x2fb:  lea    (%ecx,%eax,1),%eax
0859bf98 +0x2fe:  add    $0x78,%eax
0859bf9b +0x301:  mov    (%eax),%eax
0859bf9d +0x303:  mov    -0xc(%ebp),%edx
0859bfa0 +0x306:  mov    %edx,0xc(%esp)
0859bfa4 +0x30a:  movl   $0x0,0x8(%esp)
0859bfac +0x312:  movl   $0x1,0x4(%esp)
0859bfb4 +0x31a:  mov    %eax,(%esp)
0859bfb7 +0x31d:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0859bfbc +0x322:  jmp    0859bfbf <+0x325>
0859bfbe +0x324:  nop
0859bfbf +0x325:  addl   $0x1,-0x10(%ebp)
0859bfc3 +0x329:  cmpl   $0x3,-0x10(%ebp)
0859bfc7 +0x32d:  setle  %al
0859bfca +0x330:  test   %al,%al
0859bfcc +0x332:  jne    0859bd83 <+0xe9>
0859bfd2 +0x338:  jmp    0859bfd8 <+0x33e>
0859bfd4 +0x33a:  nop
0859bfd5 +0x33b:  jmp    0859bfd8 <+0x33e>
0859bfd7 +0x33d:  nop
0859bfd8 +0x33e:  add    $0x1c0,%esp
0859bfde +0x344:  pop    %ebx
0859bfdf +0x345:  pop    %esi
0859bfe0 +0x346:  pop    %ebp
0859bfe1 +0x347:  ret
```

## 反编译 C

```c
// CParty::increase_ancient_dungeon_ticket @ 0x859bc9a

/* CParty::increase_ancient_dungeon_ticket() */

void __thiscall CParty::increase_ancient_dungeon_ticket(CParty *this)

{
  bool bVar1;
  char cVar2;
  CDataManager *this_00;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  size_t sVar6;
  undefined4 uVar7;
  char local_172 [256];
  undefined2 local_72;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined4 local_6a;
  undefined4 local_66;
  undefined4 local_62;
  undefined4 local_5e;
  undefined4 local_5a;
  undefined4 local_56;
  undefined4 local_52;
  undefined4 local_4e;
  undefined4 local_4a;
  undefined4 local_46;
  undefined4 local_42;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined1 local_36;
  char local_35 [21];
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if ((*(int *)(this + 0xcac) != 0) && (*(char *)(*(int *)(this + 0xcac) + 0x89c) == '\x01')) {
    iVar3 = *(int *)(*(int *)(this + 0xcac) + 0x7f4);
    local_1c = *(undefined4 *)(*(int *)(this + 0xcac) + 0x7f8);
    local_20 = iVar3;
    this_00 = (CDataManager *)G_CDataManager();
    local_18 = CDataManager::find_item(this_00,iVar3);
    if (local_18 != 0) {
      Inven_Item::Inven_Item((Inven_Item *)&local_72);
      uStack_70 = (undefined2)local_20;
      uStack_6e = (undefined2)((uint)local_20 >> 0x10);
      iVar3 = G_CDataManager();
      CItemList::create_item(*(CItemList **)(iVar3 + 0xc),0,&local_72,local_1c);
      if ((CONCAT22(uStack_6e,uStack_70) == 0) &&
         (iVar3 = Inven_Item::get_add_info((Inven_Item *)&local_72), iVar3 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
          cVar2 = checkValidUser(this,local_14);
          if (cVar2 == '\x01') {
            local_10 = 0xffffffff;
            uVar4 = CUserCharacInfo::getCurCharacInvenW
                              (*(CUserCharacInfo **)(this + local_14 * 0x18 + 0x78));
            local_10 = CInventory::insertItemIntoInventory
                                 (uVar4,CONCAT22(uStack_70,local_72),CONCAT22(uStack_6c,uStack_6e),
                                  local_6a,local_66,local_62,local_5e,local_5a,local_56,local_52,
                                  local_4e,local_4a,local_46,local_42,local_3e,local_3a,local_36,
                                  0x38,1,1);
            if (local_10 < 0) {
              pcVar5 = (char *)RDARScriptStringManager::findString
                                         ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                          "game_server_msg_53",(bool *)0x0);
              strncpy(local_35,pcVar5,0x14);
              pcVar5 = (char *)RDARScriptStringManager::findString
                                         ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                          "game_server_msg_154",(bool *)0x0);
              strncpy(local_172,pcVar5,0xff);
              uVar4 = CUser::GetServerGroup(*(CUser **)(this + local_14 * 0x18 + 0x78));
              sVar6 = strlen(local_172);
              uVar7 = CUserCharacInfo::getCurCharacNo
                                (*(CUserCharacInfo **)(this + local_14 * 0x18 + 0x78));
              WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                        (local_35,&local_72,0,uVar7,local_172,sVar6,0,uVar4,0,0);
              Inven_Item::reset((Inven_Item *)&local_72);
            }
            else {
              CUser::SendUpdateItem(*(CUser **)(this + local_14 * 0x18 + 0x78),1,0,local_10);
            }
          }
        }
      }
    }
  }
  return;
}
```
