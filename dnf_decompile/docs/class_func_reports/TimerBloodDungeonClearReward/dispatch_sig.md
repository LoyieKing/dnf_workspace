# dispatch_sig

`_ZN28TimerBloodDungeonClearReward12dispatch_sigEiij`

`TimerBloodDungeonClearReward::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerBloodDungeonClearReward` | `0x08638cb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08638cb4  _ZN28TimerBloodDungeonClearReward12dispatch_sigEiij
#           TimerBloodDungeonClearReward::dispatch_sig(int, int, unsigned int)
# range [0x08638cb4, 0x08638d2b]
08638cb4 +0x00:  push   %ebp
08638cb5 +0x01:  mov    %esp,%ebp
08638cb7 +0x03:  sub    $0x28,%esp
08638cba +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08638cbf +0x0b:  mov    0xc(%ebp),%edx
08638cc2 +0x0e:  mov    %edx,0x4(%esp)
08638cc6 +0x12:  mov    %eax,(%esp)
08638cc9 +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08638cce +0x1a:  mov    %eax,-0xc(%ebp)
08638cd1 +0x1d:  cmpl   $0x0,-0xc(%ebp)
08638cd5 +0x21:  jne    08638cde <+0x2a>
08638cd7 +0x23:  mov    $0x0,%eax
08638cdc +0x28:  jmp    08638d2a <+0x76>
08638cde +0x2a:  mov    0x10(%ebp),%eax
08638ce1 +0x2d:  mov    %eax,0x8(%esp)
08638ce5 +0x31:  mov    0x14(%ebp),%eax
08638ce8 +0x34:  mov    %eax,0x4(%esp)
08638cec +0x38:  mov    -0xc(%ebp),%eax
08638cef +0x3b:  mov    %eax,(%esp)
08638cf2 +0x3e:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
08638cf7 +0x43:  xor    $0x1,%eax
08638cfa +0x46:  test   %al,%al
08638cfc +0x48:  je     08638d05 <+0x51>
08638cfe +0x4a:  mov    $0x0,%eax
08638d03 +0x4f:  jmp    08638d2a <+0x76>
08638d05 +0x51:  mov    0x14(%ebp),%eax
08638d08 +0x54:  mov    %eax,0x4(%esp)
08638d0c +0x58:  mov    -0xc(%ebp),%eax
08638d0f +0x5b:  mov    %eax,(%esp)
08638d12 +0x5e:  call   085b6a48 <_ZN6CParty18onBloodRewardTimerE13TIMER_MESSAGE>  ; CParty::onBloodRewardTimer(TIMER_MESSAGE)
08638d17 +0x63:  xor    $0x1,%eax
08638d1a +0x66:  test   %al,%al
08638d1c +0x68:  je     08638d25 <+0x71>
08638d1e +0x6a:  mov    $0x0,%eax
08638d23 +0x6f:  jmp    08638d2a <+0x76>
08638d25 +0x71:  mov    $0x1,%eax
08638d2a +0x76:  leave
08638d2b +0x77:  ret
```

## 反编译 C

```c
// TimerBloodDungeonClearReward::dispatch_sig @ 0x8638cb4

/* TimerBloodDungeonClearReward::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerBloodDungeonClearReward::dispatch_sig
          (TimerBloodDungeonClearReward *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CParty *pCVar3;
  undefined4 uVar4;
  
  iVar2 = G_CGameManager();
  pCVar3 = (CParty *)CGameManager::GetParty(iVar2);
  if (pCVar3 == (CParty *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(pCVar3,param_3,param_2);
    if (cVar1 == '\x01') {
      cVar1 = CParty::onBloodRewardTimer(pCVar3,param_3);
      if (cVar1 == '\x01') {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
