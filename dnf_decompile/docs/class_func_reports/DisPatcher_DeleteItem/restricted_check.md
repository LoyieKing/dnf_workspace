# restricted_check

`_ZN21DisPatcher_DeleteItem16restricted_checkEP5CUserR8MSG_BASE`

`DisPatcher_DeleteItem::restricted_check(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DeleteItem` | `0x081c1cf6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c1cf6  _ZN21DisPatcher_DeleteItem16restricted_checkEP5CUserR8MSG_BASE
#           DisPatcher_DeleteItem::restricted_check(CUser*, MSG_BASE&)
# range [0x081c1cf6, 0x081c1d5b]
081c1cf6 +0x00:  push   %ebp
081c1cf7 +0x01:  mov    %esp,%ebp
081c1cf9 +0x03:  sub    $0x28,%esp
081c1cfc +0x06:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
081c1d01 +0x0b:  movl   $0x1,0xc(%esp)
081c1d09 +0x13:  movl   $0x1,0x8(%esp)
081c1d11 +0x1b:  mov    0xc(%ebp),%edx
081c1d14 +0x1e:  mov    %edx,0x4(%esp)
081c1d18 +0x22:  mov    %eax,(%esp)
081c1d1b +0x25:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
081c1d20 +0x2a:  test   %al,%al
081c1d22 +0x2c:  je     081c1d2b <+0x35>
081c1d24 +0x2e:  mov    $0xd1,%eax
081c1d29 +0x33:  jmp    081c1d5a <+0x64>
081c1d2b +0x35:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081c1d30 +0x3a:  movl   $0x1d,0x8(%esp)
081c1d38 +0x42:  mov    0xc(%ebp),%edx
081c1d3b +0x45:  mov    %edx,0x4(%esp)
081c1d3f +0x49:  mov    %eax,(%esp)
081c1d42 +0x4c:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081c1d47 +0x51:  mov    %eax,-0xc(%ebp)
081c1d4a +0x54:  cmpl   $0x0,-0xc(%ebp)
081c1d4e +0x58:  je     081c1d55 <+0x5f>
081c1d50 +0x5a:  mov    -0xc(%ebp),%eax
081c1d53 +0x5d:  jmp    081c1d5a <+0x64>
081c1d55 +0x5f:  mov    $0x0,%eax
081c1d5a +0x64:  leave
081c1d5b +0x65:  ret
```

## 反编译 C

```c
// DisPatcher_DeleteItem::restricted_check @ 0x81c1cf6

/* DisPatcher_DeleteItem::restricted_check(CUser*, MSG_BASE&) */

int DisPatcher_DeleteItem::restricted_check(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  ServiceRestrictManager *pSVar2;
  int iVar3;
  
  pSVar2 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar1 = ServiceRestrictManager::isRestricted(pSVar2,param_2,1,1);
  if (cVar1 == '\0') {
    iVar3 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,0x1d);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0xd1;
  }
  return iVar3;
}
```
