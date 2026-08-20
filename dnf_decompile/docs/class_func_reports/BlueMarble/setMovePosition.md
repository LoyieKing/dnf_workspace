# setMovePosition

`_ZN10BlueMarble15setMovePositionEii`

`BlueMarble::setMovePosition(int, int)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d6fd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6fd0  _ZN10BlueMarble15setMovePositionEii
#           BlueMarble::setMovePosition(int, int)
# range [0x080d6fd0, 0x080d7011]
080d6fd0 +0x00:  push   %ebp
080d6fd1 +0x01:  mov    %esp,%ebp
080d6fd3 +0x03:  push   %ebx
080d6fd4 +0x04:  sub    $0x14,%esp
080d6fd7 +0x07:  mov    0x8(%ebp),%eax
080d6fda +0x0a:  mov    %eax,(%esp)
080d6fdd +0x0d:  call   080d6ecc <_ZNK10BlueMarble15getMaxBoardSizeEv>  ; BlueMarble::getMaxBoardSize() const
080d6fe2 +0x12:  mov    %eax,%ebx
080d6fe4 +0x14:  mov    0xc(%ebp),%eax
080d6fe7 +0x17:  mov    0x8(%ebp),%edx
080d6fea +0x1a:  add    $0x4,%edx
080d6fed +0x1d:  mov    %eax,0x4(%esp)
080d6ff1 +0x21:  mov    %edx,(%esp)
080d6ff4 +0x24:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d6ff9 +0x29:  mov    %ebx,0x8(%esp)
080d6ffd +0x2d:  mov    0x10(%ebp),%edx
080d7000 +0x30:  mov    %edx,0x4(%esp)
080d7004 +0x34:  mov    %eax,(%esp)
080d7007 +0x37:  call   080d6bba <_ZN18BlueMarbleUserInfo12setBoardZoneEii>  ; BlueMarbleUserInfo::setBoardZone(int, int)
080d700c +0x3c:  add    $0x14,%esp
080d700f +0x3f:  pop    %ebx
080d7010 +0x40:  pop    %ebp
080d7011 +0x41:  ret
```

## 反编译 C

```c
// BlueMarble::setMovePosition @ 0x80d6fd0

/* BlueMarble::setMovePosition(int, int) */

void __thiscall BlueMarble::setMovePosition(BlueMarble *this,int param_1,int param_2)

{
  int iVar1;
  BlueMarbleUserInfo *this_00;
  
  iVar1 = getMaxBoardSize(this);
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::setBoardZone(this_00,param_2,iVar1);
  return;
}
```
