# makeDieState

`_ZN8WongWork11CDeathTower14CPacketHandler12makeDieStateEt`

`WongWork::CDeathTower::CPacketHandler::makeDieState(unsigned short)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CPacketHandler` | `0x08460176` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08460176  _ZN8WongWork11CDeathTower14CPacketHandler12makeDieStateEt
#           WongWork::CDeathTower::CPacketHandler::makeDieState(unsigned short)
# range [0x08460176, 0x084601d9]
08460176 +0x00:  push   %ebp
08460177 +0x01:  mov    %esp,%ebp
08460179 +0x03:  sub    $0x28,%esp
0846017c +0x06:  mov    0xc(%ebp),%eax
0846017f +0x09:  mov    %ax,-0xc(%ebp)
08460183 +0x0d:  mov    0x8(%ebp),%eax
08460186 +0x10:  movl   $0x20,0x8(%esp)
0846018e +0x18:  movl   $0x0,0x4(%esp)
08460196 +0x20:  mov    %eax,(%esp)
08460199 +0x23:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0846019e +0x28:  movzwl -0xc(%ebp),%edx
084601a2 +0x2c:  mov    0x8(%ebp),%eax
084601a5 +0x2f:  mov    %edx,0x4(%esp)
084601a9 +0x33:  mov    %eax,(%esp)
084601ac +0x36:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084601b1 +0x3b:  mov    0x8(%ebp),%eax
084601b4 +0x3e:  movl   $0x0,0x4(%esp)
084601bc +0x46:  mov    %eax,(%esp)
084601bf +0x49:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084601c4 +0x4e:  mov    0x8(%ebp),%eax
084601c7 +0x51:  movl   $0x1,0x4(%esp)
084601cf +0x59:  mov    %eax,(%esp)
084601d2 +0x5c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084601d7 +0x61:  leave
084601d8 +0x62:  ret
084601d9 +0x63:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::CPacketHandler::makeDieState @ 0x8460176

/* WongWork::CDeathTower::CPacketHandler::makeDieState(unsigned short) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::makeDieState(CPacketHandler *this,ushort param_1)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,0,0x20);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,(uint)param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,0);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}
```
