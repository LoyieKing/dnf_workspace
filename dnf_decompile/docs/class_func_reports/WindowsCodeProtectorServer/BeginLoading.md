# BeginLoading

`_ZN26WindowsCodeProtectorServer12BeginLoadingEv`

`WindowsCodeProtectorServer::BeginLoading()`

| 类 | 地址 |
|---|---|
| `WindowsCodeProtectorServer` | `0x08575700` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08575700  _ZN26WindowsCodeProtectorServer12BeginLoadingEv
#           WindowsCodeProtectorServer::BeginLoading()
# range [0x08575700, 0x08575711]
08575700 +0x00:  push   %ebp
08575701 +0x01:  mov    %esp,%ebp
08575703 +0x03:  mov    0x8(%ebp),%eax
08575706 +0x06:  movb   $0x0,0x1c(%eax)
0857570a +0x0a:  mov    $0x1,%eax
0857570f +0x0f:  pop    %ebp
08575710 +0x10:  ret
08575711 +0x11:  nop
```

## 反编译 C

```c
// WindowsCodeProtectorServer::BeginLoading @ 0x8575700

/* WindowsCodeProtectorServer::BeginLoading() */

undefined4 __thiscall WindowsCodeProtectorServer::BeginLoading(WindowsCodeProtectorServer *this)

{
  this[0x1c] = (WindowsCodeProtectorServer)0x0;
  return 1;
}
```
