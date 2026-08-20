# _S_get_c_locale

`_ZNSt6locale5facet15_S_get_c_localeEv`

`std::locale::facet::_S_get_c_locale()`

| 类 | 地址 |
|---|---|
| `std::locale::facet` | `0x086daf40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086daf40  _ZNSt6locale5facet15_S_get_c_localeEv
#           std::locale::facet::_S_get_c_locale()
# range [0x086daf40, 0x086dafcf]
086daf40 +0x00:  push   %ebp
086daf41 +0x01:  mov    %esp,%ebp
086daf43 +0x03:  sub    $0x8,%esp
086daf46 +0x06:  mov    &_ZNSt6locale5facet11_S_c_localeE,%eax
086daf4b +0x0b:  test   %eax,%eax
086daf4d +0x0d:  je     086daf58 <+0x18>
086daf4f +0x0f:  leave
086daf50 +0x10:  ret
086daf51 +0x11:  lea    0x0(%esi,%eiz,1),%esi
086daf58 +0x18:  call   086daf10 <_ZNSt6locale5facet18_S_initialize_onceEv>  ; std::locale::facet::_S_initialize_once()
086daf5d +0x1d:  mov    &_ZNSt6locale5facet11_S_c_localeE,%eax
086daf62 +0x22:  leave
086daf63 +0x23:  ret
086daf64 +0x24:  nop
086daf65 +0x25:  nop
086daf66 +0x26:  nop
086daf67 +0x27:  nop
086daf68 +0x28:  nop
086daf69 +0x29:  nop
086daf6a +0x2a:  nop
086daf6b +0x2b:  nop
086daf6c +0x2c:  nop
086daf6d +0x2d:  nop
086daf6e +0x2e:  nop
086daf6f +0x2f:  nop
086daf70 +0x30:  push   %ebp
086daf71 +0x31:  mov    %esp,%ebp
086daf73 +0x33:  push   %ebx
086daf74 +0x34:  sub    $0x14,%esp
086daf77 +0x37:  mov    0x8(%ebp),%ebx
086daf7a +0x3a:  movl   $&_ZTVN9__gnu_cxx24__concurrence_lock_errorE+0x8,(%ebx)
086daf80 +0x40:  mov    %ebx,(%esp)
086daf83 +0x43:  call   08725080 <_ZNSt9exceptionD1Ev>  ; std::exception::~exception()
086daf88 +0x48:  mov    %ebx,0x8(%ebp)
086daf8b +0x4b:  add    $0x14,%esp
086daf8e +0x4e:  pop    %ebx
086daf8f +0x4f:  pop    %ebp
086daf90 +0x50:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086daf95 +0x55:  nop
086daf96 +0x56:  nop
086daf97 +0x57:  nop
086daf98 +0x58:  nop
086daf99 +0x59:  nop
086daf9a +0x5a:  nop
086daf9b +0x5b:  nop
086daf9c +0x5c:  nop
086daf9d +0x5d:  nop
086daf9e +0x5e:  nop
086daf9f +0x5f:  nop
086dafa0 +0x60:  push   %ebp
086dafa1 +0x61:  mov    %esp,%ebp
086dafa3 +0x63:  push   %ebx
086dafa4 +0x64:  sub    $0x14,%esp
086dafa7 +0x67:  mov    0x8(%ebp),%ebx
086dafaa +0x6a:  movl   $&_ZTVN9__gnu_cxx26__concurrence_unlock_errorE+0x8,(%ebx)
086dafb0 +0x70:  mov    %ebx,(%esp)
086dafb3 +0x73:  call   08725080 <_ZNSt9exceptionD1Ev>  ; std::exception::~exception()
086dafb8 +0x78:  mov    %ebx,0x8(%ebp)
086dafbb +0x7b:  add    $0x14,%esp
086dafbe +0x7e:  pop    %ebx
086dafbf +0x7f:  pop    %ebp
086dafc0 +0x80:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086dafc5 +0x85:  nop
086dafc6 +0x86:  nop
086dafc7 +0x87:  nop
086dafc8 +0x88:  nop
086dafc9 +0x89:  nop
086dafca +0x8a:  nop
086dafcb +0x8b:  nop
086dafcc +0x8c:  nop
086dafcd +0x8d:  nop
086dafce +0x8e:  nop
086dafcf +0x8f:  nop
```

## 反编译 C

```c
// std::locale::facet::_S_get_c_locale @ 0x86daf40

/* std::locale::facet::_S_get_c_locale() */

int std::locale::facet::_S_get_c_locale(void)

{
  if (_S_c_locale != 0) {
    return _S_c_locale;
  }
  _S_initialize_once();
  return _S_c_locale;
}
```
