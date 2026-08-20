# read

`_ZN23Dispatcher_ScanBotByDll4readER9PacketBufR8MSG_BASE`

`Dispatcher_ScanBotByDll::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ScanBotByDll` | `0x082643b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082643b2  _ZN23Dispatcher_ScanBotByDll4readER9PacketBufR8MSG_BASE
#           Dispatcher_ScanBotByDll::read(PacketBuf&, MSG_BASE&)
# range [0x082643b2, 0x08264487]
082643b2 +0x00:  push   %ebp
082643b3 +0x01:  mov    %esp,%ebp
082643b5 +0x03:  sub    $0x18,%esp
082643b8 +0x06:  mov    0x10(%ebp),%eax
082643bb +0x09:  add    $0xd,%eax
082643be +0x0c:  mov    %eax,0x4(%esp)
082643c2 +0x10:  mov    0xc(%ebp),%eax
082643c5 +0x13:  mov    %eax,(%esp)
082643c8 +0x16:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082643cd +0x1b:  xor    $0x1,%eax
082643d0 +0x1e:  test   %al,%al
082643d2 +0x20:  je     082643fd <+0x4b>
082643d4 +0x22:  movl   $0x0,0xc(%esp)
082643dc +0x2a:  movl   $0x0,0x8(%esp)
082643e4 +0x32:  movl   $&_ZZN23Dispatcher_ScanBotByDll4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
082643ec +0x3a:  movl   $0x3d6,(%esp)
082643f3 +0x41:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082643f8 +0x46:  jmp    08264486 <+0xd4>
082643fd +0x4b:  mov    0x10(%ebp),%eax
08264400 +0x4e:  add    $0x11,%eax
08264403 +0x51:  mov    %eax,0x4(%esp)
08264407 +0x55:  mov    0xc(%ebp),%eax
0826440a +0x58:  mov    %eax,(%esp)
0826440d +0x5b:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08264412 +0x60:  xor    $0x1,%eax
08264415 +0x63:  test   %al,%al
08264417 +0x65:  je     0826443f <+0x8d>
08264419 +0x67:  movl   $0x0,0xc(%esp)
08264421 +0x6f:  movl   $0x0,0x8(%esp)
08264429 +0x77:  movl   $&_ZZN23Dispatcher_ScanBotByDll4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
08264431 +0x7f:  movl   $0x3db,(%esp)
08264438 +0x86:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0826443d +0x8b:  jmp    08264486 <+0xd4>
0826443f +0x8d:  mov    0x10(%ebp),%eax
08264442 +0x90:  add    $0x12,%eax
08264445 +0x93:  mov    %eax,0x4(%esp)
08264449 +0x97:  mov    0xc(%ebp),%eax
0826444c +0x9a:  mov    %eax,(%esp)
0826444f +0x9d:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08264454 +0xa2:  xor    $0x1,%eax
08264457 +0xa5:  test   %al,%al
08264459 +0xa7:  je     08264481 <+0xcf>
0826445b +0xa9:  movl   $0x0,0xc(%esp)
08264463 +0xb1:  movl   $0x0,0x8(%esp)
0826446b +0xb9:  movl   $&_ZZN23Dispatcher_ScanBotByDll4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
08264473 +0xc1:  movl   $0x3e0,(%esp)
0826447a +0xc8:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0826447f +0xcd:  jmp    08264486 <+0xd4>
08264481 +0xcf:  mov    $0x0,%eax
08264486 +0xd4:  leave
08264487 +0xd5:  ret
```

## 反编译 C

```c
// Dispatcher_ScanBotByDll::read @ 0x82643b2

/* Dispatcher_ScanBotByDll::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ScanBotByDll::read(Dispatcher_ScanBotByDll *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x12));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x3e0,"virtual int Dispatcher_ScanBotByDll::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0x3db,"virtual int Dispatcher_ScanBotByDll::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x3d6,"virtual int Dispatcher_ScanBotByDll::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
