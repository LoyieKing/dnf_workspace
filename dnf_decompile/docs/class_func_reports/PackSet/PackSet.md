# PackSet

`_ZN7PackSetC1Ev`

`PackSet::PackSet()`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac47f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac47f4  _ZN7PackSetC1Ev
#           PackSet::PackSet()
# range [0x08ac47f4, 0x08ac4861]
08ac47f4 +0x00:  push   %ebp
08ac47f5 +0x01:  mov    %esp,%ebp
08ac47f7 +0x03:  push   %esi
08ac47f8 +0x04:  push   %ebx
08ac47f9 +0x05:  sub    $0x10,%esp
08ac47fc +0x08:  mov    0x8(%ebp),%eax
08ac47ff +0x0b:  add    $0x10,%eax
08ac4802 +0x0e:  mov    %eax,(%esp)
08ac4805 +0x11:  call   08ac78e0 <_ZN16IPackFileProcess15getCommonBufferEj+0x1a2>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x1a2
08ac480a +0x16:  mov    0x8(%ebp),%eax
08ac480d +0x19:  add    $0x1c,%eax
08ac4810 +0x1c:  mov    %eax,(%esp)
08ac4813 +0x1f:  call   08ac78e0 <_ZN16IPackFileProcess15getCommonBufferEj+0x1a2>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x1a2
08ac4818 +0x24:  mov    0x8(%ebp),%eax
08ac481b +0x27:  mov    %eax,(%esp)
08ac481e +0x2a:  call   08ac48d2 <_ZN7PackSet5clearEv>  ; PackSet::clear()
08ac4823 +0x2f:  jmp    08ac485b <+0x67>
08ac4825 +0x31:  mov    %edx,%ebx
08ac4827 +0x33:  mov    %eax,%esi
08ac4829 +0x35:  mov    0x8(%ebp),%eax
08ac482c +0x38:  add    $0x1c,%eax
08ac482f +0x3b:  mov    %eax,(%esp)
08ac4832 +0x3e:  call   08ac78f4 <_ZN16IPackFileProcess15getCommonBufferEj+0x1b6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x1b6
08ac4837 +0x43:  mov    %esi,%eax
08ac4839 +0x45:  mov    %ebx,%edx
08ac483b +0x47:  jmp    08ac483d <+0x49>
08ac483d +0x49:  mov    %edx,%ebx
08ac483f +0x4b:  mov    %eax,%esi
08ac4841 +0x4d:  mov    0x8(%ebp),%eax
08ac4844 +0x50:  add    $0x10,%eax
08ac4847 +0x53:  mov    %eax,(%esp)
08ac484a +0x56:  call   08ac78f4 <_ZN16IPackFileProcess15getCommonBufferEj+0x1b6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x1b6
08ac484f +0x5b:  mov    %esi,%eax
08ac4851 +0x5d:  mov    %ebx,%edx
08ac4853 +0x5f:  mov    %eax,(%esp)
08ac4856 +0x62:  call   08ae3750 <_Unwind_Resume>
08ac485b +0x67:  add    $0x10,%esp
08ac485e +0x6a:  pop    %ebx
08ac485f +0x6b:  pop    %esi
08ac4860 +0x6c:  pop    %ebp
08ac4861 +0x6d:  ret
```

## 反编译 C

```c
// PackSet::PackSet @ 0x8ac47f4

/* DWARF original prototype: void PackSet(PackSet * this) */

void __thiscall PackSet::PackSet(PackSet *this)

{
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::vector(&this->indexes_);
                    /* try { // try from 08ac4813 to 08ac4817 has its CatchHandler @ 08ac483d */
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::vector(&this->addeds_);
                    /* try { // try from 08ac481e to 08ac4822 has its CatchHandler @ 08ac4825 */
  clear(this);
  return;
}
```
