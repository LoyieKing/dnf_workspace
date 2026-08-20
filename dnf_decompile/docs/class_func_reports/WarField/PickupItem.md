# PickupItem

`_ZN8WarField10PickupItemESt17_Rb_tree_iteratorISt4pairIKi8map_itemEE`

`WarField::PickupItem(std::_Rb_tree_iterator<std::pair<int const, map_item> >)`

| 类 | 地址 |
|---|---|
| `WarField` | `0x086ba082` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ba082  _ZN8WarField10PickupItemESt17_Rb_tree_iteratorISt4pairIKi8map_itemEE
#           WarField::PickupItem(std::_Rb_tree_iterator<std::pair<int const, map_item> >)
# range [0x086ba082, 0x086ba09f]
086ba082 +0x00:  push   %ebp
086ba083 +0x01:  mov    %esp,%ebp
086ba085 +0x03:  sub    $0x18,%esp
086ba088 +0x06:  mov    0x8(%ebp),%eax
086ba08b +0x09:  lea    0x2c(%eax),%edx
086ba08e +0x0c:  mov    0xc(%ebp),%eax
086ba091 +0x0f:  mov    %eax,0x4(%esp)
086ba095 +0x13:  mov    %edx,(%esp)
086ba098 +0x16:  call   08311ff4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3bd9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3bd9
086ba09d +0x1b:  leave
086ba09e +0x1c:  ret
086ba09f +0x1d:  nop
```

## 反编译 C

```c
// WarField::PickupItem @ 0x86ba082

/* WarField::PickupItem(std::_Rb_tree_iterator<std::pair<int const, map_item> >) */

void __thiscall WarField::PickupItem(WarField *this,undefined4 param_2)

{
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::erase
            ((map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> *)
             (this + 0x2c),param_2);
  return;
}
```
