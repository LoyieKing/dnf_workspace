# getExpBuff

`_ZNK10BlueMarble10getExpBuffEi`

`BlueMarble::getExpBuff(int) const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d77ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d77ca  _ZNK10BlueMarble10getExpBuffEi
#           BlueMarble::getExpBuff(int) const
# range [0x080d77ca, 0x080d77ef]
080d77ca +0x00:  push   %ebp
080d77cb +0x01:  mov    %esp,%ebp
080d77cd +0x03:  sub    $0x18,%esp
080d77d0 +0x06:  mov    0xc(%ebp),%eax
080d77d3 +0x09:  mov    0x8(%ebp),%edx
080d77d6 +0x0c:  add    $0x4,%edx
080d77d9 +0x0f:  mov    %eax,0x4(%esp)
080d77dd +0x13:  mov    %edx,(%esp)
080d77e0 +0x16:  call   080da504 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6a1
080d77e5 +0x1b:  mov    %eax,(%esp)
080d77e8 +0x1e:  call   080d6ca0 <_ZNK18BlueMarbleUserInfo6getExpEv>  ; BlueMarbleUserInfo::getExp() const
080d77ed +0x23:  leave
080d77ee +0x24:  ret
080d77ef +0x25:  nop
```

## 反编译 C

```c
// BlueMarble::getExpBuff @ 0x80d77ca

/* BlueMarble::getExpBuff(int) const */

void __thiscall BlueMarble::getExpBuff(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::getExp(this_00);
  return;
}
```
