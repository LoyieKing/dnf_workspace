# read

`_ZN28Dispatcher_SecretShopBuyItem4readER9PacketBufR8MSG_BASE`

`Dispatcher_SecretShopBuyItem::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecretShopBuyItem` | `0x081d25f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d25f8  _ZN28Dispatcher_SecretShopBuyItem4readER9PacketBufR8MSG_BASE
#           Dispatcher_SecretShopBuyItem::read(PacketBuf&, MSG_BASE&)
# range [0x081d25f8, 0x081d26bf]
081d25f8 +0x00:  push   %ebp
081d25f9 +0x01:  mov    %esp,%ebp
081d25fb +0x03:  sub    $0x28,%esp
081d25fe +0x06:  mov    0x10(%ebp),%eax
081d2601 +0x09:  mov    %eax,-0xc(%ebp)
081d2604 +0x0c:  mov    -0xc(%ebp),%eax
081d2607 +0x0f:  add    $0xd,%eax
081d260a +0x12:  mov    %eax,0x4(%esp)
081d260e +0x16:  mov    0xc(%ebp),%eax
081d2611 +0x19:  mov    %eax,(%esp)
081d2614 +0x1c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d2619 +0x21:  xor    $0x1,%eax
081d261c +0x24:  test   %al,%al
081d261e +0x26:  je     081d2646 <+0x4e>
081d2620 +0x28:  movl   $0x0,0xc(%esp)
081d2628 +0x30:  movl   $0x0,0x8(%esp)
081d2630 +0x38:  movl   $&_ZZN28Dispatcher_SecretShopBuyItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d2638 +0x40:  movl   $0x2f80,(%esp)
081d263f +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d2644 +0x4c:  jmp    081d26bd <+0xc5>
081d2646 +0x4e:  mov    -0xc(%ebp),%eax
081d2649 +0x51:  add    $0x11,%eax
081d264c +0x54:  mov    %eax,0x4(%esp)
081d2650 +0x58:  mov    0xc(%ebp),%eax
081d2653 +0x5b:  mov    %eax,(%esp)
081d2656 +0x5e:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d265b +0x63:  xor    $0x1,%eax
081d265e +0x66:  test   %al,%al
081d2660 +0x68:  je     081d2688 <+0x90>
081d2662 +0x6a:  movl   $0x0,0xc(%esp)
081d266a +0x72:  movl   $0x0,0x8(%esp)
081d2672 +0x7a:  movl   $&_ZZN28Dispatcher_SecretShopBuyItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d267a +0x82:  movl   $0x2f81,(%esp)
081d2681 +0x89:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d2686 +0x8e:  jmp    081d26bd <+0xc5>
081d2688 +0x90:  mov    -0xc(%ebp),%eax
081d268b +0x93:  mov    0x11(%eax),%eax
081d268e +0x96:  test   %eax,%eax
081d2690 +0x98:  jg     081d26b8 <+0xc0>
081d2692 +0x9a:  movl   $0x0,0xc(%esp)
081d269a +0xa2:  movl   $0x0,0x8(%esp)
081d26a2 +0xaa:  movl   $&_ZZN28Dispatcher_SecretShopBuyItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d26aa +0xb2:  movl   $0x2f84,(%esp)
081d26b1 +0xb9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d26b6 +0xbe:  jmp    081d26bd <+0xc5>
081d26b8 +0xc0:  mov    $0x0,%eax
081d26bd +0xc5:  leave
081d26be +0xc6:  ret
081d26bf +0xc7:  nop
```

## 反编译 C

```c
// Dispatcher_SecretShopBuyItem::read @ 0x81d25f8

/* Dispatcher_SecretShopBuyItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SecretShopBuyItem::read
          (Dispatcher_SecretShopBuyItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      if (*(int *)(param_2 + 0x11) < 1) {
        uVar2 = LineFunc(0x2f84,
                         "virtual int Dispatcher_SecretShopBuyItem::read(PacketBuf&, MSG_BASE&)",0,0
                        );
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = LineFunc(0x2f81,
                       "virtual int Dispatcher_SecretShopBuyItem::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x2f80,"virtual int Dispatcher_SecretShopBuyItem::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}
```
