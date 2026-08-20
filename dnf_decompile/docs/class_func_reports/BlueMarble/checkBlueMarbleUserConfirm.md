# checkBlueMarbleUserConfirm

`_ZN10BlueMarble26checkBlueMarbleUserConfirmEP5CUser`

`BlueMarble::checkBlueMarbleUserConfirm(CUser*)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d9c12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d9c12  _ZN10BlueMarble26checkBlueMarbleUserConfirmEP5CUser
#           BlueMarble::checkBlueMarbleUserConfirm(CUser*)
# range [0x080d9c12, 0x080d9e22]
080d9c12 +0x000:  push   %ebp
080d9c13 +0x001:  mov    %esp,%ebp
080d9c15 +0x003:  push   %edi
080d9c16 +0x004:  push   %esi
080d9c17 +0x005:  push   %ebx
080d9c18 +0x006:  sub    $0x45c,%esp
080d9c1e +0x00c:  cmpl   $0x0,0xc(%ebp)
080d9c22 +0x010:  je     080d9e17 <+0x205>
080d9c28 +0x016:  lea    -0x424(%ebp),%ebx
080d9c2e +0x01c:  mov    $0x0,%eax
080d9c33 +0x021:  mov    $0x100,%edx
080d9c38 +0x026:  mov    %ebx,%edi
080d9c3a +0x028:  mov    %edx,%ecx
080d9c3c +0x02a:  rep stos %eax,%es:(%edi)
080d9c3e +0x02c:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
080d9c43 +0x031:  mov    %eax,(%esp)
080d9c46 +0x034:  call   080da39a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x537>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x537
080d9c4b +0x039:  mov    %eax,0x8(%esp)
080d9c4f +0x03d:  movl   $"./log/%s/BlueMarbleConfirmInfo",0x4(%esp)
080d9c57 +0x045:  lea    -0x424(%ebp),%eax
080d9c5d +0x04b:  mov    %eax,(%esp)
080d9c60 +0x04e:  call   0807e440 <_init+0xd38>
080d9c65 +0x053:  movl   $0x0,-0x1c(%ebp)
080d9c6c +0x05a:  jmp    080d9dfe <+0x1ec>
080d9c71 +0x05f:  mov    -0x1c(%ebp),%eax
080d9c74 +0x062:  mov    0x8(%ebp),%edx
080d9c77 +0x065:  add    $0x4,%edx
080d9c7a +0x068:  mov    %eax,0x4(%esp)
080d9c7e +0x06c:  mov    %edx,(%esp)
080d9c81 +0x06f:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d9c86 +0x074:  mov    %eax,(%esp)
080d9c89 +0x077:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d9c8e +0x07c:  cmp    0xc(%ebp),%eax
080d9c91 +0x07f:  sete   %al
080d9c94 +0x082:  test   %al,%al
080d9c96 +0x084:  je     080d9dfa <+0x1e8>
080d9c9c +0x08a:  mov    -0x1c(%ebp),%eax
080d9c9f +0x08d:  mov    0x8(%ebp),%edx
080d9ca2 +0x090:  add    $0x4,%edx
080d9ca5 +0x093:  mov    %eax,0x4(%esp)
080d9ca9 +0x097:  mov    %edx,(%esp)
080d9cac +0x09a:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d9cb1 +0x09f:  mov    %eax,(%esp)
080d9cb4 +0x0a2:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d9cb9 +0x0a7:  mov    %eax,(%esp)
080d9cbc +0x0aa:  call   080da35e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4fb>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4fb
080d9cc1 +0x0af:  cwtl
080d9cc2 +0x0b0:  mov    %eax,-0x434(%ebp)
080d9cc8 +0x0b6:  mov    0x8(%ebp),%eax
080d9ccb +0x0b9:  mov    %eax,(%esp)
080d9cce +0x0bc:  call   080d8c34 <_ZNK10BlueMarble18getMemoryPoolIndexEv>  ; BlueMarble::getMemoryPoolIndex() const
080d9cd3 +0x0c1:  mov    %eax,%edi
080d9cd5 +0x0c3:  mov    -0x1c(%ebp),%eax
080d9cd8 +0x0c6:  mov    0x8(%ebp),%edx
080d9cdb +0x0c9:  add    $0x4,%edx
080d9cde +0x0cc:  mov    %eax,0x4(%esp)
080d9ce2 +0x0d0:  mov    %edx,(%esp)
080d9ce5 +0x0d3:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d9cea +0x0d8:  mov    %eax,(%esp)
080d9ced +0x0db:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d9cf2 +0x0e0:  mov    %eax,(%esp)
080d9cf5 +0x0e3:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
080d9cfa +0x0e8:  mov    %eax,-0x430(%ebp)
080d9d00 +0x0ee:  mov    -0x1c(%ebp),%eax
080d9d03 +0x0f1:  mov    0x8(%ebp),%edx
080d9d06 +0x0f4:  add    $0x4,%edx
080d9d09 +0x0f7:  mov    %eax,0x4(%esp)
080d9d0d +0x0fb:  mov    %edx,(%esp)
080d9d10 +0x0fe:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d9d15 +0x103:  mov    %eax,(%esp)
080d9d18 +0x106:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d9d1d +0x10b:  mov    %eax,(%esp)
080d9d20 +0x10e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
080d9d25 +0x113:  mov    %eax,-0x42c(%ebp)
080d9d2b +0x119:  mov    -0x1c(%ebp),%eax
080d9d2e +0x11c:  mov    0x8(%ebp),%edx
080d9d31 +0x11f:  add    $0x4,%edx
080d9d34 +0x122:  mov    %eax,0x4(%esp)
080d9d38 +0x126:  mov    %edx,(%esp)
080d9d3b +0x129:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d9d40 +0x12e:  mov    %eax,(%esp)
080d9d43 +0x131:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d9d48 +0x136:  movl   $0xffffffff,0x4(%esp)
080d9d50 +0x13e:  mov    %eax,(%esp)
080d9d53 +0x141:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
080d9d58 +0x146:  mov    %eax,%esi
080d9d5a +0x148:  mov    -0x1c(%ebp),%edx
080d9d5d +0x14b:  mov    0x8(%ebp),%eax
080d9d60 +0x14e:  add    $0x4,%eax
080d9d63 +0x151:  mov    %edx,0x4(%esp)
080d9d67 +0x155:  mov    %eax,(%esp)
080d9d6a +0x158:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d9d6f +0x15d:  mov    %eax,(%esp)
080d9d72 +0x160:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d9d77 +0x165:  mov    %eax,(%esp)
080d9d7a +0x168:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
080d9d7f +0x16d:  movl   $0x0,0x4(%esp)
080d9d87 +0x175:  mov    %eax,(%esp)
080d9d8a +0x178:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
080d9d8f +0x17d:  mov    %eax,%ebx
080d9d91 +0x17f:  movl   $0x514,0x8(%esp)
080d9d99 +0x187:  movl   $&_ZZN10BlueMarble26checkBlueMarbleUserConfirmEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
080d9da1 +0x18f:  lea    -0x24(%ebp),%eax
080d9da4 +0x192:  mov    %eax,(%esp)
080d9da7 +0x195:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
080d9dac +0x19a:  mov    -0x1c(%ebp),%eax
080d9daf +0x19d:  mov    %eax,0x24(%esp)
080d9db3 +0x1a1:  mov    -0x434(%ebp),%eax
080d9db9 +0x1a7:  mov    %eax,0x20(%esp)
080d9dbd +0x1ab:  mov    %edi,0x1c(%esp)
080d9dc1 +0x1af:  mov    -0x430(%ebp),%ecx
080d9dc7 +0x1b5:  mov    %ecx,0x18(%esp)
080d9dcb +0x1b9:  mov    -0x42c(%ebp),%edi
080d9dd1 +0x1bf:  mov    %edi,0x14(%esp)
080d9dd5 +0x1c3:  mov    %esi,0x10(%esp)
080d9dd9 +0x1c7:  mov    %ebx,0xc(%esp)
080d9ddd +0x1cb:  movl   $"checkBlueMarbleUserConfirm() m_id(%s) charac_no(%u)userState(%d) userSpace(%d) blueMarble_Index(%d) user_bluemarble_index(%d) slot_index(%d)",0x8(%esp)
080d9de5 +0x1d3:  lea    -0x424(%ebp),%eax
080d9deb +0x1d9:  mov    %eax,0x4(%esp)
080d9def +0x1dd:  lea    -0x24(%ebp),%eax
080d9df2 +0x1e0:  mov    %eax,(%esp)
080d9df5 +0x1e3:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
080d9dfa +0x1e8:  addl   $0x1,-0x1c(%ebp)
080d9dfe +0x1ec:  mov    0x8(%ebp),%eax
080d9e01 +0x1ef:  mov    0x38(%eax),%eax
080d9e04 +0x1f2:  mov    0x30(%eax),%eax
080d9e07 +0x1f5:  cmp    -0x1c(%ebp),%eax
080d9e0a +0x1f8:  setg   %al
080d9e0d +0x1fb:  test   %al,%al
080d9e0f +0x1fd:  jne    080d9c71 <+0x5f>
080d9e15 +0x203:  jmp    080d9e18 <+0x206>
080d9e17 +0x205:  nop
080d9e18 +0x206:  add    $0x45c,%esp
080d9e1e +0x20c:  pop    %ebx
080d9e1f +0x20d:  pop    %esi
080d9e20 +0x20e:  pop    %edi
080d9e21 +0x20f:  pop    %ebp
080d9e22 +0x210:  ret
```

## 反编译 C

```c
// BlueMarble::checkBlueMarbleUserConfirm @ 0x80d9c12

/* BlueMarble::checkBlueMarbleUserConfirm(CUser*) */

void __thiscall BlueMarble::checkBlueMarbleUserConfirm(BlueMarble *this,CUser *param_1)

{
  short sVar1;
  CEnvironment *this_00;
  undefined4 uVar2;
  BlueMarbleUserInfo *pBVar3;
  CUser *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  char local_428 [1024];
  CMyFileLog local_28 [8];
  uint local_20;
  
  if (param_1 != (CUser *)0x0) {
    pcVar11 = local_428;
    for (iVar10 = 0x100; iVar10 != 0; iVar10 = iVar10 + -1) {
      pcVar11[0] = '\0';
      pcVar11[1] = '\0';
      pcVar11[2] = '\0';
      pcVar11[3] = '\0';
      pcVar11 = pcVar11 + 4;
    }
    this_00 = (CEnvironment *)G_CEnvironment();
    uVar2 = CEnvironment::get_file_name(this_00);
    sprintf(local_428,"./log/%s/BlueMarbleConfirmInfo",uVar2);
    for (local_20 = 0; (int)local_20 < *(int *)(*(int *)(this + 0x38) + 0x30);
        local_20 = local_20 + 1) {
      pBVar3 = (BlueMarbleUserInfo *)
               std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                         ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                          (this + 4),local_20);
      pCVar4 = (CUser *)BlueMarbleUserInfo::getUser(pBVar3);
      if (pCVar4 == param_1) {
        pBVar3 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_20);
        pCVar4 = (CUser *)BlueMarbleUserInfo::getUser(pBVar3);
        sVar1 = CUser::getBlueMarbleIndex(pCVar4);
        uVar2 = getMemoryPoolIndex(this);
        pBVar3 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_20);
        pCVar4 = (CUser *)BlueMarbleUserInfo::getUser(pBVar3);
        uVar5 = CUser::getMoveSpace(pCVar4);
        pBVar3 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_20);
        pCVar4 = (CUser *)BlueMarbleUserInfo::getUser(pBVar3);
        uVar6 = CUser::get_state(pCVar4);
        pBVar3 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_20);
        pCVar4 = (CUser *)BlueMarbleUserInfo::getUser(pBVar3);
        uVar7 = CUser::get_charac_no(pCVar4,-1);
        pBVar3 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_20);
        pCVar4 = (CUser *)BlueMarbleUserInfo::getUser(pBVar3);
        uVar8 = CUser::get_acc_id(pCVar4);
        uVar9 = NumberToString(uVar8,0);
        CMyFileLog::CMyFileLog(local_28,"void BlueMarble::checkBlueMarbleUserConfirm(CUser*)",0x514)
        ;
        CMyFileLog::operator()
                  (local_28,local_428,
                   "checkBlueMarbleUserConfirm() m_id(%s) charac_no(%u)userState(%d) userSpace(%d) blueMarble_Index(%d) user_bluemarble_index(%d) slot_index(%d)"
                   ,uVar9,uVar7,uVar6,uVar5,uVar2,(int)sVar1,local_20);
      }
    }
  }
  return;
}
```
