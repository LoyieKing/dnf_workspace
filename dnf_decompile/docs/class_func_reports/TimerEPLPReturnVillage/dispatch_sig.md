# dispatch_sig

`_ZN22TimerEPLPReturnVillage12dispatch_sigEiij`

`TimerEPLPReturnVillage::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerEPLPReturnVillage` | `0x08634c06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08634c06  _ZN22TimerEPLPReturnVillage12dispatch_sigEiij
#           TimerEPLPReturnVillage::dispatch_sig(int, int, unsigned int)
# range [0x08634c06, 0x08634c69]
08634c06 +0x00:  push   %ebp
08634c07 +0x01:  mov    %esp,%ebp
08634c09 +0x03:  sub    $0x28,%esp
08634c0c +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08634c11 +0x0b:  mov    0xc(%ebp),%edx
08634c14 +0x0e:  mov    %edx,0x4(%esp)
08634c18 +0x12:  mov    %eax,(%esp)
08634c1b +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08634c20 +0x1a:  mov    %eax,-0xc(%ebp)
08634c23 +0x1d:  cmpl   $0x0,-0xc(%ebp)
08634c27 +0x21:  jne    08634c30 <+0x2a>
08634c29 +0x23:  mov    $0x0,%eax
08634c2e +0x28:  jmp    08634c68 <+0x62>
08634c30 +0x2a:  mov    0x10(%ebp),%eax
08634c33 +0x2d:  mov    %eax,0x8(%esp)
08634c37 +0x31:  movl   $0x14,0x4(%esp)
08634c3f +0x39:  mov    -0xc(%ebp),%eax
08634c42 +0x3c:  mov    %eax,(%esp)
08634c45 +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
08634c4a +0x44:  xor    $0x1,%eax
08634c4d +0x47:  test   %al,%al
08634c4f +0x49:  je     08634c58 <+0x52>
08634c51 +0x4b:  mov    $0x0,%eax
08634c56 +0x50:  jmp    08634c68 <+0x62>
08634c58 +0x52:  mov    -0xc(%ebp),%eax
08634c5b +0x55:  mov    %eax,(%esp)
08634c5e +0x58:  call   085aca60 <_ZN6CParty15ReturnToVillageEv>  ; CParty::ReturnToVillage()
08634c63 +0x5d:  mov    $0x1,%eax
08634c68 +0x62:  leave
08634c69 +0x63:  ret
```

## 反编译 C

```c
// TimerEPLPReturnVillage::dispatch_sig @ 0x8634c06

/* TimerEPLPReturnVillage::dispatch_sig(int, int, unsigned int) */

undefined4 TimerEPLPReturnVillage::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(this,0x14,param_3);
    if (cVar1 == '\x01') {
      CParty::ReturnToVillage(this);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
