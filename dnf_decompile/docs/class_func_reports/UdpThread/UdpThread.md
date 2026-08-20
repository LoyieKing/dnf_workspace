# UdpThread

`_ZN9UdpThreadC1Ev`

`UdpThread::UdpThread()`

| 类 | 地址 |
|---|---|
| `UdpThread` | `0x0857c354` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857c354  _ZN9UdpThreadC1Ev
#           UdpThread::UdpThread()
# range [0x0857c354, 0x0857c36f]
0857c354 +0x00:  push   %ebp
0857c355 +0x01:  mov    %esp,%ebp
0857c357 +0x03:  sub    $0x18,%esp
0857c35a +0x06:  mov    0x8(%ebp),%eax
0857c35d +0x09:  mov    %eax,(%esp)
0857c360 +0x0c:  call   08630b38 <_ZN15ThreadInterfaceC1Ev>  ; ThreadInterface::ThreadInterface()
0857c365 +0x11:  mov    0x8(%ebp),%eax
0857c368 +0x14:  movl   $&_ZTV9UdpThread+0x8,(%eax)
0857c36e +0x1a:  leave
0857c36f +0x1b:  ret
```

## 反编译 C

```c
// UdpThread::UdpThread @ 0x857c354

/* UdpThread::UdpThread() */

void __thiscall UdpThread::UdpThread(UdpThread *this)

{
  ThreadInterface::ThreadInterface((ThreadInterface *)this);
  *(undefined ***)this = &PTR_stop_08ca90c8;
  return;
}
```
