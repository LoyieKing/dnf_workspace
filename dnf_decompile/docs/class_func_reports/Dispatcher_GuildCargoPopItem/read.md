# read

`_ZN28Dispatcher_GuildCargoPopItem4readER9PacketBufR8MSG_BASE`

`Dispatcher_GuildCargoPopItem::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GuildCargoPopItem` | `0x081d1388` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d1388  _ZN28Dispatcher_GuildCargoPopItem4readER9PacketBufR8MSG_BASE
#           Dispatcher_GuildCargoPopItem::read(PacketBuf&, MSG_BASE&)
# range [0x081d1388, 0x081d14a9]
081d1388 +0x000:  push   %ebp
081d1389 +0x001:  mov    %esp,%ebp
081d138b +0x003:  sub    $0x28,%esp
081d138e +0x006:  mov    0x10(%ebp),%eax
081d1391 +0x009:  mov    %eax,-0xc(%ebp)
081d1394 +0x00c:  mov    -0xc(%ebp),%eax
081d1397 +0x00f:  add    $0xd,%eax
081d139a +0x012:  mov    %eax,0x4(%esp)
081d139e +0x016:  mov    0xc(%ebp),%eax
081d13a1 +0x019:  mov    %eax,(%esp)
081d13a4 +0x01c:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081d13a9 +0x021:  xor    $0x1,%eax
081d13ac +0x024:  test   %al,%al
081d13ae +0x026:  je     081d13d9 <+0x51>
081d13b0 +0x028:  movl   $0x0,0xc(%esp)
081d13b8 +0x030:  movl   $0x0,0x8(%esp)
081d13c0 +0x038:  movl   $&_ZZN28Dispatcher_GuildCargoPopItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d13c8 +0x040:  movl   $0x2d3b,(%esp)
081d13cf +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d13d4 +0x04c:  jmp    081d14a7 <+0x11f>
081d13d9 +0x051:  mov    -0xc(%ebp),%eax
081d13dc +0x054:  add    $0xf,%eax
081d13df +0x057:  mov    %eax,0x4(%esp)
081d13e3 +0x05b:  mov    0xc(%ebp),%eax
081d13e6 +0x05e:  mov    %eax,(%esp)
081d13e9 +0x061:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d13ee +0x066:  xor    $0x1,%eax
081d13f1 +0x069:  test   %al,%al
081d13f3 +0x06b:  je     081d141e <+0x96>
081d13f5 +0x06d:  movl   $0x0,0xc(%esp)
081d13fd +0x075:  movl   $0x0,0x8(%esp)
081d1405 +0x07d:  movl   $&_ZZN28Dispatcher_GuildCargoPopItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d140d +0x085:  movl   $0x2d3c,(%esp)
081d1414 +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d1419 +0x091:  jmp    081d14a7 <+0x11f>
081d141e +0x096:  mov    -0xc(%ebp),%eax
081d1421 +0x099:  add    $0x13,%eax
081d1424 +0x09c:  mov    %eax,0x4(%esp)
081d1428 +0x0a0:  mov    0xc(%ebp),%eax
081d142b +0x0a3:  mov    %eax,(%esp)
081d142e +0x0a6:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d1433 +0x0ab:  xor    $0x1,%eax
081d1436 +0x0ae:  test   %al,%al
081d1438 +0x0b0:  je     081d1460 <+0xd8>
081d143a +0x0b2:  movl   $0x0,0xc(%esp)
081d1442 +0x0ba:  movl   $0x0,0x8(%esp)
081d144a +0x0c2:  movl   $&_ZZN28Dispatcher_GuildCargoPopItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d1452 +0x0ca:  movl   $0x2d3d,(%esp)
081d1459 +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d145e +0x0d6:  jmp    081d14a7 <+0x11f>
081d1460 +0x0d8:  mov    -0xc(%ebp),%eax
081d1463 +0x0db:  add    $0x17,%eax
081d1466 +0x0de:  mov    %eax,0x4(%esp)
081d146a +0x0e2:  mov    0xc(%ebp),%eax
081d146d +0x0e5:  mov    %eax,(%esp)
081d1470 +0x0e8:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081d1475 +0x0ed:  xor    $0x1,%eax
081d1478 +0x0f0:  test   %al,%al
081d147a +0x0f2:  je     081d14a2 <+0x11a>
081d147c +0x0f4:  movl   $0x0,0xc(%esp)
081d1484 +0x0fc:  movl   $0x0,0x8(%esp)
081d148c +0x104:  movl   $&_ZZN28Dispatcher_GuildCargoPopItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d1494 +0x10c:  movl   $0x2d3e,(%esp)
081d149b +0x113:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d14a0 +0x118:  jmp    081d14a7 <+0x11f>
081d14a2 +0x11a:  mov    $0x0,%eax
081d14a7 +0x11f:  leave
081d14a8 +0x120:  ret
081d14a9 +0x121:  nop
```

## 反编译 C

```c
// Dispatcher_GuildCargoPopItem::read @ 0x81d1388

/* Dispatcher_GuildCargoPopItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_GuildCargoPopItem::read
          (Dispatcher_GuildCargoPopItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x13));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x17));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x2d3e,
                           "virtual int Dispatcher_GuildCargoPopItem::read(PacketBuf&, MSG_BASE&)",0
                           ,0);
        }
      }
      else {
        uVar2 = LineFunc(0x2d3d,
                         "virtual int Dispatcher_GuildCargoPopItem::read(PacketBuf&, MSG_BASE&)",0,0
                        );
      }
    }
    else {
      uVar2 = LineFunc(0x2d3c,
                       "virtual int Dispatcher_GuildCargoPopItem::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x2d3b,"virtual int Dispatcher_GuildCargoPopItem::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}
```
