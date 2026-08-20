# getUserDeadCount

`_ZNK10BlueMarble16getUserDeadCountEi`

`BlueMarble::getUserDeadCount(int) const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d78c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d78c2  _ZNK10BlueMarble16getUserDeadCountEi
#           BlueMarble::getUserDeadCount(int) const
# range [0x080d78c2, 0x080d78ef]
080d78c2 +0x00:  push   %ebp
080d78c3 +0x01:  mov    %esp,%ebp
080d78c5 +0x03:  sub    $0x18,%esp
080d78c8 +0x06:  mov    0xc(%ebp),%eax
080d78cb +0x09:  mov    0x8(%ebp),%edx
080d78ce +0x0c:  add    $0x4,%edx
080d78d1 +0x0f:  mov    %eax,0x4(%esp)
080d78d5 +0x13:  mov    %edx,(%esp)
080d78d8 +0x16:  call   080da504 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6a1
080d78dd +0x1b:  mov    %eax,(%esp)
080d78e0 +0x1e:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d78e5 +0x23:  mov    %eax,(%esp)
080d78e8 +0x26:  call   08690faa <_ZNK15CUserCharacInfo26getBlueMarbleUserDeadCountEv>  ; CUserCharacInfo::getBlueMarbleUserDeadCount() const
080d78ed +0x2b:  leave
080d78ee +0x2c:  ret
080d78ef +0x2d:  nop
```

## 反编译 C

```c
// BlueMarble::getUserDeadCount @ 0x80d78c2

/* BlueMarble::getUserDeadCount(int) const */

void __thiscall BlueMarble::getUserDeadCount(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  CUserCharacInfo *this_01;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  this_01 = (CUserCharacInfo *)BlueMarbleUserInfo::getUser(this_00);
  CUserCharacInfo::getBlueMarbleUserDeadCount(this_01);
  return;
}
```
