# InetAddr

`_ZNK11CUdpHandler8InetAddrEPKc`

`CUdpHandler::InetAddr(char const*) const`

| 类 | 地址 |
|---|---|
| `CUdpHandler` | `0x08483e06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08483e06  _ZNK11CUdpHandler8InetAddrEPKc
#           CUdpHandler::InetAddr(char const*) const
# range [0x08483e06, 0x08483e18]
08483e06 +0x00:  push   %ebp
08483e07 +0x01:  mov    %esp,%ebp
08483e09 +0x03:  sub    $0x18,%esp
08483e0c +0x06:  mov    0xc(%ebp),%eax
08483e0f +0x09:  mov    %eax,(%esp)
08483e12 +0x0c:  call   0807e530 <_init+0xe28>
08483e17 +0x11:  leave
08483e18 +0x12:  ret
```

## 反编译 C

```c
// CUdpHandler::InetAddr @ 0x8483e06

/* CUdpHandler::InetAddr(char const*) const */

void __thiscall CUdpHandler::InetAddr(CUdpHandler *this,char *param_1)

{
  inet_addr(param_1);
  return;
}
```
