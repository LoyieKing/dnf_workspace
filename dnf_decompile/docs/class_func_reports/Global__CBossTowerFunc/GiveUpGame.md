# GiveUpGame

`_ZN6Global14CBossTowerFunc10GiveUpGameEP5CUser`

`Global::CBossTowerFunc::GiveUpGame(CUser*)`

| 类 | 地址 |
|---|---|
| `Global::CBossTowerFunc` | `0x08146ad8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08146ad8  _ZN6Global14CBossTowerFunc10GiveUpGameEP5CUser
#           Global::CBossTowerFunc::GiveUpGame(CUser*)
# range [0x08146ad8, 0x08146ba1]
08146ad8 +0x00:  push   %ebp
08146ad9 +0x01:  mov    %esp,%ebp
08146adb +0x03:  sub    $0x38,%esp
08146ade +0x06:  mov    0x8(%ebp),%eax
08146ae1 +0x09:  mov    %eax,(%esp)
08146ae4 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08146ae9 +0x11:  cmp    $0xa,%eax
08146aec +0x14:  je     08146b40 <+0x68>
08146aee +0x16:  cmp    $0xc,%eax
08146af1 +0x19:  je     08146b68 <+0x90>
08146af3 +0x1b:  cmp    $0x5,%eax
08146af6 +0x1e:  jne    08146b9b <+0xc3>
08146afc +0x24:  mov    0x8(%ebp),%eax
08146aff +0x27:  mov    %eax,(%esp)
08146b02 +0x2a:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08146b07 +0x2f:  mov    %eax,-0x14(%ebp)
08146b0a +0x32:  cmpl   $0x0,-0x14(%ebp)
08146b0e +0x36:  je     08146b97 <+0xbf>
08146b14 +0x3c:  movl   $0x0,0x10(%esp)
08146b1c +0x44:  movl   $0x0,0xc(%esp)
08146b24 +0x4c:  movl   $0x1,0x8(%esp)
08146b2c +0x54:  mov    0x8(%ebp),%eax
08146b2f +0x57:  mov    %eax,0x4(%esp)
08146b33 +0x5b:  mov    -0x14(%ebp),%eax
08146b36 +0x5e:  mov    %eax,(%esp)
08146b39 +0x61:  call   085b2baa <_ZN6CParty11giveup_gameEP5CUserbbb>  ; CParty::giveup_game(CUser*, bool, bool, bool)
08146b3e +0x66:  jmp    08146b9b <+0xc3>
08146b40 +0x68:  mov    0x8(%ebp),%eax
08146b43 +0x6b:  mov    %eax,(%esp)
08146b46 +0x6e:  call   086552a4 <_ZN5CUser13getDeathTowerEv>  ; CUser::getDeathTower()
08146b4b +0x73:  mov    %eax,-0x10(%ebp)
08146b4e +0x76:  cmpl   $0x0,-0x10(%ebp)
08146b52 +0x7a:  je     08146b9a <+0xc2>
08146b54 +0x7c:  mov    0x8(%ebp),%eax
08146b57 +0x7f:  mov    %eax,0x4(%esp)
08146b5b +0x83:  mov    -0x10(%ebp),%eax
08146b5e +0x86:  mov    %eax,(%esp)
08146b61 +0x89:  call   08465ac2 <_ZN8WongWork11CDeathTower15handleLeaveUserEP5CUser>  ; WongWork::CDeathTower::handleLeaveUser(CUser*)
08146b66 +0x8e:  jmp    08146b9b <+0xc3>
08146b68 +0x90:  mov    0x8(%ebp),%eax
08146b6b +0x93:  mov    %eax,(%esp)
08146b6e +0x96:  call   08655220 <_ZN5CUser12getBossTowerEv>  ; CUser::getBossTower()
08146b73 +0x9b:  mov    %eax,-0xc(%ebp)
08146b76 +0x9e:  cmpl   $0x0,-0xc(%ebp)
08146b7a +0xa2:  je     08146b9b <+0xc3>
08146b7c +0xa4:  mov    -0xc(%ebp),%eax
08146b7f +0xa7:  mov    (%eax),%eax
08146b81 +0xa9:  add    $0x14,%eax
08146b84 +0xac:  mov    (%eax),%edx
08146b86 +0xae:  mov    0x8(%ebp),%eax
08146b89 +0xb1:  mov    %eax,0x4(%esp)
08146b8d +0xb5:  mov    -0xc(%ebp),%eax
08146b90 +0xb8:  mov    %eax,(%esp)
08146b93 +0xbb:  call   *%edx
08146b95 +0xbd:  jmp    08146b9b <+0xc3>
08146b97 +0xbf:  nop
08146b98 +0xc0:  jmp    08146b9b <+0xc3>
08146b9a +0xc2:  nop
08146b9b +0xc3:  mov    $0x1,%eax
08146ba0 +0xc8:  leave
08146ba1 +0xc9:  ret
```

## 反编译 C

```c
// Global::CBossTowerFunc::GiveUpGame @ 0x8146ad8

/* Global::CBossTowerFunc::GiveUpGame(CUser*) */

undefined4 Global::CBossTowerFunc::GiveUpGame(CUser *param_1)

{
  int iVar1;
  CParty *this;
  CDeathTower *this_00;
  int *piVar2;
  
  iVar1 = CUser::get_state(param_1);
  if (iVar1 == 10) {
    this_00 = (CDeathTower *)CUser::getDeathTower(param_1);
    if (this_00 != (CDeathTower *)0x0) {
      WongWork::CDeathTower::handleLeaveUser(this_00,param_1);
    }
  }
  else if (iVar1 == 0xc) {
    piVar2 = (int *)CUser::getBossTower(param_1);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x14))(piVar2,param_1);
    }
  }
  else if ((iVar1 == 5) && (this = (CParty *)CUser::GetParty(param_1), this != (CParty *)0x0)) {
    CParty::giveup_game(this,param_1,true,false,false);
  }
  return 1;
}
```
