# checkThrowDice

`_ZN10BlueMarble14checkThrowDiceEi`

`BlueMarble::checkThrowDice(int)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d6ed8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6ed8  _ZN10BlueMarble14checkThrowDiceEi
#           BlueMarble::checkThrowDice(int)
# range [0x080d6ed8, 0x080d6f61]
080d6ed8 +0x00:  push   %ebp
080d6ed9 +0x01:  mov    %esp,%ebp
080d6edb +0x03:  push   %ebx
080d6edc +0x04:  sub    $0x14,%esp
080d6edf +0x07:  mov    0xc(%ebp),%eax
080d6ee2 +0x0a:  mov    0x8(%ebp),%edx
080d6ee5 +0x0d:  add    $0x4,%edx
080d6ee8 +0x10:  mov    %eax,0x4(%esp)
080d6eec +0x14:  mov    %edx,(%esp)
080d6eef +0x17:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d6ef4 +0x1c:  mov    %eax,(%esp)
080d6ef7 +0x1f:  call   080d6c04 <_ZNK18BlueMarbleUserInfo12getBoardZoneEv>  ; BlueMarbleUserInfo::getBoardZone() const
080d6efc +0x24:  mov    %eax,%ebx
080d6efe +0x26:  mov    0x8(%ebp),%eax
080d6f01 +0x29:  mov    %eax,(%esp)
080d6f04 +0x2c:  call   080d6ecc <_ZNK10BlueMarble15getMaxBoardSizeEv>  ; BlueMarble::getMaxBoardSize() const
080d6f09 +0x31:  cmp    %eax,%ebx
080d6f0b +0x33:  jge    080d6f3f <+0x67>
080d6f0d +0x35:  mov    0xc(%ebp),%eax
080d6f10 +0x38:  mov    0x8(%ebp),%edx
080d6f13 +0x3b:  add    $0x4,%edx
080d6f16 +0x3e:  mov    %eax,0x4(%esp)
080d6f1a +0x42:  mov    %edx,(%esp)
080d6f1d +0x45:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d6f22 +0x4a:  mov    %eax,(%esp)
080d6f25 +0x4d:  call   080d6bae <_ZNK18BlueMarbleUserInfo12getUserStateEv>  ; BlueMarbleUserInfo::getUserState() const
080d6f2a +0x52:  cmp    $0x1,%eax
080d6f2d +0x55:  jne    080d6f3f <+0x67>
080d6f2f +0x57:  mov    0x8(%ebp),%eax
080d6f32 +0x5a:  mov    %eax,(%esp)
080d6f35 +0x5d:  call   080d6dc8 <_ZNK10BlueMarble8getStateEv>  ; BlueMarble::getState() const
080d6f3a +0x62:  cmp    $0x2,%eax
080d6f3d +0x65:  je     080d6f46 <+0x6e>
080d6f3f +0x67:  mov    $0x1,%eax
080d6f44 +0x6c:  jmp    080d6f4b <+0x73>
080d6f46 +0x6e:  mov    $0x0,%eax
080d6f4b +0x73:  test   %al,%al
080d6f4d +0x75:  je     080d6f56 <+0x7e>
080d6f4f +0x77:  mov    $0x0,%eax
080d6f54 +0x7c:  jmp    080d6f5b <+0x83>
080d6f56 +0x7e:  mov    $0x1,%eax
080d6f5b +0x83:  add    $0x14,%esp
080d6f5e +0x86:  pop    %ebx
080d6f5f +0x87:  pop    %ebp
080d6f60 +0x88:  ret
080d6f61 +0x89:  nop
```

## 反编译 C

```c
// BlueMarble::checkThrowDice @ 0x80d6ed8

/* BlueMarble::checkThrowDice(int) */

bool __thiscall BlueMarble::checkThrowDice(BlueMarble *this,int param_1)

{
  bool bVar1;
  BlueMarbleUserInfo *pBVar2;
  int iVar3;
  int iVar4;
  
  pBVar2 = (BlueMarbleUserInfo *)
           std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                     ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                      param_1);
  iVar3 = BlueMarbleUserInfo::getBoardZone(pBVar2);
  iVar4 = getMaxBoardSize(this);
  if (iVar3 < iVar4) {
    pBVar2 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        param_1);
    iVar3 = BlueMarbleUserInfo::getUserState(pBVar2);
    if ((iVar3 == 1) && (iVar3 = getState(this), iVar3 == 2)) {
      bVar1 = false;
      goto LAB_080d6f4b;
    }
  }
  bVar1 = true;
LAB_080d6f4b:
  return !bVar1;
}
```
