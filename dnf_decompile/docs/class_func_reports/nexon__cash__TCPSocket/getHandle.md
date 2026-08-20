# getHandle

`_ZNK5nexon4cash9TCPSocket9getHandleEv`

`nexon::cash::TCPSocket::getHandle() const`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081af7f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af7f4  _ZNK5nexon4cash9TCPSocket9getHandleEv
#           nexon::cash::TCPSocket::getHandle() const
# range [0x081af7f4, 0x081af7fd]
081af7f4 +0x00:  push   %ebp
081af7f5 +0x01:  mov    %esp,%ebp
081af7f7 +0x03:  mov    0x8(%ebp),%eax
081af7fa +0x06:  mov    (%eax),%eax
081af7fc +0x08:  pop    %ebp
081af7fd +0x09:  ret
```

## 反编译 C

```c
// nexon::cash::TCPSocket::getHandle @ 0x81af7f4

/* nexon::cash::TCPSocket::getHandle() const */

undefined4 __thiscall nexon::cash::TCPSocket::getHandle(TCPSocket *this)

{
  return *(undefined4 *)this;
}
```
