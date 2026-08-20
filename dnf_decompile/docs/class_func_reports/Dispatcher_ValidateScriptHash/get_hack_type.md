# get_hack_type

`_ZN29Dispatcher_ValidateScriptHash13get_hack_typeEc`

`Dispatcher_ValidateScriptHash::get_hack_type(char)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ValidateScriptHash` | `0x08264364` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08264364  _ZN29Dispatcher_ValidateScriptHash13get_hack_typeEc
#           Dispatcher_ValidateScriptHash::get_hack_type(char)
# range [0x08264364, 0x082643b1]
08264364 +0x00:  push   %ebp
08264365 +0x01:  mov    %esp,%ebp
08264367 +0x03:  sub    $0x14,%esp
0826436a +0x06:  mov    0xc(%ebp),%eax
0826436d +0x09:  mov    %al,-0x14(%ebp)
08264370 +0x0c:  movsbl -0x14(%ebp),%eax
08264374 +0x10:  cmp    $0x5,%eax
08264377 +0x13:  ja     082643ad <+0x49>
08264379 +0x15:  mov    &data#bee3c2bd(.rodata)(,%eax,4),%eax
08264380 +0x1c:  jmp    *%eax
08264382 +0x1e:  movl   $0x344,-0x4(%ebp)
08264389 +0x25:  jmp    082643ad <+0x49>
0826438b +0x27:  movl   $0x345,-0x4(%ebp)
08264392 +0x2e:  jmp    082643ad <+0x49>
08264394 +0x30:  movl   $0x346,-0x4(%ebp)
0826439b +0x37:  jmp    082643ad <+0x49>
0826439d +0x39:  movl   $0x347,-0x4(%ebp)
082643a4 +0x40:  jmp    082643ad <+0x49>
082643a6 +0x42:  movl   $0x348,-0x4(%ebp)
082643ad +0x49:  mov    -0x4(%ebp),%eax
082643b0 +0x4c:  leave
082643b1 +0x4d:  ret
```

## 反编译 C

```c
// Dispatcher_ValidateScriptHash::get_hack_type @ 0x8264364

/* Dispatcher_ValidateScriptHash::get_hack_type(char) */

undefined4 __thiscall
Dispatcher_ValidateScriptHash::get_hack_type(Dispatcher_ValidateScriptHash *this,char param_1)

{
  undefined4 local_8;
  
  switch(param_1) {
  case '\x01':
    local_8 = 0x344;
    break;
  case '\x02':
    local_8 = 0x345;
    break;
  case '\x03':
    local_8 = 0x346;
    break;
  case '\x04':
    local_8 = 0x347;
    break;
  case '\x05':
    local_8 = 0x348;
  }
  return local_8;
}
```
