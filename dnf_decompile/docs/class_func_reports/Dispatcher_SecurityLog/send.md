# send

`_ZN22Dispatcher_SecurityLog4sendEP5CUserR9ParamBase`

`Dispatcher_SecurityLog::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecurityLog` | `0x0825fc34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825fc34  _ZN22Dispatcher_SecurityLog4sendEP5CUserR9ParamBase
#           Dispatcher_SecurityLog::send(CUser*, ParamBase&)
# range [0x0825fc34, 0x0825fc39]
0825fc34 +0x00:  push   %ebp
0825fc35 +0x01:  mov    %esp,%ebp
0825fc37 +0x03:  pop    %ebp
0825fc38 +0x04:  ret
0825fc39 +0x05:  nop
```

## 反编译 C

```c
// Dispatcher_SecurityLog::send @ 0x825fc34

/* Dispatcher_SecurityLog::send(CUser*, ParamBase&) */

void Dispatcher_SecurityLog::send(CUser *param_1,ParamBase *param_2)

{
  return;
}
```
