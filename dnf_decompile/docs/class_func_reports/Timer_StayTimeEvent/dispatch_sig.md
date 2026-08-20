# dispatch_sig

`_ZN19Timer_StayTimeEvent12dispatch_sigEiij`

`Timer_StayTimeEvent::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_StayTimeEvent` | `0x0863b928` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863b928  _ZN19Timer_StayTimeEvent12dispatch_sigEiij
#           Timer_StayTimeEvent::dispatch_sig(int, int, unsigned int)
# range [0x0863b928, 0x0863b9d9]
0863b928 +0x00:  push   %ebp
0863b929 +0x01:  mov    %esp,%ebp
0863b92b +0x03:  push   %ebx
0863b92c +0x04:  sub    $0x24,%esp
0863b92f +0x07:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0863b934 +0x0c:  movl   $0x9f,0x4(%esp)
0863b93c +0x14:  mov    %eax,(%esp)
0863b93f +0x17:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0863b944 +0x1c:  mov    %eax,-0xc(%ebp)
0863b947 +0x1f:  cmpl   $0x0,-0xc(%ebp)
0863b94b +0x23:  je     0863b972 <+0x4a>
0863b94d +0x25:  mov    -0xc(%ebp),%eax
0863b950 +0x28:  mov    (%eax),%eax
0863b952 +0x2a:  add    $0x34,%eax
0863b955 +0x2d:  mov    (%eax),%edx
0863b957 +0x2f:  mov    -0xc(%ebp),%eax
0863b95a +0x32:  movl   $0x0,0x4(%esp)
0863b962 +0x3a:  mov    %eax,(%esp)
0863b965 +0x3d:  call   *%edx
0863b967 +0x3f:  test   %al,%al
0863b969 +0x41:  je     0863b972 <+0x4a>
0863b96b +0x43:  mov    $0x1,%eax
0863b970 +0x48:  jmp    0863b977 <+0x4f>
0863b972 +0x4a:  mov    $0x0,%eax
0863b977 +0x4f:  test   %al,%al
0863b979 +0x51:  je     0863b9cf <+0xa7>
0863b97b +0x53:  movl   $0x0,(%esp)
0863b982 +0x5a:  call   0807d750 <_init+0x48>
0863b987 +0x5f:  mov    %eax,%ebx
0863b989 +0x61:  mov    -0xc(%ebp),%eax
0863b98c +0x64:  mov    %eax,(%esp)
0863b98f +0x67:  call   0816bebc <_ZN14CEventStayTime17getRewardStayTimeEv>  ; CEventStayTime::getRewardStayTime()
0863b994 +0x6c:  mov    %ebx,0x8(%esp)
0863b998 +0x70:  mov    %eax,0x4(%esp)
0863b99c +0x74:  lea    -0x14(%ebp),%eax
0863b99f +0x77:  mov    %eax,(%esp)
0863b9a2 +0x7a:  call   0863c002 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x513>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x513
0863b9a7 +0x7f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0863b9ac +0x84:  mov    %eax,%ecx
0863b9ae +0x86:  mov    -0x14(%ebp),%eax
0863b9b1 +0x89:  mov    -0x10(%ebp),%edx
0863b9b4 +0x8c:  mov    %eax,0x4(%esp)
0863b9b8 +0x90:  mov    %edx,0x8(%esp)
0863b9bc +0x94:  mov    %ecx,(%esp)
0863b9bf +0x97:  call   0863d3bc <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x18cd>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x18cd
0863b9c4 +0x9c:  mov    -0xc(%ebp),%eax
0863b9c7 +0x9f:  mov    %eax,(%esp)
0863b9ca +0xa2:  call   0816befa <_ZN14CEventStayTime15RegistNextTimerEv>  ; CEventStayTime::RegistNextTimer()
0863b9cf +0xa7:  mov    $0x1,%eax
0863b9d4 +0xac:  add    $0x24,%esp
0863b9d7 +0xaf:  pop    %ebx
0863b9d8 +0xb0:  pop    %ebp
0863b9d9 +0xb1:  ret
```

## 反编译 C

```c
// Timer_StayTimeEvent::dispatch_sig @ 0x863b928

/* Timer_StayTimeEvent::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_StayTimeEvent::dispatch_sig(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  time_t tVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_18;
  undefined4 local_14;
  CEventStayTime *local_10;
  
  local_10 = (CEventStayTime *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x9f);
  if (local_10 != (CEventStayTime *)0x0) {
    cVar2 = (**(code **)(*(int *)local_10 + 0x34))(local_10,0);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_0863b977;
    }
  }
  bVar1 = false;
LAB_0863b977:
  if (bVar1) {
    tVar3 = time((time_t *)0x0);
    iVar4 = CEventStayTime::getRewardStayTime(local_10);
    CEventStayTime::RewardGoGoFighter::RewardGoGoFighter((RewardGoGoFighter *)&local_18,iVar4,tVar3)
    ;
    uVar5 = G_GameWorld();
    GameWorld::ProcessAllUsers<CEventStayTime::RewardGoGoFighter>(uVar5,local_18,local_14);
    CEventStayTime::RegistNextTimer(local_10);
  }
  return 1;
}
```
