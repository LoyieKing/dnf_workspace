# check_error

`_ZN31Dispatcher_SeriaRoom_Deco_Event11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_SeriaRoom_Deco_Event::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SeriaRoom_Deco_Event` | `0x081e5e50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e5e50  _ZN31Dispatcher_SeriaRoom_Deco_Event11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_SeriaRoom_Deco_Event::check_error(CUser*, MSG_BASE&)
# range [0x081e5e50, 0x081e5e85]
081e5e50 +0x00:  push   %ebp
081e5e51 +0x01:  mov    %esp,%ebp
081e5e53 +0x03:  sub    $0x18,%esp
081e5e56 +0x06:  cmpl   $0x0,0xc(%ebp)
081e5e5a +0x0a:  jne    081e5e63 <+0x13>
081e5e5c +0x0c:  mov    $0xffffffff,%eax
081e5e61 +0x11:  jmp    081e5e84 <+0x34>
081e5e63 +0x13:  mov    0xc(%ebp),%eax
081e5e66 +0x16:  mov    %eax,(%esp)
081e5e69 +0x19:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e5e6e +0x1e:  cmp    $0x3,%eax
081e5e71 +0x21:  setne  %al
081e5e74 +0x24:  test   %al,%al
081e5e76 +0x26:  je     081e5e7f <+0x2f>
081e5e78 +0x28:  mov    $0x7,%eax
081e5e7d +0x2d:  jmp    081e5e84 <+0x34>
081e5e7f +0x2f:  mov    $0x0,%eax
081e5e84 +0x34:  leave
081e5e85 +0x35:  ret
```

## 反编译 C

```c
// Dispatcher_SeriaRoom_Deco_Event::check_error @ 0x81e5e50

/* Dispatcher_SeriaRoom_Deco_Event::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_SeriaRoom_Deco_Event::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 == 3) {
      uVar1 = 0;
    }
    else {
      uVar1 = 7;
    }
  }
  return uVar1;
}
```
