# pvpMissionAdd

`_ZN15cUserHistoryLog13pvpMissionAddEiiii`

`cUserHistoryLog::pvpMissionAdd(int, int, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086869e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086869e8  _ZN15cUserHistoryLog13pvpMissionAddEiiii
#           cUserHistoryLog::pvpMissionAdd(int, int, int, int)
# range [0x086869e8, 0x08686a21]
086869e8 +0x00:  push   %ebp
086869e9 +0x01:  mov    %esp,%ebp
086869eb +0x03:  sub    $0x28,%esp
086869ee +0x06:  mov    0x8(%ebp),%eax
086869f1 +0x09:  mov    (%eax),%eax
086869f3 +0x0b:  mov    0x18(%ebp),%edx
086869f6 +0x0e:  mov    %edx,0x14(%esp)
086869fa +0x12:  mov    0x14(%ebp),%edx
086869fd +0x15:  mov    %edx,0x10(%esp)
08686a01 +0x19:  mov    0x10(%ebp),%edx
08686a04 +0x1c:  mov    %edx,0xc(%esp)
08686a08 +0x20:  mov    0xc(%ebp),%edx
08686a0b +0x23:  mov    %edx,0x8(%esp)
08686a0f +0x27:  movl   $"PvPMission+,%d,%d,%d,%d",0x4(%esp)
08686a17 +0x2f:  mov    %eax,(%esp)
08686a1a +0x32:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686a1f +0x37:  leave
08686a20 +0x38:  ret
08686a21 +0x39:  nop
```

## 反编译 C

```c
// cUserHistoryLog::pvpMissionAdd @ 0x86869e8

/* cUserHistoryLog::pvpMissionAdd(int, int, int, int) */

void __thiscall
cUserHistoryLog::pvpMissionAdd
          (cUserHistoryLog *this,int param_1,int param_2,int param_3,int param_4)

{
  CUser::LogHistory(*(CUser **)this,"PvPMission+,%d,%d,%d,%d",param_1,param_2,param_3,param_4);
  return;
}
```
