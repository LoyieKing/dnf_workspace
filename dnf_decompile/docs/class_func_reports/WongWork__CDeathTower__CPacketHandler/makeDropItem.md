# makeDropItem

`_ZN8WongWork11CDeathTower14CPacketHandler12makeDropItemEcii`

`WongWork::CDeathTower::CPacketHandler::makeDropItem(char, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CPacketHandler` | `0x084600a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084600a6  _ZN8WongWork11CDeathTower14CPacketHandler12makeDropItemEcii
#           WongWork::CDeathTower::CPacketHandler::makeDropItem(char, int, int)
# range [0x084600a6, 0x0846012b]
084600a6 +0x00:  push   %ebp
084600a7 +0x01:  mov    %esp,%ebp
084600a9 +0x03:  sub    $0x28,%esp
084600ac +0x06:  mov    0xc(%ebp),%eax
084600af +0x09:  mov    %al,-0xc(%ebp)
084600b2 +0x0c:  mov    0x8(%ebp),%eax
084600b5 +0x0f:  movl   $0x32,0x8(%esp)
084600bd +0x17:  movl   $0x1,0x4(%esp)
084600c5 +0x1f:  mov    %eax,(%esp)
084600c8 +0x22:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084600cd +0x27:  mov    0x8(%ebp),%eax
084600d0 +0x2a:  movl   $0x1,0x4(%esp)
084600d8 +0x32:  mov    %eax,(%esp)
084600db +0x35:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084600e0 +0x3a:  movsbl -0xc(%ebp),%edx
084600e4 +0x3e:  mov    0x8(%ebp),%eax
084600e7 +0x41:  mov    %edx,0x4(%esp)
084600eb +0x45:  mov    %eax,(%esp)
084600ee +0x48:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084600f3 +0x4d:  mov    0x8(%ebp),%eax
084600f6 +0x50:  mov    0x10(%ebp),%edx
084600f9 +0x53:  mov    %edx,0x4(%esp)
084600fd +0x57:  mov    %eax,(%esp)
08460100 +0x5a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08460105 +0x5f:  mov    0x8(%ebp),%eax
08460108 +0x62:  mov    0x14(%ebp),%edx
0846010b +0x65:  mov    %edx,0x4(%esp)
0846010f +0x69:  mov    %eax,(%esp)
08460112 +0x6c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08460117 +0x71:  mov    0x8(%ebp),%eax
0846011a +0x74:  movl   $0x1,0x4(%esp)
08460122 +0x7c:  mov    %eax,(%esp)
08460125 +0x7f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0846012a +0x84:  leave
0846012b +0x85:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::CPacketHandler::makeDropItem @ 0x84600a6

/* WongWork::CDeathTower::CPacketHandler::makeDropItem(char, int, int) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::makeDropItem
          (CPacketHandler *this,char param_1,int param_2,int param_3)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,1,0x32);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,(int)param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)this,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}
```
