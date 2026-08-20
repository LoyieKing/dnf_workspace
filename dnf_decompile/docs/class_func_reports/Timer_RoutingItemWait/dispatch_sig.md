# dispatch_sig

`_ZN21Timer_RoutingItemWait12dispatch_sigEiij`

`Timer_RoutingItemWait::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_RoutingItemWait` | `0x086398a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086398a8  _ZN21Timer_RoutingItemWait12dispatch_sigEiij
#           Timer_RoutingItemWait::dispatch_sig(int, int, unsigned int)
# range [0x086398a8, 0x08639923]
086398a8 +0x00:  push   %ebp
086398a9 +0x01:  mov    %esp,%ebp
086398ab +0x03:  sub    $0x28,%esp
086398ae +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086398b3 +0x0b:  mov    0xc(%ebp),%edx
086398b6 +0x0e:  mov    %edx,0x4(%esp)
086398ba +0x12:  mov    %eax,(%esp)
086398bd +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
086398c2 +0x1a:  mov    %eax,-0x10(%ebp)
086398c5 +0x1d:  cmpl   $0x0,-0x10(%ebp)
086398c9 +0x21:  jne    086398d2 <+0x2a>
086398cb +0x23:  mov    $0x0,%eax
086398d0 +0x28:  jmp    08639921 <+0x79>
086398d2 +0x2a:  mov    0x10(%ebp),%eax
086398d5 +0x2d:  mov    %eax,0x8(%esp)
086398d9 +0x31:  movl   $0x2b,0x4(%esp)
086398e1 +0x39:  mov    -0x10(%ebp),%eax
086398e4 +0x3c:  mov    %eax,(%esp)
086398e7 +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
086398ec +0x44:  xor    $0x1,%eax
086398ef +0x47:  test   %al,%al
086398f1 +0x49:  je     086398fa <+0x52>
086398f3 +0x4b:  mov    $0x0,%eax
086398f8 +0x50:  jmp    08639921 <+0x79>
086398fa +0x52:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086398ff +0x57:  mov    %eax,(%esp)
08639902 +0x5a:  call   08298fc4 <_ZN12CGameManager28GetSpecialItemRoutingManagerEv>  ; CGameManager::GetSpecialItemRoutingManager()
08639907 +0x5f:  mov    %eax,-0xc(%ebp)
0863990a +0x62:  mov    -0x10(%ebp),%eax
0863990d +0x65:  mov    %eax,0x4(%esp)
08639911 +0x69:  mov    -0xc(%ebp),%eax
08639914 +0x6c:  mov    %eax,(%esp)
08639917 +0x6f:  call   0860abde <_ZN26CSpecialItemRoutingManager14ProcessTimeOutEP6CParty>  ; CSpecialItemRoutingManager::ProcessTimeOut(CParty*)
0863991c +0x74:  mov    $0x1,%eax
08639921 +0x79:  leave
08639922 +0x7a:  ret
08639923 +0x7b:  nop
```

## 反编译 C

```c
// Timer_RoutingItemWait::dispatch_sig @ 0x86398a8

/* Timer_RoutingItemWait::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_RoutingItemWait::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CParty *pCVar3;
  undefined4 uVar4;
  CGameManager *this;
  CSpecialItemRoutingManager *this_00;
  
  iVar2 = G_CGameManager();
  pCVar3 = (CParty *)CGameManager::GetParty(iVar2);
  if (pCVar3 == (CParty *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(pCVar3,0x2b,param_3);
    if (cVar1 == '\x01') {
      this = (CGameManager *)G_CGameManager();
      this_00 = (CSpecialItemRoutingManager *)CGameManager::GetSpecialItemRoutingManager(this);
      CSpecialItemRoutingManager::ProcessTimeOut(this_00,pCVar3);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
