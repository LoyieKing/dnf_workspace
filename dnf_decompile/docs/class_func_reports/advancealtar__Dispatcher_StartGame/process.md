# process

`_ZN12advancealtar20Dispatcher_StartGame7processEP5CUserR8MSG_BASER9ParamBase`

`advancealtar::Dispatcher_StartGame::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_StartGame` | `0x0813f8ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813f8ce  _ZN12advancealtar20Dispatcher_StartGame7processEP5CUserR8MSG_BASER9ParamBase
#           advancealtar::Dispatcher_StartGame::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x0813f8ce, 0x0813f929]
0813f8ce +0x00:  push   %ebp
0813f8cf +0x01:  mov    %esp,%ebp
0813f8d1 +0x03:  sub    $0x28,%esp
0813f8d4 +0x06:  mov    0x10(%ebp),%eax
0813f8d7 +0x09:  mov    %eax,-0x10(%ebp)
0813f8da +0x0c:  mov    0x14(%ebp),%eax
0813f8dd +0x0f:  mov    %eax,-0xc(%ebp)
0813f8e0 +0x12:  mov    0x10(%ebp),%eax
0813f8e3 +0x15:  mov    %eax,0x8(%esp)
0813f8e7 +0x19:  mov    0xc(%ebp),%eax
0813f8ea +0x1c:  mov    %eax,0x4(%esp)
0813f8ee +0x20:  mov    0x8(%ebp),%eax
0813f8f1 +0x23:  mov    %eax,(%esp)
0813f8f4 +0x26:  call   0813f7de <_ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE>  ; advancealtar::Dispatcher_StartGame::check_error(CUser*, MSG_BASE&)
0813f8f9 +0x2b:  mov    %eax,%edx
0813f8fb +0x2d:  mov    -0xc(%ebp),%eax
0813f8fe +0x30:  mov    %edx,0x4(%eax)
0813f901 +0x33:  mov    -0xc(%ebp),%eax
0813f904 +0x36:  mov    0x4(%eax),%eax
0813f907 +0x39:  test   %eax,%eax
0813f909 +0x3b:  je     0813f912 <+0x44>
0813f90b +0x3d:  mov    $0x0,%eax
0813f910 +0x42:  jmp    0813f927 <+0x59>
0813f912 +0x44:  mov    0xc(%ebp),%eax
0813f915 +0x47:  add    $0x8df60,%eax
0813f91a +0x4c:  mov    %eax,(%esp)
0813f91d +0x4f:  call   08131426 <_ZN12advancealtar25CharacAdvanceAltarManager28checkAndCreateDefaultRidableEv>  ; advancealtar::CharacAdvanceAltarManager::checkAndCreateDefaultRidable()
0813f922 +0x54:  mov    $0x0,%eax
0813f927 +0x59:  leave
0813f928 +0x5a:  ret
0813f929 +0x5b:  nop
```

## 反编译 C

```c
// advancealtar::Dispatcher_StartGame::process @ 0x813f8ce

/* advancealtar::Dispatcher_StartGame::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
advancealtar::Dispatcher_StartGame::process
          (Dispatcher_StartGame *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) == 0) {
    CharacAdvanceAltarManager::checkAndCreateDefaultRidable
              ((CharacAdvanceAltarManager *)(param_1 + 0x8df60));
  }
  return 0;
}
```
