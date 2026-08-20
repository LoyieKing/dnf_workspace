# dispatch_sig

`_ZN24Timer_Send_Ontime_Reward12dispatch_sigEiij`

`Timer_Send_Ontime_Reward::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_Send_Ontime_Reward` | `0x0863aa90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863aa90  _ZN24Timer_Send_Ontime_Reward12dispatch_sigEiij
#           Timer_Send_Ontime_Reward::dispatch_sig(int, int, unsigned int)
# range [0x0863aa90, 0x0863ab4b]
0863aa90 +0x00:  push   %ebp
0863aa91 +0x01:  mov    %esp,%ebp
0863aa93 +0x03:  sub    $0x38,%esp
0863aa96 +0x06:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0863aa9b +0x0b:  movl   $0x33,0x4(%esp)
0863aaa3 +0x13:  mov    %eax,(%esp)
0863aaa6 +0x16:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0863aaab +0x1b:  mov    %eax,-0xc(%ebp)
0863aaae +0x1e:  cmpl   $0x0,-0xc(%ebp)
0863aab2 +0x22:  je     0863aad9 <+0x49>
0863aab4 +0x24:  mov    -0xc(%ebp),%eax
0863aab7 +0x27:  mov    (%eax),%eax
0863aab9 +0x29:  add    $0x34,%eax
0863aabc +0x2c:  mov    (%eax),%edx
0863aabe +0x2e:  mov    -0xc(%ebp),%eax
0863aac1 +0x31:  movl   $0x0,0x4(%esp)
0863aac9 +0x39:  mov    %eax,(%esp)
0863aacc +0x3c:  call   *%edx
0863aace +0x3e:  test   %al,%al
0863aad0 +0x40:  je     0863aad9 <+0x49>
0863aad2 +0x42:  mov    $0x1,%eax
0863aad7 +0x47:  jmp    0863aade <+0x4e>
0863aad9 +0x49:  mov    $0x0,%eax
0863aade +0x4e:  test   %al,%al
0863aae0 +0x50:  je     0863ab03 <+0x73>
0863aae2 +0x52:  mov    -0xc(%ebp),%eax
0863aae5 +0x55:  mov    %eax,(%esp)
0863aae8 +0x58:  call   081bbd46 <_ZN12COnTimeEvent27process_send_reward_to_userEv>  ; COnTimeEvent::process_send_reward_to_user()
0863aaed +0x5d:  mov    -0xc(%ebp),%eax
0863aaf0 +0x60:  mov    %eax,(%esp)
0863aaf3 +0x63:  call   081bb9c6 <_ZN12COnTimeEvent28get_ontime_reward_user_countEv>  ; COnTimeEvent::get_ontime_reward_user_count()
0863aaf8 +0x68:  test   %eax,%eax
0863aafa +0x6a:  setne  %al
0863aafd +0x6d:  test   %al,%al
0863aaff +0x6f:  jne    0863ab40 <+0xb0>
0863ab01 +0x71:  jmp    0863ab45 <+0xb5>
0863ab03 +0x73:  movl   $0x5,0xc(%esp)
0863ab0b +0x7b:  movl   $0x1638,0x8(%esp)
0863ab13 +0x83:  movl   $&_ZZN24Timer_Send_Ontime_Reward12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
0863ab1b +0x8b:  lea    -0x1c(%ebp),%eax
0863ab1e +0x8e:  mov    %eax,(%esp)
0863ab21 +0x91:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0863ab26 +0x96:  movl   $"[ON_TIME_EVENT] Timer_Send_Ontime_Reward() error",0x4(%esp)
0863ab2e +0x9e:  lea    -0x1c(%ebp),%eax
0863ab31 +0xa1:  mov    %eax,(%esp)
0863ab34 +0xa4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0863ab39 +0xa9:  mov    $0x0,%eax
0863ab3e +0xae:  jmp    0863ab4a <+0xba>
0863ab40 +0xb0:  call   0863ab4c <_ZN24Timer_Send_Ontime_Reward15RegistNextTimerEv>  ; Timer_Send_Ontime_Reward::RegistNextTimer()
0863ab45 +0xb5:  mov    $0x1,%eax
0863ab4a +0xba:  leave
0863ab4b +0xbb:  ret
```

## 反编译 C

```c
// Timer_Send_Ontime_Reward::dispatch_sig @ 0x863aa90

/* Timer_Send_Ontime_Reward::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_Send_Ontime_Reward::dispatch_sig(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  cMyTrace local_20 [16];
  COnTimeEvent *local_10;
  
  local_10 = (COnTimeEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x33);
  if ((local_10 == (COnTimeEvent *)0x0) ||
     (cVar2 = (**(code **)(*(int *)local_10 + 0x34))(local_10,0), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    COnTimeEvent::process_send_reward_to_user(local_10);
    iVar3 = COnTimeEvent::get_ontime_reward_user_count(local_10);
    if (iVar3 != 0) {
      RegistNextTimer();
    }
    uVar4 = 1;
  }
  else {
    cMyTrace::cMyTrace(local_20,
                       "virtual bool Timer_Send_Ontime_Reward::dispatch_sig(int, int, memberIdentificationNumber_t)"
                       ,0x1638,5);
    cMyTrace::operator()(local_20,"[ON_TIME_EVENT] Timer_Send_Ontime_Reward() error");
    uVar4 = 0;
  }
  return uVar4;
}
```
