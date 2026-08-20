# makePickupItemHeader

`_ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt`

`WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CPacketHandler` | `0x0845fc6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0845fc6c  _ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt
#           WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)
# range [0x0845fc6c, 0x0845fcc3]
0845fc6c +0x00:  push   %ebp
0845fc6d +0x01:  mov    %esp,%ebp
0845fc6f +0x03:  sub    $0x28,%esp
0845fc72 +0x06:  mov    0xc(%ebp),%edx
0845fc75 +0x09:  mov    0x10(%ebp),%eax
0845fc78 +0x0c:  mov    %dx,-0xc(%ebp)
0845fc7c +0x10:  mov    %ax,-0x10(%ebp)
0845fc80 +0x14:  mov    0x8(%ebp),%eax
0845fc83 +0x17:  movl   $0x27,0x8(%esp)
0845fc8b +0x1f:  movl   $0x0,0x4(%esp)
0845fc93 +0x27:  mov    %eax,(%esp)
0845fc96 +0x2a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0845fc9b +0x2f:  movzwl -0x10(%ebp),%edx
0845fc9f +0x33:  mov    0x8(%ebp),%eax
0845fca2 +0x36:  mov    %edx,0x4(%esp)
0845fca6 +0x3a:  mov    %eax,(%esp)
0845fca9 +0x3d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0845fcae +0x42:  movzwl -0xc(%ebp),%edx
0845fcb2 +0x46:  mov    0x8(%ebp),%eax
0845fcb5 +0x49:  mov    %edx,0x4(%esp)
0845fcb9 +0x4d:  mov    %eax,(%esp)
0845fcbc +0x50:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0845fcc1 +0x55:  leave
0845fcc2 +0x56:  ret
0845fcc3 +0x57:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::CPacketHandler::makePickupItemHeader @ 0x845fc6c

/* WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::makePickupItemHeader
          (CPacketHandler *this,ushort param_1,ushort param_2)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,0,0x27);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,(uint)param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,(uint)param_1);
  return;
}
```
