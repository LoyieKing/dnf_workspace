# read

`_ZN34Dispatcher_Write_On_The_GuildBoard4readER9PacketBufR8MSG_BASE`

`Dispatcher_Write_On_The_GuildBoard::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Write_On_The_GuildBoard` | `0x081d314a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d314a  _ZN34Dispatcher_Write_On_The_GuildBoard4readER9PacketBufR8MSG_BASE
#           Dispatcher_Write_On_The_GuildBoard::read(PacketBuf&, MSG_BASE&)
# range [0x081d314a, 0x081d31ed]
081d314a +0x00:  push   %ebp
081d314b +0x01:  mov    %esp,%ebp
081d314d +0x03:  sub    $0x28,%esp
081d3150 +0x06:  movl   $0x0,-0xc(%ebp)
081d3157 +0x0d:  lea    -0xc(%ebp),%eax
081d315a +0x10:  mov    %eax,0x4(%esp)
081d315e +0x14:  mov    0xc(%ebp),%eax
081d3161 +0x17:  mov    %eax,(%esp)
081d3164 +0x1a:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d3169 +0x1f:  xor    $0x1,%eax
081d316c +0x22:  test   %al,%al
081d316e +0x24:  je     081d3196 <+0x4c>
081d3170 +0x26:  movl   $0x0,0xc(%esp)
081d3178 +0x2e:  movl   $0x0,0x8(%esp)
081d3180 +0x36:  movl   $&_ZZN34Dispatcher_Write_On_The_GuildBoard4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d3188 +0x3e:  movl   $0x30c5,(%esp)
081d318f +0x45:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d3194 +0x4a:  jmp    081d31ec <+0xa2>
081d3196 +0x4c:  mov    -0xc(%ebp),%eax
081d3199 +0x4f:  mov    0x10(%ebp),%edx
081d319c +0x52:  add    $0xd,%edx
081d319f +0x55:  mov    %eax,0xc(%esp)
081d31a3 +0x59:  movl   $0x78,0x8(%esp)
081d31ab +0x61:  mov    %edx,0x4(%esp)
081d31af +0x65:  mov    0xc(%ebp),%eax
081d31b2 +0x68:  mov    %eax,(%esp)
081d31b5 +0x6b:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081d31ba +0x70:  xor    $0x1,%eax
081d31bd +0x73:  test   %al,%al
081d31bf +0x75:  je     081d31e7 <+0x9d>
081d31c1 +0x77:  movl   $0x0,0xc(%esp)
081d31c9 +0x7f:  movl   $0x0,0x8(%esp)
081d31d1 +0x87:  movl   $&_ZZN34Dispatcher_Write_On_The_GuildBoard4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d31d9 +0x8f:  movl   $0x30c8,(%esp)
081d31e0 +0x96:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d31e5 +0x9b:  jmp    081d31ec <+0xa2>
081d31e7 +0x9d:  mov    $0x0,%eax
081d31ec +0xa2:  leave
081d31ed +0xa3:  ret
```

## 反编译 C

```c
// Dispatcher_Write_On_The_GuildBoard::read @ 0x81d314a

/* Dispatcher_Write_On_The_GuildBoard::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Write_On_The_GuildBoard::read
          (Dispatcher_Write_On_The_GuildBoard *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_10 [3];
  
  local_10[0] = 0;
  cVar1 = PacketBuf::get_int(param_1,local_10);
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0xd),0x78,local_10[0]);
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x30c8,
                       "virtual int Dispatcher_Write_On_The_GuildBoard::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x30c5,
                     "virtual int Dispatcher_Write_On_The_GuildBoard::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}
```
