# LoadCreatureItem

`_ZN13user_creature4CEgg16LoadCreatureItemEPNS_12CCreatureMgrEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser`

`user_creature::CEgg::LoadCreatureItem(user_creature::CCreatureMgr*, Inven_Item*, SIG_CREATURE_ITEM_DETAIL_INFO*, CUser*)`

| 类 | 地址 |
|---|---|
| `user_creature::CEgg` | `0x08338fac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08338fac  _ZN13user_creature4CEgg16LoadCreatureItemEPNS_12CCreatureMgrEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser
#           user_creature::CEgg::LoadCreatureItem(user_creature::CCreatureMgr*, Inven_Item*, SIG_CREATURE_ITEM_DETAIL_INFO*, CUser*)
# range [0x08338fac, 0x083390c7]
08338fac +0x000:  push   %ebp
08338fad +0x001:  mov    %esp,%ebp
08338faf +0x003:  push   %ebx
08338fb0 +0x004:  sub    $0x24,%esp
08338fb3 +0x007:  mov    0x14(%ebp),%eax
08338fb6 +0x00a:  movzbl 0x27(%eax),%eax
08338fba +0x00e:  test   %al,%al
08338fbc +0x010:  je     08338fd3 <+0x27>
08338fbe +0x012:  mov    0x10(%ebp),%eax
08338fc1 +0x015:  mov    %eax,(%esp)
08338fc4 +0x018:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08338fc9 +0x01d:  mov    $0x0,%eax
08338fce +0x022:  jmp    083390c2 <+0x116>
08338fd3 +0x027:  mov    0x10(%ebp),%eax
08338fd6 +0x02a:  mov    0x2(%eax),%eax
08338fd9 +0x02d:  mov    %eax,%edx
08338fdb +0x02f:  mov    0x8(%ebp),%eax
08338fde +0x032:  mov    %edx,0x4(%esp)
08338fe2 +0x036:  mov    %eax,(%esp)
08338fe5 +0x039:  call   0833efb0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x107d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x107d
08338fea +0x03e:  mov    0x14(%ebp),%eax
08338fed +0x041:  mov    0x4(%eax),%edx
08338ff0 +0x044:  mov    0x8(%ebp),%eax
08338ff3 +0x047:  mov    %edx,0xc(%eax)
08338ff6 +0x04a:  mov    0x14(%ebp),%eax
08338ff9 +0x04d:  mov    (%eax),%edx
08338ffb +0x04f:  mov    0x8(%ebp),%eax
08338ffe +0x052:  mov    %edx,0x10(%eax)
08339001 +0x055:  mov    0x14(%ebp),%eax
08339004 +0x058:  movzbl 0x24(%eax),%eax
08339008 +0x05c:  movsbl %al,%edx
0833900b +0x05f:  mov    0x8(%ebp),%eax
0833900e +0x062:  mov    %edx,0x8(%eax)
08339011 +0x065:  mov    0x14(%ebp),%eax
08339014 +0x068:  mov    0x28(%eax),%edx
08339017 +0x06b:  mov    0x8(%ebp),%eax
0833901a +0x06e:  mov    %edx,0x18(%eax)
0833901d +0x071:  mov    0x10(%ebp),%eax
08339020 +0x074:  movb   $0x1,(%eax)
08339023 +0x077:  mov    0x14(%ebp),%eax
08339026 +0x07a:  movzbl 0x26(%eax),%eax
0833902a +0x07e:  test   %al,%al
0833902c +0x080:  setne  %dl
0833902f +0x083:  mov    0x8(%ebp),%eax
08339032 +0x086:  mov    %dl,0x14(%eax)
08339035 +0x089:  mov    0x14(%ebp),%eax
08339038 +0x08c:  movzbl 0x27(%eax),%edx
0833903c +0x090:  mov    0x8(%ebp),%eax
0833903f +0x093:  mov    %dl,0x15(%eax)
08339042 +0x096:  mov    0x14(%ebp),%eax
08339045 +0x099:  mov    0x4(%eax),%edx
08339048 +0x09c:  mov    0x8(%ebp),%eax
0833904b +0x09f:  mov    %edx,0x8(%esp)
0833904f +0x0a3:  mov    %eax,0x4(%esp)
08339053 +0x0a7:  mov    0xc(%ebp),%eax
08339056 +0x0aa:  mov    %eax,(%esp)
08339059 +0x0ad:  call   0833a77e <_ZN13user_creature12CCreatureMgr20RegisterCreatureItemEPNS_13CCreatureItemEi>  ; user_creature::CCreatureMgr::RegisterCreatureItem(user_creature::CCreatureItem*, int)
0833905e +0x0b2:  xor    $0x1,%eax
08339061 +0x0b5:  test   %al,%al
08339063 +0x0b7:  je     0833906c <+0xc0>
08339065 +0x0b9:  mov    $0x0,%eax
0833906a +0x0be:  jmp    083390c2 <+0x116>
0833906c +0x0c0:  movl   $0x0,-0xc(%ebp)
08339073 +0x0c7:  mov    0x8(%ebp),%eax
08339076 +0x0ca:  mov    %eax,(%esp)
08339079 +0x0cd:  call   0833efca <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1097>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1097
0833907e +0x0d2:  mov    %eax,%ebx
08339080 +0x0d4:  mov    0x18(%ebp),%eax
08339083 +0x0d7:  mov    %eax,(%esp)
08339086 +0x0da:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0833908b +0x0df:  mov    %ebx,0x8(%esp)
0833908f +0x0e3:  movl   $0x3,0x4(%esp)
08339097 +0x0eb:  mov    %eax,(%esp)
0833909a +0x0ee:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
0833909f +0x0f3:  mov    %eax,-0xc(%ebp)
083390a2 +0x0f6:  mov    -0xc(%ebp),%eax
083390a5 +0x0f9:  movb   $0x1,(%eax)
083390a8 +0x0fc:  mov    0x8(%ebp),%eax
083390ab +0x0ff:  mov    0xc(%eax),%eax
083390ae +0x102:  mov    %eax,0x4(%esp)
083390b2 +0x106:  mov    -0xc(%ebp),%eax
083390b5 +0x109:  mov    %eax,(%esp)
083390b8 +0x10c:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
083390bd +0x111:  mov    $0x1,%eax
083390c2 +0x116:  add    $0x24,%esp
083390c5 +0x119:  pop    %ebx
083390c6 +0x11a:  pop    %ebp
083390c7 +0x11b:  ret
```

## 反编译 C

```c
// user_creature::CEgg::LoadCreatureItem @ 0x8338fac

/* user_creature::CEgg::LoadCreatureItem(user_creature::CCreatureMgr*, Inven_Item*,
   SIG_CREATURE_ITEM_DETAIL_INFO*, CUser*) */

undefined4 __thiscall
user_creature::CEgg::LoadCreatureItem
          (CEgg *this,CCreatureMgr *param_1,Inven_Item *param_2,
          SIG_CREATURE_ITEM_DETAIL_INFO *param_3,CUser *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CInventory *this_00;
  Inven_Item *this_01;
  
  if (param_3[0x27] == (SIG_CREATURE_ITEM_DETAIL_INFO)0x0) {
    CCreatureItem::SetItemId((CCreatureItem *)this,*(int *)(param_2 + 2));
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)param_3;
    *(int *)(this + 8) = (int)(char)param_3[0x24];
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_3 + 0x28);
    *param_2 = (Inven_Item)0x1;
    this[0x14] = (CEgg)(param_3[0x26] != (SIG_CREATURE_ITEM_DETAIL_INFO)0x0);
    this[0x15] = *(CEgg *)(param_3 + 0x27);
    cVar1 = CCreatureMgr::RegisterCreatureItem(param_1,(CCreatureItem *)this,*(int *)(param_3 + 4));
    if (cVar1 == '\x01') {
      iVar3 = CCreatureItem::GetSlotNo((CCreatureItem *)this);
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_4);
      this_01 = (Inven_Item *)CInventory::GetInvenRef(this_00,3,iVar3);
      *this_01 = (Inven_Item)0x1;
      Inven_Item::set_add_info(this_01,*(int *)(this + 0xc));
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    Inven_Item::reset(param_2);
    uVar2 = 0;
  }
  return uVar2;
}
```
