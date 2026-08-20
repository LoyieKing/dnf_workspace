# EpollHandler

`_ZN12EpollHandlerC1Ev`

`EpollHandler::EpollHandler()`

| 类 | 地址 |
|---|---|
| `EpollHandler` | `0x0857c084` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857c084  _ZN12EpollHandlerC1Ev
#           EpollHandler::EpollHandler()
# range [0x0857c084, 0x0857c0cb]
0857c084 +0x00:  push   %ebp
0857c085 +0x01:  mov    %esp,%ebp
0857c087 +0x03:  push   %esi
0857c088 +0x04:  push   %ebx
0857c089 +0x05:  sub    $0x10,%esp
0857c08c +0x08:  mov    0x8(%ebp),%eax
0857c08f +0x0b:  add    $0x14,%eax
0857c092 +0x0e:  mov    %eax,(%esp)
0857c095 +0x11:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
0857c09a +0x16:  mov    0x8(%ebp),%eax
0857c09d +0x19:  mov    %eax,(%esp)
0857c0a0 +0x1c:  call   0857c122 <_ZN12EpollHandler4initEv>  ; EpollHandler::init()
0857c0a5 +0x21:  jmp    0857c0c5 <+0x41>
0857c0a7 +0x23:  mov    %edx,%ebx
0857c0a9 +0x25:  mov    %eax,%esi
0857c0ab +0x27:  mov    0x8(%ebp),%eax
0857c0ae +0x2a:  add    $0x14,%eax
0857c0b1 +0x2d:  mov    %eax,(%esp)
0857c0b4 +0x30:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0857c0b9 +0x35:  mov    %esi,%eax
0857c0bb +0x37:  mov    %ebx,%edx
0857c0bd +0x39:  mov    %eax,(%esp)
0857c0c0 +0x3c:  call   08ae3750 <_Unwind_Resume>
0857c0c5 +0x41:  add    $0x10,%esp
0857c0c8 +0x44:  pop    %ebx
0857c0c9 +0x45:  pop    %esi
0857c0ca +0x46:  pop    %ebp
0857c0cb +0x47:  ret
```

## 反编译 C

```c
// EpollHandler::EpollHandler @ 0x857c084

/* EpollHandler::EpollHandler() */

void __thiscall EpollHandler::EpollHandler(EpollHandler *this)

{
  Mutex::Mutex((Mutex *)(this + 0x14));
                    /* try { // try from 0857c0a0 to 0857c0a4 has its CatchHandler @ 0857c0a7 */
  init(this);
  return;
}
```
