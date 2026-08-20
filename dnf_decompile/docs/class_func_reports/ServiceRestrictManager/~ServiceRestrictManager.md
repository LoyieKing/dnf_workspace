# ~ServiceRestrictManager

`_ZN22ServiceRestrictManagerD1Ev`

`ServiceRestrictManager::~ServiceRestrictManager()`

| 类 | 地址 |
|---|---|
| `ServiceRestrictManager` | `0x0816e29e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816e29e  _ZN22ServiceRestrictManagerD1Ev
#           ServiceRestrictManager::~ServiceRestrictManager()
# range [0x0816e29e, 0x0816e2b1]
0816e29e +0x00:  push   %ebp
0816e29f +0x01:  mov    %esp,%ebp
0816e2a1 +0x03:  sub    $0x18,%esp
0816e2a4 +0x06:  mov    0x8(%ebp),%eax
0816e2a7 +0x09:  mov    %eax,(%esp)
0816e2aa +0x0c:  call   0816ee2c <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x11a>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x11a
0816e2af +0x11:  leave
0816e2b0 +0x12:  ret
0816e2b1 +0x13:  nop
```

## 反编译 C

```c
// ServiceRestrictManager::~ServiceRestrictManager @ 0x816e29e

/* ServiceRestrictManager::~ServiceRestrictManager() */

void __thiscall ServiceRestrictManager::~ServiceRestrictManager(ServiceRestrictManager *this)

{
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::~map((map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
          *)this);
  return;
}
```
