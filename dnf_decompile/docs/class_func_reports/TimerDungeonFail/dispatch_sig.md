# dispatch_sig

`_ZN16TimerDungeonFail12dispatch_sigEiij`

`TimerDungeonFail::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerDungeonFail` | `0x0863316c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863316c  _ZN16TimerDungeonFail12dispatch_sigEiij
#           TimerDungeonFail::dispatch_sig(int, int, unsigned int)
# range [0x0863316c, 0x086331cf]
0863316c +0x00:  push   %ebp
0863316d +0x01:  mov    %esp,%ebp
0863316f +0x03:  sub    $0x28,%esp
08633172 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08633177 +0x0b:  mov    0xc(%ebp),%edx
0863317a +0x0e:  mov    %edx,0x4(%esp)
0863317e +0x12:  mov    %eax,(%esp)
08633181 +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08633186 +0x1a:  mov    %eax,-0xc(%ebp)
08633189 +0x1d:  cmpl   $0x0,-0xc(%ebp)
0863318d +0x21:  jne    08633196 <+0x2a>
0863318f +0x23:  mov    $0x0,%eax
08633194 +0x28:  jmp    086331ce <+0x62>
08633196 +0x2a:  mov    0x10(%ebp),%eax
08633199 +0x2d:  mov    %eax,0x8(%esp)
0863319d +0x31:  movl   $0xe,0x4(%esp)
086331a5 +0x39:  mov    -0xc(%ebp),%eax
086331a8 +0x3c:  mov    %eax,(%esp)
086331ab +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
086331b0 +0x44:  xor    $0x1,%eax
086331b3 +0x47:  test   %al,%al
086331b5 +0x49:  je     086331be <+0x52>
086331b7 +0x4b:  mov    $0x0,%eax
086331bc +0x50:  jmp    086331ce <+0x62>
086331be +0x52:  mov    -0xc(%ebp),%eax
086331c1 +0x55:  mov    %eax,(%esp)
086331c4 +0x58:  call   085b3670 <_ZN6CParty18party_dungeon_failEv>  ; CParty::party_dungeon_fail()
086331c9 +0x5d:  mov    $0x1,%eax
086331ce +0x62:  leave
086331cf +0x63:  ret
```

## 反编译 C

```c
// TimerDungeonFail::dispatch_sig @ 0x863316c

/* TimerDungeonFail::dispatch_sig(int, int, unsigned int) */

undefined4 TimerDungeonFail::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(this,0xe,param_3);
    if (cVar1 == '\x01') {
      CParty::party_dungeon_fail(this);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
