# check_error

`_ZN23Dispatcher_EvadeAssault11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_EvadeAssault::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_EvadeAssault` | `0x081ce582` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ce582  _ZN23Dispatcher_EvadeAssault11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_EvadeAssault::check_error(CUser*, MSG_BASE&)
# range [0x081ce582, 0x081ce5fd]
081ce582 +0x00:  push   %ebp
081ce583 +0x01:  mov    %esp,%ebp
081ce585 +0x03:  sub    $0x18,%esp
081ce588 +0x06:  cmpl   $0x0,0xc(%ebp)
081ce58c +0x0a:  jne    081ce5b4 <+0x32>
081ce58e +0x0c:  movl   $0x0,0xc(%esp)
081ce596 +0x14:  movl   $0x0,0x8(%esp)
081ce59e +0x1c:  movl   $&_ZZN23Dispatcher_EvadeAssault11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081ce5a6 +0x24:  movl   $0x27c2,(%esp)
081ce5ad +0x2b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ce5b2 +0x30:  jmp    081ce5fb <+0x79>
081ce5b4 +0x32:  mov    0xc(%ebp),%eax
081ce5b7 +0x35:  mov    %eax,(%esp)
081ce5ba +0x38:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ce5bf +0x3d:  cmp    $0x3,%eax
081ce5c2 +0x40:  setne  %al
081ce5c5 +0x43:  test   %al,%al
081ce5c7 +0x45:  je     081ce5f6 <+0x74>
081ce5c9 +0x47:  mov    0xc(%ebp),%eax
081ce5cc +0x4a:  mov    %eax,(%esp)
081ce5cf +0x4d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081ce5d4 +0x52:  mov    %eax,0xc(%esp)
081ce5d8 +0x56:  movl   $0x0,0x8(%esp)
081ce5e0 +0x5e:  movl   $&_ZZN23Dispatcher_EvadeAssault11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081ce5e8 +0x66:  movl   $0x27c5,(%esp)
081ce5ef +0x6d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ce5f4 +0x72:  jmp    081ce5fb <+0x79>
081ce5f6 +0x74:  mov    $0x0,%eax
081ce5fb +0x79:  leave
081ce5fc +0x7a:  ret
081ce5fd +0x7b:  nop
```

## 反编译 C

```c
// Dispatcher_EvadeAssault::check_error @ 0x81ce582

/* Dispatcher_EvadeAssault::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_EvadeAssault::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = LineFunc(0x27c2,"int Dispatcher_EvadeAssault::check_error(CUser*, MSG_BASE&)",0,0);
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 == 3) {
      uVar1 = 0;
    }
    else {
      uVar3 = CUser::get_acc_id((CUser *)param_2);
      uVar1 = LineFunc(0x27c5,"int Dispatcher_EvadeAssault::check_error(CUser*, MSG_BASE&)",0,uVar3)
      ;
    }
  }
  return uVar1;
}
```
