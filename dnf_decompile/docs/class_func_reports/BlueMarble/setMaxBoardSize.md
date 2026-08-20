# setMaxBoardSize

`_ZN10BlueMarble15setMaxBoardSizeEv`

`BlueMarble::setMaxBoardSize()`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d6e88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6e88  _ZN10BlueMarble15setMaxBoardSizeEv
#           BlueMarble::setMaxBoardSize()
# range [0x080d6e88, 0x080d6ecb]
080d6e88 +0x00:  push   %ebp
080d6e89 +0x01:  mov    %esp,%ebp
080d6e8b +0x03:  sub    $0x28,%esp
080d6e8e +0x06:  mov    0x8(%ebp),%eax
080d6e91 +0x09:  mov    %eax,(%esp)
080d6e94 +0x0c:  call   080d6e7c <_ZNK10BlueMarble16getBlueMarbleMapEv>  ; BlueMarble::getBlueMarbleMap() const
080d6e99 +0x11:  mov    0x8(%ebp),%edx
080d6e9c +0x14:  mov    0x38(%edx),%edx
080d6e9f +0x17:  mov    %eax,0x4(%esp)
080d6ea3 +0x1b:  mov    %edx,(%esp)
080d6ea6 +0x1e:  call   088d66b6 <_ZN23BlueMarbleScriptManager6getMapEi>  ; BlueMarbleScriptManager::getMap(int)
080d6eab +0x23:  mov    %eax,-0xc(%ebp)
080d6eae +0x26:  cmpl   $0x0,-0xc(%ebp)
080d6eb2 +0x2a:  je     080d6ec9 <+0x41>
080d6eb4 +0x2c:  mov    -0xc(%ebp),%eax
080d6eb7 +0x2f:  mov    %eax,(%esp)
080d6eba +0x32:  call   080da4e8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x685>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x685
080d6ebf +0x37:  mov    %eax,%edx
080d6ec1 +0x39:  mov    0x8(%ebp),%eax
080d6ec4 +0x3c:  mov    %edx,0x3c(%eax)
080d6ec7 +0x3f:  jmp    080d6eca <+0x42>
080d6ec9 +0x41:  nop
080d6eca +0x42:  leave
080d6ecb +0x43:  ret
```

## 反编译 C

```c
// BlueMarble::setMaxBoardSize @ 0x80d6e88

/* BlueMarble::setMaxBoardSize() */

void __thiscall BlueMarble::setMaxBoardSize(BlueMarble *this)

{
  vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *this_00;
  undefined4 uVar1;
  
  getBlueMarbleMap(this);
  this_00 = (vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)
            BlueMarbleScriptManager::getMap(*(int *)(this + 0x38));
  if (this_00 != (vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)0x0) {
    uVar1 = std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::size(this_00);
    *(undefined4 *)(this + 0x3c) = uVar1;
  }
  return;
}
```
