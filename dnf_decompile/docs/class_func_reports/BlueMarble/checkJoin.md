# checkJoin

`_ZN10BlueMarble9checkJoinEv`

`BlueMarble::checkJoin()`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d8cb6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d8cb6  _ZN10BlueMarble9checkJoinEv
#           BlueMarble::checkJoin()
# range [0x080d8cb6, 0x080d8d01]
080d8cb6 +0x00:  push   %ebp
080d8cb7 +0x01:  mov    %esp,%ebp
080d8cb9 +0x03:  sub    $0x18,%esp
080d8cbc +0x06:  mov    0x8(%ebp),%eax
080d8cbf +0x09:  mov    %eax,(%esp)
080d8cc2 +0x0c:  call   080d6dc8 <_ZNK10BlueMarble8getStateEv>  ; BlueMarble::getState() const
080d8cc7 +0x11:  test   %eax,%eax
080d8cc9 +0x13:  setne  %al
080d8ccc +0x16:  test   %al,%al
080d8cce +0x18:  je     080d8cd7 <+0x21>
080d8cd0 +0x1a:  mov    $0x0,%eax
080d8cd5 +0x1f:  jmp    080d8d00 <+0x4a>
080d8cd7 +0x21:  mov    0x8(%ebp),%eax
080d8cda +0x24:  mov    %eax,(%esp)
080d8cdd +0x27:  call   080d90da <_ZNK10BlueMarble16getWaitUserCountEv>  ; BlueMarble::getWaitUserCount() const
080d8ce2 +0x2c:  mov    0x8(%ebp),%edx
080d8ce5 +0x2f:  mov    0x38(%edx),%edx
080d8ce8 +0x32:  mov    0x30(%edx),%edx
080d8ceb +0x35:  cmp    %edx,%eax
080d8ced +0x37:  setge  %al
080d8cf0 +0x3a:  test   %al,%al
080d8cf2 +0x3c:  je     080d8cfb <+0x45>
080d8cf4 +0x3e:  mov    $0x0,%eax
080d8cf9 +0x43:  jmp    080d8d00 <+0x4a>
080d8cfb +0x45:  mov    $0x1,%eax
080d8d00 +0x4a:  leave
080d8d01 +0x4b:  ret
```

## 反编译 C

```c
// BlueMarble::checkJoin @ 0x80d8cb6

/* BlueMarble::checkJoin() */

undefined4 __thiscall BlueMarble::checkJoin(BlueMarble *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = getState(this);
  if (iVar1 == 0) {
    iVar1 = getWaitUserCount(this);
    if (iVar1 < *(int *)(*(int *)(this + 0x38) + 0x30)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
