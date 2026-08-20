# put_header

`_ZN9PacketBuf10put_headerEii`

`PacketBuf::put_header(int, int)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858c94a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858c94a  _ZN9PacketBuf10put_headerEii
#           PacketBuf::put_header(int, int)
# range [0x0858c94a, 0x0858c977]
0858c94a +0x00:  push   %ebp
0858c94b +0x01:  mov    %esp,%ebp
0858c94d +0x03:  mov    0x8(%ebp),%eax
0858c950 +0x06:  mov    0x14(%eax),%eax
0858c953 +0x09:  mov    0xc(%ebp),%edx
0858c956 +0x0c:  mov    %dl,(%eax)
0858c958 +0x0e:  mov    0x8(%ebp),%eax
0858c95b +0x11:  mov    0x14(%eax),%eax
0858c95e +0x14:  lea    0x1(%eax),%edx
0858c961 +0x17:  mov    0x10(%ebp),%eax
0858c964 +0x1a:  mov    %ax,(%edx)
0858c967 +0x1d:  mov    0x8(%ebp),%eax
0858c96a +0x20:  movl   $0xf,0x4(%eax)
0858c971 +0x27:  mov    $0x1,%eax
0858c976 +0x2c:  pop    %ebp
0858c977 +0x2d:  ret
```

## 反编译 C

```c
// PacketBuf::put_header @ 0x858c94a

/* PacketBuf::put_header(int, int) */

undefined4 __thiscall PacketBuf::put_header(PacketBuf *this,int param_1,int param_2)

{
  **(undefined1 **)(this + 0x14) = (char)param_1;
  *(short *)(*(int *)(this + 0x14) + 1) = (short)param_2;
  *(undefined4 *)(this + 4) = 0xf;
  return 1;
}
```
