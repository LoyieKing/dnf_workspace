# check_error

`_ZN22DisPatcher_SetPVPReady11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_SetPVPReady::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetPVPReady` | `0x081c9b9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c9b9c  _ZN22DisPatcher_SetPVPReady11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_SetPVPReady::check_error(CUser*, MSG_BASE&)
# range [0x081c9b9c, 0x081c9bc5]
081c9b9c +0x00:  push   %ebp
081c9b9d +0x01:  mov    %esp,%ebp
081c9b9f +0x03:  sub    $0x18,%esp
081c9ba2 +0x06:  mov    0xc(%ebp),%eax
081c9ba5 +0x09:  mov    %eax,(%esp)
081c9ba8 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c9bad +0x11:  cmp    $0x6,%eax
081c9bb0 +0x14:  setne  %al
081c9bb3 +0x17:  test   %al,%al
081c9bb5 +0x19:  je     081c9bbe <+0x22>
081c9bb7 +0x1b:  mov    $0x13,%eax
081c9bbc +0x20:  jmp    081c9bc3 <+0x27>
081c9bbe +0x22:  mov    $0x0,%eax
081c9bc3 +0x27:  leave
081c9bc4 +0x28:  ret
081c9bc5 +0x29:  nop
```

## 反编译 C

```c
// DisPatcher_SetPVPReady::check_error @ 0x81c9b9c

/* DisPatcher_SetPVPReady::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_SetPVPReady::check_error(CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 6) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x13;
  }
  return uVar2;
}
```
