# ~Arad_GiftItem_Set

`_ZN17Arad_GiftItem_SetD1Ev`

`Arad_GiftItem_Set::~Arad_GiftItem_Set()`

| 类 | 地址 |
|---|---|
| `Arad_GiftItem_Set` | `0x081a2dea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a2dea  _ZN17Arad_GiftItem_SetD1Ev
#           Arad_GiftItem_Set::~Arad_GiftItem_Set()
# range [0x081a2dea, 0x081a2e3d]
081a2dea +0x00:  push   %ebp
081a2deb +0x01:  mov    %esp,%ebp
081a2ded +0x03:  push   %esi
081a2dee +0x04:  push   %ebx
081a2def +0x05:  sub    $0x10,%esp
081a2df2 +0x08:  mov    0x8(%ebp),%eax
081a2df5 +0x0b:  movl   $&_ZTV17Arad_GiftItem_Set+0x8,(%eax)
081a2dfb +0x11:  mov    0x8(%ebp),%eax
081a2dfe +0x14:  add    $0x1c,%eax
081a2e01 +0x17:  mov    %eax,(%esp)
081a2e04 +0x1a:  call   0817cbd6 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x1d>  ; global constructors keyed to Arad_Script::Arad_Script()+0x1d
081a2e09 +0x1f:  jmp    081a2e29 <+0x3f>
081a2e0b +0x21:  mov    %edx,%ebx
081a2e0d +0x23:  mov    %eax,%esi
081a2e0f +0x25:  mov    0x8(%ebp),%eax
081a2e12 +0x28:  add    $0x4,%eax
081a2e15 +0x2b:  mov    %eax,(%esp)
081a2e18 +0x2e:  call   081a4288 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2e3>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2e3
081a2e1d +0x33:  mov    %esi,%eax
081a2e1f +0x35:  mov    %ebx,%edx
081a2e21 +0x37:  mov    %eax,(%esp)
081a2e24 +0x3a:  call   08ae3750 <_Unwind_Resume>
081a2e29 +0x3f:  mov    0x8(%ebp),%eax
081a2e2c +0x42:  add    $0x4,%eax
081a2e2f +0x45:  mov    %eax,(%esp)
081a2e32 +0x48:  call   081a4288 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2e3>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2e3
081a2e37 +0x4d:  add    $0x10,%esp
081a2e3a +0x50:  pop    %ebx
081a2e3b +0x51:  pop    %esi
081a2e3c +0x52:  pop    %ebp
081a2e3d +0x53:  ret
```

## 反编译 C

```c
// Arad_GiftItem_Set::~Arad_GiftItem_Set @ 0x81a2dea

/* Arad_GiftItem_Set::~Arad_GiftItem_Set() */

void __thiscall Arad_GiftItem_Set::~Arad_GiftItem_Set(Arad_GiftItem_Set *this)

{
  *(undefined ***)this = &PTR_open_08bad840;
                    /* try { // try from 081a2e04 to 081a2e08 has its CatchHandler @ 081a2e0b */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0x1c));
  std::
  map<long_long,Arad_GiftItem_Set::Data,std::less<long_long>,std::allocator<std::pair<long_long_const,Arad_GiftItem_Set::Data>>>
  ::~map((map<long_long,Arad_GiftItem_Set::Data,std::less<long_long>,std::allocator<std::pair<long_long_const,Arad_GiftItem_Set::Data>>>
          *)(this + 4));
  return;
}
```
