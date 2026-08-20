# dispatch_sig

`_ZN26Inter_LoadPvPLiveEventData12dispatch_sigEP5CUserPci`

`Inter_LoadPvPLiveEventData::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadPvPLiveEventData` | `0x084e25cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e25cc  _ZN26Inter_LoadPvPLiveEventData12dispatch_sigEP5CUserPci
#           Inter_LoadPvPLiveEventData::dispatch_sig(CUser*, char*, int)
# range [0x084e25cc, 0x084e263d]
084e25cc +0x00:  push   %ebp
084e25cd +0x01:  mov    %esp,%ebp
084e25cf +0x03:  sub    $0x18,%esp
084e25d2 +0x06:  mov    0xc(%ebp),%eax
084e25d5 +0x09:  mov    %eax,(%esp)
084e25d8 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e25dd +0x11:  cmp    $0x2,%eax
084e25e0 +0x14:  setle  %al
084e25e3 +0x17:  test   %al,%al
084e25e5 +0x19:  je     084e25ee <+0x22>
084e25e7 +0x1b:  mov    $0x0,%eax
084e25ec +0x20:  jmp    084e263b <+0x6f>
084e25ee +0x22:  mov    0xc(%ebp),%eax
084e25f1 +0x25:  mov    %eax,(%esp)
084e25f4 +0x28:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084e25f9 +0x2d:  test   %eax,%eax
084e25fb +0x2f:  sete   %al
084e25fe +0x32:  test   %al,%al
084e2600 +0x34:  je     084e2609 <+0x3d>
084e2602 +0x36:  mov    $0x0,%eax
084e2607 +0x3b:  jmp    084e263b <+0x6f>
084e2609 +0x3d:  movl   $0x3,0x4(%esp)
084e2611 +0x45:  mov    0xc(%ebp),%eax
084e2614 +0x48:  mov    %eax,(%esp)
084e2617 +0x4b:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084e261c +0x50:  mov    (%eax),%edx
084e261e +0x52:  add    $0x4,%edx
084e2621 +0x55:  mov    (%edx),%ecx
084e2623 +0x57:  mov    0x10(%ebp),%edx
084e2626 +0x5a:  mov    %edx,0x8(%esp)
084e262a +0x5e:  mov    0xc(%ebp),%edx
084e262d +0x61:  mov    %edx,0x4(%esp)
084e2631 +0x65:  mov    %eax,(%esp)
084e2634 +0x68:  call   *%ecx
084e2636 +0x6a:  mov    $0x0,%eax
084e263b +0x6f:  leave
084e263c +0x70:  ret
084e263d +0x71:  nop
```

## 反编译 C

```c
// Inter_LoadPvPLiveEventData::dispatch_sig @ 0x84e25cc

/* Inter_LoadPvPLiveEventData::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadPvPLiveEventData::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar1 != 0)) {
    piVar2 = (int *)CUser::GetCharacExpandData((CUser *)param_2,3);
    (**(code **)(*piVar2 + 4))(piVar2,param_2,param_3);
  }
  return 0;
}
```
