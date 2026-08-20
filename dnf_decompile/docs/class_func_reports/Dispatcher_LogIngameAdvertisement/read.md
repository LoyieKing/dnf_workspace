# read

`_ZN33Dispatcher_LogIngameAdvertisement4readER9PacketBufR8MSG_BASE`

`Dispatcher_LogIngameAdvertisement::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_LogIngameAdvertisement` | `0x081e4cd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e4cd0  _ZN33Dispatcher_LogIngameAdvertisement4readER9PacketBufR8MSG_BASE
#           Dispatcher_LogIngameAdvertisement::read(PacketBuf&, MSG_BASE&)
# range [0x081e4cd0, 0x081e4df1]
081e4cd0 +0x000:  push   %ebp
081e4cd1 +0x001:  mov    %esp,%ebp
081e4cd3 +0x003:  sub    $0x28,%esp
081e4cd6 +0x006:  mov    0x10(%ebp),%eax
081e4cd9 +0x009:  mov    %eax,-0xc(%ebp)
081e4cdc +0x00c:  mov    -0xc(%ebp),%eax
081e4cdf +0x00f:  add    $0xd,%eax
081e4ce2 +0x012:  mov    %eax,0x4(%esp)
081e4ce6 +0x016:  mov    0xc(%ebp),%eax
081e4ce9 +0x019:  mov    %eax,(%esp)
081e4cec +0x01c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081e4cf1 +0x021:  xor    $0x1,%eax
081e4cf4 +0x024:  test   %al,%al
081e4cf6 +0x026:  je     081e4d21 <+0x51>
081e4cf8 +0x028:  movl   $0x0,0xc(%esp)
081e4d00 +0x030:  movl   $0x0,0x8(%esp)
081e4d08 +0x038:  movl   $&_ZZN33Dispatcher_LogIngameAdvertisement4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e4d10 +0x040:  movl   $0x5d6f,(%esp)
081e4d17 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e4d1c +0x04c:  jmp    081e4def <+0x11f>
081e4d21 +0x051:  mov    -0xc(%ebp),%eax
081e4d24 +0x054:  add    $0xe,%eax
081e4d27 +0x057:  mov    %eax,0x4(%esp)
081e4d2b +0x05b:  mov    0xc(%ebp),%eax
081e4d2e +0x05e:  mov    %eax,(%esp)
081e4d31 +0x061:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081e4d36 +0x066:  xor    $0x1,%eax
081e4d39 +0x069:  test   %al,%al
081e4d3b +0x06b:  je     081e4d66 <+0x96>
081e4d3d +0x06d:  movl   $0x0,0xc(%esp)
081e4d45 +0x075:  movl   $0x0,0x8(%esp)
081e4d4d +0x07d:  movl   $&_ZZN33Dispatcher_LogIngameAdvertisement4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e4d55 +0x085:  movl   $0x5d71,(%esp)
081e4d5c +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e4d61 +0x091:  jmp    081e4def <+0x11f>
081e4d66 +0x096:  mov    -0xc(%ebp),%eax
081e4d69 +0x099:  add    $0x10,%eax
081e4d6c +0x09c:  mov    %eax,0x4(%esp)
081e4d70 +0x0a0:  mov    0xc(%ebp),%eax
081e4d73 +0x0a3:  mov    %eax,(%esp)
081e4d76 +0x0a6:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081e4d7b +0x0ab:  xor    $0x1,%eax
081e4d7e +0x0ae:  test   %al,%al
081e4d80 +0x0b0:  je     081e4da8 <+0xd8>
081e4d82 +0x0b2:  movl   $0x0,0xc(%esp)
081e4d8a +0x0ba:  movl   $0x0,0x8(%esp)
081e4d92 +0x0c2:  movl   $&_ZZN33Dispatcher_LogIngameAdvertisement4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e4d9a +0x0ca:  movl   $0x5d73,(%esp)
081e4da1 +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e4da6 +0x0d6:  jmp    081e4def <+0x11f>
081e4da8 +0x0d8:  mov    -0xc(%ebp),%eax
081e4dab +0x0db:  add    $0x11,%eax
081e4dae +0x0de:  mov    %eax,0x4(%esp)
081e4db2 +0x0e2:  mov    0xc(%ebp),%eax
081e4db5 +0x0e5:  mov    %eax,(%esp)
081e4db8 +0x0e8:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081e4dbd +0x0ed:  xor    $0x1,%eax
081e4dc0 +0x0f0:  test   %al,%al
081e4dc2 +0x0f2:  je     081e4dea <+0x11a>
081e4dc4 +0x0f4:  movl   $0x0,0xc(%esp)
081e4dcc +0x0fc:  movl   $0x0,0x8(%esp)
081e4dd4 +0x104:  movl   $&_ZZN33Dispatcher_LogIngameAdvertisement4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e4ddc +0x10c:  movl   $0x5d75,(%esp)
081e4de3 +0x113:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e4de8 +0x118:  jmp    081e4def <+0x11f>
081e4dea +0x11a:  mov    $0x0,%eax
081e4def +0x11f:  leave
081e4df0 +0x120:  ret
081e4df1 +0x121:  nop
```

## 反编译 C

```c
// Dispatcher_LogIngameAdvertisement::read @ 0x81e4cd0

/* Dispatcher_LogIngameAdvertisement::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_LogIngameAdvertisement::read
          (Dispatcher_LogIngameAdvertisement *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x11));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x5d75,
                           "virtual int Dispatcher_LogIngameAdvertisement::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x5d73,
                         "virtual int Dispatcher_LogIngameAdvertisement::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x5d71,
                       "virtual int Dispatcher_LogIngameAdvertisement::read(PacketBuf&, MSG_BASE&)",
                       0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x5d6f,
                     "virtual int Dispatcher_LogIngameAdvertisement::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}
```
