# _processCreature

`_ZN8WongWork9CCeraShop16_processCreatureEP5CUser10Inven_ItemRiS4_bii`

`WongWork::CCeraShop::_processCreature(CUser*, Inven_Item, int&, int&, bool, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08325d66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08325d66  _ZN8WongWork9CCeraShop16_processCreatureEP5CUser10Inven_ItemRiS4_bii
#           WongWork::CCeraShop::_processCreature(CUser*, Inven_Item, int&, int&, bool, int, int)
# range [0x08325d66, 0x08326035]
08325d66 +0x000:  push   %ebp
08325d67 +0x001:  mov    %esp,%ebp
08325d69 +0x003:  push   %ebx
08325d6a +0x004:  sub    $0xb4,%esp
08325d70 +0x00a:  mov    0x58(%ebp),%eax
08325d73 +0x00d:  mov    %al,-0x5c(%ebp)
08325d76 +0x010:  movl   $0xffffffff,-0x10(%ebp)
08325d7d +0x017:  movb   $0x1,-0x11(%ebp)
08325d81 +0x01b:  mov    0xc(%ebp),%eax
08325d84 +0x01e:  mov    %eax,(%esp)
08325d87 +0x021:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08325d8c +0x026:  mov    %eax,(%esp)
08325d8f +0x029:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
08325d94 +0x02e:  lea    -0x11(%ebp),%edx
08325d97 +0x031:  mov    %edx,0xc(%esp)
08325d9b +0x035:  lea    0x10(%ebp),%edx
08325d9e +0x038:  mov    %edx,0x8(%esp)
08325da2 +0x03c:  mov    0xc(%ebp),%edx
08325da5 +0x03f:  mov    %edx,0x4(%esp)
08325da9 +0x043:  mov    %eax,(%esp)
08325dac +0x046:  call   0833c240 <_ZN13user_creature12CCreatureMgr9CheckItemEP5CUserP10Inven_ItemRb>  ; user_creature::CCreatureMgr::CheckItem(CUser*, Inven_Item*, bool&)
08325db1 +0x04b:  xor    $0x1,%eax
08325db4 +0x04e:  test   %al,%al
08325db6 +0x050:  je     08325dc1 <+0x5b>
08325db8 +0x052:  mov    0x54(%ebp),%eax
08325dbb +0x055:  movl   $0x1,(%eax)
08325dc1 +0x05b:  movzbl -0x11(%ebp),%eax
08325dc5 +0x05f:  test   %al,%al
08325dc7 +0x061:  je     0832602e <+0x2c8>
08325dcd +0x067:  movzbl 0x11(%ebp),%eax
08325dd1 +0x06b:  cmp    $0x5,%al
08325dd3 +0x06d:  jne    08325e1c <+0xb6>
08325dd5 +0x06f:  lea    0x10(%ebp),%eax
08325dd8 +0x072:  mov    %eax,(%esp)
08325ddb +0x075:  call   08336eae <_ZN13user_creature22CCreatureItemConverter10SetEggItemEP10Inven_Item>  ; user_creature::CCreatureItemConverter::SetEggItem(Inven_Item*)
08325de0 +0x07a:  xor    $0x1,%eax
08325de3 +0x07d:  test   %al,%al
08325de5 +0x07f:  je     08325e1c <+0xb6>
08325de7 +0x081:  movl   $"History ERROR, CCreatureItemConverter::SetEggItem",0x10(%esp)
08325def +0x089:  movl   $0x171f,0xc(%esp)
08325df7 +0x091:  movl   $&_ZZN8WongWork9CCeraShop16_processCreatureEP5CUser10Inven_ItemRiS4_biiE19__PRETTY_FUNCTION__,0x8(%esp)
08325dff +0x099:  movl   $"CeraShop.cpp",0x4(%esp)
08325e07 +0x0a1:  movl   $0x1,(%esp)
08325e0e +0x0a8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08325e13 +0x0ad:  mov    0x54(%ebp),%eax
08325e16 +0x0b0:  movl   $0x1,(%eax)
08325e1c +0x0b6:  mov    0xc(%ebp),%eax
08325e1f +0x0b9:  mov    %eax,(%esp)
08325e22 +0x0bc:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08325e27 +0x0c1:  movl   $0x0,0x4c(%esp)
08325e2f +0x0c9:  movl   $0x1,0x48(%esp)
08325e37 +0x0d1:  movl   $0x19,0x44(%esp)
08325e3f +0x0d9:  mov    0x10(%ebp),%edx
08325e42 +0x0dc:  mov    %edx,0x4(%esp)
08325e46 +0x0e0:  mov    0x14(%ebp),%edx
08325e49 +0x0e3:  mov    %edx,0x8(%esp)
08325e4d +0x0e7:  mov    0x18(%ebp),%edx
08325e50 +0x0ea:  mov    %edx,0xc(%esp)
08325e54 +0x0ee:  mov    0x1c(%ebp),%edx
08325e57 +0x0f1:  mov    %edx,0x10(%esp)
08325e5b +0x0f5:  mov    0x20(%ebp),%edx
08325e5e +0x0f8:  mov    %edx,0x14(%esp)
08325e62 +0x0fc:  mov    0x24(%ebp),%edx
08325e65 +0x0ff:  mov    %edx,0x18(%esp)
08325e69 +0x103:  mov    0x28(%ebp),%edx
08325e6c +0x106:  mov    %edx,0x1c(%esp)
08325e70 +0x10a:  mov    0x2c(%ebp),%edx
08325e73 +0x10d:  mov    %edx,0x20(%esp)
08325e77 +0x111:  mov    0x30(%ebp),%edx
08325e7a +0x114:  mov    %edx,0x24(%esp)
08325e7e +0x118:  mov    0x34(%ebp),%edx
08325e81 +0x11b:  mov    %edx,0x28(%esp)
08325e85 +0x11f:  mov    0x38(%ebp),%edx
08325e88 +0x122:  mov    %edx,0x2c(%esp)
08325e8c +0x126:  mov    0x3c(%ebp),%edx
08325e8f +0x129:  mov    %edx,0x30(%esp)
08325e93 +0x12d:  mov    0x40(%ebp),%edx
08325e96 +0x130:  mov    %edx,0x34(%esp)
08325e9a +0x134:  mov    0x44(%ebp),%edx
08325e9d +0x137:  mov    %edx,0x38(%esp)
08325ea1 +0x13b:  mov    0x48(%ebp),%edx
08325ea4 +0x13e:  mov    %edx,0x3c(%esp)
08325ea8 +0x142:  movzbl 0x4c(%ebp),%edx
08325eac +0x146:  mov    %dl,0x40(%esp)
08325eb0 +0x14a:  mov    %eax,(%esp)
08325eb3 +0x14d:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08325eb8 +0x152:  mov    %eax,-0x10(%ebp)
08325ebb +0x155:  cmpl   $0x0,-0x10(%ebp)
08325ebf +0x159:  jns    08325f8c <+0x226>
08325ec5 +0x15f:  movl   $0x0,0xc(%esp)
08325ecd +0x167:  movl   $"game_server_msg_104",0x8(%esp)
08325ed5 +0x16f:  movl   $0x4,0x4(%esp)
08325edd +0x177:  movl   $&g_scriptStringManager_,(%esp)
08325ee4 +0x17e:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08325ee9 +0x183:  mov    %eax,-0xc(%ebp)
08325eec +0x186:  movzbl 0x11(%ebp),%eax
08325ef0 +0x18a:  cmp    $0x5,%al
08325ef2 +0x18c:  jne    08325f2f <+0x1c9>
08325ef4 +0x18e:  mov    -0xc(%ebp),%eax
08325ef7 +0x191:  mov    %eax,(%esp)
08325efa +0x194:  call   0807e3b0 <_init+0xca8>
08325eff +0x199:  mov    %eax,%ebx
08325f01 +0x19b:  mov    0xc(%ebp),%eax
08325f04 +0x19e:  mov    %eax,(%esp)
08325f07 +0x1a1:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08325f0c +0x1a6:  mov    %ebx,0x10(%esp)
08325f10 +0x1aa:  mov    -0xc(%ebp),%edx
08325f13 +0x1ad:  mov    %edx,0xc(%esp)
08325f17 +0x1b1:  lea    0x10(%ebp),%edx
08325f1a +0x1b4:  mov    %edx,0x8(%esp)
08325f1e +0x1b8:  mov    %eax,0x4(%esp)
08325f22 +0x1bc:  mov    0xc(%ebp),%eax
08325f25 +0x1bf:  mov    %eax,(%esp)
08325f28 +0x1c2:  call   08556422 <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewCreatureMailEP5CUseriRK10Inven_ItemPKci>  ; WongWork::CMailBoxHelper::ReqDBSendNewCreatureMail(CUser*, int, Inven_Item const&, char const*, int)
08325f2d +0x1c7:  jmp    08325f78 <+0x212>
08325f2f +0x1c9:  mov    -0xc(%ebp),%eax
08325f32 +0x1cc:  mov    %eax,(%esp)
08325f35 +0x1cf:  call   0807e3b0 <_init+0xca8>
08325f3a +0x1d4:  mov    %eax,%ebx
08325f3c +0x1d6:  mov    0xc(%ebp),%eax
08325f3f +0x1d9:  mov    %eax,(%esp)
08325f42 +0x1dc:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08325f47 +0x1e1:  mov    %ebx,0x18(%esp)
08325f4b +0x1e5:  mov    -0xc(%ebp),%edx
08325f4e +0x1e8:  mov    %edx,0x14(%esp)
08325f52 +0x1ec:  movl   $0x1,0x10(%esp)
08325f5a +0x1f4:  mov    %eax,0xc(%esp)
08325f5e +0x1f8:  movl   $0x0,0x8(%esp)
08325f66 +0x200:  lea    0x10(%ebp),%eax
08325f69 +0x203:  mov    %eax,0x4(%esp)
08325f6d +0x207:  mov    0xc(%ebp),%eax
08325f70 +0x20a:  mov    %eax,(%esp)
08325f73 +0x20d:  call   08556d5c <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci>  ; WongWork::CMailBoxHelper::ReqDBSendNewMailCashShop(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int)
08325f78 +0x212:  mov    0x12(%ebp),%eax
08325f7b +0x215:  mov    %eax,%edx
08325f7d +0x217:  mov    0x50(%ebp),%eax
08325f80 +0x21a:  mov    %edx,(%eax)
08325f82 +0x21c:  mov    $0x0,%eax
08325f87 +0x221:  jmp    08326031 <+0x2cb>
08325f8c +0x226:  mov    0xc(%ebp),%eax
08325f8f +0x229:  mov    %eax,(%esp)
08325f92 +0x22c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08325f97 +0x231:  mov    %eax,(%esp)
08325f9a +0x234:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
08325f9f +0x239:  mov    0x60(%ebp),%edx
08325fa2 +0x23c:  mov    %edx,0x14(%esp)
08325fa6 +0x240:  mov    0x5c(%ebp),%edx
08325fa9 +0x243:  mov    %edx,0x10(%esp)
08325fad +0x247:  movl   $0x19,0xc(%esp)
08325fb5 +0x24f:  mov    -0x10(%ebp),%edx
08325fb8 +0x252:  mov    %edx,0x8(%esp)
08325fbc +0x256:  lea    0x10(%ebp),%edx
08325fbf +0x259:  mov    %edx,0x4(%esp)
08325fc3 +0x25d:  mov    %eax,(%esp)
08325fc6 +0x260:  call   0833b204 <_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii>  ; user_creature::CCreatureMgr::InsertCreatureItem(Inven_Item*, int, int, int, int)
08325fcb +0x265:  mov    -0x10(%ebp),%eax
08325fce +0x268:  mov    %eax,0xc(%esp)
08325fd2 +0x26c:  movl   $0x7,0x8(%esp)
08325fda +0x274:  movl   $0x1,0x4(%esp)
08325fe2 +0x27c:  mov    0xc(%ebp),%eax
08325fe5 +0x27f:  mov    %eax,(%esp)
08325fe8 +0x282:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08325fed +0x287:  mov    0xc(%ebp),%eax
08325ff0 +0x28a:  mov    %eax,(%esp)
08325ff3 +0x28d:  call   0864fe52 <_ZN5CUser13SaveInventoryEv>  ; CUser::SaveInventory()
08325ff8 +0x292:  mov    0xc(%ebp),%eax
08325ffb +0x295:  mov    %eax,(%esp)
08325ffe +0x298:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08326003 +0x29d:  lea    -0x4e(%ebp),%edx
08326006 +0x2a0:  mov    -0x10(%ebp),%ecx
08326009 +0x2a3:  mov    %ecx,0xc(%esp)
0832600d +0x2a7:  movl   $0x3,0x8(%esp)
08326015 +0x2af:  mov    %eax,0x4(%esp)
08326019 +0x2b3:  mov    %edx,(%esp)
0832601c +0x2b6:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08326021 +0x2bb:  sub    $0x4,%esp
08326024 +0x2be:  mov    -0x4c(%ebp),%eax
08326027 +0x2c1:  mov    %eax,%edx
08326029 +0x2c3:  mov    0x50(%ebp),%eax
0832602c +0x2c6:  mov    %edx,(%eax)
0832602e +0x2c8:  mov    -0x10(%ebp),%eax
08326031 +0x2cb:  mov    -0x4(%ebp),%ebx
08326034 +0x2ce:  leave
08326035 +0x2cf:  ret
```

## 反编译 C

```c
// WongWork::CCeraShop::_processCreature @ 0x8325d66

/* WongWork::CCeraShop::_processCreature(CUser*, Inven_Item, int&, int&, bool, int, int) */

int WongWork::CCeraShop::_processCreature
              (undefined4 param_1,CUser *param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
              undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
              undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
              undefined4 param_17,undefined1 param_18,undefined4 *param_19,undefined4 *param_20,
              undefined4 param_21,int param_22,int param_23)

{
  char cVar1;
  CInventory *pCVar2;
  CCreatureMgr *pCVar3;
  undefined4 uVar4;
  size_t sVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_52 [2];
  undefined4 local_50;
  bool local_15;
  int local_14;
  char *local_10;
  
  local_14 = -1;
  local_15 = true;
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
  pCVar3 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar2);
  cVar1 = user_creature::CCreatureMgr::CheckItem(pCVar3,param_2,(Inven_Item *)&param_3,&local_15);
  if (cVar1 != '\x01') {
    *param_20 = 1;
  }
  if (local_15 != false) {
    if ((param_3._1_1_ == '\x05') &&
       (cVar1 = user_creature::CCreatureItemConverter::SetEggItem((Inven_Item *)&param_3),
       cVar1 != '\x01')) {
      LogManager::logFormat
                (1,"CeraShop.cpp",
                 "int WongWork::CCeraShop::_processCreature(CUser*, Inven_Item, int&, int&, bool, int, int)"
                 ,0x171f,"History ERROR, CCreatureItemConverter::SetEggItem");
      *param_20 = 1;
    }
    uVar4 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    local_14 = CInventory::insertItemIntoInventory
                         (uVar4,CONCAT22(param_3._2_2_,CONCAT11(param_3._1_1_,param_3._0_1_)),
                          CONCAT22(param_4._2_2_,(undefined2)param_4),param_5,param_6,param_7,
                          param_8,param_9,param_10,param_11,param_12,param_13,param_14,param_15,
                          param_16,param_17,param_18,0x19,1,0);
    if (local_14 < 0) {
      local_10 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "game_server_msg_104",(bool *)0x0);
      if (param_3._1_1_ == '\x05') {
        sVar5 = strlen(local_10);
        iVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        CMailBoxHelper::ReqDBSendNewCreatureMail
                  (param_2,iVar6,(Inven_Item *)&param_3,local_10,sVar5);
      }
      else {
        sVar5 = strlen(local_10);
        uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        CMailBoxHelper::ReqDBSendNewMailCashShop
                  (param_2,(Inven_Item *)&param_3,0,uVar7,true,local_10,sVar5);
      }
      *param_19 = CONCAT22((undefined2)param_4,param_3._2_2_);
      local_14 = 0;
    }
    else {
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      pCVar3 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar2);
      user_creature::CCreatureMgr::InsertCreatureItem
                (pCVar3,(Inven_Item *)&param_3,local_14,0x19,param_22,param_23);
      CUser::SendUpdateItemList(param_2,1,7,local_14);
      CUser::SaveInventory(param_2);
      iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      CInventory::GetInvenSlot((int)local_52,iVar6);
      *param_19 = local_50;
    }
  }
  return local_14;
}
```
