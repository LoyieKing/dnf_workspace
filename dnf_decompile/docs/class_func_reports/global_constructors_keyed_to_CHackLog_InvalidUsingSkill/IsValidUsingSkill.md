# IsValidUsingSkill

`_GLOBAL__I__ZN26CHackLog_InvalidUsingSkill17IsValidUsingSkillEPK25SKILL_USING_VALIDATE_INFO`

`global constructors keyed to CHackLog_InvalidUsingSkill::IsValidUsingSkill(SKILL_USING_VALIDATE_INFO const*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CHackLog_InvalidUsingSkill` | `0x082866a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082866a0  _GLOBAL__I__ZN26CHackLog_InvalidUsingSkill17IsValidUsingSkillEPK25SKILL_USING_VALIDATE_INFO
#           global constructors keyed to CHackLog_InvalidUsingSkill::IsValidUsingSkill(SKILL_USING_VALIDATE_INFO const*)
# range [0x082866a0, 0x082866bb]
082866a0 +0x00:  push   %ebp
082866a1 +0x01:  mov    %esp,%ebp
082866a3 +0x03:  sub    $0x18,%esp
082866a6 +0x06:  movl   $0xffff,0x4(%esp)
082866ae +0x0e:  movl   $0x1,(%esp)
082866b5 +0x15:  call   08286660 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
082866ba +0x1a:  leave
082866bb +0x1b:  ret
```

## 反编译 C

```c
// <global>::global @ 0x82866a0

/* CHackLog_InvalidUsingSkill::IsValidUsingSkill(SKILL_USING_VALIDATE_INFO const*) */

void CHackLog_InvalidUsingSkill::_GLOBAL__I_IsValidUsingSkill(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
