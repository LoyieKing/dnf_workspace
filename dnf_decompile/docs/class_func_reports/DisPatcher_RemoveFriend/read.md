# read

`_ZN23DisPatcher_RemoveFriend4readER9PacketBufR8MSG_BASE`

`DisPatcher_RemoveFriend::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_RemoveFriend` | `0x081cb52e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cb52e  _ZN23DisPatcher_RemoveFriend4readER9PacketBufR8MSG_BASE
#           DisPatcher_RemoveFriend::read(PacketBuf&, MSG_BASE&)
# range [0x081cb52e, 0x081cb5d7]
081cb52e +0x00:  push   %ebp
081cb52f +0x01:  mov    %esp,%ebp
081cb531 +0x03:  sub    $0x28,%esp
081cb534 +0x06:  mov    0x10(%ebp),%eax
081cb537 +0x09:  mov    %eax,-0xc(%ebp)
081cb53a +0x0c:  mov    -0xc(%ebp),%eax
081cb53d +0x0f:  add    $0xd,%eax
081cb540 +0x12:  mov    %eax,0x4(%esp)
081cb544 +0x16:  mov    0xc(%ebp),%eax
081cb547 +0x19:  mov    %eax,(%esp)
081cb54a +0x1c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081cb54f +0x21:  xor    $0x1,%eax
081cb552 +0x24:  test   %al,%al
081cb554 +0x26:  je     081cb57c <+0x4e>
081cb556 +0x28:  movl   $0x0,0xc(%esp)
081cb55e +0x30:  movl   $0x0,0x8(%esp)
081cb566 +0x38:  movl   $&_ZZN23DisPatcher_RemoveFriend4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cb56e +0x40:  movl   $0x2115,(%esp)
081cb575 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cb57a +0x4c:  jmp    081cb5d5 <+0xa7>
081cb57c +0x4e:  mov    -0xc(%ebp),%eax
081cb57f +0x51:  mov    0xd(%eax),%eax
081cb582 +0x54:  mov    -0xc(%ebp),%edx
081cb585 +0x57:  add    $0x11,%edx
081cb588 +0x5a:  mov    %eax,0xc(%esp)
081cb58c +0x5e:  movl   $0x1e,0x8(%esp)
081cb594 +0x66:  mov    %edx,0x4(%esp)
081cb598 +0x6a:  mov    0xc(%ebp),%eax
081cb59b +0x6d:  mov    %eax,(%esp)
081cb59e +0x70:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081cb5a3 +0x75:  xor    $0x1,%eax
081cb5a6 +0x78:  test   %al,%al
081cb5a8 +0x7a:  je     081cb5d0 <+0xa2>
081cb5aa +0x7c:  movl   $0x0,0xc(%esp)
081cb5b2 +0x84:  movl   $0x0,0x8(%esp)
081cb5ba +0x8c:  movl   $&_ZZN23DisPatcher_RemoveFriend4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cb5c2 +0x94:  movl   $0x211c,(%esp)
081cb5c9 +0x9b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cb5ce +0xa0:  jmp    081cb5d5 <+0xa7>
081cb5d0 +0xa2:  mov    $0x0,%eax
081cb5d5 +0xa7:  leave
081cb5d6 +0xa8:  ret
081cb5d7 +0xa9:  nop
```

## 反编译 C

```c
// DisPatcher_RemoveFriend::read @ 0x81cb52e

/* DisPatcher_RemoveFriend::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_RemoveFriend::read(DisPatcher_RemoveFriend *this,PacketBuf *param_1,MSG_BASE *param_2)

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
      uVar2 = LineFunc(0x211c,"virtual int DisPatcher_RemoveFriend::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x2115,"virtual int DisPatcher_RemoveFriend::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
