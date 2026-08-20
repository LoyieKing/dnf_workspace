# ~RestrictGeolocation

`_ZN19RestrictGeolocationD1Ev`

`RestrictGeolocation::~RestrictGeolocation()`

| 类 | 地址 |
|---|---|
| `RestrictGeolocation` | `0x081709fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081709fe  _ZN19RestrictGeolocationD1Ev
#           RestrictGeolocation::~RestrictGeolocation()
# range [0x081709fe, 0x08170a45]
081709fe +0x00:  push   %ebp
081709ff +0x01:  mov    %esp,%ebp
08170a01 +0x03:  push   %esi
08170a02 +0x04:  push   %ebx
08170a03 +0x05:  sub    $0x10,%esp
08170a06 +0x08:  mov    0x8(%ebp),%eax
08170a09 +0x0b:  mov    %eax,(%esp)
08170a0c +0x0e:  call   08170a88 <_ZN19RestrictGeolocation16closeGeolocationEv>  ; RestrictGeolocation::closeGeolocation()
08170a11 +0x13:  jmp    08170a31 <+0x33>
08170a13 +0x15:  mov    %edx,%ebx
08170a15 +0x17:  mov    %eax,%esi
08170a17 +0x19:  mov    0x8(%ebp),%eax
08170a1a +0x1c:  add    $0x4,%eax
08170a1d +0x1f:  mov    %eax,(%esp)
08170a20 +0x22:  call   08171476 <_GLOBAL__I__ZN19RestrictGeolocationC2Ev+0x33b>  ; global constructors keyed to RestrictGeolocation::RestrictGeolocation()+0x33b
08170a25 +0x27:  mov    %esi,%eax
08170a27 +0x29:  mov    %ebx,%edx
08170a29 +0x2b:  mov    %eax,(%esp)
08170a2c +0x2e:  call   08ae3750 <_Unwind_Resume>
08170a31 +0x33:  mov    0x8(%ebp),%eax
08170a34 +0x36:  add    $0x4,%eax
08170a37 +0x39:  mov    %eax,(%esp)
08170a3a +0x3c:  call   08171476 <_GLOBAL__I__ZN19RestrictGeolocationC2Ev+0x33b>  ; global constructors keyed to RestrictGeolocation::RestrictGeolocation()+0x33b
08170a3f +0x41:  add    $0x10,%esp
08170a42 +0x44:  pop    %ebx
08170a43 +0x45:  pop    %esi
08170a44 +0x46:  pop    %ebp
08170a45 +0x47:  ret
```

## 反编译 C

```c
// RestrictGeolocation::~RestrictGeolocation @ 0x81709fe

/* RestrictGeolocation::~RestrictGeolocation() */

void __thiscall RestrictGeolocation::~RestrictGeolocation(RestrictGeolocation *this)

{
                    /* try { // try from 08170a0c to 08170a10 has its CatchHandler @ 08170a13 */
  closeGeolocation(this);
  boost::unordered::
  unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
  ::~unordered_set((unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
                    *)(this + 4));
  return;
}
```
