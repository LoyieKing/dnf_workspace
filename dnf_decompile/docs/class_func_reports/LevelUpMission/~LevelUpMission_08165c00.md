# ~LevelUpMission

`_ZN14LevelUpMissionD0Ev`

`LevelUpMission::~LevelUpMission()`

| 类 | 地址 |
|---|---|
| `LevelUpMission` | `0x08165c00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08165c00  _ZN14LevelUpMissionD0Ev
#           LevelUpMission::~LevelUpMission()
# range [0x08165c00, 0x08165c1d]
08165c00 +0x00:  push   %ebp
08165c01 +0x01:  mov    %esp,%ebp
08165c03 +0x03:  sub    $0x18,%esp
08165c06 +0x06:  mov    0x8(%ebp),%eax
08165c09 +0x09:  mov    %eax,(%esp)
08165c0c +0x0c:  call   08165bd0 <_ZN14LevelUpMissionD1Ev>  ; LevelUpMission::~LevelUpMission()
08165c11 +0x11:  mov    0x8(%ebp),%eax
08165c14 +0x14:  mov    %eax,(%esp)
08165c17 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08165c1c +0x1c:  leave
08165c1d +0x1d:  ret
```

## 反编译 C

```c
// LevelUpMission::~LevelUpMission @ 0x8165c00

/* LevelUpMission::~LevelUpMission() */

void __thiscall LevelUpMission::~LevelUpMission(LevelUpMission *this)

{
  ~LevelUpMission(this);
  operator_delete(this);
  return;
}
```
