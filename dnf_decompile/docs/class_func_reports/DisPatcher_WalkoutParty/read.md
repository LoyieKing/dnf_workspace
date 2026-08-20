# read

`_ZN23DisPatcher_WalkoutParty4readER9PacketBufR8MSG_BASE`

`DisPatcher_WalkoutParty::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_WalkoutParty` | `0x081caf42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081caf42  _ZN23DisPatcher_WalkoutParty4readER9PacketBufR8MSG_BASE
#           DisPatcher_WalkoutParty::read(PacketBuf&, MSG_BASE&)
# range [0x081caf42, 0x081caf97]
081caf42 +0x00:  push   %ebp
081caf43 +0x01:  mov    %esp,%ebp
081caf45 +0x03:  sub    $0x28,%esp
081caf48 +0x06:  mov    0x10(%ebp),%eax
081caf4b +0x09:  mov    %eax,-0xc(%ebp)
081caf4e +0x0c:  mov    -0xc(%ebp),%eax
081caf51 +0x0f:  add    $0xd,%eax
081caf54 +0x12:  mov    %eax,0x4(%esp)
081caf58 +0x16:  mov    0xc(%ebp),%eax
081caf5b +0x19:  mov    %eax,(%esp)
081caf5e +0x1c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081caf63 +0x21:  xor    $0x1,%eax
081caf66 +0x24:  test   %al,%al
081caf68 +0x26:  je     081caf90 <+0x4e>
081caf6a +0x28:  movl   $0x0,0xc(%esp)
081caf72 +0x30:  movl   $0x0,0x8(%esp)
081caf7a +0x38:  movl   $&_ZZN23DisPatcher_WalkoutParty4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081caf82 +0x40:  movl   $0x202b,(%esp)
081caf89 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081caf8e +0x4c:  jmp    081caf95 <+0x53>
081caf90 +0x4e:  mov    $0x0,%eax
081caf95 +0x53:  leave
081caf96 +0x54:  ret
081caf97 +0x55:  nop
```

## 反编译 C

```c
// DisPatcher_WalkoutParty::read @ 0x81caf42

/* DisPatcher_WalkoutParty::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_WalkoutParty::read(DisPatcher_WalkoutParty *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x202b,"virtual int DisPatcher_WalkoutParty::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
