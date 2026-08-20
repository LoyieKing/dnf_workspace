# _ApplyUserData

`_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND`

`WongWork::CSkillChanger::_ApplyUserData(CUser*, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `WongWork::CSkillChanger` | `0x0860a950` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860a950  _ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND
#           WongWork::CSkillChanger::_ApplyUserData(CUser*, ENUM_SKILL_TREE_KIND)
# range [0x0860a950, 0x0860a954]
0860a950 +0x00:  push   %ebp
0860a951 +0x01:  mov    %esp,%ebp
0860a953 +0x03:  pop    %ebp
0860a954 +0x04:  ret
```

## 反编译 C

```c
// WongWork::CSkillChanger::_ApplyUserData @ 0x860a950

/* WongWork::CSkillChanger::_ApplyUserData(CUser*, ENUM_SKILL_TREE_KIND) */

void WongWork::CSkillChanger::_ApplyUserData(void)

{
  return;
}
```
