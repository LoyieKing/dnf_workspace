# registTimer

`_ZN29TimerVendingMachineItemNotify11registTimerEimjj`

`TimerVendingMachineItemNotify::registTimer(int, unsigned long, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerVendingMachineItemNotify` | `0x08638074` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08638074  _ZN29TimerVendingMachineItemNotify11registTimerEimjj
#           TimerVendingMachineItemNotify::registTimer(int, unsigned long, unsigned int, unsigned int)
# range [0x08638074, 0x086380bb]
08638074 +0x00:  push   %ebp
08638075 +0x01:  mov    %esp,%ebp
08638077 +0x03:  push   %esi
08638078 +0x04:  push   %ebx
08638079 +0x05:  sub    $0x20,%esp
0863807c +0x08:  mov    0xc(%ebp),%esi
0863807f +0x0b:  mov    0x14(%ebp),%ebx
08638082 +0x0e:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08638087 +0x13:  mov    0x10(%ebp),%edx
0863808a +0x16:  mov    %edx,0x18(%esp)
0863808e +0x1a:  mov    %esi,0x14(%esp)
08638092 +0x1e:  mov    %ebx,0x10(%esp)
08638096 +0x22:  movl   $0xa,0xc(%esp)
0863809e +0x2a:  mov    0x8(%ebp),%edx
086380a1 +0x2d:  mov    %edx,0x8(%esp)
086380a5 +0x31:  movl   $0x0,0x4(%esp)
086380ad +0x39:  mov    %eax,(%esp)
086380b0 +0x3c:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086380b5 +0x41:  add    $0x20,%esp
086380b8 +0x44:  pop    %ebx
086380b9 +0x45:  pop    %esi
086380ba +0x46:  pop    %ebp
086380bb +0x47:  ret
```

## 反编译 C

```c
// TimerVendingMachineItemNotify::registTimer @ 0x8638074

/* TimerVendingMachineItemNotify::registTimer(int, unsigned long, unsigned int, unsigned int) */

void TimerVendingMachineItemNotify::registTimer(int param_1,ulong param_2,uint param_3,uint param_4)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,0,param_1,10,param_4,param_2,param_3);
  return;
}
```
