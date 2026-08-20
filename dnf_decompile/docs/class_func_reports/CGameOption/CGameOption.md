# CGameOption

`_ZN11CGameOptionC1Ev`

`CGameOption::CGameOption()`

| 类 | 地址 |
|---|---|
| `CGameOption` | `0x084b6c58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b6c58  _ZN11CGameOptionC1Ev
#           CGameOption::CGameOption()
# range [0x084b6c58, 0x084b6cef]
084b6c58 +0x00:  push   %ebp
084b6c59 +0x01:  mov    %esp,%ebp
084b6c5b +0x03:  push   %esi
084b6c5c +0x04:  push   %ebx
084b6c5d +0x05:  sub    $0x10,%esp
084b6c60 +0x08:  mov    0x8(%ebp),%eax
084b6c63 +0x0b:  mov    %eax,%ebx
084b6c65 +0x0d:  mov    $0x1,%esi
084b6c6a +0x12:  jmp    084b6c7d <+0x25>
084b6c6c +0x14:  mov    %ebx,(%esp)
084b6c6f +0x17:  call   0822aae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x18a
084b6c74 +0x1c:  add    $0xbc,%ebx
084b6c7a +0x22:  sub    $0x1,%esi
084b6c7d +0x25:  cmp    $0xffffffff,%esi
084b6c80 +0x28:  setne  %al
084b6c83 +0x2b:  test   %al,%al
084b6c85 +0x2d:  jne    084b6c6c <+0x14>
084b6c87 +0x2f:  mov    0x8(%ebp),%eax
084b6c8a +0x32:  add    $0x17a,%eax
084b6c8f +0x37:  mov    %eax,(%esp)
084b6c92 +0x3a:  call   0822ab20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1ca
084b6c97 +0x3f:  mov    0x8(%ebp),%eax
084b6c9a +0x42:  add    $0x1c2,%eax
084b6c9f +0x47:  mov    %eax,%ebx
084b6ca1 +0x49:  mov    $0x1,%esi
084b6ca6 +0x4e:  jmp    084b6cb9 <+0x61>
084b6ca8 +0x50:  mov    %ebx,(%esp)
084b6cab +0x53:  call   0822ab98 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x242>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x242
084b6cb0 +0x58:  add    $0x12c,%ebx
084b6cb6 +0x5e:  sub    $0x1,%esi
084b6cb9 +0x61:  cmp    $0xffffffff,%esi
084b6cbc +0x64:  setne  %al
084b6cbf +0x67:  test   %al,%al
084b6cc1 +0x69:  jne    084b6ca8 <+0x50>
084b6cc3 +0x6b:  mov    0x8(%ebp),%eax
084b6cc6 +0x6e:  add    $0x41b,%eax
084b6ccb +0x73:  mov    %eax,(%esp)
084b6cce +0x76:  call   084b738c <_GLOBAL__I__ZN11CGameOptionC2Ev+0x72>  ; global constructors keyed to CGameOption::CGameOption()+0x72
084b6cd3 +0x7b:  mov    0x8(%ebp),%eax
084b6cd6 +0x7e:  mov    %eax,(%esp)
084b6cd9 +0x81:  call   0822f002 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46ac
084b6cde +0x86:  mov    0x8(%ebp),%eax
084b6ce1 +0x89:  mov    %eax,(%esp)
084b6ce4 +0x8c:  call   084b7282 <_ZN11CGameOption22reset_load_hotkey_flagEv>  ; CGameOption::reset_load_hotkey_flag()
084b6ce9 +0x91:  add    $0x10,%esp
084b6cec +0x94:  pop    %ebx
084b6ced +0x95:  pop    %esi
084b6cee +0x96:  pop    %ebp
084b6cef +0x97:  ret
```

## 反编译 C

```c
// CGameOption::CGameOption @ 0x84b6c58

/* CGameOption::CGameOption() */

void __thiscall CGameOption::CGameOption(CGameOption *this)

{
  CQuickChattingOption *this_00;
  CGameOption *this_01;
  int iVar1;
  
  this_01 = this;
  for (iVar1 = 1; iVar1 != -1; iVar1 = iVar1 + -1) {
    CHotkeyOption::CHotkeyOption((CHotkeyOption *)this_01);
    this_01 = this_01 + 0xbc;
  }
  CETCOption::CETCOption((CETCOption *)(this + 0x17a));
  this_00 = (CQuickChattingOption *)(this + 0x1c2);
  for (iVar1 = 1; iVar1 != -1; iVar1 = iVar1 + -1) {
    CQuickChattingOption::CQuickChattingOption(this_00);
    this_00 = this_00 + 300;
  }
  CChattingEmoticonConfig::CChattingEmoticonConfig((CChattingEmoticonConfig *)(this + 0x41b));
  resetFlag_QuickChatChnage(this);
  reset_load_hotkey_flag(this);
  return;
}
```
