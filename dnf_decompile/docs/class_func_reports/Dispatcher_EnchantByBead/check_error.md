# check_error

`_ZN24Dispatcher_EnchantByBead11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_EnchantByBead::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_EnchantByBead` | `0x081d233a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d233a  _ZN24Dispatcher_EnchantByBead11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_EnchantByBead::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d233a, 0x081d24b7]
081d233a +0x000:  push   %ebp
081d233b +0x001:  mov    %esp,%ebp
081d233d +0x003:  push   %ebx
081d233e +0x004:  sub    $0x34,%esp
081d2341 +0x007:  mov    0xc(%ebp),%eax
081d2344 +0x00a:  mov    %eax,(%esp)
081d2347 +0x00d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d234c +0x012:  cmp    $0x2,%eax
081d234f +0x015:  setle  %al
081d2352 +0x018:  test   %al,%al
081d2354 +0x01a:  je     081d2360 <+0x26>
081d2356 +0x01c:  mov    $0x7fffffff,%eax
081d235b +0x021:  jmp    081d24b3 <+0x179>
081d2360 +0x026:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081d2365 +0x02b:  movl   $0x2b,0x8(%esp)
081d236d +0x033:  mov    0xc(%ebp),%edx
081d2370 +0x036:  mov    %edx,0x4(%esp)
081d2374 +0x03a:  mov    %eax,(%esp)
081d2377 +0x03d:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081d237c +0x042:  mov    %eax,-0x1c(%ebp)
081d237f +0x045:  cmpl   $0x0,-0x1c(%ebp)
081d2383 +0x049:  je     081d238d <+0x53>
081d2385 +0x04b:  mov    -0x1c(%ebp),%eax
081d2388 +0x04e:  jmp    081d24b3 <+0x179>
081d238d +0x053:  mov    0x10(%ebp),%eax
081d2390 +0x056:  mov    %eax,-0x18(%ebp)
081d2393 +0x059:  mov    -0x18(%ebp),%eax
081d2396 +0x05c:  movzwl 0xe(%eax),%eax
081d239a +0x060:  movswl %ax,%ebx
081d239d +0x063:  mov    0xc(%ebp),%eax
081d23a0 +0x066:  mov    %eax,(%esp)
081d23a3 +0x069:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081d23a8 +0x06e:  mov    %ebx,0x8(%esp)
081d23ac +0x072:  movl   $0x1,0x4(%esp)
081d23b4 +0x07a:  mov    %eax,(%esp)
081d23b7 +0x07d:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
081d23bc +0x082:  mov    %eax,-0x14(%ebp)
081d23bf +0x085:  cmpl   $0x0,-0x14(%ebp)
081d23c3 +0x089:  jne    081d23cf <+0x95>
081d23c5 +0x08b:  mov    $0x11,%eax
081d23ca +0x090:  jmp    081d24b3 <+0x179>
081d23cf +0x095:  mov    -0x18(%ebp),%eax
081d23d2 +0x098:  movzwl 0x12(%eax),%eax
081d23d6 +0x09c:  movswl %ax,%ebx
081d23d9 +0x09f:  mov    0xc(%ebp),%eax
081d23dc +0x0a2:  mov    %eax,(%esp)
081d23df +0x0a5:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081d23e4 +0x0aa:  mov    %ebx,0x8(%esp)
081d23e8 +0x0ae:  movl   $0x1,0x4(%esp)
081d23f0 +0x0b6:  mov    %eax,(%esp)
081d23f3 +0x0b9:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
081d23f8 +0x0be:  mov    %eax,-0x10(%ebp)
081d23fb +0x0c1:  cmpl   $0x0,-0x10(%ebp)
081d23ff +0x0c5:  jne    081d240b <+0xd1>
081d2401 +0x0c7:  mov    $0x11,%eax
081d2406 +0x0cc:  jmp    081d24b3 <+0x179>
081d240b +0x0d1:  mov    -0x14(%ebp),%eax
081d240e +0x0d4:  mov    0x2(%eax),%eax
081d2411 +0x0d7:  mov    %eax,%ebx
081d2413 +0x0d9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d2418 +0x0de:  mov    %ebx,0x4(%esp)
081d241c +0x0e2:  mov    %eax,(%esp)
081d241f +0x0e5:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081d2424 +0x0ea:  mov    %eax,-0xc(%ebp)
081d2427 +0x0ed:  cmpl   $0x0,-0xc(%ebp)
081d242b +0x0f1:  jne    081d2434 <+0xfa>
081d242d +0x0f3:  mov    $0x11,%eax
081d2432 +0x0f8:  jmp    081d24b3 <+0x179>
081d2434 +0x0fa:  mov    -0xc(%ebp),%eax
081d2437 +0x0fd:  add    $0x3d8,%eax
081d243c +0x102:  mov    %eax,(%esp)
081d243f +0x105:  call   08236fa2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc64c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc64c
081d2444 +0x10a:  xor    $0x1,%eax
081d2447 +0x10d:  test   %al,%al
081d2449 +0x10f:  je     081d24ae <+0x174>
081d244b +0x111:  mov    -0x10(%ebp),%eax
081d244e +0x114:  mov    0x2(%eax),%eax
081d2451 +0x117:  mov    %eax,-0x24(%ebp)
081d2454 +0x11a:  mov    -0xc(%ebp),%eax
081d2457 +0x11d:  lea    0x3d8(%eax),%ecx
081d245d +0x123:  lea    -0x28(%ebp),%eax
081d2460 +0x126:  lea    -0x24(%ebp),%edx
081d2463 +0x129:  mov    %edx,0x8(%esp)
081d2467 +0x12d:  mov    %ecx,0x4(%esp)
081d246b +0x131:  mov    %eax,(%esp)
081d246e +0x134:  call   080da46a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x607>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x607
081d2473 +0x139:  sub    $0x4,%esp
081d2476 +0x13c:  mov    -0xc(%ebp),%eax
081d2479 +0x13f:  lea    0x3d8(%eax),%edx
081d247f +0x145:  lea    -0x20(%ebp),%eax
081d2482 +0x148:  mov    %edx,0x4(%esp)
081d2486 +0x14c:  mov    %eax,(%esp)
081d2489 +0x14f:  call   080da496 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x633>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x633
081d248e +0x154:  sub    $0x4,%esp
081d2491 +0x157:  lea    -0x20(%ebp),%eax
081d2494 +0x15a:  mov    %eax,0x4(%esp)
081d2498 +0x15e:  lea    -0x28(%ebp),%eax
081d249b +0x161:  mov    %eax,(%esp)
081d249e +0x164:  call   080da5b2 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x74f>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x74f
081d24a3 +0x169:  test   %al,%al
081d24a5 +0x16b:  je     081d24ae <+0x174>
081d24a7 +0x16d:  mov    $0x13,%eax
081d24ac +0x172:  jmp    081d24b3 <+0x179>
081d24ae +0x174:  mov    $0x0,%eax
081d24b3 +0x179:  mov    -0x4(%ebp),%ebx
081d24b6 +0x17c:  leave
081d24b7 +0x17d:  ret
```

## 反编译 C

```c
// Dispatcher_EnchantByBead::check_error @ 0x81d233a

/* Dispatcher_EnchantByBead::check_error(CUser*, MSG_BASE&, ParamBase&) */

int Dispatcher_EnchantByBead::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  short sVar1;
  char cVar2;
  int iVar3;
  CInventory *pCVar4;
  CDataManager *this;
  _Rb_tree_const_iterator<int> local_2c [4];
  undefined4 local_28;
  set<int,std::less<int>,std::allocator<int>> local_24 [4];
  int local_20;
  ParamBase *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 < 3) {
    local_20 = 0x7fffffff;
  }
  else {
    local_20 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,0x2b);
    if (local_20 == 0) {
      local_1c = param_3;
      sVar1 = *(short *)(param_3 + 0xe);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      local_18 = CInventory::GetInvenRef(pCVar4,1,(int)sVar1);
      if (local_18 == 0) {
        local_20 = 0x11;
      }
      else {
        sVar1 = *(short *)(local_1c + 0x12);
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
        local_14 = CInventory::GetInvenRef(pCVar4,1,(int)sVar1);
        if (local_14 == 0) {
          local_20 = 0x11;
        }
        else {
          iVar3 = *(int *)(local_18 + 2);
          this = (CDataManager *)G_CDataManager();
          local_10 = CDataManager::find_item(this,iVar3);
          if (local_10 == 0) {
            local_20 = 0x11;
          }
          else {
            cVar2 = std::set<int,std::less<int>,std::allocator<int>>::empty
                              ((set<int,std::less<int>,std::allocator<int>> *)(local_10 + 0x3d8));
            if (cVar2 != '\x01') {
              local_28 = *(undefined4 *)(local_14 + 2);
              std::set<int,std::less<int>,std::allocator<int>>::find((int *)local_2c);
              std::set<int,std::less<int>,std::allocator<int>>::end(local_24);
              cVar2 = std::_Rb_tree_const_iterator<int>::operator==
                                (local_2c,(_Rb_tree_const_iterator *)local_24);
              if (cVar2 != '\0') {
                return 0x13;
              }
            }
            local_20 = 0;
          }
        }
      }
    }
  }
  return local_20;
}
```
