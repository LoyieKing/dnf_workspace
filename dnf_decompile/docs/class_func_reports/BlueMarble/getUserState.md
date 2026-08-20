# getUserState

`_ZNK10BlueMarble12getUserStateEi`

`BlueMarble::getUserState(int) const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d7966` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d7966  _ZNK10BlueMarble12getUserStateEi
#           BlueMarble::getUserState(int) const
# range [0x080d7966, 0x080d798b]
080d7966 +0x00:  push   %ebp
080d7967 +0x01:  mov    %esp,%ebp
080d7969 +0x03:  sub    $0x18,%esp
080d796c +0x06:  mov    0xc(%ebp),%eax
080d796f +0x09:  mov    0x8(%ebp),%edx
080d7972 +0x0c:  add    $0x4,%edx
080d7975 +0x0f:  mov    %eax,0x4(%esp)
080d7979 +0x13:  mov    %edx,(%esp)
080d797c +0x16:  call   080da504 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6a1
080d7981 +0x1b:  mov    %eax,(%esp)
080d7984 +0x1e:  call   080d6bae <_ZNK18BlueMarbleUserInfo12getUserStateEv>  ; BlueMarbleUserInfo::getUserState() const
080d7989 +0x23:  leave
080d798a +0x24:  ret
080d798b +0x25:  nop
```

## 反编译 C

```c
// BlueMarble::getUserState @ 0x80d7966

/* BlueMarble::getUserState(int) const */

void __thiscall BlueMarble::getUserState(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::getUserState(this_00);
  return;
}
```
