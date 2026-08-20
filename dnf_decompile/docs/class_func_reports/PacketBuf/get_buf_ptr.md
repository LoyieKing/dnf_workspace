# get_buf_ptr

`_ZN9PacketBuf11get_buf_ptrEi`

`PacketBuf::get_buf_ptr(int)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858da38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858da38  _ZN9PacketBuf11get_buf_ptrEi
#           PacketBuf::get_buf_ptr(int)
# range [0x0858da38, 0x0858da51]
0858da38 +0x00:  push   %ebp
0858da39 +0x01:  mov    %esp,%ebp
0858da3b +0x03:  sub    $0x18,%esp
0858da3e +0x06:  mov    0xc(%ebp),%eax
0858da41 +0x09:  mov    %eax,0x4(%esp)
0858da45 +0x0d:  mov    0x8(%ebp),%eax
0858da48 +0x10:  mov    %eax,(%esp)
0858da4b +0x13:  call   0822b702 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xdac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xdac
0858da50 +0x18:  leave
0858da51 +0x19:  ret
```

## 反编译 C

```c
// PacketBuf::get_buf_ptr @ 0x858da38

/* PacketBuf::get_buf_ptr(int) */

void __thiscall PacketBuf::get_buf_ptr(PacketBuf *this,int param_1)

{
  get_packet(this,param_1);
  return;
}
```
