# dispatch_sig

`_ZN25TimerPartyWalkOutLackUser12dispatch_sigEiij`

`TimerPartyWalkOutLackUser::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerPartyWalkOutLackUser` | `0x08633e14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08633e14  _ZN25TimerPartyWalkOutLackUser12dispatch_sigEiij
#           TimerPartyWalkOutLackUser::dispatch_sig(int, int, unsigned int)
# range [0x08633e14, 0x08633e85]
08633e14 +0x00:  push   %ebp
08633e15 +0x01:  mov    %esp,%ebp
08633e17 +0x03:  sub    $0x28,%esp
08633e1a +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08633e1f +0x0b:  mov    0xc(%ebp),%edx
08633e22 +0x0e:  mov    %edx,0x4(%esp)
08633e26 +0x12:  mov    %eax,(%esp)
08633e29 +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08633e2e +0x1a:  mov    %eax,-0xc(%ebp)
08633e31 +0x1d:  cmpl   $0x0,-0xc(%ebp)
08633e35 +0x21:  jne    08633e3e <+0x2a>
08633e37 +0x23:  mov    $0x0,%eax
08633e3c +0x28:  jmp    08633e84 <+0x70>
08633e3e +0x2a:  mov    0x10(%ebp),%eax
08633e41 +0x2d:  mov    %eax,0x8(%esp)
08633e45 +0x31:  movl   $0xf,0x4(%esp)
08633e4d +0x39:  mov    -0xc(%ebp),%eax
08633e50 +0x3c:  mov    %eax,(%esp)
08633e53 +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
08633e58 +0x44:  xor    $0x1,%eax
08633e5b +0x47:  test   %al,%al
08633e5d +0x49:  je     08633e66 <+0x52>
08633e5f +0x4b:  mov    $0x0,%eax
08633e64 +0x50:  jmp    08633e84 <+0x70>
08633e66 +0x52:  mov    -0xc(%ebp),%eax
08633e69 +0x55:  mov    %eax,(%esp)
08633e6c +0x58:  call   085b3e12 <_ZN6CParty22OnTimerWalkOutLackUserEv>  ; CParty::OnTimerWalkOutLackUser()
08633e71 +0x5d:  xor    $0x1,%eax
08633e74 +0x60:  test   %al,%al
08633e76 +0x62:  je     08633e7f <+0x6b>
08633e78 +0x64:  mov    $0x0,%eax
08633e7d +0x69:  jmp    08633e84 <+0x70>
08633e7f +0x6b:  mov    $0x1,%eax
08633e84 +0x70:  leave
08633e85 +0x71:  ret
```

## 反编译 C

```c
// TimerPartyWalkOutLackUser::dispatch_sig @ 0x8633e14

/* TimerPartyWalkOutLackUser::dispatch_sig(int, int, unsigned int) */

undefined4 TimerPartyWalkOutLackUser::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CParty *this;
  undefined4 uVar3;
  
  iVar2 = G_CGameManager();
  this = (CParty *)CGameManager::GetParty(iVar2);
  if (this == (CParty *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(this,0xf,param_3);
    if (cVar1 == '\x01') {
      cVar1 = CParty::OnTimerWalkOutLackUser(this);
      if (cVar1 == '\x01') {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
