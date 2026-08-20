# read

`_ZN23Dispatcher_UseLimitCube4readER9PacketBufR8MSG_BASE`

`Dispatcher_UseLimitCube::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseLimitCube` | `0x081d3c62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d3c62  _ZN23Dispatcher_UseLimitCube4readER9PacketBufR8MSG_BASE
#           Dispatcher_UseLimitCube::read(PacketBuf&, MSG_BASE&)
# range [0x081d3c62, 0x081d3d37]
081d3c62 +0x00:  push   %ebp
081d3c63 +0x01:  mov    %esp,%ebp
081d3c65 +0x03:  sub    $0x18,%esp
081d3c68 +0x06:  mov    0x10(%ebp),%eax
081d3c6b +0x09:  add    $0xd,%eax
081d3c6e +0x0c:  mov    %eax,0x4(%esp)
081d3c72 +0x10:  mov    0xc(%ebp),%eax
081d3c75 +0x13:  mov    %eax,(%esp)
081d3c78 +0x16:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081d3c7d +0x1b:  xor    $0x1,%eax
081d3c80 +0x1e:  test   %al,%al
081d3c82 +0x20:  je     081d3cad <+0x4b>
081d3c84 +0x22:  movl   $0x0,0xc(%esp)
081d3c8c +0x2a:  movl   $0x0,0x8(%esp)
081d3c94 +0x32:  movl   $&_ZZN23Dispatcher_UseLimitCube4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d3c9c +0x3a:  movl   $0x337d,(%esp)
081d3ca3 +0x41:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d3ca8 +0x46:  jmp    081d3d36 <+0xd4>
081d3cad +0x4b:  mov    0x10(%ebp),%eax
081d3cb0 +0x4e:  add    $0xf,%eax
081d3cb3 +0x51:  mov    %eax,0x4(%esp)
081d3cb7 +0x55:  mov    0xc(%ebp),%eax
081d3cba +0x58:  mov    %eax,(%esp)
081d3cbd +0x5b:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081d3cc2 +0x60:  xor    $0x1,%eax
081d3cc5 +0x63:  test   %al,%al
081d3cc7 +0x65:  je     081d3cef <+0x8d>
081d3cc9 +0x67:  movl   $0x0,0xc(%esp)
081d3cd1 +0x6f:  movl   $0x0,0x8(%esp)
081d3cd9 +0x77:  movl   $&_ZZN23Dispatcher_UseLimitCube4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d3ce1 +0x7f:  movl   $0x3381,(%esp)
081d3ce8 +0x86:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d3ced +0x8b:  jmp    081d3d36 <+0xd4>
081d3cef +0x8d:  mov    0x10(%ebp),%eax
081d3cf2 +0x90:  add    $0x13,%eax
081d3cf5 +0x93:  mov    %eax,0x4(%esp)
081d3cf9 +0x97:  mov    0xc(%ebp),%eax
081d3cfc +0x9a:  mov    %eax,(%esp)
081d3cff +0x9d:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081d3d04 +0xa2:  xor    $0x1,%eax
081d3d07 +0xa5:  test   %al,%al
081d3d09 +0xa7:  je     081d3d31 <+0xcf>
081d3d0b +0xa9:  movl   $0x0,0xc(%esp)
081d3d13 +0xb1:  movl   $0x0,0x8(%esp)
081d3d1b +0xb9:  movl   $&_ZZN23Dispatcher_UseLimitCube4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d3d23 +0xc1:  movl   $0x3385,(%esp)
081d3d2a +0xc8:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d3d2f +0xcd:  jmp    081d3d36 <+0xd4>
081d3d31 +0xcf:  mov    $0x0,%eax
081d3d36 +0xd4:  leave
081d3d37 +0xd5:  ret
```

## 反编译 C

```c
// Dispatcher_UseLimitCube::read @ 0x81d3c62

/* Dispatcher_UseLimitCube::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_UseLimitCube::read(Dispatcher_UseLimitCube *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x13));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x3385,"virtual int Dispatcher_UseLimitCube::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    else {
      uVar2 = LineFunc(0x3381,"virtual int Dispatcher_UseLimitCube::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x337d,"virtual int Dispatcher_UseLimitCube::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
