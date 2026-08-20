# read

`_ZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASE`

`Dispatcher_SoloTeleport::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SoloTeleport` | `0x081e1b9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e1b9c  _ZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASE
#           Dispatcher_SoloTeleport::read(PacketBuf&, MSG_BASE&)
# range [0x081e1b9c, 0x081e1d9b]
081e1b9c +0x000:  push   %ebp
081e1b9d +0x001:  mov    %esp,%ebp
081e1b9f +0x003:  sub    $0x28,%esp
081e1ba2 +0x006:  mov    0x10(%ebp),%eax
081e1ba5 +0x009:  mov    %eax,-0xc(%ebp)
081e1ba8 +0x00c:  mov    -0xc(%ebp),%eax
081e1bab +0x00f:  add    $0x30,%eax
081e1bae +0x012:  mov    %eax,0x4(%esp)
081e1bb2 +0x016:  mov    0xc(%ebp),%eax
081e1bb5 +0x019:  mov    %eax,(%esp)
081e1bb8 +0x01c:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081e1bbd +0x021:  xor    $0x1,%eax
081e1bc0 +0x024:  test   %al,%al
081e1bc2 +0x026:  je     081e1bed <+0x51>
081e1bc4 +0x028:  movl   $0x0,0xc(%esp)
081e1bcc +0x030:  movl   $0x0,0x8(%esp)
081e1bd4 +0x038:  movl   $&_ZZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e1bdc +0x040:  movl   $0x5778,(%esp)
081e1be3 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e1be8 +0x04c:  jmp    081e1d99 <+0x1fd>
081e1bed +0x051:  mov    -0xc(%ebp),%eax
081e1bf0 +0x054:  add    $0x34,%eax
081e1bf3 +0x057:  mov    %eax,0x4(%esp)
081e1bf7 +0x05b:  mov    0xc(%ebp),%eax
081e1bfa +0x05e:  mov    %eax,(%esp)
081e1bfd +0x061:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081e1c02 +0x066:  xor    $0x1,%eax
081e1c05 +0x069:  test   %al,%al
081e1c07 +0x06b:  je     081e1c32 <+0x96>
081e1c09 +0x06d:  movl   $0x0,0xc(%esp)
081e1c11 +0x075:  movl   $0x0,0x8(%esp)
081e1c19 +0x07d:  movl   $&_ZZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e1c21 +0x085:  movl   $0x577b,(%esp)
081e1c28 +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e1c2d +0x091:  jmp    081e1d99 <+0x1fd>
081e1c32 +0x096:  mov    -0xc(%ebp),%eax
081e1c35 +0x099:  mov    0x34(%eax),%eax
081e1c38 +0x09c:  cmp    $0xffffffff,%eax
081e1c3b +0x09f:  je     081e1d94 <+0x1f8>
081e1c41 +0x0a5:  mov    -0xc(%ebp),%eax
081e1c44 +0x0a8:  add    $0x39,%eax
081e1c47 +0x0ab:  mov    %eax,0x4(%esp)
081e1c4b +0x0af:  mov    0xc(%ebp),%eax
081e1c4e +0x0b2:  mov    %eax,(%esp)
081e1c51 +0x0b5:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081e1c56 +0x0ba:  xor    $0x1,%eax
081e1c59 +0x0bd:  test   %al,%al
081e1c5b +0x0bf:  je     081e1c86 <+0xea>
081e1c5d +0x0c1:  movl   $0x0,0xc(%esp)
081e1c65 +0x0c9:  movl   $0x0,0x8(%esp)
081e1c6d +0x0d1:  movl   $&_ZZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e1c75 +0x0d9:  movl   $0x577f,(%esp)
081e1c7c +0x0e0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e1c81 +0x0e5:  jmp    081e1d99 <+0x1fd>
081e1c86 +0x0ea:  mov    -0xc(%ebp),%eax
081e1c89 +0x0ed:  add    $0x3a,%eax
081e1c8c +0x0f0:  mov    %eax,0x4(%esp)
081e1c90 +0x0f4:  mov    0xc(%ebp),%eax
081e1c93 +0x0f7:  mov    %eax,(%esp)
081e1c96 +0x0fa:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081e1c9b +0x0ff:  xor    $0x1,%eax
081e1c9e +0x102:  test   %al,%al
081e1ca0 +0x104:  je     081e1ccb <+0x12f>
081e1ca2 +0x106:  movl   $0x0,0xc(%esp)
081e1caa +0x10e:  movl   $0x0,0x8(%esp)
081e1cb2 +0x116:  movl   $&_ZZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e1cba +0x11e:  movl   $0x5780,(%esp)
081e1cc1 +0x125:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e1cc6 +0x12a:  jmp    081e1d99 <+0x1fd>
081e1ccb +0x12f:  mov    -0xc(%ebp),%eax
081e1cce +0x132:  add    $0x3c,%eax
081e1cd1 +0x135:  mov    %eax,0x4(%esp)
081e1cd5 +0x139:  mov    0xc(%ebp),%eax
081e1cd8 +0x13c:  mov    %eax,(%esp)
081e1cdb +0x13f:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081e1ce0 +0x144:  xor    $0x1,%eax
081e1ce3 +0x147:  test   %al,%al
081e1ce5 +0x149:  je     081e1d10 <+0x174>
081e1ce7 +0x14b:  movl   $0x0,0xc(%esp)
081e1cef +0x153:  movl   $0x0,0x8(%esp)
081e1cf7 +0x15b:  movl   $&_ZZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e1cff +0x163:  movl   $0x5781,(%esp)
081e1d06 +0x16a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e1d0b +0x16f:  jmp    081e1d99 <+0x1fd>
081e1d10 +0x174:  mov    -0xc(%ebp),%eax
081e1d13 +0x177:  add    $0x3e,%eax
081e1d16 +0x17a:  mov    %eax,0x4(%esp)
081e1d1a +0x17e:  mov    0xc(%ebp),%eax
081e1d1d +0x181:  mov    %eax,(%esp)
081e1d20 +0x184:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081e1d25 +0x189:  xor    $0x1,%eax
081e1d28 +0x18c:  test   %al,%al
081e1d2a +0x18e:  je     081e1d52 <+0x1b6>
081e1d2c +0x190:  movl   $0x0,0xc(%esp)
081e1d34 +0x198:  movl   $0x0,0x8(%esp)
081e1d3c +0x1a0:  movl   $&_ZZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e1d44 +0x1a8:  movl   $0x5782,(%esp)
081e1d4b +0x1af:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e1d50 +0x1b4:  jmp    081e1d99 <+0x1fd>
081e1d52 +0x1b6:  mov    -0xc(%ebp),%eax
081e1d55 +0x1b9:  add    $0x40,%eax
081e1d58 +0x1bc:  mov    %eax,0x4(%esp)
081e1d5c +0x1c0:  mov    0xc(%ebp),%eax
081e1d5f +0x1c3:  mov    %eax,(%esp)
081e1d62 +0x1c6:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081e1d67 +0x1cb:  xor    $0x1,%eax
081e1d6a +0x1ce:  test   %al,%al
081e1d6c +0x1d0:  je     081e1d94 <+0x1f8>
081e1d6e +0x1d2:  movl   $0x0,0xc(%esp)
081e1d76 +0x1da:  movl   $0x0,0x8(%esp)
081e1d7e +0x1e2:  movl   $&_ZZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e1d86 +0x1ea:  movl   $0x5783,(%esp)
081e1d8d +0x1f1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e1d92 +0x1f6:  jmp    081e1d99 <+0x1fd>
081e1d94 +0x1f8:  mov    $0x0,%eax
081e1d99 +0x1fd:  leave
081e1d9a +0x1fe:  ret
081e1d9b +0x1ff:  nop
```

## 反编译 C

```c
// Dispatcher_SoloTeleport::read @ 0x81e1b9c

/* Dispatcher_SoloTeleport::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SoloTeleport::read(Dispatcher_SoloTeleport *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x30));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x34));
    if (cVar1 == '\x01') {
      if (*(int *)(param_2 + 0x34) != -1) {
        cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x39));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0x577f,"virtual int Dispatcher_SoloTeleport::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x3a));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0x5780,"virtual int Dispatcher_SoloTeleport::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x3c));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0x5781,"virtual int Dispatcher_SoloTeleport::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x3e));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0x5782,"virtual int Dispatcher_SoloTeleport::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x40));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0x5783,"virtual int Dispatcher_SoloTeleport::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
          return uVar2;
        }
      }
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x577b,"virtual int Dispatcher_SoloTeleport::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x5778,"virtual int Dispatcher_SoloTeleport::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
