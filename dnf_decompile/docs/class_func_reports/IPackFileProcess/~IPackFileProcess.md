# ~IPackFileProcess

`_ZN16IPackFileProcessD1Ev`

`IPackFileProcess::~IPackFileProcess()`

| 类 | 地址 |
|---|---|
| `IPackFileProcess` | `0x08ac76a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac76a8  _ZN16IPackFileProcessD1Ev
#           IPackFileProcess::~IPackFileProcess()
# range [0x08ac76a8, 0x08ac7715]
08ac76a8 +0x00:  push   %ebp
08ac76a9 +0x01:  mov    %esp,%ebp
08ac76ab +0x03:  sub    $0x18,%esp
08ac76ae +0x06:  mov    0x8(%ebp),%eax
08ac76b1 +0x09:  movl   $&_ZTV16IPackFileProcess+0x8,(%eax)
08ac76b7 +0x0f:  mov    &_ZN16IPackFileProcess12s_ref_count_E,%eax
08ac76bc +0x14:  sub    $0x1,%eax
08ac76bf +0x17:  mov    %eax,&_ZN16IPackFileProcess12s_ref_count_E
08ac76c4 +0x1c:  mov    &_ZN16IPackFileProcess12s_ref_count_E,%eax
08ac76c9 +0x21:  test   %eax,%eax
08ac76cb +0x23:  jg     08ac7700 <+0x58>
08ac76cd +0x25:  mov    &_ZN16IPackFileProcess16s_common_buffer_E,%eax
08ac76d2 +0x2a:  test   %eax,%eax
08ac76d4 +0x2c:  je     08ac76ec <+0x44>
08ac76d6 +0x2e:  mov    &_ZN16IPackFileProcess16s_common_buffer_E,%eax
08ac76db +0x33:  test   %eax,%eax
08ac76dd +0x35:  je     08ac76ec <+0x44>
08ac76df +0x37:  mov    &_ZN16IPackFileProcess16s_common_buffer_E,%eax
08ac76e4 +0x3c:  mov    %eax,(%esp)
08ac76e7 +0x3f:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ac76ec +0x44:  movl   $0x0,&_ZN16IPackFileProcess16s_common_buffer_E
08ac76f6 +0x4e:  movl   $0x0,&_ZN16IPackFileProcess21s_common_buffer_size_E
08ac7700 +0x58:  mov    $0x0,%eax
08ac7705 +0x5d:  test   %al,%al
08ac7707 +0x5f:  je     08ac7714 <+0x6c>
08ac7709 +0x61:  mov    0x8(%ebp),%eax
08ac770c +0x64:  mov    %eax,(%esp)
08ac770f +0x67:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ac7714 +0x6c:  leave
08ac7715 +0x6d:  ret
```

## 反编译 C

```c
// IPackFileProcess::~IPackFileProcess @ 0x8ac76a8

/* WARNING: Removing unreachable block (ram,0x08ac7709) */
/* DWARF original prototype: void ~IPackFileProcess(IPackFileProcess * this, int __in_chrg) */

void __thiscall IPackFileProcess::~IPackFileProcess(IPackFileProcess *this,int __in_chrg)

{
  this->_vptr_IPackFileProcess = (_func_int_varargs **)&PTR__IPackFileProcess_08e2eaf8;
  s_ref_count_ = s_ref_count_ + -1;
  if (s_ref_count_ < 1) {
    if ((s_common_buffer_ != (uchar *)0x0) && (s_common_buffer_ != (uchar *)0x0)) {
      operator_delete__(s_common_buffer_);
    }
    s_common_buffer_ = (uchar *)0x0;
    s_common_buffer_size_ = 0;
  }
  return;
}
```
