# MercenaryCompetition

`_ZN15cUserHistoryLog20MercenaryCompetitionEjcc`

`cUserHistoryLog::MercenaryCompetition(unsigned int, char, char)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686aca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686aca  _ZN15cUserHistoryLog20MercenaryCompetitionEjcc
#           cUserHistoryLog::MercenaryCompetition(unsigned int, char, char)
# range [0x08686aca, 0x08686b09]
08686aca +0x00:  push   %ebp
08686acb +0x01:  mov    %esp,%ebp
08686acd +0x03:  sub    $0x38,%esp
08686ad0 +0x06:  mov    0x10(%ebp),%edx
08686ad3 +0x09:  mov    0x14(%ebp),%eax
08686ad6 +0x0c:  mov    %dl,-0xc(%ebp)
08686ad9 +0x0f:  mov    %al,-0x10(%ebp)
08686adc +0x12:  movsbl -0x10(%ebp),%ecx
08686ae0 +0x16:  movsbl -0xc(%ebp),%edx
08686ae4 +0x1a:  mov    0x8(%ebp),%eax
08686ae7 +0x1d:  mov    (%eax),%eax
08686ae9 +0x1f:  mov    %ecx,0x10(%esp)
08686aed +0x23:  mov    %edx,0xc(%esp)
08686af1 +0x27:  mov    0xc(%ebp),%edx
08686af4 +0x2a:  mov    %edx,0x8(%esp)
08686af8 +0x2e:  movl   $"MercenaryCompetition,%u,%d,%d",0x4(%esp)
08686b00 +0x36:  mov    %eax,(%esp)
08686b03 +0x39:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686b08 +0x3e:  leave
08686b09 +0x3f:  ret
```

## 反编译 C

```c
// cUserHistoryLog::MercenaryCompetition @ 0x8686aca

/* cUserHistoryLog::MercenaryCompetition(unsigned int, char, char) */

void __thiscall
cUserHistoryLog::MercenaryCompetition(cUserHistoryLog *this,uint param_1,char param_2,char param_3)

{
  CUser::LogHistory(*(CUser **)this,"MercenaryCompetition,%u,%d,%d",param_1,(int)param_2,
                    (int)param_3);
  return;
}
```
