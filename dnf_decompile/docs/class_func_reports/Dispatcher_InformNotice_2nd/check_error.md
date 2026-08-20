# check_error

`_ZN27Dispatcher_InformNotice_2nd11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_InformNotice_2nd::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_InformNotice_2nd` | `0x081e31a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e31a6  _ZN27Dispatcher_InformNotice_2nd11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_InformNotice_2nd::check_error(CUser*, MSG_BASE&)
# range [0x081e31a6, 0x081e31f3]
081e31a6 +0x00:  push   %ebp
081e31a7 +0x01:  mov    %esp,%ebp
081e31a9 +0x03:  sub    $0x28,%esp
081e31ac +0x06:  cmpl   $0x0,0xc(%ebp)
081e31b0 +0x0a:  jne    081e31b9 <+0x13>
081e31b2 +0x0c:  mov    $0xffffffff,%eax
081e31b7 +0x11:  jmp    081e31f2 <+0x4c>
081e31b9 +0x13:  mov    0xc(%ebp),%eax
081e31bc +0x16:  mov    %eax,(%esp)
081e31bf +0x19:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e31c4 +0x1e:  cmp    $0x2,%eax
081e31c7 +0x21:  setle  %al
081e31ca +0x24:  test   %al,%al
081e31cc +0x26:  je     081e31d5 <+0x2f>
081e31ce +0x28:  mov    $0x1,%eax
081e31d3 +0x2d:  jmp    081e31f2 <+0x4c>
081e31d5 +0x2f:  mov    0x10(%ebp),%eax
081e31d8 +0x32:  mov    %eax,-0xc(%ebp)
081e31db +0x35:  mov    -0xc(%ebp),%eax
081e31de +0x38:  mov    0xd(%eax),%eax
081e31e1 +0x3b:  cmp    $0x7f,%eax
081e31e4 +0x3e:  jbe    081e31ed <+0x47>
081e31e6 +0x40:  mov    $0xffffffff,%eax
081e31eb +0x45:  jmp    081e31f2 <+0x4c>
081e31ed +0x47:  mov    $0x0,%eax
081e31f2 +0x4c:  leave
081e31f3 +0x4d:  ret
```

## 反编译 C

```c
// Dispatcher_InformNotice_2nd::check_error @ 0x81e31a6

/* Dispatcher_InformNotice_2nd::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_InformNotice_2nd::check_error
          (Dispatcher_InformNotice_2nd *this,CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 < 3) {
      uVar1 = 1;
    }
    else if (*(uint *)(param_2 + 0xd) < 0x80) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}
```
