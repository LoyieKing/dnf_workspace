# getHandle

`_ZN5nexon4cash9UDPSocket9getHandleEv`

`nexon::cash::UDPSocket::getHandle()`

| 类 | 地址 |
|---|---|
| `nexon::cash::UDPSocket` | `0x081af17a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af17a  _ZN5nexon4cash9UDPSocket9getHandleEv
#           nexon::cash::UDPSocket::getHandle()
# range [0x081af17a, 0x081af183]
081af17a +0x00:  push   %ebp
081af17b +0x01:  mov    %esp,%ebp
081af17d +0x03:  mov    0x8(%ebp),%eax
081af180 +0x06:  mov    (%eax),%eax
081af182 +0x08:  pop    %ebp
081af183 +0x09:  ret
```

## 反编译 C

```c
// nexon::cash::UDPSocket::getHandle @ 0x81af17a

/* nexon::cash::UDPSocket::getHandle() */

undefined4 __thiscall nexon::cash::UDPSocket::getHandle(UDPSocket *this)

{
  return *(undefined4 *)this;
}
```
