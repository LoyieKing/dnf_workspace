# dispatch_sig

`_ZN24TimerBloodPhaseRegister312dispatch_sigEiij`

`TimerBloodPhaseRegister3::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerBloodPhaseRegister3` | `0x08635232` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08635232  _ZN24TimerBloodPhaseRegister312dispatch_sigEiij
#           TimerBloodPhaseRegister3::dispatch_sig(int, int, unsigned int)
# range [0x08635232, 0x086352d3]
08635232 +0x00:  push   %ebp
08635233 +0x01:  mov    %esp,%ebp
08635235 +0x03:  sub    $0x38,%esp
08635238 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0863523d +0x0b:  mov    0xc(%ebp),%edx
08635240 +0x0e:  mov    %edx,0x4(%esp)
08635244 +0x12:  mov    %eax,(%esp)
08635247 +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
0863524c +0x1a:  mov    %eax,-0x14(%ebp)
0863524f +0x1d:  cmpl   $0x0,-0x14(%ebp)
08635253 +0x21:  jne    0863525c <+0x2a>
08635255 +0x23:  mov    $0x0,%eax
0863525a +0x28:  jmp    086352d2 <+0xa0>
0863525c +0x2a:  mov    0x10(%ebp),%eax
0863525f +0x2d:  mov    %eax,0x8(%esp)
08635263 +0x31:  movl   $0x1a,0x4(%esp)
0863526b +0x39:  mov    -0x14(%ebp),%eax
0863526e +0x3c:  mov    %eax,(%esp)
08635271 +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
08635276 +0x44:  xor    $0x1,%eax
08635279 +0x47:  test   %al,%al
0863527b +0x49:  je     08635284 <+0x52>
0863527d +0x4b:  mov    $0x0,%eax
08635282 +0x50:  jmp    086352d2 <+0xa0>
08635284 +0x52:  mov    -0x14(%ebp),%eax
08635287 +0x55:  movzwl 0xda2(%eax),%eax
0863528e +0x5c:  mov    %ax,-0xe(%ebp)
08635292 +0x60:  mov    -0x14(%ebp),%eax
08635295 +0x63:  add    $0xdb8,%eax
0863529a +0x68:  mov    %eax,-0xc(%ebp)
0863529d +0x6b:  movswl -0xe(%ebp),%eax
086352a1 +0x6f:  mov    -0x14(%ebp),%edx
086352a4 +0x72:  lea    0xb24(%edx),%ecx
086352aa +0x78:  movl   $0x3,0x10(%esp)
086352b2 +0x80:  movl   $0x1a,0xc(%esp)
086352ba +0x88:  mov    -0xc(%ebp),%edx
086352bd +0x8b:  mov    %edx,0x8(%esp)
086352c1 +0x8f:  mov    %eax,0x4(%esp)
086352c5 +0x93:  mov    %ecx,(%esp)
086352c8 +0x96:  call   0830553a <_ZN13CBattle_Field15BloodPhaseSpawnEsRsii>  ; CBattle_Field::BloodPhaseSpawn(short, short&, int, int)
086352cd +0x9b:  mov    $0x1,%eax
086352d2 +0xa0:  leave
086352d3 +0xa1:  ret
```

## 反编译 C

```c
// TimerBloodPhaseRegister3::dispatch_sig @ 0x8635232

/* TimerBloodPhaseRegister3::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodPhaseRegister3::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x1a,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodPhaseSpawn
                ((CBattle_Field *)(pCVar3 + 0xb24),*(short *)(pCVar3 + 0xda2),
                 (short *)(pCVar3 + 0xdb8),0x1a,3);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
