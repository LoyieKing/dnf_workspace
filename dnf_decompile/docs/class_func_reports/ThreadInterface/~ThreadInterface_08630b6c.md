# ~ThreadInterface

`_ZN15ThreadInterfaceD0Ev`

`ThreadInterface::~ThreadInterface()`

| 类 | 地址 |
|---|---|
| `ThreadInterface` | `0x08630b6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08630b6c  _ZN15ThreadInterfaceD0Ev
#           ThreadInterface::~ThreadInterface()
# range [0x08630b6c, 0x08630b89]
08630b6c +0x00:  push   %ebp
08630b6d +0x01:  mov    %esp,%ebp
08630b6f +0x03:  sub    $0x18,%esp
08630b72 +0x06:  mov    0x8(%ebp),%eax
08630b75 +0x09:  mov    %eax,(%esp)
08630b78 +0x0c:  call   08630b46 <_ZN15ThreadInterfaceD1Ev>  ; ThreadInterface::~ThreadInterface()
08630b7d +0x11:  mov    0x8(%ebp),%eax
08630b80 +0x14:  mov    %eax,(%esp)
08630b83 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08630b88 +0x1c:  leave
08630b89 +0x1d:  ret
```

## 反编译 C

```c
// ThreadInterface::~ThreadInterface @ 0x8630b6c

/* ThreadInterface::~ThreadInterface() */

void __thiscall ThreadInterface::~ThreadInterface(ThreadInterface *this)

{
  ~ThreadInterface(this);
  operator_delete(this);
  return;
}
```
