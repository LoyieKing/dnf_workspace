# read

`_ZN19DisPatcher_DropItem4readER9PacketBufR8MSG_BASE`

`DisPatcher_DropItem::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DropItem` | `0x081c2bee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c2bee  _ZN19DisPatcher_DropItem4readER9PacketBufR8MSG_BASE
#           DisPatcher_DropItem::read(PacketBuf&, MSG_BASE&)
# range [0x081c2bee, 0x081c2d99]
081c2bee +0x000:  push   %ebp
081c2bef +0x001:  mov    %esp,%ebp
081c2bf1 +0x003:  sub    $0x28,%esp
081c2bf4 +0x006:  mov    0x10(%ebp),%eax
081c2bf7 +0x009:  mov    %eax,-0xc(%ebp)
081c2bfa +0x00c:  mov    -0xc(%ebp),%eax
081c2bfd +0x00f:  add    $0xd,%eax
081c2c00 +0x012:  mov    %eax,0x4(%esp)
081c2c04 +0x016:  mov    0xc(%ebp),%eax
081c2c07 +0x019:  mov    %eax,(%esp)
081c2c0a +0x01c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081c2c0f +0x021:  xor    $0x1,%eax
081c2c12 +0x024:  test   %al,%al
081c2c14 +0x026:  je     081c2c3f <+0x51>
081c2c16 +0x028:  movl   $0x0,0xc(%esp)
081c2c1e +0x030:  movl   $0x0,0x8(%esp)
081c2c26 +0x038:  movl   $&_ZZN19DisPatcher_DropItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c2c2e +0x040:  movl   $0xd0c,(%esp)
081c2c35 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c2c3a +0x04c:  jmp    081c2d97 <+0x1a9>
081c2c3f +0x051:  mov    -0xc(%ebp),%eax
081c2c42 +0x054:  add    $0xf,%eax
081c2c45 +0x057:  mov    %eax,0x4(%esp)
081c2c49 +0x05b:  mov    0xc(%ebp),%eax
081c2c4c +0x05e:  mov    %eax,(%esp)
081c2c4f +0x061:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081c2c54 +0x066:  xor    $0x1,%eax
081c2c57 +0x069:  test   %al,%al
081c2c59 +0x06b:  je     081c2c84 <+0x96>
081c2c5b +0x06d:  movl   $0x0,0xc(%esp)
081c2c63 +0x075:  movl   $0x0,0x8(%esp)
081c2c6b +0x07d:  movl   $&_ZZN19DisPatcher_DropItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c2c73 +0x085:  movl   $0xd0d,(%esp)
081c2c7a +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c2c7f +0x091:  jmp    081c2d97 <+0x1a9>
081c2c84 +0x096:  mov    -0xc(%ebp),%eax
081c2c87 +0x099:  add    $0x11,%eax
081c2c8a +0x09c:  mov    %eax,0x4(%esp)
081c2c8e +0x0a0:  mov    0xc(%ebp),%eax
081c2c91 +0x0a3:  mov    %eax,(%esp)
081c2c94 +0x0a6:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c2c99 +0x0ab:  xor    $0x1,%eax
081c2c9c +0x0ae:  test   %al,%al
081c2c9e +0x0b0:  je     081c2cc9 <+0xdb>
081c2ca0 +0x0b2:  movl   $0x0,0xc(%esp)
081c2ca8 +0x0ba:  movl   $0x0,0x8(%esp)
081c2cb0 +0x0c2:  movl   $&_ZZN19DisPatcher_DropItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c2cb8 +0x0ca:  movl   $0xd0e,(%esp)
081c2cbf +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c2cc4 +0x0d6:  jmp    081c2d97 <+0x1a9>
081c2cc9 +0x0db:  mov    -0xc(%ebp),%eax
081c2ccc +0x0de:  add    $0x12,%eax
081c2ccf +0x0e1:  mov    %eax,0x4(%esp)
081c2cd3 +0x0e5:  mov    0xc(%ebp),%eax
081c2cd6 +0x0e8:  mov    %eax,(%esp)
081c2cd9 +0x0eb:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081c2cde +0x0f0:  xor    $0x1,%eax
081c2ce1 +0x0f3:  test   %al,%al
081c2ce3 +0x0f5:  je     081c2d0e <+0x120>
081c2ce5 +0x0f7:  movl   $0x0,0xc(%esp)
081c2ced +0x0ff:  movl   $0x0,0x8(%esp)
081c2cf5 +0x107:  movl   $&_ZZN19DisPatcher_DropItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c2cfd +0x10f:  movl   $0xd0f,(%esp)
081c2d04 +0x116:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c2d09 +0x11b:  jmp    081c2d97 <+0x1a9>
081c2d0e +0x120:  mov    -0xc(%ebp),%eax
081c2d11 +0x123:  add    $0x14,%eax
081c2d14 +0x126:  mov    %eax,0x4(%esp)
081c2d18 +0x12a:  mov    0xc(%ebp),%eax
081c2d1b +0x12d:  mov    %eax,(%esp)
081c2d1e +0x130:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081c2d23 +0x135:  xor    $0x1,%eax
081c2d26 +0x138:  test   %al,%al
081c2d28 +0x13a:  je     081c2d50 <+0x162>
081c2d2a +0x13c:  movl   $0x0,0xc(%esp)
081c2d32 +0x144:  movl   $0x0,0x8(%esp)
081c2d3a +0x14c:  movl   $&_ZZN19DisPatcher_DropItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c2d42 +0x154:  movl   $0xd10,(%esp)
081c2d49 +0x15b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c2d4e +0x160:  jmp    081c2d97 <+0x1a9>
081c2d50 +0x162:  mov    -0xc(%ebp),%eax
081c2d53 +0x165:  add    $0x18,%eax
081c2d56 +0x168:  mov    %eax,0x4(%esp)
081c2d5a +0x16c:  mov    0xc(%ebp),%eax
081c2d5d +0x16f:  mov    %eax,(%esp)
081c2d60 +0x172:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c2d65 +0x177:  xor    $0x1,%eax
081c2d68 +0x17a:  test   %al,%al
081c2d6a +0x17c:  je     081c2d92 <+0x1a4>
081c2d6c +0x17e:  movl   $0x0,0xc(%esp)
081c2d74 +0x186:  movl   $0x0,0x8(%esp)
081c2d7c +0x18e:  movl   $&_ZZN19DisPatcher_DropItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c2d84 +0x196:  movl   $0xd12,(%esp)
081c2d8b +0x19d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c2d90 +0x1a2:  jmp    081c2d97 <+0x1a9>
081c2d92 +0x1a4:  mov    $0x0,%eax
081c2d97 +0x1a9:  leave
081c2d98 +0x1aa:  ret
081c2d99 +0x1ab:  nop
```

## 反编译 C

```c
// DisPatcher_DropItem::read @ 0x81c2bee

/* DisPatcher_DropItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_DropItem::read(DisPatcher_DropItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x11));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x12));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x14));
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x18));
            if (cVar1 == '\x01') {
              uVar2 = 0;
            }
            else {
              uVar2 = LineFunc(0xd12,"virtual int DisPatcher_DropItem::read(PacketBuf&, MSG_BASE&)",
                               0,0);
            }
          }
          else {
            uVar2 = LineFunc(0xd10,"virtual int DisPatcher_DropItem::read(PacketBuf&, MSG_BASE&)",0,
                             0);
          }
        }
        else {
          uVar2 = LineFunc(0xd0f,"virtual int DisPatcher_DropItem::read(PacketBuf&, MSG_BASE&)",0,0)
          ;
        }
      }
      else {
        uVar2 = LineFunc(0xd0e,"virtual int DisPatcher_DropItem::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0xd0d,"virtual int DisPatcher_DropItem::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0xd0c,"virtual int DisPatcher_DropItem::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
