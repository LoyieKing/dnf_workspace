# ~StringDictionary

`_ZN16StringDictionaryD1Ev`

`StringDictionary::~StringDictionary()`

| 类 | 地址 |
|---|---|
| `StringDictionary` | `0x08ab22be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab22be  _ZN16StringDictionaryD1Ev
#           StringDictionary::~StringDictionary()
# range [0x08ab22be, 0x08ab2397]
08ab22be +0x00:  push   %ebp
08ab22bf +0x01:  mov    %esp,%ebp
08ab22c1 +0x03:  push   %esi
08ab22c2 +0x04:  push   %ebx
08ab22c3 +0x05:  sub    $0x20,%esp
08ab22c6 +0x08:  mov    0x8(%ebp),%edx
08ab22c9 +0x0b:  lea    -0x10(%ebp),%eax
08ab22cc +0x0e:  mov    %edx,0x4(%esp)
08ab22d0 +0x12:  mov    %eax,(%esp)
08ab22d3 +0x15:  call   08ab2948 <_ZN16StringDictionary9addStringEPKc+0x1d6>  ; StringDictionary::addString(char const*)+0x1d6
08ab22d8 +0x1a:  sub    $0x4,%esp
08ab22db +0x1d:  mov    0x8(%ebp),%edx
08ab22de +0x20:  lea    -0x14(%ebp),%eax
08ab22e1 +0x23:  mov    %edx,0x4(%esp)
08ab22e5 +0x27:  mov    %eax,(%esp)
08ab22e8 +0x2a:  call   08ab296c <_ZN16StringDictionary9addStringEPKc+0x1fa>  ; StringDictionary::addString(char const*)+0x1fa
08ab22ed +0x2f:  sub    $0x4,%esp
08ab22f0 +0x32:  jmp    08ab2328 <+0x6a>
08ab22f2 +0x34:  lea    -0x10(%ebp),%eax
08ab22f5 +0x37:  mov    %eax,(%esp)
08ab22f8 +0x3a:  call   08ab29f2 <_ZN16StringDictionary9addStringEPKc+0x280>  ; StringDictionary::addString(char const*)+0x280
08ab22fd +0x3f:  mov    (%eax),%eax
08ab22ff +0x41:  test   %eax,%eax
08ab2301 +0x43:  je     08ab230b <+0x4d>
08ab2303 +0x45:  mov    %eax,(%esp)
08ab2306 +0x48:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ab230b +0x4d:  lea    -0xc(%ebp),%eax
08ab230e +0x50:  movl   $0x0,0x8(%esp)
08ab2316 +0x58:  lea    -0x10(%ebp),%edx
08ab2319 +0x5b:  mov    %edx,0x4(%esp)
08ab231d +0x5f:  mov    %eax,(%esp)
08ab2320 +0x62:  call   08ab29be <_ZN16StringDictionary9addStringEPKc+0x24c>  ; StringDictionary::addString(char const*)+0x24c
08ab2325 +0x67:  sub    $0x4,%esp
08ab2328 +0x6a:  lea    -0x14(%ebp),%eax
08ab232b +0x6d:  mov    %eax,0x4(%esp)
08ab232f +0x71:  lea    -0x10(%ebp),%eax
08ab2332 +0x74:  mov    %eax,(%esp)
08ab2335 +0x77:  call   08ab2992 <_ZN16StringDictionary9addStringEPKc+0x220>  ; StringDictionary::addString(char const*)+0x220
08ab233a +0x7c:  test   %al,%al
08ab233c +0x7e:  jne    08ab22f2 <+0x34>
08ab233e +0x80:  jmp    08ab2358 <+0x9a>
08ab2340 +0x82:  mov    %edx,%ebx
08ab2342 +0x84:  mov    %eax,%esi
08ab2344 +0x86:  mov    0x8(%ebp),%eax
08ab2347 +0x89:  add    $0x14,%eax
08ab234a +0x8c:  mov    %eax,(%esp)
08ab234d +0x8f:  call   08ab28dc <_ZN16StringDictionary9addStringEPKc+0x16a>  ; StringDictionary::addString(char const*)+0x16a
08ab2352 +0x94:  mov    %esi,%eax
08ab2354 +0x96:  mov    %ebx,%edx
08ab2356 +0x98:  jmp    08ab2368 <+0xaa>
08ab2358 +0x9a:  mov    0x8(%ebp),%eax
08ab235b +0x9d:  add    $0x14,%eax
08ab235e +0xa0:  mov    %eax,(%esp)
08ab2361 +0xa3:  call   08ab28dc <_ZN16StringDictionary9addStringEPKc+0x16a>  ; StringDictionary::addString(char const*)+0x16a
08ab2366 +0xa8:  jmp    08ab2383 <+0xc5>
08ab2368 +0xaa:  mov    %edx,%ebx
08ab236a +0xac:  mov    %eax,%esi
08ab236c +0xae:  mov    0x8(%ebp),%eax
08ab236f +0xb1:  mov    %eax,(%esp)
08ab2372 +0xb4:  call   08ab286a <_ZN16StringDictionary9addStringEPKc+0xf8>  ; StringDictionary::addString(char const*)+0xf8
08ab2377 +0xb9:  mov    %esi,%eax
08ab2379 +0xbb:  mov    %ebx,%edx
08ab237b +0xbd:  mov    %eax,(%esp)
08ab237e +0xc0:  call   08ae3750 <_Unwind_Resume>
08ab2383 +0xc5:  mov    0x8(%ebp),%eax
08ab2386 +0xc8:  mov    %eax,(%esp)
08ab2389 +0xcb:  call   08ab286a <_ZN16StringDictionary9addStringEPKc+0xf8>  ; StringDictionary::addString(char const*)+0xf8
08ab238e +0xd0:  lea    -0x8(%ebp),%esp
08ab2391 +0xd3:  add    $0x0,%esp
08ab2394 +0xd6:  pop    %ebx
08ab2395 +0xd7:  pop    %esi
08ab2396 +0xd8:  pop    %ebp
08ab2397 +0xd9:  ret
```

## 反编译 C

```c
// StringDictionary::~StringDictionary @ 0x8ab22be

/* StringDictionary::~StringDictionary() */

void __thiscall StringDictionary::~StringDictionary(StringDictionary *this)

{
  bool bVar1;
  undefined4 *puVar2;
  __normal_iterator local_18 [4];
  __normal_iterator<unsigned_char**,std::vector<unsigned_char*,std::allocator<unsigned_char*>>>
  local_14 [4];
  __normal_iterator<unsigned_char**,std::vector<unsigned_char*,std::allocator<unsigned_char*>>>
  local_10 [4];
  
                    /* try { // try from 08ab22d3 to 08ab2339 has its CatchHandler @ 08ab2340 */
  std::vector<unsigned_char*,std::allocator<unsigned_char*>>::begin();
  std::vector<unsigned_char*,std::allocator<unsigned_char*>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_14,local_18);
    if (!bVar1) break;
    puVar2 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<unsigned_char**,std::vector<unsigned_char*,std::allocator<unsigned_char*>>>
             ::operator*(local_14);
    if ((void *)*puVar2 != (void *)0x0) {
      operator_delete__((void *)*puVar2);
    }
    __gnu_cxx::
    __normal_iterator<unsigned_char**,std::vector<unsigned_char*,std::allocator<unsigned_char*>>>::
    operator++(local_10,(int)local_14);
  }
                    /* try { // try from 08ab2361 to 08ab2365 has its CatchHandler @ 08ab2368 */
  std::vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>::
  ~vector((vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>> *)
          (this + 0x14));
  std::vector<unsigned_char*,std::allocator<unsigned_char*>>::~vector
            ((vector<unsigned_char*,std::allocator<unsigned_char*>> *)this);
  return;
}
```
