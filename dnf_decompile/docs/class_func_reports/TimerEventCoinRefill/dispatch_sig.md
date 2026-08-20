# dispatch_sig

`_ZN20TimerEventCoinRefill12dispatch_sigEiij`

`TimerEventCoinRefill::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerEventCoinRefill` | `0x086364c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086364c4  _ZN20TimerEventCoinRefill12dispatch_sigEiij
#           TimerEventCoinRefill::dispatch_sig(int, int, unsigned int)
# range [0x086364c4, 0x08636554]
086364c4 +0x00:  push   %ebp
086364c5 +0x01:  mov    %esp,%ebp
086364c7 +0x03:  sub    $0x38,%esp
086364ca +0x06:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086364cf +0x0b:  movl   $0xd,0x4(%esp)
086364d7 +0x13:  mov    %eax,(%esp)
086364da +0x16:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
086364df +0x1b:  mov    %eax,-0xc(%ebp)
086364e2 +0x1e:  mov    -0xc(%ebp),%eax
086364e5 +0x21:  mov    (%eax),%eax
086364e7 +0x23:  add    $0x34,%eax
086364ea +0x26:  mov    (%eax),%edx
086364ec +0x28:  mov    -0xc(%ebp),%eax
086364ef +0x2b:  movl   $0x0,0x4(%esp)
086364f7 +0x33:  mov    %eax,(%esp)
086364fa +0x36:  call   *%edx
086364fc +0x38:  test   %al,%al
086364fe +0x3a:  je     0863654e <+0x8a>
08636500 +0x3c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08636505 +0x41:  mov    %eax,(%esp)
08636508 +0x44:  call   086ccb22 <_ZN9GameWorld13ResetAllCoinsEv>  ; GameWorld::ResetAllCoins()
0863650d +0x49:  movl   $0x0,0xc(%esp)
08636515 +0x51:  movl   $0xadc,0x8(%esp)
0863651d +0x59:  movl   $&_ZZN20TimerEventCoinRefill12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
08636525 +0x61:  lea    -0x1c(%ebp),%eax
08636528 +0x64:  mov    %eax,(%esp)
0863652b +0x67:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08636530 +0x6c:  movl   $"Coin refilled by event!",0x4(%esp)
08636538 +0x74:  lea    -0x1c(%ebp),%eax
0863653b +0x77:  mov    %eax,(%esp)
0863653e +0x7a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08636543 +0x7f:  mov    -0xc(%ebp),%eax
08636546 +0x82:  mov    %eax,(%esp)
08636549 +0x85:  call   0832c1fe <_ZNK16CCoinRefillEvent21registNextRefillTimerEv>  ; CCoinRefillEvent::registNextRefillTimer() const
0863654e +0x8a:  mov    $0x1,%eax
08636553 +0x8f:  leave
08636554 +0x90:  ret
```

## 反编译 C

```c
// TimerEventCoinRefill::dispatch_sig @ 0x86364c4

/* TimerEventCoinRefill::dispatch_sig(int, int, unsigned int) */

undefined4 TimerEventCoinRefill::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  cMyTrace local_20 [16];
  CCoinRefillEvent *local_10;
  
  local_10 = (CCoinRefillEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xd);
  cVar1 = (**(code **)(*(int *)local_10 + 0x34))(local_10,0);
  if (cVar1 != '\0') {
    G_GameWorld();
    GameWorld::ResetAllCoins();
    cMyTrace::cMyTrace(local_20,
                       "virtual bool TimerEventCoinRefill::dispatch_sig(int, int, memberIdentificationNumber_t)"
                       ,0xadc,0);
    cMyTrace::operator()(local_20,"Coin refilled by event!");
    CCoinRefillEvent::registNextRefillTimer(local_10);
  }
  return 1;
}
```
