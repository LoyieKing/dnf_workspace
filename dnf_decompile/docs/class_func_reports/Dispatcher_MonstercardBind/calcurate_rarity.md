# calcurate_rarity

`_ZN26Dispatcher_MonstercardBind16calcurate_rarityE11ENUM_RARITYt`

`Dispatcher_MonstercardBind::calcurate_rarity(ENUM_RARITY, unsigned short)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MonstercardBind` | `0x081d842e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d842e  _ZN26Dispatcher_MonstercardBind16calcurate_rarityE11ENUM_RARITYt
#           Dispatcher_MonstercardBind::calcurate_rarity(ENUM_RARITY, unsigned short)
# range [0x081d842e, 0x081d849f]
081d842e +0x00:  push   %ebp
081d842f +0x01:  mov    %esp,%ebp
081d8431 +0x03:  sub    $0x38,%esp
081d8434 +0x06:  mov    0x10(%ebp),%eax
081d8437 +0x09:  mov    %ax,-0x1c(%ebp)
081d843b +0x0d:  movl   $0x2710,-0xc(%ebp)
081d8442 +0x14:  mov    0x8(%ebp),%eax
081d8445 +0x17:  mov    0x4(%eax),%eax
081d8448 +0x1a:  lea    -0xc(%ebp),%edx
081d844b +0x1d:  mov    %edx,0x4(%esp)
081d844f +0x21:  mov    %eax,(%esp)
081d8452 +0x24:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
081d8457 +0x29:  movzwl -0x1c(%ebp),%edx
081d845b +0x2d:  cmp    %edx,%eax
081d845d +0x2f:  setb   %al
081d8460 +0x32:  test   %al,%al
081d8462 +0x34:  je     081d849a <+0x6c>
081d8464 +0x36:  mov    0xc(%ebp),%eax
081d8467 +0x39:  cmp    $0x1,%eax
081d846a +0x3c:  je     081d8485 <+0x57>
081d846c +0x3e:  cmp    $0x1,%eax
081d846f +0x41:  jg     081d8477 <+0x49>
081d8471 +0x43:  test   %eax,%eax
081d8473 +0x45:  je     081d847e <+0x50>
081d8475 +0x47:  jmp    081d8493 <+0x65>
081d8477 +0x49:  cmp    $0x3,%eax
081d847a +0x4c:  jg     081d8493 <+0x65>
081d847c +0x4e:  jmp    081d848c <+0x5e>
081d847e +0x50:  mov    $0x1,%eax
081d8483 +0x55:  jmp    081d849d <+0x6f>
081d8485 +0x57:  mov    $0x2,%eax
081d848a +0x5c:  jmp    081d849d <+0x6f>
081d848c +0x5e:  mov    $0x3,%eax
081d8491 +0x63:  jmp    081d849d <+0x6f>
081d8493 +0x65:  mov    $0x0,%eax
081d8498 +0x6a:  jmp    081d849d <+0x6f>
081d849a +0x6c:  mov    0xc(%ebp),%eax
081d849d +0x6f:  leave
081d849e +0x70:  ret
081d849f +0x71:  nop
```

## 反编译 C

```c
// Dispatcher_MonstercardBind::calcurate_rarity @ 0x81d842e

/* Dispatcher_MonstercardBind::calcurate_rarity(ENUM_RARITY, unsigned short) */

int __thiscall
Dispatcher_MonstercardBind::calcurate_rarity
          (Dispatcher_MonstercardBind *this,int param_2,uint param_3)

{
  uint uVar1;
  ulong local_10 [3];
  
  local_10[0] = 10000;
  uVar1 = CMTRand::randInt(*(CMTRand **)(this + 4),local_10);
  if (uVar1 < (param_3 & 0xffff)) {
    if (param_2 == 1) {
      param_2 = 2;
    }
    else {
      if (param_2 < 2) {
        if (param_2 == 0) {
          return 1;
        }
      }
      else if (param_2 < 4) {
        return 3;
      }
      param_2 = 0;
    }
  }
  return param_2;
}
```
