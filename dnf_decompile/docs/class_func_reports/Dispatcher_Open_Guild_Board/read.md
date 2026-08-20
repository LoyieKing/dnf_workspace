# read

`_ZN27Dispatcher_Open_Guild_Board4readER9PacketBufR8MSG_BASE`

`Dispatcher_Open_Guild_Board::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Open_Guild_Board` | `0x081d307e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d307e  _ZN27Dispatcher_Open_Guild_Board4readER9PacketBufR8MSG_BASE
#           Dispatcher_Open_Guild_Board::read(PacketBuf&, MSG_BASE&)
# range [0x081d307e, 0x081d30cf]
081d307e +0x00:  push   %ebp
081d307f +0x01:  mov    %esp,%ebp
081d3081 +0x03:  sub    $0x18,%esp
081d3084 +0x06:  mov    0x10(%ebp),%eax
081d3087 +0x09:  add    $0xb2,%eax
081d308c +0x0e:  mov    %eax,0x4(%esp)
081d3090 +0x12:  mov    0xc(%ebp),%eax
081d3093 +0x15:  mov    %eax,(%esp)
081d3096 +0x18:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081d309b +0x1d:  xor    $0x1,%eax
081d309e +0x20:  test   %al,%al
081d30a0 +0x22:  je     081d30c8 <+0x4a>
081d30a2 +0x24:  movl   $0x0,0xc(%esp)
081d30aa +0x2c:  movl   $0x0,0x8(%esp)
081d30b2 +0x34:  movl   $&_ZZN27Dispatcher_Open_Guild_Board4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d30ba +0x3c:  movl   $0x30aa,(%esp)
081d30c1 +0x43:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d30c6 +0x48:  jmp    081d30cd <+0x4f>
081d30c8 +0x4a:  mov    $0x0,%eax
081d30cd +0x4f:  leave
081d30ce +0x50:  ret
081d30cf +0x51:  nop
```

## 反编译 C

```c
// Dispatcher_Open_Guild_Board::read @ 0x81d307e

/* Dispatcher_Open_Guild_Board::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Open_Guild_Board::read
          (Dispatcher_Open_Guild_Board *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xb2));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x30aa,"virtual int Dispatcher_Open_Guild_Board::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}
```
