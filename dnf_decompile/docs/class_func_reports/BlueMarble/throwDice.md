# throwDice

`_ZN10BlueMarble9throwDiceEi`

`BlueMarble::throwDice(int)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d6f62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6f62  _ZN10BlueMarble9throwDiceEi
#           BlueMarble::throwDice(int)
# range [0x080d6f62, 0x080d6f87]
080d6f62 +0x00:  push   %ebp
080d6f63 +0x01:  mov    %esp,%ebp
080d6f65 +0x03:  sub    $0x18,%esp
080d6f68 +0x06:  mov    0x8(%ebp),%eax
080d6f6b +0x09:  mov    %eax,(%esp)
080d6f6e +0x0c:  call   080d6f88 <_ZN10BlueMarble13setDiceNumberEv>  ; BlueMarble::setDiceNumber()
080d6f73 +0x11:  mov    0xc(%ebp),%eax
080d6f76 +0x14:  mov    %eax,0x4(%esp)
080d6f7a +0x18:  mov    0x8(%ebp),%eax
080d6f7d +0x1b:  mov    %eax,(%esp)
080d6f80 +0x1e:  call   080d8600 <_ZNK10BlueMarble22sendBlueMarbleDiceInfoEi>  ; BlueMarble::sendBlueMarbleDiceInfo(int) const
080d6f85 +0x23:  leave
080d6f86 +0x24:  ret
080d6f87 +0x25:  nop
```

## 反编译 C

```c
// BlueMarble::throwDice @ 0x80d6f62

/* BlueMarble::throwDice(int) */

void __thiscall BlueMarble::throwDice(BlueMarble *this,int param_1)

{
  setDiceNumber(this);
  sendBlueMarbleDiceInfo(this,param_1);
  return;
}
```
