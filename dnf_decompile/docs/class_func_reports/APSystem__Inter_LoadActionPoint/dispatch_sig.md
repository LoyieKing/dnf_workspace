# dispatch_sig

`_ZN8APSystem21Inter_LoadActionPoint12dispatch_sigEP5CUserPci`

`APSystem::Inter_LoadActionPoint::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `APSystem::Inter_LoadActionPoint` | `0x08124d2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08124d2a  _ZN8APSystem21Inter_LoadActionPoint12dispatch_sigEP5CUserPci
#           APSystem::Inter_LoadActionPoint::dispatch_sig(CUser*, char*, int)
# range [0x08124d2a, 0x08124daf]
08124d2a +0x00:  push   %ebp
08124d2b +0x01:  mov    %esp,%ebp
08124d2d +0x03:  sub    $0x28,%esp
08124d30 +0x06:  cmpl   $0x0,0xc(%ebp)
08124d34 +0x0a:  je     08124d54 <+0x2a>
08124d36 +0x0c:  mov    0xc(%ebp),%eax
08124d39 +0x0f:  mov    %eax,(%esp)
08124d3c +0x12:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08124d41 +0x17:  test   %eax,%eax
08124d43 +0x19:  je     08124d54 <+0x2a>
08124d45 +0x1b:  mov    0xc(%ebp),%eax
08124d48 +0x1e:  mov    %eax,(%esp)
08124d4b +0x21:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08124d50 +0x26:  test   %eax,%eax
08124d52 +0x28:  jne    08124d5b <+0x31>
08124d54 +0x2a:  mov    $0x1,%eax
08124d59 +0x2f:  jmp    08124d60 <+0x36>
08124d5b +0x31:  mov    $0x0,%eax
08124d60 +0x36:  test   %al,%al
08124d62 +0x38:  je     08124d6b <+0x41>
08124d64 +0x3a:  mov    $0x203,%eax
08124d69 +0x3f:  jmp    08124dae <+0x84>
08124d6b +0x41:  mov    0x10(%ebp),%eax
08124d6e +0x44:  mov    %eax,-0xc(%ebp)
08124d71 +0x47:  cmpl   $0x0,-0xc(%ebp)
08124d75 +0x4b:  jne    08124d7e <+0x54>
08124d77 +0x4d:  mov    $0x208,%eax
08124d7c +0x52:  jmp    08124dae <+0x84>
08124d7e +0x54:  mov    0xc(%ebp),%eax
08124d81 +0x57:  lea    0x8d264(%eax),%edx
08124d87 +0x5d:  mov    -0xc(%ebp),%eax
08124d8a +0x60:  mov    %eax,0x4(%esp)
08124d8e +0x64:  mov    %edx,(%esp)
08124d91 +0x67:  call   08121b0c <_ZN8APSystem19CActionPointManager3SetERNS_22_SIG_LOAD_ACTION_POINTE>  ; APSystem::CActionPointManager::Set(APSystem::_SIG_LOAD_ACTION_POINT&)
08124d96 +0x6c:  movl   $0x8,0x4(%esp)
08124d9e +0x74:  mov    0xc(%ebp),%eax
08124da1 +0x77:  mov    %eax,(%esp)
08124da4 +0x7a:  call   081253f4 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x157>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x157
08124da9 +0x7f:  mov    $0x0,%eax
08124dae +0x84:  leave
08124daf +0x85:  ret
```

## 反编译 C

```c
// APSystem::Inter_LoadActionPoint::dispatch_sig @ 0x8124d2a

/* APSystem::Inter_LoadActionPoint::dispatch_sig(CUser*, char*, int) */

undefined4 APSystem::Inter_LoadActionPoint::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
        goto LAB_08124d60;
      }
    }
  }
  bVar1 = true;
LAB_08124d60:
  if (bVar1) {
    uVar3 = 0x203;
  }
  else if (param_3 == 0) {
    uVar3 = 0x208;
  }
  else {
    CActionPointManager::Set
              ((CActionPointManager *)(param_2 + 0x8d264),(_SIG_LOAD_ACTION_POINT *)param_3);
    CUser::EnableCharacInfo((CUser *)param_2,8);
    uVar3 = 0;
  }
  return uVar3;
}
```
