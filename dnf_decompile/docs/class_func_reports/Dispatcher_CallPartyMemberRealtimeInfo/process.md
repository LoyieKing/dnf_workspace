# process

`_ZN38Dispatcher_CallPartyMemberRealtimeInfo7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_CallPartyMemberRealtimeInfo::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CallPartyMemberRealtimeInfo` | `0x081ce356` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ce356  _ZN38Dispatcher_CallPartyMemberRealtimeInfo7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_CallPartyMemberRealtimeInfo::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081ce356, 0x081ce397]
081ce356 +0x00:  push   %ebp
081ce357 +0x01:  mov    %esp,%ebp
081ce359 +0x03:  sub    $0x28,%esp
081ce35c +0x06:  mov    0x10(%ebp),%eax
081ce35f +0x09:  mov    %eax,0x8(%esp)
081ce363 +0x0d:  mov    0xc(%ebp),%eax
081ce366 +0x10:  mov    %eax,0x4(%esp)
081ce36a +0x14:  mov    0x8(%ebp),%eax
081ce36d +0x17:  mov    %eax,(%esp)
081ce370 +0x1a:  call   081ce398 <_ZN38Dispatcher_CallPartyMemberRealtimeInfo11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_CallPartyMemberRealtimeInfo::check_error(CUser*, MSG_BASE&)
081ce375 +0x1f:  mov    %eax,-0xc(%ebp)
081ce378 +0x22:  cmpl   $0x0,-0xc(%ebp)
081ce37c +0x26:  jle    081ce383 <+0x2d>
081ce37e +0x28:  mov    -0xc(%ebp),%eax
081ce381 +0x2b:  jmp    081ce395 <+0x3f>
081ce383 +0x2d:  cmpl   $0x0,-0xc(%ebp)
081ce387 +0x31:  jns    081ce390 <+0x3a>
081ce389 +0x33:  mov    $0xffffffff,%eax
081ce38e +0x38:  jmp    081ce395 <+0x3f>
081ce390 +0x3a:  mov    $0x0,%eax
081ce395 +0x3f:  leave
081ce396 +0x40:  ret
081ce397 +0x41:  nop
```

## 反编译 C

```c
// Dispatcher_CallPartyMemberRealtimeInfo::process @ 0x81ce356

/* Dispatcher_CallPartyMemberRealtimeInfo::process(CUser*, MSG_BASE&, ParamBase&) */

int Dispatcher_CallPartyMemberRealtimeInfo::process
              (CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  
  iVar1 = check_error(param_1,param_2);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}
```
