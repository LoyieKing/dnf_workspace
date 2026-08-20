# setUserDeadCount

`_ZN10BlueMarble16setUserDeadCountEi`

`BlueMarble::setUserDeadCount(int)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d7894` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d7894  _ZN10BlueMarble16setUserDeadCountEi
#           BlueMarble::setUserDeadCount(int)
# range [0x080d7894, 0x080d78c1]
080d7894 +0x00:  push   %ebp
080d7895 +0x01:  mov    %esp,%ebp
080d7897 +0x03:  sub    $0x18,%esp
080d789a +0x06:  mov    0xc(%ebp),%eax
080d789d +0x09:  mov    0x8(%ebp),%edx
080d78a0 +0x0c:  add    $0x4,%edx
080d78a3 +0x0f:  mov    %eax,0x4(%esp)
080d78a7 +0x13:  mov    %edx,(%esp)
080d78aa +0x16:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d78af +0x1b:  mov    %eax,(%esp)
080d78b2 +0x1e:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d78b7 +0x23:  mov    %eax,(%esp)
080d78ba +0x26:  call   08690f86 <_ZN15CUserCharacInfo31increaseBlueMarbleUserDeadCountEv>  ; CUserCharacInfo::increaseBlueMarbleUserDeadCount()
080d78bf +0x2b:  leave
080d78c0 +0x2c:  ret
080d78c1 +0x2d:  nop
```

## 反编译 C

```c
// BlueMarble::setUserDeadCount @ 0x80d7894

/* BlueMarble::setUserDeadCount(int) */

void __thiscall BlueMarble::setUserDeadCount(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  CUserCharacInfo *this_01;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  this_01 = (CUserCharacInfo *)BlueMarbleUserInfo::getUser(this_00);
  CUserCharacInfo::increaseBlueMarbleUserDeadCount(this_01);
  return;
}
```
