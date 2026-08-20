# makeCommonError

`_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR`

`WongWork::CDeathTower::CPacketHandler::makeCommonError(ENUM_CMDPACKET, ENUM_ERROR)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CPacketHandler` | `0x0845fe4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0845fe4c  _ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR
#           WongWork::CDeathTower::CPacketHandler::makeCommonError(ENUM_CMDPACKET, ENUM_ERROR)
# range [0x0845fe4c, 0x0845fea5]
0845fe4c +0x00:  push   %ebp
0845fe4d +0x01:  mov    %esp,%ebp
0845fe4f +0x03:  sub    $0x18,%esp
0845fe52 +0x06:  mov    0xc(%ebp),%edx
0845fe55 +0x09:  mov    0x8(%ebp),%eax
0845fe58 +0x0c:  mov    %edx,0x8(%esp)
0845fe5c +0x10:  movl   $0x1,0x4(%esp)
0845fe64 +0x18:  mov    %eax,(%esp)
0845fe67 +0x1b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0845fe6c +0x20:  mov    0x8(%ebp),%eax
0845fe6f +0x23:  movl   $0x0,0x4(%esp)
0845fe77 +0x2b:  mov    %eax,(%esp)
0845fe7a +0x2e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0845fe7f +0x33:  mov    0x10(%ebp),%edx
0845fe82 +0x36:  mov    0x8(%ebp),%eax
0845fe85 +0x39:  mov    %edx,0x4(%esp)
0845fe89 +0x3d:  mov    %eax,(%esp)
0845fe8c +0x40:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0845fe91 +0x45:  mov    0x8(%ebp),%eax
0845fe94 +0x48:  movl   $0x1,0x4(%esp)
0845fe9c +0x50:  mov    %eax,(%esp)
0845fe9f +0x53:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0845fea4 +0x58:  leave
0845fea5 +0x59:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::CPacketHandler::makeCommonError @ 0x845fe4c

/* WongWork::CDeathTower::CPacketHandler::makeCommonError(ENUM_CMDPACKET, ENUM_ERROR) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::makeCommonError(CPacketHandler *this,int param_2,int param_3)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,1,param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}
```
