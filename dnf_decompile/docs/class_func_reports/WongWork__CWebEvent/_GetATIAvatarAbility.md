# _GetATIAvatarAbility

`_ZN8WongWork9CWebEvent20_GetATIAvatarAbilityEi`

`WongWork::CWebEvent::_GetATIAvatarAbility(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CWebEvent` | `0x086c1a2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c1a2e  _ZN8WongWork9CWebEvent20_GetATIAvatarAbilityEi
#           WongWork::CWebEvent::_GetATIAvatarAbility(int)
# range [0x086c1a2e, 0x086c1ab9]
086c1a2e +0x00:  push   %ebp
086c1a2f +0x01:  mov    %esp,%ebp
086c1a31 +0x03:  sub    $0x10,%esp
086c1a34 +0x06:  movl   $0x0,-0x4(%ebp)
086c1a3b +0x0d:  mov    0x8(%ebp),%eax
086c1a3e +0x10:  cmp    $0xaff8,%eax
086c1a43 +0x15:  je     086c1aae <+0x80>
086c1a45 +0x17:  cmp    $0xaff8,%eax
086c1a4a +0x1c:  jg     086c1a63 <+0x35>
086c1a4c +0x1e:  cmp    $0xa060,%eax
086c1a51 +0x23:  je     086c1aae <+0x80>
086c1a53 +0x25:  cmp    $0xae68,%eax
086c1a58 +0x2a:  je     086c1a93 <+0x65>
086c1a5a +0x2c:  cmp    $0x9ed0,%eax
086c1a5f +0x31:  je     086c1a8a <+0x5c>
086c1a61 +0x33:  jmp    086c1ab5 <+0x87>
086c1a63 +0x35:  cmp    $0xbf9c,%eax
086c1a68 +0x3a:  je     086c1aae <+0x80>
086c1a6a +0x3c:  cmp    $0xbf9c,%eax
086c1a6f +0x41:  jg     086c1a7a <+0x4c>
086c1a71 +0x43:  cmp    $0xbe0c,%eax
086c1a76 +0x48:  je     086c1a9c <+0x6e>
086c1a78 +0x4a:  jmp    086c1ab5 <+0x87>
086c1a7a +0x4c:  cmp    $0xcd81,%eax
086c1a7f +0x51:  je     086c1aa5 <+0x77>
086c1a81 +0x53:  cmp    $0xcf11,%eax
086c1a86 +0x58:  je     086c1aae <+0x80>
086c1a88 +0x5a:  jmp    086c1ab5 <+0x87>
086c1a8a +0x5c:  movl   $0x1,-0x4(%ebp)
086c1a91 +0x63:  jmp    086c1ab5 <+0x87>
086c1a93 +0x65:  movl   $0x6,-0x4(%ebp)
086c1a9a +0x6c:  jmp    086c1ab5 <+0x87>
086c1a9c +0x6e:  movl   $0x4,-0x4(%ebp)
086c1aa3 +0x75:  jmp    086c1ab5 <+0x87>
086c1aa5 +0x77:  movl   $0x0,-0x4(%ebp)
086c1aac +0x7e:  jmp    086c1ab5 <+0x87>
086c1aae +0x80:  movl   $0x0,-0x4(%ebp)
086c1ab5 +0x87:  mov    -0x4(%ebp),%eax
086c1ab8 +0x8a:  leave
086c1ab9 +0x8b:  ret
```

## 反编译 C

```c
// WongWork::CWebEvent::_GetATIAvatarAbility @ 0x86c1a2e

/* WongWork::CWebEvent::_GetATIAvatarAbility(int) */

undefined4 WongWork::CWebEvent::_GetATIAvatarAbility(int param_1)

{
  if (param_1 != 0xaff8) {
    if (param_1 < 0xaff9) {
      if (param_1 != 0xa060) {
        if (param_1 == 0xae68) {
          return 6;
        }
        if (param_1 != 0x9ed0) {
          return 0;
        }
        return 1;
      }
    }
    else if (param_1 != 0xbf9c) {
      if (param_1 < 0xbf9d) {
        if (param_1 != 0xbe0c) {
          return 0;
        }
        return 4;
      }
      if (param_1 == 0xcd81) {
        return 0;
      }
      if (param_1 != 0xcf11) {
        return 0;
      }
    }
  }
  return 0;
}
```
