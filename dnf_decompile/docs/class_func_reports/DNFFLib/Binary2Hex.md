# Binary2Hex

`_ZN7DNFFLib10Binary2HexEPKhiPc`

`DNFFLib::Binary2Hex(unsigned char const*, int, char*)`

| 类 | 地址 |
|---|---|
| `DNFFLib` | `0x08108873` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08108873  _ZN7DNFFLib10Binary2HexEPKhiPc
#           DNFFLib::Binary2Hex(unsigned char const*, int, char*)
# range [0x08108873, 0x081088ce]
08108873 +0x00:  push   %ebp
08108874 +0x01:  mov    %esp,%ebp
08108876 +0x03:  sub    $0x28,%esp
08108879 +0x06:  mov    0x8(%ebp),%eax
0810887c +0x09:  mov    %eax,-0xc(%ebp)
0810887f +0x0c:  mov    0x10(%ebp),%eax
08108882 +0x0f:  movb   $0x0,(%eax)
08108885 +0x12:  movl   $0x0,-0x10(%ebp)
0810888c +0x19:  jmp    081088c0 <+0x4d>
0810888e +0x1b:  mov    -0xc(%ebp),%eax
08108891 +0x1e:  movzbl (%eax),%eax
08108894 +0x21:  movzbl %al,%eax
08108897 +0x24:  lea    -0x13(%ebp),%edx
0810889a +0x27:  mov    %edx,0x4(%esp)
0810889e +0x2b:  mov    %eax,(%esp)
081088a1 +0x2e:  call   08108750 <_Z8Char2HexhPc>  ; Char2Hex(unsigned char, char*)
081088a6 +0x33:  lea    -0x13(%ebp),%eax
081088a9 +0x36:  mov    %eax,0x4(%esp)
081088ad +0x3a:  mov    0x10(%ebp),%eax
081088b0 +0x3d:  mov    %eax,(%esp)
081088b3 +0x40:  call   0807dd60 <_init+0x658>
081088b8 +0x45:  addl   $0x1,-0x10(%ebp)
081088bc +0x49:  addl   $0x1,-0xc(%ebp)
081088c0 +0x4d:  mov    -0x10(%ebp),%eax
081088c3 +0x50:  cmp    0xc(%ebp),%eax
081088c6 +0x53:  setl   %al
081088c9 +0x56:  test   %al,%al
081088cb +0x58:  jne    0810888e <+0x1b>
081088cd +0x5a:  leave
081088ce +0x5b:  ret
```

## 反编译 C

```c
// DNFFLib::Binary2Hex @ 0x8108873

/* DNFFLib::Binary2Hex(unsigned char const*, int, char*) */

void DNFFLib::Binary2Hex(uchar *param_1,int param_2,char *param_3)

{
  char local_17 [3];
  int local_14;
  uchar *local_10;
  
  local_10 = param_1;
  *param_3 = '\0';
  for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
    Char2Hex(*local_10,local_17);
    strcat(param_3,local_17);
    local_10 = local_10 + 1;
  }
  return;
}
```
