# put_byte

`_ZN9PacketBuf8put_byteERii`

`PacketBuf::put_byte(int&, int)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858c978` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858c978  _ZN9PacketBuf8put_byteERii
#           PacketBuf::put_byte(int&, int)
# range [0x0858c978, 0x0858c9c7]
0858c978 +0x00:  push   %ebp
0858c979 +0x01:  mov    %esp,%ebp
0858c97b +0x03:  sub    $0x18,%esp
0858c97e +0x06:  mov    0xc(%ebp),%eax
0858c981 +0x09:  mov    (%eax),%eax
0858c983 +0x0b:  movl   $0x1,0x8(%esp)
0858c98b +0x13:  mov    %eax,0x4(%esp)
0858c98f +0x17:  mov    0x8(%ebp),%eax
0858c992 +0x1a:  mov    %eax,(%esp)
0858c995 +0x1d:  call   0858cec4 <_ZN9PacketBuf10is_ptr_endEii>  ; PacketBuf::is_ptr_end(int, int)
0858c99a +0x22:  test   %al,%al
0858c99c +0x24:  je     0858c9a5 <+0x2d>
0858c99e +0x26:  mov    $0x0,%eax
0858c9a3 +0x2b:  jmp    0858c9c6 <+0x4e>
0858c9a5 +0x2d:  mov    0x8(%ebp),%eax
0858c9a8 +0x30:  mov    0x14(%eax),%ecx
0858c9ab +0x33:  mov    0xc(%ebp),%eax
0858c9ae +0x36:  mov    (%eax),%eax
0858c9b0 +0x38:  mov    %eax,%edx
0858c9b2 +0x3a:  add    %edx,%ecx
0858c9b4 +0x3c:  mov    0x10(%ebp),%edx
0858c9b7 +0x3f:  mov    %dl,(%ecx)
0858c9b9 +0x41:  lea    0x1(%eax),%edx
0858c9bc +0x44:  mov    0xc(%ebp),%eax
0858c9bf +0x47:  mov    %edx,(%eax)
0858c9c1 +0x49:  mov    $0x1,%eax
0858c9c6 +0x4e:  leave
0858c9c7 +0x4f:  ret
```

## 反编译 C

```c
// PacketBuf::put_byte @ 0x858c978

/* PacketBuf::put_byte(int&, int) */

bool __thiscall PacketBuf::put_byte(PacketBuf *this,int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  cVar2 = is_ptr_end(this,*param_1,1);
  if (cVar2 == '\0') {
    iVar1 = *param_1;
    *(char *)(*(int *)(this + 0x14) + iVar1) = (char)param_2;
    *param_1 = iVar1 + 1;
  }
  return cVar2 == '\0';
}
```
