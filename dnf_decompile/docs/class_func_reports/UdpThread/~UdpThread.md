# ~UdpThread

`_ZN9UdpThreadD1Ev`

`UdpThread::~UdpThread()`

| 类 | 地址 |
|---|---|
| `UdpThread` | `0x0857c370` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857c370  _ZN9UdpThreadD1Ev
#           UdpThread::~UdpThread()
# range [0x0857c370, 0x0857c39f]
0857c370 +0x00:  push   %ebp
0857c371 +0x01:  mov    %esp,%ebp
0857c373 +0x03:  sub    $0x18,%esp
0857c376 +0x06:  mov    0x8(%ebp),%eax
0857c379 +0x09:  movl   $&_ZTV9UdpThread+0x8,(%eax)
0857c37f +0x0f:  mov    0x8(%ebp),%eax
0857c382 +0x12:  mov    %eax,(%esp)
0857c385 +0x15:  call   08630b46 <_ZN15ThreadInterfaceD1Ev>  ; ThreadInterface::~ThreadInterface()
0857c38a +0x1a:  mov    $0x0,%eax
0857c38f +0x1f:  test   %al,%al
0857c391 +0x21:  je     0857c39e <+0x2e>
0857c393 +0x23:  mov    0x8(%ebp),%eax
0857c396 +0x26:  mov    %eax,(%esp)
0857c399 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0857c39e +0x2e:  leave
0857c39f +0x2f:  ret
```

## 反编译 C

```c
// UdpThread::~UdpThread @ 0x857c370

/* WARNING: Removing unreachable block (ram,0x0857c393) */
/* UdpThread::~UdpThread() */

void __thiscall UdpThread::~UdpThread(UdpThread *this)

{
  *(undefined ***)this = &PTR_stop_08ca90c8;
  ThreadInterface::~ThreadInterface((ThreadInterface *)this);
  return;
}
```
