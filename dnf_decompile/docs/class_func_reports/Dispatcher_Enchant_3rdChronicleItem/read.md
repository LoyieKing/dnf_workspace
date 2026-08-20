# read

`_ZN35Dispatcher_Enchant_3rdChronicleItem4readER9PacketBufR8MSG_BASE`

`Dispatcher_Enchant_3rdChronicleItem::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Enchant_3rdChronicleItem` | `0x081d35fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d35fe  _ZN35Dispatcher_Enchant_3rdChronicleItem4readER9PacketBufR8MSG_BASE
#           Dispatcher_Enchant_3rdChronicleItem::read(PacketBuf&, MSG_BASE&)
# range [0x081d35fe, 0x081d375d]
081d35fe +0x000:  push   %ebp
081d35ff +0x001:  mov    %esp,%ebp
081d3601 +0x003:  sub    $0x18,%esp
081d3604 +0x006:  mov    0x10(%ebp),%eax
081d3607 +0x009:  add    $0x13,%eax
081d360a +0x00c:  mov    %eax,0x4(%esp)
081d360e +0x010:  mov    0xc(%ebp),%eax
081d3611 +0x013:  mov    %eax,(%esp)
081d3614 +0x016:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081d3619 +0x01b:  xor    $0x1,%eax
081d361c +0x01e:  test   %al,%al
081d361e +0x020:  je     081d3649 <+0x4b>
081d3620 +0x022:  movl   $0x0,0xc(%esp)
081d3628 +0x02a:  movl   $0x0,0x8(%esp)
081d3630 +0x032:  movl   $&_ZZN35Dispatcher_Enchant_3rdChronicleItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d3638 +0x03a:  movl   $0x3158,(%esp)
081d363f +0x041:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d3644 +0x046:  jmp    081d375c <+0x15e>
081d3649 +0x04b:  mov    0x10(%ebp),%eax
081d364c +0x04e:  add    $0x15,%eax
081d364f +0x051:  mov    %eax,0x4(%esp)
081d3653 +0x055:  mov    0xc(%ebp),%eax
081d3656 +0x058:  mov    %eax,(%esp)
081d3659 +0x05b:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
081d365e +0x060:  xor    $0x1,%eax
081d3661 +0x063:  test   %al,%al
081d3663 +0x065:  je     081d368e <+0x90>
081d3665 +0x067:  movl   $0x0,0xc(%esp)
081d366d +0x06f:  movl   $0x0,0x8(%esp)
081d3675 +0x077:  movl   $&_ZZN35Dispatcher_Enchant_3rdChronicleItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d367d +0x07f:  movl   $0x315a,(%esp)
081d3684 +0x086:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d3689 +0x08b:  jmp    081d375c <+0x15e>
081d368e +0x090:  mov    0x10(%ebp),%eax
081d3691 +0x093:  add    $0xd,%eax
081d3694 +0x096:  mov    %eax,0x4(%esp)
081d3698 +0x09a:  mov    0xc(%ebp),%eax
081d369b +0x09d:  mov    %eax,(%esp)
081d369e +0x0a0:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081d36a3 +0x0a5:  xor    $0x1,%eax
081d36a6 +0x0a8:  test   %al,%al
081d36a8 +0x0aa:  je     081d36d3 <+0xd5>
081d36aa +0x0ac:  movl   $0x0,0xc(%esp)
081d36b2 +0x0b4:  movl   $0x0,0x8(%esp)
081d36ba +0x0bc:  movl   $&_ZZN35Dispatcher_Enchant_3rdChronicleItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d36c2 +0x0c4:  movl   $0x315d,(%esp)
081d36c9 +0x0cb:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d36ce +0x0d0:  jmp    081d375c <+0x15e>
081d36d3 +0x0d5:  mov    0x10(%ebp),%eax
081d36d6 +0x0d8:  add    $0xf,%eax
081d36d9 +0x0db:  mov    %eax,0x4(%esp)
081d36dd +0x0df:  mov    0xc(%ebp),%eax
081d36e0 +0x0e2:  mov    %eax,(%esp)
081d36e3 +0x0e5:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
081d36e8 +0x0ea:  xor    $0x1,%eax
081d36eb +0x0ed:  test   %al,%al
081d36ed +0x0ef:  je     081d3715 <+0x117>
081d36ef +0x0f1:  movl   $0x0,0xc(%esp)
081d36f7 +0x0f9:  movl   $0x0,0x8(%esp)
081d36ff +0x101:  movl   $&_ZZN35Dispatcher_Enchant_3rdChronicleItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d3707 +0x109:  movl   $0x315f,(%esp)
081d370e +0x110:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d3713 +0x115:  jmp    081d375c <+0x15e>
081d3715 +0x117:  mov    0x10(%ebp),%eax
081d3718 +0x11a:  add    $0x19,%eax
081d371b +0x11d:  mov    %eax,0x4(%esp)
081d371f +0x121:  mov    0xc(%ebp),%eax
081d3722 +0x124:  mov    %eax,(%esp)
081d3725 +0x127:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081d372a +0x12c:  xor    $0x1,%eax
081d372d +0x12f:  test   %al,%al
081d372f +0x131:  je     081d3757 <+0x159>
081d3731 +0x133:  movl   $0x0,0xc(%esp)
081d3739 +0x13b:  movl   $0x0,0x8(%esp)
081d3741 +0x143:  movl   $&_ZZN35Dispatcher_Enchant_3rdChronicleItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d3749 +0x14b:  movl   $0x3162,(%esp)
081d3750 +0x152:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d3755 +0x157:  jmp    081d375c <+0x15e>
081d3757 +0x159:  mov    $0x0,%eax
081d375c +0x15e:  leave
081d375d +0x15f:  ret
```

## 反编译 C

```c
// Dispatcher_Enchant_3rdChronicleItem::read @ 0x81d35fe

/* Dispatcher_Enchant_3rdChronicleItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Enchant_3rdChronicleItem::read
          (Dispatcher_Enchant_3rdChronicleItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x13));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(ulong *)(param_2 + 0x15));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_1,(ulong *)(param_2 + 0xf));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x19));
          if (cVar1 == '\x01') {
            uVar2 = 0;
          }
          else {
            uVar2 = LineFunc(0x3162,
                             "virtual int Dispatcher_Enchant_3rdChronicleItem::read(PacketBuf&, MSG_BASE&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0x315f,
                           "virtual int Dispatcher_Enchant_3rdChronicleItem::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x315d,
                         "virtual int Dispatcher_Enchant_3rdChronicleItem::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x315a,
                       "virtual int Dispatcher_Enchant_3rdChronicleItem::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x3158,
                     "virtual int Dispatcher_Enchant_3rdChronicleItem::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}
```
