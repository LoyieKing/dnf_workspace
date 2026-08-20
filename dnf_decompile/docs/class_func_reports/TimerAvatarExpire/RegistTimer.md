# RegistTimer

`_ZN17TimerAvatarExpire11RegistTimerEP5CUser`

`TimerAvatarExpire::RegistTimer(CUser*)`

| 类 | 地址 |
|---|---|
| `TimerAvatarExpire` | `0x08632b32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08632b32  _ZN17TimerAvatarExpire11RegistTimerEP5CUser
#           TimerAvatarExpire::RegistTimer(CUser*)
# range [0x08632b32, 0x08632bbb]
08632b32 +0x00:  push   %ebp
08632b33 +0x01:  mov    %esp,%ebp
08632b35 +0x03:  push   %edi
08632b36 +0x04:  push   %esi
08632b37 +0x05:  push   %ebx
08632b38 +0x06:  sub    $0x3c,%esp
08632b3b +0x09:  mov    0xc(%ebp),%eax
08632b3e +0x0c:  mov    %eax,(%esp)
08632b41 +0x0f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08632b46 +0x14:  mov    %eax,%ebx
08632b48 +0x16:  mov    0xc(%ebp),%eax
08632b4b +0x19:  mov    %eax,(%esp)
08632b4e +0x1c:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08632b53 +0x21:  movzwl %ax,%edi
08632b56 +0x24:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08632b5b +0x29:  mov    0x380(%eax),%eax
08632b61 +0x2f:  shl    $0x2,%eax
08632b64 +0x32:  mov    %eax,%edx
08632b66 +0x34:  shl    $0x4,%edx
08632b69 +0x37:  mov    %edx,%ecx
08632b6b +0x39:  sub    %eax,%ecx
08632b6d +0x3b:  mov    %ecx,-0x1c(%ebp)
08632b70 +0x3e:  mov    0xc(%ebp),%eax
08632b73 +0x41:  mov    %eax,(%esp)
08632b76 +0x44:  call   084ecd42 <_GLOBAL__I__Z7getUserj+0x3cf4>  ; global constructors keyed to getUser(unsigned int)+0x3cf4
08632b7b +0x49:  movswl %ax,%esi
08632b7e +0x4c:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08632b83 +0x51:  mov    %ebx,0x18(%esp)
08632b87 +0x55:  mov    %edi,0x14(%esp)
08632b8b +0x59:  mov    -0x1c(%ebp),%edx
08632b8e +0x5c:  mov    %edx,0x10(%esp)
08632b92 +0x60:  movl   $0x51,0xc(%esp)
08632b9a +0x68:  mov    %esi,0x8(%esp)
08632b9e +0x6c:  movl   $0x0,0x4(%esp)
08632ba6 +0x74:  mov    %eax,(%esp)
08632ba9 +0x77:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08632bae +0x7c:  mov    $0x1,%eax
08632bb3 +0x81:  add    $0x3c,%esp
08632bb6 +0x84:  pop    %ebx
08632bb7 +0x85:  pop    %esi
08632bb8 +0x86:  pop    %edi
08632bb9 +0x87:  pop    %ebp
08632bba +0x88:  ret
08632bbb +0x89:  nop
```

## 反编译 C

```c
// TimerAvatarExpire::RegistTimer @ 0x8632b32

/* TimerAvatarExpire::RegistTimer(CUser*) */

undefined4 __thiscall TimerAvatarExpire::RegistTimer(TimerAvatarExpire *this,CUser *param_1)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  TimerQueue *pTVar5;
  
  uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  uVar1 = CUser::get_unique_id(param_1);
  iVar4 = G_CEnvironment();
  iVar4 = *(int *)(iVar4 + 0x380);
  sVar2 = CUser::GetSlotIDX(param_1);
  pTVar5 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar5,0,(int)sVar2,0x51,iVar4 * 0x3c,uVar1,uVar3);
  return 1;
}
```
