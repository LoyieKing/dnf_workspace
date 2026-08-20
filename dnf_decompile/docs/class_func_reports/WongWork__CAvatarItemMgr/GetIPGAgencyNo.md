# GetIPGAgencyNo

`_ZNK8WongWork14CAvatarItemMgr14GetIPGAgencyNoEi`

`WongWork::CAvatarItemMgr::GetIPGAgencyNo(int) const`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f98c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f98c2  _ZNK8WongWork14CAvatarItemMgr14GetIPGAgencyNoEi
#           WongWork::CAvatarItemMgr::GetIPGAgencyNo(int) const
# range [0x082f98c2, 0x082f98f7]
082f98c2 +0x00:  push   %ebp
082f98c3 +0x01:  mov    %esp,%ebp
082f98c5 +0x03:  sub    $0x28,%esp
082f98c8 +0x06:  mov    0xc(%ebp),%eax
082f98cb +0x09:  mov    %eax,0x4(%esp)
082f98cf +0x0d:  mov    0x8(%ebp),%eax
082f98d2 +0x10:  mov    %eax,(%esp)
082f98d5 +0x13:  call   082f9cac <_ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi>  ; WongWork::CAvatarItemMgr::_FindItemAll(int) const
082f98da +0x18:  mov    %eax,-0xc(%ebp)
082f98dd +0x1b:  cmpl   $0x0,-0xc(%ebp)
082f98e1 +0x1f:  jne    082f98ea <+0x28>
082f98e3 +0x21:  mov    $0x0,%eax
082f98e8 +0x26:  jmp    082f98f5 <+0x33>
082f98ea +0x28:  mov    -0xc(%ebp),%eax
082f98ed +0x2b:  mov    %eax,(%esp)
082f98f0 +0x2e:  call   0822d202 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x28ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x28ac
082f98f5 +0x33:  leave
082f98f6 +0x34:  ret
082f98f7 +0x35:  nop
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::GetIPGAgencyNo @ 0x82f98c2

/* WongWork::CAvatarItemMgr::GetIPGAgencyNo(int) const */

undefined4 __thiscall WongWork::CAvatarItemMgr::GetIPGAgencyNo(CAvatarItemMgr *this,int param_1)

{
  Avatar_Item *this_00;
  undefined4 uVar1;
  
  this_00 = (Avatar_Item *)_FindItemAll(this,param_1);
  if (this_00 == (Avatar_Item *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = Avatar_Item::GetIPGAgencyNo(this_00);
  }
  return uVar1;
}
```
