# read

`_ZN31Dispatcher_Register_Quick_Party4readER9PacketBufR8MSG_BASE`

`Dispatcher_Register_Quick_Party::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Register_Quick_Party` | `0x081ddf36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ddf36  _ZN31Dispatcher_Register_Quick_Party4readER9PacketBufR8MSG_BASE
#           Dispatcher_Register_Quick_Party::read(PacketBuf&, MSG_BASE&)
# range [0x081ddf36, 0x081ddfcd]
081ddf36 +0x00:  push   %ebp
081ddf37 +0x01:  mov    %esp,%ebp
081ddf39 +0x03:  sub    $0x28,%esp
081ddf3c +0x06:  mov    0x10(%ebp),%eax
081ddf3f +0x09:  mov    %eax,-0xc(%ebp)
081ddf42 +0x0c:  mov    -0xc(%ebp),%eax
081ddf45 +0x0f:  add    $0xe,%eax
081ddf48 +0x12:  mov    %eax,0x4(%esp)
081ddf4c +0x16:  mov    0xc(%ebp),%eax
081ddf4f +0x19:  mov    %eax,(%esp)
081ddf52 +0x1c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081ddf57 +0x21:  xor    $0x1,%eax
081ddf5a +0x24:  test   %al,%al
081ddf5c +0x26:  je     081ddf84 <+0x4e>
081ddf5e +0x28:  movl   $0x0,0xc(%esp)
081ddf66 +0x30:  movl   $0x0,0x8(%esp)
081ddf6e +0x38:  movl   $&_ZZN31Dispatcher_Register_Quick_Party4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081ddf76 +0x40:  movl   $0x4f1e,(%esp)
081ddf7d +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ddf82 +0x4c:  jmp    081ddfcb <+0x95>
081ddf84 +0x4e:  mov    -0xc(%ebp),%eax
081ddf87 +0x51:  add    $0x10,%eax
081ddf8a +0x54:  mov    %eax,0x4(%esp)
081ddf8e +0x58:  mov    0xc(%ebp),%eax
081ddf91 +0x5b:  mov    %eax,(%esp)
081ddf94 +0x5e:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081ddf99 +0x63:  xor    $0x1,%eax
081ddf9c +0x66:  test   %al,%al
081ddf9e +0x68:  je     081ddfc6 <+0x90>
081ddfa0 +0x6a:  movl   $0x0,0xc(%esp)
081ddfa8 +0x72:  movl   $0x0,0x8(%esp)
081ddfb0 +0x7a:  movl   $&_ZZN31Dispatcher_Register_Quick_Party4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081ddfb8 +0x82:  movl   $0x4f20,(%esp)
081ddfbf +0x89:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ddfc4 +0x8e:  jmp    081ddfcb <+0x95>
081ddfc6 +0x90:  mov    $0x0,%eax
081ddfcb +0x95:  leave
081ddfcc +0x96:  ret
081ddfcd +0x97:  nop
```

## 反编译 C

```c
// Dispatcher_Register_Quick_Party::read @ 0x81ddf36

/* Dispatcher_Register_Quick_Party::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Register_Quick_Party::read
          (Dispatcher_Register_Quick_Party *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x4f20,
                       "virtual int Dispatcher_Register_Quick_Party::read(PacketBuf&, MSG_BASE&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x4f1e,
                     "virtual int Dispatcher_Register_Quick_Party::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}
```
