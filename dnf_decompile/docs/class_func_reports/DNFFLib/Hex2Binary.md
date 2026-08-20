# Hex2Binary

`_ZN7DNFFLib10Hex2BinaryEPKcPhi`

`DNFFLib::Hex2Binary(char const*, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `DNFFLib` | `0x081088cf` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081088cf  _ZN7DNFFLib10Hex2BinaryEPKcPhi
#           DNFFLib::Hex2Binary(char const*, unsigned char*, int)
# range [0x081088cf, 0x08108926]
081088cf +0x00:  push   %ebp
081088d0 +0x01:  mov    %esp,%ebp
081088d2 +0x03:  sub    $0x18,%esp
081088d5 +0x06:  movl   $0x0,-0x4(%ebp)
081088dc +0x0d:  jmp    08108913 <+0x44>
081088de +0x0f:  lea    -0x5(%ebp),%eax
081088e1 +0x12:  mov    %eax,0x4(%esp)
081088e5 +0x16:  mov    0x8(%ebp),%eax
081088e8 +0x19:  mov    %eax,(%esp)
081088eb +0x1c:  call   08108792 <_Z8Hex2CharPKcRh>  ; Hex2Char(char const*, unsigned char&)
081088f0 +0x21:  xor    $0x1,%eax
081088f3 +0x24:  test   %al,%al
081088f5 +0x26:  je     081088fe <+0x2f>
081088f7 +0x28:  mov    $0x0,%eax
081088fc +0x2d:  jmp    08108925 <+0x56>
081088fe +0x2f:  movzbl -0x5(%ebp),%edx
08108902 +0x33:  mov    0xc(%ebp),%eax
08108905 +0x36:  mov    %dl,(%eax)
08108907 +0x38:  addl   $0x1,-0x4(%ebp)
0810890b +0x3c:  addl   $0x2,0x8(%ebp)
0810890f +0x40:  addl   $0x1,0xc(%ebp)
08108913 +0x44:  mov    -0x4(%ebp),%eax
08108916 +0x47:  cmp    0x10(%ebp),%eax
08108919 +0x4a:  setl   %al
0810891c +0x4d:  test   %al,%al
0810891e +0x4f:  jne    081088de <+0xf>
08108920 +0x51:  mov    $0x1,%eax
08108925 +0x56:  leave
08108926 +0x57:  ret
```

## 反编译 C

```c
// DNFFLib::Hex2Binary @ 0x81088cf

/* DNFFLib::Hex2Binary(char const*, unsigned char*, int) */

undefined4 DNFFLib::Hex2Binary(char *param_1,uchar *param_2,int param_3)

{
  char cVar1;
  uchar local_9;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (param_3 <= local_8) {
      return 1;
    }
    cVar1 = Hex2Char(param_1,&local_9);
    if (cVar1 != '\x01') break;
    *param_2 = local_9;
    local_8 = local_8 + 1;
    param_1 = param_1 + 2;
    param_2 = param_2 + 1;
  }
  return 0;
}
```
