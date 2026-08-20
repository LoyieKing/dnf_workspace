# read

`_ZN27Dispatcher_RequestJoinGuild4readER9PacketBufR8MSG_BASE`

`Dispatcher_RequestJoinGuild::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestJoinGuild` | `0x081d4ce2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d4ce2  _ZN27Dispatcher_RequestJoinGuild4readER9PacketBufR8MSG_BASE
#           Dispatcher_RequestJoinGuild::read(PacketBuf&, MSG_BASE&)
# range [0x081d4ce2, 0x081d4e27]
081d4ce2 +0x000:  push   %ebp
081d4ce3 +0x001:  mov    %esp,%ebp
081d4ce5 +0x003:  sub    $0x28,%esp
081d4ce8 +0x006:  mov    0x10(%ebp),%eax
081d4ceb +0x009:  mov    %eax,-0xc(%ebp)
081d4cee +0x00c:  mov    -0xc(%ebp),%eax
081d4cf1 +0x00f:  add    $0xd,%eax
081d4cf4 +0x012:  mov    %eax,0x4(%esp)
081d4cf8 +0x016:  mov    0xc(%ebp),%eax
081d4cfb +0x019:  mov    %eax,(%esp)
081d4cfe +0x01c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d4d03 +0x021:  xor    $0x1,%eax
081d4d06 +0x024:  test   %al,%al
081d4d08 +0x026:  je     081d4d33 <+0x51>
081d4d0a +0x028:  movl   $0x0,0xc(%esp)
081d4d12 +0x030:  movl   $0x0,0x8(%esp)
081d4d1a +0x038:  movl   $&_ZZN27Dispatcher_RequestJoinGuild4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d4d22 +0x040:  movl   $0x3506,(%esp)
081d4d29 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d4d2e +0x04c:  jmp    081d4e25 <+0x143>
081d4d33 +0x051:  mov    -0xc(%ebp),%eax
081d4d36 +0x054:  mov    0xd(%eax),%eax
081d4d39 +0x057:  mov    -0xc(%ebp),%edx
081d4d3c +0x05a:  add    $0x11,%edx
081d4d3f +0x05d:  mov    %eax,0xc(%esp)
081d4d43 +0x061:  movl   $0x17,0x8(%esp)
081d4d4b +0x069:  mov    %edx,0x4(%esp)
081d4d4f +0x06d:  mov    0xc(%ebp),%eax
081d4d52 +0x070:  mov    %eax,(%esp)
081d4d55 +0x073:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081d4d5a +0x078:  xor    $0x1,%eax
081d4d5d +0x07b:  test   %al,%al
081d4d5f +0x07d:  je     081d4d8a <+0xa8>
081d4d61 +0x07f:  movl   $0x0,0xc(%esp)
081d4d69 +0x087:  movl   $0x0,0x8(%esp)
081d4d71 +0x08f:  movl   $&_ZZN27Dispatcher_RequestJoinGuild4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d4d79 +0x097:  movl   $0x3509,(%esp)
081d4d80 +0x09e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d4d85 +0x0a3:  jmp    081d4e25 <+0x143>
081d4d8a +0x0a8:  mov    -0xc(%ebp),%eax
081d4d8d +0x0ab:  add    $0x28,%eax
081d4d90 +0x0ae:  mov    %eax,0x4(%esp)
081d4d94 +0x0b2:  mov    0xc(%ebp),%eax
081d4d97 +0x0b5:  mov    %eax,(%esp)
081d4d9a +0x0b8:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d4d9f +0x0bd:  xor    $0x1,%eax
081d4da2 +0x0c0:  test   %al,%al
081d4da4 +0x0c2:  je     081d4dcc <+0xea>
081d4da6 +0x0c4:  movl   $0x0,0xc(%esp)
081d4dae +0x0cc:  movl   $0x0,0x8(%esp)
081d4db6 +0x0d4:  movl   $&_ZZN27Dispatcher_RequestJoinGuild4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d4dbe +0x0dc:  movl   $0x350d,(%esp)
081d4dc5 +0x0e3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d4dca +0x0e8:  jmp    081d4e25 <+0x143>
081d4dcc +0x0ea:  mov    -0xc(%ebp),%eax
081d4dcf +0x0ed:  mov    0x28(%eax),%eax
081d4dd2 +0x0f0:  mov    -0xc(%ebp),%edx
081d4dd5 +0x0f3:  add    $0x2c,%edx
081d4dd8 +0x0f6:  mov    %eax,0xc(%esp)
081d4ddc +0x0fa:  movl   $0x1a,0x8(%esp)
081d4de4 +0x102:  mov    %edx,0x4(%esp)
081d4de8 +0x106:  mov    0xc(%ebp),%eax
081d4deb +0x109:  mov    %eax,(%esp)
081d4dee +0x10c:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081d4df3 +0x111:  xor    $0x1,%eax
081d4df6 +0x114:  test   %al,%al
081d4df8 +0x116:  je     081d4e20 <+0x13e>
081d4dfa +0x118:  movl   $0x0,0xc(%esp)
081d4e02 +0x120:  movl   $0x0,0x8(%esp)
081d4e0a +0x128:  movl   $&_ZZN27Dispatcher_RequestJoinGuild4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d4e12 +0x130:  movl   $0x3510,(%esp)
081d4e19 +0x137:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d4e1e +0x13c:  jmp    081d4e25 <+0x143>
081d4e20 +0x13e:  mov    $0x0,%eax
081d4e25 +0x143:  leave
081d4e26 +0x144:  ret
081d4e27 +0x145:  nop
```

## 反编译 C

```c
// Dispatcher_RequestJoinGuild::read @ 0x81d4ce2

/* Dispatcher_RequestJoinGuild::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RequestJoinGuild::read
          (Dispatcher_RequestJoinGuild *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x11),0x17,*(int *)(param_2 + 0xd));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x28));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x2c),0x1a,*(int *)(param_2 + 0x28));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x3510,
                           "virtual int Dispatcher_RequestJoinGuild::read(PacketBuf&, MSG_BASE&)",0,
                           0);
        }
      }
      else {
        uVar2 = LineFunc(0x350d,
                         "virtual int Dispatcher_RequestJoinGuild::read(PacketBuf&, MSG_BASE&)",0,0)
        ;
      }
    }
    else {
      uVar2 = LineFunc(0x3509,"virtual int Dispatcher_RequestJoinGuild::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x3506,"virtual int Dispatcher_RequestJoinGuild::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}
```
