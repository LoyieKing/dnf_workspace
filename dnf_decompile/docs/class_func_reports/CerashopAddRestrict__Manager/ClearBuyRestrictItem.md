# ClearBuyRestrictItem

`_ZN19CerashopAddRestrict7Manager20ClearBuyRestrictItemEP5CUser`

`CerashopAddRestrict::Manager::ClearBuyRestrictItem(CUser*)`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict::Manager` | `0x080e0da4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e0da4  _ZN19CerashopAddRestrict7Manager20ClearBuyRestrictItemEP5CUser
#           CerashopAddRestrict::Manager::ClearBuyRestrictItem(CUser*)
# range [0x080e0da4, 0x080e0deb]
080e0da4 +0x00:  push   %ebp
080e0da5 +0x01:  mov    %esp,%ebp
080e0da7 +0x03:  sub    $0x18,%esp
080e0daa +0x06:  mov    0x8(%ebp),%eax
080e0dad +0x09:  add    $0x8d1e4,%eax
080e0db2 +0x0e:  mov    %eax,(%esp)
080e0db5 +0x11:  call   080e27e0 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x586>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x586
080e0dba +0x16:  mov    0x8(%ebp),%eax
080e0dbd +0x19:  add    $0x8d1fc,%eax
080e0dc2 +0x1e:  mov    %eax,(%esp)
080e0dc5 +0x21:  call   080e27e0 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x586>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x586
080e0dca +0x26:  mov    0x8(%ebp),%eax
080e0dcd +0x29:  add    $0x8d214,%eax
080e0dd2 +0x2e:  mov    %eax,(%esp)
080e0dd5 +0x31:  call   080e273a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x4e0>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x4e0
080e0dda +0x36:  mov    0x8(%ebp),%eax
080e0ddd +0x39:  add    $0x8d22c,%eax
080e0de2 +0x3e:  mov    %eax,(%esp)
080e0de5 +0x41:  call   080e273a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x4e0>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x4e0
080e0dea +0x46:  leave
080e0deb +0x47:  ret
```

## 反编译 C

```c
// CerashopAddRestrict::Manager::ClearBuyRestrictItem @ 0x80e0da4

/* CerashopAddRestrict::Manager::ClearBuyRestrictItem(CUser*) */

void CerashopAddRestrict::Manager::ClearBuyRestrictItem(CUser *param_1)

{
  std::
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  ::clear((map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
           *)(param_1 + 0x8d1e4));
  std::
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  ::clear((map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
           *)(param_1 + 0x8d1fc));
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::clear((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
           *)(param_1 + 0x8d214));
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::clear((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
           *)(param_1 + 0x8d22c));
  return;
}
```
