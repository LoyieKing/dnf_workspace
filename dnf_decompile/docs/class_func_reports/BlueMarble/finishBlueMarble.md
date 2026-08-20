# finishBlueMarble

`_ZN10BlueMarble16finishBlueMarbleEi`

`BlueMarble::finishBlueMarble(int)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d79ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d79ee  _ZN10BlueMarble16finishBlueMarbleEi
#           BlueMarble::finishBlueMarble(int)
# range [0x080d79ee, 0x080d7a25]
080d79ee +0x00:  push   %ebp
080d79ef +0x01:  mov    %esp,%ebp
080d79f1 +0x03:  sub    $0x18,%esp
080d79f4 +0x06:  mov    0xc(%ebp),%eax
080d79f7 +0x09:  mov    %eax,0x4(%esp)
080d79fb +0x0d:  mov    0x8(%ebp),%eax
080d79fe +0x10:  mov    %eax,(%esp)
080d7a01 +0x13:  call   080d7afc <_ZN10BlueMarble12setUserGradeEi>  ; BlueMarble::setUserGrade(int)
080d7a06 +0x18:  movl   $0x3,0x4(%esp)
080d7a0e +0x20:  mov    0x8(%ebp),%eax
080d7a11 +0x23:  mov    %eax,(%esp)
080d7a14 +0x26:  call   080d9202 <_ZN10BlueMarble11changeStateEN15BlueMarbleState1TE>  ; BlueMarble::changeState(BlueMarbleState::T)
080d7a19 +0x2b:  mov    0x8(%ebp),%eax
080d7a1c +0x2e:  mov    %eax,(%esp)
080d7a1f +0x31:  call   080d8752 <_ZNK10BlueMarble20sendFinishBlueMarbleEv>  ; BlueMarble::sendFinishBlueMarble() const
080d7a24 +0x36:  leave
080d7a25 +0x37:  ret
```

## 反编译 C

```c
// BlueMarble::finishBlueMarble @ 0x80d79ee

/* BlueMarble::finishBlueMarble(int) */

void __thiscall BlueMarble::finishBlueMarble(BlueMarble *this,int param_1)

{
  setUserGrade(this,param_1);
  changeState(this,3);
  sendFinishBlueMarble(this);
  return;
}
```
