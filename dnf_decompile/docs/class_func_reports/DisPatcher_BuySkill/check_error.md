# check_error

`_ZN19DisPatcher_BuySkill11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_BuySkill::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_BuySkill` | `0x081bf8be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bf8be  _ZN19DisPatcher_BuySkill11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_BuySkill::check_error(CUser*, MSG_BASE&)
# range [0x081bf8be, 0x081bf951]
081bf8be +0x00:  push   %ebp
081bf8bf +0x01:  mov    %esp,%ebp
081bf8c1 +0x03:  sub    $0x28,%esp
081bf8c4 +0x06:  cmpl   $0x0,0xc(%ebp)
081bf8c8 +0x0a:  jne    081bf8d1 <+0x13>
081bf8ca +0x0c:  mov    $0xffffffff,%eax
081bf8cf +0x11:  jmp    081bf950 <+0x92>
081bf8d1 +0x13:  mov    0x10(%ebp),%eax
081bf8d4 +0x16:  mov    %eax,-0x14(%ebp)
081bf8d7 +0x19:  movl   $0x0,-0x10(%ebp)
081bf8de +0x20:  jmp    081bf937 <+0x79>
081bf8e0 +0x22:  mov    -0x10(%ebp),%edx
081bf8e3 +0x25:  mov    -0x14(%ebp),%ecx
081bf8e6 +0x28:  mov    %edx,%eax
081bf8e8 +0x2a:  add    %eax,%eax
081bf8ea +0x2c:  add    %edx,%eax
081bf8ec +0x2e:  lea    (%ecx,%eax,1),%eax
081bf8ef +0x31:  add    $0xf,%eax
081bf8f2 +0x34:  movzbl (%eax),%eax
081bf8f5 +0x37:  mov    %al,-0x9(%ebp)
081bf8f8 +0x3a:  cmpb   $0xc7,-0x9(%ebp)
081bf8fc +0x3e:  jbe    081bf933 <+0x75>
081bf8fe +0x40:  cmpb   $0xd0,-0x9(%ebp)
081bf902 +0x44:  ja     081bf933 <+0x75>
081bf904 +0x46:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
081bf909 +0x4b:  movl   $0x1e,0xc(%esp)
081bf911 +0x53:  movl   $0x1,0x8(%esp)
081bf919 +0x5b:  mov    0xc(%ebp),%edx
081bf91c +0x5e:  mov    %edx,0x4(%esp)
081bf920 +0x62:  mov    %eax,(%esp)
081bf923 +0x65:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
081bf928 +0x6a:  test   %al,%al
081bf92a +0x6c:  je     081bf933 <+0x75>
081bf92c +0x6e:  mov    $0xd1,%eax
081bf931 +0x73:  jmp    081bf950 <+0x92>
081bf933 +0x75:  addl   $0x1,-0x10(%ebp)
081bf937 +0x79:  mov    -0x14(%ebp),%eax
081bf93a +0x7c:  movzbl 0xe(%eax),%eax
081bf93e +0x80:  movsbl %al,%eax
081bf941 +0x83:  cmp    -0x10(%ebp),%eax
081bf944 +0x86:  setg   %al
081bf947 +0x89:  test   %al,%al
081bf949 +0x8b:  jne    081bf8e0 <+0x22>
081bf94b +0x8d:  mov    $0x0,%eax
081bf950 +0x92:  leave
081bf951 +0x93:  ret
```

## 反编译 C

```c
// DisPatcher_BuySkill::check_error @ 0x81bf8be

/* DisPatcher_BuySkill::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_BuySkill::check_error(DisPatcher_BuySkill *this,CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  ServiceRestrictManager *pSVar3;
  int local_14;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    for (local_14 = 0; local_14 < (char)param_2[0xe]; local_14 = local_14 + 1) {
      if ((199 < (byte)param_2[local_14 * 3 + 0xf]) && ((byte)param_2[local_14 * 3 + 0xf] < 0xd1)) {
        pSVar3 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
        cVar1 = ServiceRestrictManager::isRestricted(pSVar3,param_1,1,0x1e);
        if (cVar1 != '\0') {
          return 0xd1;
        }
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}
```
