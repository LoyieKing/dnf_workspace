# dispatch_sig

`_ZN15TimerMapLoading12dispatch_sigEiij`

`TimerMapLoading::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerMapLoading` | `0x08633b84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08633b84  _ZN15TimerMapLoading12dispatch_sigEiij
#           TimerMapLoading::dispatch_sig(int, int, unsigned int)
# range [0x08633b84, 0x08633be7]
08633b84 +0x00:  push   %ebp
08633b85 +0x01:  mov    %esp,%ebp
08633b87 +0x03:  sub    $0x28,%esp
08633b8a +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08633b8f +0x0b:  mov    0xc(%ebp),%edx
08633b92 +0x0e:  mov    %edx,0x4(%esp)
08633b96 +0x12:  mov    %eax,(%esp)
08633b99 +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08633b9e +0x1a:  mov    %eax,-0xc(%ebp)
08633ba1 +0x1d:  cmpl   $0x0,-0xc(%ebp)
08633ba5 +0x21:  jne    08633bae <+0x2a>
08633ba7 +0x23:  mov    $0x0,%eax
08633bac +0x28:  jmp    08633be6 <+0x62>
08633bae +0x2a:  mov    0x10(%ebp),%eax
08633bb1 +0x2d:  mov    %eax,0x8(%esp)
08633bb5 +0x31:  movl   $0xb,0x4(%esp)
08633bbd +0x39:  mov    -0xc(%ebp),%eax
08633bc0 +0x3c:  mov    %eax,(%esp)
08633bc3 +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
08633bc8 +0x44:  xor    $0x1,%eax
08633bcb +0x47:  test   %al,%al
08633bcd +0x49:  je     08633bd6 <+0x52>
08633bcf +0x4b:  mov    $0x0,%eax
08633bd4 +0x50:  jmp    08633be6 <+0x62>
08633bd6 +0x52:  mov    -0xc(%ebp),%eax
08633bd9 +0x55:  mov    %eax,(%esp)
08633bdc +0x58:  call   085b1e66 <_ZN6CParty22map_load_forced_finishEv>  ; CParty::map_load_forced_finish()
08633be1 +0x5d:  mov    $0x1,%eax
08633be6 +0x62:  leave
08633be7 +0x63:  ret
```

## 反编译 C

```c
// TimerMapLoading::dispatch_sig @ 0x8633b84

/* TimerMapLoading::dispatch_sig(int, int, unsigned int) */

undefined4 TimerMapLoading::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(this,0xb,param_3);
    if (cVar1 == '\x01') {
      CParty::map_load_forced_finish(this);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
