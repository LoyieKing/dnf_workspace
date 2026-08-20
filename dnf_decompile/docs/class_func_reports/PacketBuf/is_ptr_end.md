# is_ptr_end

`_ZN9PacketBuf10is_ptr_endEii`

`PacketBuf::is_ptr_end(int, int)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858cec4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858cec4  _ZN9PacketBuf10is_ptr_endEii
#           PacketBuf::is_ptr_end(int, int)
# range [0x0858cec4, 0x0858cefb]
0858cec4 +0x00:  push   %ebp
0858cec5 +0x01:  mov    %esp,%ebp
0858cec7 +0x03:  sub    $0x18,%esp
0858ceca +0x06:  mov    0x10(%ebp),%eax
0858cecd +0x09:  mov    0xc(%ebp),%edx
0858ced0 +0x0c:  lea    (%edx,%eax,1),%eax
0858ced3 +0x0f:  cmp    $&_ZL14gUnicodeBuffer+0xcd88,%eax
0858ced8 +0x14:  jle    0858cef4 <+0x30>
0858ceda +0x16:  movl   $0x1,0x4(%esp)
0858cee2 +0x1e:  mov    0x8(%ebp),%eax
0858cee5 +0x21:  mov    %eax,(%esp)
0858cee8 +0x24:  call   0858e286 <_GLOBAL__I__ZN9PacketBufC2Ev+0x5b>  ; global constructors keyed to PacketBuf::PacketBuf()+0x5b
0858ceed +0x29:  mov    $0x1,%eax
0858cef2 +0x2e:  jmp    0858cef9 <+0x35>
0858cef4 +0x30:  mov    $0x0,%eax
0858cef9 +0x35:  leave
0858cefa +0x36:  ret
0858cefb +0x37:  nop
```

## 反编译 C

```c
// PacketBuf::is_ptr_end @ 0x858cec4

/* PacketBuf::is_ptr_end(int, int) */

bool __thiscall PacketBuf::is_ptr_end(PacketBuf *this,int param_1,int param_2)

{
  if (0x172b4 < param_1 + param_2) {
    setLastError(this,1);
  }
  return 0x172b4 < param_1 + param_2;
}
```
