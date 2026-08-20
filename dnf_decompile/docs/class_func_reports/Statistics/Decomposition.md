# Decomposition

`_ZN10Statistics13DecompositionEjji`

`Statistics::Decomposition(unsigned int, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `Statistics` | `0x0860b6dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860b6dc  _ZN10Statistics13DecompositionEjji
#           Statistics::Decomposition(unsigned int, unsigned int, int)
# range [0x0860b6dc, 0x0860b715]
0860b6dc +0x00:  push   %ebp
0860b6dd +0x01:  mov    %esp,%ebp
0860b6df +0x03:  sub    $0x28,%esp
0860b6e2 +0x06:  mov    0x8(%ebp),%eax
0860b6e5 +0x09:  mov    %eax,-0x15(%ebp)
0860b6e8 +0x0c:  mov    0xc(%ebp),%eax
0860b6eb +0x0f:  mov    %eax,-0x11(%ebp)
0860b6ee +0x12:  movb   $0x64,-0xd(%ebp)
0860b6f2 +0x16:  mov    0x10(%ebp),%eax
0860b6f5 +0x19:  mov    %eax,-0xc(%ebp)
0860b6f8 +0x1c:  movl   $0xd,0x8(%esp)
0860b700 +0x24:  lea    -0x15(%ebp),%eax
0860b703 +0x27:  mov    %eax,0x4(%esp)
0860b707 +0x2b:  movl   $0x38,(%esp)
0860b70e +0x32:  call   0860b92e <_ZN10Statistics10SendSignalEiPvi>  ; Statistics::SendSignal(int, void*, int)
0860b713 +0x37:  leave
0860b714 +0x38:  ret
0860b715 +0x39:  nop
```

## 反编译 C

```c
// Statistics::Decomposition @ 0x860b6dc

/* Statistics::Decomposition(unsigned int, unsigned int, int) */

void Statistics::Decomposition(uint param_1,uint param_2,int param_3)

{
  uint local_19;
  uint local_15;
  undefined1 local_11;
  int local_10;
  
  local_19 = param_1;
  local_15 = param_2;
  local_11 = 100;
  local_10 = param_3;
  SendSignal(0x38,&local_19,0xd);
  return;
}
```
