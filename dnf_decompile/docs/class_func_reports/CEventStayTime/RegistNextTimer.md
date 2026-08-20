# RegistNextTimer

`_ZN14CEventStayTime15RegistNextTimerEv`

`CEventStayTime::RegistNextTimer()`

| 类 | 地址 |
|---|---|
| `CEventStayTime` | `0x0816befa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816befa  _ZN14CEventStayTime15RegistNextTimerEv
#           CEventStayTime::RegistNextTimer()
# range [0x0816befa, 0x0816bf69]
0816befa +0x00:  push   %ebp
0816befb +0x01:  mov    %esp,%ebp
0816befd +0x03:  push   %ebx
0816befe +0x04:  sub    $0x24,%esp
0816bf01 +0x07:  mov    0x8(%ebp),%eax
0816bf04 +0x0a:  mov    (%eax),%eax
0816bf06 +0x0c:  add    $0x34,%eax
0816bf09 +0x0f:  mov    (%eax),%edx
0816bf0b +0x11:  mov    0x8(%ebp),%eax
0816bf0e +0x14:  movl   $0x0,0x4(%esp)
0816bf16 +0x1c:  mov    %eax,(%esp)
0816bf19 +0x1f:  call   *%edx
0816bf1b +0x21:  xor    $0x1,%eax
0816bf1e +0x24:  test   %al,%al
0816bf20 +0x26:  jne    0816bf63 <+0x69>
0816bf22 +0x28:  mov    0x8(%ebp),%eax
0816bf25 +0x2b:  mov    0x10(%eax),%ebx
0816bf28 +0x2e:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0816bf2d +0x33:  movl   $0x0,0x18(%esp)
0816bf35 +0x3b:  movl   $0x0,0x14(%esp)
0816bf3d +0x43:  mov    %ebx,0x10(%esp)
0816bf41 +0x47:  movl   $0xad,0xc(%esp)
0816bf49 +0x4f:  movl   $0x0,0x8(%esp)
0816bf51 +0x57:  movl   $0x2,0x4(%esp)
0816bf59 +0x5f:  mov    %eax,(%esp)
0816bf5c +0x62:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0816bf61 +0x67:  jmp    0816bf64 <+0x6a>
0816bf63 +0x69:  nop
0816bf64 +0x6a:  add    $0x24,%esp
0816bf67 +0x6d:  pop    %ebx
0816bf68 +0x6e:  pop    %ebp
0816bf69 +0x6f:  ret
```

## 反编译 C

```c
// CEventStayTime::RegistNextTimer @ 0x816befa

/* CEventStayTime::RegistNextTimer() */

void __thiscall CEventStayTime::RegistNextTimer(CEventStayTime *this)

{
  undefined4 uVar1;
  char cVar2;
  TimerQueue *pTVar3;
  
  cVar2 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar2 == '\x01') {
    uVar1 = *(undefined4 *)(this + 0x10);
    pTVar3 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar3,2,0,0xad,uVar1,0,0);
  }
  return;
}
```
