# dispatch_sig

`_ZN8APSystem22Inter_EmptyActionPoint12dispatch_sigEP5CUserPci`

`APSystem::Inter_EmptyActionPoint::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `APSystem::Inter_EmptyActionPoint` | `0x08124db0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08124db0  _ZN8APSystem22Inter_EmptyActionPoint12dispatch_sigEP5CUserPci
#           APSystem::Inter_EmptyActionPoint::dispatch_sig(CUser*, char*, int)
# range [0x08124db0, 0x08124e29]
08124db0 +0x00:  push   %ebp
08124db1 +0x01:  mov    %esp,%ebp
08124db3 +0x03:  sub    $0x28,%esp
08124db6 +0x06:  cmpl   $0x0,0xc(%ebp)
08124dba +0x0a:  je     08124dda <+0x2a>
08124dbc +0x0c:  mov    0xc(%ebp),%eax
08124dbf +0x0f:  mov    %eax,(%esp)
08124dc2 +0x12:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08124dc7 +0x17:  test   %eax,%eax
08124dc9 +0x19:  je     08124dda <+0x2a>
08124dcb +0x1b:  mov    0xc(%ebp),%eax
08124dce +0x1e:  mov    %eax,(%esp)
08124dd1 +0x21:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08124dd6 +0x26:  test   %eax,%eax
08124dd8 +0x28:  jne    08124de1 <+0x31>
08124dda +0x2a:  mov    $0x1,%eax
08124ddf +0x2f:  jmp    08124de6 <+0x36>
08124de1 +0x31:  mov    $0x0,%eax
08124de6 +0x36:  test   %al,%al
08124de8 +0x38:  je     08124df1 <+0x41>
08124dea +0x3a:  mov    $0x214,%eax
08124def +0x3f:  jmp    08124e27 <+0x77>
08124df1 +0x41:  mov    0x10(%ebp),%eax
08124df4 +0x44:  mov    %eax,-0xc(%ebp)
08124df7 +0x47:  cmpl   $0x0,-0xc(%ebp)
08124dfb +0x4b:  jne    08124e04 <+0x54>
08124dfd +0x4d:  mov    $0x219,%eax
08124e02 +0x52:  jmp    08124e27 <+0x77>
08124e04 +0x54:  mov    0xc(%ebp),%eax
08124e07 +0x57:  mov    %eax,(%esp)
08124e0a +0x5a:  call   0812238a <_ZN8APSystem9CUserProc33SetTodayActionAndCheckMedalRewardEP5CUser>  ; APSystem::CUserProc::SetTodayActionAndCheckMedalReward(CUser*)
08124e0f +0x5f:  movl   $0x8,0x4(%esp)
08124e17 +0x67:  mov    0xc(%ebp),%eax
08124e1a +0x6a:  mov    %eax,(%esp)
08124e1d +0x6d:  call   081253f4 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x157>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x157
08124e22 +0x72:  mov    $0x0,%eax
08124e27 +0x77:  leave
08124e28 +0x78:  ret
08124e29 +0x79:  nop
```

## 反编译 C

```c
// APSystem::Inter_EmptyActionPoint::dispatch_sig @ 0x8124db0

/* APSystem::Inter_EmptyActionPoint::dispatch_sig(CUser*, char*, int) */

undefined4 APSystem::Inter_EmptyActionPoint::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
        goto LAB_08124de6;
      }
    }
  }
  bVar1 = true;
LAB_08124de6:
  if (bVar1) {
    uVar3 = 0x214;
  }
  else if (param_3 == 0) {
    uVar3 = 0x219;
  }
  else {
    CUserProc::SetTodayActionAndCheckMedalReward((CUser *)param_2);
    CUser::EnableCharacInfo((CUser *)param_2,8);
    uVar3 = 0;
  }
  return uVar3;
}
```
