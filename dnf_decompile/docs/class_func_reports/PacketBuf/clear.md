# clear

`_ZN9PacketBuf5clearEv`

`PacketBuf::clear()`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858c8e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858c8e2  _ZN9PacketBuf5clearEv
#           PacketBuf::clear()
# range [0x0858c8e2, 0x0858c939]
0858c8e2 +0x00:  push   %ebp
0858c8e3 +0x01:  mov    %esp,%ebp
0858c8e5 +0x03:  sub    $0x18,%esp
0858c8e8 +0x06:  mov    0x8(%ebp),%eax
0858c8eb +0x09:  movl   $0x0,0x4(%eax)
0858c8f2 +0x10:  mov    0x8(%ebp),%eax
0858c8f5 +0x13:  movl   $0x0,0x8(%eax)
0858c8fc +0x1a:  mov    0x8(%ebp),%eax
0858c8ff +0x1d:  movb   $0x0,0xc(%eax)
0858c903 +0x21:  mov    0x8(%ebp),%eax
0858c906 +0x24:  lea    0x18(%eax),%edx
0858c909 +0x27:  mov    0x8(%ebp),%eax
0858c90c +0x2a:  mov    %edx,0x14(%eax)
0858c90f +0x2d:  movl   $0x0,0x4(%esp)
0858c917 +0x35:  mov    0x8(%ebp),%eax
0858c91a +0x38:  mov    %eax,(%esp)
0858c91d +0x3b:  call   0858e286 <_GLOBAL__I__ZN9PacketBufC2Ev+0x5b>  ; global constructors keyed to PacketBuf::PacketBuf()+0x5b
0858c922 +0x40:  mov    0x8(%ebp),%eax
0858c925 +0x43:  movb   $0x1,&_ZL14gUnicodeBuffer+0xce04(%eax)
0858c92c +0x4a:  mov    0x8(%ebp),%eax
0858c92f +0x4d:  mov    %eax,(%esp)
0858c932 +0x50:  call   0858c93a <_ZN9PacketBuf9clear_ptrEv>  ; PacketBuf::clear_ptr()
0858c937 +0x55:  leave
0858c938 +0x56:  ret
0858c939 +0x57:  nop
```

## 反编译 C

```c
// PacketBuf::clear @ 0x858c8e2

/* PacketBuf::clear() */

void __thiscall PacketBuf::clear(PacketBuf *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (PacketBuf)0x0;
  *(PacketBuf **)(this + 0x14) = this + 0x18;
  setLastError(this,0);
  this[0x17330] = (PacketBuf)0x1;
  clear_ptr(this);
  return;
}
```
