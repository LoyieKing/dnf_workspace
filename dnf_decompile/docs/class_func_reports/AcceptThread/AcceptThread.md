# AcceptThread

`_ZN12AcceptThreadC1Ev`

`AcceptThread::AcceptThread()`

| 类 | 地址 |
|---|---|
| `AcceptThread` | `0x0857cbe8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857cbe8  _ZN12AcceptThreadC1Ev
#           AcceptThread::AcceptThread()
# range [0x0857cbe8, 0x0857cc0b]
0857cbe8 +0x00:  push   %ebp
0857cbe9 +0x01:  mov    %esp,%ebp
0857cbeb +0x03:  sub    $0x18,%esp
0857cbee +0x06:  mov    0x8(%ebp),%eax
0857cbf1 +0x09:  mov    %eax,(%esp)
0857cbf4 +0x0c:  call   08630b38 <_ZN15ThreadInterfaceC1Ev>  ; ThreadInterface::ThreadInterface()
0857cbf9 +0x11:  mov    0x8(%ebp),%eax
0857cbfc +0x14:  movl   $&_ZTV12AcceptThread+0x8,(%eax)
0857cc02 +0x1a:  mov    0x8(%ebp),%eax
0857cc05 +0x1d:  movb   $0x0,0xc(%eax)
0857cc09 +0x21:  leave
0857cc0a +0x22:  ret
0857cc0b +0x23:  nop
```

## 反编译 C

```c
// AcceptThread::AcceptThread @ 0x857cbe8

/* AcceptThread::AcceptThread() */

void __thiscall AcceptThread::AcceptThread(AcceptThread *this)

{
  ThreadInterface::ThreadInterface((ThreadInterface *)this);
  *(undefined ***)this = &PTR_stop_08ca90b0;
  this[0xc] = (AcceptThread)0x0;
  return;
}
```
