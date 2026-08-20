# deathTowerSpecifyItemDrop

`_ZNK8CMonster25deathTowerSpecifyItemDropEv`

`CMonster::deathTowerSpecifyItemDrop() const`

| 类 | 地址 |
|---|---|
| `CMonster` | `0x0834f84a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834f84a  _ZNK8CMonster25deathTowerSpecifyItemDropEv
#           CMonster::deathTowerSpecifyItemDrop() const
# range [0x0834f84a, 0x0834f875]
0834f84a +0x00:  push   %ebp
0834f84b +0x01:  mov    %esp,%ebp
0834f84d +0x03:  push   %ebx
0834f84e +0x04:  sub    $0x14,%esp
0834f851 +0x07:  mov    0x8(%ebp),%eax
0834f854 +0x0a:  lea    0x48(%eax),%ebx
0834f857 +0x0d:  movl   $0x2710,(%esp)
0834f85e +0x14:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0834f863 +0x19:  mov    %ebx,0x4(%esp)
0834f867 +0x1d:  mov    %eax,(%esp)
0834f86a +0x20:  call   08349672 <_Z16_drop_item_indexiRKSt6vectorISt4pairIiiESaIS1_EE>  ; _drop_item_index(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0834f86f +0x25:  add    $0x14,%esp
0834f872 +0x28:  pop    %ebx
0834f873 +0x29:  pop    %ebp
0834f874 +0x2a:  ret
0834f875 +0x2b:  nop
```

## 反编译 C

```c
// CMonster::deathTowerSpecifyItemDrop @ 0x834f84a

/* CMonster::deathTowerSpecifyItemDrop() const */

void __thiscall CMonster::deathTowerSpecifyItemDrop(CMonster *this)

{
  int iVar1;
  
  iVar1 = get_rand_int(10000);
  _drop_item_index(iVar1,(vector *)(this + 0x48));
  return;
}
```
