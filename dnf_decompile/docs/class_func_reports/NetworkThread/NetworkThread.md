# NetworkThread

`_ZN13NetworkThreadC1Ev`

`NetworkThread::NetworkThread()`

| 类 | 地址 |
|---|---|
| `NetworkThread` | `0x0857d554` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857d554  _ZN13NetworkThreadC1Ev
#           NetworkThread::NetworkThread()
# range [0x0857d554, 0x0857d56f]
0857d554 +0x00:  push   %ebp
0857d555 +0x01:  mov    %esp,%ebp
0857d557 +0x03:  sub    $0x18,%esp
0857d55a +0x06:  mov    0x8(%ebp),%eax
0857d55d +0x09:  mov    %eax,(%esp)
0857d560 +0x0c:  call   08630b38 <_ZN15ThreadInterfaceC1Ev>  ; ThreadInterface::ThreadInterface()
0857d565 +0x11:  mov    0x8(%ebp),%eax
0857d568 +0x14:  movl   $&_ZTV13NetworkThread+0x8,(%eax)
0857d56e +0x1a:  leave
0857d56f +0x1b:  ret
```

## 反编译 C

```c
// NetworkThread::NetworkThread @ 0x857d554

/* NetworkThread::NetworkThread() */

void __thiscall NetworkThread::NetworkThread(NetworkThread *this)

{
  ThreadInterface::ThreadInterface((ThreadInterface *)this);
  *(undefined ***)this = &PTR_stop_08ca9098;
  return;
}
```
