# makeDropItemError

`_ZN8WongWork11CDeathTower14CPacketHandler17makeDropItemErrorE14ENUM_CMDPACKET10ENUM_ERRORc`

`WongWork::CDeathTower::CPacketHandler::makeDropItemError(ENUM_CMDPACKET, ENUM_ERROR, char)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CPacketHandler` | `0x0845fea6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0845fea6  _ZN8WongWork11CDeathTower14CPacketHandler17makeDropItemErrorE14ENUM_CMDPACKET10ENUM_ERRORc
#           WongWork::CDeathTower::CPacketHandler::makeDropItemError(ENUM_CMDPACKET, ENUM_ERROR, char)
# range [0x0845fea6, 0x0845ff19]
0845fea6 +0x00:  push   %ebp
0845fea7 +0x01:  mov    %esp,%ebp
0845fea9 +0x03:  sub    $0x28,%esp
0845feac +0x06:  mov    0x14(%ebp),%eax
0845feaf +0x09:  mov    %al,-0xc(%ebp)
0845feb2 +0x0c:  mov    0xc(%ebp),%edx
0845feb5 +0x0f:  mov    0x8(%ebp),%eax
0845feb8 +0x12:  mov    %edx,0x8(%esp)
0845febc +0x16:  movl   $0x1,0x4(%esp)
0845fec4 +0x1e:  mov    %eax,(%esp)
0845fec7 +0x21:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0845fecc +0x26:  mov    0x8(%ebp),%eax
0845fecf +0x29:  movl   $0x0,0x4(%esp)
0845fed7 +0x31:  mov    %eax,(%esp)
0845feda +0x34:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0845fedf +0x39:  mov    0x10(%ebp),%edx
0845fee2 +0x3c:  mov    0x8(%ebp),%eax
0845fee5 +0x3f:  mov    %edx,0x4(%esp)
0845fee9 +0x43:  mov    %eax,(%esp)
0845feec +0x46:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0845fef1 +0x4b:  movsbl -0xc(%ebp),%edx
0845fef5 +0x4f:  mov    0x8(%ebp),%eax
0845fef8 +0x52:  mov    %edx,0x4(%esp)
0845fefc +0x56:  mov    %eax,(%esp)
0845feff +0x59:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0845ff04 +0x5e:  mov    0x8(%ebp),%eax
0845ff07 +0x61:  movl   $0x1,0x4(%esp)
0845ff0f +0x69:  mov    %eax,(%esp)
0845ff12 +0x6c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0845ff17 +0x71:  leave
0845ff18 +0x72:  ret
0845ff19 +0x73:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::CPacketHandler::makeDropItemError @ 0x845fea6

/* WongWork::CDeathTower::CPacketHandler::makeDropItemError(ENUM_CMDPACKET, ENUM_ERROR, char) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::makeDropItemError
          (CPacketHandler *this,int param_2,int param_3,char param_4)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,1,param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,param_3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,(int)param_4);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}
```
