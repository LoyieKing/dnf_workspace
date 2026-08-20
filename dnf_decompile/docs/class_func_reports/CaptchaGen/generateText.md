# generateText

`_ZN10CaptchaGen12generateTextE11CountryCodeiPt`

`CaptchaGen::generateText(CountryCode, int, unsigned short*)`

| 类 | 地址 |
|---|---|
| `CaptchaGen` | `0x080de83c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080de83c  _ZN10CaptchaGen12generateTextE11CountryCodeiPt
#           CaptchaGen::generateText(CountryCode, int, unsigned short*)
# range [0x080de83c, 0x080de987]
080de83c +0x000:  push   %ebp
080de83d +0x001:  mov    %esp,%ebp
080de83f +0x003:  push   %ebx
080de840 +0x004:  sub    $0x24,%esp
080de843 +0x007:  movzbl &_ZN11CountryCode5koreaE,%eax
080de84a +0x00e:  mov    %al,0x4(%esp)
080de84e +0x012:  lea    0xc(%ebp),%eax
080de851 +0x015:  mov    %eax,(%esp)
080de854 +0x018:  call   08ad332e <_ZNK11CountryCodeeqES_>  ; CountryCode::operator==(CountryCode) const
080de859 +0x01d:  test   %al,%al
080de85b +0x01f:  je     080de8b0 <+0x74>
080de85d +0x021:  movl   $0x0,-0x14(%ebp)
080de864 +0x028:  jmp    080de89e <+0x62>
080de866 +0x02a:  mov    -0x14(%ebp),%eax
080de869 +0x02d:  add    %eax,%eax
080de86b +0x02f:  mov    %eax,%ebx
080de86d +0x031:  add    0x14(%ebp),%ebx
080de870 +0x034:  mov    0x8(%ebp),%eax
080de873 +0x037:  add    $0x10,%eax
080de876 +0x03a:  mov    %eax,(%esp)
080de879 +0x03d:  call   08adfb3c <_ZN8XorRand4clEv>  ; XorRand4::operator()()
080de87e +0x042:  mov    &_ZN10CaptchaGen19kKoreanGeneralCountE,%edx
080de884 +0x048:  mov    %edx,%ecx
080de886 +0x04a:  mov    $0x0,%edx
080de88b +0x04f:  div    %ecx
080de88d +0x051:  mov    %edx,%eax
080de88f +0x053:  movzwl &_ZN10CaptchaGen14kKoreanGeneralE(%eax,%eax,1),%eax
080de897 +0x05b:  mov    %ax,(%ebx)
080de89a +0x05e:  addl   $0x1,-0x14(%ebp)
080de89e +0x062:  mov    -0x14(%ebp),%eax
080de8a1 +0x065:  cmp    0x10(%ebp),%eax
080de8a4 +0x068:  setl   %al
080de8a7 +0x06b:  test   %al,%al
080de8a9 +0x06d:  jne    080de866 <+0x2a>
080de8ab +0x06f:  jmp    080de982 <+0x146>
080de8b0 +0x074:  movzbl &_ZN11CountryCode5japanE,%eax
080de8b7 +0x07b:  mov    %al,0x4(%esp)
080de8bb +0x07f:  lea    0xc(%ebp),%eax
080de8be +0x082:  mov    %eax,(%esp)
080de8c1 +0x085:  call   08ad332e <_ZNK11CountryCodeeqES_>  ; CountryCode::operator==(CountryCode) const
080de8c6 +0x08a:  test   %al,%al
080de8c8 +0x08c:  je     080de91a <+0xde>
080de8ca +0x08e:  movl   $0x0,-0x10(%ebp)
080de8d1 +0x095:  jmp    080de90b <+0xcf>
080de8d3 +0x097:  mov    -0x10(%ebp),%eax
080de8d6 +0x09a:  add    %eax,%eax
080de8d8 +0x09c:  mov    %eax,%ebx
080de8da +0x09e:  add    0x14(%ebp),%ebx
080de8dd +0x0a1:  mov    0x8(%ebp),%eax
080de8e0 +0x0a4:  add    $0x10,%eax
080de8e3 +0x0a7:  mov    %eax,(%esp)
080de8e6 +0x0aa:  call   08adfb3c <_ZN8XorRand4clEv>  ; XorRand4::operator()()
080de8eb +0x0af:  mov    &_ZN10CaptchaGen22kJapaneseHirakanaCountE,%edx
080de8f1 +0x0b5:  mov    %edx,%ecx
080de8f3 +0x0b7:  mov    $0x0,%edx
080de8f8 +0x0bc:  div    %ecx
080de8fa +0x0be:  mov    %edx,%eax
080de8fc +0x0c0:  movzwl &_ZN10CaptchaGen17kJapaneseHirakanaE(%eax,%eax,1),%eax
080de904 +0x0c8:  mov    %ax,(%ebx)
080de907 +0x0cb:  addl   $0x1,-0x10(%ebp)
080de90b +0x0cf:  mov    -0x10(%ebp),%eax
080de90e +0x0d2:  cmp    0x10(%ebp),%eax
080de911 +0x0d5:  setl   %al
080de914 +0x0d8:  test   %al,%al
080de916 +0x0da:  jne    080de8d3 <+0x97>
080de918 +0x0dc:  jmp    080de982 <+0x146>
080de91a +0x0de:  movzbl &_ZN11CountryCode6taiwanE,%eax
080de921 +0x0e5:  mov    %al,0x4(%esp)
080de925 +0x0e9:  lea    0xc(%ebp),%eax
080de928 +0x0ec:  mov    %eax,(%esp)
080de92b +0x0ef:  call   08ad332e <_ZNK11CountryCodeeqES_>  ; CountryCode::operator==(CountryCode) const
080de930 +0x0f4:  test   %al,%al
080de932 +0x0f6:  je     080de982 <+0x146>
080de934 +0x0f8:  movl   $0x0,-0xc(%ebp)
080de93b +0x0ff:  jmp    080de975 <+0x139>
080de93d +0x101:  mov    -0xc(%ebp),%eax
080de940 +0x104:  add    %eax,%eax
080de942 +0x106:  mov    %eax,%ebx
080de944 +0x108:  add    0x14(%ebp),%ebx
080de947 +0x10b:  mov    0x8(%ebp),%eax
080de94a +0x10e:  add    $0x10,%eax
080de94d +0x111:  mov    %eax,(%esp)
080de950 +0x114:  call   08adfb3c <_ZN8XorRand4clEv>  ; XorRand4::operator()()
080de955 +0x119:  mov    &_ZN10CaptchaGen20kTaiwanAlphabetCountE,%edx
080de95b +0x11f:  mov    %edx,%ecx
080de95d +0x121:  mov    $0x0,%edx
080de962 +0x126:  div    %ecx
080de964 +0x128:  mov    %edx,%eax
080de966 +0x12a:  movzwl &_ZN10CaptchaGen15kTaiwanAlphabetE(%eax,%eax,1),%eax
080de96e +0x132:  mov    %ax,(%ebx)
080de971 +0x135:  addl   $0x1,-0xc(%ebp)
080de975 +0x139:  mov    -0xc(%ebp),%eax
080de978 +0x13c:  cmp    0x10(%ebp),%eax
080de97b +0x13f:  setl   %al
080de97e +0x142:  test   %al,%al
080de980 +0x144:  jne    080de93d <+0x101>
080de982 +0x146:  add    $0x24,%esp
080de985 +0x149:  pop    %ebx
080de986 +0x14a:  pop    %ebp
080de987 +0x14b:  ret
```

## 反编译 C

```c
// CaptchaGen::generateText @ 0x80de83c

/* CaptchaGen::generateText(CountryCode, int, unsigned short*) */

void __thiscall
CaptchaGen::generateText(CaptchaGen *this,CountryCode *param_1,int param_2,ushort *param_3)

{
  bool bVar1;
  uint32 uVar2;
  ushort *puVar3;
  int local_18;
  int local_14;
  int local_10;
  
  bVar1 = CountryCode::operator==((CountryCode *)&param_1,CountryCode::korea);
  if (bVar1) {
    for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
      puVar3 = param_3 + local_18;
      uVar2 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      *puVar3 = *(ushort *)(kKoreanGeneral + (uVar2 % kKoreanGeneralCount) * 2);
    }
  }
  else {
    bVar1 = CountryCode::operator==((CountryCode *)&param_1,CountryCode::japan);
    if (bVar1) {
      for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
        puVar3 = param_3 + local_14;
        uVar2 = XorRand4::operator()((XorRand4 *)(this + 0x10));
        *puVar3 = *(ushort *)(kJapaneseHirakana + (uVar2 % kJapaneseHirakanaCount) * 2);
      }
    }
    else {
      bVar1 = CountryCode::operator==((CountryCode *)&param_1,CountryCode::taiwan);
      if (bVar1) {
        for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
          puVar3 = param_3 + local_10;
          uVar2 = XorRand4::operator()((XorRand4 *)(this + 0x10));
          *puVar3 = *(ushort *)(kTaiwanAlphabet + (uVar2 % kTaiwanAlphabetCount) * 2);
        }
      }
    }
  }
  return;
}
```
