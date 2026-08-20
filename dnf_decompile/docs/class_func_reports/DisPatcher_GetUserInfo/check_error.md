# check_error

`_ZN22DisPatcher_GetUserInfo11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_GetUserInfo::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_GetUserInfo` | `0x081c3e7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c3e7c  _ZN22DisPatcher_GetUserInfo11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_GetUserInfo::check_error(CUser*, MSG_BASE&)
# range [0x081c3e7c, 0x081c3ea3]
081c3e7c +0x00:  push   %ebp
081c3e7d +0x01:  mov    %esp,%ebp
081c3e7f +0x03:  sub    $0x18,%esp
081c3e82 +0x06:  mov    0xc(%ebp),%eax
081c3e85 +0x09:  mov    %eax,(%esp)
081c3e88 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c3e8d +0x11:  test   %eax,%eax
081c3e8f +0x13:  sete   %al
081c3e92 +0x16:  test   %al,%al
081c3e94 +0x18:  je     081c3e9d <+0x21>
081c3e96 +0x1a:  mov    $0xffffffff,%eax
081c3e9b +0x1f:  jmp    081c3ea2 <+0x26>
081c3e9d +0x21:  mov    $0x0,%eax
081c3ea2 +0x26:  leave
081c3ea3 +0x27:  ret
```

## 反编译 C

```c
// DisPatcher_GetUserInfo::check_error @ 0x81c3e7c

/* DisPatcher_GetUserInfo::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_GetUserInfo::check_error(CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
