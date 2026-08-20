# join

`_ZN10BlueMarble4joinEP5CUser`

`BlueMarble::join(CUser*)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d8f58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d8f58  _ZN10BlueMarble4joinEP5CUser
#           BlueMarble::join(CUser*)
# range [0x080d8f58, 0x080d9073]
080d8f58 +0x000:  push   %ebp
080d8f59 +0x001:  mov    %esp,%ebp
080d8f5b +0x003:  push   %ebx
080d8f5c +0x004:  sub    $0x24,%esp
080d8f5f +0x007:  cmpl   $0x0,0xc(%ebp)
080d8f63 +0x00b:  jne    080d8f6f <+0x17>
080d8f65 +0x00d:  mov    $0x17,%eax
080d8f6a +0x012:  jmp    080d906e <+0x116>
080d8f6f +0x017:  movl   $0x0,-0xc(%ebp)
080d8f76 +0x01e:  jmp    080d9033 <+0xdb>
080d8f7b +0x023:  mov    -0xc(%ebp),%eax
080d8f7e +0x026:  mov    0x8(%ebp),%edx
080d8f81 +0x029:  add    $0x4,%edx
080d8f84 +0x02c:  mov    %eax,0x4(%esp)
080d8f88 +0x030:  mov    %edx,(%esp)
080d8f8b +0x033:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d8f90 +0x038:  mov    %eax,(%esp)
080d8f93 +0x03b:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d8f98 +0x040:  test   %eax,%eax
080d8f9a +0x042:  sete   %al
080d8f9d +0x045:  test   %al,%al
080d8f9f +0x047:  je     080d902f <+0xd7>
080d8fa5 +0x04d:  mov    -0xc(%ebp),%eax
080d8fa8 +0x050:  mov    0x8(%ebp),%edx
080d8fab +0x053:  add    $0x4,%edx
080d8fae +0x056:  mov    %eax,0x4(%esp)
080d8fb2 +0x05a:  mov    %edx,(%esp)
080d8fb5 +0x05d:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d8fba +0x062:  mov    0xc(%ebp),%edx
080d8fbd +0x065:  mov    %edx,0x4(%esp)
080d8fc1 +0x069:  mov    %eax,(%esp)
080d8fc4 +0x06c:  call   080d6b7a <_ZN18BlueMarbleUserInfo7setUserEP5CUser>  ; BlueMarbleUserInfo::setUser(CUser*)
080d8fc9 +0x071:  mov    0x8(%ebp),%eax
080d8fcc +0x074:  mov    %eax,(%esp)
080d8fcf +0x077:  call   080d8c34 <_ZNK10BlueMarble18getMemoryPoolIndexEv>  ; BlueMarble::getMemoryPoolIndex() const
080d8fd4 +0x07c:  movswl %ax,%ebx
080d8fd7 +0x07f:  mov    -0xc(%ebp),%eax
080d8fda +0x082:  mov    0x8(%ebp),%edx
080d8fdd +0x085:  add    $0x4,%edx
080d8fe0 +0x088:  mov    %eax,0x4(%esp)
080d8fe4 +0x08c:  mov    %edx,(%esp)
080d8fe7 +0x08f:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d8fec +0x094:  mov    %eax,(%esp)
080d8fef +0x097:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d8ff4 +0x09c:  mov    %ebx,0x4(%esp)
080d8ff8 +0x0a0:  mov    %eax,(%esp)
080d8ffb +0x0a3:  call   080da340 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4dd>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4dd
080d9000 +0x0a8:  mov    -0xc(%ebp),%eax
080d9003 +0x0ab:  mov    0x8(%ebp),%edx
080d9006 +0x0ae:  add    $0x4,%edx
080d9009 +0x0b1:  mov    %eax,0x4(%esp)
080d900d +0x0b5:  mov    %edx,(%esp)
080d9010 +0x0b8:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d9015 +0x0bd:  mov    %eax,(%esp)
080d9018 +0x0c0:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d901d +0x0c5:  movl   $0x1,0x4(%esp)
080d9025 +0x0cd:  mov    %eax,(%esp)
080d9028 +0x0d0:  call   08690eb8 <_ZN5CUser12setMoveSpaceEN9UserSpace1TE>  ; CUser::setMoveSpace(UserSpace::T)
080d902d +0x0d5:  jmp    080d904a <+0xf2>
080d902f +0x0d7:  addl   $0x1,-0xc(%ebp)
080d9033 +0x0db:  mov    0x8(%ebp),%eax
080d9036 +0x0de:  mov    0x38(%eax),%eax
080d9039 +0x0e1:  mov    0x30(%eax),%eax
080d903c +0x0e4:  cmp    -0xc(%ebp),%eax
080d903f +0x0e7:  setg   %al
080d9042 +0x0ea:  test   %al,%al
080d9044 +0x0ec:  jne    080d8f7b <+0x23>
080d904a +0x0f2:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
080d904f +0x0f7:  mov    0xc(%ebp),%edx
080d9052 +0x0fa:  mov    %edx,0x4(%esp)
080d9056 +0x0fe:  mov    %eax,(%esp)
080d9059 +0x101:  call   086c7654 <_ZN9GameWorld14gotoBlueMarbleEP5CUser>  ; GameWorld::gotoBlueMarble(CUser*)
080d905e +0x106:  mov    0x8(%ebp),%eax
080d9061 +0x109:  mov    %eax,(%esp)
080d9064 +0x10c:  call   080d84b4 <_ZNK10BlueMarble22sendBlueMarbleRoomInfoEv>  ; BlueMarble::sendBlueMarbleRoomInfo() const
080d9069 +0x111:  mov    $0x0,%eax
080d906e +0x116:  add    $0x24,%esp
080d9071 +0x119:  pop    %ebx
080d9072 +0x11a:  pop    %ebp
080d9073 +0x11b:  ret
```

## 反编译 C

```c
// BlueMarble::join @ 0x80d8f58

/* BlueMarble::join(CUser*) */

undefined4 __thiscall BlueMarble::join(BlueMarble *this,CUser *param_1)

{
  short sVar1;
  undefined4 uVar2;
  BlueMarbleUserInfo *pBVar3;
  int iVar4;
  CUser *pCVar5;
  GameWorld *this_00;
  uint local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0x17;
  }
  else {
    for (local_10 = 0; (int)local_10 < *(int *)(*(int *)(this + 0x38) + 0x30);
        local_10 = local_10 + 1) {
      pBVar3 = (BlueMarbleUserInfo *)
               std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                         ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                          (this + 4),local_10);
      iVar4 = BlueMarbleUserInfo::getUser(pBVar3);
      if (iVar4 == 0) {
        pBVar3 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_10);
        BlueMarbleUserInfo::setUser(pBVar3,param_1);
        sVar1 = getMemoryPoolIndex(this);
        pBVar3 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_10);
        pCVar5 = (CUser *)BlueMarbleUserInfo::getUser(pBVar3);
        CUser::setBlueMarbleIndex(pCVar5,sVar1);
        pBVar3 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_10);
        pCVar5 = (CUser *)BlueMarbleUserInfo::getUser(pBVar3);
        CUser::setMoveSpace(pCVar5,1);
        break;
      }
    }
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::gotoBlueMarble(this_00,param_1);
    sendBlueMarbleRoomInfo(this);
    uVar2 = 0;
  }
  return uVar2;
}
```
