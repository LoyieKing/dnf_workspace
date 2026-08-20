# RegistTimerSchedules

`_ZN23DisPatcher_SelectCharac20RegistTimerSchedulesEP5CUser`

`DisPatcher_SelectCharac::RegistTimerSchedules(CUser*)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SelectCharac` | `0x081c7bac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c7bac  _ZN23DisPatcher_SelectCharac20RegistTimerSchedulesEP5CUser
#           DisPatcher_SelectCharac::RegistTimerSchedules(CUser*)
# range [0x081c7bac, 0x081c7c1b]
081c7bac +0x00:  push   %ebp
081c7bad +0x01:  mov    %esp,%ebp
081c7baf +0x03:  push   %edi
081c7bb0 +0x04:  push   %esi
081c7bb1 +0x05:  push   %ebx
081c7bb2 +0x06:  sub    $0x2c,%esp
081c7bb5 +0x09:  mov    0xc(%ebp),%eax
081c7bb8 +0x0c:  mov    %eax,(%esp)
081c7bbb +0x0f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081c7bc0 +0x14:  mov    %eax,%esi
081c7bc2 +0x16:  mov    0xc(%ebp),%eax
081c7bc5 +0x19:  mov    %eax,(%esp)
081c7bc8 +0x1c:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
081c7bcd +0x21:  movzwl %ax,%edi
081c7bd0 +0x24:  mov    0xc(%ebp),%eax
081c7bd3 +0x27:  mov    %eax,(%esp)
081c7bd6 +0x2a:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081c7bdb +0x2f:  mov    %eax,%ebx
081c7bdd +0x31:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
081c7be2 +0x36:  mov    %esi,0x18(%esp)
081c7be6 +0x3a:  mov    %edi,0x14(%esp)
081c7bea +0x3e:  movl   $0x0,0x10(%esp)
081c7bf2 +0x46:  movl   $0x51,0xc(%esp)
081c7bfa +0x4e:  mov    %ebx,0x8(%esp)
081c7bfe +0x52:  movl   $0x0,0x4(%esp)
081c7c06 +0x5a:  mov    %eax,(%esp)
081c7c09 +0x5d:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
081c7c0e +0x62:  mov    $0x1,%eax
081c7c13 +0x67:  add    $0x2c,%esp
081c7c16 +0x6a:  pop    %ebx
081c7c17 +0x6b:  pop    %esi
081c7c18 +0x6c:  pop    %edi
081c7c19 +0x6d:  pop    %ebp
081c7c1a +0x6e:  ret
081c7c1b +0x6f:  nop
```

## 反编译 C

```c
// DisPatcher_SelectCharac::RegistTimerSchedules @ 0x81c7bac

/* DisPatcher_SelectCharac::RegistTimerSchedules(CUser*) */

undefined4 __thiscall
DisPatcher_SelectCharac::RegistTimerSchedules(DisPatcher_SelectCharac *this,CUser *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  TimerQueue *pTVar4;
  
  uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  uVar1 = CUser::get_unique_id(param_1);
  uVar3 = CUser::GetUID(param_1);
  pTVar4 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar4,0,uVar3,0x51,0,uVar1,uVar2);
  return 1;
}
```
