# register_dispatcher

`_ZN15InterDispatcher19register_dispatcherEiP14ISigDispatcher`

`InterDispatcher::register_dispatcher(int, ISigDispatcher*)`

| 类 | 地址 |
|---|---|
| `InterDispatcher` | `0x084be95e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084be95e  _ZN15InterDispatcher19register_dispatcherEiP14ISigDispatcher
#           InterDispatcher::register_dispatcher(int, ISigDispatcher*)
# range [0x084be95e, 0x084be96f]
084be95e +0x00:  push   %ebp
084be95f +0x01:  mov    %esp,%ebp
084be961 +0x03:  mov    0xc(%ebp),%edx
084be964 +0x06:  mov    0x8(%ebp),%eax
084be967 +0x09:  mov    0x10(%ebp),%ecx
084be96a +0x0c:  mov    %ecx,(%eax,%edx,4)
084be96d +0x0f:  pop    %ebp
084be96e +0x10:  ret
084be96f +0x11:  nop
```

## 反编译 C

```c
// InterDispatcher::register_dispatcher @ 0x84be95e

/* InterDispatcher::register_dispatcher(int, ISigDispatcher*) */

void __thiscall
InterDispatcher::register_dispatcher(InterDispatcher *this,int param_1,ISigDispatcher *param_2)

{
  *(ISigDispatcher **)(this + param_1 * 4) = param_2;
  return;
}
```
