# dispatch_sig

`_ZN14TimerSetResult12dispatch_sigEiij`

`TimerSetResult::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerSetResult` | `0x08633c58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08633c58  _ZN14TimerSetResult12dispatch_sigEiij
#           TimerSetResult::dispatch_sig(int, int, unsigned int)
# range [0x08633c58, 0x08633cbb]
08633c58 +0x00:  push   %ebp
08633c59 +0x01:  mov    %esp,%ebp
08633c5b +0x03:  sub    $0x28,%esp
08633c5e +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08633c63 +0x0b:  mov    0xc(%ebp),%edx
08633c66 +0x0e:  mov    %edx,0x4(%esp)
08633c6a +0x12:  mov    %eax,(%esp)
08633c6d +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08633c72 +0x1a:  mov    %eax,-0xc(%ebp)
08633c75 +0x1d:  cmpl   $0x0,-0xc(%ebp)
08633c79 +0x21:  jne    08633c82 <+0x2a>
08633c7b +0x23:  mov    $0x0,%eax
08633c80 +0x28:  jmp    08633cba <+0x62>
08633c82 +0x2a:  mov    0x10(%ebp),%eax
08633c85 +0x2d:  mov    %eax,0x8(%esp)
08633c89 +0x31:  movl   $0xc,0x4(%esp)
08633c91 +0x39:  mov    -0xc(%ebp),%eax
08633c94 +0x3c:  mov    %eax,(%esp)
08633c97 +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
08633c9c +0x44:  xor    $0x1,%eax
08633c9f +0x47:  test   %al,%al
08633ca1 +0x49:  je     08633caa <+0x52>
08633ca3 +0x4b:  mov    $0x0,%eax
08633ca8 +0x50:  jmp    08633cba <+0x62>
08633caa +0x52:  mov    -0xc(%ebp),%eax
08633cad +0x55:  mov    %eax,(%esp)
08633cb0 +0x58:  call   085b26e8 <_ZN6CParty22forced_set_play_resultEv>  ; CParty::forced_set_play_result()
08633cb5 +0x5d:  mov    $0x1,%eax
08633cba +0x62:  leave
08633cbb +0x63:  ret
```

## 反编译 C

```c
// TimerSetResult::dispatch_sig @ 0x8633c58

/* TimerSetResult::dispatch_sig(int, int, unsigned int) */

undefined4 TimerSetResult::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(this,0xc,param_3);
    if (cVar1 == '\x01') {
      CParty::forced_set_play_result(this);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
