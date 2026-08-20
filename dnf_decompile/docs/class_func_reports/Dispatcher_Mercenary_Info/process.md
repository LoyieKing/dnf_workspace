# process

`_ZN25Dispatcher_Mercenary_Info7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Mercenary_Info::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Mercenary_Info` | `0x081ddb46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ddb46  _ZN25Dispatcher_Mercenary_Info7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Mercenary_Info::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081ddb46, 0x081ddb7b]
081ddb46 +0x00:  push   %ebp
081ddb47 +0x01:  mov    %esp,%ebp
081ddb49 +0x03:  sub    $0x18,%esp
081ddb4c +0x06:  cmpl   $0x0,0xc(%ebp)
081ddb50 +0x0a:  jne    081ddb59 <+0x13>
081ddb52 +0x0c:  mov    $0xffffffff,%eax
081ddb57 +0x11:  jmp    081ddb7a <+0x34>
081ddb59 +0x13:  mov    0xc(%ebp),%eax
081ddb5c +0x16:  mov    %eax,(%esp)
081ddb5f +0x19:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ddb64 +0x1e:  cmp    $0x1,%eax
081ddb67 +0x21:  setle  %al
081ddb6a +0x24:  test   %al,%al
081ddb6c +0x26:  je     081ddb75 <+0x2f>
081ddb6e +0x28:  mov    $0xffffffff,%eax
081ddb73 +0x2d:  jmp    081ddb7a <+0x34>
081ddb75 +0x2f:  mov    $0x0,%eax
081ddb7a +0x34:  leave
081ddb7b +0x35:  ret
```

## 反编译 C

```c
// Dispatcher_Mercenary_Info::process @ 0x81ddb46

/* Dispatcher_Mercenary_Info::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_Mercenary_Info::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
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
