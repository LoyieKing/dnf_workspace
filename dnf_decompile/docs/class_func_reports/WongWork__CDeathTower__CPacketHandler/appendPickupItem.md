# appendPickupItem

`_ZN8WongWork11CDeathTower14CPacketHandler16appendPickupItemEPctii`

`WongWork::CDeathTower::CPacketHandler::appendPickupItem(char*, unsigned short, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CPacketHandler` | `0x0845fdc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0845fdc0  _ZN8WongWork11CDeathTower14CPacketHandler16appendPickupItemEPctii
#           WongWork::CDeathTower::CPacketHandler::appendPickupItem(char*, unsigned short, int, int)
# range [0x0845fdc0, 0x0845fe4b]
0845fdc0 +0x00:  push   %ebp
0845fdc1 +0x01:  mov    %esp,%ebp
0845fdc3 +0x03:  sub    $0x38,%esp
0845fdc6 +0x06:  mov    0x10(%ebp),%eax
0845fdc9 +0x09:  mov    %ax,-0x1c(%ebp)
0845fdcd +0x0d:  movl   $0x0,-0xc(%ebp)
0845fdd4 +0x14:  jmp    0845fdf5 <+0x35>
0845fdd6 +0x16:  mov    -0xc(%ebp),%eax
0845fdd9 +0x19:  add    0xc(%ebp),%eax
0845fddc +0x1c:  movzbl (%eax),%eax
0845fddf +0x1f:  movsbl %al,%edx
0845fde2 +0x22:  mov    0x8(%ebp),%eax
0845fde5 +0x25:  mov    %edx,0x4(%esp)
0845fde9 +0x29:  mov    %eax,(%esp)
0845fdec +0x2c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0845fdf1 +0x31:  addl   $0x1,-0xc(%ebp)
0845fdf5 +0x35:  cmpl   $0x3,-0xc(%ebp)
0845fdf9 +0x39:  setle  %al
0845fdfc +0x3c:  test   %al,%al
0845fdfe +0x3e:  jne    0845fdd6 <+0x16>
0845fe00 +0x40:  movzwl -0x1c(%ebp),%edx
0845fe04 +0x44:  mov    0x8(%ebp),%eax
0845fe07 +0x47:  mov    %edx,0x4(%esp)
0845fe0b +0x4b:  mov    %eax,(%esp)
0845fe0e +0x4e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0845fe13 +0x53:  mov    0x8(%ebp),%eax
0845fe16 +0x56:  mov    0x14(%ebp),%edx
0845fe19 +0x59:  mov    %edx,0x4(%esp)
0845fe1d +0x5d:  mov    %eax,(%esp)
0845fe20 +0x60:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0845fe25 +0x65:  mov    0x8(%ebp),%eax
0845fe28 +0x68:  mov    0x18(%ebp),%edx
0845fe2b +0x6b:  mov    %edx,0x4(%esp)
0845fe2f +0x6f:  mov    %eax,(%esp)
0845fe32 +0x72:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0845fe37 +0x77:  mov    0x8(%ebp),%eax
0845fe3a +0x7a:  movl   $0x1,0x4(%esp)
0845fe42 +0x82:  mov    %eax,(%esp)
0845fe45 +0x85:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0845fe4a +0x8a:  leave
0845fe4b +0x8b:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::CPacketHandler::appendPickupItem @ 0x845fdc0

/* WongWork::CDeathTower::CPacketHandler::appendPickupItem(char*, unsigned short, int, int) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::appendPickupItem
          (CPacketHandler *this,char *param_1,ushort param_2,int param_3,int param_4)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,(int)param_1[local_10]);
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,(uint)param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,param_3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,param_4);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}
```
