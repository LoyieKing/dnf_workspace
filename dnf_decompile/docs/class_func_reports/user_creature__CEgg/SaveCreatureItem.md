# SaveCreatureItem

`_ZN13user_creature4CEgg16SaveCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser`

`user_creature::CEgg::SaveCreatureItem(Inven_Item*, SIG_CREATURE_ITEM_DETAIL_INFO*, CUser*)`

| 类 | 地址 |
|---|---|
| `user_creature::CEgg` | `0x083390c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083390c8  _ZN13user_creature4CEgg16SaveCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser
#           user_creature::CEgg::SaveCreatureItem(Inven_Item*, SIG_CREATURE_ITEM_DETAIL_INFO*, CUser*)
# range [0x083390c8, 0x08339129]
083390c8 +0x00:  push   %ebp
083390c9 +0x01:  mov    %esp,%ebp
083390cb +0x03:  sub    $0x18,%esp
083390ce +0x06:  mov    0x8(%ebp),%eax
083390d1 +0x09:  mov    %eax,(%esp)
083390d4 +0x0c:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
083390d9 +0x11:  mov    %eax,%edx
083390db +0x13:  mov    0xc(%ebp),%eax
083390de +0x16:  mov    %edx,0x2(%eax)
083390e1 +0x19:  mov    0x8(%ebp),%eax
083390e4 +0x1c:  mov    0xc(%eax),%edx
083390e7 +0x1f:  mov    0x10(%ebp),%eax
083390ea +0x22:  mov    %edx,0x4(%eax)
083390ed +0x25:  mov    0x8(%ebp),%eax
083390f0 +0x28:  mov    0x10(%eax),%edx
083390f3 +0x2b:  mov    0x10(%ebp),%eax
083390f6 +0x2e:  mov    %edx,(%eax)
083390f8 +0x30:  mov    0x8(%ebp),%eax
083390fb +0x33:  mov    0x8(%eax),%eax
083390fe +0x36:  mov    %eax,%edx
08339100 +0x38:  mov    0x10(%ebp),%eax
08339103 +0x3b:  mov    %dl,0x24(%eax)
08339106 +0x3e:  mov    0x8(%ebp),%eax
08339109 +0x41:  movzbl 0x14(%eax),%eax
0833910d +0x45:  mov    %eax,%edx
0833910f +0x47:  mov    0x10(%ebp),%eax
08339112 +0x4a:  mov    %dl,0x26(%eax)
08339115 +0x4d:  mov    0x8(%ebp),%eax
08339118 +0x50:  movzbl 0x15(%eax),%edx
0833911c +0x54:  mov    0x10(%ebp),%eax
0833911f +0x57:  mov    %dl,0x27(%eax)
08339122 +0x5a:  mov    $0x1,%eax
08339127 +0x5f:  leave
08339128 +0x60:  ret
08339129 +0x61:  nop
```

## 反编译 C

```c
// user_creature::CEgg::SaveCreatureItem @ 0x83390c8

/* user_creature::CEgg::SaveCreatureItem(Inven_Item*, SIG_CREATURE_ITEM_DETAIL_INFO*, CUser*) */

undefined4
user_creature::CEgg::SaveCreatureItem
          (Inven_Item *param_1,SIG_CREATURE_ITEM_DETAIL_INFO *param_2,CUser *param_3)

{
  undefined4 uVar1;
  
  uVar1 = CCreatureItem::GetItemId((CCreatureItem *)param_1);
  *(undefined4 *)(param_2 + 2) = uVar1;
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x10);
  param_3[0x24] = SUB41(*(undefined4 *)(param_1 + 8),0);
  *(Inven_Item *)(param_3 + 0x26) = param_1[0x14];
  *(Inven_Item *)(param_3 + 0x27) = param_1[0x15];
  return 1;
}
```
