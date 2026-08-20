# ServiceRestrictManager

`_ZN22ServiceRestrictManagerC1Ev`

`ServiceRestrictManager::ServiceRestrictManager()`

| 类 | 地址 |
|---|---|
| `ServiceRestrictManager` | `0x0816e272` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816e272  _ZN22ServiceRestrictManagerC1Ev
#           ServiceRestrictManager::ServiceRestrictManager()
# range [0x0816e272, 0x0816e29d]
0816e272 +0x00:  push   %ebp
0816e273 +0x01:  mov    %esp,%ebp
0816e275 +0x03:  sub    $0x18,%esp
0816e278 +0x06:  mov    0x8(%ebp),%eax
0816e27b +0x09:  mov    %eax,(%esp)
0816e27e +0x0c:  call   0816ef26 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x214>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x214
0816e283 +0x11:  mov    0x8(%ebp),%eax
0816e286 +0x14:  mov    %eax,(%esp)
0816e289 +0x17:  call   0816ef2c <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x21a>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x21a
0816e28e +0x1c:  mov    0x8(%ebp),%eax
0816e291 +0x1f:  movb   $0x0,0x18(%eax)
0816e295 +0x23:  mov    0x8(%ebp),%eax
0816e298 +0x26:  movb   $0x0,0x19(%eax)
0816e29c +0x2a:  leave
0816e29d +0x2b:  ret
```

## 反编译 C

```c
// ServiceRestrictManager::ServiceRestrictManager @ 0x816e272

/* ServiceRestrictManager::ServiceRestrictManager() */

void __thiscall ServiceRestrictManager::ServiceRestrictManager(ServiceRestrictManager *this)

{
  ARAD::Singleton<ServiceRestrictManager>::Singleton();
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::map((map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
         *)this);
  this[0x18] = (ServiceRestrictManager)0x0;
  this[0x19] = (ServiceRestrictManager)0x0;
  return;
}
```
