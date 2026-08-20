# getBalance

`_ZN5nexon4cash9NexonCash10getBalanceEPKcRi`

`nexon::cash::NexonCash::getBalance(char const*, int&)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NexonCash` | `0x081ae258` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ae258  _ZN5nexon4cash9NexonCash10getBalanceEPKcRi
#           nexon::cash::NexonCash::getBalance(char const*, int&)
# range [0x081ae258, 0x081ae27b]
081ae258 +0x00:  push   %ebp
081ae259 +0x01:  mov    %esp,%ebp
081ae25b +0x03:  sub    $0x18,%esp
081ae25e +0x06:  mov    0x8(%ebp),%eax
081ae261 +0x09:  mov    (%eax),%eax
081ae263 +0x0b:  mov    0x10(%ebp),%edx
081ae266 +0x0e:  mov    %edx,0x8(%esp)
081ae26a +0x12:  mov    0xc(%ebp),%edx
081ae26d +0x15:  mov    %edx,0x4(%esp)
081ae271 +0x19:  mov    %eax,(%esp)
081ae274 +0x1c:  call   081ad49e <_ZN5nexon4cash9NCashImpl10getBalanceEPKcRi>  ; nexon::cash::NCashImpl::getBalance(char const*, int&)
081ae279 +0x21:  leave
081ae27a +0x22:  ret
081ae27b +0x23:  nop
```

## 反编译 C

```c
// nexon::cash::NexonCash::getBalance @ 0x81ae258

/* nexon::cash::NexonCash::getBalance(char const*, int&) */

void __thiscall nexon::cash::NexonCash::getBalance(NexonCash *this,char *param_1,int *param_2)

{
  NCashImpl::getBalance(*(NCashImpl **)this,param_1,param_2);
  return;
}
```
