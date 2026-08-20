# setResultItem

`_ZN10BlueMarble13setResultItemEiR10Inven_Item`

`BlueMarble::setResultItem(int, Inven_Item&)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d7e8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d7e8e  _ZN10BlueMarble13setResultItemEiR10Inven_Item
#           BlueMarble::setResultItem(int, Inven_Item&)
# range [0x080d7e8e, 0x080d800d]
080d7e8e +0x000:  push   %ebp
080d7e8f +0x001:  mov    %esp,%ebp
080d7e91 +0x003:  sub    $0x18,%esp
080d7e94 +0x006:  mov    0xc(%ebp),%eax
080d7e97 +0x009:  mov    0x8(%ebp),%edx
080d7e9a +0x00c:  add    $0x4,%edx
080d7e9d +0x00f:  mov    %eax,0x4(%esp)
080d7ea1 +0x013:  mov    %edx,(%esp)
080d7ea4 +0x016:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d7ea9 +0x01b:  mov    %eax,(%esp)
080d7eac +0x01e:  call   080d6c1e <_ZNK18BlueMarbleUserInfo8getGradeEv>  ; BlueMarbleUserInfo::getGrade() const
080d7eb1 +0x023:  cmp    $0x1,%eax
080d7eb4 +0x026:  je     080d7f29 <+0x9b>
080d7eb6 +0x028:  cmp    $0x1,%eax
080d7eb9 +0x02b:  jg     080d7ec4 <+0x36>
080d7ebb +0x02d:  test   %eax,%eax
080d7ebd +0x02f:  je     080d7edb <+0x4d>
080d7ebf +0x031:  jmp    080d800b <+0x17d>
080d7ec4 +0x036:  cmp    $0x2,%eax
080d7ec7 +0x039:  je     080d7f77 <+0xe9>
080d7ecd +0x03f:  cmp    $0x3,%eax
080d7ed0 +0x042:  je     080d7fc2 <+0x134>
080d7ed6 +0x048:  jmp    080d800b <+0x17d>
080d7edb +0x04d:  mov    0x8(%ebp),%eax
080d7ede +0x050:  mov    0x38(%eax),%eax
080d7ee1 +0x053:  add    $0xa4,%eax
080d7ee6 +0x058:  movl   $0x0,0x4(%esp)
080d7eee +0x060:  mov    %eax,(%esp)
080d7ef1 +0x063:  call   080da764 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x901>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x901
080d7ef6 +0x068:  mov    (%eax),%eax
080d7ef8 +0x06a:  mov    %eax,%edx
080d7efa +0x06c:  mov    0x10(%ebp),%eax
080d7efd +0x06f:  mov    %edx,0x2(%eax)
080d7f00 +0x072:  mov    0x8(%ebp),%eax
080d7f03 +0x075:  mov    0x38(%eax),%eax
080d7f06 +0x078:  add    $0xa4,%eax
080d7f0b +0x07d:  movl   $0x0,0x4(%esp)
080d7f13 +0x085:  mov    %eax,(%esp)
080d7f16 +0x088:  call   080da764 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x901>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x901
080d7f1b +0x08d:  mov    0x4(%eax),%edx
080d7f1e +0x090:  mov    0x10(%ebp),%eax
080d7f21 +0x093:  mov    %edx,0x7(%eax)
080d7f24 +0x096:  jmp    080d800b <+0x17d>
080d7f29 +0x09b:  mov    0x8(%ebp),%eax
080d7f2c +0x09e:  mov    0x38(%eax),%eax
080d7f2f +0x0a1:  add    $0xa4,%eax
080d7f34 +0x0a6:  movl   $0x1,0x4(%esp)
080d7f3c +0x0ae:  mov    %eax,(%esp)
080d7f3f +0x0b1:  call   080da764 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x901>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x901
080d7f44 +0x0b6:  mov    (%eax),%eax
080d7f46 +0x0b8:  mov    %eax,%edx
080d7f48 +0x0ba:  mov    0x10(%ebp),%eax
080d7f4b +0x0bd:  mov    %edx,0x2(%eax)
080d7f4e +0x0c0:  mov    0x8(%ebp),%eax
080d7f51 +0x0c3:  mov    0x38(%eax),%eax
080d7f54 +0x0c6:  add    $0xa4,%eax
080d7f59 +0x0cb:  movl   $0x1,0x4(%esp)
080d7f61 +0x0d3:  mov    %eax,(%esp)
080d7f64 +0x0d6:  call   080da764 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x901>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x901
080d7f69 +0x0db:  mov    0x4(%eax),%edx
080d7f6c +0x0de:  mov    0x10(%ebp),%eax
080d7f6f +0x0e1:  mov    %edx,0x7(%eax)
080d7f72 +0x0e4:  jmp    080d800b <+0x17d>
080d7f77 +0x0e9:  mov    0x8(%ebp),%eax
080d7f7a +0x0ec:  mov    0x38(%eax),%eax
080d7f7d +0x0ef:  add    $0xa4,%eax
080d7f82 +0x0f4:  movl   $0x2,0x4(%esp)
080d7f8a +0x0fc:  mov    %eax,(%esp)
080d7f8d +0x0ff:  call   080da764 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x901>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x901
080d7f92 +0x104:  mov    (%eax),%eax
080d7f94 +0x106:  mov    %eax,%edx
080d7f96 +0x108:  mov    0x10(%ebp),%eax
080d7f99 +0x10b:  mov    %edx,0x2(%eax)
080d7f9c +0x10e:  mov    0x8(%ebp),%eax
080d7f9f +0x111:  mov    0x38(%eax),%eax
080d7fa2 +0x114:  add    $0xa4,%eax
080d7fa7 +0x119:  movl   $0x2,0x4(%esp)
080d7faf +0x121:  mov    %eax,(%esp)
080d7fb2 +0x124:  call   080da764 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x901>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x901
080d7fb7 +0x129:  mov    0x4(%eax),%edx
080d7fba +0x12c:  mov    0x10(%ebp),%eax
080d7fbd +0x12f:  mov    %edx,0x7(%eax)
080d7fc0 +0x132:  jmp    080d800b <+0x17d>
080d7fc2 +0x134:  mov    0x8(%ebp),%eax
080d7fc5 +0x137:  mov    0x38(%eax),%eax
080d7fc8 +0x13a:  add    $0xa4,%eax
080d7fcd +0x13f:  movl   $0x3,0x4(%esp)
080d7fd5 +0x147:  mov    %eax,(%esp)
080d7fd8 +0x14a:  call   080da764 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x901>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x901
080d7fdd +0x14f:  mov    (%eax),%eax
080d7fdf +0x151:  mov    %eax,%edx
080d7fe1 +0x153:  mov    0x10(%ebp),%eax
080d7fe4 +0x156:  mov    %edx,0x2(%eax)
080d7fe7 +0x159:  mov    0x8(%ebp),%eax
080d7fea +0x15c:  mov    0x38(%eax),%eax
080d7fed +0x15f:  add    $0xa4,%eax
080d7ff2 +0x164:  movl   $0x3,0x4(%esp)
080d7ffa +0x16c:  mov    %eax,(%esp)
080d7ffd +0x16f:  call   080da764 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x901>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x901
080d8002 +0x174:  mov    0x4(%eax),%edx
080d8005 +0x177:  mov    0x10(%ebp),%eax
080d8008 +0x17a:  mov    %edx,0x7(%eax)
080d800b +0x17d:  leave
080d800c +0x17e:  ret
080d800d +0x17f:  nop
```

## 反编译 C

```c
// BlueMarble::setResultItem @ 0x80d7e8e

/* BlueMarble::setResultItem(int, Inven_Item&) */

void __thiscall BlueMarble::setResultItem(BlueMarble *this,int param_1,Inven_Item *param_2)

{
  BlueMarbleUserInfo *this_00;
  int iVar1;
  undefined4 *puVar2;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  iVar1 = BlueMarbleUserInfo::getGrade(this_00);
  if (iVar1 == 1) {
    puVar2 = (undefined4 *)
             std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::operator[]
                       ((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>> *)
                        (*(int *)(this + 0x38) + 0xa4),1);
    *(undefined4 *)(param_2 + 2) = *puVar2;
    iVar1 = std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::operator[]
                      ((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>> *)
                       (*(int *)(this + 0x38) + 0xa4),1);
    *(undefined4 *)(param_2 + 7) = *(undefined4 *)(iVar1 + 4);
  }
  else if (iVar1 < 2) {
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)
               std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::operator[]
                         ((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>> *)
                          (*(int *)(this + 0x38) + 0xa4),0);
      *(undefined4 *)(param_2 + 2) = *puVar2;
      iVar1 = std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::operator[]
                        ((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>> *)
                         (*(int *)(this + 0x38) + 0xa4),0);
      *(undefined4 *)(param_2 + 7) = *(undefined4 *)(iVar1 + 4);
    }
  }
  else if (iVar1 == 2) {
    puVar2 = (undefined4 *)
             std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::operator[]
                       ((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>> *)
                        (*(int *)(this + 0x38) + 0xa4),2);
    *(undefined4 *)(param_2 + 2) = *puVar2;
    iVar1 = std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::operator[]
                      ((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>> *)
                       (*(int *)(this + 0x38) + 0xa4),2);
    *(undefined4 *)(param_2 + 7) = *(undefined4 *)(iVar1 + 4);
  }
  else if (iVar1 == 3) {
    puVar2 = (undefined4 *)
             std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::operator[]
                       ((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>> *)
                        (*(int *)(this + 0x38) + 0xa4),3);
    *(undefined4 *)(param_2 + 2) = *puVar2;
    iVar1 = std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::operator[]
                      ((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>> *)
                       (*(int *)(this + 0x38) + 0xa4),3);
    *(undefined4 *)(param_2 + 7) = *(undefined4 *)(iVar1 + 4);
  }
  return;
}
```
