# dispatch_sig

`_ZN23TimerSetTradePunishUser12dispatch_sigEiij`

`TimerSetTradePunishUser::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerSetTradePunishUser` | `0x08638c48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08638c48  _ZN23TimerSetTradePunishUser12dispatch_sigEiij
#           TimerSetTradePunishUser::dispatch_sig(int, int, unsigned int)
# range [0x08638c48, 0x08638cb3]
08638c48 +0x00:  push   %ebp
08638c49 +0x01:  mov    %esp,%ebp
08638c4b +0x03:  sub    $0x28,%esp
08638c4e +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08638c53 +0x0b:  movl   $0x2,0x8(%esp)
08638c5b +0x13:  mov    0xc(%ebp),%edx
08638c5e +0x16:  mov    %edx,0x4(%esp)
08638c62 +0x1a:  mov    %eax,(%esp)
08638c65 +0x1d:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
08638c6a +0x22:  mov    %eax,-0xc(%ebp)
08638c6d +0x25:  cmpl   $0x0,-0xc(%ebp)
08638c71 +0x29:  jne    08638c7a <+0x32>
08638c73 +0x2b:  mov    $0x0,%eax
08638c78 +0x30:  jmp    08638cb1 <+0x69>
08638c7a +0x32:  mov    -0xc(%ebp),%eax
08638c7d +0x35:  mov    %eax,(%esp)
08638c80 +0x38:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08638c85 +0x3d:  movzwl %ax,%eax
08638c88 +0x40:  cmp    0x10(%ebp),%eax
08638c8b +0x43:  setne  %al
08638c8e +0x46:  test   %al,%al
08638c90 +0x48:  je     08638c99 <+0x51>
08638c92 +0x4a:  mov    $0x0,%eax
08638c97 +0x4f:  jmp    08638cb1 <+0x69>
08638c99 +0x51:  movl   $0x4,0x4(%esp)
08638ca1 +0x59:  mov    -0xc(%ebp),%eax
08638ca4 +0x5c:  mov    %eax,(%esp)
08638ca7 +0x5f:  call   08689890 <_ZN5CUser18SetTradePunishTypeEi>  ; CUser::SetTradePunishType(int)
08638cac +0x64:  mov    $0x1,%eax
08638cb1 +0x69:  leave
08638cb2 +0x6a:  ret
08638cb3 +0x6b:  nop
```

## 反编译 C

```c
// TimerSetTradePunishUser::dispatch_sig @ 0x8638c48

/* TimerSetTradePunishUser::dispatch_sig(int, int, unsigned int) */

undefined4 TimerSetTradePunishUser::dispatch_sig(int param_1,int param_2,uint param_3)

{
  int iVar1;
  CUser *this;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = G_CGameManager();
  this = (CUser *)CGameManager::getUser(iVar1,param_2);
  if (this == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = CUser::get_unique_id(this);
    if ((uVar3 & 0xffff) == param_3) {
      CUser::SetTradePunishType(this,4);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
