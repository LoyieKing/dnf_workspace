# read

`_ZN20DisPatcher_AddFriend4readER9PacketBufR8MSG_BASE`

`DisPatcher_AddFriend::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_AddFriend` | `0x081cb1ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cb1ca  _ZN20DisPatcher_AddFriend4readER9PacketBufR8MSG_BASE
#           DisPatcher_AddFriend::read(PacketBuf&, MSG_BASE&)
# range [0x081cb1ca, 0x081cb273]
081cb1ca +0x00:  push   %ebp
081cb1cb +0x01:  mov    %esp,%ebp
081cb1cd +0x03:  sub    $0x28,%esp
081cb1d0 +0x06:  mov    0x10(%ebp),%eax
081cb1d3 +0x09:  mov    %eax,-0xc(%ebp)
081cb1d6 +0x0c:  mov    -0xc(%ebp),%eax
081cb1d9 +0x0f:  add    $0xd,%eax
081cb1dc +0x12:  mov    %eax,0x4(%esp)
081cb1e0 +0x16:  mov    0xc(%ebp),%eax
081cb1e3 +0x19:  mov    %eax,(%esp)
081cb1e6 +0x1c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081cb1eb +0x21:  xor    $0x1,%eax
081cb1ee +0x24:  test   %al,%al
081cb1f0 +0x26:  je     081cb218 <+0x4e>
081cb1f2 +0x28:  movl   $0x0,0xc(%esp)
081cb1fa +0x30:  movl   $0x0,0x8(%esp)
081cb202 +0x38:  movl   $&_ZZN20DisPatcher_AddFriend4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cb20a +0x40:  movl   $0x207b,(%esp)
081cb211 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cb216 +0x4c:  jmp    081cb271 <+0xa7>
081cb218 +0x4e:  mov    -0xc(%ebp),%eax
081cb21b +0x51:  mov    0xd(%eax),%eax
081cb21e +0x54:  mov    -0xc(%ebp),%edx
081cb221 +0x57:  add    $0x11,%edx
081cb224 +0x5a:  mov    %eax,0xc(%esp)
081cb228 +0x5e:  movl   $0x1e,0x8(%esp)
081cb230 +0x66:  mov    %edx,0x4(%esp)
081cb234 +0x6a:  mov    0xc(%ebp),%eax
081cb237 +0x6d:  mov    %eax,(%esp)
081cb23a +0x70:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081cb23f +0x75:  xor    $0x1,%eax
081cb242 +0x78:  test   %al,%al
081cb244 +0x7a:  je     081cb26c <+0xa2>
081cb246 +0x7c:  movl   $0x0,0xc(%esp)
081cb24e +0x84:  movl   $0x0,0x8(%esp)
081cb256 +0x8c:  movl   $&_ZZN20DisPatcher_AddFriend4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cb25e +0x94:  movl   $0x2082,(%esp)
081cb265 +0x9b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cb26a +0xa0:  jmp    081cb271 <+0xa7>
081cb26c +0xa2:  mov    $0x0,%eax
081cb271 +0xa7:  leave
081cb272 +0xa8:  ret
081cb273 +0xa9:  nop
```

## 反编译 C

```c
// DisPatcher_AddFriend::read @ 0x81cb1ca

/* DisPatcher_AddFriend::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_AddFriend::read(DisPatcher_AddFriend *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x11),0x1e,*(int *)(param_2 + 0xd));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x2082,"virtual int DisPatcher_AddFriend::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x207b,"virtual int DisPatcher_AddFriend::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
