# generateCatchMonsterItem

`_ZNK8CMonster24generateCatchMonsterItemERSt6vectorI10Inven_ItemSaIS1_EE`

`CMonster::generateCatchMonsterItem(std::vector<Inven_Item, std::allocator<Inven_Item> >&) const`

| 类 | 地址 |
|---|---|
| `CMonster` | `0x0834f8e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834f8e8  _ZNK8CMonster24generateCatchMonsterItemERSt6vectorI10Inven_ItemSaIS1_EE
#           CMonster::generateCatchMonsterItem(std::vector<Inven_Item, std::allocator<Inven_Item> >&) const
# range [0x0834f8e8, 0x0834f90d]
0834f8e8 +0x00:  push   %ebp
0834f8e9 +0x01:  mov    %esp,%ebp
0834f8eb +0x03:  sub    $0x18,%esp
0834f8ee +0x06:  mov    0x8(%ebp),%eax
0834f8f1 +0x09:  mov    %eax,(%esp)
0834f8f4 +0x0c:  call   0830e6c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2ab
0834f8f9 +0x11:  lea    0x70(%eax),%edx
0834f8fc +0x14:  mov    0xc(%ebp),%eax
0834f8ff +0x17:  mov    %eax,0x4(%esp)
0834f903 +0x1b:  mov    %edx,(%esp)
0834f906 +0x1e:  call   08349f4b <_Z24generateCatchMonsterItemRKSt6vectorI13CatchItemInfoSaIS0_EERS_I10Inven_ItemSaIS5_EE>  ; generateCatchMonsterItem(std::vector<CatchItemInfo, std::allocator<CatchItemInfo> > const&, std::vector<Inven_Item, std::allocator<Inven_Item> >&)
0834f90b +0x23:  leave
0834f90c +0x24:  ret
0834f90d +0x25:  nop
```

## 反编译 C

```c
// CMonster::generateCatchMonsterItem @ 0x834f8e8

/* CMonster::generateCatchMonsterItem(std::vector<Inven_Item, std::allocator<Inven_Item> >&) const
    */

void __thiscall CMonster::generateCatchMonsterItem(CMonster *this,vector *param_1)

{
  int iVar1;
  
  iVar1 = getMonsterScript(this);
  ::generateCatchMonsterItem((vector *)(iVar1 + 0x70),param_1);
  return;
}
```
