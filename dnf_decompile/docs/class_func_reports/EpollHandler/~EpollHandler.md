# ~EpollHandler

`_ZN12EpollHandlerD1Ev`

`EpollHandler::~EpollHandler()`

| 类 | 地址 |
|---|---|
| `EpollHandler` | `0x0857c0cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857c0cc  _ZN12EpollHandlerD1Ev
#           EpollHandler::~EpollHandler()
# range [0x0857c0cc, 0x0857c0f7]
0857c0cc +0x00:  push   %ebp
0857c0cd +0x01:  mov    %esp,%ebp
0857c0cf +0x03:  sub    $0x18,%esp
0857c0d2 +0x06:  mov    0x8(%ebp),%eax
0857c0d5 +0x09:  mov    %eax,(%esp)
0857c0d8 +0x0c:  call   0857c0f8 <_ZN12EpollHandler7destroyEv>  ; EpollHandler::destroy()
0857c0dd +0x11:  mov    0x8(%ebp),%eax
0857c0e0 +0x14:  mov    %eax,(%esp)
0857c0e3 +0x17:  call   0857c1c0 <_ZN12EpollHandler7releaseEv>  ; EpollHandler::release()
0857c0e8 +0x1c:  mov    0x8(%ebp),%eax
0857c0eb +0x1f:  add    $0x14,%eax
0857c0ee +0x22:  mov    %eax,(%esp)
0857c0f1 +0x25:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0857c0f6 +0x2a:  leave
0857c0f7 +0x2b:  ret
```

## 反编译 C

```c
// EpollHandler::~EpollHandler @ 0x857c0cc

/* EpollHandler::~EpollHandler() */

void __thiscall EpollHandler::~EpollHandler(EpollHandler *this)

{
  destroy(this);
  release();
  Mutex::~Mutex((Mutex *)(this + 0x14));
  return;
}
```
