# read

`_ZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASE`

`DisPatcher_GetItem::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_GetItem` | `0x081c335c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c335c  _ZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASE
#           DisPatcher_GetItem::read(PacketBuf&, MSG_BASE&)
# range [0x081c335c, 0x081c35ab]
081c335c +0x000:  push   %ebp
081c335d +0x001:  mov    %esp,%ebp
081c335f +0x003:  sub    $0x28,%esp
081c3362 +0x006:  mov    0x10(%ebp),%eax
081c3365 +0x009:  mov    %eax,-0xc(%ebp)
081c3368 +0x00c:  mov    -0xc(%ebp),%eax
081c336b +0x00f:  add    $0xd,%eax
081c336e +0x012:  mov    %eax,0x4(%esp)
081c3372 +0x016:  mov    0xc(%ebp),%eax
081c3375 +0x019:  mov    %eax,(%esp)
081c3378 +0x01c:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c337d +0x021:  xor    $0x1,%eax
081c3380 +0x024:  test   %al,%al
081c3382 +0x026:  je     081c33ad <+0x51>
081c3384 +0x028:  movl   $0x0,0xc(%esp)
081c338c +0x030:  movl   $0x0,0x8(%esp)
081c3394 +0x038:  movl   $&_ZZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c339c +0x040:  movl   $0xe2d,(%esp)
081c33a3 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c33a8 +0x04c:  jmp    081c35aa <+0x24e>
081c33ad +0x051:  mov    -0xc(%ebp),%eax
081c33b0 +0x054:  add    $0xf,%eax
081c33b3 +0x057:  mov    %eax,0x4(%esp)
081c33b7 +0x05b:  mov    0xc(%ebp),%eax
081c33ba +0x05e:  mov    %eax,(%esp)
081c33bd +0x061:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c33c2 +0x066:  xor    $0x1,%eax
081c33c5 +0x069:  test   %al,%al
081c33c7 +0x06b:  je     081c33f2 <+0x96>
081c33c9 +0x06d:  movl   $0x0,0xc(%esp)
081c33d1 +0x075:  movl   $0x0,0x8(%esp)
081c33d9 +0x07d:  movl   $&_ZZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c33e1 +0x085:  movl   $0xe2f,(%esp)
081c33e8 +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c33ed +0x091:  jmp    081c35aa <+0x24e>
081c33f2 +0x096:  mov    -0xc(%ebp),%eax
081c33f5 +0x099:  add    $0x10,%eax
081c33f8 +0x09c:  mov    %eax,0x4(%esp)
081c33fc +0x0a0:  mov    0xc(%ebp),%eax
081c33ff +0x0a3:  mov    %eax,(%esp)
081c3402 +0x0a6:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c3407 +0x0ab:  xor    $0x1,%eax
081c340a +0x0ae:  test   %al,%al
081c340c +0x0b0:  je     081c3437 <+0xdb>
081c340e +0x0b2:  movl   $0x0,0xc(%esp)
081c3416 +0x0ba:  movl   $0x0,0x8(%esp)
081c341e +0x0c2:  movl   $&_ZZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c3426 +0x0ca:  movl   $0xe30,(%esp)
081c342d +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c3432 +0x0d6:  jmp    081c35aa <+0x24e>
081c3437 +0x0db:  mov    -0xc(%ebp),%eax
081c343a +0x0de:  add    $0x11,%eax
081c343d +0x0e1:  mov    %eax,0x4(%esp)
081c3441 +0x0e5:  mov    0xc(%ebp),%eax
081c3444 +0x0e8:  mov    %eax,(%esp)
081c3447 +0x0eb:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c344c +0x0f0:  xor    $0x1,%eax
081c344f +0x0f3:  test   %al,%al
081c3451 +0x0f5:  je     081c347c <+0x120>
081c3453 +0x0f7:  movl   $0x0,0xc(%esp)
081c345b +0x0ff:  movl   $0x0,0x8(%esp)
081c3463 +0x107:  movl   $&_ZZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c346b +0x10f:  movl   $0xe33,(%esp)
081c3472 +0x116:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c3477 +0x11b:  jmp    081c35aa <+0x24e>
081c347c +0x120:  mov    -0xc(%ebp),%eax
081c347f +0x123:  add    $0x13,%eax
081c3482 +0x126:  mov    %eax,0x4(%esp)
081c3486 +0x12a:  mov    0xc(%ebp),%eax
081c3489 +0x12d:  mov    %eax,(%esp)
081c348c +0x130:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c3491 +0x135:  xor    $0x1,%eax
081c3494 +0x138:  test   %al,%al
081c3496 +0x13a:  je     081c34c1 <+0x165>
081c3498 +0x13c:  movl   $0x0,0xc(%esp)
081c34a0 +0x144:  movl   $0x0,0x8(%esp)
081c34a8 +0x14c:  movl   $&_ZZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c34b0 +0x154:  movl   $0xe34,(%esp)
081c34b7 +0x15b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c34bc +0x160:  jmp    081c35aa <+0x24e>
081c34c1 +0x165:  mov    -0xc(%ebp),%eax
081c34c4 +0x168:  add    $0x15,%eax
081c34c7 +0x16b:  mov    %eax,0x4(%esp)
081c34cb +0x16f:  mov    0xc(%ebp),%eax
081c34ce +0x172:  mov    %eax,(%esp)
081c34d1 +0x175:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c34d6 +0x17a:  mov    -0xc(%ebp),%edx
081c34d9 +0x17d:  mov    %al,0x17(%edx)
081c34dc +0x180:  mov    -0xc(%ebp),%eax
081c34df +0x183:  add    $0x1a,%eax
081c34e2 +0x186:  mov    %eax,0x4(%esp)
081c34e6 +0x18a:  mov    0xc(%ebp),%eax
081c34e9 +0x18d:  mov    %eax,(%esp)
081c34ec +0x190:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c34f1 +0x195:  xor    $0x1,%eax
081c34f4 +0x198:  test   %al,%al
081c34f6 +0x19a:  je     081c3521 <+0x1c5>
081c34f8 +0x19c:  movl   $0x0,0xc(%esp)
081c3500 +0x1a4:  movl   $0x0,0x8(%esp)
081c3508 +0x1ac:  movl   $&_ZZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c3510 +0x1b4:  movl   $0xe38,(%esp)
081c3517 +0x1bb:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c351c +0x1c0:  jmp    081c35aa <+0x24e>
081c3521 +0x1c5:  mov    -0xc(%ebp),%eax
081c3524 +0x1c8:  add    $0x1c,%eax
081c3527 +0x1cb:  mov    %eax,0x4(%esp)
081c352b +0x1cf:  mov    0xc(%ebp),%eax
081c352e +0x1d2:  mov    %eax,(%esp)
081c3531 +0x1d5:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c3536 +0x1da:  xor    $0x1,%eax
081c3539 +0x1dd:  test   %al,%al
081c353b +0x1df:  je     081c3563 <+0x207>
081c353d +0x1e1:  movl   $0x0,0xc(%esp)
081c3545 +0x1e9:  movl   $0x0,0x8(%esp)
081c354d +0x1f1:  movl   $&_ZZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c3555 +0x1f9:  movl   $0xe39,(%esp)
081c355c +0x200:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c3561 +0x205:  jmp    081c35aa <+0x24e>
081c3563 +0x207:  mov    -0xc(%ebp),%eax
081c3566 +0x20a:  add    $0x18,%eax
081c3569 +0x20d:  mov    %eax,0x4(%esp)
081c356d +0x211:  mov    0xc(%ebp),%eax
081c3570 +0x214:  mov    %eax,(%esp)
081c3573 +0x217:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c3578 +0x21c:  xor    $0x1,%eax
081c357b +0x21f:  test   %al,%al
081c357d +0x221:  je     081c35a5 <+0x249>
081c357f +0x223:  movl   $0x0,0xc(%esp)
081c3587 +0x22b:  movl   $0x0,0x8(%esp)
081c358f +0x233:  movl   $&_ZZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c3597 +0x23b:  movl   $0xe3d,(%esp)
081c359e +0x242:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c35a3 +0x247:  jmp    081c35aa <+0x24e>
081c35a5 +0x249:  mov    $0x0,%eax
081c35aa +0x24e:  leave
081c35ab +0x24f:  ret
```

## 反编译 C

```c
// DisPatcher_GetItem::read @ 0x81c335c

/* DisPatcher_GetItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_GetItem::read(DisPatcher_GetItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  MSG_BASE MVar2;
  undefined4 uVar3;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x11));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x13));
          if (cVar1 == '\x01') {
            MVar2 = (MSG_BASE)PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x15));
            param_2[0x17] = MVar2;
            cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x1a));
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x1c));
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x18));
                if (cVar1 == '\x01') {
                  uVar3 = 0;
                }
                else {
                  uVar3 = LineFunc(0xe3d,
                                   "virtual int DisPatcher_GetItem::read(PacketBuf&, MSG_BASE&)",0,0
                                  );
                }
              }
              else {
                uVar3 = LineFunc(0xe39,"virtual int DisPatcher_GetItem::read(PacketBuf&, MSG_BASE&)"
                                 ,0,0);
              }
            }
            else {
              uVar3 = LineFunc(0xe38,"virtual int DisPatcher_GetItem::read(PacketBuf&, MSG_BASE&)",0
                               ,0);
            }
          }
          else {
            uVar3 = LineFunc(0xe34,"virtual int DisPatcher_GetItem::read(PacketBuf&, MSG_BASE&)",0,0
                            );
          }
        }
        else {
          uVar3 = LineFunc(0xe33,"virtual int DisPatcher_GetItem::read(PacketBuf&, MSG_BASE&)",0,0);
        }
      }
      else {
        uVar3 = LineFunc(0xe30,"virtual int DisPatcher_GetItem::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xe2f,"virtual int DisPatcher_GetItem::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar3 = LineFunc(0xe2d,"virtual int DisPatcher_GetItem::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar3;
}
```
