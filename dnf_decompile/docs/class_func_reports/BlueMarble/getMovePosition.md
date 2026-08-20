# getMovePosition

`_ZNK10BlueMarble15getMovePositionEi`

`BlueMarble::getMovePosition(int) const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d7012` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d7012  _ZNK10BlueMarble15getMovePositionEi
#           BlueMarble::getMovePosition(int) const
# range [0x080d7012, 0x080d7037]
080d7012 +0x00:  push   %ebp
080d7013 +0x01:  mov    %esp,%ebp
080d7015 +0x03:  sub    $0x18,%esp
080d7018 +0x06:  mov    0xc(%ebp),%eax
080d701b +0x09:  mov    0x8(%ebp),%edx
080d701e +0x0c:  add    $0x4,%edx
080d7021 +0x0f:  mov    %eax,0x4(%esp)
080d7025 +0x13:  mov    %edx,(%esp)
080d7028 +0x16:  call   080da504 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6a1
080d702d +0x1b:  mov    %eax,(%esp)
080d7030 +0x1e:  call   080d6c04 <_ZNK18BlueMarbleUserInfo12getBoardZoneEv>  ; BlueMarbleUserInfo::getBoardZone() const
080d7035 +0x23:  leave
080d7036 +0x24:  ret
080d7037 +0x25:  nop
```

## 反编译 C

```c
// BlueMarble::getMovePosition @ 0x80d7012

/* BlueMarble::getMovePosition(int) const */

void __thiscall BlueMarble::getMovePosition(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::getBoardZone(this_00);
  return;
}
```
