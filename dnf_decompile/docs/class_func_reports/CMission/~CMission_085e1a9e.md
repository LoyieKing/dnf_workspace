# ~CMission

`_ZN8CMissionD0Ev`

`CMission::~CMission()`

| 类 | 地址 |
|---|---|
| `CMission` | `0x085e1a9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e1a9e  _ZN8CMissionD0Ev
#           CMission::~CMission()
# range [0x085e1a9e, 0x085e1abb]
085e1a9e +0x00:  push   %ebp
085e1a9f +0x01:  mov    %esp,%ebp
085e1aa1 +0x03:  sub    $0x18,%esp
085e1aa4 +0x06:  mov    0x8(%ebp),%eax
085e1aa7 +0x09:  mov    %eax,(%esp)
085e1aaa +0x0c:  call   085e1a6a <_ZN8CMissionD1Ev>  ; CMission::~CMission()
085e1aaf +0x11:  mov    0x8(%ebp),%eax
085e1ab2 +0x14:  mov    %eax,(%esp)
085e1ab5 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085e1aba +0x1c:  leave
085e1abb +0x1d:  ret
```

## 反编译 C

```c
// CMission::~CMission @ 0x85e1a9e

/* CMission::~CMission() */

void __thiscall CMission::~CMission(CMission *this)

{
  ~CMission(this);
  operator_delete(this);
  return;
}
```
