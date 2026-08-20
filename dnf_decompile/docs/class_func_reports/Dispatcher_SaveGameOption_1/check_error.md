# check_error

`_ZN27Dispatcher_SaveGameOption_111check_errorEP5CUserR8MSG_BASE`

`Dispatcher_SaveGameOption_1::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SaveGameOption_1` | `0x081ced4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ced4e  _ZN27Dispatcher_SaveGameOption_111check_errorEP5CUserR8MSG_BASE
#           Dispatcher_SaveGameOption_1::check_error(CUser*, MSG_BASE&)
# range [0x081ced4e, 0x081ceda3]
081ced4e +0x00:  push   %ebp
081ced4f +0x01:  mov    %esp,%ebp
081ced51 +0x03:  sub    $0x18,%esp
081ced54 +0x06:  cmpl   $0x0,0xc(%ebp)
081ced58 +0x0a:  jne    081ced80 <+0x32>
081ced5a +0x0c:  movl   $0x0,0xc(%esp)
081ced62 +0x14:  movl   $0x0,0x8(%esp)
081ced6a +0x1c:  movl   $&_ZZN27Dispatcher_SaveGameOption_111check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081ced72 +0x24:  movl   $0x28ad,(%esp)
081ced79 +0x2b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ced7e +0x30:  jmp    081ceda1 <+0x53>
081ced80 +0x32:  mov    0xc(%ebp),%eax
081ced83 +0x35:  mov    %eax,(%esp)
081ced86 +0x38:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ced8b +0x3d:  cmp    $0x1,%eax
081ced8e +0x40:  setle  %al
081ced91 +0x43:  test   %al,%al
081ced93 +0x45:  je     081ced9c <+0x4e>
081ced95 +0x47:  mov    $0xffffffff,%eax
081ced9a +0x4c:  jmp    081ceda1 <+0x53>
081ced9c +0x4e:  mov    $0x0,%eax
081ceda1 +0x53:  leave
081ceda2 +0x54:  ret
081ceda3 +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_SaveGameOption_1::check_error @ 0x81ced4e

/* Dispatcher_SaveGameOption_1::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_SaveGameOption_1::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = LineFunc(0x28ad,"int Dispatcher_SaveGameOption_1::check_error(CUser*, MSG_BASE&)",0,0);
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 < 2) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
