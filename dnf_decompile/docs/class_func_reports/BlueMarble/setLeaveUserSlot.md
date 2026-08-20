# setLeaveUserSlot

`_ZN10BlueMarble16setLeaveUserSlotEi`

`BlueMarble::setLeaveUserSlot(int)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d82f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d82f2  _ZN10BlueMarble16setLeaveUserSlotEi
#           BlueMarble::setLeaveUserSlot(int)
# range [0x080d82f2, 0x080d8411]
080d82f2 +0x000:  push   %ebp
080d82f3 +0x001:  mov    %esp,%ebp
080d82f5 +0x003:  sub    $0x28,%esp
080d82f8 +0x006:  mov    0xc(%ebp),%eax
080d82fb +0x009:  mov    0x8(%ebp),%edx
080d82fe +0x00c:  add    $0x4,%edx
080d8301 +0x00f:  mov    %eax,0x4(%esp)
080d8305 +0x013:  mov    %edx,(%esp)
080d8308 +0x016:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d830d +0x01b:  mov    %eax,(%esp)
080d8310 +0x01e:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d8315 +0x023:  test   %eax,%eax
080d8317 +0x025:  sete   %al
080d831a +0x028:  test   %al,%al
080d831c +0x02a:  je     080d8373 <+0x81>
080d831e +0x02c:  mov    0xc(%ebp),%eax
080d8321 +0x02f:  mov    0x8(%ebp),%edx
080d8324 +0x032:  add    $0x4,%edx
080d8327 +0x035:  mov    %eax,0x4(%esp)
080d832b +0x039:  mov    %edx,(%esp)
080d832e +0x03c:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d8333 +0x041:  mov    %eax,(%esp)
080d8336 +0x044:  call   080d6b08 <_ZN18BlueMarbleUserInfo23resetBlueMarbleUserInfoEv>  ; BlueMarbleUserInfo::resetBlueMarbleUserInfo()
080d833b +0x049:  mov    0xc(%ebp),%eax
080d833e +0x04c:  mov    %eax,0x14(%esp)
080d8342 +0x050:  movl   $"BlueMarble::setLeaveUserSlot slot(%d)",0x10(%esp)
080d834a +0x058:  movl   $0x2c4,0xc(%esp)
080d8352 +0x060:  movl   $&_ZZN10BlueMarble16setLeaveUserSlotEiE19__PRETTY_FUNCTION__,0x8(%esp)
080d835a +0x068:  movl   $"BlueMarble.cpp",0x4(%esp)
080d8362 +0x070:  movl   $0x1,(%esp)
080d8369 +0x077:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080d836e +0x07c:  jmp    080d840f <+0x11d>
080d8373 +0x081:  mov    0xc(%ebp),%eax
080d8376 +0x084:  mov    0x8(%ebp),%edx
080d8379 +0x087:  add    $0x4,%edx
080d837c +0x08a:  mov    %eax,0x4(%esp)
080d8380 +0x08e:  mov    %edx,(%esp)
080d8383 +0x091:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d8388 +0x096:  mov    %eax,(%esp)
080d838b +0x099:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d8390 +0x09e:  movl   $0xffffffff,0x4(%esp)
080d8398 +0x0a6:  mov    %eax,(%esp)
080d839b +0x0a9:  call   080da340 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4dd>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4dd
080d83a0 +0x0ae:  mov    0xc(%ebp),%eax
080d83a3 +0x0b1:  mov    0x8(%ebp),%edx
080d83a6 +0x0b4:  add    $0x4,%edx
080d83a9 +0x0b7:  mov    %eax,0x4(%esp)
080d83ad +0x0bb:  mov    %edx,(%esp)
080d83b0 +0x0be:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d83b5 +0x0c3:  mov    %eax,(%esp)
080d83b8 +0x0c6:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d83bd +0x0cb:  movl   $0x0,0x4(%esp)
080d83c5 +0x0d3:  mov    %eax,(%esp)
080d83c8 +0x0d6:  call   08690eb8 <_ZN5CUser12setMoveSpaceEN9UserSpace1TE>  ; CUser::setMoveSpace(UserSpace::T)
080d83cd +0x0db:  mov    0xc(%ebp),%eax
080d83d0 +0x0de:  mov    0x8(%ebp),%edx
080d83d3 +0x0e1:  add    $0x4,%edx
080d83d6 +0x0e4:  mov    %eax,0x4(%esp)
080d83da +0x0e8:  mov    %edx,(%esp)
080d83dd +0x0eb:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d83e2 +0x0f0:  mov    %eax,(%esp)
080d83e5 +0x0f3:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d83ea +0x0f8:  mov    %eax,(%esp)
080d83ed +0x0fb:  call   08690f66 <_ZN15CUserCharacInfo28resetBlueMarbleUserDeadCountEv>  ; CUserCharacInfo::resetBlueMarbleUserDeadCount()
080d83f2 +0x100:  mov    0xc(%ebp),%eax
080d83f5 +0x103:  mov    0x8(%ebp),%edx
080d83f8 +0x106:  add    $0x4,%edx
080d83fb +0x109:  mov    %eax,0x4(%esp)
080d83ff +0x10d:  mov    %edx,(%esp)
080d8402 +0x110:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d8407 +0x115:  mov    %eax,(%esp)
080d840a +0x118:  call   080d6b08 <_ZN18BlueMarbleUserInfo23resetBlueMarbleUserInfoEv>  ; BlueMarbleUserInfo::resetBlueMarbleUserInfo()
080d840f +0x11d:  leave
080d8410 +0x11e:  ret
080d8411 +0x11f:  nop
```

## 反编译 C

```c
// BlueMarble::setLeaveUserSlot @ 0x80d82f2

/* BlueMarble::setLeaveUserSlot(int) */

void __thiscall BlueMarble::setLeaveUserSlot(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *pBVar1;
  int iVar2;
  CUser *pCVar3;
  CUserCharacInfo *this_00;
  
  pBVar1 = (BlueMarbleUserInfo *)
           std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                     ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                      param_1);
  iVar2 = BlueMarbleUserInfo::getUser(pBVar1);
  if (iVar2 == 0) {
    pBVar1 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        param_1);
    BlueMarbleUserInfo::resetBlueMarbleUserInfo(pBVar1);
    LogManager::logFormat
              (1,"BlueMarble.cpp","void BlueMarble::setLeaveUserSlot(int)",0x2c4,
               "BlueMarble::setLeaveUserSlot slot(%d)",param_1);
  }
  else {
    pBVar1 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        param_1);
    pCVar3 = (CUser *)BlueMarbleUserInfo::getUser(pBVar1);
    CUser::setBlueMarbleIndex(pCVar3,-1);
    pBVar1 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        param_1);
    pCVar3 = (CUser *)BlueMarbleUserInfo::getUser(pBVar1);
    CUser::setMoveSpace(pCVar3,0);
    pBVar1 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        param_1);
    this_00 = (CUserCharacInfo *)BlueMarbleUserInfo::getUser(pBVar1);
    CUserCharacInfo::resetBlueMarbleUserDeadCount(this_00);
    pBVar1 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        param_1);
    BlueMarbleUserInfo::resetBlueMarbleUserInfo(pBVar1);
  }
  return;
}
```
