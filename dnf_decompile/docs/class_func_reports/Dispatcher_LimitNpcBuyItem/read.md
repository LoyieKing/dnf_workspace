# read

`_ZN26Dispatcher_LimitNpcBuyItem4readER9PacketBufR8MSG_BASE`

`Dispatcher_LimitNpcBuyItem::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_LimitNpcBuyItem` | `0x081e0f60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e0f60  _ZN26Dispatcher_LimitNpcBuyItem4readER9PacketBufR8MSG_BASE
#           Dispatcher_LimitNpcBuyItem::read(PacketBuf&, MSG_BASE&)
# range [0x081e0f60, 0x081e0ff7]
081e0f60 +0x00:  push   %ebp
081e0f61 +0x01:  mov    %esp,%ebp
081e0f63 +0x03:  sub    $0x28,%esp
081e0f66 +0x06:  mov    0x10(%ebp),%eax
081e0f69 +0x09:  mov    %eax,-0xc(%ebp)
081e0f6c +0x0c:  mov    -0xc(%ebp),%eax
081e0f6f +0x0f:  add    $0xd,%eax
081e0f72 +0x12:  mov    %eax,0x4(%esp)
081e0f76 +0x16:  mov    0xc(%ebp),%eax
081e0f79 +0x19:  mov    %eax,(%esp)
081e0f7c +0x1c:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
081e0f81 +0x21:  xor    $0x1,%eax
081e0f84 +0x24:  test   %al,%al
081e0f86 +0x26:  je     081e0fae <+0x4e>
081e0f88 +0x28:  movl   $0x0,0xc(%esp)
081e0f90 +0x30:  movl   $0x0,0x8(%esp)
081e0f98 +0x38:  movl   $&_ZZN26Dispatcher_LimitNpcBuyItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e0fa0 +0x40:  movl   $0x559a,(%esp)
081e0fa7 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e0fac +0x4c:  jmp    081e0ff5 <+0x95>
081e0fae +0x4e:  mov    -0xc(%ebp),%eax
081e0fb1 +0x51:  add    $0x11,%eax
081e0fb4 +0x54:  mov    %eax,0x4(%esp)
081e0fb8 +0x58:  mov    0xc(%ebp),%eax
081e0fbb +0x5b:  mov    %eax,(%esp)
081e0fbe +0x5e:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081e0fc3 +0x63:  xor    $0x1,%eax
081e0fc6 +0x66:  test   %al,%al
081e0fc8 +0x68:  je     081e0ff0 <+0x90>
081e0fca +0x6a:  movl   $0x0,0xc(%esp)
081e0fd2 +0x72:  movl   $0x0,0x8(%esp)
081e0fda +0x7a:  movl   $&_ZZN26Dispatcher_LimitNpcBuyItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e0fe2 +0x82:  movl   $0x559d,(%esp)
081e0fe9 +0x89:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e0fee +0x8e:  jmp    081e0ff5 <+0x95>
081e0ff0 +0x90:  mov    $0x0,%eax
081e0ff5 +0x95:  leave
081e0ff6 +0x96:  ret
081e0ff7 +0x97:  nop
```

## 反编译 C

```c
// Dispatcher_LimitNpcBuyItem::read @ 0x81e0f60

/* Dispatcher_LimitNpcBuyItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_LimitNpcBuyItem::read
          (Dispatcher_LimitNpcBuyItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(ulong *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x559d,"virtual int Dispatcher_LimitNpcBuyItem::read(PacketBuf&, MSG_BASE&)",
                       0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x559a,"virtual int Dispatcher_LimitNpcBuyItem::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}
```
