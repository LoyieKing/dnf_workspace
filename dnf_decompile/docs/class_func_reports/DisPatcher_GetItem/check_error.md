# check_error

`_ZN18DisPatcher_GetItem11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_GetItem::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_GetItem` | `0x081c35ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c35ac  _ZN18DisPatcher_GetItem11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_GetItem::check_error(CUser*, MSG_BASE&)
# range [0x081c35ac, 0x081c35bf]
081c35ac +0x00:  push   %ebp
081c35ad +0x01:  mov    %esp,%ebp
081c35af +0x03:  sub    $0x10,%esp
081c35b2 +0x06:  mov    0x10(%ebp),%eax
081c35b5 +0x09:  mov    %eax,-0x4(%ebp)
081c35b8 +0x0c:  mov    $0x0,%eax
081c35bd +0x11:  leave
081c35be +0x12:  ret
081c35bf +0x13:  nop
```

## 反编译 C

```c
// DisPatcher_GetItem::check_error @ 0x81c35ac

/* DisPatcher_GetItem::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_GetItem::check_error(CUser *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
