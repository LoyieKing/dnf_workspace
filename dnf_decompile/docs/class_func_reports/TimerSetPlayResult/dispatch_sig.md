# dispatch_sig

`_ZN18TimerSetPlayResult12dispatch_sigEiij`

`TimerSetPlayResult::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerSetPlayResult` | `0x08636398` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08636398  _ZN18TimerSetPlayResult12dispatch_sigEiij
#           TimerSetPlayResult::dispatch_sig(int, int, unsigned int)
# range [0x08636398, 0x0863640b]
08636398 +0x00:  push   %ebp
08636399 +0x01:  mov    %esp,%ebp
0863639b +0x03:  sub    $0x28,%esp
0863639e +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086363a3 +0x0b:  mov    0xc(%ebp),%edx
086363a6 +0x0e:  mov    %edx,0x4(%esp)
086363aa +0x12:  mov    %eax,(%esp)
086363ad +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
086363b2 +0x1a:  mov    %eax,-0xc(%ebp)
086363b5 +0x1d:  cmpl   $0x0,-0xc(%ebp)
086363b9 +0x21:  jne    086363c2 <+0x2a>
086363bb +0x23:  mov    $0x0,%eax
086363c0 +0x28:  jmp    08636409 <+0x71>
086363c2 +0x2a:  mov    0x10(%ebp),%eax
086363c5 +0x2d:  mov    %eax,0x8(%esp)
086363c9 +0x31:  movl   $0x29,0x4(%esp)
086363d1 +0x39:  mov    -0xc(%ebp),%eax
086363d4 +0x3c:  mov    %eax,(%esp)
086363d7 +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
086363dc +0x44:  xor    $0x1,%eax
086363df +0x47:  test   %al,%al
086363e1 +0x49:  je     086363ea <+0x52>
086363e3 +0x4b:  mov    $0x0,%eax
086363e8 +0x50:  jmp    08636409 <+0x71>
086363ea +0x52:  mov    -0xc(%ebp),%eax
086363ed +0x55:  mov    %eax,(%esp)
086363f0 +0x58:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
086363f5 +0x5d:  mov    %eax,0x4(%esp)
086363f9 +0x61:  mov    -0xc(%ebp),%eax
086363fc +0x64:  mov    %eax,(%esp)
086363ff +0x67:  call   085b2412 <_ZN6CParty13SetPlayResultEP5CUser>  ; CParty::SetPlayResult(CUser*)
08636404 +0x6c:  mov    $0x1,%eax
08636409 +0x71:  leave
0863640a +0x72:  ret
0863640b +0x73:  nop
```

## 反编译 C

```c
// TimerSetPlayResult::dispatch_sig @ 0x8636398

/* TimerSetPlayResult::dispatch_sig(int, int, unsigned int) */

undefined4 TimerSetPlayResult::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CParty *this;
  undefined4 uVar3;
  CUser *pCVar4;
  
  iVar2 = G_CGameManager();
  this = (CParty *)CGameManager::GetParty(iVar2);
  if (this == (CParty *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(this,0x29,param_3);
    if (cVar1 == '\x01') {
      pCVar4 = (CUser *)CParty::getManager(this);
      CParty::SetPlayResult(this,pCVar4);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
