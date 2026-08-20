# get_byte

`_ZN9PacketBuf8get_byteERh`

`PacketBuf::get_byte(unsigned char&)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858cf70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858cf70  _ZN9PacketBuf8get_byteERh
#           PacketBuf::get_byte(unsigned char&)
# range [0x0858cf70, 0x0858cfbf]
0858cf70 +0x00:  push   %ebp
0858cf71 +0x01:  mov    %esp,%ebp
0858cf73 +0x03:  sub    $0x8,%esp
0858cf76 +0x06:  movl   $0x1,0x4(%esp)
0858cf7e +0x0e:  mov    0x8(%ebp),%eax
0858cf81 +0x11:  mov    %eax,(%esp)
0858cf84 +0x14:  call   0858cefc <_ZN9PacketBuf10is_len_endEi>  ; PacketBuf::is_len_end(int)
0858cf89 +0x19:  test   %al,%al
0858cf8b +0x1b:  je     0858cf94 <+0x24>
0858cf8d +0x1d:  mov    $0x0,%eax
0858cf92 +0x22:  jmp    0858cfbd <+0x4d>
0858cf94 +0x24:  mov    0x8(%ebp),%eax
0858cf97 +0x27:  mov    0x14(%eax),%ecx
0858cf9a +0x2a:  mov    0x8(%ebp),%eax
0858cf9d +0x2d:  mov    0x4(%eax),%eax
0858cfa0 +0x30:  mov    %eax,%edx
0858cfa2 +0x32:  lea    (%ecx,%edx,1),%edx
0858cfa5 +0x35:  movzbl (%edx),%edx
0858cfa8 +0x38:  mov    %edx,%ecx
0858cfaa +0x3a:  mov    0xc(%ebp),%edx
0858cfad +0x3d:  mov    %cl,(%edx)
0858cfaf +0x3f:  lea    0x1(%eax),%edx
0858cfb2 +0x42:  mov    0x8(%ebp),%eax
0858cfb5 +0x45:  mov    %edx,0x4(%eax)
0858cfb8 +0x48:  mov    $0x1,%eax
0858cfbd +0x4d:  leave
0858cfbe +0x4e:  ret
0858cfbf +0x4f:  nop
```

## 反编译 C

```c
// PacketBuf::get_byte @ 0x858cf70

/* PacketBuf::get_byte(unsigned char&) */

bool __thiscall PacketBuf::get_byte(PacketBuf *this,uchar *param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = is_len_end(this,1);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(this + 4);
    *param_1 = *(uchar *)(*(int *)(this + 0x14) + iVar1);
    *(int *)(this + 4) = iVar1 + 1;
  }
  return cVar2 == '\0';
}
```
