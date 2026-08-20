# check_error

`_ZN21DisPatcher_PvPTimeout11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_PvPTimeout::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_PvPTimeout` | `0x081c5ebe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c5ebe  _ZN21DisPatcher_PvPTimeout11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_PvPTimeout::check_error(CUser*, MSG_BASE&)
# range [0x081c5ebe, 0x081c5ee7]
081c5ebe +0x00:  push   %ebp
081c5ebf +0x01:  mov    %esp,%ebp
081c5ec1 +0x03:  sub    $0x18,%esp
081c5ec4 +0x06:  mov    0xc(%ebp),%eax
081c5ec7 +0x09:  mov    %eax,(%esp)
081c5eca +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c5ecf +0x11:  cmp    $0x7,%eax
081c5ed2 +0x14:  setne  %al
081c5ed5 +0x17:  test   %al,%al
081c5ed7 +0x19:  je     081c5ee0 <+0x22>
081c5ed9 +0x1b:  mov    $0x13,%eax
081c5ede +0x20:  jmp    081c5ee5 <+0x27>
081c5ee0 +0x22:  mov    $0x0,%eax
081c5ee5 +0x27:  leave
081c5ee6 +0x28:  ret
081c5ee7 +0x29:  nop
```

## 反编译 C

```c
// DisPatcher_PvPTimeout::check_error @ 0x81c5ebe

/* DisPatcher_PvPTimeout::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_PvPTimeout::check_error(CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 7) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x13;
  }
  return uVar2;
}
```
