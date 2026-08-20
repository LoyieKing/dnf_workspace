# makeFinishLoading

`_ZN8WongWork11CDeathTower14CPacketHandler17makeFinishLoadingEv`

`WongWork::CDeathTower::CPacketHandler::makeFinishLoading()`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CPacketHandler` | `0x0846012c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846012c  _ZN8WongWork11CDeathTower14CPacketHandler17makeFinishLoadingEv
#           WongWork::CDeathTower::CPacketHandler::makeFinishLoading()
# range [0x0846012c, 0x08460175]
0846012c +0x00:  push   %ebp
0846012d +0x01:  mov    %esp,%ebp
0846012f +0x03:  sub    $0x18,%esp
08460132 +0x06:  mov    0x8(%ebp),%eax
08460135 +0x09:  movl   $0x1e,0x8(%esp)
0846013d +0x11:  movl   $0x0,0x4(%esp)
08460145 +0x19:  mov    %eax,(%esp)
08460148 +0x1c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0846014d +0x21:  mov    0x8(%ebp),%eax
08460150 +0x24:  movl   $0x0,0x4(%esp)
08460158 +0x2c:  mov    %eax,(%esp)
0846015b +0x2f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08460160 +0x34:  mov    0x8(%ebp),%eax
08460163 +0x37:  movl   $0x1,0x4(%esp)
0846016b +0x3f:  mov    %eax,(%esp)
0846016e +0x42:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08460173 +0x47:  leave
08460174 +0x48:  ret
08460175 +0x49:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::CPacketHandler::makeFinishLoading @ 0x846012c

/* WongWork::CDeathTower::CPacketHandler::makeFinishLoading() */

void __thiscall WongWork::CDeathTower::CPacketHandler::makeFinishLoading(CPacketHandler *this)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,0,0x1e);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)this,0);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}
```
