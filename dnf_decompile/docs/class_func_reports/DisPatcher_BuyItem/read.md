# read

`_ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE`

`DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_BuyItem` | `0x081bdba8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bdba8  _ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE
#           DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)
# range [0x081bdba8, 0x081bdc7d]
081bdba8 +0x00:  push   %ebp
081bdba9 +0x01:  mov    %esp,%ebp
081bdbab +0x03:  sub    $0x18,%esp
081bdbae +0x06:  mov    0x10(%ebp),%eax
081bdbb1 +0x09:  add    $0xd,%eax
081bdbb4 +0x0c:  mov    %eax,0x4(%esp)
081bdbb8 +0x10:  mov    0xc(%ebp),%eax
081bdbbb +0x13:  mov    %eax,(%esp)
081bdbbe +0x16:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
081bdbc3 +0x1b:  xor    $0x1,%eax
081bdbc6 +0x1e:  test   %al,%al
081bdbc8 +0x20:  je     081bdbf3 <+0x4b>
081bdbca +0x22:  movl   $0x0,0xc(%esp)
081bdbd2 +0x2a:  movl   $0x0,0x8(%esp)
081bdbda +0x32:  movl   $&_ZZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081bdbe2 +0x3a:  movl   $0x188,(%esp)
081bdbe9 +0x41:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081bdbee +0x46:  jmp    081bdc7c <+0xd4>
081bdbf3 +0x4b:  mov    0x10(%ebp),%eax
081bdbf6 +0x4e:  add    $0x11,%eax
081bdbf9 +0x51:  mov    %eax,0x4(%esp)
081bdbfd +0x55:  mov    0xc(%ebp),%eax
081bdc00 +0x58:  mov    %eax,(%esp)
081bdc03 +0x5b:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081bdc08 +0x60:  xor    $0x1,%eax
081bdc0b +0x63:  test   %al,%al
081bdc0d +0x65:  je     081bdc35 <+0x8d>
081bdc0f +0x67:  movl   $0x0,0xc(%esp)
081bdc17 +0x6f:  movl   $0x0,0x8(%esp)
081bdc1f +0x77:  movl   $&_ZZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081bdc27 +0x7f:  movl   $0x18b,(%esp)
081bdc2e +0x86:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081bdc33 +0x8b:  jmp    081bdc7c <+0xd4>
081bdc35 +0x8d:  mov    0x10(%ebp),%eax
081bdc38 +0x90:  add    $0x15,%eax
081bdc3b +0x93:  mov    %eax,0x4(%esp)
081bdc3f +0x97:  mov    0xc(%ebp),%eax
081bdc42 +0x9a:  mov    %eax,(%esp)
081bdc45 +0x9d:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081bdc4a +0xa2:  xor    $0x1,%eax
081bdc4d +0xa5:  test   %al,%al
081bdc4f +0xa7:  je     081bdc77 <+0xcf>
081bdc51 +0xa9:  movl   $0x0,0xc(%esp)
081bdc59 +0xb1:  movl   $0x0,0x8(%esp)
081bdc61 +0xb9:  movl   $&_ZZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081bdc69 +0xc1:  movl   $0x18e,(%esp)
081bdc70 +0xc8:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081bdc75 +0xcd:  jmp    081bdc7c <+0xd4>
081bdc77 +0xcf:  mov    $0x0,%eax
081bdc7c +0xd4:  leave
081bdc7d +0xd5:  ret
```

## 反编译 C

```c
// DisPatcher_BuyItem::read @ 0x81bdba8

/* DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_BuyItem::read(DisPatcher_BuyItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(ulong *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x15));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x18e,"virtual int DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x18b,"virtual int DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x188,"virtual int DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
