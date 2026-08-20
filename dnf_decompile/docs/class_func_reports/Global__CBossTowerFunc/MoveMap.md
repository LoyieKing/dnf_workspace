# MoveMap

`_ZN6Global14CBossTowerFunc7MoveMapEP5CUserPt`

`Global::CBossTowerFunc::MoveMap(CUser*, unsigned short*)`

| 类 | 地址 |
|---|---|
| `Global::CBossTowerFunc` | `0x08146ba2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08146ba2  _ZN6Global14CBossTowerFunc7MoveMapEP5CUserPt
#           Global::CBossTowerFunc::MoveMap(CUser*, unsigned short*)
# range [0x08146ba2, 0x08146c1f]
08146ba2 +0x00:  push   %ebp
08146ba3 +0x01:  mov    %esp,%ebp
08146ba5 +0x03:  sub    $0x28,%esp
08146ba8 +0x06:  mov    0x8(%ebp),%eax
08146bab +0x09:  mov    %eax,(%esp)
08146bae +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08146bb3 +0x11:  cmp    $0xa,%eax
08146bb6 +0x14:  je     08146bbf <+0x1d>
08146bb8 +0x16:  cmp    $0xc,%eax
08146bbb +0x19:  je     08146be5 <+0x43>
08146bbd +0x1b:  jmp    08146c19 <+0x77>
08146bbf +0x1d:  mov    0x8(%ebp),%eax
08146bc2 +0x20:  mov    %eax,(%esp)
08146bc5 +0x23:  call   086552a4 <_ZN5CUser13getDeathTowerEv>  ; CUser::getDeathTower()
08146bca +0x28:  mov    %eax,-0x10(%ebp)
08146bcd +0x2b:  cmpl   $0x0,-0x10(%ebp)
08146bd1 +0x2f:  je     08146bde <+0x3c>
08146bd3 +0x31:  mov    -0x10(%ebp),%eax
08146bd6 +0x34:  mov    %eax,(%esp)
08146bd9 +0x37:  call   08465c94 <_ZN8WongWork11CDeathTower13handleMoveMapEv>  ; WongWork::CDeathTower::handleMoveMap()
08146bde +0x3c:  mov    $0x1,%eax
08146be3 +0x41:  jmp    08146c1e <+0x7c>
08146be5 +0x43:  mov    0x8(%ebp),%eax
08146be8 +0x46:  mov    %eax,(%esp)
08146beb +0x49:  call   08655220 <_ZN5CUser12getBossTowerEv>  ; CUser::getBossTower()
08146bf0 +0x4e:  mov    %eax,-0xc(%ebp)
08146bf3 +0x51:  cmpl   $0x0,-0xc(%ebp)
08146bf7 +0x55:  je     08146c12 <+0x70>
08146bf9 +0x57:  mov    -0xc(%ebp),%eax
08146bfc +0x5a:  mov    (%eax),%eax
08146bfe +0x5c:  add    $0x18,%eax
08146c01 +0x5f:  mov    (%eax),%edx
08146c03 +0x61:  mov    0xc(%ebp),%eax
08146c06 +0x64:  mov    %eax,0x4(%esp)
08146c0a +0x68:  mov    -0xc(%ebp),%eax
08146c0d +0x6b:  mov    %eax,(%esp)
08146c10 +0x6e:  call   *%edx
08146c12 +0x70:  mov    $0x1,%eax
08146c17 +0x75:  jmp    08146c1e <+0x7c>
08146c19 +0x77:  mov    $0x0,%eax
08146c1e +0x7c:  leave
08146c1f +0x7d:  ret
```

## 反编译 C

```c
// Global::CBossTowerFunc::MoveMap @ 0x8146ba2

/* Global::CBossTowerFunc::MoveMap(CUser*, unsigned short*) */

undefined4 Global::CBossTowerFunc::MoveMap(CUser *param_1,ushort *param_2)

{
  int iVar1;
  CDeathTower *this;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = CUser::get_state(param_1);
  if (iVar1 == 10) {
    this = (CDeathTower *)CUser::getDeathTower(param_1);
    if (this != (CDeathTower *)0x0) {
      WongWork::CDeathTower::handleMoveMap(this);
    }
    uVar3 = 1;
  }
  else if (iVar1 == 0xc) {
    piVar2 = (int *)CUser::getBossTower(param_1);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x18))(piVar2,param_2);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
