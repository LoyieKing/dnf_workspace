# read

`_ZN21Dispatcher_MotionHack4readER9PacketBufR8MSG_BASE`

`Dispatcher_MotionHack::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MotionHack` | `0x08264574` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08264574  _ZN21Dispatcher_MotionHack4readER9PacketBufR8MSG_BASE
#           Dispatcher_MotionHack::read(PacketBuf&, MSG_BASE&)
# range [0x08264574, 0x08264649]
08264574 +0x00:  push   %ebp
08264575 +0x01:  mov    %esp,%ebp
08264577 +0x03:  sub    $0x18,%esp
0826457a +0x06:  mov    0x10(%ebp),%eax
0826457d +0x09:  add    $0xd,%eax
08264580 +0x0c:  mov    %eax,0x4(%esp)
08264584 +0x10:  mov    0xc(%ebp),%eax
08264587 +0x13:  mov    %eax,(%esp)
0826458a +0x16:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0826458f +0x1b:  xor    $0x1,%eax
08264592 +0x1e:  test   %al,%al
08264594 +0x20:  je     082645bf <+0x4b>
08264596 +0x22:  movl   $0x0,0xc(%esp)
0826459e +0x2a:  movl   $0x0,0x8(%esp)
082645a6 +0x32:  movl   $&_ZZN21Dispatcher_MotionHack4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
082645ae +0x3a:  movl   $0x414,(%esp)
082645b5 +0x41:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082645ba +0x46:  jmp    08264648 <+0xd4>
082645bf +0x4b:  mov    0x10(%ebp),%eax
082645c2 +0x4e:  add    $0xe,%eax
082645c5 +0x51:  mov    %eax,0x4(%esp)
082645c9 +0x55:  mov    0xc(%ebp),%eax
082645cc +0x58:  mov    %eax,(%esp)
082645cf +0x5b:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
082645d4 +0x60:  xor    $0x1,%eax
082645d7 +0x63:  test   %al,%al
082645d9 +0x65:  je     08264601 <+0x8d>
082645db +0x67:  movl   $0x0,0xc(%esp)
082645e3 +0x6f:  movl   $0x0,0x8(%esp)
082645eb +0x77:  movl   $&_ZZN21Dispatcher_MotionHack4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
082645f3 +0x7f:  movl   $0x416,(%esp)
082645fa +0x86:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082645ff +0x8b:  jmp    08264648 <+0xd4>
08264601 +0x8d:  mov    0x10(%ebp),%eax
08264604 +0x90:  add    $0x12,%eax
08264607 +0x93:  mov    %eax,0x4(%esp)
0826460b +0x97:  mov    0xc(%ebp),%eax
0826460e +0x9a:  mov    %eax,(%esp)
08264611 +0x9d:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08264616 +0xa2:  xor    $0x1,%eax
08264619 +0xa5:  test   %al,%al
0826461b +0xa7:  je     08264643 <+0xcf>
0826461d +0xa9:  movl   $0x0,0xc(%esp)
08264625 +0xb1:  movl   $0x0,0x8(%esp)
0826462d +0xb9:  movl   $&_ZZN21Dispatcher_MotionHack4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
08264635 +0xc1:  movl   $0x418,(%esp)
0826463c +0xc8:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08264641 +0xcd:  jmp    08264648 <+0xd4>
08264643 +0xcf:  mov    $0x0,%eax
08264648 +0xd4:  leave
08264649 +0xd5:  ret
```

## 反编译 C

```c
// Dispatcher_MotionHack::read @ 0x8264574

/* Dispatcher_MotionHack::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_MotionHack::read(Dispatcher_MotionHack *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x12));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x418,"virtual int Dispatcher_MotionHack::read(PacketBuf&, MSG_BASE&)",0,0)
        ;
      }
    }
    else {
      uVar2 = LineFunc(0x416,"virtual int Dispatcher_MotionHack::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x414,"virtual int Dispatcher_MotionHack::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
