# closeGeolocation

`_ZN19RestrictGeolocation16closeGeolocationEv`

`RestrictGeolocation::closeGeolocation()`

| 类 | 地址 |
|---|---|
| `RestrictGeolocation` | `0x08170a88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08170a88  _ZN19RestrictGeolocation16closeGeolocationEv
#           RestrictGeolocation::closeGeolocation()
# range [0x08170a88, 0x08170a9d]
08170a88 +0x00:  push   %ebp
08170a89 +0x01:  mov    %esp,%ebp
08170a8b +0x03:  sub    $0x18,%esp
08170a8e +0x06:  mov    0x8(%ebp),%eax
08170a91 +0x09:  mov    (%eax),%eax
08170a93 +0x0b:  mov    %eax,(%esp)
08170a96 +0x0e:  call   0807dba0 <_init+0x498>
08170a9b +0x13:  leave
08170a9c +0x14:  ret
08170a9d +0x15:  nop
```

## 反编译 C

```c
// RestrictGeolocation::closeGeolocation @ 0x8170a88

/* RestrictGeolocation::closeGeolocation() */

void __thiscall RestrictGeolocation::closeGeolocation(RestrictGeolocation *this)

{
  GeoIP_delete(*(undefined4 *)this);
  return;
}
```
