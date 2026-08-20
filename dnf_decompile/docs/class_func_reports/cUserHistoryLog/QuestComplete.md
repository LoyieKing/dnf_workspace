# QuestComplete

`_ZN15cUserHistoryLog13QuestCompleteEi`

`cUserHistoryLog::QuestComplete(int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x0868514e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868514e  _ZN15cUserHistoryLog13QuestCompleteEi
#           cUserHistoryLog::QuestComplete(int)
# range [0x0868514e, 0x08685171]
0868514e +0x00:  push   %ebp
0868514f +0x01:  mov    %esp,%ebp
08685151 +0x03:  sub    $0x18,%esp
08685154 +0x06:  mov    0x8(%ebp),%eax
08685157 +0x09:  mov    (%eax),%eax
08685159 +0x0b:  mov    0xc(%ebp),%edx
0868515c +0x0e:  mov    %edx,0x8(%esp)
08685160 +0x12:  movl   $"QuestComplete,%d",0x4(%esp)
08685168 +0x1a:  mov    %eax,(%esp)
0868516b +0x1d:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08685170 +0x22:  leave
08685171 +0x23:  ret
```

## 反编译 C

```c
// cUserHistoryLog::QuestComplete @ 0x868514e

/* cUserHistoryLog::QuestComplete(int) */

void __thiscall cUserHistoryLog::QuestComplete(cUserHistoryLog *this,int param_1)

{
  CUser::LogHistory(*(CUser **)this,"QuestComplete,%d",param_1);
  return;
}
```
