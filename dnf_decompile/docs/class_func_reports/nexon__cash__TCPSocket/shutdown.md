# shutdown

`_ZN5nexon4cash9TCPSocket8shutdownEi`

`nexon::cash::TCPSocket::shutdown(int)`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081af7fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af7fe  _ZN5nexon4cash9TCPSocket8shutdownEi
#           nexon::cash::TCPSocket::shutdown(int)
# range [0x081af7fe, 0x081af80b]
081af7fe +0x00:  push   %ebp
081af7ff +0x01:  mov    %esp,%ebp
081af801 +0x03:  mov    0x8(%ebp),%eax
081af804 +0x06:  mov    (%eax),%eax
081af806 +0x08:  cmp    $0xffffffff,%eax
081af809 +0x0b:  pop    %ebp
081af80a +0x0c:  ret
081af80b +0x0d:  nop
```

## 反编译 C

```c
// nexon::cash::TCPSocket::shutdown @ 0x81af7fe

/* nexon::cash::TCPSocket::shutdown(int) */

undefined4 nexon::cash::TCPSocket::shutdown(int param_1)

{
  return *(undefined4 *)param_1;
}
```
