# read

`_ZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASE`

`Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CompatibilityIndex` | `0x081e23ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e23ea  _ZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASE
#           Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&)
# range [0x081e23ea, 0x081e2663]
081e23ea +0x000:  push   %ebp
081e23eb +0x001:  mov    %esp,%ebp
081e23ed +0x003:  sub    $0x28,%esp
081e23f0 +0x006:  mov    0x10(%ebp),%eax
081e23f3 +0x009:  mov    %eax,-0xc(%ebp)
081e23f6 +0x00c:  mov    -0xc(%ebp),%eax
081e23f9 +0x00f:  add    $0xd,%eax
081e23fc +0x012:  mov    %eax,0x4(%esp)
081e2400 +0x016:  mov    0xc(%ebp),%eax
081e2403 +0x019:  mov    %eax,(%esp)
081e2406 +0x01c:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081e240b +0x021:  xor    $0x1,%eax
081e240e +0x024:  test   %al,%al
081e2410 +0x026:  je     081e243b <+0x51>
081e2412 +0x028:  movl   $0x0,0xc(%esp)
081e241a +0x030:  movl   $0x0,0x8(%esp)
081e2422 +0x038:  movl   $&_ZZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e242a +0x040:  movl   $0x58df,(%esp)
081e2431 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e2436 +0x04c:  jmp    081e2662 <+0x278>
081e243b +0x051:  mov    -0xc(%ebp),%eax
081e243e +0x054:  add    $0xe,%eax
081e2441 +0x057:  mov    %eax,0x4(%esp)
081e2445 +0x05b:  mov    0xc(%ebp),%eax
081e2448 +0x05e:  mov    %eax,(%esp)
081e244b +0x061:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081e2450 +0x066:  xor    $0x1,%eax
081e2453 +0x069:  test   %al,%al
081e2455 +0x06b:  je     081e2480 <+0x96>
081e2457 +0x06d:  movl   $0x0,0xc(%esp)
081e245f +0x075:  movl   $0x0,0x8(%esp)
081e2467 +0x07d:  movl   $&_ZZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e246f +0x085:  movl   $0x58e0,(%esp)
081e2476 +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e247b +0x091:  jmp    081e2662 <+0x278>
081e2480 +0x096:  mov    -0xc(%ebp),%eax
081e2483 +0x099:  add    $0x10,%eax
081e2486 +0x09c:  mov    %eax,0x4(%esp)
081e248a +0x0a0:  mov    0xc(%ebp),%eax
081e248d +0x0a3:  mov    %eax,(%esp)
081e2490 +0x0a6:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081e2495 +0x0ab:  xor    $0x1,%eax
081e2498 +0x0ae:  test   %al,%al
081e249a +0x0b0:  je     081e24c5 <+0xdb>
081e249c +0x0b2:  movl   $0x0,0xc(%esp)
081e24a4 +0x0ba:  movl   $0x0,0x8(%esp)
081e24ac +0x0c2:  movl   $&_ZZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e24b4 +0x0ca:  movl   $0x58e1,(%esp)
081e24bb +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e24c0 +0x0d6:  jmp    081e2662 <+0x278>
081e24c5 +0x0db:  mov    -0xc(%ebp),%eax
081e24c8 +0x0de:  add    $0x14,%eax
081e24cb +0x0e1:  mov    %eax,0x4(%esp)
081e24cf +0x0e5:  mov    0xc(%ebp),%eax
081e24d2 +0x0e8:  mov    %eax,(%esp)
081e24d5 +0x0eb:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081e24da +0x0f0:  xor    $0x1,%eax
081e24dd +0x0f3:  test   %al,%al
081e24df +0x0f5:  je     081e250a <+0x120>
081e24e1 +0x0f7:  movl   $0x0,0xc(%esp)
081e24e9 +0x0ff:  movl   $0x0,0x8(%esp)
081e24f1 +0x107:  movl   $&_ZZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e24f9 +0x10f:  movl   $0x58e2,(%esp)
081e2500 +0x116:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e2505 +0x11b:  jmp    081e2662 <+0x278>
081e250a +0x120:  mov    -0xc(%ebp),%eax
081e250d +0x123:  add    $0x16,%eax
081e2510 +0x126:  mov    %eax,0x4(%esp)
081e2514 +0x12a:  mov    0xc(%ebp),%eax
081e2517 +0x12d:  mov    %eax,(%esp)
081e251a +0x130:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081e251f +0x135:  xor    $0x1,%eax
081e2522 +0x138:  test   %al,%al
081e2524 +0x13a:  je     081e254f <+0x165>
081e2526 +0x13c:  movl   $0x0,0xc(%esp)
081e252e +0x144:  movl   $0x0,0x8(%esp)
081e2536 +0x14c:  movl   $&_ZZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e253e +0x154:  movl   $0x58e3,(%esp)
081e2545 +0x15b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e254a +0x160:  jmp    081e2662 <+0x278>
081e254f +0x165:  mov    -0xc(%ebp),%eax
081e2552 +0x168:  add    $0x18,%eax
081e2555 +0x16b:  mov    %eax,0x4(%esp)
081e2559 +0x16f:  mov    0xc(%ebp),%eax
081e255c +0x172:  mov    %eax,(%esp)
081e255f +0x175:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081e2564 +0x17a:  xor    $0x1,%eax
081e2567 +0x17d:  test   %al,%al
081e2569 +0x17f:  je     081e2594 <+0x1aa>
081e256b +0x181:  movl   $0x0,0xc(%esp)
081e2573 +0x189:  movl   $0x0,0x8(%esp)
081e257b +0x191:  movl   $&_ZZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e2583 +0x199:  movl   $0x58e4,(%esp)
081e258a +0x1a0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e258f +0x1a5:  jmp    081e2662 <+0x278>
081e2594 +0x1aa:  mov    -0xc(%ebp),%eax
081e2597 +0x1ad:  add    $0x1a,%eax
081e259a +0x1b0:  mov    %eax,0x4(%esp)
081e259e +0x1b4:  mov    0xc(%ebp),%eax
081e25a1 +0x1b7:  mov    %eax,(%esp)
081e25a4 +0x1ba:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081e25a9 +0x1bf:  xor    $0x1,%eax
081e25ac +0x1c2:  test   %al,%al
081e25ae +0x1c4:  je     081e25d9 <+0x1ef>
081e25b0 +0x1c6:  movl   $0x0,0xc(%esp)
081e25b8 +0x1ce:  movl   $0x0,0x8(%esp)
081e25c0 +0x1d6:  movl   $&_ZZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e25c8 +0x1de:  movl   $0x58e5,(%esp)
081e25cf +0x1e5:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e25d4 +0x1ea:  jmp    081e2662 <+0x278>
081e25d9 +0x1ef:  mov    -0xc(%ebp),%eax
081e25dc +0x1f2:  add    $0x1c,%eax
081e25df +0x1f5:  mov    %eax,0x4(%esp)
081e25e3 +0x1f9:  mov    0xc(%ebp),%eax
081e25e6 +0x1fc:  mov    %eax,(%esp)
081e25e9 +0x1ff:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081e25ee +0x204:  xor    $0x1,%eax
081e25f1 +0x207:  test   %al,%al
081e25f3 +0x209:  je     081e261b <+0x231>
081e25f5 +0x20b:  movl   $0x0,0xc(%esp)
081e25fd +0x213:  movl   $0x0,0x8(%esp)
081e2605 +0x21b:  movl   $&_ZZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e260d +0x223:  movl   $0x58e6,(%esp)
081e2614 +0x22a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e2619 +0x22f:  jmp    081e2662 <+0x278>
081e261b +0x231:  mov    -0xc(%ebp),%eax
081e261e +0x234:  add    $0x1d,%eax
081e2621 +0x237:  mov    %eax,0x4(%esp)
081e2625 +0x23b:  mov    0xc(%ebp),%eax
081e2628 +0x23e:  mov    %eax,(%esp)
081e262b +0x241:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081e2630 +0x246:  xor    $0x1,%eax
081e2633 +0x249:  test   %al,%al
081e2635 +0x24b:  je     081e265d <+0x273>
081e2637 +0x24d:  movl   $0x0,0xc(%esp)
081e263f +0x255:  movl   $0x0,0x8(%esp)
081e2647 +0x25d:  movl   $&_ZZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e264f +0x265:  movl   $0x58e7,(%esp)
081e2656 +0x26c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e265b +0x271:  jmp    081e2662 <+0x278>
081e265d +0x273:  mov    $0x0,%eax
081e2662 +0x278:  leave
081e2663 +0x279:  ret
```

## 反编译 C

```c
// Dispatcher_CompatibilityIndex::read @ 0x81e23ea

/* Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_CompatibilityIndex::read
          (Dispatcher_CompatibilityIndex *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x14));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x16));
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x18));
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x1a));
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x1c));
                if (cVar1 == '\x01') {
                  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x1d));
                  if (cVar1 == '\x01') {
                    uVar2 = 0;
                  }
                  else {
                    uVar2 = LineFunc(0x58e7,
                                     "virtual int Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&)"
                                     ,0,0);
                  }
                }
                else {
                  uVar2 = LineFunc(0x58e6,
                                   "virtual int Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&)"
                                   ,0,0);
                }
              }
              else {
                uVar2 = LineFunc(0x58e5,
                                 "virtual int Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&)"
                                 ,0,0);
              }
            }
            else {
              uVar2 = LineFunc(0x58e4,
                               "virtual int Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&)"
                               ,0,0);
            }
          }
          else {
            uVar2 = LineFunc(0x58e3,
                             "virtual int Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0x58e2,
                           "virtual int Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&)",
                           0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x58e1,
                         "virtual int Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0x58e0,
                       "virtual int Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x58df,"virtual int Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}
```
