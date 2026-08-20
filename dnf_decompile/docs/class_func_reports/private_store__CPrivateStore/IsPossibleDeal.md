# IsPossibleDeal

`_ZN13private_store13CPrivateStore14IsPossibleDealEijj`

`private_store::CPrivateStore::IsPossibleDeal(int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c7c0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c7c0a  _ZN13private_store13CPrivateStore14IsPossibleDealEijj
#           private_store::CPrivateStore::IsPossibleDeal(int, unsigned int, unsigned int)
# range [0x085c7c0a, 0x085c7d03]
085c7c0a +0x00:  push   %ebp
085c7c0b +0x01:  mov    %esp,%ebp
085c7c0d +0x03:  push   %esi
085c7c0e +0x04:  push   %ebx
085c7c0f +0x05:  sub    $0x20,%esp
085c7c12 +0x08:  mov    0x8(%ebp),%eax
085c7c15 +0x0b:  mov    0x2c(%eax),%eax
085c7c18 +0x0e:  mov    0xc(%ebp),%edx
085c7c1b +0x11:  mov    %edx,0x4(%esp)
085c7c1f +0x15:  mov    %eax,(%esp)
085c7c22 +0x18:  call   0866af1c <_ZN5CUser10CheckMoneyEi>  ; CUser::CheckMoney(int)
085c7c27 +0x1d:  xor    $0x1,%eax
085c7c2a +0x20:  test   %al,%al
085c7c2c +0x22:  je     085c7cb8 <+0xae>
085c7c32 +0x28:  mov    0x8(%ebp),%eax
085c7c35 +0x2b:  add    $0x14,%eax
085c7c38 +0x2e:  movl   $0x16,0x4(%esp)
085c7c40 +0x36:  mov    %eax,(%esp)
085c7c43 +0x39:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c7c48 +0x3e:  lea    -0x14(%ebp),%eax
085c7c4b +0x41:  mov    %eax,(%esp)
085c7c4e +0x44:  call   085cb972 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x688>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x688
085c7c53 +0x49:  movl   $0x16,0xc(%esp)
085c7c5b +0x51:  movl   $0x52,0x8(%esp)
085c7c63 +0x59:  movl   $0x0,0x4(%esp)
085c7c6b +0x61:  lea    -0x14(%ebp),%eax
085c7c6e +0x64:  mov    %eax,(%esp)
085c7c71 +0x67:  call   085cc830 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1546>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1546
085c7c76 +0x6c:  mov    0x8(%ebp),%eax
085c7c79 +0x6f:  mov    0x2c(%eax),%eax
085c7c7c +0x72:  lea    -0x14(%ebp),%edx
085c7c7f +0x75:  mov    %edx,0x4(%esp)
085c7c83 +0x79:  mov    %eax,(%esp)
085c7c86 +0x7c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085c7c8b +0x81:  mov    $0x0,%ebx
085c7c90 +0x86:  lea    -0x14(%ebp),%eax
085c7c93 +0x89:  mov    %eax,(%esp)
085c7c96 +0x8c:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085c7c9b +0x91:  jmp    085c7cfa <+0xf0>
085c7c9d +0x93:  mov    %edx,%ebx
085c7c9f +0x95:  mov    %eax,%esi
085c7ca1 +0x97:  lea    -0x14(%ebp),%eax
085c7ca4 +0x9a:  mov    %eax,(%esp)
085c7ca7 +0x9d:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085c7cac +0xa2:  mov    %esi,%eax
085c7cae +0xa4:  mov    %ebx,%edx
085c7cb0 +0xa6:  mov    %eax,(%esp)
085c7cb3 +0xa9:  call   08ae3750 <_Unwind_Resume>
085c7cb8 +0xae:  mov    0x8(%ebp),%eax
085c7cbb +0xb1:  mov    0x30(%eax),%eax
085c7cbe +0xb4:  mov    %eax,(%esp)
085c7cc1 +0xb7:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085c7cc6 +0xbc:  mov    %eax,(%esp)
085c7cc9 +0xbf:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
085c7cce +0xc4:  cmp    0xc(%ebp),%eax
085c7cd1 +0xc7:  setl   %al
085c7cd4 +0xca:  test   %al,%al
085c7cd6 +0xcc:  je     085c7cf5 <+0xeb>
085c7cd8 +0xce:  mov    0x8(%ebp),%eax
085c7cdb +0xd1:  add    $0x14,%eax
085c7cde +0xd4:  movl   $0xa,0x4(%esp)
085c7ce6 +0xdc:  mov    %eax,(%esp)
085c7ce9 +0xdf:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c7cee +0xe4:  mov    $0x0,%ebx
085c7cf3 +0xe9:  jmp    085c7cfa <+0xf0>
085c7cf5 +0xeb:  mov    $0x1,%ebx
085c7cfa +0xf0:  mov    %ebx,%eax
085c7cfc +0xf2:  add    $0x20,%esp
085c7cff +0xf5:  pop    %ebx
085c7d00 +0xf6:  pop    %esi
085c7d01 +0xf7:  pop    %ebp
085c7d02 +0xf8:  ret
085c7d03 +0xf9:  nop
```

## 反编译 C

```c
// private_store::CPrivateStore::IsPossibleDeal @ 0x85c7c0a

/* private_store::CPrivateStore::IsPossibleDeal(int, unsigned int, unsigned int) */

undefined4 private_store::CPrivateStore::IsPossibleDeal(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  CInventory *this;
  int iVar2;
  undefined4 uVar3;
  CPacketBufPrivate local_18 [12];
  
  cVar1 = CUser::CheckMoney(*(CUser **)(param_1 + 0x2c),param_2);
  if (cVar1 == '\x01') {
    this = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(param_1 + 0x30));
    iVar2 = CInventory::get_money(this);
    if (iVar2 < (int)param_2) {
      CErrorHandler::Do((CErrorHandler *)(param_1 + 0x14),10);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    CErrorHandler::Do((CErrorHandler *)(param_1 + 0x14),0x16);
    CPacketBufPrivate::CPacketBufPrivate(local_18);
                    /* try { // try from 085c7c71 to 085c7c8a has its CatchHandler @ 085c7c9d */
    CPacketBufPrivate::MakeErrorReturnPacket(local_18,0,0x52,0x16);
    CUser::Send(*(CUser **)(param_1 + 0x2c),(PacketGuard *)local_18);
    uVar3 = 0;
    CPacketBufPrivate::~CPacketBufPrivate(local_18);
  }
  return uVar3;
}
```
