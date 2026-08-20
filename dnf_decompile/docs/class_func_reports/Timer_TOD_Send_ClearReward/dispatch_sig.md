# dispatch_sig

`_ZN26Timer_TOD_Send_ClearReward12dispatch_sigEiij`

`Timer_TOD_Send_ClearReward::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_TOD_Send_ClearReward` | `0x0863a89e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863a89e  _ZN26Timer_TOD_Send_ClearReward12dispatch_sigEiij
#           Timer_TOD_Send_ClearReward::dispatch_sig(int, int, unsigned int)
# range [0x0863a89e, 0x0863a915]
0863a89e +0x00:  push   %ebp
0863a89f +0x01:  mov    %esp,%ebp
0863a8a1 +0x03:  sub    $0x28,%esp
0863a8a4 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0863a8a9 +0x0b:  mov    0xc(%ebp),%edx
0863a8ac +0x0e:  mov    %edx,0x4(%esp)
0863a8b0 +0x12:  mov    %eax,(%esp)
0863a8b3 +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
0863a8b8 +0x1a:  mov    %eax,-0xc(%ebp)
0863a8bb +0x1d:  cmpl   $0x0,-0xc(%ebp)
0863a8bf +0x21:  jne    0863a8c8 <+0x2a>
0863a8c1 +0x23:  mov    $0x0,%eax
0863a8c6 +0x28:  jmp    0863a914 <+0x76>
0863a8c8 +0x2a:  mov    0x10(%ebp),%eax
0863a8cb +0x2d:  mov    %eax,0x8(%esp)
0863a8cf +0x31:  mov    0x14(%ebp),%eax
0863a8d2 +0x34:  mov    %eax,0x4(%esp)
0863a8d6 +0x38:  mov    -0xc(%ebp),%eax
0863a8d9 +0x3b:  mov    %eax,(%esp)
0863a8dc +0x3e:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
0863a8e1 +0x43:  xor    $0x1,%eax
0863a8e4 +0x46:  test   %al,%al
0863a8e6 +0x48:  je     0863a8ef <+0x51>
0863a8e8 +0x4a:  mov    $0x0,%eax
0863a8ed +0x4f:  jmp    0863a914 <+0x76>
0863a8ef +0x51:  mov    0x14(%ebp),%eax
0863a8f2 +0x54:  mov    %eax,0x4(%esp)
0863a8f6 +0x58:  mov    -0xc(%ebp),%eax
0863a8f9 +0x5b:  mov    %eax,(%esp)
0863a8fc +0x5e:  call   085ba906 <_ZN6CParty16OnTODRewardTimerE13TIMER_MESSAGE>  ; CParty::OnTODRewardTimer(TIMER_MESSAGE)
0863a901 +0x63:  xor    $0x1,%eax
0863a904 +0x66:  test   %al,%al
0863a906 +0x68:  je     0863a90f <+0x71>
0863a908 +0x6a:  mov    $0x0,%eax
0863a90d +0x6f:  jmp    0863a914 <+0x76>
0863a90f +0x71:  mov    $0x1,%eax
0863a914 +0x76:  leave
0863a915 +0x77:  ret
```

## 反编译 C

```c
// Timer_TOD_Send_ClearReward::dispatch_sig @ 0x863a89e

/* Timer_TOD_Send_ClearReward::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
Timer_TOD_Send_ClearReward::dispatch_sig
          (Timer_TOD_Send_ClearReward *this,int param_1,int param_2,uint param_3)

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
      cVar1 = CParty::OnTODRewardTimer(pCVar3,param_3);
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
