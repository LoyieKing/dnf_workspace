# read

`_ZN28Dispatcher_ChangeHostWarRoom4readER9PacketBufR8MSG_BASE`

`Dispatcher_ChangeHostWarRoom::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeHostWarRoom` | `0x081d735e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d735e  _ZN28Dispatcher_ChangeHostWarRoom4readER9PacketBufR8MSG_BASE
#           Dispatcher_ChangeHostWarRoom::read(PacketBuf&, MSG_BASE&)
# range [0x081d735e, 0x081d73f5]
081d735e +0x00:  push   %ebp
081d735f +0x01:  mov    %esp,%ebp
081d7361 +0x03:  sub    $0x28,%esp
081d7364 +0x06:  mov    0x10(%ebp),%eax
081d7367 +0x09:  mov    %eax,-0xc(%ebp)
081d736a +0x0c:  mov    -0xc(%ebp),%eax
081d736d +0x0f:  add    $0xd,%eax
081d7370 +0x12:  mov    %eax,0x4(%esp)
081d7374 +0x16:  mov    0xc(%ebp),%eax
081d7377 +0x19:  mov    %eax,(%esp)
081d737a +0x1c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081d737f +0x21:  xor    $0x1,%eax
081d7382 +0x24:  test   %al,%al
081d7384 +0x26:  je     081d73ac <+0x4e>
081d7386 +0x28:  movl   $0x0,0xc(%esp)
081d738e +0x30:  movl   $0x0,0x8(%esp)
081d7396 +0x38:  movl   $&_ZZN28Dispatcher_ChangeHostWarRoom4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d739e +0x40:  movl   $0x418e,(%esp)
081d73a5 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d73aa +0x4c:  jmp    081d73f3 <+0x95>
081d73ac +0x4e:  mov    -0xc(%ebp),%eax
081d73af +0x51:  add    $0xe,%eax
081d73b2 +0x54:  mov    %eax,0x4(%esp)
081d73b6 +0x58:  mov    0xc(%ebp),%eax
081d73b9 +0x5b:  mov    %eax,(%esp)
081d73bc +0x5e:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
081d73c1 +0x63:  xor    $0x1,%eax
081d73c4 +0x66:  test   %al,%al
081d73c6 +0x68:  je     081d73ee <+0x90>
081d73c8 +0x6a:  movl   $0x0,0xc(%esp)
081d73d0 +0x72:  movl   $0x0,0x8(%esp)
081d73d8 +0x7a:  movl   $&_ZZN28Dispatcher_ChangeHostWarRoom4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d73e0 +0x82:  movl   $0x4191,(%esp)
081d73e7 +0x89:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d73ec +0x8e:  jmp    081d73f3 <+0x95>
081d73ee +0x90:  mov    $0x0,%eax
081d73f3 +0x95:  leave
081d73f4 +0x96:  ret
081d73f5 +0x97:  nop
```

## 反编译 C

```c
// Dispatcher_ChangeHostWarRoom::read @ 0x81d735e

/* Dispatcher_ChangeHostWarRoom::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ChangeHostWarRoom::read
          (Dispatcher_ChangeHostWarRoom *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(ulong *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x4191,
                       "virtual int Dispatcher_ChangeHostWarRoom::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x418e,"virtual int Dispatcher_ChangeHostWarRoom::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}
```
