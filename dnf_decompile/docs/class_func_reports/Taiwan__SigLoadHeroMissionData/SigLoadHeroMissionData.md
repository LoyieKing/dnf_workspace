# SigLoadHeroMissionData

`_ZN6Taiwan22SigLoadHeroMissionDataC1Ev`

`Taiwan::SigLoadHeroMissionData::SigLoadHeroMissionData()`

| 类 | 地址 |
|---|---|
| `Taiwan::SigLoadHeroMissionData` | `0x081639f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081639f0  _ZN6Taiwan22SigLoadHeroMissionDataC1Ev
#           Taiwan::SigLoadHeroMissionData::SigLoadHeroMissionData()
# range [0x081639f0, 0x08163a03]
081639f0 +0x00:  push   %ebp
081639f1 +0x01:  mov    %esp,%ebp
081639f3 +0x03:  sub    $0x18,%esp
081639f6 +0x06:  mov    0x8(%ebp),%eax
081639f9 +0x09:  mov    %eax,(%esp)
081639fc +0x0c:  call   08163a04 <_ZN6Taiwan22SigLoadHeroMissionData4initEv>  ; Taiwan::SigLoadHeroMissionData::init()
08163a01 +0x11:  leave
08163a02 +0x12:  ret
08163a03 +0x13:  nop
```

## 反编译 C

```c
// Taiwan::SigLoadHeroMissionData::SigLoadHeroMissionData @ 0x81639f0

/* Taiwan::SigLoadHeroMissionData::SigLoadHeroMissionData() */

void __thiscall Taiwan::SigLoadHeroMissionData::SigLoadHeroMissionData(SigLoadHeroMissionData *this)

{
  init(this);
  return;
}
```
