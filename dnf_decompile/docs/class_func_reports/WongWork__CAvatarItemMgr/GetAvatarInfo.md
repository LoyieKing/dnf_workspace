# GetAvatarInfo

`_ZNK8WongWork14CAvatarItemMgr13GetAvatarInfoEi`

`WongWork::CAvatarItemMgr::GetAvatarInfo(int) const`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f99bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f99bc  _ZNK8WongWork14CAvatarItemMgr13GetAvatarInfoEi
#           WongWork::CAvatarItemMgr::GetAvatarInfo(int) const
# range [0x082f99bc, 0x082f99d5]
082f99bc +0x00:  push   %ebp
082f99bd +0x01:  mov    %esp,%ebp
082f99bf +0x03:  sub    $0x18,%esp
082f99c2 +0x06:  mov    0xc(%ebp),%eax
082f99c5 +0x09:  mov    %eax,0x4(%esp)
082f99c9 +0x0d:  mov    0x8(%ebp),%eax
082f99cc +0x10:  mov    %eax,(%esp)
082f99cf +0x13:  call   082f9cac <_ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi>  ; WongWork::CAvatarItemMgr::_FindItemAll(int) const
082f99d4 +0x18:  leave
082f99d5 +0x19:  ret
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::GetAvatarInfo @ 0x82f99bc

/* WongWork::CAvatarItemMgr::GetAvatarInfo(int) const */

void __thiscall WongWork::CAvatarItemMgr::GetAvatarInfo(CAvatarItemMgr *this,int param_1)

{
  _FindItemAll(this,param_1);
  return;
}
```
