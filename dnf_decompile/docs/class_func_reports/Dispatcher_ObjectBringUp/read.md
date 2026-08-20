# read

`_ZN24Dispatcher_ObjectBringUp4readER9PacketBufR8MSG_BASE`

`Dispatcher_ObjectBringUp::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ObjectBringUp` | `0x081e147e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e147e  _ZN24Dispatcher_ObjectBringUp4readER9PacketBufR8MSG_BASE
#           Dispatcher_ObjectBringUp::read(PacketBuf&, MSG_BASE&)
# range [0x081e147e, 0x081e14d3]
081e147e +0x00:  push   %ebp
081e147f +0x01:  mov    %esp,%ebp
081e1481 +0x03:  sub    $0x28,%esp
081e1484 +0x06:  mov    0x10(%ebp),%eax
081e1487 +0x09:  mov    %eax,-0xc(%ebp)
081e148a +0x0c:  mov    -0xc(%ebp),%eax
081e148d +0x0f:  add    $0xe,%eax
081e1490 +0x12:  mov    %eax,0x4(%esp)
081e1494 +0x16:  mov    0xc(%ebp),%eax
081e1497 +0x19:  mov    %eax,(%esp)
081e149a +0x1c:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081e149f +0x21:  xor    $0x1,%eax
081e14a2 +0x24:  test   %al,%al
081e14a4 +0x26:  je     081e14cc <+0x4e>
081e14a6 +0x28:  movl   $0x0,0xc(%esp)
081e14ae +0x30:  movl   $0x0,0x8(%esp)
081e14b6 +0x38:  movl   $&_ZZN24Dispatcher_ObjectBringUp4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e14be +0x40:  movl   $0x56aa,(%esp)
081e14c5 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e14ca +0x4c:  jmp    081e14d1 <+0x53>
081e14cc +0x4e:  mov    $0x0,%eax
081e14d1 +0x53:  leave
081e14d2 +0x54:  ret
081e14d3 +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_ObjectBringUp::read @ 0x81e147e

/* Dispatcher_ObjectBringUp::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ObjectBringUp::read(Dispatcher_ObjectBringUp *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x56aa,"virtual int Dispatcher_ObjectBringUp::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}
```
