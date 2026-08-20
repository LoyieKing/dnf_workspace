# dispatch_sig

`_ZN32TimerEndPowerWarVictoriousReward12dispatch_sigEiij`

`TimerEndPowerWarVictoriousReward::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerEndPowerWarVictoriousReward` | `0x086394ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086394ce  _ZN32TimerEndPowerWarVictoriousReward12dispatch_sigEiij
#           TimerEndPowerWarVictoriousReward::dispatch_sig(int, int, unsigned int)
# range [0x086394ce, 0x086394ef]
086394ce +0x00:  push   %ebp
086394cf +0x01:  mov    %esp,%ebp
086394d1 +0x03:  sub    $0x18,%esp
086394d4 +0x06:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086394d9 +0x0b:  movl   $0x35,0x4(%esp)
086394e1 +0x13:  mov    %eax,(%esp)
086394e4 +0x16:  call   08115d60 <_ZN13CEventManager15TriggerEventEndEi>  ; CEventManager::TriggerEventEnd(int)
086394e9 +0x1b:  mov    $0x1,%eax
086394ee +0x20:  leave
086394ef +0x21:  ret
```

## 反编译 C

```c
// TimerEndPowerWarVictoriousReward::dispatch_sig @ 0x86394ce

/* TimerEndPowerWarVictoriousReward::dispatch_sig(int, int, unsigned int) */

undefined4 TimerEndPowerWarVictoriousReward::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CEventManager::TriggerEventEnd(GlobalData::s_event_manager,0x35);
  return 1;
}
```
