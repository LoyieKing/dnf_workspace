# dispatch_sig

`_ZN20TimerEPLPCommandWait12dispatch_sigEiij`

`TimerEPLPCommandWait::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerEPLPCommandWait` | `0x08634c6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08634c6a  _ZN20TimerEPLPCommandWait12dispatch_sigEiij
#           TimerEPLPCommandWait::dispatch_sig(int, int, unsigned int)
# range [0x08634c6a, 0x08634cfd]
08634c6a +0x00:  push   %ebp
08634c6b +0x01:  mov    %esp,%ebp
08634c6d +0x03:  sub    $0x28,%esp
08634c70 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08634c75 +0x0b:  mov    0xc(%ebp),%edx
08634c78 +0x0e:  mov    %edx,0x4(%esp)
08634c7c +0x12:  mov    %eax,(%esp)
08634c7f +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08634c84 +0x1a:  mov    %eax,-0xc(%ebp)
08634c87 +0x1d:  cmpl   $0x0,-0xc(%ebp)
08634c8b +0x21:  jne    08634c94 <+0x2a>
08634c8d +0x23:  mov    $0x0,%eax
08634c92 +0x28:  jmp    08634cfb <+0x91>
08634c94 +0x2a:  mov    0x10(%ebp),%eax
08634c97 +0x2d:  mov    %eax,0x8(%esp)
08634c9b +0x31:  movl   $0x15,0x4(%esp)
08634ca3 +0x39:  mov    -0xc(%ebp),%eax
08634ca6 +0x3c:  mov    %eax,(%esp)
08634ca9 +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
08634cae +0x44:  xor    $0x1,%eax
08634cb1 +0x47:  test   %al,%al
08634cb3 +0x49:  je     08634cbc <+0x52>
08634cb5 +0x4b:  mov    $0x0,%eax
08634cba +0x50:  jmp    08634cfb <+0x91>
08634cbc +0x52:  mov    -0xc(%ebp),%eax
08634cbf +0x55:  mov    %eax,(%esp)
08634cc2 +0x58:  call   084699da <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xbd>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xbd
08634cc7 +0x5d:  cmp    $0x3,%al
08634cc9 +0x5f:  sete   %al
08634ccc +0x62:  test   %al,%al
08634cce +0x64:  je     08634cd7 <+0x6d>
08634cd0 +0x66:  mov    $0x0,%eax
08634cd5 +0x6b:  jmp    08634cfb <+0x91>
08634cd7 +0x6d:  mov    -0xc(%ebp),%eax
08634cda +0x70:  mov    %eax,(%esp)
08634cdd +0x73:  call   0814581c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29f
08634ce2 +0x78:  cmp    $0x2,%al
08634ce4 +0x7a:  sete   %al
08634ce7 +0x7d:  test   %al,%al
08634ce9 +0x7f:  je     08634cf6 <+0x8c>
08634ceb +0x81:  mov    -0xc(%ebp),%eax
08634cee +0x84:  mov    %eax,(%esp)
08634cf1 +0x87:  call   085aca60 <_ZN6CParty15ReturnToVillageEv>  ; CParty::ReturnToVillage()
08634cf6 +0x8c:  mov    $0x1,%eax
08634cfb +0x91:  leave
08634cfc +0x92:  ret
08634cfd +0x93:  nop
```

## 反编译 C

```c
// TimerEPLPCommandWait::dispatch_sig @ 0x8634c6a

/* TimerEPLPCommandWait::dispatch_sig(int, int, unsigned int) */

undefined4 TimerEPLPCommandWait::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(this,0x15,param_3);
    if (cVar1 == '\x01') {
      cVar1 = CParty::GetSelectedEPLPCmd(this);
      if (cVar1 == '\x03') {
        uVar3 = 0;
      }
      else {
        cVar1 = CParty::GetEPLPState(this);
        if (cVar1 == '\x02') {
          CParty::ReturnToVillage(this);
        }
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
