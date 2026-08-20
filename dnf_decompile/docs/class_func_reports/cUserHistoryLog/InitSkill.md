# InitSkill

`_ZN15cUserHistoryLog9InitSkillEiiii16eSkillInitReason`

`cUserHistoryLog::InitSkill(int, int, int, int, eSkillInitReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08682cfa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08682cfa  _ZN15cUserHistoryLog9InitSkillEiiii16eSkillInitReason
#           cUserHistoryLog::InitSkill(int, int, int, int, eSkillInitReason)
# range [0x08682cfa, 0x08682d39]
08682cfa +0x00:  push   %ebp
08682cfb +0x01:  mov    %esp,%ebp
08682cfd +0x03:  sub    $0x28,%esp
08682d00 +0x06:  mov    0x1c(%ebp),%edx
08682d03 +0x09:  mov    0x8(%ebp),%eax
08682d06 +0x0c:  mov    (%eax),%eax
08682d08 +0x0e:  mov    %edx,0x18(%esp)
08682d0c +0x12:  mov    0x18(%ebp),%edx
08682d0f +0x15:  mov    %edx,0x14(%esp)
08682d13 +0x19:  mov    0x14(%ebp),%edx
08682d16 +0x1c:  mov    %edx,0x10(%esp)
08682d1a +0x20:  mov    0x10(%ebp),%edx
08682d1d +0x23:  mov    %edx,0xc(%esp)
08682d21 +0x27:  mov    0xc(%ebp),%edx
08682d24 +0x2a:  mov    %edx,0x8(%esp)
08682d28 +0x2e:  movl   $"SkillInit,%d,%d,%d,%d,%d",0x4(%esp)
08682d30 +0x36:  mov    %eax,(%esp)
08682d33 +0x39:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08682d38 +0x3e:  leave
08682d39 +0x3f:  ret
```

## 反编译 C

```c
// cUserHistoryLog::InitSkill @ 0x8682cfa

/* cUserHistoryLog::InitSkill(int, int, int, int, eSkillInitReason) */

void __thiscall
cUserHistoryLog::InitSkill
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_6)

{
  CUser::LogHistory(*(CUser **)this,"SkillInit,%d,%d,%d,%d,%d",param_1,param_2,param_3,param_4,
                    param_6);
  return;
}
```
