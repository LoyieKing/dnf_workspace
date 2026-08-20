# AvatarConvertServer

`_ZN19AvatarConvertServerC1Ev`

`AvatarConvertServer::AvatarConvertServer()`

| 类 | 地址 |
|---|---|
| `AvatarConvertServer` | `0x081921b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081921b6  _ZN19AvatarConvertServerC1Ev
#           AvatarConvertServer::AvatarConvertServer()
# range [0x081921b6, 0x081921eb]
081921b6 +0x00:  push   %ebp
081921b7 +0x01:  mov    %esp,%ebp
081921b9 +0x03:  sub    $0x18,%esp
081921bc +0x06:  mov    0x8(%ebp),%eax
081921bf +0x09:  add    $0x4,%eax
081921c2 +0x0c:  mov    %eax,(%esp)
081921c5 +0x0f:  call   088b1b0e <_ZN4ARAD6SCRIPT13AvatarConvertC1Ev>  ; ARAD::SCRIPT::AvatarConvert::AvatarConvert()
081921ca +0x14:  mov    0x8(%ebp),%eax
081921cd +0x17:  mov    %eax,(%esp)
081921d0 +0x1a:  call   0819380a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x472>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x472
081921d5 +0x1f:  mov    0x8(%ebp),%eax
081921d8 +0x22:  mov    %eax,(%esp)
081921db +0x25:  call   080e2454 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1fa>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1fa
081921e0 +0x2a:  mov    0x8(%ebp),%eax
081921e3 +0x2d:  movl   $&_ZTV19AvatarConvertServer+0x8,(%eax)
081921e9 +0x33:  leave
081921ea +0x34:  ret
081921eb +0x35:  nop
```

## 反编译 C

```c
// AvatarConvertServer::AvatarConvertServer @ 0x81921b6

/* AvatarConvertServer::AvatarConvertServer() */

void __thiscall AvatarConvertServer::AvatarConvertServer(AvatarConvertServer *this)

{
  ARAD::SCRIPT::AvatarConvert::AvatarConvert((AvatarConvert *)(this + 4));
  ARAD::Singleton<AvatarConvertServer>::Singleton();
  ARAD::ScriptInterface::ScriptInterface((ScriptInterface *)this);
  *(undefined ***)this = &PTR_Load_08b9b938;
  return;
}
```
