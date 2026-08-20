# check_error

`_ZN30Dispatcher_SaveCharacterOption11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_SaveCharacterOption::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SaveCharacterOption` | `0x081cea28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cea28  _ZN30Dispatcher_SaveCharacterOption11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_SaveCharacterOption::check_error(CUser*, MSG_BASE&)
# range [0x081cea28, 0x081cea79]
081cea28 +0x00:  push   %ebp
081cea29 +0x01:  mov    %esp,%ebp
081cea2b +0x03:  sub    $0x18,%esp
081cea2e +0x06:  cmpl   $0x0,0xc(%ebp)
081cea32 +0x0a:  jne    081cea3b <+0x13>
081cea34 +0x0c:  mov    $0xffffffff,%eax
081cea39 +0x11:  jmp    081cea77 <+0x4f>
081cea3b +0x13:  mov    0xc(%ebp),%eax
081cea3e +0x16:  mov    %eax,(%esp)
081cea41 +0x19:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081cea46 +0x1e:  cmp    $0x1,%eax
081cea49 +0x21:  setle  %al
081cea4c +0x24:  test   %al,%al
081cea4e +0x26:  je     081cea57 <+0x2f>
081cea50 +0x28:  mov    $0xfffffffe,%eax
081cea55 +0x2d:  jmp    081cea77 <+0x4f>
081cea57 +0x2f:  mov    0xc(%ebp),%eax
081cea5a +0x32:  mov    %eax,(%esp)
081cea5d +0x35:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081cea62 +0x3a:  test   %eax,%eax
081cea64 +0x3c:  sete   %al
081cea67 +0x3f:  test   %al,%al
081cea69 +0x41:  je     081cea72 <+0x4a>
081cea6b +0x43:  mov    $0xfffffffd,%eax
081cea70 +0x48:  jmp    081cea77 <+0x4f>
081cea72 +0x4a:  mov    $0x0,%eax
081cea77 +0x4f:  leave
081cea78 +0x50:  ret
081cea79 +0x51:  nop
```

## 反编译 C

```c
// Dispatcher_SaveCharacterOption::check_error @ 0x81cea28

/* Dispatcher_SaveCharacterOption::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_SaveCharacterOption::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 < 2) {
      uVar1 = 0xfffffffe;
    }
    else {
      iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      if (iVar2 == 0) {
        uVar1 = 0xfffffffd;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}
```
