# dispatch_sig

`_ZN8APSystem21Inter_LoadRewardMedal12dispatch_sigEP5CUserPci`

`APSystem::Inter_LoadRewardMedal::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `APSystem::Inter_LoadRewardMedal` | `0x08124e2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08124e2a  _ZN8APSystem21Inter_LoadRewardMedal12dispatch_sigEP5CUserPci
#           APSystem::Inter_LoadRewardMedal::dispatch_sig(CUser*, char*, int)
# range [0x08124e2a, 0x08124e9f]
08124e2a +0x00:  push   %ebp
08124e2b +0x01:  mov    %esp,%ebp
08124e2d +0x03:  sub    $0x28,%esp
08124e30 +0x06:  cmpl   $0x0,0xc(%ebp)
08124e34 +0x0a:  je     08124e54 <+0x2a>
08124e36 +0x0c:  mov    0xc(%ebp),%eax
08124e39 +0x0f:  mov    %eax,(%esp)
08124e3c +0x12:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08124e41 +0x17:  test   %eax,%eax
08124e43 +0x19:  je     08124e54 <+0x2a>
08124e45 +0x1b:  mov    0xc(%ebp),%eax
08124e48 +0x1e:  mov    %eax,(%esp)
08124e4b +0x21:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08124e50 +0x26:  test   %eax,%eax
08124e52 +0x28:  jne    08124e5b <+0x31>
08124e54 +0x2a:  mov    $0x1,%eax
08124e59 +0x2f:  jmp    08124e60 <+0x36>
08124e5b +0x31:  mov    $0x0,%eax
08124e60 +0x36:  test   %al,%al
08124e62 +0x38:  je     08124e6b <+0x41>
08124e64 +0x3a:  mov    $0x226,%eax
08124e69 +0x3f:  jmp    08124e9d <+0x73>
08124e6b +0x41:  mov    0x10(%ebp),%eax
08124e6e +0x44:  mov    %eax,-0xc(%ebp)
08124e71 +0x47:  cmpl   $0x0,-0xc(%ebp)
08124e75 +0x4b:  jne    08124e7e <+0x54>
08124e77 +0x4d:  mov    $0x22b,%eax
08124e7c +0x52:  jmp    08124e9d <+0x73>
08124e7e +0x54:  mov    0xc(%ebp),%eax
08124e81 +0x57:  mov    %eax,(%esp)
08124e84 +0x5a:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08124e89 +0x5f:  mov    -0xc(%ebp),%edx
08124e8c +0x62:  mov    %edx,0x4(%esp)
08124e90 +0x66:  mov    %eax,(%esp)
08124e93 +0x69:  call   08124c70 <_ZN8APSystem20DB_UpdateRewardMedal11makeRequestEiRKNS_22_SIG_LOAD_REWARD_MEDALE>  ; APSystem::DB_UpdateRewardMedal::makeRequest(int, APSystem::_SIG_LOAD_REWARD_MEDAL const&)
08124e98 +0x6e:  mov    $0x0,%eax
08124e9d +0x73:  leave
08124e9e +0x74:  ret
08124e9f +0x75:  nop
```

## 反编译 C

```c
// APSystem::Inter_LoadRewardMedal::dispatch_sig @ 0x8124e2a

/* APSystem::Inter_LoadRewardMedal::dispatch_sig(CUser*, char*, int) */

undefined4 APSystem::Inter_LoadRewardMedal::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
        goto LAB_08124e60;
      }
    }
  }
  bVar1 = true;
LAB_08124e60:
  if (bVar1) {
    uVar3 = 0x226;
  }
  else if (param_3 == 0) {
    uVar3 = 0x22b;
  }
  else {
    iVar2 = CUser::GetUID((CUser *)param_2);
    DB_UpdateRewardMedal::makeRequest(iVar2,(_SIG_LOAD_REWARD_MEDAL *)param_3);
    uVar3 = 0;
  }
  return uVar3;
}
```
