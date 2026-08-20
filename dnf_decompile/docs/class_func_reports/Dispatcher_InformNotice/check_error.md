# check_error

`_ZN23Dispatcher_InformNotice11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_InformNotice::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_InformNotice` | `0x081e3008` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e3008  _ZN23Dispatcher_InformNotice11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_InformNotice::check_error(CUser*, MSG_BASE&)
# range [0x081e3008, 0x081e3055]
081e3008 +0x00:  push   %ebp
081e3009 +0x01:  mov    %esp,%ebp
081e300b +0x03:  sub    $0x28,%esp
081e300e +0x06:  cmpl   $0x0,0xc(%ebp)
081e3012 +0x0a:  jne    081e301b <+0x13>
081e3014 +0x0c:  mov    $0xffffffff,%eax
081e3019 +0x11:  jmp    081e3054 <+0x4c>
081e301b +0x13:  mov    0xc(%ebp),%eax
081e301e +0x16:  mov    %eax,(%esp)
081e3021 +0x19:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e3026 +0x1e:  cmp    $0x2,%eax
081e3029 +0x21:  setle  %al
081e302c +0x24:  test   %al,%al
081e302e +0x26:  je     081e3037 <+0x2f>
081e3030 +0x28:  mov    $0x1,%eax
081e3035 +0x2d:  jmp    081e3054 <+0x4c>
081e3037 +0x2f:  mov    0x10(%ebp),%eax
081e303a +0x32:  mov    %eax,-0xc(%ebp)
081e303d +0x35:  mov    -0xc(%ebp),%eax
081e3040 +0x38:  mov    0xd(%eax),%eax
081e3043 +0x3b:  cmp    $0x7f,%eax
081e3046 +0x3e:  jbe    081e304f <+0x47>
081e3048 +0x40:  mov    $0xffffffff,%eax
081e304d +0x45:  jmp    081e3054 <+0x4c>
081e304f +0x47:  mov    $0x0,%eax
081e3054 +0x4c:  leave
081e3055 +0x4d:  ret
```

## 反编译 C

```c
// Dispatcher_InformNotice::check_error @ 0x81e3008

/* Dispatcher_InformNotice::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_InformNotice::check_error(Dispatcher_InformNotice *this,CUser *param_1,MSG_BASE *param_2)

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
