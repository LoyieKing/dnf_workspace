# get

`_ZNK16StringDictionary3getEPKc`

`StringDictionary::get(char const*) const`

| 类 | 地址 |
|---|---|
| `StringDictionary` | `0x08ab2528` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab2528  _ZNK16StringDictionary3getEPKc
#           StringDictionary::get(char const*) const
# range [0x08ab2528, 0x08ab2611]
08ab2528 +0x00:  push   %ebp
08ab2529 +0x01:  mov    %esp,%ebp
08ab252b +0x03:  push   %ebx
08ab252c +0x04:  sub    $0x34,%esp
08ab252f +0x07:  mov    0xc(%ebp),%eax
08ab2532 +0x0a:  mov    %eax,(%esp)
08ab2535 +0x0d:  call   08ab21f8 <_ZL18getStringHashValuePKc>  ; getStringHashValue(char const*)
08ab253a +0x12:  mov    %eax,-0x10(%ebp)
08ab253d +0x15:  mov    -0x10(%ebp),%eax
08ab2540 +0x18:  shr    $0x18,%eax
08ab2543 +0x1b:  mov    %eax,-0xc(%ebp)
08ab2546 +0x1e:  movl   $0x0,-0x20(%ebp)
08ab254d +0x25:  movl   $0x0,-0x1c(%ebp)
08ab2554 +0x2c:  movl   $0x0,-0x18(%ebp)
08ab255b +0x33:  mov    -0x10(%ebp),%eax
08ab255e +0x36:  mov    %eax,-0x20(%ebp)
08ab2561 +0x39:  mov    -0xc(%ebp),%eax
08ab2564 +0x3c:  lea    0x1(%eax),%ebx
08ab2567 +0x3f:  mov    -0xc(%ebp),%ecx
08ab256a +0x42:  lea    -0x28(%ebp),%eax
08ab256d +0x45:  lea    -0x20(%ebp),%edx
08ab2570 +0x48:  mov    %edx,0xc(%esp)
08ab2574 +0x4c:  mov    0x8(%ebp),%edx
08ab2577 +0x4f:  add    $0x8,%ebx
08ab257a +0x52:  mov    (%edx,%ebx,4),%edx
08ab257d +0x55:  mov    %edx,0x8(%esp)
08ab2581 +0x59:  mov    0x8(%ebp),%edx
08ab2584 +0x5c:  add    $0x8,%ecx
08ab2587 +0x5f:  mov    (%edx,%ecx,4),%edx
08ab258a +0x62:  mov    %edx,0x4(%esp)
08ab258e +0x66:  mov    %eax,(%esp)
08ab2591 +0x69:  call   08ab2bcb <_ZN16StringDictionary9addStringEPKc+0x459>  ; StringDictionary::addString(char const*)+0x459
08ab2596 +0x6e:  sub    $0x4,%esp
08ab2599 +0x71:  jmp    08ab25ee <+0xc6>
08ab259b +0x73:  lea    -0x28(%ebp),%eax
08ab259e +0x76:  mov    %eax,(%esp)
08ab25a1 +0x79:  call   08ab2db4 <_ZN16StringDictionary9addStringEPKc+0x642>  ; StringDictionary::addString(char const*)+0x642
08ab25a6 +0x7e:  mov    0x4(%eax),%eax
08ab25a9 +0x81:  mov    0xc(%ebp),%edx
08ab25ac +0x84:  mov    %edx,0x4(%esp)
08ab25b0 +0x88:  mov    %eax,(%esp)
08ab25b3 +0x8b:  call   0807e4e0 <_init+0xdd8>
08ab25b8 +0x90:  test   %eax,%eax
08ab25ba +0x92:  sete   %al
08ab25bd +0x95:  test   %al,%al
08ab25bf +0x97:  je     08ab25d1 <+0xa9>
08ab25c1 +0x99:  lea    -0x28(%ebp),%eax
08ab25c4 +0x9c:  mov    %eax,(%esp)
08ab25c7 +0x9f:  call   08ab2db4 <_ZN16StringDictionary9addStringEPKc+0x642>  ; StringDictionary::addString(char const*)+0x642
08ab25cc +0xa4:  mov    0x8(%eax),%eax
08ab25cf +0xa7:  jmp    08ab260c <+0xe4>
08ab25d1 +0xa9:  lea    -0x14(%ebp),%eax
08ab25d4 +0xac:  movl   $0x0,0x8(%esp)
08ab25dc +0xb4:  lea    -0x28(%ebp),%edx
08ab25df +0xb7:  mov    %edx,0x4(%esp)
08ab25e3 +0xbb:  mov    %eax,(%esp)
08ab25e6 +0xbe:  call   08ab2d80 <_ZN16StringDictionary9addStringEPKc+0x60e>  ; StringDictionary::addString(char const*)+0x60e
08ab25eb +0xc3:  sub    $0x4,%esp
08ab25ee +0xc6:  lea    -0x28(%ebp),%eax
08ab25f1 +0xc9:  add    $0x4,%eax
08ab25f4 +0xcc:  mov    %eax,0x4(%esp)
08ab25f8 +0xd0:  lea    -0x28(%ebp),%eax
08ab25fb +0xd3:  mov    %eax,(%esp)
08ab25fe +0xd6:  call   08ab2d53 <_ZN16StringDictionary9addStringEPKc+0x5e1>  ; StringDictionary::addString(char const*)+0x5e1
08ab2603 +0xdb:  test   %al,%al
08ab2605 +0xdd:  jne    08ab259b <+0x73>
08ab2607 +0xdf:  mov    $0x0,%eax
08ab260c +0xe4:  mov    -0x4(%ebp),%ebx
08ab260f +0xe7:  leave
08ab2610 +0xe8:  ret
08ab2611 +0xe9:  nop
```

## 反编译 C

```c
// StringDictionary::get @ 0x8ab2528

/* StringDictionary::get(char const*) const */

undefined4 __thiscall StringDictionary::get(StringDictionary *this,char *param_1)

{
  bool bVar1;
  int iVar2;
  __normal_iterator<StringDictionary::StringEntity*,std::vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>>
  local_2c [4];
  __normal_iterator a_Stack_28 [4];
  uint local_24 [3];
  __normal_iterator<StringDictionary::StringEntity*,std::vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>>
  local_18 [4];
  uint local_14;
  uint local_10;
  
  local_24[0] = getStringHashValue(param_1);
  local_10 = local_24[0] >> 0x18;
  local_24[1] = 0;
  local_24[2] = 0;
  local_14 = local_24[0];
  std::
  equal_range<__gnu_cxx::__normal_iterator<StringDictionary::StringEntity*,std::vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>>,StringDictionary::StringEntity>
            (local_2c,*(undefined4 *)(this + (local_10 + 8) * 4),
             *(undefined4 *)(this + (local_10 + 9) * 4),local_24);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_2c,a_Stack_28);
    if (!bVar1) {
      return 0;
    }
    iVar2 = __gnu_cxx::
            __normal_iterator<StringDictionary::StringEntity*,std::vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>>
            ::operator->(local_2c);
    iVar2 = strcmp(*(char **)(iVar2 + 4),param_1);
    if (iVar2 == 0) break;
    __gnu_cxx::
    __normal_iterator<StringDictionary::StringEntity*,std::vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>>
    ::operator++(local_18,(int)local_2c);
  }
  iVar2 = __gnu_cxx::
          __normal_iterator<StringDictionary::StringEntity*,std::vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>>
          ::operator->(local_2c);
  return *(undefined4 *)(iVar2 + 8);
}
```
