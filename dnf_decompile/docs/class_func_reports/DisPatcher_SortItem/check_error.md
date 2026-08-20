# check_error

`_ZN19DisPatcher_SortItem11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_SortItem::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SortItem` | `0x081c9d64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c9d64  _ZN19DisPatcher_SortItem11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_SortItem::check_error(CUser*, MSG_BASE&)
# range [0x081c9d64, 0x081c9db9]
081c9d64 +0x00:  push   %ebp
081c9d65 +0x01:  mov    %esp,%ebp
081c9d67 +0x03:  sub    $0x18,%esp
081c9d6a +0x06:  cmpl   $0x0,0xc(%ebp)
081c9d6e +0x0a:  jne    081c9d96 <+0x32>
081c9d70 +0x0c:  movl   $0x0,0xc(%esp)
081c9d78 +0x14:  movl   $0x0,0x8(%esp)
081c9d80 +0x1c:  movl   $&_ZZN19DisPatcher_SortItem11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c9d88 +0x24:  movl   $0x1d56,(%esp)
081c9d8f +0x2b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c9d94 +0x30:  jmp    081c9db7 <+0x53>
081c9d96 +0x32:  mov    0xc(%ebp),%eax
081c9d99 +0x35:  mov    %eax,(%esp)
081c9d9c +0x38:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c9da1 +0x3d:  cmp    $0x2,%eax
081c9da4 +0x40:  setle  %al
081c9da7 +0x43:  test   %al,%al
081c9da9 +0x45:  je     081c9db2 <+0x4e>
081c9dab +0x47:  mov    $0xffffffff,%eax
081c9db0 +0x4c:  jmp    081c9db7 <+0x53>
081c9db2 +0x4e:  mov    $0x0,%eax
081c9db7 +0x53:  leave
081c9db8 +0x54:  ret
081c9db9 +0x55:  nop
```

## 反编译 C

```c
// DisPatcher_SortItem::check_error @ 0x81c9d64

/* DisPatcher_SortItem::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_SortItem::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = LineFunc(0x1d56,"int DisPatcher_SortItem::check_error(CUser*, MSG_BASE&)",0,0);
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 < 3) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
