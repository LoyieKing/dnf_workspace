# is_len_end

`_ZN9PacketBuf10is_len_endEi`

`PacketBuf::is_len_end(int)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858cefc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858cefc  _ZN9PacketBuf10is_len_endEi
#           PacketBuf::is_len_end(int)
# range [0x0858cefc, 0x0858cf21]
0858cefc +0x00:  push   %ebp
0858cefd +0x01:  mov    %esp,%ebp
0858ceff +0x03:  mov    0x8(%ebp),%eax
0858cf02 +0x06:  mov    0x4(%eax),%eax
0858cf05 +0x09:  mov    %eax,%edx
0858cf07 +0x0b:  add    0xc(%ebp),%edx
0858cf0a +0x0e:  mov    0x8(%ebp),%eax
0858cf0d +0x11:  mov    0x8(%eax),%eax
0858cf10 +0x14:  cmp    %eax,%edx
0858cf12 +0x16:  jle    0858cf1b <+0x1f>
0858cf14 +0x18:  mov    $0x1,%eax
0858cf19 +0x1d:  jmp    0858cf20 <+0x24>
0858cf1b +0x1f:  mov    $0x0,%eax
0858cf20 +0x24:  pop    %ebp
0858cf21 +0x25:  ret
```

## 反编译 C

```c
// PacketBuf::is_len_end @ 0x858cefc

/* PacketBuf::is_len_end(int) */

bool __thiscall PacketBuf::is_len_end(PacketBuf *this,int param_1)

{
  return *(int *)(this + 8) < *(int *)(this + 4) + param_1;
}
```
