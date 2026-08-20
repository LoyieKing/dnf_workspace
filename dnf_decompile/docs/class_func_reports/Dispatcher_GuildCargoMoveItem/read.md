# read

`_ZN29Dispatcher_GuildCargoMoveItem4readER9PacketBufR8MSG_BASE`

`Dispatcher_GuildCargoMoveItem::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GuildCargoMoveItem` | `0x081d17ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d17ba  _ZN29Dispatcher_GuildCargoMoveItem4readER9PacketBufR8MSG_BASE
#           Dispatcher_GuildCargoMoveItem::read(PacketBuf&, MSG_BASE&)
# range [0x081d17ba, 0x081d18db]
081d17ba +0x000:  push   %ebp
081d17bb +0x001:  mov    %esp,%ebp
081d17bd +0x003:  sub    $0x28,%esp
081d17c0 +0x006:  mov    0x10(%ebp),%eax
081d17c3 +0x009:  mov    %eax,-0xc(%ebp)
081d17c6 +0x00c:  mov    -0xc(%ebp),%eax
081d17c9 +0x00f:  add    $0xd,%eax
081d17cc +0x012:  mov    %eax,0x4(%esp)
081d17d0 +0x016:  mov    0xc(%ebp),%eax
081d17d3 +0x019:  mov    %eax,(%esp)
081d17d6 +0x01c:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081d17db +0x021:  xor    $0x1,%eax
081d17de +0x024:  test   %al,%al
081d17e0 +0x026:  je     081d180b <+0x51>
081d17e2 +0x028:  movl   $0x0,0xc(%esp)
081d17ea +0x030:  movl   $0x0,0x8(%esp)
081d17f2 +0x038:  movl   $&_ZZN29Dispatcher_GuildCargoMoveItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d17fa +0x040:  movl   $0x2dd2,(%esp)
081d1801 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d1806 +0x04c:  jmp    081d18d9 <+0x11f>
081d180b +0x051:  mov    -0xc(%ebp),%eax
081d180e +0x054:  add    $0x11,%eax
081d1811 +0x057:  mov    %eax,0x4(%esp)
081d1815 +0x05b:  mov    0xc(%ebp),%eax
081d1818 +0x05e:  mov    %eax,(%esp)
081d181b +0x061:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d1820 +0x066:  xor    $0x1,%eax
081d1823 +0x069:  test   %al,%al
081d1825 +0x06b:  je     081d1850 <+0x96>
081d1827 +0x06d:  movl   $0x0,0xc(%esp)
081d182f +0x075:  movl   $0x0,0x8(%esp)
081d1837 +0x07d:  movl   $&_ZZN29Dispatcher_GuildCargoMoveItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d183f +0x085:  movl   $0x2dd4,(%esp)
081d1846 +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d184b +0x091:  jmp    081d18d9 <+0x11f>
081d1850 +0x096:  mov    -0xc(%ebp),%eax
081d1853 +0x099:  add    $0xf,%eax
081d1856 +0x09c:  mov    %eax,0x4(%esp)
081d185a +0x0a0:  mov    0xc(%ebp),%eax
081d185d +0x0a3:  mov    %eax,(%esp)
081d1860 +0x0a6:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081d1865 +0x0ab:  xor    $0x1,%eax
081d1868 +0x0ae:  test   %al,%al
081d186a +0x0b0:  je     081d1892 <+0xd8>
081d186c +0x0b2:  movl   $0x0,0xc(%esp)
081d1874 +0x0ba:  movl   $0x0,0x8(%esp)
081d187c +0x0c2:  movl   $&_ZZN29Dispatcher_GuildCargoMoveItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d1884 +0x0ca:  movl   $0x2dd6,(%esp)
081d188b +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d1890 +0x0d6:  jmp    081d18d9 <+0x11f>
081d1892 +0x0d8:  mov    -0xc(%ebp),%eax
081d1895 +0x0db:  add    $0x15,%eax
081d1898 +0x0de:  mov    %eax,0x4(%esp)
081d189c +0x0e2:  mov    0xc(%ebp),%eax
081d189f +0x0e5:  mov    %eax,(%esp)
081d18a2 +0x0e8:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d18a7 +0x0ed:  xor    $0x1,%eax
081d18aa +0x0f0:  test   %al,%al
081d18ac +0x0f2:  je     081d18d4 <+0x11a>
081d18ae +0x0f4:  movl   $0x0,0xc(%esp)
081d18b6 +0x0fc:  movl   $0x0,0x8(%esp)
081d18be +0x104:  movl   $&_ZZN29Dispatcher_GuildCargoMoveItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d18c6 +0x10c:  movl   $0x2dd8,(%esp)
081d18cd +0x113:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d18d2 +0x118:  jmp    081d18d9 <+0x11f>
081d18d4 +0x11a:  mov    $0x0,%eax
081d18d9 +0x11f:  leave
081d18da +0x120:  ret
081d18db +0x121:  nop
```

## 反编译 C

```c
// Dispatcher_GuildCargoMoveItem::read @ 0x81d17ba

/* Dispatcher_GuildCargoMoveItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_GuildCargoMoveItem::read
          (Dispatcher_GuildCargoMoveItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xf));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x15));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x2dd8,
                           "virtual int Dispatcher_GuildCargoMoveItem::read(PacketBuf&, MSG_BASE&)",
                           0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x2dd6,
                         "virtual int Dispatcher_GuildCargoMoveItem::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0x2dd4,
                       "virtual int Dispatcher_GuildCargoMoveItem::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x2dd2,"virtual int Dispatcher_GuildCargoMoveItem::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}
```
