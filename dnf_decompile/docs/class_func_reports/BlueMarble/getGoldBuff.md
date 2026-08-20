# getGoldBuff

`_ZNK10BlueMarble11getGoldBuffEi`

`BlueMarble::getGoldBuff(int) const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d781c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d781c  _ZNK10BlueMarble11getGoldBuffEi
#           BlueMarble::getGoldBuff(int) const
# range [0x080d781c, 0x080d7841]
080d781c +0x00:  push   %ebp
080d781d +0x01:  mov    %esp,%ebp
080d781f +0x03:  sub    $0x18,%esp
080d7822 +0x06:  mov    0xc(%ebp),%eax
080d7825 +0x09:  mov    0x8(%ebp),%edx
080d7828 +0x0c:  add    $0x4,%edx
080d782b +0x0f:  mov    %eax,0x4(%esp)
080d782f +0x13:  mov    %edx,(%esp)
080d7832 +0x16:  call   080da504 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6a1
080d7837 +0x1b:  mov    %eax,(%esp)
080d783a +0x1e:  call   080d6cee <_ZNK18BlueMarbleUserInfo7getGoldEv>  ; BlueMarbleUserInfo::getGold() const
080d783f +0x23:  leave
080d7840 +0x24:  ret
080d7841 +0x25:  nop
```

## 反编译 C

```c
// BlueMarble::getGoldBuff @ 0x80d781c

/* BlueMarble::getGoldBuff(int) const */

void __thiscall BlueMarble::getGoldBuff(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::getGold(this_00);
  return;
}
```
