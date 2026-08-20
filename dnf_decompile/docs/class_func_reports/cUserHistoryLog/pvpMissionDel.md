# pvpMissionDel

`_ZN15cUserHistoryLog13pvpMissionDelEii`

`cUserHistoryLog::pvpMissionDel(int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686a22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686a22  _ZN15cUserHistoryLog13pvpMissionDelEii
#           cUserHistoryLog::pvpMissionDel(int, int)
# range [0x08686a22, 0x08686a4d]
08686a22 +0x00:  push   %ebp
08686a23 +0x01:  mov    %esp,%ebp
08686a25 +0x03:  sub    $0x18,%esp
08686a28 +0x06:  mov    0x8(%ebp),%eax
08686a2b +0x09:  mov    (%eax),%eax
08686a2d +0x0b:  mov    0x10(%ebp),%edx
08686a30 +0x0e:  mov    %edx,0xc(%esp)
08686a34 +0x12:  mov    0xc(%ebp),%edx
08686a37 +0x15:  mov    %edx,0x8(%esp)
08686a3b +0x19:  movl   $"PvPMission-,%d,%d",0x4(%esp)
08686a43 +0x21:  mov    %eax,(%esp)
08686a46 +0x24:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686a4b +0x29:  leave
08686a4c +0x2a:  ret
08686a4d +0x2b:  nop
```

## 反编译 C

```c
// cUserHistoryLog::pvpMissionDel @ 0x8686a22

/* cUserHistoryLog::pvpMissionDel(int, int) */

void __thiscall cUserHistoryLog::pvpMissionDel(cUserHistoryLog *this,int param_1,int param_2)

{
  CUser::LogHistory(*(CUser **)this,"PvPMission-,%d,%d",param_1,param_2);
  return;
}
```
