# check_error

`_ZN35Dispatcher_GoldTakeIncreasingAmount11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_GoldTakeIncreasingAmount::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GoldTakeIncreasingAmount` | `0x081d5656` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d5656  _ZN35Dispatcher_GoldTakeIncreasingAmount11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_GoldTakeIncreasingAmount::check_error(CUser*, MSG_BASE&)
# range [0x081d5656, 0x081d56ab]
081d5656 +0x00:  push   %ebp
081d5657 +0x01:  mov    %esp,%ebp
081d5659 +0x03:  sub    $0x18,%esp
081d565c +0x06:  cmpl   $0x0,0xc(%ebp)
081d5660 +0x0a:  jne    081d5688 <+0x32>
081d5662 +0x0c:  movl   $0x0,0xc(%esp)
081d566a +0x14:  movl   $0x0,0x8(%esp)
081d5672 +0x1c:  movl   $&_ZZN35Dispatcher_GoldTakeIncreasingAmount11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d567a +0x24:  movl   $0x3903,(%esp)
081d5681 +0x2b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d5686 +0x30:  jmp    081d56a9 <+0x53>
081d5688 +0x32:  mov    0xc(%ebp),%eax
081d568b +0x35:  mov    %eax,(%esp)
081d568e +0x38:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d5693 +0x3d:  cmp    $0x5,%eax
081d5696 +0x40:  setne  %al
081d5699 +0x43:  test   %al,%al
081d569b +0x45:  je     081d56a4 <+0x4e>
081d569d +0x47:  mov    $0xffffffff,%eax
081d56a2 +0x4c:  jmp    081d56a9 <+0x53>
081d56a4 +0x4e:  mov    $0x0,%eax
081d56a9 +0x53:  leave
081d56aa +0x54:  ret
081d56ab +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_GoldTakeIncreasingAmount::check_error @ 0x81d5656

/* Dispatcher_GoldTakeIncreasingAmount::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_GoldTakeIncreasingAmount::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = LineFunc(0x3903,
                     "int Dispatcher_GoldTakeIncreasingAmount::check_error(CUser*, MSG_BASE&)",0,0);
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 == 5) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}
```
