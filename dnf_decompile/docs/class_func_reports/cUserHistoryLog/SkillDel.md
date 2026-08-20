# SkillDel

`_ZN15cUserHistoryLog8SkillDelEiiii15eSkillDelReason`

`cUserHistoryLog::SkillDel(int, int, int, int, eSkillDelReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08682b6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08682b6e  _ZN15cUserHistoryLog8SkillDelEiiii15eSkillDelReason
#           cUserHistoryLog::SkillDel(int, int, int, int, eSkillDelReason)
# range [0x08682b6e, 0x08682bad]
08682b6e +0x00:  push   %ebp
08682b6f +0x01:  mov    %esp,%ebp
08682b71 +0x03:  sub    $0x28,%esp
08682b74 +0x06:  mov    0x1c(%ebp),%edx
08682b77 +0x09:  mov    0x8(%ebp),%eax
08682b7a +0x0c:  mov    (%eax),%eax
08682b7c +0x0e:  mov    0x10(%ebp),%ecx
08682b7f +0x11:  mov    %ecx,0x18(%esp)
08682b83 +0x15:  mov    %edx,0x14(%esp)
08682b87 +0x19:  mov    0x18(%ebp),%edx
08682b8a +0x1c:  mov    %edx,0x10(%esp)
08682b8e +0x20:  mov    0x14(%ebp),%edx
08682b91 +0x23:  mov    %edx,0xc(%esp)
08682b95 +0x27:  mov    0xc(%ebp),%edx
08682b98 +0x2a:  mov    %edx,0x8(%esp)
08682b9c +0x2e:  movl   $"Skill-,%d,%d,%d,%d,%d",0x4(%esp)
08682ba4 +0x36:  mov    %eax,(%esp)
08682ba7 +0x39:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08682bac +0x3e:  leave
08682bad +0x3f:  ret
```

## 反编译 C

```c
// cUserHistoryLog::SkillDel @ 0x8682b6e

/* cUserHistoryLog::SkillDel(int, int, int, int, eSkillDelReason) */

void __thiscall
cUserHistoryLog::SkillDel
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_6)

{
  CUser::LogHistory(*(CUser **)this,"Skill-,%d,%d,%d,%d,%d",param_1,param_3,param_4,param_6,param_2)
  ;
  return;
}
```
