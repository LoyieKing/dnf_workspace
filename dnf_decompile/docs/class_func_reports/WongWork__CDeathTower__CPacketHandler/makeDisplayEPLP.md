# makeDisplayEPLP

`_ZN8WongWork11CDeathTower14CPacketHandler15makeDisplayEPLPEb`

`WongWork::CDeathTower::CPacketHandler::makeDisplayEPLP(bool)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CPacketHandler` | `0x084604b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084604b0  _ZN8WongWork11CDeathTower14CPacketHandler15makeDisplayEPLPEb
#           WongWork::CDeathTower::CPacketHandler::makeDisplayEPLP(bool)
# range [0x084604b0, 0x0846050d]
084604b0 +0x00:  push   %ebp
084604b1 +0x01:  mov    %esp,%ebp
084604b3 +0x03:  sub    $0x28,%esp
084604b6 +0x06:  mov    0xc(%ebp),%eax
084604b9 +0x09:  mov    %al,-0xc(%ebp)
084604bc +0x0c:  mov    0x8(%ebp),%eax
084604bf +0x0f:  movl   $0x92,0x8(%esp)
084604c7 +0x17:  movl   $0x0,0x4(%esp)
084604cf +0x1f:  mov    %eax,(%esp)
084604d2 +0x22:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084604d7 +0x27:  cmpb   $0x0,-0xc(%ebp)
084604db +0x2b:  je     084604e4 <+0x34>
084604dd +0x2d:  mov    $0x1,%eax
084604e2 +0x32:  jmp    084604e9 <+0x39>
084604e4 +0x34:  mov    $0x0,%eax
084604e9 +0x39:  mov    0x8(%ebp),%edx
084604ec +0x3c:  mov    %eax,0x4(%esp)
084604f0 +0x40:  mov    %edx,(%esp)
084604f3 +0x43:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084604f8 +0x48:  mov    0x8(%ebp),%eax
084604fb +0x4b:  movl   $0x1,0x4(%esp)
08460503 +0x53:  mov    %eax,(%esp)
08460506 +0x56:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0846050b +0x5b:  leave
0846050c +0x5c:  ret
0846050d +0x5d:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::CPacketHandler::makeDisplayEPLP @ 0x84604b0

/* WongWork::CDeathTower::CPacketHandler::makeDisplayEPLP(bool) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::makeDisplayEPLP(CPacketHandler *this,bool param_1)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,0,0x92);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,(uint)param_1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}
```
