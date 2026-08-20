# send

`_ZN24Dispatcher_MouseRegister4sendEP5CUserR9ParamBase`

`Dispatcher_MouseRegister::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MouseRegister` | `0x082632b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082632b4  _ZN24Dispatcher_MouseRegister4sendEP5CUserR9ParamBase
#           Dispatcher_MouseRegister::send(CUser*, ParamBase&)
# range [0x082632b4, 0x082632c9]
082632b4 +0x00:  push   %ebp
082632b5 +0x01:  mov    %esp,%ebp
082632b7 +0x03:  sub    $0x10,%esp
082632ba +0x06:  mov    0x10(%ebp),%eax
082632bd +0x09:  mov    %eax,-0x4(%ebp)
082632c0 +0x0c:  mov    -0x4(%ebp),%eax
082632c3 +0x0f:  mov    0x4(%eax),%eax
082632c6 +0x12:  test   %eax,%eax
082632c8 +0x14:  leave
082632c9 +0x15:  ret
```

## 反编译 C

```c
// Dispatcher_MouseRegister::send @ 0x82632b4

/* Dispatcher_MouseRegister::send(CUser*, ParamBase&) */

undefined4 __thiscall
Dispatcher_MouseRegister::send(Dispatcher_MouseRegister *this,CUser *param_1,ParamBase *param_2)

{
  return *(undefined4 *)(param_2 + 4);
}
```
