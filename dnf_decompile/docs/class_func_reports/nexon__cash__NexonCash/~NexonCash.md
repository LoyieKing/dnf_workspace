# ~NexonCash

`_ZN5nexon4cash9NexonCashD1Ev`

`nexon::cash::NexonCash::~NexonCash()`

| 类 | 地址 |
|---|---|
| `nexon::cash::NexonCash` | `0x081ae242` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ae242  _ZN5nexon4cash9NexonCashD1Ev
#           nexon::cash::NexonCash::~NexonCash()
# range [0x081ae242, 0x081ae257]
081ae242 +0x00:  push   %ebp
081ae243 +0x01:  mov    %esp,%ebp
081ae245 +0x03:  sub    $0x18,%esp
081ae248 +0x06:  mov    0x8(%ebp),%eax
081ae24b +0x09:  mov    (%eax),%eax
081ae24d +0x0b:  mov    %eax,(%esp)
081ae250 +0x0e:  call   0807ddb0 <_init+0x6a8>
081ae255 +0x13:  leave
081ae256 +0x14:  ret
081ae257 +0x15:  nop
```

## 反编译 C

```c
// nexon::cash::NexonCash::~NexonCash @ 0x81ae242

/* nexon::cash::NexonCash::~NexonCash() */

void __thiscall nexon::cash::NexonCash::~NexonCash(NexonCash *this)

{
  free(*(void **)this);
  return;
}
```
