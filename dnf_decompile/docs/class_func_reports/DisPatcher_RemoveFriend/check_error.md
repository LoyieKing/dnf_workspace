# check_error

`_ZN23DisPatcher_RemoveFriend11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_RemoveFriend::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_RemoveFriend` | `0x081cb5d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cb5d8  _ZN23DisPatcher_RemoveFriend11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_RemoveFriend::check_error(CUser*, MSG_BASE&)
# range [0x081cb5d8, 0x081cb617]
081cb5d8 +0x00:  push   %ebp
081cb5d9 +0x01:  mov    %esp,%ebp
081cb5db +0x03:  sub    $0x28,%esp
081cb5de +0x06:  mov    0xc(%ebp),%eax
081cb5e1 +0x09:  mov    %eax,(%esp)
081cb5e4 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081cb5e9 +0x11:  cmp    $0x2,%eax
081cb5ec +0x14:  setle  %al
081cb5ef +0x17:  test   %al,%al
081cb5f1 +0x19:  je     081cb5fa <+0x22>
081cb5f3 +0x1b:  mov    $0x7fffffff,%eax
081cb5f8 +0x20:  jmp    081cb616 <+0x3e>
081cb5fa +0x22:  mov    0x10(%ebp),%eax
081cb5fd +0x25:  mov    %eax,-0xc(%ebp)
081cb600 +0x28:  mov    -0xc(%ebp),%eax
081cb603 +0x2b:  add    $0x11,%eax
081cb606 +0x2e:  test   %eax,%eax
081cb608 +0x30:  jne    081cb611 <+0x39>
081cb60a +0x32:  mov    $0x1,%eax
081cb60f +0x37:  jmp    081cb616 <+0x3e>
081cb611 +0x39:  mov    $0x0,%eax
081cb616 +0x3e:  leave
081cb617 +0x3f:  ret
```

## 反编译 C

```c
// DisPatcher_RemoveFriend::check_error @ 0x81cb5d8

/* DisPatcher_RemoveFriend::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_RemoveFriend::check_error(DisPatcher_RemoveFriend *this,CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state(param_1);
  if (iVar1 < 3) {
    uVar2 = 0x7fffffff;
  }
  else if (param_2 == (MSG_BASE *)0xffffffef) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
