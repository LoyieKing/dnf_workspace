# DieCharacInDungeon

`_ZN6Global14CBossTowerFunc18DieCharacInDungeonEP5CUser`

`Global::CBossTowerFunc::DieCharacInDungeon(CUser*)`

| 类 | 地址 |
|---|---|
| `Global::CBossTowerFunc` | `0x08146824` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08146824  _ZN6Global14CBossTowerFunc18DieCharacInDungeonEP5CUser
#           Global::CBossTowerFunc::DieCharacInDungeon(CUser*)
# range [0x08146824, 0x081468a9]
08146824 +0x00:  push   %ebp
08146825 +0x01:  mov    %esp,%ebp
08146827 +0x03:  sub    $0x28,%esp
0814682a +0x06:  mov    0x8(%ebp),%eax
0814682d +0x09:  mov    %eax,(%esp)
08146830 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08146835 +0x11:  cmp    $0xa,%eax
08146838 +0x14:  je     08146841 <+0x1d>
0814683a +0x16:  cmp    $0xc,%eax
0814683d +0x19:  je     0814686e <+0x4a>
0814683f +0x1b:  jmp    081468a2 <+0x7e>
08146841 +0x1d:  mov    0x8(%ebp),%eax
08146844 +0x20:  mov    %eax,(%esp)
08146847 +0x23:  call   086552a4 <_ZN5CUser13getDeathTowerEv>  ; CUser::getDeathTower()
0814684c +0x28:  mov    %eax,-0x10(%ebp)
0814684f +0x2b:  cmpl   $0x0,-0x10(%ebp)
08146853 +0x2f:  je     08146867 <+0x43>
08146855 +0x31:  mov    0x8(%ebp),%eax
08146858 +0x34:  mov    %eax,0x4(%esp)
0814685c +0x38:  mov    -0x10(%ebp),%eax
0814685f +0x3b:  mov    %eax,(%esp)
08146862 +0x3e:  call   0846595a <_ZN8WongWork11CDeathTower13handleDieUserEP5CUser>  ; WongWork::CDeathTower::handleDieUser(CUser*)
08146867 +0x43:  mov    $0x1,%eax
0814686c +0x48:  jmp    081468a7 <+0x83>
0814686e +0x4a:  mov    0x8(%ebp),%eax
08146871 +0x4d:  mov    %eax,(%esp)
08146874 +0x50:  call   08655220 <_ZN5CUser12getBossTowerEv>  ; CUser::getBossTower()
08146879 +0x55:  mov    %eax,-0xc(%ebp)
0814687c +0x58:  cmpl   $0x0,-0xc(%ebp)
08146880 +0x5c:  je     0814689b <+0x77>
08146882 +0x5e:  mov    -0xc(%ebp),%eax
08146885 +0x61:  mov    (%eax),%eax
08146887 +0x63:  add    $0x10,%eax
0814688a +0x66:  mov    (%eax),%edx
0814688c +0x68:  mov    0x8(%ebp),%eax
0814688f +0x6b:  mov    %eax,0x4(%esp)
08146893 +0x6f:  mov    -0xc(%ebp),%eax
08146896 +0x72:  mov    %eax,(%esp)
08146899 +0x75:  call   *%edx
0814689b +0x77:  mov    $0x1,%eax
081468a0 +0x7c:  jmp    081468a7 <+0x83>
081468a2 +0x7e:  mov    $0x0,%eax
081468a7 +0x83:  leave
081468a8 +0x84:  ret
081468a9 +0x85:  nop
```

## 反编译 C

```c
// Global::CBossTowerFunc::DieCharacInDungeon @ 0x8146824

/* Global::CBossTowerFunc::DieCharacInDungeon(CUser*) */

undefined4 Global::CBossTowerFunc::DieCharacInDungeon(CUser *param_1)

{
  int iVar1;
  CDeathTower *this;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = CUser::get_state(param_1);
  if (iVar1 == 10) {
    this = (CDeathTower *)CUser::getDeathTower(param_1);
    if (this != (CDeathTower *)0x0) {
      WongWork::CDeathTower::handleDieUser(this,param_1);
    }
    uVar3 = 1;
  }
  else if (iVar1 == 0xc) {
    piVar2 = (int *)CUser::getBossTower(param_1);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(piVar2,param_1);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
