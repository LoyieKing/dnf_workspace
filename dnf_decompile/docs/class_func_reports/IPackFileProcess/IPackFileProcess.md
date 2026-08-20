# IPackFileProcess

`_ZN16IPackFileProcessC1Ev`

`IPackFileProcess::IPackFileProcess()`

| 类 | 地址 |
|---|---|
| `IPackFileProcess` | `0x08ac768c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac768c  _ZN16IPackFileProcessC1Ev
#           IPackFileProcess::IPackFileProcess()
# range [0x08ac768c, 0x08ac76a7]
08ac768c +0x00:  push   %ebp
08ac768d +0x01:  mov    %esp,%ebp
08ac768f +0x03:  mov    0x8(%ebp),%eax
08ac7692 +0x06:  movl   $&_ZTV16IPackFileProcess+0x8,(%eax)
08ac7698 +0x0c:  mov    &_ZN16IPackFileProcess12s_ref_count_E,%eax
08ac769d +0x11:  add    $0x1,%eax
08ac76a0 +0x14:  mov    %eax,&_ZN16IPackFileProcess12s_ref_count_E
08ac76a5 +0x19:  pop    %ebp
08ac76a6 +0x1a:  ret
08ac76a7 +0x1b:  nop
```

## 反编译 C

```c
// IPackFileProcess::IPackFileProcess @ 0x8ac768c

/* DWARF original prototype: void IPackFileProcess(IPackFileProcess * this) */

void __thiscall IPackFileProcess::IPackFileProcess(IPackFileProcess *this)

{
  this->_vptr_IPackFileProcess = (_func_int_varargs **)&PTR__IPackFileProcess_08e2eaf8;
  s_ref_count_ = s_ref_count_ + 1;
  return;
}
```
