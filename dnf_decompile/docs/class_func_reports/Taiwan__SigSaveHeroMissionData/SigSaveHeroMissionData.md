# SigSaveHeroMissionData

`_ZN6Taiwan22SigSaveHeroMissionDataC1Ev`

`Taiwan::SigSaveHeroMissionData::SigSaveHeroMissionData()`

| 类 | 地址 |
|---|---|
| `Taiwan::SigSaveHeroMissionData` | `0x081639ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081639ac  _ZN6Taiwan22SigSaveHeroMissionDataC1Ev
#           Taiwan::SigSaveHeroMissionData::SigSaveHeroMissionData()
# range [0x081639ac, 0x081639bf]
081639ac +0x00:  push   %ebp
081639ad +0x01:  mov    %esp,%ebp
081639af +0x03:  sub    $0x18,%esp
081639b2 +0x06:  mov    0x8(%ebp),%eax
081639b5 +0x09:  mov    %eax,(%esp)
081639b8 +0x0c:  call   081639c0 <_ZN6Taiwan22SigSaveHeroMissionData4initEv>  ; Taiwan::SigSaveHeroMissionData::init()
081639bd +0x11:  leave
081639be +0x12:  ret
081639bf +0x13:  nop
```

## 反编译 C

```c
// Taiwan::SigSaveHeroMissionData::SigSaveHeroMissionData @ 0x81639ac

/* Taiwan::SigSaveHeroMissionData::SigSaveHeroMissionData() */

void __thiscall Taiwan::SigSaveHeroMissionData::SigSaveHeroMissionData(SigSaveHeroMissionData *this)

{
  init(this);
  return;
}
```
