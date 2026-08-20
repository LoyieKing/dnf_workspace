# Composition

`_ZN10Statistics11CompositionEjji`

`Statistics::Composition(unsigned int, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `Statistics` | `0x0860b6a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860b6a2  _ZN10Statistics11CompositionEjji
#           Statistics::Composition(unsigned int, unsigned int, int)
# range [0x0860b6a2, 0x0860b6db]
0860b6a2 +0x00:  push   %ebp
0860b6a3 +0x01:  mov    %esp,%ebp
0860b6a5 +0x03:  sub    $0x28,%esp
0860b6a8 +0x06:  mov    0x8(%ebp),%eax
0860b6ab +0x09:  mov    %eax,-0x15(%ebp)
0860b6ae +0x0c:  mov    0xc(%ebp),%eax
0860b6b1 +0x0f:  mov    %eax,-0x11(%ebp)
0860b6b4 +0x12:  movb   $0x63,-0xd(%ebp)
0860b6b8 +0x16:  mov    0x10(%ebp),%eax
0860b6bb +0x19:  mov    %eax,-0xc(%ebp)
0860b6be +0x1c:  movl   $0xd,0x8(%esp)
0860b6c6 +0x24:  lea    -0x15(%ebp),%eax
0860b6c9 +0x27:  mov    %eax,0x4(%esp)
0860b6cd +0x2b:  movl   $0x38,(%esp)
0860b6d4 +0x32:  call   0860b92e <_ZN10Statistics10SendSignalEiPvi>  ; Statistics::SendSignal(int, void*, int)
0860b6d9 +0x37:  leave
0860b6da +0x38:  ret
0860b6db +0x39:  nop
```

## 反编译 C

```c
// Statistics::Composition @ 0x860b6a2

/* Statistics::Composition(unsigned int, unsigned int, int) */

void Statistics::Composition(uint param_1,uint param_2,int param_3)

{
  uint local_19;
  uint local_15;
  undefined1 local_11;
  int local_10;
  
  local_19 = param_1;
  local_15 = param_2;
  local_11 = 99;
  local_10 = param_3;
  SendSignal(0x38,&local_19,0xd);
  return;
}
```
