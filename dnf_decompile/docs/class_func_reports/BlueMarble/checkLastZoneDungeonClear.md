# checkLastZoneDungeonClear

`_ZN10BlueMarble25checkLastZoneDungeonClearEi`

`BlueMarble::checkLastZoneDungeonClear(int)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d798c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d798c  _ZN10BlueMarble25checkLastZoneDungeonClearEi
#           BlueMarble::checkLastZoneDungeonClear(int)
# range [0x080d798c, 0x080d79ed]
080d798c +0x00:  push   %ebp
080d798d +0x01:  mov    %esp,%ebp
080d798f +0x03:  push   %ebx
080d7990 +0x04:  sub    $0x14,%esp
080d7993 +0x07:  mov    0x8(%ebp),%eax
080d7996 +0x0a:  mov    %eax,(%esp)
080d7999 +0x0d:  call   080d6dc8 <_ZNK10BlueMarble8getStateEv>  ; BlueMarble::getState() const
080d799e +0x12:  cmp    $0x2,%eax
080d79a1 +0x15:  sete   %al
080d79a4 +0x18:  test   %al,%al
080d79a6 +0x1a:  je     080d79e2 <+0x56>
080d79a8 +0x1c:  mov    0xc(%ebp),%eax
080d79ab +0x1f:  mov    0x8(%ebp),%edx
080d79ae +0x22:  add    $0x4,%edx
080d79b1 +0x25:  mov    %eax,0x4(%esp)
080d79b5 +0x29:  mov    %edx,(%esp)
080d79b8 +0x2c:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d79bd +0x31:  mov    %eax,(%esp)
080d79c0 +0x34:  call   080d6c04 <_ZNK18BlueMarbleUserInfo12getBoardZoneEv>  ; BlueMarbleUserInfo::getBoardZone() const
080d79c5 +0x39:  mov    %eax,%ebx
080d79c7 +0x3b:  mov    0x8(%ebp),%eax
080d79ca +0x3e:  mov    %eax,(%esp)
080d79cd +0x41:  call   080d6ecc <_ZNK10BlueMarble15getMaxBoardSizeEv>  ; BlueMarble::getMaxBoardSize() const
080d79d2 +0x46:  cmp    %eax,%ebx
080d79d4 +0x48:  sete   %al
080d79d7 +0x4b:  test   %al,%al
080d79d9 +0x4d:  je     080d79e2 <+0x56>
080d79db +0x4f:  mov    $0x1,%eax
080d79e0 +0x54:  jmp    080d79e7 <+0x5b>
080d79e2 +0x56:  mov    $0x0,%eax
080d79e7 +0x5b:  add    $0x14,%esp
080d79ea +0x5e:  pop    %ebx
080d79eb +0x5f:  pop    %ebp
080d79ec +0x60:  ret
080d79ed +0x61:  nop
```

## 反编译 C

```c
// BlueMarble::checkLastZoneDungeonClear @ 0x80d798c

/* BlueMarble::checkLastZoneDungeonClear(int) */

undefined4 __thiscall BlueMarble::checkLastZoneDungeonClear(BlueMarble *this,int param_1)

{
  int iVar1;
  BlueMarbleUserInfo *this_00;
  int iVar2;
  
  iVar1 = getState(this);
  if (iVar1 == 2) {
    this_00 = (BlueMarbleUserInfo *)
              std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                        ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4)
                         ,param_1);
    iVar1 = BlueMarbleUserInfo::getBoardZone(this_00);
    iVar2 = getMaxBoardSize(this);
    if (iVar1 == iVar2) {
      return 1;
    }
  }
  return 0;
}
```
