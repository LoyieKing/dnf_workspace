# IsBusyPrivateStore

`_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser`

`private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStoreMgr` | `0x085cad5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085cad5e  _ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser
#           private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
# range [0x085cad5e, 0x085cadf5]
085cad5e +0x00:  push   %ebp
085cad5f +0x01:  mov    %esp,%ebp
085cad61 +0x03:  sub    $0x28,%esp
085cad64 +0x06:  movl   $0x0,-0xc(%ebp)
085cad6b +0x0d:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
085cad70 +0x12:  mov    0xc(%ebp),%edx
085cad73 +0x15:  mov    %edx,0x4(%esp)
085cad77 +0x19:  mov    %eax,(%esp)
085cad7a +0x1c:  call   085ca358 <_ZN13private_store16CPrivateStoreMgr15FindStoreSellerEP5CUser>  ; private_store::CPrivateStoreMgr::FindStoreSeller(CUser*)
085cad7f +0x21:  mov    %eax,-0xc(%ebp)
085cad82 +0x24:  cmpl   $0x0,-0xc(%ebp)
085cad86 +0x28:  je     085cadad <+0x4f>
085cad88 +0x2a:  mov    -0xc(%ebp),%eax
085cad8b +0x2d:  mov    %eax,(%esp)
085cad8e +0x30:  call   082345d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c82>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c82
085cad93 +0x35:  cmp    $0x1,%al
085cad95 +0x37:  je     085cada6 <+0x48>
085cad97 +0x39:  mov    -0xc(%ebp),%eax
085cad9a +0x3c:  mov    %eax,(%esp)
085cad9d +0x3f:  call   082345d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c82>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c82
085cada2 +0x44:  cmp    $0x2,%al
085cada4 +0x46:  jne    085cadad <+0x4f>
085cada6 +0x48:  mov    $0x1,%eax
085cadab +0x4d:  jmp    085cadb2 <+0x54>
085cadad +0x4f:  mov    $0x0,%eax
085cadb2 +0x54:  test   %al,%al
085cadb4 +0x56:  je     085cadee <+0x90>
085cadb6 +0x58:  mov    -0xc(%ebp),%eax
085cadb9 +0x5b:  mov    %eax,(%esp)
085cadbc +0x5e:  call   082345e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c8e
085cadc1 +0x63:  test   %al,%al
085cadc3 +0x65:  je     085cade7 <+0x89>
085cadc5 +0x67:  mov    -0xc(%ebp),%eax
085cadc8 +0x6a:  mov    %eax,(%esp)
085cadcb +0x6d:  call   082345d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c82>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c82
085cadd0 +0x72:  cmp    $0x1,%al
085cadd2 +0x74:  sete   %al
085cadd5 +0x77:  test   %al,%al
085cadd7 +0x79:  je     085cade0 <+0x82>
085cadd9 +0x7b:  mov    $0x1,%eax
085cadde +0x80:  jmp    085cadf3 <+0x95>
085cade0 +0x82:  mov    $0x0,%eax
085cade5 +0x87:  jmp    085cadf3 <+0x95>
085cade7 +0x89:  mov    $0x1,%eax
085cadec +0x8e:  jmp    085cadf3 <+0x95>
085cadee +0x90:  mov    $0x0,%eax
085cadf3 +0x95:  leave
085cadf4 +0x96:  ret
085cadf5 +0x97:  nop
```

## 反编译 C

```c
// private_store::CPrivateStoreMgr::IsBusyPrivateStore @ 0x85cad5e

/* private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*) */

undefined4 __thiscall
private_store::CPrivateStoreMgr::IsBusyPrivateStore(CPrivateStoreMgr *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  CPrivateStoreMgr *this_00;
  CPrivateStore *this_01;
  undefined4 uVar3;
  
  this_00 = (CPrivateStoreMgr *)GetInstancePrivateStoreMgr();
  this_01 = (CPrivateStore *)FindStoreSeller(this_00,param_1);
  if (this_01 == (CPrivateStore *)0x0) {
LAB_085cadad:
    bVar1 = false;
  }
  else {
    cVar2 = CPrivateStore::GetState(this_01);
    if (cVar2 != '\x01') {
      cVar2 = CPrivateStore::GetState(this_01);
      if (cVar2 != '\x02') goto LAB_085cadad;
    }
    bVar1 = true;
  }
  if (bVar1) {
    cVar2 = CPrivateStore::isDollCreated(this_01);
    if (cVar2 == '\0') {
      uVar3 = 1;
    }
    else {
      cVar2 = CPrivateStore::GetState(this_01);
      if (cVar2 == '\x01') {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
