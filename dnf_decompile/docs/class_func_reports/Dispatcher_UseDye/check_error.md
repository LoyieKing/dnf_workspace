# check_error

`_ZN17Dispatcher_UseDye11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_UseDye::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseDye` | `0x081e727e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e727e  _ZN17Dispatcher_UseDye11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_UseDye::check_error(CUser*, MSG_BASE&)
# range [0x081e727e, 0x081e72c3]
081e727e +0x00:  push   %ebp
081e727f +0x01:  mov    %esp,%ebp
081e7281 +0x03:  sub    $0x28,%esp
081e7284 +0x06:  mov    0xc(%ebp),%eax
081e7287 +0x09:  mov    %eax,(%esp)
081e728a +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e728f +0x11:  cmp    $0x3,%eax
081e7292 +0x14:  setne  %al
081e7295 +0x17:  test   %al,%al
081e7297 +0x19:  je     081e72a0 <+0x22>
081e7299 +0x1b:  mov    $0x13,%eax
081e729e +0x20:  jmp    081e72c1 <+0x43>
081e72a0 +0x22:  mov    0xc(%ebp),%eax
081e72a3 +0x25:  mov    %eax,(%esp)
081e72a6 +0x28:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
081e72ab +0x2d:  test   %al,%al
081e72ad +0x2f:  je     081e72b6 <+0x38>
081e72af +0x31:  mov    $0x1,%eax
081e72b4 +0x36:  jmp    081e72c1 <+0x43>
081e72b6 +0x38:  mov    0x10(%ebp),%eax
081e72b9 +0x3b:  mov    %eax,-0xc(%ebp)
081e72bc +0x3e:  mov    $0x0,%eax
081e72c1 +0x43:  leave
081e72c2 +0x44:  ret
081e72c3 +0x45:  nop
```

## 反编译 C

```c
// Dispatcher_UseDye::check_error @ 0x81e727e

/* Dispatcher_UseDye::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_UseDye::check_error(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    cVar1 = CUser::CheckInTrade((CUser *)param_2);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0x13;
  }
  return uVar3;
}
```
