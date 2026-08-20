# cancel

`_ZN5nexon4cash9NexonCash6cancelERKNS0_13NXTransactionE`

`nexon::cash::NexonCash::cancel(nexon::cash::NXTransaction const&)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NexonCash` | `0x081ae3bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ae3bc  _ZN5nexon4cash9NexonCash6cancelERKNS0_13NXTransactionE
#           nexon::cash::NexonCash::cancel(nexon::cash::NXTransaction const&)
# range [0x081ae3bc, 0x081ae3e7]
081ae3bc +0x00:  push   %ebp
081ae3bd +0x01:  mov    %esp,%ebp
081ae3bf +0x03:  sub    $0x18,%esp
081ae3c2 +0x06:  mov    0xc(%ebp),%eax
081ae3c5 +0x09:  mov    0x4(%eax),%ecx
081ae3c8 +0x0c:  mov    0xc(%ebp),%eax
081ae3cb +0x0f:  movzbl (%eax),%eax
081ae3ce +0x12:  movzbl %al,%edx
081ae3d1 +0x15:  mov    0x8(%ebp),%eax
081ae3d4 +0x18:  mov    (%eax),%eax
081ae3d6 +0x1a:  mov    %ecx,0x8(%esp)
081ae3da +0x1e:  mov    %edx,0x4(%esp)
081ae3de +0x22:  mov    %eax,(%esp)
081ae3e1 +0x25:  call   081add04 <_ZN5nexon4cash9NCashImpl6cancelEhj>  ; nexon::cash::NCashImpl::cancel(unsigned char, unsigned int)
081ae3e6 +0x2a:  leave
081ae3e7 +0x2b:  ret
```

## 反编译 C

```c
// nexon::cash::NexonCash::cancel @ 0x81ae3bc

/* nexon::cash::NexonCash::cancel(nexon::cash::NXTransaction const&) */

void __thiscall nexon::cash::NexonCash::cancel(NexonCash *this,NXTransaction *param_1)

{
  NCashImpl::cancel(*(NCashImpl **)this,(uchar)*param_1,*(uint *)(param_1 + 4));
  return;
}
```
