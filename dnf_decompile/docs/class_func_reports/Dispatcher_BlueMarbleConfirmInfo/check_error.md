# check_error

`_ZN32Dispatcher_BlueMarbleConfirmInfo11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_BlueMarbleConfirmInfo::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BlueMarbleConfirmInfo` | `0x081e68c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e68c8  _ZN32Dispatcher_BlueMarbleConfirmInfo11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_BlueMarbleConfirmInfo::check_error(CUser*, MSG_BASE&)
# range [0x081e68c8, 0x081e6903]
081e68c8 +0x00:  push   %ebp
081e68c9 +0x01:  mov    %esp,%ebp
081e68cb +0x03:  sub    $0x28,%esp
081e68ce +0x06:  mov    0x10(%ebp),%eax
081e68d1 +0x09:  mov    %eax,-0xc(%ebp)
081e68d4 +0x0c:  cmpl   $0x0,0xc(%ebp)
081e68d8 +0x10:  jne    081e68e1 <+0x19>
081e68da +0x12:  mov    $0xffffffff,%eax
081e68df +0x17:  jmp    081e6902 <+0x3a>
081e68e1 +0x19:  mov    0xc(%ebp),%eax
081e68e4 +0x1c:  mov    %eax,(%esp)
081e68e7 +0x1f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e68ec +0x24:  cmp    $0x2,%eax
081e68ef +0x27:  setle  %al
081e68f2 +0x2a:  test   %al,%al
081e68f4 +0x2c:  je     081e68fd <+0x35>
081e68f6 +0x2e:  mov    $0xffffffff,%eax
081e68fb +0x33:  jmp    081e6902 <+0x3a>
081e68fd +0x35:  mov    $0x0,%eax
081e6902 +0x3a:  leave
081e6903 +0x3b:  ret
```

## 反编译 C

```c
// Dispatcher_BlueMarbleConfirmInfo::check_error @ 0x81e68c8

/* Dispatcher_BlueMarbleConfirmInfo::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_BlueMarbleConfirmInfo::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 < 3) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
