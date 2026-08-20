# GetAddExp

`_ZN13user_creature9CCreature9GetAddExpEiP5CUser`

`user_creature::CCreature::GetAddExp(int, CUser*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x08337724` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08337724  _ZN13user_creature9CCreature9GetAddExpEiP5CUser
#           user_creature::CCreature::GetAddExp(int, CUser*)
# range [0x08337724, 0x083377b5]
08337724 +0x00:  push   %ebp
08337725 +0x01:  mov    %esp,%ebp
08337727 +0x03:  sub    $0x38,%esp
0833772a +0x06:  mov    $0x0,%eax
0833772f +0x0b:  mov    %eax,-0x18(%ebp)
08337732 +0x0e:  movl   $0x0,-0x14(%ebp)
08337739 +0x15:  mov    0xc(%ebp),%eax
0833773c +0x18:  mov    %eax,0x4(%esp)
08337740 +0x1c:  mov    0x8(%ebp),%eax
08337743 +0x1f:  mov    %eax,(%esp)
08337746 +0x22:  call   083376f6 <_ZN13user_creature9CCreature19IsAvailableArtifactEi>  ; user_creature::CCreature::IsAvailableArtifact(int)
0833774b +0x27:  test   %al,%al
0833774d +0x29:  je     083377aa <+0x86>
0833774f +0x2b:  mov    0x10(%ebp),%eax
08337752 +0x2e:  mov    %eax,(%esp)
08337755 +0x31:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0833775a +0x36:  lea    0x6e8(%eax),%edx
08337760 +0x3c:  mov    0xc(%ebp),%eax
08337763 +0x3f:  mov    %eax,0x4(%esp)
08337767 +0x43:  mov    %edx,(%esp)
0833776a +0x46:  call   0833be56 <_ZN13user_creature12CCreatureMgr11GetArtifactEi>  ; user_creature::CCreatureMgr::GetArtifact(int)
0833776f +0x4b:  mov    %eax,-0x10(%ebp)
08337772 +0x4e:  cmpl   $0x0,-0x10(%ebp)
08337776 +0x52:  je     083377aa <+0x86>
08337778 +0x54:  mov    -0x10(%ebp),%eax
0833777b +0x57:  mov    %eax,(%esp)
0833777e +0x5a:  call   08337012 <_ZN13user_creature9CArtifact23GetCreatureMinimumLevelEv>  ; user_creature::CArtifact::GetCreatureMinimumLevel()
08337783 +0x5f:  mov    %eax,-0xc(%ebp)
08337786 +0x62:  cmpl   $0x0,-0xc(%ebp)
0833778a +0x66:  je     0833779c <+0x78>
0833778c +0x68:  mov    0x8(%ebp),%eax
0833778f +0x6b:  mov    0x2c(%eax),%eax
08337792 +0x6e:  cmp    -0xc(%ebp),%eax
08337795 +0x71:  jge    0833779c <+0x78>
08337797 +0x73:  mov    -0x18(%ebp),%eax
0833779a +0x76:  jmp    083377ad <+0x89>
0833779c +0x78:  mov    -0x10(%ebp),%eax
0833779f +0x7b:  mov    %eax,(%esp)
083377a2 +0x7e:  call   08336fc8 <_ZN13user_creature9CArtifact19GetExperienceAmountEv>  ; user_creature::CArtifact::GetExperienceAmount()
083377a7 +0x83:  fstps  -0x18(%ebp)
083377aa +0x86:  mov    -0x18(%ebp),%eax
083377ad +0x89:  mov    %eax,-0x1c(%ebp)
083377b0 +0x8c:  flds   -0x1c(%ebp)
083377b3 +0x8f:  leave
083377b4 +0x90:  ret
083377b5 +0x91:  nop
```

## 反编译 C

```c
// user_creature::CCreature::GetAddExp @ 0x8337724

/* user_creature::CCreature::GetAddExp(int, CUser*) */

longdouble __thiscall
user_creature::CCreature::GetAddExp(CCreature *this,int param_1,CUser *param_2)

{
  char cVar1;
  int iVar2;
  CArtifact *this_00;
  longdouble lVar3;
  float local_1c;
  
  local_1c = 0.0;
  cVar1 = IsAvailableArtifact(this,param_1);
  if (cVar1 != '\0') {
    iVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    this_00 = (CArtifact *)CCreatureMgr::GetArtifact((CCreatureMgr *)(iVar2 + 0x6e8),param_1);
    if (this_00 != (CArtifact *)0x0) {
      iVar2 = CArtifact::GetCreatureMinimumLevel(this_00);
      if ((iVar2 == 0) || (iVar2 <= *(int *)(this + 0x2c))) {
        lVar3 = (longdouble)CArtifact::GetExperienceAmount(this_00);
        local_1c = (float)lVar3;
      }
      else {
        local_1c = 0.0;
      }
    }
  }
  return (longdouble)local_1c;
}
```
