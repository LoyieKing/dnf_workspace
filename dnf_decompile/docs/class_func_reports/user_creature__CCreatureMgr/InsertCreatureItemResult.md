# InsertCreatureItemResult

`_ZN13user_creature12CCreatureMgr24InsertCreatureItemResultEP17SIG_CREATURE_ITEM`

`user_creature::CCreatureMgr::InsertCreatureItemResult(SIG_CREATURE_ITEM*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833b38c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833b38c  _ZN13user_creature12CCreatureMgr24InsertCreatureItemResultEP17SIG_CREATURE_ITEM
#           user_creature::CCreatureMgr::InsertCreatureItemResult(SIG_CREATURE_ITEM*)
# range [0x0833b38c, 0x0833b497]
0833b38c +0x000:  push   %ebp
0833b38d +0x001:  mov    %esp,%ebp
0833b38f +0x003:  push   %edi
0833b390 +0x004:  push   %esi
0833b391 +0x005:  push   %ebx
0833b392 +0x006:  sub    $0x7c,%esp
0833b395 +0x009:  lea    -0x55(%ebp),%eax
0833b398 +0x00c:  mov    %eax,(%esp)
0833b39b +0x00f:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0833b3a0 +0x014:  mov    0xc(%ebp),%eax
0833b3a3 +0x017:  lea    0x4(%eax),%edx
0833b3a6 +0x01a:  lea    -0x55(%ebp),%eax
0833b3a9 +0x01d:  mov    %eax,0x4(%esp)
0833b3ad +0x021:  mov    %edx,(%esp)
0833b3b0 +0x024:  call   0833f418 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x14e5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x14e5
0833b3b5 +0x029:  mov    0xc(%ebp),%eax
0833b3b8 +0x02c:  add    $0x2c,%eax
0833b3bb +0x02f:  mov    %eax,0x8(%esp)
0833b3bf +0x033:  lea    -0x55(%ebp),%eax
0833b3c2 +0x036:  mov    %eax,0x4(%esp)
0833b3c6 +0x03a:  mov    0x8(%ebp),%eax
0833b3c9 +0x03d:  mov    %eax,(%esp)
0833b3cc +0x040:  call   0833b68c <_ZN13user_creature12CCreatureMgr16LoadCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFO>  ; user_creature::CCreatureMgr::LoadCreatureItem(Inven_Item*, SIG_CREATURE_ITEM_DETAIL_INFO*)
0833b3d1 +0x045:  xor    $0x1,%eax
0833b3d4 +0x048:  test   %al,%al
0833b3d6 +0x04a:  je     0833b3e2 <+0x56>
0833b3d8 +0x04c:  mov    $0x0,%eax
0833b3dd +0x051:  jmp    0833b490 <+0x104>
0833b3e2 +0x056:  mov    0xc(%ebp),%eax
0833b3e5 +0x059:  mov    0x64(%eax),%eax
0833b3e8 +0x05c:  cmp    $0x6,%eax
0833b3eb +0x05f:  jne    0833b3ff <+0x73>
0833b3ed +0x061:  mov    0xc(%ebp),%eax
0833b3f0 +0x064:  mov    %eax,0x4(%esp)
0833b3f4 +0x068:  mov    0x8(%ebp),%eax
0833b3f7 +0x06b:  mov    %eax,(%esp)
0833b3fa +0x06e:  call   0833b498 <_ZN13user_creature12CCreatureMgr20SendCreatureItemInfoEP17SIG_CREATURE_ITEM>  ; user_creature::CCreatureMgr::SendCreatureItemInfo(SIG_CREATURE_ITEM*)
0833b3ff +0x073:  mov    0xc(%ebp),%eax
0833b402 +0x076:  mov    0x60(%eax),%edx
0833b405 +0x079:  mov    0x8(%ebp),%eax
0833b408 +0x07c:  mov    0x1c(%eax),%eax
0833b40b +0x07f:  mov    %edx,0x4(%esp)
0833b40f +0x083:  mov    %eax,(%esp)
0833b412 +0x086:  call   0833f4aa <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1577>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1577
0833b417 +0x08b:  mov    0xc(%ebp),%eax
0833b41a +0x08e:  movzbl 0x51(%eax),%eax
0833b41e +0x092:  movsbl %al,%eax
0833b421 +0x095:  mov    %eax,-0x5c(%ebp)
0833b424 +0x098:  mov    0xc(%ebp),%eax
0833b427 +0x09b:  movzbl 0x5(%eax),%eax
0833b42b +0x09f:  movzbl %al,%edi
0833b42e +0x0a2:  mov    0xc(%ebp),%eax
0833b431 +0x0a5:  mov    0x30(%eax),%esi
0833b434 +0x0a8:  mov    0xc(%ebp),%eax
0833b437 +0x0ab:  mov    0x8(%eax),%eax
0833b43a +0x0ae:  mov    %eax,%ebx
0833b43c +0x0b0:  mov    0x8(%ebp),%eax
0833b43f +0x0b3:  mov    0x1c(%eax),%eax
0833b442 +0x0b6:  mov    %eax,(%esp)
0833b445 +0x0b9:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0833b44a +0x0be:  mov    -0x5c(%ebp),%edx
0833b44d +0x0c1:  mov    %edx,0x18(%esp)
0833b451 +0x0c5:  mov    %edi,0x14(%esp)
0833b455 +0x0c9:  movl   $0x1,0x10(%esp)
0833b45d +0x0d1:  mov    %esi,0xc(%esp)
0833b461 +0x0d5:  mov    %ebx,0x8(%esp)
0833b465 +0x0d9:  movl   $0x3,0x4(%esp)
0833b46d +0x0e1:  mov    %eax,(%esp)
0833b470 +0x0e4:  call   0850a4b0 <_ZNK10CInventory16WriteCreatureLogE10INVEN_TYPEiiii14eItemAddReason>  ; CInventory::WriteCreatureLog(INVEN_TYPE, int, int, int, int, eItemAddReason) const
0833b475 +0x0e9:  mov    0x8(%ebp),%eax
0833b478 +0x0ec:  mov    0x1c(%eax),%eax
0833b47b +0x0ef:  movl   $0x0,0x4(%esp)
0833b483 +0x0f7:  mov    %eax,(%esp)
0833b486 +0x0fa:  call   0833f4aa <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1577>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1577
0833b48b +0x0ff:  mov    $0x1,%eax
0833b490 +0x104:  add    $0x7c,%esp
0833b493 +0x107:  pop    %ebx
0833b494 +0x108:  pop    %esi
0833b495 +0x109:  pop    %edi
0833b496 +0x10a:  pop    %ebp
0833b497 +0x10b:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::InsertCreatureItemResult @ 0x833b38c

/* user_creature::CCreatureMgr::InsertCreatureItemResult(SIG_CREATURE_ITEM*) */

undefined4 __thiscall
user_creature::CCreatureMgr::InsertCreatureItemResult(CCreatureMgr *this,SIG_CREATURE_ITEM *param_1)

{
  SIG_CREATURE_ITEM SVar1;
  SIG_CREATURE_ITEM SVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  CInventory *pCVar6;
  Inven_Item local_59 [73];
  
  Inven_Item::Inven_Item(local_59);
  Inven_Item_Compatible::makeInvenItem((Inven_Item_Compatible *)(param_1 + 4),local_59);
  cVar4 = LoadCreatureItem(this,local_59,(SIG_CREATURE_ITEM_DETAIL_INFO *)(param_1 + 0x2c));
  if (cVar4 == '\x01') {
    if (*(int *)(param_1 + 100) == 6) {
      SendCreatureItemInfo(this,param_1);
    }
    CUser::set_cera_item_order_no(*(CUser **)(this + 0x1c),*(uint *)(param_1 + 0x60));
    SVar1 = param_1[0x51];
    SVar2 = param_1[5];
    uVar5 = *(undefined4 *)(param_1 + 0x30);
    uVar3 = *(undefined4 *)(param_1 + 8);
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x1c));
    CInventory::WriteCreatureLog(pCVar6,3,uVar3,uVar5,1,SVar2,(int)(char)SVar1);
    CUser::set_cera_item_order_no(*(CUser **)(this + 0x1c),0);
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```
