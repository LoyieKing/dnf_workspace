# ~PackSet

`_ZN7PackSetD1Ev`

`PackSet::~PackSet()`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac4862` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac4862  _ZN7PackSetD1Ev
#           PackSet::~PackSet()
# range [0x08ac4862, 0x08ac48d1]
08ac4862 +0x00:  push   %ebp
08ac4863 +0x01:  mov    %esp,%ebp
08ac4865 +0x03:  push   %esi
08ac4866 +0x04:  push   %ebx
08ac4867 +0x05:  sub    $0x10,%esp
08ac486a +0x08:  mov    0x8(%ebp),%eax
08ac486d +0x0b:  mov    %eax,(%esp)
08ac4870 +0x0e:  call   08ac49da <_ZN7PackSet5closeEv>  ; PackSet::close()
08ac4875 +0x13:  jmp    08ac488f <+0x2d>
08ac4877 +0x15:  mov    %edx,%ebx
08ac4879 +0x17:  mov    %eax,%esi
08ac487b +0x19:  mov    0x8(%ebp),%eax
08ac487e +0x1c:  add    $0x1c,%eax
08ac4881 +0x1f:  mov    %eax,(%esp)
08ac4884 +0x22:  call   08ac78f4 <_ZN16IPackFileProcess15getCommonBufferEj+0x1b6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x1b6
08ac4889 +0x27:  mov    %esi,%eax
08ac488b +0x29:  mov    %ebx,%edx
08ac488d +0x2b:  jmp    08ac489f <+0x3d>
08ac488f +0x2d:  mov    0x8(%ebp),%eax
08ac4892 +0x30:  add    $0x1c,%eax
08ac4895 +0x33:  mov    %eax,(%esp)
08ac4898 +0x36:  call   08ac78f4 <_ZN16IPackFileProcess15getCommonBufferEj+0x1b6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x1b6
08ac489d +0x3b:  jmp    08ac48bd <+0x5b>
08ac489f +0x3d:  mov    %edx,%ebx
08ac48a1 +0x3f:  mov    %eax,%esi
08ac48a3 +0x41:  mov    0x8(%ebp),%eax
08ac48a6 +0x44:  add    $0x10,%eax
08ac48a9 +0x47:  mov    %eax,(%esp)
08ac48ac +0x4a:  call   08ac78f4 <_ZN16IPackFileProcess15getCommonBufferEj+0x1b6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x1b6
08ac48b1 +0x4f:  mov    %esi,%eax
08ac48b3 +0x51:  mov    %ebx,%edx
08ac48b5 +0x53:  mov    %eax,(%esp)
08ac48b8 +0x56:  call   08ae3750 <_Unwind_Resume>
08ac48bd +0x5b:  mov    0x8(%ebp),%eax
08ac48c0 +0x5e:  add    $0x10,%eax
08ac48c3 +0x61:  mov    %eax,(%esp)
08ac48c6 +0x64:  call   08ac78f4 <_ZN16IPackFileProcess15getCommonBufferEj+0x1b6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x1b6
08ac48cb +0x69:  add    $0x10,%esp
08ac48ce +0x6c:  pop    %ebx
08ac48cf +0x6d:  pop    %esi
08ac48d0 +0x6e:  pop    %ebp
08ac48d1 +0x6f:  ret
```

## 反编译 C

```c
// PackSet::~PackSet @ 0x8ac4862

/* DWARF original prototype: void ~PackSet(PackSet * this, int __in_chrg) */

void __thiscall PackSet::~PackSet(PackSet *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
                    /* try { // try from 08ac4870 to 08ac4874 has its CatchHandler @ 08ac4877 */
  close(this);
                    /* try { // try from 08ac4898 to 08ac489c has its CatchHandler @ 08ac489f */
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::~vector(&this->addeds_,in_stack_ffffffe8);
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::~vector(&this->indexes_,in_stack_ffffffe8);
  return;
}
```
