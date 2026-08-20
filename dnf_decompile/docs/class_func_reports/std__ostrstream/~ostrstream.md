# ~ostrstream

`_ZNSt10ostrstreamD2Ev`

`std::ostrstream::~ostrstream()`

| 类 | 地址 |
|---|---|
| `std::ostrstream` | `0x086ddcb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ddcb0  _ZNSt10ostrstreamD2Ev
#           std::ostrstream::~ostrstream()
# range [0x086ddcb0, 0x086ddd0f]
086ddcb0 +0x00:  push   %ebp
086ddcb1 +0x01:  mov    %esp,%ebp
086ddcb3 +0x03:  sub    $0x18,%esp
086ddcb6 +0x06:  mov    %ebx,-0x8(%ebp)
086ddcb9 +0x09:  mov    0xc(%ebp),%ebx
086ddcbc +0x0c:  mov    %esi,-0x4(%ebp)
086ddcbf +0x0f:  mov    0x8(%ebp),%esi
086ddcc2 +0x12:  mov    (%ebx),%eax
086ddcc4 +0x14:  mov    0xc(%ebx),%edx
086ddcc7 +0x17:  mov    %eax,(%esi)
086ddcc9 +0x19:  mov    -0xc(%eax),%eax
086ddccc +0x1c:  mov    %edx,(%esi,%eax,1)
086ddccf +0x1f:  lea    0x4(%esi),%eax
086ddcd2 +0x22:  mov    %eax,(%esp)
086ddcd5 +0x25:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086ddcda +0x2a:  mov    0x4(%ebx),%eax
086ddcdd +0x2d:  mov    0x8(%ebx),%edx
086ddce0 +0x30:  mov    %eax,(%esi)
086ddce2 +0x32:  mov    -0xc(%eax),%eax
086ddce5 +0x35:  mov    %edx,(%esi,%eax,1)
086ddce8 +0x38:  mov    -0x8(%ebp),%ebx
086ddceb +0x3b:  mov    -0x4(%ebp),%esi
086ddcee +0x3e:  mov    %ebp,%esp
086ddcf0 +0x40:  pop    %ebp
086ddcf1 +0x41:  ret
086ddcf2 +0x42:  mov    0x4(%ebx),%edx
086ddcf5 +0x45:  mov    0x8(%ebx),%ecx
086ddcf8 +0x48:  mov    %edx,(%esi)
086ddcfa +0x4a:  mov    -0xc(%edx),%edx
086ddcfd +0x4d:  mov    %ecx,(%esi,%edx,1)
086ddd00 +0x50:  mov    %eax,(%esp)
086ddd03 +0x53:  call   08ae3750 <_Unwind_Resume>
086ddd08 +0x58:  nop
086ddd09 +0x59:  nop
086ddd0a +0x5a:  nop
086ddd0b +0x5b:  nop
086ddd0c +0x5c:  nop
086ddd0d +0x5d:  nop
086ddd0e +0x5e:  nop
086ddd0f +0x5f:  nop
```

## 反编译 C

```c
// std::ostrstream::~ostrstream @ 0x86ddcb0

/* std::ostrstream::~ostrstream() */

void __thiscall std::ostrstream::~ostrstream(ostrstream *this)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000008;
  
  iVar1 = *in_stack_00000008;
  iVar2 = in_stack_00000008[3];
  *(int *)this = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc)) = iVar2;
                    /* try { // try from 086ddcd5 to 086ddcd9 has its CatchHandler @ 086ddcf2 */
  strstreambuf::~strstreambuf((strstreambuf *)(this + 4));
  iVar1 = in_stack_00000008[1];
  iVar2 = in_stack_00000008[2];
  *(int *)this = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc)) = iVar2;
  return;
}
```
