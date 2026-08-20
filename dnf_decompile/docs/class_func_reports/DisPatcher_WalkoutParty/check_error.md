# check_error

`_ZN23DisPatcher_WalkoutParty11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_WalkoutParty::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_WalkoutParty` | `0x081cb062` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cb062  _ZN23DisPatcher_WalkoutParty11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_WalkoutParty::check_error(CUser*, MSG_BASE&)
# range [0x081cb062, 0x081cb0b7]
081cb062 +0x00:  push   %ebp
081cb063 +0x01:  mov    %esp,%ebp
081cb065 +0x03:  sub    $0x18,%esp
081cb068 +0x06:  cmpl   $0x0,0xc(%ebp)
081cb06c +0x0a:  jne    081cb094 <+0x32>
081cb06e +0x0c:  movl   $0x0,0xc(%esp)
081cb076 +0x14:  movl   $0x0,0x8(%esp)
081cb07e +0x1c:  movl   $&_ZZN23DisPatcher_WalkoutParty11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cb086 +0x24:  movl   $0x2053,(%esp)
081cb08d +0x2b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cb092 +0x30:  jmp    081cb0b5 <+0x53>
081cb094 +0x32:  mov    0xc(%ebp),%eax
081cb097 +0x35:  mov    %eax,(%esp)
081cb09a +0x38:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081cb09f +0x3d:  cmp    $0x3,%eax
081cb0a2 +0x40:  setne  %al
081cb0a5 +0x43:  test   %al,%al
081cb0a7 +0x45:  je     081cb0b0 <+0x4e>
081cb0a9 +0x47:  mov    $0xffffffff,%eax
081cb0ae +0x4c:  jmp    081cb0b5 <+0x53>
081cb0b0 +0x4e:  mov    $0x0,%eax
081cb0b5 +0x53:  leave
081cb0b6 +0x54:  ret
081cb0b7 +0x55:  nop
```

## 反编译 C

```c
// DisPatcher_WalkoutParty::check_error @ 0x81cb062

/* DisPatcher_WalkoutParty::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_WalkoutParty::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = LineFunc(0x2053,"int DisPatcher_WalkoutParty::check_error(CUser*, MSG_BASE&)",0,0);
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 == 3) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}
```
