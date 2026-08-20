# read

`_ZN33Dispatcher_Delete_GuildBoard_Text4readER9PacketBufR8MSG_BASE`

`Dispatcher_Delete_GuildBoard_Text::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Delete_GuildBoard_Text` | `0x081d334e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d334e  _ZN33Dispatcher_Delete_GuildBoard_Text4readER9PacketBufR8MSG_BASE
#           Dispatcher_Delete_GuildBoard_Text::read(PacketBuf&, MSG_BASE&)
# range [0x081d334e, 0x081d339f]
081d334e +0x00:  push   %ebp
081d334f +0x01:  mov    %esp,%ebp
081d3351 +0x03:  sub    $0x18,%esp
081d3354 +0x06:  mov    0x10(%ebp),%eax
081d3357 +0x09:  add    $0x89,%eax
081d335c +0x0e:  mov    %eax,0x4(%esp)
081d3360 +0x12:  mov    0xc(%ebp),%eax
081d3363 +0x15:  mov    %eax,(%esp)
081d3366 +0x18:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081d336b +0x1d:  xor    $0x1,%eax
081d336e +0x20:  test   %al,%al
081d3370 +0x22:  je     081d3398 <+0x4a>
081d3372 +0x24:  movl   $0x0,0xc(%esp)
081d337a +0x2c:  movl   $0x0,0x8(%esp)
081d3382 +0x34:  movl   $&_ZZN33Dispatcher_Delete_GuildBoard_Text4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d338a +0x3c:  movl   $0x3101,(%esp)
081d3391 +0x43:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d3396 +0x48:  jmp    081d339d <+0x4f>
081d3398 +0x4a:  mov    $0x0,%eax
081d339d +0x4f:  leave
081d339e +0x50:  ret
081d339f +0x51:  nop
```

## 反编译 C

```c
// Dispatcher_Delete_GuildBoard_Text::read @ 0x81d334e

/* Dispatcher_Delete_GuildBoard_Text::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Delete_GuildBoard_Text::read
          (Dispatcher_Delete_GuildBoard_Text *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x89));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x3101,
                     "virtual int Dispatcher_Delete_GuildBoard_Text::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}
```
