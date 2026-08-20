# ThreadInterface

`_ZN15ThreadInterfaceC1Ev`

`ThreadInterface::ThreadInterface()`

| 类 | 地址 |
|---|---|
| `ThreadInterface` | `0x08630b38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08630b38  _ZN15ThreadInterfaceC1Ev
#           ThreadInterface::ThreadInterface()
# range [0x08630b38, 0x08630b45]
08630b38 +0x00:  push   %ebp
08630b39 +0x01:  mov    %esp,%ebp
08630b3b +0x03:  mov    0x8(%ebp),%eax
08630b3e +0x06:  movl   $&_ZTV15ThreadInterface+0x8,(%eax)
08630b44 +0x0c:  pop    %ebp
08630b45 +0x0d:  ret
```

## 反编译 C

```c
// ThreadInterface::ThreadInterface @ 0x8630b38

/* ThreadInterface::ThreadInterface() */

void __thiscall ThreadInterface::ThreadInterface(ThreadInterface *this)

{
  *(undefined ***)this = &PTR_stop_08ce6b98;
  return;
}
```
