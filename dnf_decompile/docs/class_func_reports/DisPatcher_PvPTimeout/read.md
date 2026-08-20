# read

`_ZN21DisPatcher_PvPTimeout4readER9PacketBufR8MSG_BASE`

`DisPatcher_PvPTimeout::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_PvPTimeout` | `0x081c5d78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c5d78  _ZN21DisPatcher_PvPTimeout4readER9PacketBufR8MSG_BASE
#           DisPatcher_PvPTimeout::read(PacketBuf&, MSG_BASE&)
# range [0x081c5d78, 0x081c5deb]
081c5d78 +0x00:  push   %ebp
081c5d79 +0x01:  mov    %esp,%ebp
081c5d7b +0x03:  sub    $0x28,%esp
081c5d7e +0x06:  mov    0x10(%ebp),%eax
081c5d81 +0x09:  mov    %eax,-0x10(%ebp)
081c5d84 +0x0c:  movl   $0x0,-0xc(%ebp)
081c5d8b +0x13:  jmp    081c5dd9 <+0x61>
081c5d8d +0x15:  mov    -0xc(%ebp),%eax
081c5d90 +0x18:  shl    $0x2,%eax
081c5d93 +0x1b:  add    -0x10(%ebp),%eax
081c5d96 +0x1e:  add    $0xd,%eax
081c5d99 +0x21:  mov    %eax,0x4(%esp)
081c5d9d +0x25:  mov    0xc(%ebp),%eax
081c5da0 +0x28:  mov    %eax,(%esp)
081c5da3 +0x2b:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081c5da8 +0x30:  xor    $0x1,%eax
081c5dab +0x33:  test   %al,%al
081c5dad +0x35:  je     081c5dd5 <+0x5d>
081c5daf +0x37:  movl   $0x0,0xc(%esp)
081c5db7 +0x3f:  movl   $0x0,0x8(%esp)
081c5dbf +0x47:  movl   $&_ZZN21DisPatcher_PvPTimeout4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c5dc7 +0x4f:  movl   $0x14a6,(%esp)
081c5dce +0x56:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c5dd3 +0x5b:  jmp    081c5de9 <+0x71>
081c5dd5 +0x5d:  addl   $0x1,-0xc(%ebp)
081c5dd9 +0x61:  cmpl   $0x7,-0xc(%ebp)
081c5ddd +0x65:  setle  %al
081c5de0 +0x68:  test   %al,%al
081c5de2 +0x6a:  jne    081c5d8d <+0x15>
081c5de4 +0x6c:  mov    $0x0,%eax
081c5de9 +0x71:  leave
081c5dea +0x72:  ret
081c5deb +0x73:  nop
```

## 反编译 C

```c
// DisPatcher_PvPTimeout::read @ 0x81c5d78

/* DisPatcher_PvPTimeout::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_PvPTimeout::read(DisPatcher_PvPTimeout *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (7 < local_10) {
      return 0;
    }
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + local_10 * 4 + 0xd));
    if (cVar1 != '\x01') break;
    local_10 = local_10 + 1;
  }
  uVar2 = LineFunc(0x14a6,"virtual int DisPatcher_PvPTimeout::read(PacketBuf&, MSG_BASE&)",0,0);
  return uVar2;
}
```
