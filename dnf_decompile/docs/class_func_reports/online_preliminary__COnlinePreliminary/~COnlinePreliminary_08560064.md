# ~COnlinePreliminary

`_ZN18online_preliminary18COnlinePreliminaryD0Ev`

`online_preliminary::COnlinePreliminary::~COnlinePreliminary()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08560064` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08560064  _ZN18online_preliminary18COnlinePreliminaryD0Ev
#           online_preliminary::COnlinePreliminary::~COnlinePreliminary()
# range [0x08560064, 0x08560081]
08560064 +0x00:  push   %ebp
08560065 +0x01:  mov    %esp,%ebp
08560067 +0x03:  sub    $0x18,%esp
0856006a +0x06:  mov    0x8(%ebp),%eax
0856006d +0x09:  mov    %eax,(%esp)
08560070 +0x0c:  call   0855ffd6 <_ZN18online_preliminary18COnlinePreliminaryD1Ev>  ; online_preliminary::COnlinePreliminary::~COnlinePreliminary()
08560075 +0x11:  mov    0x8(%ebp),%eax
08560078 +0x14:  mov    %eax,(%esp)
0856007b +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08560080 +0x1c:  leave
08560081 +0x1d:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::~COnlinePreliminary @ 0x8560064

/* online_preliminary::COnlinePreliminary::~COnlinePreliminary() */

void __thiscall
online_preliminary::COnlinePreliminary::~COnlinePreliminary(COnlinePreliminary *this)

{
  ~COnlinePreliminary(this);
  operator_delete(this);
  return;
}
```
