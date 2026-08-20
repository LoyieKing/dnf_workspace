# read

`_ZN25Dispatcher_CheckJoinGuild4readER9PacketBufR8MSG_BASE`

`Dispatcher_CheckJoinGuild::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CheckJoinGuild` | `0x081d4b4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d4b4c  _ZN25Dispatcher_CheckJoinGuild4readER9PacketBufR8MSG_BASE
#           Dispatcher_CheckJoinGuild::read(PacketBuf&, MSG_BASE&)
# range [0x081d4b4c, 0x081d4bf5]
081d4b4c +0x00:  push   %ebp
081d4b4d +0x01:  mov    %esp,%ebp
081d4b4f +0x03:  sub    $0x28,%esp
081d4b52 +0x06:  mov    0x10(%ebp),%eax
081d4b55 +0x09:  mov    %eax,-0xc(%ebp)
081d4b58 +0x0c:  mov    -0xc(%ebp),%eax
081d4b5b +0x0f:  add    $0xd,%eax
081d4b5e +0x12:  mov    %eax,0x4(%esp)
081d4b62 +0x16:  mov    0xc(%ebp),%eax
081d4b65 +0x19:  mov    %eax,(%esp)
081d4b68 +0x1c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d4b6d +0x21:  xor    $0x1,%eax
081d4b70 +0x24:  test   %al,%al
081d4b72 +0x26:  je     081d4b9a <+0x4e>
081d4b74 +0x28:  movl   $0x0,0xc(%esp)
081d4b7c +0x30:  movl   $0x0,0x8(%esp)
081d4b84 +0x38:  movl   $&_ZZN25Dispatcher_CheckJoinGuild4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d4b8c +0x40:  movl   $0x34db,(%esp)
081d4b93 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d4b98 +0x4c:  jmp    081d4bf3 <+0xa7>
081d4b9a +0x4e:  mov    -0xc(%ebp),%eax
081d4b9d +0x51:  mov    0xd(%eax),%eax
081d4ba0 +0x54:  mov    -0xc(%ebp),%edx
081d4ba3 +0x57:  add    $0x11,%edx
081d4ba6 +0x5a:  mov    %eax,0xc(%esp)
081d4baa +0x5e:  movl   $0x17,0x8(%esp)
081d4bb2 +0x66:  mov    %edx,0x4(%esp)
081d4bb6 +0x6a:  mov    0xc(%ebp),%eax
081d4bb9 +0x6d:  mov    %eax,(%esp)
081d4bbc +0x70:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081d4bc1 +0x75:  xor    $0x1,%eax
081d4bc4 +0x78:  test   %al,%al
081d4bc6 +0x7a:  je     081d4bee <+0xa2>
081d4bc8 +0x7c:  movl   $0x0,0xc(%esp)
081d4bd0 +0x84:  movl   $0x0,0x8(%esp)
081d4bd8 +0x8c:  movl   $&_ZZN25Dispatcher_CheckJoinGuild4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d4be0 +0x94:  movl   $0x34de,(%esp)
081d4be7 +0x9b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d4bec +0xa0:  jmp    081d4bf3 <+0xa7>
081d4bee +0xa2:  mov    $0x0,%eax
081d4bf3 +0xa7:  leave
081d4bf4 +0xa8:  ret
081d4bf5 +0xa9:  nop
```

## 反编译 C

```c
// Dispatcher_CheckJoinGuild::read @ 0x81d4b4c

/* Dispatcher_CheckJoinGuild::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_CheckJoinGuild::read
          (Dispatcher_CheckJoinGuild *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x11),0x17,*(int *)(param_2 + 0xd));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x34de,"virtual int Dispatcher_CheckJoinGuild::read(PacketBuf&, MSG_BASE&)",0
                       ,0);
    }
  }
  else {
    uVar2 = LineFunc(0x34db,"virtual int Dispatcher_CheckJoinGuild::read(PacketBuf&, MSG_BASE&)",0,0
                    );
  }
  return uVar2;
}
```
