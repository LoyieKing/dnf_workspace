# get_int

`_ZN9PacketBuf7get_intERm`

`PacketBuf::get_int(unsigned long&)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858d27e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858d27e  _ZN9PacketBuf7get_intERm
#           PacketBuf::get_int(unsigned long&)
# range [0x0858d27e, 0x0858d2bb]
0858d27e +0x00:  push   %ebp
0858d27f +0x01:  mov    %esp,%ebp
0858d281 +0x03:  sub    $0x28,%esp
0858d284 +0x06:  movl   $0x0,-0xc(%ebp)
0858d28b +0x0d:  lea    -0xc(%ebp),%eax
0858d28e +0x10:  mov    %eax,0x4(%esp)
0858d292 +0x14:  mov    0x8(%ebp),%eax
0858d295 +0x17:  mov    %eax,(%esp)
0858d298 +0x1a:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0858d29d +0x1f:  xor    $0x1,%eax
0858d2a0 +0x22:  test   %al,%al
0858d2a2 +0x24:  je     0858d2ab <+0x2d>
0858d2a4 +0x26:  mov    $0x0,%eax
0858d2a9 +0x2b:  jmp    0858d2ba <+0x3c>
0858d2ab +0x2d:  mov    -0xc(%ebp),%eax
0858d2ae +0x30:  mov    %eax,%edx
0858d2b0 +0x32:  mov    0xc(%ebp),%eax
0858d2b3 +0x35:  mov    %edx,(%eax)
0858d2b5 +0x37:  mov    $0x1,%eax
0858d2ba +0x3c:  leave
0858d2bb +0x3d:  ret
```

## 反编译 C

```c
// PacketBuf::get_int @ 0x858d27e

/* PacketBuf::get_int(unsigned long&) */

bool __thiscall PacketBuf::get_int(PacketBuf *this,ulong *param_1)

{
  char cVar1;
  ulong local_10 [3];
  
  local_10[0] = 0;
  cVar1 = get_int(this,(int *)local_10);
  if (cVar1 == '\x01') {
    *param_1 = local_10[0];
  }
  return cVar1 == '\x01';
}
```
