# ~AttendanceMission

`_ZN17AttendanceMissionD0Ev`

`AttendanceMission::~AttendanceMission()`

| 类 | 地址 |
|---|---|
| `AttendanceMission` | `0x08165fe4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08165fe4  _ZN17AttendanceMissionD0Ev
#           AttendanceMission::~AttendanceMission()
# range [0x08165fe4, 0x08166001]
08165fe4 +0x00:  push   %ebp
08165fe5 +0x01:  mov    %esp,%ebp
08165fe7 +0x03:  sub    $0x18,%esp
08165fea +0x06:  mov    0x8(%ebp),%eax
08165fed +0x09:  mov    %eax,(%esp)
08165ff0 +0x0c:  call   08165fb4 <_ZN17AttendanceMissionD1Ev>  ; AttendanceMission::~AttendanceMission()
08165ff5 +0x11:  mov    0x8(%ebp),%eax
08165ff8 +0x14:  mov    %eax,(%esp)
08165ffb +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08166000 +0x1c:  leave
08166001 +0x1d:  ret
```

## 反编译 C

```c
// AttendanceMission::~AttendanceMission @ 0x8165fe4

/* AttendanceMission::~AttendanceMission() */

void __thiscall AttendanceMission::~AttendanceMission(AttendanceMission *this)

{
  ~AttendanceMission(this);
  operator_delete(this);
  return;
}
```
