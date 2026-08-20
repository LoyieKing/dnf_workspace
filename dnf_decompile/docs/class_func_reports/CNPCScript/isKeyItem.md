# isKeyItem

`_ZNK10CNPCScript9isKeyItemEmj`

`CNPCScript::isKeyItem(unsigned long, unsigned int) const`

| 类 | 地址 |
|---|---|
| `CNPCScript` | `0x08580e6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08580e6a  _ZNK10CNPCScript9isKeyItemEmj
#           CNPCScript::isKeyItem(unsigned long, unsigned int) const
# range [0x08580e6a, 0x08580f27]
08580e6a +0x00:  push   %ebp
08580e6b +0x01:  mov    %esp,%ebp
08580e6d +0x03:  sub    $0x48,%esp
08580e70 +0x06:  mov    0x10(%ebp),%eax
08580e73 +0x09:  mov    %eax,0x8(%esp)
08580e77 +0x0d:  mov    0xc(%ebp),%eax
08580e7a +0x10:  mov    %eax,0x4(%esp)
08580e7e +0x14:  lea    -0x1c(%ebp),%eax
08580e81 +0x17:  mov    %eax,(%esp)
08580e84 +0x1a:  call   085823a4 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xb36>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xb36
08580e89 +0x1f:  mov    0x8(%ebp),%eax
08580e8c +0x22:  lea    0x190(%eax),%edx
08580e92 +0x28:  lea    -0x14(%ebp),%eax
08580e95 +0x2b:  mov    %edx,0x4(%esp)
08580e99 +0x2f:  mov    %eax,(%esp)
08580e9c +0x32:  call   08582bce <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1360>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1360
08580ea1 +0x37:  sub    $0x4,%esp
08580ea4 +0x3a:  mov    0x8(%ebp),%eax
08580ea7 +0x3d:  lea    0x190(%eax),%edx
08580ead +0x43:  lea    -0x10(%ebp),%eax
08580eb0 +0x46:  mov    %edx,0x4(%esp)
08580eb4 +0x4a:  mov    %eax,(%esp)
08580eb7 +0x4d:  call   08582ba2 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1334>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1334
08580ebc +0x52:  sub    $0x4,%esp
08580ebf +0x55:  lea    -0x20(%ebp),%ecx
08580ec2 +0x58:  mov    -0x1c(%ebp),%eax
08580ec5 +0x5b:  mov    -0x18(%ebp),%edx
08580ec8 +0x5e:  mov    %eax,0xc(%esp)
08580ecc +0x62:  mov    %edx,0x10(%esp)
08580ed0 +0x66:  mov    -0x14(%ebp),%eax
08580ed3 +0x69:  mov    %eax,0x8(%esp)
08580ed7 +0x6d:  mov    -0x10(%ebp),%eax
08580eda +0x70:  mov    %eax,0x4(%esp)
08580ede +0x74:  mov    %ecx,(%esp)
08580ee1 +0x77:  call   08582bfa <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x138c>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x138c
08580ee6 +0x7c:  sub    $0x4,%esp
08580ee9 +0x7f:  mov    0x8(%ebp),%eax
08580eec +0x82:  lea    0x190(%eax),%edx
08580ef2 +0x88:  lea    -0xc(%ebp),%eax
08580ef5 +0x8b:  mov    %edx,0x4(%esp)
08580ef9 +0x8f:  mov    %eax,(%esp)
08580efc +0x92:  call   08582bce <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1360>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1360
08580f01 +0x97:  sub    $0x4,%esp
08580f04 +0x9a:  lea    -0xc(%ebp),%eax
08580f07 +0x9d:  mov    %eax,0x4(%esp)
08580f0b +0xa1:  lea    -0x20(%ebp),%eax
08580f0e +0xa4:  mov    %eax,(%esp)
08580f11 +0xa7:  call   08582c55 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x13e7>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x13e7
08580f16 +0xac:  test   %al,%al
08580f18 +0xae:  je     08580f21 <+0xb7>
08580f1a +0xb0:  mov    $0x0,%eax
08580f1f +0xb5:  jmp    08580f26 <+0xbc>
08580f21 +0xb7:  mov    $0x1,%eax
08580f26 +0xbc:  leave
08580f27 +0xbd:  ret
```

## 反编译 C

```c
// CNPCScript::isKeyItem @ 0x8580e6a

/* CNPCScript::isKeyItem(unsigned long, unsigned int) const */

bool __thiscall CNPCScript::isKeyItem(CNPCScript *this,ulong param_1,uint param_2)

{
  bool bVar1;
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  isSameItem::isSameItem((isSameItem *)&local_20,param_1,param_2);
  std::
  vector<std::pair<unsigned_long,unsigned_int>,std::allocator<std::pair<unsigned_long,unsigned_int>>>
  ::end();
  std::
  vector<std::pair<unsigned_long,unsigned_int>,std::allocator<std::pair<unsigned_long,unsigned_int>>>
  ::begin();
  std::
  find_if<__gnu_cxx::__normal_iterator<std::pair<unsigned_long,unsigned_int>const*,std::vector<std::pair<unsigned_long,unsigned_int>,std::allocator<std::pair<unsigned_long,unsigned_int>>>>,isSameItem>
            (local_24,local_14,local_18,local_20,local_1c);
  std::
  vector<std::pair<unsigned_long,unsigned_int>,std::allocator<std::pair<unsigned_long,unsigned_int>>>
  ::end();
  bVar1 = __gnu_cxx::operator==(local_24,local_10);
  return !bVar1;
}
```
