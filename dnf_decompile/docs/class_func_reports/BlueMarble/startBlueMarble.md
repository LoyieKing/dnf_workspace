# startBlueMarble

`_ZN10BlueMarble15startBlueMarbleEv`

`BlueMarble::startBlueMarble()`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d92be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d92be  _ZN10BlueMarble15startBlueMarbleEv
#           BlueMarble::startBlueMarble()
# range [0x080d92be, 0x080d93d7]
080d92be +0x000:  push   %ebp
080d92bf +0x001:  mov    %esp,%ebp
080d92c1 +0x003:  sub    $0x28,%esp
080d92c4 +0x006:  mov    0x8(%ebp),%eax
080d92c7 +0x009:  mov    %eax,(%esp)
080d92ca +0x00c:  call   080d6dd4 <_ZN10BlueMarble20checkStartBlueMarbleEv>  ; BlueMarble::checkStartBlueMarble()
080d92cf +0x011:  test   %al,%al
080d92d1 +0x013:  je     080d93d5 <+0x117>
080d92d7 +0x019:  mov    0x8(%ebp),%eax
080d92da +0x01c:  mov    %eax,(%esp)
080d92dd +0x01f:  call   080d6d48 <_ZN10BlueMarble15resetBlueMarbleEv>  ; BlueMarble::resetBlueMarble()
080d92e2 +0x024:  movl   $0x2,0x4(%esp)
080d92ea +0x02c:  mov    0x8(%ebp),%eax
080d92ed +0x02f:  mov    %eax,(%esp)
080d92f0 +0x032:  call   080d9202 <_ZN10BlueMarble11changeStateEN15BlueMarbleState1TE>  ; BlueMarble::changeState(BlueMarbleState::T)
080d92f5 +0x037:  mov    0x8(%ebp),%eax
080d92f8 +0x03a:  mov    %eax,(%esp)
080d92fb +0x03d:  call   080d6e34 <_ZN10BlueMarble16setBlueMarbleMapEv>  ; BlueMarble::setBlueMarbleMap()
080d9300 +0x042:  mov    0x8(%ebp),%eax
080d9303 +0x045:  mov    %eax,(%esp)
080d9306 +0x048:  call   080d6e88 <_ZN10BlueMarble15setMaxBoardSizeEv>  ; BlueMarble::setMaxBoardSize()
080d930b +0x04d:  movl   $0x0,-0xc(%ebp)
080d9312 +0x054:  jmp    080d93b3 <+0xf5>
080d9317 +0x059:  mov    -0xc(%ebp),%eax
080d931a +0x05c:  mov    0x8(%ebp),%edx
080d931d +0x05f:  add    $0x4,%edx
080d9320 +0x062:  mov    %eax,0x4(%esp)
080d9324 +0x066:  mov    %edx,(%esp)
080d9327 +0x069:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d932c +0x06e:  mov    %eax,(%esp)
080d932f +0x071:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d9334 +0x076:  test   %eax,%eax
080d9336 +0x078:  sete   %al
080d9339 +0x07b:  test   %al,%al
080d933b +0x07d:  jne    080d93ae <+0xf0>
080d933d +0x07f:  mov    -0xc(%ebp),%eax
080d9340 +0x082:  mov    0x8(%ebp),%edx
080d9343 +0x085:  add    $0x4,%edx
080d9346 +0x088:  mov    %eax,0x4(%esp)
080d934a +0x08c:  mov    %edx,(%esp)
080d934d +0x08f:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d9352 +0x094:  movl   $0x1,0x4(%esp)
080d935a +0x09c:  mov    %eax,(%esp)
080d935d +0x09f:  call   080d6ba0 <_ZN18BlueMarbleUserInfo12setUserStateEN19BlueMarbleUserState1TE>  ; BlueMarbleUserInfo::setUserState(BlueMarbleUserState::T)
080d9362 +0x0a4:  mov    -0xc(%ebp),%eax
080d9365 +0x0a7:  mov    0x8(%ebp),%edx
080d9368 +0x0aa:  add    $0x4,%edx
080d936b +0x0ad:  mov    %eax,0x4(%esp)
080d936f +0x0b1:  mov    %edx,(%esp)
080d9372 +0x0b4:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d9377 +0x0b9:  mov    %eax,(%esp)
080d937a +0x0bc:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d937f +0x0c1:  mov    %eax,(%esp)
080d9382 +0x0c4:  call   08690f1c <_ZN15CUserCharacInfo28increaseBlueMarbleEnterCountEv>  ; CUserCharacInfo::increaseBlueMarbleEnterCount()
080d9387 +0x0c9:  mov    -0xc(%ebp),%eax
080d938a +0x0cc:  mov    0x8(%ebp),%edx
080d938d +0x0cf:  add    $0x4,%edx
080d9390 +0x0d2:  mov    %eax,0x4(%esp)
080d9394 +0x0d6:  mov    %edx,(%esp)
080d9397 +0x0d9:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d939c +0x0de:  mov    %eax,(%esp)
080d939f +0x0e1:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d93a4 +0x0e6:  mov    %eax,(%esp)
080d93a7 +0x0e9:  call   08690fcc <_ZN5CUser24sendBlueMarbleEnterCountEv>  ; CUser::sendBlueMarbleEnterCount()
080d93ac +0x0ee:  jmp    080d93af <+0xf1>
080d93ae +0x0f0:  nop
080d93af +0x0f1:  addl   $0x1,-0xc(%ebp)
080d93b3 +0x0f5:  mov    0x8(%ebp),%eax
080d93b6 +0x0f8:  mov    0x38(%eax),%eax
080d93b9 +0x0fb:  mov    0x30(%eax),%eax
080d93bc +0x0fe:  cmp    -0xc(%ebp),%eax
080d93bf +0x101:  setg   %al
080d93c2 +0x104:  test   %al,%al
080d93c4 +0x106:  jne    080d9317 <+0x59>
080d93ca +0x10c:  mov    0x8(%ebp),%eax
080d93cd +0x10f:  mov    %eax,(%esp)
080d93d0 +0x112:  call   080d86b2 <_ZNK10BlueMarble19sendStartBlueMarbleEv>  ; BlueMarble::sendStartBlueMarble() const
080d93d5 +0x117:  leave
080d93d6 +0x118:  ret
080d93d7 +0x119:  nop
```

## 反编译 C

```c
// BlueMarble::startBlueMarble @ 0x80d92be

/* BlueMarble::startBlueMarble() */

void __thiscall BlueMarble::startBlueMarble(BlueMarble *this)

{
  char cVar1;
  BlueMarbleUserInfo *pBVar2;
  int iVar3;
  CUserCharacInfo *this_00;
  CUser *this_01;
  uint local_10;
  
  cVar1 = checkStartBlueMarble(this);
  if (cVar1 != '\0') {
    resetBlueMarble(this);
    changeState(this,2);
    setBlueMarbleMap(this);
    setMaxBoardSize(this);
    for (local_10 = 0; (int)local_10 < *(int *)(*(int *)(this + 0x38) + 0x30);
        local_10 = local_10 + 1) {
      pBVar2 = (BlueMarbleUserInfo *)
               std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                         ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                          (this + 4),local_10);
      iVar3 = BlueMarbleUserInfo::getUser(pBVar2);
      if (iVar3 != 0) {
        pBVar2 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_10);
        BlueMarbleUserInfo::setUserState(pBVar2,1);
        pBVar2 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_10);
        this_00 = (CUserCharacInfo *)BlueMarbleUserInfo::getUser(pBVar2);
        CUserCharacInfo::increaseBlueMarbleEnterCount(this_00);
        pBVar2 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_10);
        this_01 = (CUser *)BlueMarbleUserInfo::getUser(pBVar2);
        CUser::sendBlueMarbleEnterCount(this_01);
      }
    }
    sendStartBlueMarble(this);
  }
  return;
}
```
