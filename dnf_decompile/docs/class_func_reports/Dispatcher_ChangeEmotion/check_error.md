# check_error

`_ZN24Dispatcher_ChangeEmotion11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_ChangeEmotion::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeEmotion` | `0x081d1cec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d1cec  _ZN24Dispatcher_ChangeEmotion11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_ChangeEmotion::check_error(CUser*, MSG_BASE&)
# range [0x081d1cec, 0x081d1d5f]
081d1cec +0x00:  push   %ebp
081d1ced +0x01:  mov    %esp,%ebp
081d1cef +0x03:  sub    $0x18,%esp
081d1cf2 +0x06:  cmpl   $0x0,0xc(%ebp)
081d1cf6 +0x0a:  jne    081d1d1e <+0x32>
081d1cf8 +0x0c:  movl   $0x0,0xc(%esp)
081d1d00 +0x14:  movl   $0x0,0x8(%esp)
081d1d08 +0x1c:  movl   $&_ZZN24Dispatcher_ChangeEmotion11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d1d10 +0x24:  movl   $0x2e77,(%esp)
081d1d17 +0x2b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d1d1c +0x30:  jmp    081d1d5d <+0x71>
081d1d1e +0x32:  mov    0xc(%ebp),%eax
081d1d21 +0x35:  mov    %eax,(%esp)
081d1d24 +0x38:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081d1d29 +0x3d:  test   %eax,%eax
081d1d2b +0x3f:  sete   %al
081d1d2e +0x42:  test   %al,%al
081d1d30 +0x44:  je     081d1d58 <+0x6c>
081d1d32 +0x46:  movl   $0x0,0xc(%esp)
081d1d3a +0x4e:  movl   $0x0,0x8(%esp)
081d1d42 +0x56:  movl   $&_ZZN24Dispatcher_ChangeEmotion11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d1d4a +0x5e:  movl   $0x2e7a,(%esp)
081d1d51 +0x65:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d1d56 +0x6a:  jmp    081d1d5d <+0x71>
081d1d58 +0x6c:  mov    $0x0,%eax
081d1d5d +0x71:  leave
081d1d5e +0x72:  ret
081d1d5f +0x73:  nop
```

## 反编译 C

```c
// Dispatcher_ChangeEmotion::check_error @ 0x81d1cec

/* Dispatcher_ChangeEmotion::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_ChangeEmotion::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = LineFunc(0x2e77,"int Dispatcher_ChangeEmotion::check_error(CUser*, MSG_BASE&)",0,0);
  }
  else {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 == 0) {
      uVar1 = LineFunc(0x2e7a,"int Dispatcher_ChangeEmotion::check_error(CUser*, MSG_BASE&)",0,0);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
