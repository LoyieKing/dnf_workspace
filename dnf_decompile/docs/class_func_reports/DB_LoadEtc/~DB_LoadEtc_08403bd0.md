# ~DB_LoadEtc

`_ZN10DB_LoadEtcD0Ev`

`DB_LoadEtc::~DB_LoadEtc()`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08403bd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08403bd0  _ZN10DB_LoadEtcD0Ev
#           DB_LoadEtc::~DB_LoadEtc()
# range [0x08403bd0, 0x08403bed]
08403bd0 +0x00:  push   %ebp
08403bd1 +0x01:  mov    %esp,%ebp
08403bd3 +0x03:  sub    $0x18,%esp
08403bd6 +0x06:  mov    0x8(%ebp),%eax
08403bd9 +0x09:  mov    %eax,(%esp)
08403bdc +0x0c:  call   08403ba0 <_ZN10DB_LoadEtcD1Ev>  ; DB_LoadEtc::~DB_LoadEtc()
08403be1 +0x11:  mov    0x8(%ebp),%eax
08403be4 +0x14:  mov    %eax,(%esp)
08403be7 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08403bec +0x1c:  leave
08403bed +0x1d:  ret
```

## 反编译 C

```c
// DB_LoadEtc::~DB_LoadEtc @ 0x8403bd0

/* DB_LoadEtc::~DB_LoadEtc() */

void __thiscall DB_LoadEtc::~DB_LoadEtc(DB_LoadEtc *this)

{
  ~DB_LoadEtc(this);
  operator_delete(this);
  return;
}
```
