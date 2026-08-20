# check_error

`_ZN23Dispatcher_CollectItems11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_CollectItems::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CollectItems` | `0x081e329e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e329e  _ZN23Dispatcher_CollectItems11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_CollectItems::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e329e, 0x081e33a3]
081e329e +0x000:  push   %ebp
081e329f +0x001:  mov    %esp,%ebp
081e32a1 +0x003:  push   %ebx
081e32a2 +0x004:  sub    $0x64,%esp
081e32a5 +0x007:  mov    0xc(%ebp),%eax
081e32a8 +0x00a:  mov    %eax,(%esp)
081e32ab +0x00d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e32b0 +0x012:  cmp    $0x3,%eax
081e32b3 +0x015:  setne  %al
081e32b6 +0x018:  test   %al,%al
081e32b8 +0x01a:  je     081e32c4 <+0x26>
081e32ba +0x01c:  mov    $0x7,%eax
081e32bf +0x021:  jmp    081e339f <+0x101>
081e32c4 +0x026:  mov    0x10(%ebp),%eax
081e32c7 +0x029:  mov    %eax,-0x10(%ebp)
081e32ca +0x02c:  mov    -0x10(%ebp),%eax
081e32cd +0x02f:  movzwl 0x10(%eax),%eax
081e32d1 +0x033:  cmp    $0x1,%ax
081e32d5 +0x037:  je     081e32e1 <+0x43>
081e32d7 +0x039:  mov    $0x16,%eax
081e32dc +0x03e:  jmp    081e339f <+0x101>
081e32e1 +0x043:  mov    -0x10(%ebp),%eax
081e32e4 +0x046:  movzwl 0xe(%eax),%eax
081e32e8 +0x04a:  movswl %ax,%ebx
081e32eb +0x04d:  mov    0xc(%ebp),%eax
081e32ee +0x050:  mov    %eax,(%esp)
081e32f1 +0x053:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081e32f6 +0x058:  lea    -0x4d(%ebp),%edx
081e32f9 +0x05b:  mov    %ebx,0xc(%esp)
081e32fd +0x05f:  movl   $0x1,0x8(%esp)
081e3305 +0x067:  mov    %eax,0x4(%esp)
081e3309 +0x06b:  mov    %edx,(%esp)
081e330c +0x06e:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081e3311 +0x073:  sub    $0x4,%esp
081e3314 +0x076:  mov    -0x4b(%ebp),%eax
081e3317 +0x079:  mov    %eax,%ebx
081e3319 +0x07b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e331e +0x080:  mov    %ebx,0x4(%esp)
081e3322 +0x084:  mov    %eax,(%esp)
081e3325 +0x087:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081e332a +0x08c:  mov    %eax,-0xc(%ebp)
081e332d +0x08f:  cmpl   $0x0,-0xc(%ebp)
081e3331 +0x093:  jne    081e333a <+0x9c>
081e3333 +0x095:  mov    $0x11,%eax
081e3338 +0x09a:  jmp    081e339f <+0x101>
081e333a +0x09c:  mov    -0x46(%ebp),%edx
081e333d +0x09f:  mov    -0x10(%ebp),%eax
081e3340 +0x0a2:  movzwl 0x10(%eax),%eax
081e3344 +0x0a6:  movzwl %ax,%eax
081e3347 +0x0a9:  cmp    %eax,%edx
081e3349 +0x0ab:  jge    081e3352 <+0xb4>
081e334b +0x0ad:  mov    $0x16,%eax
081e3350 +0x0b2:  jmp    081e339f <+0x101>
081e3352 +0x0b4:  mov    -0x4b(%ebp),%eax
081e3355 +0x0b7:  cmp    $0x12ca,%eax
081e335a +0x0bc:  je     081e3363 <+0xc5>
081e335c +0x0be:  mov    $0x17,%eax
081e3361 +0x0c3:  jmp    081e339f <+0x101>
081e3363 +0x0c5:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
081e3368 +0x0ca:  mov    0xc(%ebp),%edx
081e336b +0x0cd:  mov    %edx,0x4(%esp)
081e336f +0x0d1:  mov    %eax,(%esp)
081e3372 +0x0d4:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
081e3377 +0x0d9:  test   %al,%al
081e3379 +0x0db:  je     081e3382 <+0xe4>
081e337b +0x0dd:  mov    $0x3c,%eax
081e3380 +0x0e2:  jmp    081e339f <+0x101>
081e3382 +0x0e4:  mov    &_ZN10GlobalData11s_timeGate_E,%eax
081e3387 +0x0e9:  mov    %eax,(%esp)
081e338a +0x0ec:  call   08234e1c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa4c6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa4c6
081e338f +0x0f1:  test   %al,%al
081e3391 +0x0f3:  je     081e339a <+0xfc>
081e3393 +0x0f5:  mov    $0x16,%eax
081e3398 +0x0fa:  jmp    081e339f <+0x101>
081e339a +0x0fc:  mov    $0x0,%eax
081e339f +0x101:  mov    -0x4(%ebp),%ebx
081e33a2 +0x104:  leave
081e33a3 +0x105:  ret
```

## 反编译 C

```c
// Dispatcher_CollectItems::check_error @ 0x81e329e

/* Dispatcher_CollectItems::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_CollectItems::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CDataManager *this;
  CPrivateStoreMgr *this_00;
  undefined1 local_51 [2];
  int local_4f;
  int local_4a;
  ParamBase *local_14;
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    local_14 = param_3;
    if (*(short *)(param_3 + 0x10) == 1) {
      iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      CInventory::GetInvenSlot((int)local_51,iVar2);
      iVar2 = local_4f;
      this = (CDataManager *)G_CDataManager();
      local_10 = CDataManager::find_item(this,iVar2);
      if (local_10 == 0) {
        uVar3 = 0x11;
      }
      else if (local_4a < (int)(uint)*(ushort *)(local_14 + 0x10)) {
        uVar3 = 0x16;
      }
      else if (local_4f == 0x12ca) {
        this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
        cVar1 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,(CUser *)param_2);
        if (cVar1 == '\0') {
          cVar1 = CTimeGate::isOpen(GlobalData::s_timeGate_);
          if (cVar1 == '\0') {
            uVar3 = 0;
          }
          else {
            uVar3 = 0x16;
          }
        }
        else {
          uVar3 = 0x3c;
        }
      }
      else {
        uVar3 = 0x17;
      }
    }
    else {
      uVar3 = 0x16;
    }
  }
  else {
    uVar3 = 7;
  }
  return uVar3;
}
```
