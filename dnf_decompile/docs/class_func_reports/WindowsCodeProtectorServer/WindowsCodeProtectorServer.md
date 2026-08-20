# WindowsCodeProtectorServer

`_ZN26WindowsCodeProtectorServerC1Ev`

`WindowsCodeProtectorServer::WindowsCodeProtectorServer()`

| 类 | 地址 |
|---|---|
| `WindowsCodeProtectorServer` | `0x08575462` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08575462  _ZN26WindowsCodeProtectorServerC1Ev
#           WindowsCodeProtectorServer::WindowsCodeProtectorServer()
# range [0x08575462, 0x08575483]
08575462 +0x00:  push   %ebp
08575463 +0x01:  mov    %esp,%ebp
08575465 +0x03:  sub    $0x18,%esp
08575468 +0x06:  mov    0x8(%ebp),%eax
0857546b +0x09:  add    $0x4,%eax
0857546e +0x0c:  mov    %eax,(%esp)
08575471 +0x0f:  call   08576d2e <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xef2>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xef2
08575476 +0x14:  mov    0x8(%ebp),%eax
08575479 +0x17:  mov    %eax,(%esp)
0857547c +0x1a:  call   085754cc <_ZN26WindowsCodeProtectorServer10InitializeEv>  ; WindowsCodeProtectorServer::Initialize()
08575481 +0x1f:  leave
08575482 +0x20:  ret
08575483 +0x21:  nop
```

## 反编译 C

```c
// WindowsCodeProtectorServer::WindowsCodeProtectorServer @ 0x8575462

/* WindowsCodeProtectorServer::WindowsCodeProtectorServer() */

void __thiscall
WindowsCodeProtectorServer::WindowsCodeProtectorServer(WindowsCodeProtectorServer *this)

{
  std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::vector
            ((vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>> *)(this + 4));
  Initialize(this);
  return;
}
```
