# check_error

`_ZN27Dispatcher_Equipslot_Switch11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_Equipslot_Switch::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Equipslot_Switch` | `0x081d614a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d614a  _ZN27Dispatcher_Equipslot_Switch11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_Equipslot_Switch::check_error(CUser*, MSG_BASE&)
# range [0x081d614a, 0x081d61bd]
081d614a +0x00:  push   %ebp
081d614b +0x01:  mov    %esp,%ebp
081d614d +0x03:  sub    $0x18,%esp
081d6150 +0x06:  cmpl   $0x0,0xc(%ebp)
081d6154 +0x0a:  jne    081d617c <+0x32>
081d6156 +0x0c:  movl   $0x0,0xc(%esp)
081d615e +0x14:  movl   $0x0,0x8(%esp)
081d6166 +0x1c:  movl   $&_ZZN27Dispatcher_Equipslot_Switch11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d616e +0x24:  movl   $0x3e1c,(%esp)
081d6175 +0x2b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d617a +0x30:  jmp    081d61bc <+0x72>
081d617c +0x32:  mov    0xc(%ebp),%eax
081d617f +0x35:  mov    %eax,(%esp)
081d6182 +0x38:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d6187 +0x3d:  cmp    $0x2,%eax
081d618a +0x40:  setle  %al
081d618d +0x43:  test   %al,%al
081d618f +0x45:  je     081d61b7 <+0x6d>
081d6191 +0x47:  movl   $0x0,0xc(%esp)
081d6199 +0x4f:  movl   $0x0,0x8(%esp)
081d61a1 +0x57:  movl   $&_ZZN27Dispatcher_Equipslot_Switch11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d61a9 +0x5f:  movl   $0x3e1d,(%esp)
081d61b0 +0x66:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d61b5 +0x6b:  jmp    081d61bc <+0x72>
081d61b7 +0x6d:  mov    $0x0,%eax
081d61bc +0x72:  leave
081d61bd +0x73:  ret
```

## 反编译 C

```c
// Dispatcher_Equipslot_Switch::check_error @ 0x81d614a

/* Dispatcher_Equipslot_Switch::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_Equipslot_Switch::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = LineFunc(0x3e1c,"int Dispatcher_Equipslot_Switch::check_error(CUser*, MSG_BASE&)",0,0);
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 < 3) {
      uVar1 = LineFunc(0x3e1d,"int Dispatcher_Equipslot_Switch::check_error(CUser*, MSG_BASE&)",0,0)
      ;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
