# dispatch_sig

`_ZN18TimerSetPunishUser12dispatch_sigEiij`

`TimerSetPunishUser::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerSetPunishUser` | `0x08638ba0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08638ba0  _ZN18TimerSetPunishUser12dispatch_sigEiij
#           TimerSetPunishUser::dispatch_sig(int, int, unsigned int)
# range [0x08638ba0, 0x08638c47]
08638ba0 +0x00:  push   %ebp
08638ba1 +0x01:  mov    %esp,%ebp
08638ba3 +0x03:  sub    $0x28,%esp
08638ba6 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08638bab +0x0b:  movl   $0x2,0x8(%esp)
08638bb3 +0x13:  mov    0xc(%ebp),%edx
08638bb6 +0x16:  mov    %edx,0x4(%esp)
08638bba +0x1a:  mov    %eax,(%esp)
08638bbd +0x1d:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
08638bc2 +0x22:  mov    %eax,-0xc(%ebp)
08638bc5 +0x25:  cmpl   $0x0,-0xc(%ebp)
08638bc9 +0x29:  jne    08638bd2 <+0x32>
08638bcb +0x2b:  mov    $0x0,%eax
08638bd0 +0x30:  jmp    08638c46 <+0xa6>
08638bd2 +0x32:  mov    -0xc(%ebp),%eax
08638bd5 +0x35:  mov    %eax,(%esp)
08638bd8 +0x38:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08638bdd +0x3d:  movzwl %ax,%eax
08638be0 +0x40:  cmp    0x10(%ebp),%eax
08638be3 +0x43:  setne  %al
08638be6 +0x46:  test   %al,%al
08638be8 +0x48:  je     08638bf1 <+0x51>
08638bea +0x4a:  mov    $0x0,%eax
08638bef +0x4f:  jmp    08638c46 <+0xa6>
08638bf1 +0x51:  mov    -0xc(%ebp),%eax
08638bf4 +0x54:  mov    %eax,(%esp)
08638bf7 +0x57:  call   084b9a92 <_GLOBAL__I__ZN8XNuclear6CHades4InitEP5CUser+0x168>  ; global constructors keyed to XNuclear::CHades::Init(CUser*)+0x168
08638bfc +0x5c:  movl   $0x40,0x4(%esp)
08638c04 +0x64:  mov    -0xc(%ebp),%eax
08638c07 +0x67:  mov    %eax,(%esp)
08638c0a +0x6a:  call   08689890 <_ZN5CUser18SetTradePunishTypeEi>  ; CUser::SetTradePunishType(int)
08638c0f +0x6f:  mov    -0xc(%ebp),%eax
08638c12 +0x72:  mov    %eax,(%esp)
08638c15 +0x75:  call   0863bfa0 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x4b1>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x4b1
08638c1a +0x7a:  test   %al,%al
08638c1c +0x7c:  je     08638c41 <+0xa1>
08638c1e +0x7e:  movl   $0x0,0xc(%esp)
08638c26 +0x86:  movl   $0x1,0x8(%esp)
08638c2e +0x8e:  movl   $0x2e,0x4(%esp)
08638c36 +0x96:  mov    -0xc(%ebp),%eax
08638c39 +0x99:  mov    %eax,(%esp)
08638c3c +0x9c:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
08638c41 +0xa1:  mov    $0x1,%eax
08638c46 +0xa6:  leave
08638c47 +0xa7:  ret
```

## 反编译 C

```c
// TimerSetPunishUser::dispatch_sig @ 0x8638ba0

/* TimerSetPunishUser::dispatch_sig(int, int, unsigned int) */

undefined4 TimerSetPunishUser::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CUser *this;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = G_CGameManager();
  this = (CUser *)CGameManager::getUser(iVar2,param_2);
  if (this == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = CUser::get_unique_id(this);
    if ((uVar4 & 0xffff) == param_3) {
      CUser::setHackUserFlag(this);
      CUser::SetTradePunishType(this,0x40);
      cVar1 = CUser::isARSUserKick(this);
      if (cVar1 != '\0') {
        CUser::DisConnSig(this,0x2e,1,0);
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
