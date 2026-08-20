# read

`_ZN23Dispatcher_BossDieCheck4readER9PacketBufR8MSG_BASE`

`Dispatcher_BossDieCheck::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BossDieCheck` | `0x081cd642` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cd642  _ZN23Dispatcher_BossDieCheck4readER9PacketBufR8MSG_BASE
#           Dispatcher_BossDieCheck::read(PacketBuf&, MSG_BASE&)
# range [0x081cd642, 0x081cd71d]
081cd642 +0x00:  push   %ebp
081cd643 +0x01:  mov    %esp,%ebp
081cd645 +0x03:  sub    $0x28,%esp
081cd648 +0x06:  mov    0x10(%ebp),%eax
081cd64b +0x09:  mov    %eax,-0xc(%ebp)
081cd64e +0x0c:  mov    -0xc(%ebp),%eax
081cd651 +0x0f:  add    $0xe,%eax
081cd654 +0x12:  mov    %eax,0x4(%esp)
081cd658 +0x16:  mov    0xc(%ebp),%eax
081cd65b +0x19:  mov    %eax,(%esp)
081cd65e +0x1c:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081cd663 +0x21:  xor    $0x1,%eax
081cd666 +0x24:  test   %al,%al
081cd668 +0x26:  je     081cd693 <+0x51>
081cd66a +0x28:  movl   $0x0,0xc(%esp)
081cd672 +0x30:  movl   $0x0,0x8(%esp)
081cd67a +0x38:  movl   $&_ZZN23Dispatcher_BossDieCheck4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cd682 +0x40:  movl   $0x2578,(%esp)
081cd689 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cd68e +0x4c:  jmp    081cd71c <+0xda>
081cd693 +0x51:  mov    -0xc(%ebp),%eax
081cd696 +0x54:  add    $0x10,%eax
081cd699 +0x57:  mov    %eax,0x4(%esp)
081cd69d +0x5b:  mov    0xc(%ebp),%eax
081cd6a0 +0x5e:  mov    %eax,(%esp)
081cd6a3 +0x61:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081cd6a8 +0x66:  xor    $0x1,%eax
081cd6ab +0x69:  test   %al,%al
081cd6ad +0x6b:  je     081cd6d5 <+0x93>
081cd6af +0x6d:  movl   $0x0,0xc(%esp)
081cd6b7 +0x75:  movl   $0x0,0x8(%esp)
081cd6bf +0x7d:  movl   $&_ZZN23Dispatcher_BossDieCheck4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cd6c7 +0x85:  movl   $0x2579,(%esp)
081cd6ce +0x8c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cd6d3 +0x91:  jmp    081cd71c <+0xda>
081cd6d5 +0x93:  mov    -0xc(%ebp),%eax
081cd6d8 +0x96:  add    $0x14,%eax
081cd6db +0x99:  mov    %eax,0x4(%esp)
081cd6df +0x9d:  mov    0xc(%ebp),%eax
081cd6e2 +0xa0:  mov    %eax,(%esp)
081cd6e5 +0xa3:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081cd6ea +0xa8:  xor    $0x1,%eax
081cd6ed +0xab:  test   %al,%al
081cd6ef +0xad:  je     081cd717 <+0xd5>
081cd6f1 +0xaf:  movl   $0x0,0xc(%esp)
081cd6f9 +0xb7:  movl   $0x0,0x8(%esp)
081cd701 +0xbf:  movl   $&_ZZN23Dispatcher_BossDieCheck4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cd709 +0xc7:  movl   $0x257b,(%esp)
081cd710 +0xce:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cd715 +0xd3:  jmp    081cd71c <+0xda>
081cd717 +0xd5:  mov    $0x0,%eax
081cd71c +0xda:  leave
081cd71d +0xdb:  ret
```

## 反编译 C

```c
// Dispatcher_BossDieCheck::read @ 0x81cd642

/* Dispatcher_BossDieCheck::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_BossDieCheck::read(Dispatcher_BossDieCheck *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x14));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x257b,"virtual int Dispatcher_BossDieCheck::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    else {
      uVar2 = LineFunc(0x2579,"virtual int Dispatcher_BossDieCheck::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x2578,"virtual int Dispatcher_BossDieCheck::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
