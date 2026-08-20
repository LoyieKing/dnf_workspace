# generateIndependentItem

`_ZNK12CAICharacter23generateIndependentItemERKN8WongWork19stGenerateRefData_tERSt6vectorI10Inven_ItemSaIS5_EE`

`CAICharacter::generateIndependentItem(WongWork::stGenerateRefData_t const&, std::vector<Inven_Item, std::allocator<Inven_Item> >&) const`

| 类 | 地址 |
|---|---|
| `CAICharacter` | `0x0834a13a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834a13a  _ZNK12CAICharacter23generateIndependentItemERKN8WongWork19stGenerateRefData_tERSt6vectorI10Inven_ItemSaIS5_EE
#           CAICharacter::generateIndependentItem(WongWork::stGenerateRefData_t const&, std::vector<Inven_Item, std::allocator<Inven_Item> >&) const
# range [0x0834a13a, 0x0834a15d]
0834a13a +0x00:  push   %ebp
0834a13b +0x01:  mov    %esp,%ebp
0834a13d +0x03:  sub    $0x18,%esp
0834a140 +0x06:  mov    0x8(%ebp),%eax
0834a143 +0x09:  lea    0x24(%eax),%edx
0834a146 +0x0c:  mov    0x10(%ebp),%eax
0834a149 +0x0f:  mov    %eax,0x8(%esp)
0834a14d +0x13:  mov    0xc(%ebp),%eax
0834a150 +0x16:  mov    %eax,0x4(%esp)
0834a154 +0x1a:  mov    %edx,(%esp)
0834a157 +0x1d:  call   0834989a <_Z23generateIndependentItemRKSt6vectorI26stMonsterIndependentDrop_tSaIS0_EERKN8WongWork19stGenerateRefData_tERS_I10Inven_ItemSaIS9_EE>  ; generateIndependentItem(std::vector<stMonsterIndependentDrop_t, std::allocator<stMonsterIndependentDrop_t> > const&, WongWork::stGenerateRefData_t const&, std::vector<Inven_Item, std::allocator<Inven_Item> >&)
0834a15c +0x22:  leave
0834a15d +0x23:  ret
```

## 反编译 C

```c
// CAICharacter::generateIndependentItem @ 0x834a13a

/* CAICharacter::generateIndependentItem(WongWork::stGenerateRefData_t const&,
   std::vector<Inven_Item, std::allocator<Inven_Item> >&) const */

void __thiscall
CAICharacter::generateIndependentItem
          (CAICharacter *this,stGenerateRefData_t *param_1,vector *param_2)

{
  ::generateIndependentItem((vector *)(this + 0x24),param_1,param_2);
  return;
}
```
