# getItemIndex

`_ZNK10BlueMarble12getItemIndexEi`

`BlueMarble::getItemIndex(int) const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d7778` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d7778  _ZNK10BlueMarble12getItemIndexEi
#           BlueMarble::getItemIndex(int) const
# range [0x080d7778, 0x080d779d]
080d7778 +0x00:  push   %ebp
080d7779 +0x01:  mov    %esp,%ebp
080d777b +0x03:  sub    $0x18,%esp
080d777e +0x06:  mov    0xc(%ebp),%eax
080d7781 +0x09:  mov    0x8(%ebp),%edx
080d7784 +0x0c:  add    $0x4,%edx
080d7787 +0x0f:  mov    %eax,0x4(%esp)
080d778b +0x13:  mov    %edx,(%esp)
080d778e +0x16:  call   080da504 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6a1
080d7793 +0x1b:  mov    %eax,(%esp)
080d7796 +0x1e:  call   080d6c52 <_ZNK18BlueMarbleUserInfo7getItemEv>  ; BlueMarbleUserInfo::getItem() const
080d779b +0x23:  leave
080d779c +0x24:  ret
080d779d +0x25:  nop
```

## 反编译 C

```c
// BlueMarble::getItemIndex @ 0x80d7778

/* BlueMarble::getItemIndex(int) const */

void __thiscall BlueMarble::getItemIndex(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::getItem(this_00);
  return;
}
```
