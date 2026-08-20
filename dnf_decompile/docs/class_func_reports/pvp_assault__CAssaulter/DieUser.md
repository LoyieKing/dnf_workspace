# DieUser

`_ZN11pvp_assault10CAssaulter7DieUserEv`

`pvp_assault::CAssaulter::DieUser()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaulter` | `0x082e6a40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e6a40  _ZN11pvp_assault10CAssaulter7DieUserEv
#           pvp_assault::CAssaulter::DieUser()
# range [0x082e6a40, 0x082e6a81]
082e6a40 +0x00:  push   %ebp
082e6a41 +0x01:  mov    %esp,%ebp
082e6a43 +0x03:  sub    $0x18,%esp
082e6a46 +0x06:  mov    0x8(%ebp),%eax
082e6a49 +0x09:  mov    (%eax),%eax
082e6a4b +0x0b:  test   %eax,%eax
082e6a4d +0x0d:  je     082e6a7f <+0x3f>
082e6a4f +0x0f:  mov    0x8(%ebp),%eax
082e6a52 +0x12:  mov    (%eax),%edx
082e6a54 +0x14:  mov    0x8(%ebp),%eax
082e6a57 +0x17:  mov    (%eax),%eax
082e6a59 +0x19:  mov    %edx,0x8(%esp)
082e6a5d +0x1d:  movl   $0x0,0x4(%esp)
082e6a65 +0x25:  mov    %eax,(%esp)
082e6a68 +0x28:  call   0864628e <_ZN15CUserCharacInfo12DieCurCharacEiP5CUser>  ; CUserCharacInfo::DieCurCharac(int, CUser*)
082e6a6d +0x2d:  mov    0x8(%ebp),%eax
082e6a70 +0x30:  mov    (%eax),%eax
082e6a72 +0x32:  add    $0x796f4,%eax
082e6a77 +0x37:  mov    %eax,(%esp)
082e6a7a +0x3a:  call   0822fbda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5284>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5284
082e6a7f +0x3f:  leave
082e6a80 +0x40:  ret
082e6a81 +0x41:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaulter::DieUser @ 0x82e6a40

/* pvp_assault::CAssaulter::DieUser() */

void __thiscall pvp_assault::CAssaulter::DieUser(CAssaulter *this)

{
  if (*(int *)this != 0) {
    CUserCharacInfo::DieCurCharac(*(CUserCharacInfo **)this,0,*(CUser **)this);
    CCharacterView::enableSaveCharacView((CCharacterView *)(*(int *)this + 0x796f4));
  }
  return;
}
```
