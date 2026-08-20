# STCeraShopItem

`_ZN14STCeraShopItemC1Ev`

`STCeraShopItem::STCeraShopItem()`

| 类 | 地址 |
|---|---|
| `STCeraShopItem` | `0x088fd974` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088fd974  _ZN14STCeraShopItemC1Ev
#           STCeraShopItem::STCeraShopItem()
# range [0x088fd974, 0x088fd9bf]
088fd974 +0x00:  push   %ebp
088fd975 +0x01:  mov    %esp,%ebp
088fd977 +0x03:  push   %esi
088fd978 +0x04:  push   %ebx
088fd979 +0x05:  sub    $0x10,%esp
088fd97c +0x08:  mov    0x8(%ebp),%eax
088fd97f +0x0b:  add    $0x40,%eax
088fd982 +0x0e:  mov    %eax,(%esp)
088fd985 +0x11:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088fd98a +0x16:  mov    0x8(%ebp),%eax
088fd98d +0x19:  mov    %eax,(%esp)
088fd990 +0x1c:  call   088fd9c4 <_ZN14STCeraShopItem5clearEv>  ; STCeraShopItem::clear()
088fd995 +0x21:  mov    0x8(%ebp),%eax
088fd998 +0x24:  movb   $0x0,0x84(%eax)
088fd99f +0x2b:  add    $0x10,%esp
088fd9a2 +0x2e:  pop    %ebx
088fd9a3 +0x2f:  pop    %esi
088fd9a4 +0x30:  pop    %ebp
088fd9a5 +0x31:  ret
088fd9a6 +0x32:  mov    %edx,%ebx
088fd9a8 +0x34:  mov    %eax,%esi
088fd9aa +0x36:  mov    0x8(%ebp),%eax
088fd9ad +0x39:  add    $0x40,%eax
088fd9b0 +0x3c:  mov    %eax,(%esp)
088fd9b3 +0x3f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088fd9b8 +0x44:  mov    %esi,%eax
088fd9ba +0x46:  mov    %ebx,%edx
088fd9bc +0x48:  mov    %eax,(%esp)
088fd9bf +0x4b:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// STCeraShopItem::STCeraShopItem @ 0x88fd974

/* STCeraShopItem::STCeraShopItem() */

void __thiscall STCeraShopItem::STCeraShopItem(STCeraShopItem *this)

{
  std::string::string((string *)(this + 0x40));
                    /* try { // try from 088fd990 to 088fd994 has its CatchHandler @ 088fd9a6 */
  clear(this);
  this[0x84] = (STCeraShopItem)0x0;
  return;
}
```
