# GetPremiumInfo

`_ZNK8WongWork12CUserPremium14GetPremiumInfoEi`

`WongWork::CUserPremium::GetPremiumInfo(int) const`

| 类 | 地址 |
|---|---|
| `WongWork::CUserPremium` | `0x086adf52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086adf52  _ZNK8WongWork12CUserPremium14GetPremiumInfoEi
#           WongWork::CUserPremium::GetPremiumInfo(int) const
# range [0x086adf52, 0x086adf7b]
086adf52 +0x00:  push   %ebp
086adf53 +0x01:  mov    %esp,%ebp
086adf55 +0x03:  cmpl   $0x69,0xc(%ebp)
086adf59 +0x07:  jg     086adf64 <+0x12>
086adf5b +0x09:  cmpl   $0x270f,0xc(%ebp)
086adf62 +0x10:  jne    086adf69 <+0x17>
086adf64 +0x12:  mov    0x8(%ebp),%eax
086adf67 +0x15:  jmp    086adf79 <+0x27>
086adf69 +0x17:  mov    0xc(%ebp),%edx
086adf6c +0x1a:  mov    %edx,%eax
086adf6e +0x1c:  shl    $0x2,%eax
086adf71 +0x1f:  add    %edx,%eax
086adf73 +0x21:  shl    $0x2,%eax
086adf76 +0x24:  add    0x8(%ebp),%eax
086adf79 +0x27:  pop    %ebp
086adf7a +0x28:  ret
086adf7b +0x29:  nop
```

## 反编译 C

```c
// WongWork::CUserPremium::GetPremiumInfo @ 0x86adf52

/* WongWork::CUserPremium::GetPremiumInfo(int) const */

CUserPremium * __thiscall WongWork::CUserPremium::GetPremiumInfo(CUserPremium *this,int param_1)

{
  if ((param_1 < 0x6a) && (param_1 != 9999)) {
    this = this + param_1 * 0x14;
  }
  return this;
}
```
