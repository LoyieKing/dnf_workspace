# read

`_ZN29Dispatcher_GuildCargoPushItem4readER9PacketBufR8MSG_BASE`

`Dispatcher_GuildCargoPushItem::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GuildCargoPushItem` | `0x081d0dfe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d0dfe  _ZN29Dispatcher_GuildCargoPushItem4readER9PacketBufR8MSG_BASE
#           Dispatcher_GuildCargoPushItem::read(PacketBuf&, MSG_BASE&)
# range [0x081d0dfe, 0x081d0f63]
081d0dfe +0x000:  push   %ebp
081d0dff +0x001:  mov    %esp,%ebp
081d0e01 +0x003:  sub    $0x28,%esp
081d0e04 +0x006:  mov    0x10(%ebp),%eax
081d0e07 +0x009:  mov    %eax,-0xc(%ebp)
081d0e0a +0x00c:  mov    -0xc(%ebp),%eax
081d0e0d +0x00f:  add    $0xd,%eax
081d0e10 +0x012:  mov    %eax,0x4(%esp)
081d0e14 +0x016:  mov    0xc(%ebp),%eax
081d0e17 +0x019:  mov    %eax,(%esp)
081d0e1a +0x01c:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081d0e1f +0x021:  xor    $0x1,%eax
081d0e22 +0x024:  test   %al,%al
081d0e24 +0x026:  je     081d0e4f <+0x51>
081d0e26 +0x028:  movl   $0x0,0xc(%esp)
081d0e2e +0x030:  movl   $0x0,0x8(%esp)
081d0e36 +0x038:  movl   $&_ZZN29Dispatcher_GuildCargoPushItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d0e3e +0x040:  movl   $0x2c91,(%esp)
081d0e45 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d0e4a +0x04c:  jmp    081d0f62 <+0x164>
081d0e4f +0x051:  mov    -0xc(%ebp),%eax
081d0e52 +0x054:  add    $0xe,%eax
081d0e55 +0x057:  mov    %eax,0x4(%esp)
081d0e59 +0x05b:  mov    0xc(%ebp),%eax
081d0e5c +0x05e:  mov    %eax,(%esp)
081d0e5f +0x061:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081d0e64 +0x066:  xor    $0x1,%eax
081d0e67 +0x069:  test   %al,%al
081d0e69 +0x06b:  je     081d0e94 <+0x96>
081d0e6b +0x06d:  movl   $0x0,0xc(%esp)
081d0e73 +0x075:  movl   $0x0,0x8(%esp)
081d0e7b +0x07d:  movl   $&_ZZN29Dispatcher_GuildCargoPushItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d0e83 +0x085:  movl   $0x2c92,(%esp)
081d0e8a +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d0e8f +0x091:  jmp    081d0f62 <+0x164>
081d0e94 +0x096:  mov    -0xc(%ebp),%eax
081d0e97 +0x099:  add    $0x10,%eax
081d0e9a +0x09c:  mov    %eax,0x4(%esp)
081d0e9e +0x0a0:  mov    0xc(%ebp),%eax
081d0ea1 +0x0a3:  mov    %eax,(%esp)
081d0ea4 +0x0a6:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d0ea9 +0x0ab:  xor    $0x1,%eax
081d0eac +0x0ae:  test   %al,%al
081d0eae +0x0b0:  je     081d0ed9 <+0xdb>
081d0eb0 +0x0b2:  movl   $0x0,0xc(%esp)
081d0eb8 +0x0ba:  movl   $0x0,0x8(%esp)
081d0ec0 +0x0c2:  movl   $&_ZZN29Dispatcher_GuildCargoPushItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d0ec8 +0x0ca:  movl   $0x2c93,(%esp)
081d0ecf +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d0ed4 +0x0d6:  jmp    081d0f62 <+0x164>
081d0ed9 +0x0db:  mov    -0xc(%ebp),%eax
081d0edc +0x0de:  add    $0x14,%eax
081d0edf +0x0e1:  mov    %eax,0x4(%esp)
081d0ee3 +0x0e5:  mov    0xc(%ebp),%eax
081d0ee6 +0x0e8:  mov    %eax,(%esp)
081d0ee9 +0x0eb:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d0eee +0x0f0:  xor    $0x1,%eax
081d0ef1 +0x0f3:  test   %al,%al
081d0ef3 +0x0f5:  je     081d0f1b <+0x11d>
081d0ef5 +0x0f7:  movl   $0x0,0xc(%esp)
081d0efd +0x0ff:  movl   $0x0,0x8(%esp)
081d0f05 +0x107:  movl   $&_ZZN29Dispatcher_GuildCargoPushItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d0f0d +0x10f:  movl   $0x2c94,(%esp)
081d0f14 +0x116:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d0f19 +0x11b:  jmp    081d0f62 <+0x164>
081d0f1b +0x11d:  mov    -0xc(%ebp),%eax
081d0f1e +0x120:  add    $0x18,%eax
081d0f21 +0x123:  mov    %eax,0x4(%esp)
081d0f25 +0x127:  mov    0xc(%ebp),%eax
081d0f28 +0x12a:  mov    %eax,(%esp)
081d0f2b +0x12d:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081d0f30 +0x132:  xor    $0x1,%eax
081d0f33 +0x135:  test   %al,%al
081d0f35 +0x137:  je     081d0f5d <+0x15f>
081d0f37 +0x139:  movl   $0x0,0xc(%esp)
081d0f3f +0x141:  movl   $0x0,0x8(%esp)
081d0f47 +0x149:  movl   $&_ZZN29Dispatcher_GuildCargoPushItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d0f4f +0x151:  movl   $0x2c95,(%esp)
081d0f56 +0x158:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d0f5b +0x15d:  jmp    081d0f62 <+0x164>
081d0f5d +0x15f:  mov    $0x0,%eax
081d0f62 +0x164:  leave
081d0f63 +0x165:  ret
```

## 反编译 C

```c
// Dispatcher_GuildCargoPushItem::read @ 0x81d0dfe

/* Dispatcher_GuildCargoPushItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_GuildCargoPushItem::read
          (Dispatcher_GuildCargoPushItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x14));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x18));
          if (cVar1 == '\x01') {
            uVar2 = 0;
          }
          else {
            uVar2 = LineFunc(0x2c95,
                             "virtual int Dispatcher_GuildCargoPushItem::read(PacketBuf&, MSG_BASE&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0x2c94,
                           "virtual int Dispatcher_GuildCargoPushItem::read(PacketBuf&, MSG_BASE&)",
                           0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x2c93,
                         "virtual int Dispatcher_GuildCargoPushItem::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0x2c92,
                       "virtual int Dispatcher_GuildCargoPushItem::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x2c91,"virtual int Dispatcher_GuildCargoPushItem::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}
```
