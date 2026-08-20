# check_error

`_ZN24Dispatcher_ObjectBringUp11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_ObjectBringUp::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ObjectBringUp` | `0x081e16ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e16ce  _ZN24Dispatcher_ObjectBringUp11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_ObjectBringUp::check_error(CUser*, MSG_BASE&)
# range [0x081e16ce, 0x081e1703]
081e16ce +0x00:  push   %ebp
081e16cf +0x01:  mov    %esp,%ebp
081e16d1 +0x03:  sub    $0x18,%esp
081e16d4 +0x06:  cmpl   $0x0,0xc(%ebp)
081e16d8 +0x0a:  jne    081e16e1 <+0x13>
081e16da +0x0c:  mov    $0xffffffff,%eax
081e16df +0x11:  jmp    081e1702 <+0x34>
081e16e1 +0x13:  mov    0xc(%ebp),%eax
081e16e4 +0x16:  mov    %eax,(%esp)
081e16e7 +0x19:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e16ec +0x1e:  cmp    $0x2,%eax
081e16ef +0x21:  setle  %al
081e16f2 +0x24:  test   %al,%al
081e16f4 +0x26:  je     081e16fd <+0x2f>
081e16f6 +0x28:  mov    $0xfffffffe,%eax
081e16fb +0x2d:  jmp    081e1702 <+0x34>
081e16fd +0x2f:  mov    $0x0,%eax
081e1702 +0x34:  leave
081e1703 +0x35:  ret
```

## 反编译 C

```c
// Dispatcher_ObjectBringUp::check_error @ 0x81e16ce

/* Dispatcher_ObjectBringUp::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_ObjectBringUp::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 < 3) {
      uVar1 = 0xfffffffe;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
