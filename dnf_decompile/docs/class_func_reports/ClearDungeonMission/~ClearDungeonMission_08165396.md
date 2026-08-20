# ~ClearDungeonMission

`_ZN19ClearDungeonMissionD0Ev`

`ClearDungeonMission::~ClearDungeonMission()`

| 类 | 地址 |
|---|---|
| `ClearDungeonMission` | `0x08165396` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08165396  _ZN19ClearDungeonMissionD0Ev
#           ClearDungeonMission::~ClearDungeonMission()
# range [0x08165396, 0x081653b3]
08165396 +0x00:  push   %ebp
08165397 +0x01:  mov    %esp,%ebp
08165399 +0x03:  sub    $0x18,%esp
0816539c +0x06:  mov    0x8(%ebp),%eax
0816539f +0x09:  mov    %eax,(%esp)
081653a2 +0x0c:  call   08165366 <_ZN19ClearDungeonMissionD1Ev>  ; ClearDungeonMission::~ClearDungeonMission()
081653a7 +0x11:  mov    0x8(%ebp),%eax
081653aa +0x14:  mov    %eax,(%esp)
081653ad +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081653b2 +0x1c:  leave
081653b3 +0x1d:  ret
```

## 反编译 C

```c
// ClearDungeonMission::~ClearDungeonMission @ 0x8165396

/* ClearDungeonMission::~ClearDungeonMission() */

void __thiscall ClearDungeonMission::~ClearDungeonMission(ClearDungeonMission *this)

{
  ~ClearDungeonMission(this);
  operator_delete(this);
  return;
}
```
