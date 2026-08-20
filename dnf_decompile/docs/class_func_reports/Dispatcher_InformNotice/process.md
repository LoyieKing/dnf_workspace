# process

`_ZN23Dispatcher_InformNotice7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_InformNotice::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_InformNotice` | `0x081e2f78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e2f78  _ZN23Dispatcher_InformNotice7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_InformNotice::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e2f78, 0x081e3007]
081e2f78 +0x00:  push   %ebp
081e2f79 +0x01:  mov    %esp,%ebp
081e2f7b +0x03:  sub    $0x28,%esp
081e2f7e +0x06:  mov    0x14(%ebp),%eax
081e2f81 +0x09:  mov    %eax,-0x10(%ebp)
081e2f84 +0x0c:  mov    0x10(%ebp),%eax
081e2f87 +0x0f:  mov    %eax,0x8(%esp)
081e2f8b +0x13:  mov    0xc(%ebp),%eax
081e2f8e +0x16:  mov    %eax,0x4(%esp)
081e2f92 +0x1a:  mov    0x8(%ebp),%eax
081e2f95 +0x1d:  mov    %eax,(%esp)
081e2f98 +0x20:  call   081e3008 <_ZN23Dispatcher_InformNotice11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_InformNotice::check_error(CUser*, MSG_BASE&)
081e2f9d +0x25:  mov    -0x10(%ebp),%edx
081e2fa0 +0x28:  mov    %eax,0x4(%edx)
081e2fa3 +0x2b:  mov    -0x10(%ebp),%eax
081e2fa6 +0x2e:  mov    0x4(%eax),%eax
081e2fa9 +0x31:  test   %eax,%eax
081e2fab +0x33:  jle    081e2fb4 <+0x3c>
081e2fad +0x35:  mov    $0x0,%eax
081e2fb2 +0x3a:  jmp    081e3006 <+0x8e>
081e2fb4 +0x3c:  mov    -0x10(%ebp),%eax
081e2fb7 +0x3f:  mov    0x4(%eax),%eax
081e2fba +0x42:  test   %eax,%eax
081e2fbc +0x44:  jns    081e2fe6 <+0x6e>
081e2fbe +0x46:  mov    -0x10(%ebp),%eax
081e2fc1 +0x49:  mov    0x4(%eax),%eax
081e2fc4 +0x4c:  movl   $0x0,0xc(%esp)
081e2fcc +0x54:  mov    %eax,0x8(%esp)
081e2fd0 +0x58:  movl   $&_ZZN23Dispatcher_InformNotice7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e2fd8 +0x60:  movl   $0x598c,(%esp)
081e2fdf +0x67:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e2fe4 +0x6c:  jmp    081e3006 <+0x8e>
081e2fe6 +0x6e:  mov    0x10(%ebp),%eax
081e2fe9 +0x71:  mov    %eax,-0xc(%ebp)
081e2fec +0x74:  mov    -0xc(%ebp),%eax
081e2fef +0x77:  mov    0xd(%eax),%eax
081e2ff2 +0x7a:  mov    %eax,0x4(%esp)
081e2ff6 +0x7e:  mov    0xc(%ebp),%eax
081e2ff9 +0x81:  mov    %eax,(%esp)
081e2ffc +0x84:  call   0868f956 <_ZN5CUser22handleInformNoticeFlagEj>  ; CUser::handleInformNoticeFlag(unsigned int)
081e3001 +0x89:  mov    $0x0,%eax
081e3006 +0x8e:  leave
081e3007 +0x8f:  ret
```

## 反编译 C

```c
// Dispatcher_InformNotice::process @ 0x81e2f78

/* Dispatcher_InformNotice::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_InformNotice::process
          (Dispatcher_InformNotice *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x598c,
                       "virtual int Dispatcher_InformNotice::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      CUser::handleInformNoticeFlag(param_1,*(uint *)(param_2 + 0xd));
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
