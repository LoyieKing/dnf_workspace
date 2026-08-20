# ~IPackFileProcess

`_ZN16IPackFileProcessD0Ev`

`IPackFileProcess::~IPackFileProcess()`

| 类 | 地址 |
|---|---|
| `IPackFileProcess` | `0x08ac7716` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac7716  _ZN16IPackFileProcessD0Ev
#           IPackFileProcess::~IPackFileProcess()
# range [0x08ac7716, 0x08ac7733]
08ac7716 +0x00:  push   %ebp
08ac7717 +0x01:  mov    %esp,%ebp
08ac7719 +0x03:  sub    $0x18,%esp
08ac771c +0x06:  mov    0x8(%ebp),%eax
08ac771f +0x09:  mov    %eax,(%esp)
08ac7722 +0x0c:  call   08ac76a8 <_ZN16IPackFileProcessD1Ev>  ; IPackFileProcess::~IPackFileProcess()
08ac7727 +0x11:  mov    0x8(%ebp),%eax
08ac772a +0x14:  mov    %eax,(%esp)
08ac772d +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ac7732 +0x1c:  leave
08ac7733 +0x1d:  ret
```

## 反编译 C

```c
// IPackFileProcess::~IPackFileProcess @ 0x8ac7716

/* DWARF original prototype: void ~IPackFileProcess(IPackFileProcess * this, int __in_chrg) */

void __thiscall IPackFileProcess::~IPackFileProcess(IPackFileProcess *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  ~IPackFileProcess(this,in_stack_ffffffe8);
  operator_delete(this);
  return;
}
```
