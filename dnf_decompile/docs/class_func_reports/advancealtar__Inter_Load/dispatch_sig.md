# dispatch_sig

`_ZN12advancealtar10Inter_Load12dispatch_sigEP5CUserPci`

`advancealtar::Inter_Load::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `advancealtar::Inter_Load` | `0x0813f72a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813f72a  _ZN12advancealtar10Inter_Load12dispatch_sigEP5CUserPci
#           advancealtar::Inter_Load::dispatch_sig(CUser*, char*, int)
# range [0x0813f72a, 0x0813f7af]
0813f72a +0x00:  push   %ebp
0813f72b +0x01:  mov    %esp,%ebp
0813f72d +0x03:  sub    $0x28,%esp
0813f730 +0x06:  cmpl   $0x0,0xc(%ebp)
0813f734 +0x0a:  je     0813f754 <+0x2a>
0813f736 +0x0c:  mov    0xc(%ebp),%eax
0813f739 +0x0f:  mov    %eax,(%esp)
0813f73c +0x12:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0813f741 +0x17:  test   %eax,%eax
0813f743 +0x19:  je     0813f754 <+0x2a>
0813f745 +0x1b:  mov    0xc(%ebp),%eax
0813f748 +0x1e:  mov    %eax,(%esp)
0813f74b +0x21:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0813f750 +0x26:  test   %eax,%eax
0813f752 +0x28:  jne    0813f75b <+0x31>
0813f754 +0x2a:  mov    $0x1,%eax
0813f759 +0x2f:  jmp    0813f760 <+0x36>
0813f75b +0x31:  mov    $0x0,%eax
0813f760 +0x36:  test   %al,%al
0813f762 +0x38:  je     0813f76b <+0x41>
0813f764 +0x3a:  mov    $0x2de,%eax
0813f769 +0x3f:  jmp    0813f7ae <+0x84>
0813f76b +0x41:  mov    0x10(%ebp),%eax
0813f76e +0x44:  mov    %eax,-0xc(%ebp)
0813f771 +0x47:  cmpl   $0x0,-0xc(%ebp)
0813f775 +0x4b:  jne    0813f77e <+0x54>
0813f777 +0x4d:  mov    $0x2e3,%eax
0813f77c +0x52:  jmp    0813f7ae <+0x84>
0813f77e +0x54:  mov    0xc(%ebp),%eax
0813f781 +0x57:  lea    0x8df60(%eax),%edx
0813f787 +0x5d:  mov    -0xc(%ebp),%eax
0813f78a +0x60:  mov    %eax,0x4(%esp)
0813f78e +0x64:  mov    %edx,(%esp)
0813f791 +0x67:  call   08131616 <_ZN12advancealtar25CharacAdvanceAltarManager3setERKNS_25_CharacAdvanceAltarDbDataE>  ; advancealtar::CharacAdvanceAltarManager::set(advancealtar::_CharacAdvanceAltarDbData const&)
0813f796 +0x6c:  movl   $0xa,0x4(%esp)
0813f79e +0x74:  mov    0xc(%ebp),%eax
0813f7a1 +0x77:  mov    %eax,(%esp)
0813f7a4 +0x7a:  call   081253f4 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x157>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x157
0813f7a9 +0x7f:  mov    $0x0,%eax
0813f7ae +0x84:  leave
0813f7af +0x85:  ret
```

## 反编译 C

```c
// advancealtar::Inter_Load::dispatch_sig @ 0x813f72a

/* advancealtar::Inter_Load::dispatch_sig(CUser*, char*, int) */

undefined4 advancealtar::Inter_Load::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != (char *)0x0) {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 != 0) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
      if (iVar2 != 0) {
        bVar1 = false;
        goto LAB_0813f760;
      }
    }
  }
  bVar1 = true;
LAB_0813f760:
  if (bVar1) {
    uVar3 = 0x2de;
  }
  else if (param_3 == 0) {
    uVar3 = 0x2e3;
  }
  else {
    CharacAdvanceAltarManager::set
              ((CharacAdvanceAltarManager *)(param_2 + 0x8df60),(_CharacAdvanceAltarDbData *)param_3
              );
    CUser::EnableCharacInfo((CUser *)param_2,10);
    uVar3 = 0;
  }
  return uVar3;
}
```
