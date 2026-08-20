# dispatch_sig

`_ZN23TimerPremiumServiceOver12dispatch_sigEiij`

`TimerPremiumServiceOver::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerPremiumServiceOver` | `0x0863485a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863485a  _ZN23TimerPremiumServiceOver12dispatch_sigEiij
#           TimerPremiumServiceOver::dispatch_sig(int, int, unsigned int)
# range [0x0863485a, 0x086348d3]
0863485a +0x00:  push   %ebp
0863485b +0x01:  mov    %esp,%ebp
0863485d +0x03:  sub    $0x28,%esp
08634860 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08634865 +0x0b:  movl   $0x5,0x8(%esp)
0863486d +0x13:  mov    0xc(%ebp),%edx
08634870 +0x16:  mov    %edx,0x4(%esp)
08634874 +0x1a:  mov    %eax,(%esp)
08634877 +0x1d:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
0863487c +0x22:  mov    %eax,-0xc(%ebp)
0863487f +0x25:  cmpl   $0x0,-0xc(%ebp)
08634883 +0x29:  jne    0863488c <+0x32>
08634885 +0x2b:  mov    $0x0,%eax
0863488a +0x30:  jmp    086348d1 <+0x77>
0863488c +0x32:  mov    -0xc(%ebp),%eax
0863488f +0x35:  mov    %eax,(%esp)
08634892 +0x38:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08634897 +0x3d:  cmp    0x14(%ebp),%eax
0863489a +0x40:  setne  %al
0863489d +0x43:  test   %al,%al
0863489f +0x45:  je     086348a8 <+0x4e>
086348a1 +0x47:  mov    $0x0,%eax
086348a6 +0x4c:  jmp    086348d1 <+0x77>
086348a8 +0x4e:  mov    -0xc(%ebp),%eax
086348ab +0x51:  mov    %eax,(%esp)
086348ae +0x54:  call   0863bea2 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x3b3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x3b3
086348b3 +0x59:  xor    $0x1,%eax
086348b6 +0x5c:  test   %al,%al
086348b8 +0x5e:  je     086348c1 <+0x67>
086348ba +0x60:  mov    $0x0,%eax
086348bf +0x65:  jmp    086348d1 <+0x77>
086348c1 +0x67:  mov    -0xc(%ebp),%eax
086348c4 +0x6a:  mov    %eax,(%esp)
086348c7 +0x6d:  call   086afa7c <_ZN8WongWork14CHandlePremium20handlePremiumTimeoutEP5CUser>  ; WongWork::CHandlePremium::handlePremiumTimeout(CUser*)
086348cc +0x72:  mov    $0x1,%eax
086348d1 +0x77:  leave
086348d2 +0x78:  ret
086348d3 +0x79:  nop
```

## 反编译 C

```c
// TimerPremiumServiceOver::dispatch_sig @ 0x863485a

/* TimerPremiumServiceOver::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerPremiumServiceOver::dispatch_sig
          (TimerPremiumServiceOver *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CUser *this_00;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = G_CGameManager();
  this_00 = (CUser *)CGameManager::getUser(iVar2,param_1);
  if (this_00 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = CUser::get_acc_id(this_00);
    if (uVar4 == param_3) {
      cVar1 = CUser::IsPremiumUser(this_00);
      if (cVar1 == '\x01') {
        WongWork::CHandlePremium::handlePremiumTimeout(this_00);
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
