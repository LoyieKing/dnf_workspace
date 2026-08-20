# read

`_ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE`

`DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_MoveItem` | `0x081c54e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c54e0  _ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE
#           DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)
# range [0x081c54e0, 0x081c579f]
081c54e0 +0x000:  push   %ebp
081c54e1 +0x001:  mov    %esp,%ebp
081c54e3 +0x003:  sub    $0x28,%esp
081c54e6 +0x006:  mov    0x10(%ebp),%eax
081c54e9 +0x009:  mov    %eax,-0xc(%ebp)
081c54ec +0x00c:  mov    -0xc(%ebp),%eax
081c54ef +0x00f:  add    $0xd,%eax
081c54f2 +0x012:  mov    %eax,0x4(%esp)
081c54f6 +0x016:  mov    0xc(%ebp),%eax
081c54f9 +0x019:  mov    %eax,(%esp)
081c54fc +0x01c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c5501 +0x021:  xor    $0x1,%eax
081c5504 +0x024:  test   %al,%al
081c5506 +0x026:  je     081c5531 <+0x51>
081c5508 +0x028:  movl   $0x0,0xc(%esp)
081c5510 +0x030:  movl   $0x0,0x8(%esp)
081c5518 +0x038:  movl   $&_ZZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c5520 +0x040:  movl   $0x1373,(%esp)
081c5527 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c552c +0x04c:  jmp    081c579d <+0x2bd>
081c5531 +0x051:  mov    -0xc(%ebp),%eax
081c5534 +0x054:  add    $0xe,%eax
081c5537 +0x057:  mov    %eax,0x4(%esp)
081c553b +0x05b:  mov    0xc(%ebp),%eax
081c553e +0x05e:  mov    %eax,(%esp)
081c5541 +0x061:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081c5546 +0x066:  xor    $0x1,%eax
081c5549 +0x069:  test   %al,%al
081c554b +0x06b:  je     081c5576 <+0x96>
081c554d +0x06d:  movl   $0x0,0xc(%esp)
081c5555 +0x075:  movl   $0x0,0x8(%esp)
081c555d +0x07d:  movl   $&_ZZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c5565 +0x085:  movl   $0x1374,(%esp)
081c556c +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c5571 +0x091:  jmp    081c579d <+0x2bd>
081c5576 +0x096:  mov    -0xc(%ebp),%eax
081c5579 +0x099:  add    $0x10,%eax
081c557c +0x09c:  mov    %eax,0x4(%esp)
081c5580 +0x0a0:  mov    0xc(%ebp),%eax
081c5583 +0x0a3:  mov    %eax,(%esp)
081c5586 +0x0a6:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
081c558b +0x0ab:  xor    $0x1,%eax
081c558e +0x0ae:  test   %al,%al
081c5590 +0x0b0:  je     081c55bb <+0xdb>
081c5592 +0x0b2:  movl   $0x0,0xc(%esp)
081c559a +0x0ba:  movl   $0x0,0x8(%esp)
081c55a2 +0x0c2:  movl   $&_ZZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c55aa +0x0ca:  movl   $0x1375,(%esp)
081c55b1 +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c55b6 +0x0d6:  jmp    081c579d <+0x2bd>
081c55bb +0x0db:  mov    -0xc(%ebp),%eax
081c55be +0x0de:  add    $0x14,%eax
081c55c1 +0x0e1:  mov    %eax,0x4(%esp)
081c55c5 +0x0e5:  mov    0xc(%ebp),%eax
081c55c8 +0x0e8:  mov    %eax,(%esp)
081c55cb +0x0eb:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081c55d0 +0x0f0:  xor    $0x1,%eax
081c55d3 +0x0f3:  test   %al,%al
081c55d5 +0x0f5:  je     081c5600 <+0x120>
081c55d7 +0x0f7:  movl   $0x0,0xc(%esp)
081c55df +0x0ff:  movl   $0x0,0x8(%esp)
081c55e7 +0x107:  movl   $&_ZZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c55ef +0x10f:  movl   $0x1376,(%esp)
081c55f6 +0x116:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c55fb +0x11b:  jmp    081c579d <+0x2bd>
081c5600 +0x120:  mov    -0xc(%ebp),%eax
081c5603 +0x123:  add    $0x18,%eax
081c5606 +0x126:  mov    %eax,0x4(%esp)
081c560a +0x12a:  mov    0xc(%ebp),%eax
081c560d +0x12d:  mov    %eax,(%esp)
081c5610 +0x130:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c5615 +0x135:  xor    $0x1,%eax
081c5618 +0x138:  test   %al,%al
081c561a +0x13a:  je     081c5645 <+0x165>
081c561c +0x13c:  movl   $0x0,0xc(%esp)
081c5624 +0x144:  movl   $0x0,0x8(%esp)
081c562c +0x14c:  movl   $&_ZZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c5634 +0x154:  movl   $0x1377,(%esp)
081c563b +0x15b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c5640 +0x160:  jmp    081c579d <+0x2bd>
081c5645 +0x165:  mov    -0xc(%ebp),%eax
081c5648 +0x168:  add    $0x19,%eax
081c564b +0x16b:  mov    %eax,0x4(%esp)
081c564f +0x16f:  mov    0xc(%ebp),%eax
081c5652 +0x172:  mov    %eax,(%esp)
081c5655 +0x175:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081c565a +0x17a:  xor    $0x1,%eax
081c565d +0x17d:  test   %al,%al
081c565f +0x17f:  je     081c568a <+0x1aa>
081c5661 +0x181:  movl   $0x0,0xc(%esp)
081c5669 +0x189:  movl   $0x0,0x8(%esp)
081c5671 +0x191:  movl   $&_ZZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c5679 +0x199:  movl   $0x1378,(%esp)
081c5680 +0x1a0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c5685 +0x1a5:  jmp    081c579d <+0x2bd>
081c568a +0x1aa:  mov    -0xc(%ebp),%eax
081c568d +0x1ad:  add    $0x1b,%eax
081c5690 +0x1b0:  mov    %eax,0x4(%esp)
081c5694 +0x1b4:  mov    0xc(%ebp),%eax
081c5697 +0x1b7:  mov    %eax,(%esp)
081c569a +0x1ba:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
081c569f +0x1bf:  xor    $0x1,%eax
081c56a2 +0x1c2:  test   %al,%al
081c56a4 +0x1c4:  je     081c56cf <+0x1ef>
081c56a6 +0x1c6:  movl   $0x0,0xc(%esp)
081c56ae +0x1ce:  movl   $0x0,0x8(%esp)
081c56b6 +0x1d6:  movl   $&_ZZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c56be +0x1de:  movl   $0x1379,(%esp)
081c56c5 +0x1e5:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c56ca +0x1ea:  jmp    081c579d <+0x2bd>
081c56cf +0x1ef:  mov    -0xc(%ebp),%eax
081c56d2 +0x1f2:  add    $0x1f,%eax
081c56d5 +0x1f5:  mov    %eax,0x4(%esp)
081c56d9 +0x1f9:  mov    0xc(%ebp),%eax
081c56dc +0x1fc:  mov    %eax,(%esp)
081c56df +0x1ff:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081c56e4 +0x204:  xor    $0x1,%eax
081c56e7 +0x207:  test   %al,%al
081c56e9 +0x209:  je     081c5714 <+0x234>
081c56eb +0x20b:  movl   $0x0,0xc(%esp)
081c56f3 +0x213:  movl   $0x0,0x8(%esp)
081c56fb +0x21b:  movl   $&_ZZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c5703 +0x223:  movl   $0x137b,(%esp)
081c570a +0x22a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c570f +0x22f:  jmp    081c579d <+0x2bd>
081c5714 +0x234:  mov    -0xc(%ebp),%eax
081c5717 +0x237:  add    $0x23,%eax
081c571a +0x23a:  mov    %eax,0x4(%esp)
081c571e +0x23e:  mov    0xc(%ebp),%eax
081c5721 +0x241:  mov    %eax,(%esp)
081c5724 +0x244:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c5729 +0x249:  xor    $0x1,%eax
081c572c +0x24c:  test   %al,%al
081c572e +0x24e:  je     081c5756 <+0x276>
081c5730 +0x250:  movl   $0x0,0xc(%esp)
081c5738 +0x258:  movl   $0x0,0x8(%esp)
081c5740 +0x260:  movl   $&_ZZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c5748 +0x268:  movl   $0x137e,(%esp)
081c574f +0x26f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c5754 +0x274:  jmp    081c579d <+0x2bd>
081c5756 +0x276:  mov    -0xc(%ebp),%eax
081c5759 +0x279:  add    $0x24,%eax
081c575c +0x27c:  mov    %eax,0x4(%esp)
081c5760 +0x280:  mov    0xc(%ebp),%eax
081c5763 +0x283:  mov    %eax,(%esp)
081c5766 +0x286:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c576b +0x28b:  xor    $0x1,%eax
081c576e +0x28e:  test   %al,%al
081c5770 +0x290:  je     081c5798 <+0x2b8>
081c5772 +0x292:  movl   $0x0,0xc(%esp)
081c577a +0x29a:  movl   $0x0,0x8(%esp)
081c5782 +0x2a2:  movl   $&_ZZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c578a +0x2aa:  movl   $0x137f,(%esp)
081c5791 +0x2b1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c5796 +0x2b6:  jmp    081c579d <+0x2bd>
081c5798 +0x2b8:  mov    $0x0,%eax
081c579d +0x2bd:  leave
081c579e +0x2be:  ret
081c579f +0x2bf:  nop
```

## 反编译 C

```c
// DisPatcher_MoveItem::read @ 0x81c54e0

/* DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_MoveItem::read(DisPatcher_MoveItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(ulong *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x14));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x18));
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x19));
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_int(param_1,(ulong *)(param_2 + 0x1b));
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x1f));
                if (cVar1 == '\x01') {
                  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x23));
                  if (cVar1 == '\x01') {
                    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x24));
                    if (cVar1 == '\x01') {
                      uVar2 = 0;
                    }
                    else {
                      uVar2 = LineFunc(0x137f,
                                       "virtual int DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)"
                                       ,0,0);
                    }
                  }
                  else {
                    uVar2 = LineFunc(0x137e,
                                     "virtual int DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)",
                                     0,0);
                  }
                }
                else {
                  uVar2 = LineFunc(0x137b,
                                   "virtual int DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)",0,
                                   0);
                }
              }
              else {
                uVar2 = LineFunc(0x1379,
                                 "virtual int DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)",0,0)
                ;
              }
            }
            else {
              uVar2 = LineFunc(0x1378,"virtual int DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)"
                               ,0,0);
            }
          }
          else {
            uVar2 = LineFunc(0x1377,"virtual int DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)",0
                             ,0);
          }
        }
        else {
          uVar2 = LineFunc(0x1376,"virtual int DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)",0,0
                          );
        }
      }
      else {
        uVar2 = LineFunc(0x1375,"virtual int DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x1374,"virtual int DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x1373,"virtual int DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
