# checkStartBlueMarble

`_ZN10BlueMarble20checkStartBlueMarbleEv`

`BlueMarble::checkStartBlueMarble()`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d6dd4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6dd4  _ZN10BlueMarble20checkStartBlueMarbleEv
#           BlueMarble::checkStartBlueMarble()
# range [0x080d6dd4, 0x080d6e33]
080d6dd4 +0x00:  push   %ebp
080d6dd5 +0x01:  mov    %esp,%ebp
080d6dd7 +0x03:  sub    $0x18,%esp
080d6dda +0x06:  mov    0x8(%ebp),%eax
080d6ddd +0x09:  mov    %eax,(%esp)
080d6de0 +0x0c:  call   080d6dc8 <_ZNK10BlueMarble8getStateEv>  ; BlueMarble::getState() const
080d6de5 +0x11:  cmp    $0x1,%eax
080d6de8 +0x14:  setne  %al
080d6deb +0x17:  test   %al,%al
080d6ded +0x19:  je     080d6df6 <+0x22>
080d6def +0x1b:  mov    $0x0,%eax
080d6df4 +0x20:  jmp    080d6e32 <+0x5e>
080d6df6 +0x22:  mov    0x8(%ebp),%eax
080d6df9 +0x25:  mov    %eax,(%esp)
080d6dfc +0x28:  call   080d90da <_ZNK10BlueMarble16getWaitUserCountEv>  ; BlueMarble::getWaitUserCount() const
080d6e01 +0x2d:  mov    0x8(%ebp),%edx
080d6e04 +0x30:  mov    0x38(%edx),%edx
080d6e07 +0x33:  mov    0x30(%edx),%edx
080d6e0a +0x36:  cmp    %edx,%eax
080d6e0c +0x38:  setl   %al
080d6e0f +0x3b:  test   %al,%al
080d6e11 +0x3d:  je     080d6e2d <+0x59>
080d6e13 +0x3f:  movl   $0x0,0x4(%esp)
080d6e1b +0x47:  mov    0x8(%ebp),%eax
080d6e1e +0x4a:  mov    %eax,(%esp)
080d6e21 +0x4d:  call   080d9202 <_ZN10BlueMarble11changeStateEN15BlueMarbleState1TE>  ; BlueMarble::changeState(BlueMarbleState::T)
080d6e26 +0x52:  mov    $0x0,%eax
080d6e2b +0x57:  jmp    080d6e32 <+0x5e>
080d6e2d +0x59:  mov    $0x1,%eax
080d6e32 +0x5e:  leave
080d6e33 +0x5f:  ret
```

## 反编译 C

```c
// BlueMarble::checkStartBlueMarble @ 0x80d6dd4

/* BlueMarble::checkStartBlueMarble() */

undefined4 __thiscall BlueMarble::checkStartBlueMarble(BlueMarble *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = getState(this);
  if (iVar1 == 1) {
    iVar1 = getWaitUserCount(this);
    if (iVar1 < *(int *)(*(int *)(this + 0x38) + 0x30)) {
      changeState(this,0);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
