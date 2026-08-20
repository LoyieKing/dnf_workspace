# PvpPlay

`_ZN10Statistics7PvpPlayEjjii`

`Statistics::PvpPlay(unsigned int, unsigned int, int, int)`

| 类 | 地址 |
|---|---|
| `Statistics` | `0x0860b74c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860b74c  _ZN10Statistics7PvpPlayEjjii
#           Statistics::PvpPlay(unsigned int, unsigned int, int, int)
# range [0x0860b74c, 0x0860b787]
0860b74c +0x00:  push   %ebp
0860b74d +0x01:  mov    %esp,%ebp
0860b74f +0x03:  sub    $0x28,%esp
0860b752 +0x06:  mov    0x8(%ebp),%eax
0860b755 +0x09:  mov    %eax,-0x18(%ebp)
0860b758 +0x0c:  mov    0xc(%ebp),%eax
0860b75b +0x0f:  mov    %eax,-0x14(%ebp)
0860b75e +0x12:  mov    0x10(%ebp),%eax
0860b761 +0x15:  mov    %eax,-0x10(%ebp)
0860b764 +0x18:  mov    0x14(%ebp),%eax
0860b767 +0x1b:  mov    %eax,-0xc(%ebp)
0860b76a +0x1e:  movl   $0x10,0x8(%esp)
0860b772 +0x26:  lea    -0x18(%ebp),%eax
0860b775 +0x29:  mov    %eax,0x4(%esp)
0860b779 +0x2d:  movl   $0x3a,(%esp)
0860b780 +0x34:  call   0860b92e <_ZN10Statistics10SendSignalEiPvi>  ; Statistics::SendSignal(int, void*, int)
0860b785 +0x39:  leave
0860b786 +0x3a:  ret
0860b787 +0x3b:  nop
```

## 反编译 C

```c
// Statistics::PvpPlay @ 0x860b74c

/* Statistics::PvpPlay(unsigned int, unsigned int, int, int) */

void Statistics::PvpPlay(uint param_1,uint param_2,int param_3,int param_4)

{
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  local_1c = param_1;
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  SendSignal(0x3a,&local_1c,0x10);
  return;
}
```
