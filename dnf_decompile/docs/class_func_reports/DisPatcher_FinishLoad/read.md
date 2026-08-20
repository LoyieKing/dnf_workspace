# read

`_ZN21DisPatcher_FinishLoad4readER9PacketBufR8MSG_BASE`

`DisPatcher_FinishLoad::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_FinishLoad` | `0x08264b66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08264b66  _ZN21DisPatcher_FinishLoad4readER9PacketBufR8MSG_BASE
#           DisPatcher_FinishLoad::read(PacketBuf&, MSG_BASE&)
# range [0x08264b66, 0x08264bfd]
08264b66 +0x00:  push   %ebp
08264b67 +0x01:  mov    %esp,%ebp
08264b69 +0x03:  sub    $0x28,%esp
08264b6c +0x06:  mov    0x10(%ebp),%eax
08264b6f +0x09:  mov    %eax,-0xc(%ebp)
08264b72 +0x0c:  mov    -0xc(%ebp),%eax
08264b75 +0x0f:  add    $0xd,%eax
08264b78 +0x12:  mov    %eax,0x4(%esp)
08264b7c +0x16:  mov    0xc(%ebp),%eax
08264b7f +0x19:  mov    %eax,(%esp)
08264b82 +0x1c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08264b87 +0x21:  xor    $0x1,%eax
08264b8a +0x24:  test   %al,%al
08264b8c +0x26:  je     08264bb4 <+0x4e>
08264b8e +0x28:  movl   $0x0,0xc(%esp)
08264b96 +0x30:  movl   $0x0,0x8(%esp)
08264b9e +0x38:  movl   $&_ZZN21DisPatcher_FinishLoad4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
08264ba6 +0x40:  movl   $0x5f7,(%esp)
08264bad +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08264bb2 +0x4c:  jmp    08264bfb <+0x95>
08264bb4 +0x4e:  mov    -0xc(%ebp),%eax
08264bb7 +0x51:  add    $0x11,%eax
08264bba +0x54:  mov    %eax,0x4(%esp)
08264bbe +0x58:  mov    0xc(%ebp),%eax
08264bc1 +0x5b:  mov    %eax,(%esp)
08264bc4 +0x5e:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08264bc9 +0x63:  xor    $0x1,%eax
08264bcc +0x66:  test   %al,%al
08264bce +0x68:  je     08264bf6 <+0x90>
08264bd0 +0x6a:  movl   $0x0,0xc(%esp)
08264bd8 +0x72:  movl   $0x0,0x8(%esp)
08264be0 +0x7a:  movl   $&_ZZN21DisPatcher_FinishLoad4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
08264be8 +0x82:  movl   $0x5f8,(%esp)
08264bef +0x89:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08264bf4 +0x8e:  jmp    08264bfb <+0x95>
08264bf6 +0x90:  mov    $0x0,%eax
08264bfb +0x95:  leave
08264bfc +0x96:  ret
08264bfd +0x97:  nop
```

## 反编译 C

```c
// DisPatcher_FinishLoad::read @ 0x8264b66

/* DisPatcher_FinishLoad::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_FinishLoad::read(DisPatcher_FinishLoad *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x5f8,"virtual int DisPatcher_FinishLoad::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x5f7,"virtual int DisPatcher_FinishLoad::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
