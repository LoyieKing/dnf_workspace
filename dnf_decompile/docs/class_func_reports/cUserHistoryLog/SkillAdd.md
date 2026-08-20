# SkillAdd

`_ZN15cUserHistoryLog8SkillAddEiiii15eSkillAddReason`

`cUserHistoryLog::SkillAdd(int, int, int, int, eSkillAddReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08682b2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08682b2e  _ZN15cUserHistoryLog8SkillAddEiiii15eSkillAddReason
#           cUserHistoryLog::SkillAdd(int, int, int, int, eSkillAddReason)
# range [0x08682b2e, 0x08682b6d]
08682b2e +0x00:  push   %ebp
08682b2f +0x01:  mov    %esp,%ebp
08682b31 +0x03:  sub    $0x28,%esp
08682b34 +0x06:  mov    0x1c(%ebp),%edx
08682b37 +0x09:  mov    0x8(%ebp),%eax
08682b3a +0x0c:  mov    (%eax),%eax
08682b3c +0x0e:  mov    0x10(%ebp),%ecx
08682b3f +0x11:  mov    %ecx,0x18(%esp)
08682b43 +0x15:  mov    %edx,0x14(%esp)
08682b47 +0x19:  mov    0x18(%ebp),%edx
08682b4a +0x1c:  mov    %edx,0x10(%esp)
08682b4e +0x20:  mov    0x14(%ebp),%edx
08682b51 +0x23:  mov    %edx,0xc(%esp)
08682b55 +0x27:  mov    0xc(%ebp),%edx
08682b58 +0x2a:  mov    %edx,0x8(%esp)
08682b5c +0x2e:  movl   $"Skill+,%d,%d,%d,%d,%d",0x4(%esp)
08682b64 +0x36:  mov    %eax,(%esp)
08682b67 +0x39:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08682b6c +0x3e:  leave
08682b6d +0x3f:  ret
```

## 反编译 C

```c
// cUserHistoryLog::SkillAdd @ 0x8682b2e

/* cUserHistoryLog::SkillAdd(int, int, int, int, eSkillAddReason) */

void __thiscall
cUserHistoryLog::SkillAdd
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_6)

{
  CUser::LogHistory(*(CUser **)this,"Skill+,%d,%d,%d,%d,%d",param_1,param_3,param_4,param_6,param_2)
  ;
  return;
}
```
