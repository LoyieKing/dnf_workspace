# get_short

`_ZN9PacketBuf9get_shortERt`

`PacketBuf::get_short(unsigned short&)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858d0b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858d0b0  _ZN9PacketBuf9get_shortERt
#           PacketBuf::get_short(unsigned short&)
# range [0x0858d0b0, 0x0858d0ef]
0858d0b0 +0x00:  push   %ebp
0858d0b1 +0x01:  mov    %esp,%ebp
0858d0b3 +0x03:  sub    $0x28,%esp
0858d0b6 +0x06:  movw   $0x0,-0xa(%ebp)
0858d0bc +0x0c:  lea    -0xa(%ebp),%eax
0858d0bf +0x0f:  mov    %eax,0x4(%esp)
0858d0c3 +0x13:  mov    0x8(%ebp),%eax
0858d0c6 +0x16:  mov    %eax,(%esp)
0858d0c9 +0x19:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0858d0ce +0x1e:  xor    $0x1,%eax
0858d0d1 +0x21:  test   %al,%al
0858d0d3 +0x23:  je     0858d0dc <+0x2c>
0858d0d5 +0x25:  mov    $0x0,%eax
0858d0da +0x2a:  jmp    0858d0ed <+0x3d>
0858d0dc +0x2c:  movzwl -0xa(%ebp),%eax
0858d0e0 +0x30:  mov    %eax,%edx
0858d0e2 +0x32:  mov    0xc(%ebp),%eax
0858d0e5 +0x35:  mov    %dx,(%eax)
0858d0e8 +0x38:  mov    $0x1,%eax
0858d0ed +0x3d:  leave
0858d0ee +0x3e:  ret
0858d0ef +0x3f:  nop
```

## 反编译 C

```c
// PacketBuf::get_short @ 0x858d0b0

/* PacketBuf::get_short(unsigned short&) */

bool __thiscall PacketBuf::get_short(PacketBuf *this,ushort *param_1)

{
  char cVar1;
  ushort local_e [5];
  
  local_e[0] = 0;
  cVar1 = get_short(this,(short *)local_e);
  if (cVar1 == '\x01') {
    *param_1 = local_e[0];
  }
  return cVar1 == '\x01';
}
```
