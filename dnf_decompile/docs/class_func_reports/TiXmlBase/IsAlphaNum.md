# IsAlphaNum

`_ZN9TiXmlBase10IsAlphaNumEh13TiXmlEncoding`

`TiXmlBase::IsAlphaNum(unsigned char, TiXmlEncoding)`

| 类 | 地址 |
|---|---|
| `TiXmlBase` | `0x087e6230` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e6230  _ZN9TiXmlBase10IsAlphaNumEh13TiXmlEncoding
#           TiXmlBase::IsAlphaNum(unsigned char, TiXmlEncoding)
# range [0x087e6230, 0x087e6259]
087e6230 +0x00:  push   %ebp
087e6231 +0x01:  mov    %esp,%ebp
087e6233 +0x03:  sub    $0x8,%esp
087e6236 +0x06:  movzbl 0x8(%ebp),%eax
087e623a +0x0a:  cmp    $0x7e,%al
087e623c +0x0c:  ja     087e6250 <+0x20>
087e623e +0x0e:  movzbl %al,%eax
087e6241 +0x11:  mov    %eax,0x8(%ebp)
087e6244 +0x14:  leave
087e6245 +0x15:  jmp    0807dc20 <_init+0x518>
087e624a +0x1a:  lea    0x0(%esi),%esi
087e6250 +0x20:  mov    $0x1,%eax
087e6255 +0x25:  leave
087e6256 +0x26:  ret
087e6257 +0x27:  nop
087e6258 +0x28:  nop
087e6259 +0x29:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlBase::IsAlphaNum @ 0x87e6230

/* TiXmlBase::IsAlphaNum(unsigned char, TiXmlEncoding) */

int TiXmlBase::IsAlphaNum(byte param_1)

{
  int iVar1;
  
  if (param_1 < 0x7f) {
    iVar1 = isalnum((uint)param_1);
    return iVar1;
  }
  return 1;
}
```
