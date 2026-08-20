# respond_special_item_booster_selection

`_ZN18SpecialItemHandler38respond_special_item_booster_selectionEiRK19STSpecailItem_ParamR20STSpecailItem_Result`

`SpecialItemHandler::respond_special_item_booster_selection(int, STSpecailItem_Param const&, STSpecailItem_Result&)`

| 类 | 地址 |
|---|---|
| `SpecialItemHandler` | `0x0827ccfc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827ccfc  _ZN18SpecialItemHandler38respond_special_item_booster_selectionEiRK19STSpecailItem_ParamR20STSpecailItem_Result
#           SpecialItemHandler::respond_special_item_booster_selection(int, STSpecailItem_Param const&, STSpecailItem_Result&)
# range [0x0827ccfc, 0x0827cdb5]
0827ccfc +0x00:  push   %ebp
0827ccfd +0x01:  mov    %esp,%ebp
0827ccff +0x03:  push   %edi
0827cd00 +0x04:  push   %esi
0827cd01 +0x05:  push   %ebx
0827cd02 +0x06:  sub    $0x5c,%esp
0827cd05 +0x09:  mov    0x10(%ebp),%eax
0827cd08 +0x0c:  mov    (%eax),%eax
0827cd0a +0x0e:  mov    %eax,-0x34(%ebp)
0827cd0d +0x11:  mov    0x10(%ebp),%eax
0827cd10 +0x14:  mov    0x4(%eax),%eax
0827cd13 +0x17:  mov    %eax,-0x30(%ebp)
0827cd16 +0x1a:  mov    0x10(%ebp),%eax
0827cd19 +0x1d:  mov    0xc(%eax),%eax
0827cd1c +0x20:  mov    %eax,-0x2c(%ebp)
0827cd1f +0x23:  mov    0x10(%ebp),%eax
0827cd22 +0x26:  mov    0x10(%eax),%eax
0827cd25 +0x29:  mov    %eax,-0x28(%ebp)
0827cd28 +0x2c:  mov    0x10(%ebp),%eax
0827cd2b +0x2f:  mov    0x14(%eax),%eax
0827cd2e +0x32:  mov    %eax,-0x24(%ebp)
0827cd31 +0x35:  mov    0x10(%ebp),%eax
0827cd34 +0x38:  mov    0x18(%eax),%eax
0827cd37 +0x3b:  mov    %eax,-0x20(%ebp)
0827cd3a +0x3e:  mov    0x10(%ebp),%eax
0827cd3d +0x41:  movzbl 0x1c(%eax),%eax
0827cd41 +0x45:  mov    %al,-0x1b(%ebp)
0827cd44 +0x48:  mov    0x10(%ebp),%eax
0827cd47 +0x4b:  movzbl 0x1d(%eax),%eax
0827cd4b +0x4f:  mov    %al,-0x1a(%ebp)
0827cd4e +0x52:  mov    0x10(%ebp),%eax
0827cd51 +0x55:  movzbl 0x1e(%eax),%eax
0827cd55 +0x59:  mov    %al,-0x19(%ebp)
0827cd58 +0x5c:  movsbl -0x19(%ebp),%edi
0827cd5c +0x60:  movsbl -0x1a(%ebp),%esi
0827cd60 +0x64:  movzbl -0x1b(%ebp),%ebx
0827cd64 +0x68:  mov    0x14(%ebp),%ecx
0827cd67 +0x6b:  mov    -0x30(%ebp),%edx
0827cd6a +0x6e:  mov    0x8(%ebp),%eax
0827cd6d +0x71:  mov    (%eax),%eax
0827cd6f +0x73:  mov    %edi,0x28(%esp)
0827cd73 +0x77:  mov    %esi,0x24(%esp)
0827cd77 +0x7b:  mov    -0x28(%ebp),%esi
0827cd7a +0x7e:  mov    %esi,0x20(%esp)
0827cd7e +0x82:  mov    -0x2c(%ebp),%esi
0827cd81 +0x85:  mov    %esi,0x1c(%esp)
0827cd85 +0x89:  mov    %ebx,0x18(%esp)
0827cd89 +0x8d:  mov    -0x20(%ebp),%ebx
0827cd8c +0x90:  mov    %ebx,0x14(%esp)
0827cd90 +0x94:  mov    %ecx,0x10(%esp)
0827cd94 +0x98:  mov    -0x24(%ebp),%ecx
0827cd97 +0x9b:  mov    %ecx,0xc(%esp)
0827cd9b +0x9f:  mov    %edx,0x8(%esp)
0827cd9f +0xa3:  mov    -0x34(%ebp),%edx
0827cda2 +0xa6:  mov    %edx,0x4(%esp)
0827cda6 +0xaa:  mov    %eax,(%esp)
0827cda9 +0xad:  call   08327894 <_ZN8WongWork9CCeraShop21_processBoosterSelectEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEcc>  ; WongWork::CCeraShop::_processBoosterSelect(CUser*, int, int, int&, long, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, char, char)
0827cdae +0xb2:  add    $0x5c,%esp
0827cdb1 +0xb5:  pop    %ebx
0827cdb2 +0xb6:  pop    %esi
0827cdb3 +0xb7:  pop    %edi
0827cdb4 +0xb8:  pop    %ebp
0827cdb5 +0xb9:  ret
```

## 反编译 C

```c
// SpecialItemHandler::respond_special_item_booster_selection @ 0x827ccfc

/* SpecialItemHandler::respond_special_item_booster_selection(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void __thiscall
SpecialItemHandler::respond_special_item_booster_selection
          (SpecialItemHandler *this,int param_1,STSpecailItem_Param *param_2,
          STSpecailItem_Result *param_3)

{
  WongWork::CCeraShop::_processBoosterSelect
            (*(CUser **)this,*(int *)param_2,*(int *)(param_2 + 4),*(int **)(param_2 + 0x14),
             (long)param_3,SUB41(*(undefined4 *)(param_2 + 0x18),0),
             (vector *)(uint)(byte)param_2[0x1c],*(stCeraShopItemParam_t **)(param_2 + 0xc),
             (char)*(undefined4 *)(param_2 + 0x10),(char)param_2[0x1d]);
  return;
}
```
