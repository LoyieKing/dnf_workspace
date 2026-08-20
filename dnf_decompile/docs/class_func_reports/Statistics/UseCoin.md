# UseCoin

`_ZN10Statistics7UseCoinEjji`

`Statistics::UseCoin(unsigned int, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `Statistics` | `0x0860b716` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860b716  _ZN10Statistics7UseCoinEjji
#           Statistics::UseCoin(unsigned int, unsigned int, int)
# range [0x0860b716, 0x0860b74b]
0860b716 +0x00:  push   %ebp
0860b717 +0x01:  mov    %esp,%ebp
0860b719 +0x03:  sub    $0x28,%esp
0860b71c +0x06:  mov    0x8(%ebp),%eax
0860b71f +0x09:  mov    %eax,-0x14(%ebp)
0860b722 +0x0c:  mov    0xc(%ebp),%eax
0860b725 +0x0f:  mov    %eax,-0x10(%ebp)
0860b728 +0x12:  mov    0x10(%ebp),%eax
0860b72b +0x15:  mov    %eax,-0xc(%ebp)
0860b72e +0x18:  movl   $0xc,0x8(%esp)
0860b736 +0x20:  lea    -0x14(%ebp),%eax
0860b739 +0x23:  mov    %eax,0x4(%esp)
0860b73d +0x27:  movl   $0x39,(%esp)
0860b744 +0x2e:  call   0860b92e <_ZN10Statistics10SendSignalEiPvi>  ; Statistics::SendSignal(int, void*, int)
0860b749 +0x33:  leave
0860b74a +0x34:  ret
0860b74b +0x35:  nop
```

## 反编译 C

```c
// Statistics::UseCoin @ 0x860b716

/* Statistics::UseCoin(unsigned int, unsigned int, int) */

void Statistics::UseCoin(uint param_1,uint param_2,int param_3)

{
  uint local_18;
  uint local_14;
  int local_10;
  
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  SendSignal(0x39,&local_18,0xc);
  return;
}
```
