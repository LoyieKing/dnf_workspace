# IsRestrictedPremium

`_ZN8WongWork12CUserPremium19IsRestrictedPremiumEi`

`WongWork::CUserPremium::IsRestrictedPremium(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CUserPremium` | `0x086af7c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086af7c4  _ZN8WongWork12CUserPremium19IsRestrictedPremiumEi
#           WongWork::CUserPremium::IsRestrictedPremium(int)
# range [0x086af7c4, 0x086af7e7]
086af7c4 +0x00:  push   %ebp
086af7c5 +0x01:  mov    %esp,%ebp
086af7c7 +0x03:  cmpl   $0xea5f,0x8(%ebp)
086af7ce +0x0a:  jle    086af7e0 <+0x1c>
086af7d0 +0x0c:  cmpl   $&_ZL14gUnicodeBuffer+0x6c43,0x8(%ebp)
086af7d7 +0x13:  jg     086af7e0 <+0x1c>
086af7d9 +0x15:  mov    $0x1,%eax
086af7de +0x1a:  jmp    086af7e5 <+0x21>
086af7e0 +0x1c:  mov    $0x0,%eax
086af7e5 +0x21:  pop    %ebp
086af7e6 +0x22:  ret
086af7e7 +0x23:  nop
```

## 反编译 C

```c
// WongWork::CUserPremium::IsRestrictedPremium @ 0x86af7c4

/* WongWork::CUserPremium::IsRestrictedPremium(int) */

undefined4 WongWork::CUserPremium::IsRestrictedPremium(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 60000) || (69999 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
