# TCPSocket

`_ZN5nexon4cash9TCPSocketC1Ev`

`nexon::cash::TCPSocket::TCPSocket()`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081af4cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af4cc  _ZN5nexon4cash9TCPSocketC1Ev
#           nexon::cash::TCPSocket::TCPSocket()
# range [0x081af4cc, 0x081af50d]
081af4cc +0x00:  push   %ebp
081af4cd +0x01:  mov    %esp,%ebp
081af4cf +0x03:  sub    $0x18,%esp
081af4d2 +0x06:  mov    0x8(%ebp),%eax
081af4d5 +0x09:  movl   $0xffffffff,(%eax)
081af4db +0x0f:  mov    0x8(%ebp),%eax
081af4de +0x12:  movl   $0x0,0x1c(%eax)
081af4e5 +0x19:  mov    0x8(%ebp),%eax
081af4e8 +0x1c:  add    $0x14,%eax
081af4eb +0x1f:  movl   $0x4,0x8(%esp)
081af4f3 +0x27:  movl   $0x0,0x4(%esp)
081af4fb +0x2f:  mov    %eax,(%esp)
081af4fe +0x32:  call   0807dcc0 <_init+0x5b8>
081af503 +0x37:  mov    0x8(%ebp),%eax
081af506 +0x3a:  movw   $0x0,0x18(%eax)
081af50c +0x40:  leave
081af50d +0x41:  ret
```

## 反编译 C

```c
// nexon::cash::TCPSocket::TCPSocket @ 0x81af4cc

/* nexon::cash::TCPSocket::TCPSocket() */

void __thiscall nexon::cash::TCPSocket::TCPSocket(TCPSocket *this)

{
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 0x1c) = 0;
  memset(this + 0x14,0,4);
  *(undefined2 *)(this + 0x18) = 0;
  return;
}
```
