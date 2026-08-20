# setDropBuff

`_ZN10BlueMarble11setDropBuffEii`

`BlueMarble::setDropBuff(int, int)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d7842` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d7842  _ZN10BlueMarble11setDropBuffEii
#           BlueMarble::setDropBuff(int, int)
# range [0x080d7842, 0x080d786d]
080d7842 +0x00:  push   %ebp
080d7843 +0x01:  mov    %esp,%ebp
080d7845 +0x03:  sub    $0x18,%esp
080d7848 +0x06:  mov    0xc(%ebp),%eax
080d784b +0x09:  mov    0x8(%ebp),%edx
080d784e +0x0c:  add    $0x4,%edx
080d7851 +0x0f:  mov    %eax,0x4(%esp)
080d7855 +0x13:  mov    %edx,(%esp)
080d7858 +0x16:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d785d +0x1b:  mov    0x10(%ebp),%edx
080d7860 +0x1e:  mov    %edx,0x4(%esp)
080d7864 +0x22:  mov    %eax,(%esp)
080d7867 +0x25:  call   080d6cfa <_ZN18BlueMarbleUserInfo7setDropEi>  ; BlueMarbleUserInfo::setDrop(int)
080d786c +0x2a:  leave
080d786d +0x2b:  ret
```

## 反编译 C

```c
// BlueMarble::setDropBuff @ 0x80d7842

/* BlueMarble::setDropBuff(int, int) */

void __thiscall BlueMarble::setDropBuff(BlueMarble *this,int param_1,int param_2)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::setDrop(this_00,param_2);
  return;
}
```
