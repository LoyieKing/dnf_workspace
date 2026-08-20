# check_error

`_ZN23Dispatcher_ScanBotByDll11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_ScanBotByDll::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ScanBotByDll` | `0x08264538` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08264538  _ZN23Dispatcher_ScanBotByDll11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_ScanBotByDll::check_error(CUser*, MSG_BASE&)
# range [0x08264538, 0x08264573]
08264538 +0x00:  push   %ebp
08264539 +0x01:  mov    %esp,%ebp
0826453b +0x03:  sub    $0x10,%esp
0826453e +0x06:  mov    0x10(%ebp),%eax
08264541 +0x09:  mov    %eax,-0x8(%ebp)
08264544 +0x0c:  mov    -0x8(%ebp),%eax
08264547 +0x0f:  mov    0xd(%eax),%eax
0826454a +0x12:  add    $0x352,%eax
0826454f +0x17:  mov    %eax,-0x4(%ebp)
08264552 +0x1a:  mov    -0x4(%ebp),%eax
08264555 +0x1d:  cmp    $0x351,%eax
0826455a +0x22:  jle    08264566 <+0x2e>
0826455c +0x24:  mov    -0x4(%ebp),%eax
0826455f +0x27:  cmp    $0x383,%eax
08264564 +0x2c:  jle    0826456d <+0x35>
08264566 +0x2e:  mov    $0x407,%eax
0826456b +0x33:  jmp    08264572 <+0x3a>
0826456d +0x35:  mov    $0x0,%eax
08264572 +0x3a:  leave
08264573 +0x3b:  ret
```

## 反编译 C

```c
// Dispatcher_ScanBotByDll::check_error @ 0x8264538

/* Dispatcher_ScanBotByDll::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ScanBotByDll::check_error(Dispatcher_ScanBotByDll *this,CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_2 + 0xd) + 0x352 < 0x352) || (899 < *(int *)(param_2 + 0xd) + 0x352)) {
    uVar1 = 0x407;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
