# send

`_ZN30Dispatcher_SecretShopOpenClose4sendEP5CUserR9ParamBase`

`Dispatcher_SecretShopOpenClose::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecretShopOpenClose` | `0x081d2992` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d2992  _ZN30Dispatcher_SecretShopOpenClose4sendEP5CUserR9ParamBase
#           Dispatcher_SecretShopOpenClose::send(CUser*, ParamBase&)
# range [0x081d2992, 0x081d29ab]
081d2992 +0x00:  push   %ebp
081d2993 +0x01:  mov    %esp,%ebp
081d2995 +0x03:  sub    $0x10,%esp
081d2998 +0x06:  mov    0x10(%ebp),%eax
081d299b +0x09:  mov    %eax,-0x4(%ebp)
081d299e +0x0c:  mov    -0x4(%ebp),%eax
081d29a1 +0x0f:  mov    0x4(%eax),%eax
081d29a4 +0x12:  cmp    $0x7fffffff,%eax
081d29a9 +0x17:  leave
081d29aa +0x18:  ret
081d29ab +0x19:  nop
```

## 反编译 C

```c
// Dispatcher_SecretShopOpenClose::send @ 0x81d2992

/* Dispatcher_SecretShopOpenClose::send(CUser*, ParamBase&) */

undefined4 __thiscall
Dispatcher_SecretShopOpenClose::send
          (Dispatcher_SecretShopOpenClose *this,CUser *param_1,ParamBase *param_2)

{
  return *(undefined4 *)(param_2 + 4);
}
```
