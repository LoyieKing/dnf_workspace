# getBuff

`_ZN10BlueMarble7getBuffEP5CUserN18BlueMarbleBuffType1TE`

`BlueMarble::getBuff(CUser*, BlueMarbleBuffType::T)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d990e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d990e  _ZN10BlueMarble7getBuffEP5CUserN18BlueMarbleBuffType1TE
#           BlueMarble::getBuff(CUser*, BlueMarbleBuffType::T)
# range [0x080d990e, 0x080d99cd]
080d990e +0x00:  push   %ebp
080d990f +0x01:  mov    %esp,%ebp
080d9911 +0x03:  sub    $0x38,%esp
080d9914 +0x06:  cmpl   $0x0,0xc(%ebp)
080d9918 +0x0a:  jne    080d9924 <+0x16>
080d991a +0x0c:  mov    $0x0,%eax
080d991f +0x11:  jmp    080d99cb <+0xbd>
080d9924 +0x16:  mov    0xc(%ebp),%eax
080d9927 +0x19:  mov    %eax,0x4(%esp)
080d992b +0x1d:  mov    0x8(%ebp),%eax
080d992e +0x20:  mov    %eax,(%esp)
080d9931 +0x23:  call   080d9074 <_ZNK10BlueMarble11getUserSlotEP5CUser>  ; BlueMarble::getUserSlot(CUser*) const
080d9936 +0x28:  mov    %eax,-0xc(%ebp)
080d9939 +0x2b:  cmpl   $0xffffffff,-0xc(%ebp)
080d993d +0x2f:  jne    080d9979 <+0x6b>
080d993f +0x31:  mov    -0xc(%ebp),%eax
080d9942 +0x34:  mov    %eax,0x14(%esp)
080d9946 +0x38:  movl   $"BlueMarble::getBuff slot(%d)",0x10(%esp)
080d994e +0x40:  movl   $0x4c7,0xc(%esp)
080d9956 +0x48:  movl   $&_ZZN10BlueMarble7getBuffEP5CUserN18BlueMarbleBuffType1TEE19__PRETTY_FUNCTION__,0x8(%esp)
080d995e +0x50:  movl   $"BlueMarble.cpp",0x4(%esp)
080d9966 +0x58:  movl   $0x1,(%esp)
080d996d +0x5f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080d9972 +0x64:  mov    $0x0,%eax
080d9977 +0x69:  jmp    080d99cb <+0xbd>
080d9979 +0x6b:  mov    0x10(%ebp),%eax
080d997c +0x6e:  cmp    $0x1,%eax
080d997f +0x71:  je     080d999e <+0x90>
080d9981 +0x73:  cmp    $0x2,%eax
080d9984 +0x76:  je     080d99b2 <+0xa4>
080d9986 +0x78:  test   %eax,%eax
080d9988 +0x7a:  jne    080d99c6 <+0xb8>
080d998a +0x7c:  mov    -0xc(%ebp),%eax
080d998d +0x7f:  mov    %eax,0x4(%esp)
080d9991 +0x83:  mov    0x8(%ebp),%eax
080d9994 +0x86:  mov    %eax,(%esp)
080d9997 +0x89:  call   080d77ca <_ZNK10BlueMarble10getExpBuffEi>  ; BlueMarble::getExpBuff(int) const
080d999c +0x8e:  jmp    080d99cb <+0xbd>
080d999e +0x90:  mov    -0xc(%ebp),%eax
080d99a1 +0x93:  mov    %eax,0x4(%esp)
080d99a5 +0x97:  mov    0x8(%ebp),%eax
080d99a8 +0x9a:  mov    %eax,(%esp)
080d99ab +0x9d:  call   080d781c <_ZNK10BlueMarble11getGoldBuffEi>  ; BlueMarble::getGoldBuff(int) const
080d99b0 +0xa2:  jmp    080d99cb <+0xbd>
080d99b2 +0xa4:  mov    -0xc(%ebp),%eax
080d99b5 +0xa7:  mov    %eax,0x4(%esp)
080d99b9 +0xab:  mov    0x8(%ebp),%eax
080d99bc +0xae:  mov    %eax,(%esp)
080d99bf +0xb1:  call   080d786e <_ZNK10BlueMarble11getDropBuffEi>  ; BlueMarble::getDropBuff(int) const
080d99c4 +0xb6:  jmp    080d99cb <+0xbd>
080d99c6 +0xb8:  mov    $0x0,%eax
080d99cb +0xbd:  leave
080d99cc +0xbe:  ret
080d99cd +0xbf:  nop
```

## 反编译 C

```c
// BlueMarble::getBuff @ 0x80d990e

/* BlueMarble::getBuff(CUser*, BlueMarbleBuffType::T) */

undefined4 __thiscall BlueMarble::getBuff(BlueMarble *this,CUser *param_1,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0;
  }
  else {
    iVar2 = getUserSlot(this,param_1);
    if (iVar2 == -1) {
      LogManager::logFormat
                (1,"BlueMarble.cpp","int BlueMarble::getBuff(CUser*, BlueMarbleBuffType::T)",0x4c7,
                 "BlueMarble::getBuff slot(%d)",0xffffffff);
      uVar1 = 0;
    }
    else if (param_3 == 1) {
      uVar1 = getGoldBuff(this,iVar2);
    }
    else if (param_3 == 2) {
      uVar1 = getDropBuff(this,iVar2);
    }
    else if (param_3 == 0) {
      uVar1 = getExpBuff(this,iVar2);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
