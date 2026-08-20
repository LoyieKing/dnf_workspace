# generateIndependentItem

`_ZNK8CMonster23generateIndependentItemERKN8WongWork19stGenerateRefData_tERSt6vectorI10Inven_ItemSaIS5_EE`

`CMonster::generateIndependentItem(WongWork::stGenerateRefData_t const&, std::vector<Inven_Item, std::allocator<Inven_Item> >&) const`

| 类 | 地址 |
|---|---|
| `CMonster` | `0x0834f876` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834f876  _ZNK8CMonster23generateIndependentItemERKN8WongWork19stGenerateRefData_tERSt6vectorI10Inven_ItemSaIS5_EE
#           CMonster::generateIndependentItem(WongWork::stGenerateRefData_t const&, std::vector<Inven_Item, std::allocator<Inven_Item> >&) const
# range [0x0834f876, 0x0834f8a5]
0834f876 +0x00:  push   %ebp
0834f877 +0x01:  mov    %esp,%ebp
0834f879 +0x03:  sub    $0x18,%esp
0834f87c +0x06:  mov    0x8(%ebp),%eax
0834f87f +0x09:  mov    %eax,(%esp)
0834f882 +0x0c:  call   0830e6c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2ab
0834f887 +0x11:  lea    0x3ac(%eax),%edx
0834f88d +0x17:  mov    0x10(%ebp),%eax
0834f890 +0x1a:  mov    %eax,0x8(%esp)
0834f894 +0x1e:  mov    0xc(%ebp),%eax
0834f897 +0x21:  mov    %eax,0x4(%esp)
0834f89b +0x25:  mov    %edx,(%esp)
0834f89e +0x28:  call   0834989a <_Z23generateIndependentItemRKSt6vectorI26stMonsterIndependentDrop_tSaIS0_EERKN8WongWork19stGenerateRefData_tERS_I10Inven_ItemSaIS9_EE>  ; generateIndependentItem(std::vector<stMonsterIndependentDrop_t, std::allocator<stMonsterIndependentDrop_t> > const&, WongWork::stGenerateRefData_t const&, std::vector<Inven_Item, std::allocator<Inven_Item> >&)
0834f8a3 +0x2d:  leave
0834f8a4 +0x2e:  ret
0834f8a5 +0x2f:  nop
```

## 反编译 C

```c
// CMonster::generateIndependentItem @ 0x834f876

/* CMonster::generateIndependentItem(WongWork::stGenerateRefData_t const&, std::vector<Inven_Item,
   std::allocator<Inven_Item> >&) const */

void __thiscall
CMonster::generateIndependentItem(CMonster *this,stGenerateRefData_t *param_1,vector *param_2)

{
  int iVar1;
  
  iVar1 = getMonsterScript(this);
  ::generateIndependentItem((vector *)(iVar1 + 0x3ac),param_1,param_2);
  return;
}
```
