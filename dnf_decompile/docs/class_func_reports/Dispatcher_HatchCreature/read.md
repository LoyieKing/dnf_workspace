# read

`_ZN24Dispatcher_HatchCreature4readER9PacketBufR8MSG_BASE`

`Dispatcher_HatchCreature::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_HatchCreature` | `0x081cd3ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cd3ae  _ZN24Dispatcher_HatchCreature4readER9PacketBufR8MSG_BASE
#           Dispatcher_HatchCreature::read(PacketBuf&, MSG_BASE&)
# range [0x081cd3ae, 0x081cd445]
081cd3ae +0x00:  push   %ebp
081cd3af +0x01:  mov    %esp,%ebp
081cd3b1 +0x03:  sub    $0x28,%esp
081cd3b4 +0x06:  mov    0x10(%ebp),%eax
081cd3b7 +0x09:  mov    %eax,-0xc(%ebp)
081cd3ba +0x0c:  mov    -0xc(%ebp),%eax
081cd3bd +0x0f:  add    $0xd,%eax
081cd3c0 +0x12:  mov    %eax,0x4(%esp)
081cd3c4 +0x16:  mov    0xc(%ebp),%eax
081cd3c7 +0x19:  mov    %eax,(%esp)
081cd3ca +0x1c:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081cd3cf +0x21:  xor    $0x1,%eax
081cd3d2 +0x24:  test   %al,%al
081cd3d4 +0x26:  je     081cd3fc <+0x4e>
081cd3d6 +0x28:  movl   $0x0,0xc(%esp)
081cd3de +0x30:  movl   $0x0,0x8(%esp)
081cd3e6 +0x38:  movl   $&_ZZN24Dispatcher_HatchCreature4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cd3ee +0x40:  movl   $0x2518,(%esp)
081cd3f5 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cd3fa +0x4c:  jmp    081cd443 <+0x95>
081cd3fc +0x4e:  mov    -0xc(%ebp),%eax
081cd3ff +0x51:  add    $0xe,%eax
081cd402 +0x54:  mov    %eax,0x4(%esp)
081cd406 +0x58:  mov    0xc(%ebp),%eax
081cd409 +0x5b:  mov    %eax,(%esp)
081cd40c +0x5e:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081cd411 +0x63:  xor    $0x1,%eax
081cd414 +0x66:  test   %al,%al
081cd416 +0x68:  je     081cd43e <+0x90>
081cd418 +0x6a:  movl   $0x0,0xc(%esp)
081cd420 +0x72:  movl   $0x0,0x8(%esp)
081cd428 +0x7a:  movl   $&_ZZN24Dispatcher_HatchCreature4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cd430 +0x82:  movl   $0x251b,(%esp)
081cd437 +0x89:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cd43c +0x8e:  jmp    081cd443 <+0x95>
081cd43e +0x90:  mov    $0x0,%eax
081cd443 +0x95:  leave
081cd444 +0x96:  ret
081cd445 +0x97:  nop
```

## 反编译 C

```c
// Dispatcher_HatchCreature::read @ 0x81cd3ae

/* Dispatcher_HatchCreature::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_HatchCreature::read(Dispatcher_HatchCreature *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x251b,"virtual int Dispatcher_HatchCreature::read(PacketBuf&, MSG_BASE&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x2518,"virtual int Dispatcher_HatchCreature::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}
```
