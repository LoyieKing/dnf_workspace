# check_error

`_ZN31Dispatcher_PrecheckSoloTeleport11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_PrecheckSoloTeleport::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PrecheckSoloTeleport` | `0x081e1a9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e1a9e  _ZN31Dispatcher_PrecheckSoloTeleport11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_PrecheckSoloTeleport::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e1a9e, 0x081e1acb]
081e1a9e +0x00:  push   %ebp
081e1a9f +0x01:  mov    %esp,%ebp
081e1aa1 +0x03:  sub    $0x28,%esp
081e1aa4 +0x06:  cmpl   $0x0,0xc(%ebp)
081e1aa8 +0x0a:  jne    081e1ab1 <+0x13>
081e1aaa +0x0c:  mov    $0xffffffff,%eax
081e1aaf +0x11:  jmp    081e1ac9 <+0x2b>
081e1ab1 +0x13:  movl   $0x0,-0xc(%ebp)
081e1ab8 +0x1a:  mov    0xc(%ebp),%eax
081e1abb +0x1d:  mov    %eax,(%esp)
081e1abe +0x20:  call   08283c5a <_ZN8Teleport10check_ruleEP5CUser>  ; Teleport::check_rule(CUser*)
081e1ac3 +0x25:  mov    %eax,-0xc(%ebp)
081e1ac6 +0x28:  mov    -0xc(%ebp),%eax
081e1ac9 +0x2b:  leave
081e1aca +0x2c:  ret
081e1acb +0x2d:  nop
```

## 反编译 C

```c
// Dispatcher_PrecheckSoloTeleport::check_error @ 0x81e1a9e

/* Dispatcher_PrecheckSoloTeleport::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_PrecheckSoloTeleport::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = Teleport::check_rule((CUser *)param_2);
  }
  return uVar1;
}
```
