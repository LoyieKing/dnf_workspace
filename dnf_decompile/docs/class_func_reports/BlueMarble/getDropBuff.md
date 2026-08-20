# getDropBuff

`_ZNK10BlueMarble11getDropBuffEi`

`BlueMarble::getDropBuff(int) const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d786e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d786e  _ZNK10BlueMarble11getDropBuffEi
#           BlueMarble::getDropBuff(int) const
# range [0x080d786e, 0x080d7893]
080d786e +0x00:  push   %ebp
080d786f +0x01:  mov    %esp,%ebp
080d7871 +0x03:  sub    $0x18,%esp
080d7874 +0x06:  mov    0xc(%ebp),%eax
080d7877 +0x09:  mov    0x8(%ebp),%edx
080d787a +0x0c:  add    $0x4,%edx
080d787d +0x0f:  mov    %eax,0x4(%esp)
080d7881 +0x13:  mov    %edx,(%esp)
080d7884 +0x16:  call   080da504 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6a1
080d7889 +0x1b:  mov    %eax,(%esp)
080d788c +0x1e:  call   080d6d3c <_ZNK18BlueMarbleUserInfo7getDropEv>  ; BlueMarbleUserInfo::getDrop() const
080d7891 +0x23:  leave
080d7892 +0x24:  ret
080d7893 +0x25:  nop
```

## 反编译 C

```c
// BlueMarble::getDropBuff @ 0x80d786e

/* BlueMarble::getDropBuff(int) const */

void __thiscall BlueMarble::getDropBuff(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::getDrop(this_00);
  return;
}
```
