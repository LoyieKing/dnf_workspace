# TradeBegin

`_ZN15cUserHistoryLog10TradeBeginEv`

`cUserHistoryLog::TradeBegin()`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x0868503e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868503e  _ZN15cUserHistoryLog10TradeBeginEv
#           cUserHistoryLog::TradeBegin()
# range [0x0868503e, 0x0868507b]
0868503e +0x00:  push   %ebp
0868503f +0x01:  mov    %esp,%ebp
08685041 +0x03:  sub    $0x18,%esp
08685044 +0x06:  mov    0x8(%ebp),%eax
08685047 +0x09:  add    $0x22,%eax
0868504a +0x0c:  movzbl (%eax),%eax
0868504d +0x0f:  test   %al,%al
0868504f +0x11:  je     0868507a <+0x3c>
08685051 +0x13:  mov    0x8(%ebp),%eax
08685054 +0x16:  lea    0x4(%eax),%ecx
08685057 +0x19:  mov    0x8(%ebp),%eax
0868505a +0x1c:  lea    0x22(%eax),%edx
0868505d +0x1f:  mov    0x8(%ebp),%eax
08685060 +0x22:  mov    (%eax),%eax
08685062 +0x24:  mov    %ecx,0xc(%esp)
08685066 +0x28:  mov    %edx,0x8(%esp)
0868506a +0x2c:  movl   $"Trade+,\"%s\",\"%s\"",0x4(%esp)
08685072 +0x34:  mov    %eax,(%esp)
08685075 +0x37:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868507a +0x3c:  leave
0868507b +0x3d:  ret
```

## 反编译 C

```c
// cUserHistoryLog::TradeBegin @ 0x868503e

/* cUserHistoryLog::TradeBegin() */

void __thiscall cUserHistoryLog::TradeBegin(cUserHistoryLog *this)

{
  if (this[0x22] != (cUserHistoryLog)0x0) {
    CUser::LogHistory(*(CUser **)this,"Trade+,\"%s\",\"%s\"",this + 0x22,this + 4);
  }
  return;
}
```
