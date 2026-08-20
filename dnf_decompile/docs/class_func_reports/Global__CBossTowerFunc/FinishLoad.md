# FinishLoad

`_ZN6Global14CBossTowerFunc10FinishLoadEP5CUser`

`Global::CBossTowerFunc::FinishLoad(CUser*)`

| 类 | 地址 |
|---|---|
| `Global::CBossTowerFunc` | `0x08146916` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08146916  _ZN6Global14CBossTowerFunc10FinishLoadEP5CUser
#           Global::CBossTowerFunc::FinishLoad(CUser*)
# range [0x08146916, 0x08146993]
08146916 +0x00:  push   %ebp
08146917 +0x01:  mov    %esp,%ebp
08146919 +0x03:  sub    $0x28,%esp
0814691c +0x06:  mov    0x8(%ebp),%eax
0814691f +0x09:  mov    %eax,(%esp)
08146922 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08146927 +0x11:  cmp    $0xa,%eax
0814692a +0x14:  je     08146933 <+0x1d>
0814692c +0x16:  cmp    $0xc,%eax
0814692f +0x19:  je     08146960 <+0x4a>
08146931 +0x1b:  jmp    0814698d <+0x77>
08146933 +0x1d:  mov    0x8(%ebp),%eax
08146936 +0x20:  mov    %eax,(%esp)
08146939 +0x23:  call   086552a4 <_ZN5CUser13getDeathTowerEv>  ; CUser::getDeathTower()
0814693e +0x28:  mov    %eax,-0x10(%ebp)
08146941 +0x2b:  cmpl   $0x0,-0x10(%ebp)
08146945 +0x2f:  je     08146959 <+0x43>
08146947 +0x31:  mov    0x8(%ebp),%eax
0814694a +0x34:  mov    %eax,0x4(%esp)
0814694e +0x38:  mov    -0x10(%ebp),%eax
08146951 +0x3b:  mov    %eax,(%esp)
08146954 +0x3e:  call   08466024 <_ZN8WongWork11CDeathTower19handleFinishLoadingEP5CUser>  ; WongWork::CDeathTower::handleFinishLoading(CUser*)
08146959 +0x43:  mov    $0x1,%eax
0814695e +0x48:  jmp    08146992 <+0x7c>
08146960 +0x4a:  mov    0x8(%ebp),%eax
08146963 +0x4d:  mov    %eax,(%esp)
08146966 +0x50:  call   08655220 <_ZN5CUser12getBossTowerEv>  ; CUser::getBossTower()
0814696b +0x55:  mov    %eax,-0xc(%ebp)
0814696e +0x58:  cmpl   $0x0,-0xc(%ebp)
08146972 +0x5c:  je     08146986 <+0x70>
08146974 +0x5e:  mov    0x8(%ebp),%eax
08146977 +0x61:  mov    %eax,0x4(%esp)
0814697b +0x65:  mov    -0xc(%ebp),%eax
0814697e +0x68:  mov    %eax,(%esp)
08146981 +0x6b:  call   08143f6a <_ZN8WongWork10CBossTower19handleFinishLoadingEP5CUser>  ; WongWork::CBossTower::handleFinishLoading(CUser*)
08146986 +0x70:  mov    $0x1,%eax
0814698b +0x75:  jmp    08146992 <+0x7c>
0814698d +0x77:  mov    $0x0,%eax
08146992 +0x7c:  leave
08146993 +0x7d:  ret
```

## 反编译 C

```c
// Global::CBossTowerFunc::FinishLoad @ 0x8146916

/* Global::CBossTowerFunc::FinishLoad(CUser*) */

undefined4 Global::CBossTowerFunc::FinishLoad(CUser *param_1)

{
  int iVar1;
  CDeathTower *this;
  CBossTower *this_00;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state(param_1);
  if (iVar1 == 10) {
    this = (CDeathTower *)CUser::getDeathTower(param_1);
    if (this != (CDeathTower *)0x0) {
      WongWork::CDeathTower::handleFinishLoading(this,param_1);
    }
    uVar2 = 1;
  }
  else if (iVar1 == 0xc) {
    this_00 = (CBossTower *)CUser::getBossTower(param_1);
    if (this_00 != (CBossTower *)0x0) {
      WongWork::CBossTower::handleFinishLoading(this_00,param_1);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
