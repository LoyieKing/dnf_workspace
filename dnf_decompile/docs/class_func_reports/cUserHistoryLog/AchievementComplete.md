# AchievementComplete

`_ZN15cUserHistoryLog19AchievementCompleteEi`

`cUserHistoryLog::AchievementComplete(int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x0868512a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868512a  _ZN15cUserHistoryLog19AchievementCompleteEi
#           cUserHistoryLog::AchievementComplete(int)
# range [0x0868512a, 0x0868514d]
0868512a +0x00:  push   %ebp
0868512b +0x01:  mov    %esp,%ebp
0868512d +0x03:  sub    $0x18,%esp
08685130 +0x06:  mov    0x8(%ebp),%eax
08685133 +0x09:  mov    (%eax),%eax
08685135 +0x0b:  mov    0xc(%ebp),%edx
08685138 +0x0e:  mov    %edx,0x8(%esp)
0868513c +0x12:  movl   $"AchieveComplete,%d",0x4(%esp)
08685144 +0x1a:  mov    %eax,(%esp)
08685147 +0x1d:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868514c +0x22:  leave
0868514d +0x23:  ret
```

## 反编译 C

```c
// cUserHistoryLog::AchievementComplete @ 0x868512a

/* cUserHistoryLog::AchievementComplete(int) */

void __thiscall cUserHistoryLog::AchievementComplete(cUserHistoryLog *this,int param_1)

{
  CUser::LogHistory(*(CUser **)this,"AchieveComplete,%d",param_1);
  return;
}
```
