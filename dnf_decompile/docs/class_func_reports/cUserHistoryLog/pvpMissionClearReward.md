# pvpMissionClearReward

`_ZN15cUserHistoryLog21pvpMissionClearRewardEiiii`

`cUserHistoryLog::pvpMissionClearReward(int, int, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686a4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686a4e  _ZN15cUserHistoryLog21pvpMissionClearRewardEiiii
#           cUserHistoryLog::pvpMissionClearReward(int, int, int, int)
# range [0x08686a4e, 0x08686a87]
08686a4e +0x00:  push   %ebp
08686a4f +0x01:  mov    %esp,%ebp
08686a51 +0x03:  sub    $0x28,%esp
08686a54 +0x06:  mov    0x8(%ebp),%eax
08686a57 +0x09:  mov    (%eax),%eax
08686a59 +0x0b:  mov    0x18(%ebp),%edx
08686a5c +0x0e:  mov    %edx,0x14(%esp)
08686a60 +0x12:  mov    0x14(%ebp),%edx
08686a63 +0x15:  mov    %edx,0x10(%esp)
08686a67 +0x19:  mov    0x10(%ebp),%edx
08686a6a +0x1c:  mov    %edx,0xc(%esp)
08686a6e +0x20:  mov    0xc(%ebp),%edx
08686a71 +0x23:  mov    %edx,0x8(%esp)
08686a75 +0x27:  movl   $"PvPMissionReward+,%d,%d,%d,%d",0x4(%esp)
08686a7d +0x2f:  mov    %eax,(%esp)
08686a80 +0x32:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686a85 +0x37:  leave
08686a86 +0x38:  ret
08686a87 +0x39:  nop
```

## 反编译 C

```c
// cUserHistoryLog::pvpMissionClearReward @ 0x8686a4e

/* cUserHistoryLog::pvpMissionClearReward(int, int, int, int) */

void __thiscall
cUserHistoryLog::pvpMissionClearReward
          (cUserHistoryLog *this,int param_1,int param_2,int param_3,int param_4)

{
  CUser::LogHistory(*(CUser **)this,"PvPMissionReward+,%d,%d,%d,%d",param_1,param_2,param_3,param_4)
  ;
  return;
}
```
