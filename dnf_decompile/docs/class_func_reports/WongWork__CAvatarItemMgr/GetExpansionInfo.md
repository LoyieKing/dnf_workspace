# GetExpansionInfo

`_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi`

`WongWork::CAvatarItemMgr::GetExpansionInfo(int) const`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f992e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f992e  _ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi
#           WongWork::CAvatarItemMgr::GetExpansionInfo(int) const
# range [0x082f992e, 0x082f9963]
082f992e +0x00:  push   %ebp
082f992f +0x01:  mov    %esp,%ebp
082f9931 +0x03:  sub    $0x28,%esp
082f9934 +0x06:  mov    0xc(%ebp),%eax
082f9937 +0x09:  mov    %eax,0x4(%esp)
082f993b +0x0d:  mov    0x8(%ebp),%eax
082f993e +0x10:  mov    %eax,(%esp)
082f9941 +0x13:  call   082f9cac <_ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi>  ; WongWork::CAvatarItemMgr::_FindItemAll(int) const
082f9946 +0x18:  mov    %eax,-0xc(%ebp)
082f9949 +0x1b:  cmpl   $0x0,-0xc(%ebp)
082f994d +0x1f:  jne    082f9956 <+0x28>
082f994f +0x21:  mov    $0x0,%eax
082f9954 +0x26:  jmp    082f9961 <+0x33>
082f9956 +0x28:  mov    -0xc(%ebp),%eax
082f9959 +0x2b:  mov    %eax,(%esp)
082f995c +0x2e:  call   082fa336 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x168>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x168
082f9961 +0x33:  leave
082f9962 +0x34:  ret
082f9963 +0x35:  nop
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::GetExpansionInfo @ 0x82f992e

/* WongWork::CAvatarItemMgr::GetExpansionInfo(int) const */

undefined4 __thiscall WongWork::CAvatarItemMgr::GetExpansionInfo(CAvatarItemMgr *this,int param_1)

{
  Avatar_Item *this_00;
  undefined4 uVar1;
  
  this_00 = (Avatar_Item *)_FindItemAll(this,param_1);
  if (this_00 == (Avatar_Item *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = Avatar_Item::getExpansionInfo(this_00);
  }
  return uVar1;
}
```
