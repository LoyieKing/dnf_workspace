# unsealRandomOption

`_ZN11eventReward18unsealRandomOptionEPK5CItemR10Inven_Item`

`eventReward::unsealRandomOption(CItem const*, Inven_Item&)`

| 类 | 地址 |
|---|---|
| `eventReward` | `0x080f0e40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f0e40  _ZN11eventReward18unsealRandomOptionEPK5CItemR10Inven_Item
#           eventReward::unsealRandomOption(CItem const*, Inven_Item&)
# range [0x080f0e40, 0x080f0f3d]
080f0e40 +0x00:  push   %ebp
080f0e41 +0x01:  mov    %esp,%ebp
080f0e43 +0x03:  push   %edi
080f0e44 +0x04:  push   %esi
080f0e45 +0x05:  push   %ebx
080f0e46 +0x06:  sub    $0x4c,%esp
080f0e49 +0x09:  cmpl   $0x0,0xc(%ebp)
080f0e4d +0x0d:  jne    080f0e59 <+0x19>
080f0e4f +0x0f:  mov    $0x0,%eax
080f0e54 +0x14:  jmp    080f0f36 <+0xf6>
080f0e59 +0x19:  mov    0xc(%ebp),%eax
080f0e5c +0x1c:  mov    (%eax),%eax
080f0e5e +0x1e:  add    $0x4c,%eax
080f0e61 +0x21:  mov    (%eax),%edx
080f0e63 +0x23:  mov    0xc(%ebp),%eax
080f0e66 +0x26:  mov    %eax,(%esp)
080f0e69 +0x29:  call   *%edx
080f0e6b +0x2b:  xor    $0x1,%eax
080f0e6e +0x2e:  test   %al,%al
080f0e70 +0x30:  je     080f0e7c <+0x3c>
080f0e72 +0x32:  mov    $0x0,%eax
080f0e77 +0x37:  jmp    080f0f36 <+0xf6>
080f0e7c +0x3c:  mov    0x10(%ebp),%eax
080f0e7f +0x3f:  add    $0x25,%eax
080f0e82 +0x42:  mov    %eax,-0x1c(%ebp)
080f0e85 +0x45:  mov    0xc(%ebp),%eax
080f0e88 +0x48:  mov    (%eax),%eax
080f0e8a +0x4a:  add    $0x50,%eax
080f0e8d +0x4d:  mov    (%eax),%edx
080f0e8f +0x4f:  mov    0xc(%ebp),%eax
080f0e92 +0x52:  mov    %eax,(%esp)
080f0e95 +0x55:  call   *%edx
080f0e97 +0x57:  mov    %eax,%edi
080f0e99 +0x59:  mov    0xc(%ebp),%eax
080f0e9c +0x5c:  mov    %eax,(%esp)
080f0e9f +0x5f:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
080f0ea4 +0x64:  mov    %eax,%esi
080f0ea6 +0x66:  mov    0xc(%ebp),%eax
080f0ea9 +0x69:  mov    %eax,(%esp)
080f0eac +0x6c:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
080f0eb1 +0x71:  mov    %eax,%ebx
080f0eb3 +0x73:  mov    0xc(%ebp),%eax
080f0eb6 +0x76:  mov    %eax,(%esp)
080f0eb9 +0x79:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
080f0ebe +0x7e:  mov    %eax,%edx
080f0ec0 +0x80:  mov    0x10(%ebp),%eax
080f0ec3 +0x83:  mov    0x2(%eax),%ecx
080f0ec6 +0x86:  mov    &_ZN10GlobalData20g_randomOptionHandleE,%eax
080f0ecb +0x8b:  mov    %eax,-0x2c(%ebp)
080f0ece +0x8e:  mov    -0x1c(%ebp),%eax
080f0ed1 +0x91:  mov    %eax,0x18(%esp)
080f0ed5 +0x95:  mov    %edi,0x14(%esp)
080f0ed9 +0x99:  mov    %esi,0x10(%esp)
080f0edd +0x9d:  mov    %ebx,0xc(%esp)
080f0ee1 +0xa1:  mov    %edx,0x8(%esp)
080f0ee5 +0xa5:  mov    %ecx,0x4(%esp)
080f0ee9 +0xa9:  mov    -0x2c(%ebp),%eax
080f0eec +0xac:  mov    %eax,(%esp)
080f0eef +0xaf:  call   085f2cc6 <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption>  ; random_option::CRandomOptionItemHandle::give_option(unsigned long, ENUM_RARITY, int, int, int, RandomOption*)
080f0ef4 +0xb4:  xor    $0x1,%eax
080f0ef7 +0xb7:  test   %al,%al
080f0ef9 +0xb9:  je     080f0f31 <+0xf1>
080f0efb +0xbb:  mov    0x10(%ebp),%eax
080f0efe +0xbe:  mov    0x2(%eax),%eax
080f0f01 +0xc1:  mov    %eax,0x14(%esp)
080f0f05 +0xc5:  movl   $"autoUnsealItem : %d",0x10(%esp)
080f0f0d +0xcd:  movl   $0x240,0xc(%esp)
080f0f15 +0xd5:  movl   $&_ZZN11eventReward18unsealRandomOptionEPK5CItemR10Inven_ItemE19__PRETTY_FUNCTION__,0x8(%esp)
080f0f1d +0xdd:  movl   $"eventReward.cpp",0x4(%esp)
080f0f25 +0xe5:  movl   $0x1,(%esp)
080f0f2c +0xec:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080f0f31 +0xf1:  mov    $0x1,%eax
080f0f36 +0xf6:  add    $0x4c,%esp
080f0f39 +0xf9:  pop    %ebx
080f0f3a +0xfa:  pop    %esi
080f0f3b +0xfb:  pop    %edi
080f0f3c +0xfc:  pop    %ebp
080f0f3d +0xfd:  ret
```

## 反编译 C

```c
// eventReward::unsealRandomOption @ 0x80f0e40

/* eventReward::unsealRandomOption(CItem const*, Inven_Item&) */

undefined4 __thiscall
eventReward::unsealRandomOption(eventReward *this,CItem *param_1,Inven_Item *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_1 == (CItem *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(*(int *)param_1 + 0x4c))(param_1);
    if (cVar1 == '\x01') {
      uVar2 = (**(code **)(*(int *)param_1 + 0x50))(param_1);
      uVar3 = CItem::getItemGroupName(param_1);
      uVar4 = CItem::getUsableLevel(param_1);
      uVar5 = CItem::get_rarity(param_1);
      cVar1 = random_option::CRandomOptionItemHandle::give_option
                        (GlobalData::g_randomOptionHandle,*(undefined4 *)(param_2 + 2),uVar5,uVar4,
                         uVar3,uVar2,param_2 + 0x25);
      if (cVar1 != '\x01') {
        LogManager::logFormat
                  (1,"eventReward.cpp",
                   "bool eventReward::unsealRandomOption(const CItem*, Inven_Item&)",0x240,
                   "autoUnsealItem : %d",*(undefined4 *)(param_2 + 2));
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
