# setDiceNumber

`_ZN10BlueMarble13setDiceNumberEv`

`BlueMarble::setDiceNumber()`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d6f88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6f88  _ZN10BlueMarble13setDiceNumberEv
#           BlueMarble::setDiceNumber()
# range [0x080d6f88, 0x080d6fc3]
080d6f88 +0x00:  push   %ebp
080d6f89 +0x01:  mov    %esp,%ebp
080d6f8b +0x03:  sub    $0x18,%esp
080d6f8e +0x06:  mov    0x8(%ebp),%eax
080d6f91 +0x09:  mov    0x14(%eax),%eax
080d6f94 +0x0c:  mov    %eax,(%esp)
080d6f97 +0x0f:  call   080cba46 <_GLOBAL__I__ZN10BingoEventC2Ev+0x893>  ; global constructors keyed to BingoEvent::BingoEvent()+0x893
080d6f9c +0x14:  mov    0x8(%ebp),%edx
080d6f9f +0x17:  mov    0x38(%edx),%edx
080d6fa2 +0x1a:  mov    0x48(%edx),%edx
080d6fa5 +0x1d:  mov    %edx,%ecx
080d6fa7 +0x1f:  mov    $0x0,%edx
080d6fac +0x24:  div    %ecx
080d6fae +0x26:  mov    0x8(%ebp),%eax
080d6fb1 +0x29:  mov    0x38(%eax),%eax
080d6fb4 +0x2c:  mov    0x44(%eax),%eax
080d6fb7 +0x2f:  lea    (%edx,%eax,1),%eax
080d6fba +0x32:  mov    %eax,%edx
080d6fbc +0x34:  mov    0x8(%ebp),%eax
080d6fbf +0x37:  mov    %edx,0x18(%eax)
080d6fc2 +0x3a:  leave
080d6fc3 +0x3b:  ret
```

## 反编译 C

```c
// BlueMarble::setDiceNumber @ 0x80d6f88

/* BlueMarble::setDiceNumber() */

void __thiscall BlueMarble::setDiceNumber(BlueMarble *this)

{
  uint uVar1;
  
  uVar1 = CMTRand::randInt(*(CMTRand **)(this + 0x14));
  *(uint *)(this + 0x18) =
       uVar1 % *(uint *)(*(int *)(this + 0x38) + 0x48) + *(int *)(*(int *)(this + 0x38) + 0x44);
  return;
}
```
