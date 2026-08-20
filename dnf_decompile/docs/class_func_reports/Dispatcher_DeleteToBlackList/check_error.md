# check_error

`_ZN28Dispatcher_DeleteToBlackList11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_DeleteToBlackList::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_DeleteToBlackList` | `0x081cdee0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cdee0  _ZN28Dispatcher_DeleteToBlackList11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_DeleteToBlackList::check_error(CUser*, MSG_BASE&)
# range [0x081cdee0, 0x081cdf09]
081cdee0 +0x00:  push   %ebp
081cdee1 +0x01:  mov    %esp,%ebp
081cdee3 +0x03:  sub    $0x18,%esp
081cdee6 +0x06:  mov    0xc(%ebp),%eax
081cdee9 +0x09:  mov    %eax,(%esp)
081cdeec +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081cdef1 +0x11:  cmp    $0x2,%eax
081cdef4 +0x14:  setle  %al
081cdef7 +0x17:  test   %al,%al
081cdef9 +0x19:  je     081cdf02 <+0x22>
081cdefb +0x1b:  mov    $0xffffffff,%eax
081cdf00 +0x20:  jmp    081cdf07 <+0x27>
081cdf02 +0x22:  mov    $0x0,%eax
081cdf07 +0x27:  leave
081cdf08 +0x28:  ret
081cdf09 +0x29:  nop
```

## 反编译 C

```c
// Dispatcher_DeleteToBlackList::check_error @ 0x81cdee0

/* Dispatcher_DeleteToBlackList::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_DeleteToBlackList::check_error(CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 < 3) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
