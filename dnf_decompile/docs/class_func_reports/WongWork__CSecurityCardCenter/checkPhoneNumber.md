# checkPhoneNumber

`_ZNK8WongWork19CSecurityCardCenter16checkPhoneNumberEPKc`

`WongWork::CSecurityCardCenter::checkPhoneNumber(char const*) const`

| 类 | 地址 |
|---|---|
| `WongWork::CSecurityCardCenter` | `0x085fe444` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fe444  _ZNK8WongWork19CSecurityCardCenter16checkPhoneNumberEPKc
#           WongWork::CSecurityCardCenter::checkPhoneNumber(char const*) const
# range [0x085fe444, 0x085fe495]
085fe444 +0x00:  push   %ebp
085fe445 +0x01:  mov    %esp,%ebp
085fe447 +0x03:  sub    $0x10,%esp
085fe44a +0x06:  movl   $0x0,-0x4(%ebp)
085fe451 +0x0d:  jmp    085fe47f <+0x3b>
085fe453 +0x0f:  mov    -0x4(%ebp),%eax
085fe456 +0x12:  add    0xc(%ebp),%eax
085fe459 +0x15:  movzbl (%eax),%eax
085fe45c +0x18:  test   %al,%al
085fe45e +0x1a:  je     085fe48e <+0x4a>
085fe460 +0x1c:  mov    -0x4(%ebp),%eax
085fe463 +0x1f:  add    0xc(%ebp),%eax
085fe466 +0x22:  movzbl (%eax),%eax
085fe469 +0x25:  movsbl %al,%eax
085fe46c +0x28:  sub    $0x30,%eax
085fe46f +0x2b:  cmp    $0x9,%eax
085fe472 +0x2e:  jbe    085fe47b <+0x37>
085fe474 +0x30:  mov    $0x0,%eax
085fe479 +0x35:  jmp    085fe494 <+0x50>
085fe47b +0x37:  addl   $0x1,-0x4(%ebp)
085fe47f +0x3b:  mov    -0x4(%ebp),%eax
085fe482 +0x3e:  cmp    $0xb,%eax
085fe485 +0x41:  setbe  %al
085fe488 +0x44:  test   %al,%al
085fe48a +0x46:  jne    085fe453 <+0xf>
085fe48c +0x48:  jmp    085fe48f <+0x4b>
085fe48e +0x4a:  nop
085fe48f +0x4b:  mov    $0x1,%eax
085fe494 +0x50:  leave
085fe495 +0x51:  ret
```

## 反编译 C

```c
// WongWork::CSecurityCardCenter::checkPhoneNumber @ 0x85fe444

/* WongWork::CSecurityCardCenter::checkPhoneNumber(char const*) const */

undefined4 __thiscall
WongWork::CSecurityCardCenter::checkPhoneNumber(CSecurityCardCenter *this,char *param_1)

{
  uint local_8;
  
  for (local_8 = 0; (local_8 < 0xc && (param_1[local_8] != '\0')); local_8 = local_8 + 1) {
    if (9 < (int)param_1[local_8] - 0x30U) {
      return 0;
    }
  }
  return 1;
}
```
