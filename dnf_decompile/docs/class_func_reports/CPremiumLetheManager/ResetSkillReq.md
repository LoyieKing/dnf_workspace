# ResetSkillReq

`_ZN20CPremiumLetheManager13ResetSkillReqEP5CUser`

`CPremiumLetheManager::ResetSkillReq(CUser*)`

| 类 | 地址 |
|---|---|
| `CPremiumLetheManager` | `0x085c3d14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c3d14  _ZN20CPremiumLetheManager13ResetSkillReqEP5CUser
#           CPremiumLetheManager::ResetSkillReq(CUser*)
# range [0x085c3d14, 0x085c3d6f]
085c3d14 +0x00:  push   %ebp
085c3d15 +0x01:  mov    %esp,%ebp
085c3d17 +0x03:  sub    $0x18,%esp
085c3d1a +0x06:  mov    0xc(%ebp),%eax
085c3d1d +0x09:  mov    %eax,(%esp)
085c3d20 +0x0c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085c3d25 +0x11:  test   %eax,%eax
085c3d27 +0x13:  sete   %al
085c3d2a +0x16:  test   %al,%al
085c3d2c +0x18:  je     085c3d35 <+0x21>
085c3d2e +0x1a:  mov    $0x0,%eax
085c3d33 +0x1f:  jmp    085c3d6d <+0x59>
085c3d35 +0x21:  movl   $0x21,0x4(%esp)
085c3d3d +0x29:  mov    0xc(%ebp),%eax
085c3d40 +0x2c:  mov    %eax,(%esp)
085c3d43 +0x2f:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
085c3d48 +0x34:  xor    $0x1,%eax
085c3d4b +0x37:  test   %al,%al
085c3d4d +0x39:  je     085c3d56 <+0x42>
085c3d4f +0x3b:  mov    $0x0,%eax
085c3d54 +0x40:  jmp    085c3d6d <+0x59>
085c3d56 +0x42:  mov    0xc(%ebp),%eax
085c3d59 +0x45:  mov    %eax,0x4(%esp)
085c3d5d +0x49:  mov    0x8(%ebp),%eax
085c3d60 +0x4c:  mov    %eax,(%esp)
085c3d63 +0x4f:  call   085c40aa <_ZN20CPremiumLetheManager11_resetSkillEP5CUser>  ; CPremiumLetheManager::_resetSkill(CUser*)
085c3d68 +0x54:  mov    $0x1,%eax
085c3d6d +0x59:  leave
085c3d6e +0x5a:  ret
085c3d6f +0x5b:  nop
```

## 反编译 C

```c
// CPremiumLetheManager::ResetSkillReq @ 0x85c3d14

/* CPremiumLetheManager::ResetSkillReq(CUser*) */

undefined4 __thiscall CPremiumLetheManager::ResetSkillReq(CPremiumLetheManager *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CUser::isAffectedPremium(param_1,0x21);
    if (cVar1 == '\x01') {
      _resetSkill(this,param_1);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
