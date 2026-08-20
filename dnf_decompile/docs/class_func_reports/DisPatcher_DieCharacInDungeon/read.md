# read

`_ZN29DisPatcher_DieCharacInDungeon4readER9PacketBufR8MSG_BASE`

`DisPatcher_DieCharacInDungeon::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DieCharacInDungeon` | `0x081c297a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c297a  _ZN29DisPatcher_DieCharacInDungeon4readER9PacketBufR8MSG_BASE
#           DisPatcher_DieCharacInDungeon::read(PacketBuf&, MSG_BASE&)
# range [0x081c297a, 0x081c2a11]
081c297a +0x00:  push   %ebp
081c297b +0x01:  mov    %esp,%ebp
081c297d +0x03:  sub    $0x28,%esp
081c2980 +0x06:  mov    0x10(%ebp),%eax
081c2983 +0x09:  mov    %eax,-0xc(%ebp)
081c2986 +0x0c:  mov    -0xc(%ebp),%eax
081c2989 +0x0f:  add    $0xd,%eax
081c298c +0x12:  mov    %eax,0x4(%esp)
081c2990 +0x16:  mov    0xc(%ebp),%eax
081c2993 +0x19:  mov    %eax,(%esp)
081c2996 +0x1c:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c299b +0x21:  xor    $0x1,%eax
081c299e +0x24:  test   %al,%al
081c29a0 +0x26:  je     081c29c8 <+0x4e>
081c29a2 +0x28:  movl   $0x0,0xc(%esp)
081c29aa +0x30:  movl   $0x0,0x8(%esp)
081c29b2 +0x38:  movl   $&_ZZN29DisPatcher_DieCharacInDungeon4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c29ba +0x40:  movl   $0xca9,(%esp)
081c29c1 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c29c6 +0x4c:  jmp    081c2a0f <+0x95>
081c29c8 +0x4e:  mov    -0xc(%ebp),%eax
081c29cb +0x51:  add    $0xf,%eax
081c29ce +0x54:  mov    %eax,0x4(%esp)
081c29d2 +0x58:  mov    0xc(%ebp),%eax
081c29d5 +0x5b:  mov    %eax,(%esp)
081c29d8 +0x5e:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c29dd +0x63:  xor    $0x1,%eax
081c29e0 +0x66:  test   %al,%al
081c29e2 +0x68:  je     081c2a0a <+0x90>
081c29e4 +0x6a:  movl   $0x0,0xc(%esp)
081c29ec +0x72:  movl   $0x0,0x8(%esp)
081c29f4 +0x7a:  movl   $&_ZZN29DisPatcher_DieCharacInDungeon4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c29fc +0x82:  movl   $0xcaa,(%esp)
081c2a03 +0x89:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c2a08 +0x8e:  jmp    081c2a0f <+0x95>
081c2a0a +0x90:  mov    $0x0,%eax
081c2a0f +0x95:  leave
081c2a10 +0x96:  ret
081c2a11 +0x97:  nop
```

## 反编译 C

```c
// DisPatcher_DieCharacInDungeon::read @ 0x81c297a

/* DisPatcher_DieCharacInDungeon::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_DieCharacInDungeon::read
          (DisPatcher_DieCharacInDungeon *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0xcaa,
                       "virtual int DisPatcher_DieCharacInDungeon::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0xca9,"virtual int DisPatcher_DieCharacInDungeon::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}
```
