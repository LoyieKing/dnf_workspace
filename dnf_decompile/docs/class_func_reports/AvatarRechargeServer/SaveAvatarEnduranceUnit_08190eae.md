# SaveAvatarEnduranceUnit

`_ZN20AvatarRechargeServer23SaveAvatarEnduranceUnitEii`

`AvatarRechargeServer::SaveAvatarEnduranceUnit(int, int)`

| 类 | 地址 |
|---|---|
| `AvatarRechargeServer` | `0x08190eae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08190eae  _ZN20AvatarRechargeServer23SaveAvatarEnduranceUnitEii
#           AvatarRechargeServer::SaveAvatarEnduranceUnit(int, int)
# range [0x08190eae, 0x08190ed7]
08190eae +0x00:  push   %ebp
08190eaf +0x01:  mov    %esp,%ebp
08190eb1 +0x03:  sub    $0x28,%esp
08190eb4 +0x06:  lea    -0x10(%ebp),%eax
08190eb7 +0x09:  mov    %eax,(%esp)
08190eba +0x0c:  call   081933f6 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e
08190ebf +0x11:  mov    0x8(%ebp),%eax
08190ec2 +0x14:  mov    %eax,-0x10(%ebp)
08190ec5 +0x17:  mov    0xc(%ebp),%eax
08190ec8 +0x1a:  mov    %eax,-0xc(%ebp)
08190ecb +0x1d:  lea    -0x10(%ebp),%eax
08190ece +0x20:  mov    %eax,(%esp)
08190ed1 +0x23:  call   08190dea <_ZN20AvatarRechargeServer23SaveAvatarEnduranceUnitERN4arad26SigAradAvatarEnduranceSaveE>  ; AvatarRechargeServer::SaveAvatarEnduranceUnit(arad::SigAradAvatarEnduranceSave&)
08190ed6 +0x28:  leave
08190ed7 +0x29:  ret
```

## 反编译 C

```c
// AvatarRechargeServer::SaveAvatarEnduranceUnit @ 0x8190eae

/* AvatarRechargeServer::SaveAvatarEnduranceUnit(int, int) */

void AvatarRechargeServer::SaveAvatarEnduranceUnit(int param_1,int param_2)

{
  int local_14;
  int local_10;
  
  arad::SigAradAvatarEnduranceSave::SigAradAvatarEnduranceSave
            ((SigAradAvatarEnduranceSave *)&local_14);
  local_14 = param_1;
  local_10 = param_2;
  SaveAvatarEnduranceUnit((SigAradAvatarEnduranceSave *)&local_14);
  return;
}
```
