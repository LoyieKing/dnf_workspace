# dispatch_sig

`_ZN25Inter_LoadKillMonsterInfo12dispatch_sigEP5CUserPci`

`Inter_LoadKillMonsterInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadKillMonsterInfo` | `0x084e4ee4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e4ee4  _ZN25Inter_LoadKillMonsterInfo12dispatch_sigEP5CUserPci
#           Inter_LoadKillMonsterInfo::dispatch_sig(CUser*, char*, int)
# range [0x084e4ee4, 0x084e4f55]
084e4ee4 +0x00:  push   %ebp
084e4ee5 +0x01:  mov    %esp,%ebp
084e4ee7 +0x03:  sub    $0x28,%esp
084e4eea +0x06:  mov    0xc(%ebp),%eax
084e4eed +0x09:  mov    %eax,(%esp)
084e4ef0 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e4ef5 +0x11:  test   %eax,%eax
084e4ef7 +0x13:  sete   %al
084e4efa +0x16:  test   %al,%al
084e4efc +0x18:  je     084e4f05 <+0x21>
084e4efe +0x1a:  mov    $0x6248,%eax
084e4f03 +0x1f:  jmp    084e4f53 <+0x6f>
084e4f05 +0x21:  movl   $0xc,0x4(%esp)
084e4f0d +0x29:  mov    0xc(%ebp),%eax
084e4f10 +0x2c:  mov    %eax,(%esp)
084e4f13 +0x2f:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084e4f18 +0x34:  mov    %eax,-0xc(%ebp)
084e4f1b +0x37:  mov    -0xc(%ebp),%eax
084e4f1e +0x3a:  mov    (%eax),%eax
084e4f20 +0x3c:  add    $0x4,%eax
084e4f23 +0x3f:  mov    (%eax),%edx
084e4f25 +0x41:  mov    0x10(%ebp),%eax
084e4f28 +0x44:  mov    %eax,0x8(%esp)
084e4f2c +0x48:  mov    0xc(%ebp),%eax
084e4f2f +0x4b:  mov    %eax,0x4(%esp)
084e4f33 +0x4f:  mov    -0xc(%ebp),%eax
084e4f36 +0x52:  mov    %eax,(%esp)
084e4f39 +0x55:  call   *%edx
084e4f3b +0x57:  movl   $0x9,0x4(%esp)
084e4f43 +0x5f:  mov    0xc(%ebp),%eax
084e4f46 +0x62:  mov    %eax,(%esp)
084e4f49 +0x65:  call   081253f4 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x157>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x157
084e4f4e +0x6a:  mov    $0x0,%eax
084e4f53 +0x6f:  leave
084e4f54 +0x70:  ret
084e4f55 +0x71:  nop
```

## 反编译 C

```c
// Inter_LoadKillMonsterInfo::dispatch_sig @ 0x84e4ee4

/* Inter_LoadKillMonsterInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadKillMonsterInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 0) {
    uVar2 = 0x6248;
  }
  else {
    piVar3 = (int *)CUser::GetCharacExpandData((CUser *)param_2,0xc);
    (**(code **)(*piVar3 + 4))(piVar3,param_2,param_3);
    CUser::EnableCharacInfo((CUser *)param_2,9);
    uVar2 = 0;
  }
  return uVar2;
}
```
