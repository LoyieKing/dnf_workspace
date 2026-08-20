# ~CInGameAdvertisementManager

`_ZN27CInGameAdvertisementManagerD1Ev`

`CInGameAdvertisementManager::~CInGameAdvertisementManager()`

| 类 | 地址 |
|---|---|
| `CInGameAdvertisementManager` | `0x080fca7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080fca7c  _ZN27CInGameAdvertisementManagerD1Ev
#           CInGameAdvertisementManager::~CInGameAdvertisementManager()
# range [0x080fca7c, 0x080fca9d]
080fca7c +0x00:  push   %ebp
080fca7d +0x01:  mov    %esp,%ebp
080fca7f +0x03:  sub    $0x18,%esp
080fca82 +0x06:  mov    0x8(%ebp),%eax
080fca85 +0x09:  mov    0x18(%eax),%eax
080fca88 +0x0c:  mov    %eax,(%esp)
080fca8b +0x0f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080fca90 +0x14:  mov    0x8(%ebp),%eax
080fca93 +0x17:  mov    %eax,(%esp)
080fca96 +0x1a:  call   080fdd56 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x82>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x82
080fca9b +0x1f:  leave
080fca9c +0x20:  ret
080fca9d +0x21:  nop
```

## 反编译 C

```c
// CInGameAdvertisementManager::~CInGameAdvertisementManager @ 0x80fca7c

/* CInGameAdvertisementManager::~CInGameAdvertisementManager() */

void __thiscall
CInGameAdvertisementManager::~CInGameAdvertisementManager(CInGameAdvertisementManager *this)

{
  operator_delete(*(void **)(this + 0x18));
  std::
  multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
  ::~multimap((multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
               *)this);
  return;
}
```
