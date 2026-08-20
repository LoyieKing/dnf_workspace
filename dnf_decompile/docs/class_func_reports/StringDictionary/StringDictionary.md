# StringDictionary

`_ZN16StringDictionaryC1Ev`

`StringDictionary::StringDictionary()`

| 类 | 地址 |
|---|---|
| `StringDictionary` | `0x08ab2240` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab2240  _ZN16StringDictionaryC1Ev
#           StringDictionary::StringDictionary()
# range [0x08ab2240, 0x08ab22b9]
08ab2240 +0x00:  push   %ebp
08ab2241 +0x01:  mov    %esp,%ebp
08ab2243 +0x03:  push   %esi
08ab2244 +0x04:  push   %ebx
08ab2245 +0x05:  sub    $0x10,%esp
08ab2248 +0x08:  mov    0x8(%ebp),%eax
08ab224b +0x0b:  mov    %eax,(%esp)
08ab224e +0x0e:  call   08ab2856 <_ZN16StringDictionary9addStringEPKc+0xe4>  ; StringDictionary::addString(char const*)+0xe4
08ab2253 +0x13:  mov    0x8(%ebp),%eax
08ab2256 +0x16:  movl   $0x0,0xc(%eax)
08ab225d +0x1d:  mov    0x8(%ebp),%eax
08ab2260 +0x20:  movl   $0x0,0x10(%eax)
08ab2267 +0x27:  mov    0x8(%ebp),%eax
08ab226a +0x2a:  add    $0x14,%eax
08ab226d +0x2d:  mov    %eax,(%esp)
08ab2270 +0x30:  call   08ab28c8 <_ZN16StringDictionary9addStringEPKc+0x156>  ; StringDictionary::addString(char const*)+0x156
08ab2275 +0x35:  mov    0x8(%ebp),%eax
08ab2278 +0x38:  add    $0x20,%eax
08ab227b +0x3b:  mov    %eax,%ebx
08ab227d +0x3d:  mov    $0x100,%esi
08ab2282 +0x42:  jmp    08ab2292 <+0x52>
08ab2284 +0x44:  mov    %ebx,(%esp)
08ab2287 +0x47:  call   08ab293a <_ZN16StringDictionary9addStringEPKc+0x1c8>  ; StringDictionary::addString(char const*)+0x1c8
08ab228c +0x4c:  add    $0x4,%ebx
08ab228f +0x4f:  sub    $0x1,%esi
08ab2292 +0x52:  cmp    $0xffffffff,%esi
08ab2295 +0x55:  setne  %al
08ab2298 +0x58:  test   %al,%al
08ab229a +0x5a:  jne    08ab2284 <+0x44>
08ab229c +0x5c:  add    $0x10,%esp
08ab229f +0x5f:  pop    %ebx
08ab22a0 +0x60:  pop    %esi
08ab22a1 +0x61:  pop    %ebp
08ab22a2 +0x62:  ret
08ab22a3 +0x63:  mov    %edx,%ebx
08ab22a5 +0x65:  mov    %eax,%esi
08ab22a7 +0x67:  mov    0x8(%ebp),%eax
08ab22aa +0x6a:  mov    %eax,(%esp)
08ab22ad +0x6d:  call   08ab286a <_ZN16StringDictionary9addStringEPKc+0xf8>  ; StringDictionary::addString(char const*)+0xf8
08ab22b2 +0x72:  mov    %esi,%eax
08ab22b4 +0x74:  mov    %ebx,%edx
08ab22b6 +0x76:  mov    %eax,(%esp)
08ab22b9 +0x79:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// StringDictionary::StringDictionary @ 0x8ab2240

/* StringDictionary::StringDictionary() */

void __thiscall StringDictionary::StringDictionary(StringDictionary *this)

{
  __normal_iterator<StringDictionary::StringEntity*,std::vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>>
  *this_00;
  int iVar1;
  
  std::vector<unsigned_char*,std::allocator<unsigned_char*>>::vector
            ((vector<unsigned_char*,std::allocator<unsigned_char*>> *)this);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
                    /* try { // try from 08ab2270 to 08ab2274 has its CatchHandler @ 08ab22a3 */
  std::vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>::vector
            ((vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>
              *)(this + 0x14));
  this_00 = (__normal_iterator<StringDictionary::StringEntity*,std::vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>>
             *)(this + 0x20);
  for (iVar1 = 0x100; iVar1 != -1; iVar1 = iVar1 + -1) {
    __gnu_cxx::
    __normal_iterator<StringDictionary::StringEntity*,std::vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>>
    ::__normal_iterator(this_00);
    this_00 = this_00 + 4;
  }
  return;
}
```
