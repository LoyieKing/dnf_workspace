# read

`_ZN24Dispatcher_UseRenameCard4readER9PacketBufR8MSG_BASE`

`Dispatcher_UseRenameCard::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseRenameCard` | `0x081e72c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e72c4  _ZN24Dispatcher_UseRenameCard4readER9PacketBufR8MSG_BASE
#           Dispatcher_UseRenameCard::read(PacketBuf&, MSG_BASE&)
# range [0x081e72c4, 0x081e7319]
081e72c4 +0x00:  push   %ebp
081e72c5 +0x01:  mov    %esp,%ebp
081e72c7 +0x03:  sub    $0x28,%esp
081e72ca +0x06:  mov    0x10(%ebp),%eax
081e72cd +0x09:  mov    %eax,-0xc(%ebp)
081e72d0 +0x0c:  mov    -0xc(%ebp),%eax
081e72d3 +0x0f:  add    $0xe,%eax
081e72d6 +0x12:  mov    %eax,0x4(%esp)
081e72da +0x16:  mov    0xc(%ebp),%eax
081e72dd +0x19:  mov    %eax,(%esp)
081e72e0 +0x1c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081e72e5 +0x21:  xor    $0x1,%eax
081e72e8 +0x24:  test   %al,%al
081e72ea +0x26:  je     081e7312 <+0x4e>
081e72ec +0x28:  movl   $0x0,0xc(%esp)
081e72f4 +0x30:  movl   $0x0,0x8(%esp)
081e72fc +0x38:  movl   $&_ZZN24Dispatcher_UseRenameCard4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e7304 +0x40:  movl   $0x62f3,(%esp)
081e730b +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e7310 +0x4c:  jmp    081e7317 <+0x53>
081e7312 +0x4e:  mov    $0x0,%eax
081e7317 +0x53:  leave
081e7318 +0x54:  ret
081e7319 +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_UseRenameCard::read @ 0x81e72c4

/* Dispatcher_UseRenameCard::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_UseRenameCard::read(Dispatcher_UseRenameCard *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x62f3,"virtual int Dispatcher_UseRenameCard::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}
```
