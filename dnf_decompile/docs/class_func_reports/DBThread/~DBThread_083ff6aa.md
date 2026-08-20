# ~DBThread

`_ZN8DBThreadD0Ev`

`DBThread::~DBThread()`

| 类 | 地址 |
|---|---|
| `DBThread` | `0x083ff6aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ff6aa  _ZN8DBThreadD0Ev
#           DBThread::~DBThread()
# range [0x083ff6aa, 0x083ff6c7]
083ff6aa +0x00:  push   %ebp
083ff6ab +0x01:  mov    %esp,%ebp
083ff6ad +0x03:  sub    $0x18,%esp
083ff6b0 +0x06:  mov    0x8(%ebp),%eax
083ff6b3 +0x09:  mov    %eax,(%esp)
083ff6b6 +0x0c:  call   083ff648 <_ZN8DBThreadD1Ev>  ; DBThread::~DBThread()
083ff6bb +0x11:  mov    0x8(%ebp),%eax
083ff6be +0x14:  mov    %eax,(%esp)
083ff6c1 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
083ff6c6 +0x1c:  leave
083ff6c7 +0x1d:  ret
```

## 反编译 C

```c
// DBThread::~DBThread @ 0x83ff6aa

/* DBThread::~DBThread() */

void __thiscall DBThread::~DBThread(DBThread *this)

{
  ~DBThread(this);
  operator_delete(this);
  return;
}
```
