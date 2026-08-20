# IsAlpha

`_ZN9TiXmlBase7IsAlphaEh13TiXmlEncoding`

`TiXmlBase::IsAlpha(unsigned char, TiXmlEncoding)`

| 类 | 地址 |
|---|---|
| `TiXmlBase` | `0x087e6260` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e6260  _ZN9TiXmlBase7IsAlphaEh13TiXmlEncoding
#           TiXmlBase::IsAlpha(unsigned char, TiXmlEncoding)
# range [0x087e6260, 0x087e6289]
087e6260 +0x00:  push   %ebp
087e6261 +0x01:  mov    %esp,%ebp
087e6263 +0x03:  sub    $0x8,%esp
087e6266 +0x06:  movzbl 0x8(%ebp),%eax
087e626a +0x0a:  cmp    $0x7e,%al
087e626c +0x0c:  ja     087e6280 <+0x20>
087e626e +0x0e:  movzbl %al,%eax
087e6271 +0x11:  mov    %eax,0x8(%ebp)
087e6274 +0x14:  leave
087e6275 +0x15:  jmp    0807e4f0 <_init+0xde8>
087e627a +0x1a:  lea    0x0(%esi),%esi
087e6280 +0x20:  mov    $0x1,%eax
087e6285 +0x25:  leave
087e6286 +0x26:  ret
087e6287 +0x27:  nop
087e6288 +0x28:  nop
087e6289 +0x29:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlBase::IsAlpha @ 0x87e6260

/* TiXmlBase::IsAlpha(unsigned char, TiXmlEncoding) */

int TiXmlBase::IsAlpha(byte param_1)

{
  int iVar1;
  
  if (param_1 < 0x7f) {
    iVar1 = isalpha((uint)param_1);
    return iVar1;
  }
  return 1;
}
```
