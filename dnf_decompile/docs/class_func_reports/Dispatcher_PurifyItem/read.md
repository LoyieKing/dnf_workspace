# read

`_ZN21Dispatcher_PurifyItem4readER9PacketBufR8MSG_BASE`

`Dispatcher_PurifyItem::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PurifyItem` | `0x08218b94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08218b94  _ZN21Dispatcher_PurifyItem4readER9PacketBufR8MSG_BASE
#           Dispatcher_PurifyItem::read(PacketBuf&, MSG_BASE&)
# range [0x08218b94, 0x08218cb5]
08218b94 +0x000:  push   %ebp
08218b95 +0x001:  mov    %esp,%ebp
08218b97 +0x003:  sub    $0x28,%esp
08218b9a +0x006:  mov    0x10(%ebp),%eax
08218b9d +0x009:  mov    %eax,-0xc(%ebp)
08218ba0 +0x00c:  mov    -0xc(%ebp),%eax
08218ba3 +0x00f:  add    $0xd,%eax
08218ba6 +0x012:  mov    %eax,0x4(%esp)
08218baa +0x016:  mov    0xc(%ebp),%eax
08218bad +0x019:  mov    %eax,(%esp)
08218bb0 +0x01c:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08218bb5 +0x021:  xor    $0x1,%eax
08218bb8 +0x024:  test   %al,%al
08218bba +0x026:  je     08218be5 <+0x51>
08218bbc +0x028:  movl   $0x0,0xc(%esp)
08218bc4 +0x030:  movl   $0x0,0x8(%esp)
08218bcc +0x038:  movl   $&_ZZN21Dispatcher_PurifyItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
08218bd4 +0x040:  movl   $0xcbbf,(%esp)
08218bdb +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08218be0 +0x04c:  jmp    08218cb3 <+0x11f>
08218be5 +0x051:  mov    -0xc(%ebp),%eax
08218be8 +0x054:  add    $0xf,%eax
08218beb +0x057:  mov    %eax,0x4(%esp)
08218bef +0x05b:  mov    0xc(%ebp),%eax
08218bf2 +0x05e:  mov    %eax,(%esp)
08218bf5 +0x061:  call   0822b6e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd92>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd92
08218bfa +0x066:  xor    $0x1,%eax
08218bfd +0x069:  test   %al,%al
08218bff +0x06b:  je     08218c2a <+0x96>
08218c01 +0x06d:  movl   $0x0,0xc(%esp)
08218c09 +0x075:  movl   $0x0,0x8(%esp)
08218c11 +0x07d:  movl   $&_ZZN21Dispatcher_PurifyItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
08218c19 +0x085:  movl   $0xcbc1,(%esp)
08218c20 +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08218c25 +0x091:  jmp    08218cb3 <+0x11f>
08218c2a +0x096:  mov    -0xc(%ebp),%eax
08218c2d +0x099:  add    $0x13,%eax
08218c30 +0x09c:  mov    %eax,0x4(%esp)
08218c34 +0x0a0:  mov    0xc(%ebp),%eax
08218c37 +0x0a3:  mov    %eax,(%esp)
08218c3a +0x0a6:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08218c3f +0x0ab:  xor    $0x1,%eax
08218c42 +0x0ae:  test   %al,%al
08218c44 +0x0b0:  je     08218c6c <+0xd8>
08218c46 +0x0b2:  movl   $0x0,0xc(%esp)
08218c4e +0x0ba:  movl   $0x0,0x8(%esp)
08218c56 +0x0c2:  movl   $&_ZZN21Dispatcher_PurifyItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
08218c5e +0x0ca:  movl   $0xcbc3,(%esp)
08218c65 +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08218c6a +0x0d6:  jmp    08218cb3 <+0x11f>
08218c6c +0x0d8:  mov    -0xc(%ebp),%eax
08218c6f +0x0db:  add    $0x15,%eax
08218c72 +0x0de:  mov    %eax,0x4(%esp)
08218c76 +0x0e2:  mov    0xc(%ebp),%eax
08218c79 +0x0e5:  mov    %eax,(%esp)
08218c7c +0x0e8:  call   0822b6e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd92>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd92
08218c81 +0x0ed:  xor    $0x1,%eax
08218c84 +0x0f0:  test   %al,%al
08218c86 +0x0f2:  je     08218cae <+0x11a>
08218c88 +0x0f4:  movl   $0x0,0xc(%esp)
08218c90 +0x0fc:  movl   $0x0,0x8(%esp)
08218c98 +0x104:  movl   $&_ZZN21Dispatcher_PurifyItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
08218ca0 +0x10c:  movl   $0xcbc5,(%esp)
08218ca7 +0x113:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08218cac +0x118:  jmp    08218cb3 <+0x11f>
08218cae +0x11a:  mov    $0x0,%eax
08218cb3 +0x11f:  leave
08218cb4 +0x120:  ret
08218cb5 +0x121:  nop
```

## 反编译 C

```c
// Dispatcher_PurifyItem::read @ 0x8218b94

/* Dispatcher_PurifyItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_PurifyItem::read(Dispatcher_PurifyItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_item_idx(param_1,(ulong *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x13));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_item_idx(param_1,(ulong *)(param_2 + 0x15));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0xcbc5,"virtual int Dispatcher_PurifyItem::read(PacketBuf&, MSG_BASE&)",0
                           ,0);
        }
      }
      else {
        uVar2 = LineFunc(0xcbc3,"virtual int Dispatcher_PurifyItem::read(PacketBuf&, MSG_BASE&)",0,0
                        );
      }
    }
    else {
      uVar2 = LineFunc(0xcbc1,"virtual int Dispatcher_PurifyItem::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0xcbbf,"virtual int Dispatcher_PurifyItem::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
