# confirm

`_ZN5nexon4cash9NexonCash7confirmERKNS0_13NXTransactionE`

`nexon::cash::NexonCash::confirm(nexon::cash::NXTransaction const&)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NexonCash` | `0x081ae390` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ae390  _ZN5nexon4cash9NexonCash7confirmERKNS0_13NXTransactionE
#           nexon::cash::NexonCash::confirm(nexon::cash::NXTransaction const&)
# range [0x081ae390, 0x081ae3bb]
081ae390 +0x00:  push   %ebp
081ae391 +0x01:  mov    %esp,%ebp
081ae393 +0x03:  sub    $0x18,%esp
081ae396 +0x06:  mov    0xc(%ebp),%eax
081ae399 +0x09:  mov    0x4(%eax),%ecx
081ae39c +0x0c:  mov    0xc(%ebp),%eax
081ae39f +0x0f:  movzbl (%eax),%eax
081ae3a2 +0x12:  movzbl %al,%edx
081ae3a5 +0x15:  mov    0x8(%ebp),%eax
081ae3a8 +0x18:  mov    (%eax),%eax
081ae3aa +0x1a:  mov    %ecx,0x8(%esp)
081ae3ae +0x1e:  mov    %edx,0x4(%esp)
081ae3b2 +0x22:  mov    %eax,(%esp)
081ae3b5 +0x25:  call   081adbd4 <_ZN5nexon4cash9NCashImpl7confirmEhj>  ; nexon::cash::NCashImpl::confirm(unsigned char, unsigned int)
081ae3ba +0x2a:  leave
081ae3bb +0x2b:  ret
```

## 反编译 C

```c
// nexon::cash::NexonCash::confirm @ 0x81ae390

/* nexon::cash::NexonCash::confirm(nexon::cash::NXTransaction const&) */

void __thiscall nexon::cash::NexonCash::confirm(NexonCash *this,NXTransaction *param_1)

{
  NCashImpl::confirm(*(NCashImpl **)this,(uchar)*param_1,*(uint *)(param_1 + 4));
  return;
}
```
