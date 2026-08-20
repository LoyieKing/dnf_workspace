# ~UseFatigueMission

`_ZN17UseFatigueMissionD0Ev`

`UseFatigueMission::~UseFatigueMission()`

| 类 | 地址 |
|---|---|
| `UseFatigueMission` | `0x081656e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081656e8  _ZN17UseFatigueMissionD0Ev
#           UseFatigueMission::~UseFatigueMission()
# range [0x081656e8, 0x08165705]
081656e8 +0x00:  push   %ebp
081656e9 +0x01:  mov    %esp,%ebp
081656eb +0x03:  sub    $0x18,%esp
081656ee +0x06:  mov    0x8(%ebp),%eax
081656f1 +0x09:  mov    %eax,(%esp)
081656f4 +0x0c:  call   081656b8 <_ZN17UseFatigueMissionD1Ev>  ; UseFatigueMission::~UseFatigueMission()
081656f9 +0x11:  mov    0x8(%ebp),%eax
081656fc +0x14:  mov    %eax,(%esp)
081656ff +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08165704 +0x1c:  leave
08165705 +0x1d:  ret
```

## 反编译 C

```c
// UseFatigueMission::~UseFatigueMission @ 0x81656e8

/* UseFatigueMission::~UseFatigueMission() */

void __thiscall UseFatigueMission::~UseFatigueMission(UseFatigueMission *this)

{
  ~UseFatigueMission(this);
  operator_delete(this);
  return;
}
```
