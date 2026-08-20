# _M_convert_to_wmask

`_ZNKSt5ctypeIwE19_M_convert_to_wmaskEt`

`std::ctype<wchar_t>::_M_convert_to_wmask(unsigned short) const`

| 类 | 地址 |
|---|---|
| `std::ctype<wchar_t>` | `0x0872f0f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0872f0f0  _ZNKSt5ctypeIwE19_M_convert_to_wmaskEt
#           std::ctype<wchar_t>::_M_convert_to_wmask(unsigned short) const
# range [0x0872f0f0, 0x0872f25f]
0872f0f0 +0x000:  push   %ebp
0872f0f1 +0x001:  mov    %esp,%ebp
0872f0f3 +0x003:  sub    $0x8,%esp
0872f0f6 +0x006:  movzwl 0xc(%ebp),%eax
0872f0fa +0x00a:  mov    0x8(%ebp),%edx
0872f0fd +0x00d:  cmp    $0x800,%ax
0872f101 +0x011:  je     0872f248 <+0x158>
0872f107 +0x017:  jbe    0872f130 <+0x40>
0872f109 +0x019:  cmp    $0x1000,%ax
0872f10d +0x01d:  je     0872f218 <+0x128>
0872f113 +0x023:  ja     0872f160 <+0x70>
0872f115 +0x025:  cmp    $0xc00,%ax
0872f119 +0x029:  je     0872f1e8 <+0xf8>
0872f11f +0x02f:  cmp    $0xc04,%ax
0872f123 +0x033:  je     0872f1d0 <+0xe0>
0872f129 +0x039:  xor    %eax,%eax
0872f12b +0x03b:  leave
0872f12c +0x03c:  ret
0872f12d +0x03d:  lea    0x0(%esi),%esi
0872f130 +0x040:  cmp    $0x100,%ax
0872f134 +0x044:  je     0872f230 <+0x140>
0872f13a +0x04a:  jbe    0872f180 <+0x90>
0872f13c +0x04c:  cmp    $0x200,%ax
0872f140 +0x050:  je     0872f200 <+0x110>
0872f146 +0x056:  cmp    $0x400,%ax
0872f14a +0x05a:  jne    0872f129 <+0x39>
0872f14c +0x05c:  mov    0x8(%edx),%eax
0872f14f +0x05f:  movl   $"alpha",0x8(%ebp)
0872f156 +0x066:  mov    %eax,0xc(%ebp)
0872f159 +0x069:  leave
0872f15a +0x06a:  jmp    0807db50 <_init+0x448>
0872f15f +0x06f:  nop
0872f160 +0x070:  cmp    $0x2000,%ax
0872f164 +0x074:  je     0872f1a0 <+0xb0>
0872f166 +0x076:  cmp    $0x4000,%ax
0872f16a +0x07a:  jne    0872f129 <+0x39>
0872f16c +0x07c:  mov    0x8(%edx),%eax
0872f16f +0x07f:  movl   $"print",0x8(%ebp)
0872f176 +0x086:  mov    %eax,0xc(%ebp)
0872f179 +0x089:  leave
0872f17a +0x08a:  jmp    0807db50 <_init+0x448>
0872f17f +0x08f:  nop
0872f180 +0x090:  cmp    $0x2,%ax
0872f184 +0x094:  je     0872f1b8 <+0xc8>
0872f186 +0x096:  cmp    $0x4,%ax
0872f18a +0x09a:  jne    0872f129 <+0x39>
0872f18c +0x09c:  mov    0x8(%edx),%eax
0872f18f +0x09f:  movl   $"punct",0x8(%ebp)
0872f196 +0x0a6:  mov    %eax,0xc(%ebp)
0872f199 +0x0a9:  leave
0872f19a +0x0aa:  jmp    0807db50 <_init+0x448>
0872f19f +0x0af:  nop
0872f1a0 +0x0b0:  mov    0x8(%edx),%eax
0872f1a3 +0x0b3:  movl   $"space",0x8(%ebp)
0872f1aa +0x0ba:  mov    %eax,0xc(%ebp)
0872f1ad +0x0bd:  leave
0872f1ae +0x0be:  jmp    0807db50 <_init+0x448>
0872f1b3 +0x0c3:  nop
0872f1b4 +0x0c4:  lea    0x0(%esi,%eiz,1),%esi
0872f1b8 +0x0c8:  mov    0x8(%edx),%eax
0872f1bb +0x0cb:  movl   $"cntrl",0x8(%ebp)
0872f1c2 +0x0d2:  mov    %eax,0xc(%ebp)
0872f1c5 +0x0d5:  leave
0872f1c6 +0x0d6:  jmp    0807db50 <_init+0x448>
0872f1cb +0x0db:  nop
0872f1cc +0x0dc:  lea    0x0(%esi,%eiz,1),%esi
0872f1d0 +0x0e0:  mov    0x8(%edx),%eax
0872f1d3 +0x0e3:  movl   $"graph",0x8(%ebp)
0872f1da +0x0ea:  mov    %eax,0xc(%ebp)
0872f1dd +0x0ed:  leave
0872f1de +0x0ee:  jmp    0807db50 <_init+0x448>
0872f1e3 +0x0f3:  nop
0872f1e4 +0x0f4:  lea    0x0(%esi,%eiz,1),%esi
0872f1e8 +0x0f8:  mov    0x8(%edx),%eax
0872f1eb +0x0fb:  movl   $"alnum",0x8(%ebp)
0872f1f2 +0x102:  mov    %eax,0xc(%ebp)
0872f1f5 +0x105:  leave
0872f1f6 +0x106:  jmp    0807db50 <_init+0x448>
0872f1fb +0x10b:  nop
0872f1fc +0x10c:  lea    0x0(%esi,%eiz,1),%esi
0872f200 +0x110:  mov    0x8(%edx),%eax
0872f203 +0x113:  movl   $"lower",0x8(%ebp)
0872f20a +0x11a:  mov    %eax,0xc(%ebp)
0872f20d +0x11d:  leave
0872f20e +0x11e:  jmp    0807db50 <_init+0x448>
0872f213 +0x123:  nop
0872f214 +0x124:  lea    0x0(%esi,%eiz,1),%esi
0872f218 +0x128:  mov    0x8(%edx),%eax
0872f21b +0x12b:  movl   $"xdigit",0x8(%ebp)
0872f222 +0x132:  mov    %eax,0xc(%ebp)
0872f225 +0x135:  leave
0872f226 +0x136:  jmp    0807db50 <_init+0x448>
0872f22b +0x13b:  nop
0872f22c +0x13c:  lea    0x0(%esi,%eiz,1),%esi
0872f230 +0x140:  mov    0x8(%edx),%eax
0872f233 +0x143:  movl   $"upper",0x8(%ebp)
0872f23a +0x14a:  mov    %eax,0xc(%ebp)
0872f23d +0x14d:  leave
0872f23e +0x14e:  jmp    0807db50 <_init+0x448>
0872f243 +0x153:  nop
0872f244 +0x154:  lea    0x0(%esi,%eiz,1),%esi
0872f248 +0x158:  mov    0x8(%edx),%eax
0872f24b +0x15b:  movl   $"digit",0x8(%ebp)
0872f252 +0x162:  mov    %eax,0xc(%ebp)
0872f255 +0x165:  leave
0872f256 +0x166:  jmp    0807db50 <_init+0x448>
0872f25b +0x16b:  nop
0872f25c +0x16c:  nop
0872f25d +0x16d:  nop
0872f25e +0x16e:  nop
0872f25f +0x16f:  nop
```

## 反编译 C

```c
// std::ctype<wchar_t>::_M_convert_to_wmask @ 0x872f0f0

/* std::ctype<wchar_t>::_M_convert_to_wmask(unsigned short) const */

undefined4 __thiscall std::ctype<wchar_t>::_M_convert_to_wmask(ctype<wchar_t> *this,ushort param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0x800) {
    uVar1 = __wctype_l();
    return uVar1;
  }
  if (param_1 < 0x801) {
    if (param_1 == 0x100) {
      uVar1 = __wctype_l();
      return uVar1;
    }
    if (param_1 < 0x101) {
      if (param_1 == 2) {
        uVar1 = __wctype_l();
        return uVar1;
      }
      if (param_1 == 4) {
        uVar1 = __wctype_l();
        return uVar1;
      }
    }
    else {
      if (param_1 == 0x200) {
        uVar1 = __wctype_l();
        return uVar1;
      }
      if (param_1 == 0x400) {
        uVar1 = __wctype_l();
        return uVar1;
      }
    }
  }
  else {
    if (param_1 == 0x1000) {
      uVar1 = __wctype_l();
      return uVar1;
    }
    if (param_1 < 0x1001) {
      if (param_1 == 0xc00) {
        uVar1 = __wctype_l();
        return uVar1;
      }
      if (param_1 == 0xc04) {
        uVar1 = __wctype_l();
        return uVar1;
      }
    }
    else {
      if (param_1 == 0x2000) {
        uVar1 = __wctype_l();
        return uVar1;
      }
      if (param_1 == 0x4000) {
        uVar1 = __wctype_l();
        return uVar1;
      }
    }
  }
  return 0;
}
```
