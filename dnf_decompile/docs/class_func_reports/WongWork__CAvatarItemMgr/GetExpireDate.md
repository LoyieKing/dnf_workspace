# GetExpireDate

`_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi`

`WongWork::CAvatarItemMgr::GetExpireDate(int) const`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f981a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f981a  _ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi
#           WongWork::CAvatarItemMgr::GetExpireDate(int) const
# range [0x082f981a, 0x082f984f]
082f981a +0x00:  push   %ebp
082f981b +0x01:  mov    %esp,%ebp
082f981d +0x03:  sub    $0x28,%esp
082f9820 +0x06:  mov    0xc(%ebp),%eax
082f9823 +0x09:  mov    %eax,0x4(%esp)
082f9827 +0x0d:  mov    0x8(%ebp),%eax
082f982a +0x10:  mov    %eax,(%esp)
082f982d +0x13:  call   082f9cac <_ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi>  ; WongWork::CAvatarItemMgr::_FindItemAll(int) const
082f9832 +0x18:  mov    %eax,-0xc(%ebp)
082f9835 +0x1b:  cmpl   $0x0,-0xc(%ebp)
082f9839 +0x1f:  jne    082f9842 <+0x28>
082f983b +0x21:  mov    $0xffffffff,%eax
082f9840 +0x26:  jmp    082f984d <+0x33>
082f9842 +0x28:  mov    -0xc(%ebp),%eax
082f9845 +0x2b:  mov    %eax,(%esp)
082f9848 +0x2e:  call   082fa1ea <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x1c>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x1c
082f984d +0x33:  leave
082f984e +0x34:  ret
082f984f +0x35:  nop
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::GetExpireDate @ 0x82f981a

/* WongWork::CAvatarItemMgr::GetExpireDate(int) const */

undefined4 __thiscall WongWork::CAvatarItemMgr::GetExpireDate(CAvatarItemMgr *this,int param_1)

{
  Avatar_Item *this_00;
  undefined4 uVar1;
  
  this_00 = (Avatar_Item *)_FindItemAll(this,param_1);
  if (this_00 == (Avatar_Item *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = Avatar_Item::GetExpireDate(this_00);
  }
  return uVar1;
}
```
