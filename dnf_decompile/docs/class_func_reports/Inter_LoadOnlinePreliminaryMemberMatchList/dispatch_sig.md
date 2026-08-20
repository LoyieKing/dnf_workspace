# dispatch_sig

`_ZN42Inter_LoadOnlinePreliminaryMemberMatchList12dispatch_sigEP5CUserPci`

`Inter_LoadOnlinePreliminaryMemberMatchList::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadOnlinePreliminaryMemberMatchList` | `0x084e271e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e271e  _ZN42Inter_LoadOnlinePreliminaryMemberMatchList12dispatch_sigEP5CUserPci
#           Inter_LoadOnlinePreliminaryMemberMatchList::dispatch_sig(CUser*, char*, int)
# range [0x084e271e, 0x084e278f]
084e271e +0x00:  push   %ebp
084e271f +0x01:  mov    %esp,%ebp
084e2721 +0x03:  sub    $0x18,%esp
084e2724 +0x06:  mov    0xc(%ebp),%eax
084e2727 +0x09:  mov    %eax,(%esp)
084e272a +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e272f +0x11:  cmp    $0x2,%eax
084e2732 +0x14:  setle  %al
084e2735 +0x17:  test   %al,%al
084e2737 +0x19:  je     084e2740 <+0x22>
084e2739 +0x1b:  mov    $0x0,%eax
084e273e +0x20:  jmp    084e278d <+0x6f>
084e2740 +0x22:  mov    0xc(%ebp),%eax
084e2743 +0x25:  mov    %eax,(%esp)
084e2746 +0x28:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084e274b +0x2d:  test   %eax,%eax
084e274d +0x2f:  sete   %al
084e2750 +0x32:  test   %al,%al
084e2752 +0x34:  je     084e275b <+0x3d>
084e2754 +0x36:  mov    $0x0,%eax
084e2759 +0x3b:  jmp    084e278d <+0x6f>
084e275b +0x3d:  movl   $0x5,0x4(%esp)
084e2763 +0x45:  mov    0xc(%ebp),%eax
084e2766 +0x48:  mov    %eax,(%esp)
084e2769 +0x4b:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084e276e +0x50:  mov    (%eax),%edx
084e2770 +0x52:  add    $0x4,%edx
084e2773 +0x55:  mov    (%edx),%ecx
084e2775 +0x57:  mov    0x10(%ebp),%edx
084e2778 +0x5a:  mov    %edx,0x8(%esp)
084e277c +0x5e:  mov    0xc(%ebp),%edx
084e277f +0x61:  mov    %edx,0x4(%esp)
084e2783 +0x65:  mov    %eax,(%esp)
084e2786 +0x68:  call   *%ecx
084e2788 +0x6a:  mov    $0x0,%eax
084e278d +0x6f:  leave
084e278e +0x70:  ret
084e278f +0x71:  nop
```

## 反编译 C

```c
// Inter_LoadOnlinePreliminaryMemberMatchList::dispatch_sig @ 0x84e271e

/* Inter_LoadOnlinePreliminaryMemberMatchList::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_LoadOnlinePreliminaryMemberMatchList::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar1 != 0)) {
    piVar2 = (int *)CUser::GetCharacExpandData((CUser *)param_2,5);
    (**(code **)(*piVar2 + 4))(piVar2,param_2,param_3);
  }
  return 0;
}
```
