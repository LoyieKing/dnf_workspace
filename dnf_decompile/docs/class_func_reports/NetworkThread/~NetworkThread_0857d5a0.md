# ~NetworkThread

`_ZN13NetworkThreadD0Ev`

`NetworkThread::~NetworkThread()`

| 类 | 地址 |
|---|---|
| `NetworkThread` | `0x0857d5a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857d5a0  _ZN13NetworkThreadD0Ev
#           NetworkThread::~NetworkThread()
# range [0x0857d5a0, 0x0857d5bd]
0857d5a0 +0x00:  push   %ebp
0857d5a1 +0x01:  mov    %esp,%ebp
0857d5a3 +0x03:  sub    $0x18,%esp
0857d5a6 +0x06:  mov    0x8(%ebp),%eax
0857d5a9 +0x09:  mov    %eax,(%esp)
0857d5ac +0x0c:  call   0857d570 <_ZN13NetworkThreadD1Ev>  ; NetworkThread::~NetworkThread()
0857d5b1 +0x11:  mov    0x8(%ebp),%eax
0857d5b4 +0x14:  mov    %eax,(%esp)
0857d5b7 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0857d5bc +0x1c:  leave
0857d5bd +0x1d:  ret
```

## 反编译 C

```c
// NetworkThread::~NetworkThread @ 0x857d5a0

/* NetworkThread::~NetworkThread() */

void __thiscall NetworkThread::~NetworkThread(NetworkThread *this)

{
  ~NetworkThread(this);
  operator_delete(this);
  return;
}
```
