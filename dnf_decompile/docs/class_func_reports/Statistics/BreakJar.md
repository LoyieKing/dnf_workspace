# BreakJar

`_ZN10Statistics8BreakJarEjji`

`Statistics::BreakJar(unsigned int, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `Statistics` | `0x0860b66c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860b66c  _ZN10Statistics8BreakJarEjji
#           Statistics::BreakJar(unsigned int, unsigned int, int)
# range [0x0860b66c, 0x0860b6a1]
0860b66c +0x00:  push   %ebp
0860b66d +0x01:  mov    %esp,%ebp
0860b66f +0x03:  sub    $0x28,%esp
0860b672 +0x06:  mov    0x8(%ebp),%eax
0860b675 +0x09:  mov    %eax,-0x14(%ebp)
0860b678 +0x0c:  mov    0xc(%ebp),%eax
0860b67b +0x0f:  mov    %eax,-0x10(%ebp)
0860b67e +0x12:  mov    0x10(%ebp),%eax
0860b681 +0x15:  mov    %eax,-0xc(%ebp)
0860b684 +0x18:  movl   $0xc,0x8(%esp)
0860b68c +0x20:  lea    -0x14(%ebp),%eax
0860b68f +0x23:  mov    %eax,0x4(%esp)
0860b693 +0x27:  movl   $0x37,(%esp)
0860b69a +0x2e:  call   0860b92e <_ZN10Statistics10SendSignalEiPvi>  ; Statistics::SendSignal(int, void*, int)
0860b69f +0x33:  leave
0860b6a0 +0x34:  ret
0860b6a1 +0x35:  nop
```

## 反编译 C

```c
// Statistics::BreakJar @ 0x860b66c

/* Statistics::BreakJar(unsigned int, unsigned int, int) */

void Statistics::BreakJar(uint param_1,uint param_2,int param_3)

{
  uint local_18;
  uint local_14;
  int local_10;
  
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  SendSignal(0x37,&local_18,0xc);
  return;
}
```
