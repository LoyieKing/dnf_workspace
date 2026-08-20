# RegistNextTimer

`_ZN26TimerCheckForcedDisconnect15RegistNextTimerEP5CUser`

`TimerCheckForcedDisconnect::RegistNextTimer(CUser*)`

| 类 | 地址 |
|---|---|
| `TimerCheckForcedDisconnect` | `0x08636f26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08636f26  _ZN26TimerCheckForcedDisconnect15RegistNextTimerEP5CUser
#           TimerCheckForcedDisconnect::RegistNextTimer(CUser*)
# range [0x08636f26, 0x08636f8f]
08636f26 +0x00:  push   %ebp
08636f27 +0x01:  mov    %esp,%ebp
08636f29 +0x03:  push   %esi
08636f2a +0x04:  push   %ebx
08636f2b +0x05:  sub    $0x30,%esp
08636f2e +0x08:  movl   $0xa,-0xc(%ebp)
08636f35 +0x0f:  mov    0xc(%ebp),%eax
08636f38 +0x12:  mov    %eax,(%esp)
08636f3b +0x15:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08636f40 +0x1a:  movzwl %ax,%esi
08636f43 +0x1d:  mov    0xc(%ebp),%eax
08636f46 +0x20:  mov    %eax,(%esp)
08636f49 +0x23:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08636f4e +0x28:  mov    %eax,%ebx
08636f50 +0x2a:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08636f55 +0x2f:  movl   $0x0,0x18(%esp)
08636f5d +0x37:  mov    %esi,0x14(%esp)
08636f61 +0x3b:  mov    -0xc(%ebp),%edx
08636f64 +0x3e:  mov    %edx,0x10(%esp)
08636f68 +0x42:  movl   $0x6a,0xc(%esp)
08636f70 +0x4a:  mov    %ebx,0x8(%esp)
08636f74 +0x4e:  movl   $0x0,0x4(%esp)
08636f7c +0x56:  mov    %eax,(%esp)
08636f7f +0x59:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08636f84 +0x5e:  mov    $0x1,%eax
08636f89 +0x63:  add    $0x30,%esp
08636f8c +0x66:  pop    %ebx
08636f8d +0x67:  pop    %esi
08636f8e +0x68:  pop    %ebp
08636f8f +0x69:  ret
```

## 反编译 C

```c
// TimerCheckForcedDisconnect::RegistNextTimer @ 0x8636f26

/* TimerCheckForcedDisconnect::RegistNextTimer(CUser*) */

undefined4 __thiscall
TimerCheckForcedDisconnect::RegistNextTimer(TimerCheckForcedDisconnect *this,CUser *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  uVar1 = CUser::get_unique_id(param_1);
  uVar2 = CUser::GetUID(param_1);
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,0,uVar2,0x6a,10,uVar1,0);
  return 1;
}
```
