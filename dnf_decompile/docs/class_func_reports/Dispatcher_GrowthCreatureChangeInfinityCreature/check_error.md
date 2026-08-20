# check_error

`_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_GrowthCreatureChangeInfinityCreature::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GrowthCreatureChangeInfinityCreature` | `0x081e86a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e86a6  _ZN47Dispatcher_GrowthCreatureChangeInfinityCreature11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_GrowthCreatureChangeInfinityCreature::check_error(CUser*, MSG_BASE&)
# range [0x081e86a6, 0x081e86fb]
081e86a6 +0x00:  push   %ebp
081e86a7 +0x01:  mov    %esp,%ebp
081e86a9 +0x03:  sub    $0x28,%esp
081e86ac +0x06:  cmpl   $0x0,0xc(%ebp)
081e86b0 +0x0a:  jne    081e86b9 <+0x13>
081e86b2 +0x0c:  mov    $0xffffffff,%eax
081e86b7 +0x11:  jmp    081e86fa <+0x54>
081e86b9 +0x13:  mov    0xc(%ebp),%eax
081e86bc +0x16:  mov    %eax,(%esp)
081e86bf +0x19:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e86c4 +0x1e:  cmp    $0x3,%eax
081e86c7 +0x21:  setne  %al
081e86ca +0x24:  test   %al,%al
081e86cc +0x26:  je     081e86d5 <+0x2f>
081e86ce +0x28:  mov    $0x13,%eax
081e86d3 +0x2d:  jmp    081e86fa <+0x54>
081e86d5 +0x2f:  mov    0xc(%ebp),%eax
081e86d8 +0x32:  mov    %eax,0x4(%esp)
081e86dc +0x36:  mov    0x8(%ebp),%eax
081e86df +0x39:  mov    %eax,(%esp)
081e86e2 +0x3c:  call   081e86fc <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature17check_error_eventEP5CUser>  ; Dispatcher_GrowthCreatureChangeInfinityCreature::check_error_event(CUser*)
081e86e7 +0x41:  mov    %eax,-0xc(%ebp)
081e86ea +0x44:  cmpl   $0x0,-0xc(%ebp)
081e86ee +0x48:  je     081e86f5 <+0x4f>
081e86f0 +0x4a:  mov    -0xc(%ebp),%eax
081e86f3 +0x4d:  jmp    081e86fa <+0x54>
081e86f5 +0x4f:  mov    $0x0,%eax
081e86fa +0x54:  leave
081e86fb +0x55:  ret
```

## 反编译 C

```c
// Dispatcher_GrowthCreatureChangeInfinityCreature::check_error @ 0x81e86a6

/* Dispatcher_GrowthCreatureChangeInfinityCreature::check_error(CUser*, MSG_BASE&) */

int Dispatcher_GrowthCreatureChangeInfinityCreature::check_error(CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  
  if (param_2 == (MSG_BASE *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = CUser::get_state((CUser *)param_2);
    if (iVar1 == 3) {
      iVar1 = check_error_event((Dispatcher_GrowthCreatureChangeInfinityCreature *)param_1,
                                (CUser *)param_2);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0x13;
    }
  }
  return iVar1;
}
```
