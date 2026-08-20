# check_error

`_ZN17DisPatcher_SetPos11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_SetPos::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetPos` | `0x081c9994` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c9994  _ZN17DisPatcher_SetPos11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_SetPos::check_error(CUser*, MSG_BASE&)
# range [0x081c9994, 0x081c99bd]
081c9994 +0x00:  push   %ebp
081c9995 +0x01:  mov    %esp,%ebp
081c9997 +0x03:  sub    $0x18,%esp
081c999a +0x06:  mov    0xc(%ebp),%eax
081c999d +0x09:  mov    %eax,(%esp)
081c99a0 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c99a5 +0x11:  cmp    $0x3,%eax
081c99a8 +0x14:  setne  %al
081c99ab +0x17:  test   %al,%al
081c99ad +0x19:  je     081c99b6 <+0x22>
081c99af +0x1b:  mov    $0x13,%eax
081c99b4 +0x20:  jmp    081c99bb <+0x27>
081c99b6 +0x22:  mov    $0x0,%eax
081c99bb +0x27:  leave
081c99bc +0x28:  ret
081c99bd +0x29:  nop
```

## 反编译 C

```c
// DisPatcher_SetPos::check_error @ 0x81c9994

/* DisPatcher_SetPos::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_SetPos::check_error(CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 3) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x13;
  }
  return uVar2;
}
```
