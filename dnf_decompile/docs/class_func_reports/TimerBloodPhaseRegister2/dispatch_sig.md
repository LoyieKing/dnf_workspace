# dispatch_sig

`_ZN24TimerBloodPhaseRegister212dispatch_sigEiij`

`TimerBloodPhaseRegister2::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerBloodPhaseRegister2` | `0x08635190` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08635190  _ZN24TimerBloodPhaseRegister212dispatch_sigEiij
#           TimerBloodPhaseRegister2::dispatch_sig(int, int, unsigned int)
# range [0x08635190, 0x08635231]
08635190 +0x00:  push   %ebp
08635191 +0x01:  mov    %esp,%ebp
08635193 +0x03:  sub    $0x38,%esp
08635196 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0863519b +0x0b:  mov    0xc(%ebp),%edx
0863519e +0x0e:  mov    %edx,0x4(%esp)
086351a2 +0x12:  mov    %eax,(%esp)
086351a5 +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
086351aa +0x1a:  mov    %eax,-0x14(%ebp)
086351ad +0x1d:  cmpl   $0x0,-0x14(%ebp)
086351b1 +0x21:  jne    086351ba <+0x2a>
086351b3 +0x23:  mov    $0x0,%eax
086351b8 +0x28:  jmp    08635230 <+0xa0>
086351ba +0x2a:  mov    0x10(%ebp),%eax
086351bd +0x2d:  mov    %eax,0x8(%esp)
086351c1 +0x31:  movl   $0x19,0x4(%esp)
086351c9 +0x39:  mov    -0x14(%ebp),%eax
086351cc +0x3c:  mov    %eax,(%esp)
086351cf +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
086351d4 +0x44:  xor    $0x1,%eax
086351d7 +0x47:  test   %al,%al
086351d9 +0x49:  je     086351e2 <+0x52>
086351db +0x4b:  mov    $0x0,%eax
086351e0 +0x50:  jmp    08635230 <+0xa0>
086351e2 +0x52:  mov    -0x14(%ebp),%eax
086351e5 +0x55:  movzwl 0xda0(%eax),%eax
086351ec +0x5c:  mov    %ax,-0xe(%ebp)
086351f0 +0x60:  mov    -0x14(%ebp),%eax
086351f3 +0x63:  add    $0xdb6,%eax
086351f8 +0x68:  mov    %eax,-0xc(%ebp)
086351fb +0x6b:  movswl -0xe(%ebp),%eax
086351ff +0x6f:  mov    -0x14(%ebp),%edx
08635202 +0x72:  lea    0xb24(%edx),%ecx
08635208 +0x78:  movl   $0x2,0x10(%esp)
08635210 +0x80:  movl   $0x19,0xc(%esp)
08635218 +0x88:  mov    -0xc(%ebp),%edx
0863521b +0x8b:  mov    %edx,0x8(%esp)
0863521f +0x8f:  mov    %eax,0x4(%esp)
08635223 +0x93:  mov    %ecx,(%esp)
08635226 +0x96:  call   0830553a <_ZN13CBattle_Field15BloodPhaseSpawnEsRsii>  ; CBattle_Field::BloodPhaseSpawn(short, short&, int, int)
0863522b +0x9b:  mov    $0x1,%eax
08635230 +0xa0:  leave
08635231 +0xa1:  ret
```

## 反编译 C

```c
// TimerBloodPhaseRegister2::dispatch_sig @ 0x8635190

/* TimerBloodPhaseRegister2::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodPhaseRegister2::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x19,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodPhaseSpawn
                ((CBattle_Field *)(pCVar3 + 0xb24),*(short *)(pCVar3 + 0xda0),
                 (short *)(pCVar3 + 0xdb6),0x19,2);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
