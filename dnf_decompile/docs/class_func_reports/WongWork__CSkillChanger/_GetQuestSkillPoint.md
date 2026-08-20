# _GetQuestSkillPoint

`_ZN8WongWork13CSkillChanger19_GetQuestSkillPointEPK5CUser`

`WongWork::CSkillChanger::_GetQuestSkillPoint(CUser const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CSkillChanger` | `0x0860a6d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860a6d0  _ZN8WongWork13CSkillChanger19_GetQuestSkillPointEPK5CUser
#           WongWork::CSkillChanger::_GetQuestSkillPoint(CUser const*)
# range [0x0860a6d0, 0x0860a6d9]
0860a6d0 +0x00:  push   %ebp
0860a6d1 +0x01:  mov    %esp,%ebp
0860a6d3 +0x03:  mov    $0x0,%eax
0860a6d8 +0x08:  pop    %ebp
0860a6d9 +0x09:  ret
```

## 反编译 C

```c
// WongWork::CSkillChanger::_GetQuestSkillPoint @ 0x860a6d0

/* WongWork::CSkillChanger::_GetQuestSkillPoint(CUser const*) */

undefined4 WongWork::CSkillChanger::_GetQuestSkillPoint(CUser *param_1)

{
  return 0;
}
```
