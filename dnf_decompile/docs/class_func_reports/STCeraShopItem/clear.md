# clear

`_ZN14STCeraShopItem5clearEv`

`STCeraShopItem::clear()`

| 类 | 地址 |
|---|---|
| `STCeraShopItem` | `0x088fd9c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088fd9c4  _ZN14STCeraShopItem5clearEv
#           STCeraShopItem::clear()
# range [0x088fd9c4, 0x088fdb35]
088fd9c4 +0x000:  push   %ebp
088fd9c5 +0x001:  mov    %esp,%ebp
088fd9c7 +0x003:  sub    $0x18,%esp
088fd9ca +0x006:  mov    0x8(%ebp),%eax
088fd9cd +0x009:  movb   $0xff,(%eax)
088fd9d0 +0x00c:  mov    0x8(%ebp),%eax
088fd9d3 +0x00f:  movl   $0x0,0x4(%eax)
088fd9da +0x016:  mov    0x8(%ebp),%eax
088fd9dd +0x019:  movl   $0xfffffffe,0x8(%eax)
088fd9e4 +0x020:  mov    0x8(%ebp),%eax
088fd9e7 +0x023:  movl   $0xffffffff,0xc(%eax)
088fd9ee +0x02a:  mov    0x8(%ebp),%eax
088fd9f1 +0x02d:  movl   $0x0,0x10(%eax)
088fd9f8 +0x034:  mov    0x8(%ebp),%eax
088fd9fb +0x037:  movl   $0xffffffff,0x14(%eax)
088fda02 +0x03e:  mov    0x8(%ebp),%eax
088fda05 +0x041:  movb   $0xff,0x18(%eax)
088fda09 +0x045:  mov    0x8(%ebp),%eax
088fda0c +0x048:  movl   $0x1,0x1c(%eax)
088fda13 +0x04f:  mov    0x8(%ebp),%eax
088fda16 +0x052:  movb   $0x0,0x20(%eax)
088fda1a +0x056:  mov    0x8(%ebp),%eax
088fda1d +0x059:  movw   $0x0,0x22(%eax)
088fda23 +0x05f:  mov    0x8(%ebp),%eax
088fda26 +0x062:  movl   $0x0,0x24(%eax)
088fda2d +0x069:  mov    0x8(%ebp),%eax
088fda30 +0x06c:  movl   $0x0,0x2c(%eax)
088fda37 +0x073:  mov    0x8(%ebp),%eax
088fda3a +0x076:  movl   $0x0,0x30(%eax)
088fda41 +0x07d:  mov    0x8(%ebp),%eax
088fda44 +0x080:  movl   $0x0,0x38(%eax)
088fda4b +0x087:  mov    0x8(%ebp),%eax
088fda4e +0x08a:  movl   $0x0,0x34(%eax)
088fda55 +0x091:  mov    0x8(%ebp),%eax
088fda58 +0x094:  movb   $0xff,0x3c(%eax)
088fda5c +0x098:  mov    0x8(%ebp),%eax
088fda5f +0x09b:  add    $0x40,%eax
088fda62 +0x09e:  movl   $"",0x4(%esp)
088fda6a +0x0a6:  mov    %eax,(%esp)
088fda6d +0x0a9:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
088fda72 +0x0ae:  mov    0x8(%ebp),%eax
088fda75 +0x0b1:  movl   $0x0,0x80(%eax)
088fda7f +0x0bb:  mov    0x8(%ebp),%eax
088fda82 +0x0be:  mov    $0x0,%edx
088fda87 +0x0c3:  mov    %edx,0x44(%eax)
088fda8a +0x0c6:  mov    0x8(%ebp),%eax
088fda8d +0x0c9:  movl   $0x0,0x48(%eax)
088fda94 +0x0d0:  mov    0x8(%ebp),%eax
088fda97 +0x0d3:  movl   $0x0,0x4c(%eax)
088fda9e +0x0da:  mov    0x8(%ebp),%eax
088fdaa1 +0x0dd:  movb   $0x0,0x50(%eax)
088fdaa5 +0x0e1:  mov    0x8(%ebp),%eax
088fdaa8 +0x0e4:  movb   $0x0,0x51(%eax)
088fdaac +0x0e8:  mov    0x8(%ebp),%eax
088fdaaf +0x0eb:  movb   $0x0,0x52(%eax)
088fdab3 +0x0ef:  mov    0x8(%ebp),%eax
088fdab6 +0x0f2:  movb   $0x1,0x53(%eax)
088fdaba +0x0f6:  mov    0x8(%ebp),%eax
088fdabd +0x0f9:  movl   $0xfffffffe,0x54(%eax)
088fdac4 +0x100:  mov    0x8(%ebp),%eax
088fdac7 +0x103:  movl   $0xffffffff,0x58(%eax)
088fdace +0x10a:  mov    0x8(%ebp),%eax
088fdad1 +0x10d:  movl   $0x0,0x5c(%eax)
088fdad8 +0x114:  mov    0x8(%ebp),%eax
088fdadb +0x117:  movb   $0xc,0x60(%eax)
088fdadf +0x11b:  mov    0x8(%ebp),%eax
088fdae2 +0x11e:  movw   $0x0,0x62(%eax)
088fdae8 +0x124:  mov    0x8(%ebp),%eax
088fdaeb +0x127:  movw   $0x0,0x64(%eax)
088fdaf1 +0x12d:  mov    0x8(%ebp),%eax
088fdaf4 +0x130:  movl   $0x0,0x68(%eax)
088fdafb +0x137:  mov    0x8(%ebp),%eax
088fdafe +0x13a:  movl   $0x0,0x6c(%eax)
088fdb05 +0x141:  mov    0x8(%ebp),%eax
088fdb08 +0x144:  movl   $0x0,0x70(%eax)
088fdb0f +0x14b:  mov    0x8(%ebp),%eax
088fdb12 +0x14e:  movl   $0x0,0x74(%eax)
088fdb19 +0x155:  mov    0x8(%ebp),%eax
088fdb1c +0x158:  movb   $0x0,0x78(%eax)
088fdb20 +0x15c:  mov    0x8(%ebp),%eax
088fdb23 +0x15f:  movl   $0x0,0x28(%eax)
088fdb2a +0x166:  mov    0x8(%ebp),%eax
088fdb2d +0x169:  movl   $0xffffffff,0x7c(%eax)
088fdb34 +0x170:  leave
088fdb35 +0x171:  ret
```

## 反编译 C

```c
// STCeraShopItem::clear @ 0x88fd9c4

/* STCeraShopItem::clear() */

void __thiscall STCeraShopItem::clear(STCeraShopItem *this)

{
  *this = (STCeraShopItem)0xff;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0xfffffffe;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  this[0x18] = (STCeraShopItem)0xff;
  *(undefined4 *)(this + 0x1c) = 1;
  this[0x20] = (STCeraShopItem)0x0;
  *(undefined2 *)(this + 0x22) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x3c] = (STCeraShopItem)0xff;
  std::string::operator=((string *)(this + 0x40),"");
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  this[0x50] = (STCeraShopItem)0x0;
  this[0x51] = (STCeraShopItem)0x0;
  this[0x52] = (STCeraShopItem)0x0;
  this[0x53] = (STCeraShopItem)0x1;
  *(undefined4 *)(this + 0x54) = 0xfffffffe;
  *(undefined4 *)(this + 0x58) = 0xffffffff;
  *(undefined4 *)(this + 0x5c) = 0;
  this[0x60] = (STCeraShopItem)0xc;
  *(undefined2 *)(this + 0x62) = 0;
  *(undefined2 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  this[0x78] = (STCeraShopItem)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x7c) = 0xffffffff;
  return;
}
```
