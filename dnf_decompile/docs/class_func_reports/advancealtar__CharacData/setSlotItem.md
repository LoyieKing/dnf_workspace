# setSlotItem

`_ZN12advancealtar10CharacData11setSlotItemEv`

`advancealtar::CharacData::setSlotItem()`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacData` | `0x0812d246` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812d246  _ZN12advancealtar10CharacData11setSlotItemEv
#           advancealtar::CharacData::setSlotItem()
# range [0x0812d246, 0x0812d277]
0812d246 +0x00:  push   %ebp
0812d247 +0x01:  mov    %esp,%ebp
0812d249 +0x03:  sub    $0x18,%esp
0812d24c +0x06:  mov    0x8(%ebp),%eax
0812d24f +0x09:  mov    0x4(%eax),%eax
0812d252 +0x0c:  test   %eax,%eax
0812d254 +0x0e:  je     0812d275 <+0x2f>
0812d256 +0x10:  mov    0x8(%ebp),%eax
0812d259 +0x13:  lea    0x10(%eax),%edx
0812d25c +0x16:  mov    0x8(%ebp),%eax
0812d25f +0x19:  mov    0x4(%eax),%eax
0812d262 +0x1c:  add    $0x8df60,%eax
0812d267 +0x21:  mov    %edx,0x4(%esp)
0812d26b +0x25:  mov    %eax,(%esp)
0812d26e +0x28:  call   08132638 <_ZNK12advancealtar25CharacAdvanceAltarManager11getSlotItemERSt3mapIhNS_9_SlotItemESt4lessIhESaISt4pairIKhS2_EEE>  ; advancealtar::CharacAdvanceAltarManager::getSlotItem(std::map<unsigned char, advancealtar::_SlotItem, std::less<unsigned char>, std::allocator<std::pair<unsigned char const, advancealtar::_SlotItem> > >&) const
0812d273 +0x2d:  jmp    0812d276 <+0x30>
0812d275 +0x2f:  nop
0812d276 +0x30:  leave
0812d277 +0x31:  ret
```

## 反编译 C

```c
// advancealtar::CharacData::setSlotItem @ 0x812d246

/* advancealtar::CharacData::setSlotItem() */

void __thiscall advancealtar::CharacData::setSlotItem(CharacData *this)

{
  if (*(int *)(this + 4) != 0) {
    CharacAdvanceAltarManager::getSlotItem((map *)(*(int *)(this + 4) + 0x8df60));
  }
  return;
}
```
