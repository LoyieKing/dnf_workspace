# ~Socket

`_ZN5yaSSL6SocketD1Ev`

`yaSSL::Socket::~Socket()`

| 类 | 地址 |
|---|---|
| `yaSSL::Socket` | `0x087a14e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a14e0  _ZN5yaSSL6SocketD1Ev
#           yaSSL::Socket::~Socket()
# range [0x087a14e0, 0x087a14e9]
087a14e0 +0x00:  push   %ebp
087a14e1 +0x01:  mov    %esp,%ebp
087a14e3 +0x03:  pop    %ebp
087a14e4 +0x04:  ret
087a14e5 +0x05:  nop
087a14e6 +0x06:  lea    0x0(%esi),%esi
087a14e9 +0x09:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Socket::~Socket @ 0x87a14e0

/* yaSSL::Socket::~Socket() */

void __thiscall yaSSL::Socket::~Socket(Socket *this)

{
  return;
}
```
