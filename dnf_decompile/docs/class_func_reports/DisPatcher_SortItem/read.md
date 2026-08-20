# read

`_ZN19DisPatcher_SortItem4readER9PacketBufR8MSG_BASE`

`DisPatcher_SortItem::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SortItem` | `0x081c9bfe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c9bfe  _ZN19DisPatcher_SortItem4readER9PacketBufR8MSG_BASE
#           DisPatcher_SortItem::read(PacketBuf&, MSG_BASE&)
# range [0x081c9bfe, 0x081c9c53]
081c9bfe +0x00:  push   %ebp
081c9bff +0x01:  mov    %esp,%ebp
081c9c01 +0x03:  sub    $0x28,%esp
081c9c04 +0x06:  mov    0x10(%ebp),%eax
081c9c07 +0x09:  mov    %eax,-0xc(%ebp)
081c9c0a +0x0c:  mov    -0xc(%ebp),%eax
081c9c0d +0x0f:  add    $0xd,%eax
081c9c10 +0x12:  mov    %eax,0x4(%esp)
081c9c14 +0x16:  mov    0xc(%ebp),%eax
081c9c17 +0x19:  mov    %eax,(%esp)
081c9c1a +0x1c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c9c1f +0x21:  xor    $0x1,%eax
081c9c22 +0x24:  test   %al,%al
081c9c24 +0x26:  je     081c9c4c <+0x4e>
081c9c26 +0x28:  movl   $0x0,0xc(%esp)
081c9c2e +0x30:  movl   $0x0,0x8(%esp)
081c9c36 +0x38:  movl   $&_ZZN19DisPatcher_SortItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c9c3e +0x40:  movl   $0x1d16,(%esp)
081c9c45 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c9c4a +0x4c:  jmp    081c9c51 <+0x53>
081c9c4c +0x4e:  mov    $0x0,%eax
081c9c51 +0x53:  leave
081c9c52 +0x54:  ret
081c9c53 +0x55:  nop
```

## 反编译 C

```c
// DisPatcher_SortItem::read @ 0x81c9bfe

/* DisPatcher_SortItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_SortItem::read(DisPatcher_SortItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x1d16,"virtual int DisPatcher_SortItem::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
