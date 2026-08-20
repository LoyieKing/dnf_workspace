# getRanking

`_ZNK20CDeathMatchBattleMgr10getRankingEPP5CUserPi`

`CDeathMatchBattleMgr::getRanking(CUser**, int*) const`

| 类 | 地址 |
|---|---|
| `CDeathMatchBattleMgr` | `0x085df576` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085df576  _ZNK20CDeathMatchBattleMgr10getRankingEPP5CUserPi
#           CDeathMatchBattleMgr::getRanking(CUser**, int*) const
# range [0x085df576, 0x085df738]
085df576 +0x000:  push   %ebp
085df577 +0x001:  mov    %esp,%ebp
085df579 +0x003:  push   %esi
085df57a +0x004:  push   %ebx
085df57b +0x005:  sub    $0x90,%esp
085df581 +0x00b:  movl   $0x0,-0x10(%ebp)
085df588 +0x012:  lea    -0x78(%ebp),%eax
085df58b +0x015:  mov    %eax,%ebx
085df58d +0x017:  mov    $0x7,%esi
085df592 +0x01c:  jmp    085df5a2 <+0x2c>
085df594 +0x01e:  mov    %ebx,(%esp)
085df597 +0x021:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
085df59c +0x026:  add    $0x8,%ebx
085df59f +0x029:  sub    $0x1,%esi
085df5a2 +0x02c:  cmp    $0xffffffff,%esi
085df5a5 +0x02f:  setne  %al
085df5a8 +0x032:  test   %al,%al
085df5aa +0x034:  jne    085df594 <+0x1e>
085df5ac +0x036:  movl   $0x20,0x8(%esp)
085df5b4 +0x03e:  movl   $0x0,0x4(%esp)
085df5bc +0x046:  mov    0x10(%ebp),%eax
085df5bf +0x049:  mov    %eax,(%esp)
085df5c2 +0x04c:  call   0807dcc0 <_init+0x5b8>
085df5c7 +0x051:  movl   $0x0,-0x38(%ebp)
085df5ce +0x058:  jmp    085df66f <+0xf9>
085df5d3 +0x05d:  mov    -0x38(%ebp),%eax
085df5d6 +0x060:  shl    $0x2,%eax
085df5d9 +0x063:  add    0xc(%ebp),%eax
085df5dc +0x066:  mov    (%eax),%eax
085df5de +0x068:  test   %eax,%eax
085df5e0 +0x06a:  je     085df628 <+0xb2>
085df5e2 +0x06c:  mov    -0x38(%ebp),%eax
085df5e5 +0x06f:  shl    $0x2,%eax
085df5e8 +0x072:  add    0x8(%ebp),%eax
085df5eb +0x075:  lea    0x4(%eax),%edx
085df5ee +0x078:  lea    -0x34(%ebp),%eax
085df5f1 +0x07b:  mov    %edx,0x8(%esp)
085df5f5 +0x07f:  lea    -0x38(%ebp),%edx
085df5f8 +0x082:  mov    %edx,0x4(%esp)
085df5fc +0x086:  mov    %eax,(%esp)
085df5ff +0x089:  call   085e021f <_GLOBAL__I__Z15IsDeathMatchMapiRb+0xaa6>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0xaa6
085df604 +0x08e:  sub    $0x4,%esp
085df607 +0x091:  mov    -0x38(%ebp),%edx
085df60a +0x094:  lea    -0x78(%ebp),%eax
085df60d +0x097:  shl    $0x3,%edx
085df610 +0x09a:  lea    (%eax,%edx,1),%edx
085df613 +0x09d:  lea    -0x34(%ebp),%eax
085df616 +0x0a0:  mov    %eax,0x4(%esp)
085df61a +0x0a4:  mov    %edx,(%esp)
085df61d +0x0a7:  call   080ddf1c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa65>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa65
085df622 +0x0ac:  addl   $0x1,-0x10(%ebp)
085df626 +0x0b0:  jmp    085df666 <+0xf0>
085df628 +0x0b2:  movl   $0xffffffff,-0x24(%ebp)
085df62f +0x0b9:  lea    -0x2c(%ebp),%eax
085df632 +0x0bc:  lea    -0x24(%ebp),%edx
085df635 +0x0bf:  mov    %edx,0x8(%esp)
085df639 +0x0c3:  lea    -0x38(%ebp),%edx
085df63c +0x0c6:  mov    %edx,0x4(%esp)
085df640 +0x0ca:  mov    %eax,(%esp)
085df643 +0x0cd:  call   080dd799 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x2e2>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x2e2
085df648 +0x0d2:  sub    $0x4,%esp
085df64b +0x0d5:  mov    -0x38(%ebp),%edx
085df64e +0x0d8:  lea    -0x78(%ebp),%eax
085df651 +0x0db:  shl    $0x3,%edx
085df654 +0x0de:  lea    (%eax,%edx,1),%edx
085df657 +0x0e1:  lea    -0x2c(%ebp),%eax
085df65a +0x0e4:  mov    %eax,0x4(%esp)
085df65e +0x0e8:  mov    %edx,(%esp)
085df661 +0x0eb:  call   080ddf1c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa65>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa65
085df666 +0x0f0:  mov    -0x38(%ebp),%eax
085df669 +0x0f3:  add    $0x1,%eax
085df66c +0x0f6:  mov    %eax,-0x38(%ebp)
085df66f +0x0f9:  mov    -0x38(%ebp),%eax
085df672 +0x0fc:  cmp    $0x7,%eax
085df675 +0x0ff:  setle  %al
085df678 +0x102:  test   %al,%al
085df67a +0x104:  jne    085df5d3 <+0x5d>
085df680 +0x10a:  lea    -0x78(%ebp),%eax
085df683 +0x10d:  add    $0x40,%eax
085df686 +0x110:  movl   $&_Z27funDeathMatchKillCntCompareRKSt4pairIiiES2_,0x8(%esp)
085df68e +0x118:  mov    %eax,0x4(%esp)
085df692 +0x11c:  lea    -0x78(%ebp),%eax
085df695 +0x11f:  mov    %eax,(%esp)
085df698 +0x122:  call   085e025d <_GLOBAL__I__Z15IsDeathMatchMapiRb+0xae4>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0xae4
085df69d +0x127:  movl   $0x0,-0xc(%ebp)
085df6a4 +0x12e:  jmp    085df71b <+0x1a5>
085df6a6 +0x130:  mov    -0xc(%ebp),%eax
085df6a9 +0x133:  shl    $0x2,%eax
085df6ac +0x136:  add    0x10(%ebp),%eax
085df6af +0x139:  mov    -0xc(%ebp),%edx
085df6b2 +0x13c:  mov    -0x78(%ebp,%edx,8),%edx
085df6b6 +0x140:  mov    %edx,(%eax)
085df6b8 +0x142:  mov    -0xc(%ebp),%eax
085df6bb +0x145:  shl    $0x2,%eax
085df6be +0x148:  add    0x10(%ebp),%eax
085df6c1 +0x14b:  mov    (%eax),%esi
085df6c3 +0x14d:  mov    0x8(%ebp),%eax
085df6c6 +0x150:  mov    (%eax),%eax
085df6c8 +0x152:  mov    %eax,(%esp)
085df6cb +0x155:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
085df6d0 +0x15a:  mov    %eax,%ebx
085df6d2 +0x15c:  movl   $0x0,0xc(%esp)
085df6da +0x164:  movl   $0x1695,0x8(%esp)
085df6e2 +0x16c:  movl   $&_ZZNK20CDeathMatchBattleMgr10getRankingEPP5CUserPiE19__PRETTY_FUNCTION__,0x4(%esp)
085df6ea +0x174:  lea    -0x20(%ebp),%eax
085df6ed +0x177:  mov    %eax,(%esp)
085df6f0 +0x17a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085df6f5 +0x17f:  mov    %esi,0x10(%esp)
085df6f9 +0x183:  mov    -0xc(%ebp),%eax
085df6fc +0x186:  mov    %eax,0xc(%esp)
085df700 +0x18a:  mov    %ebx,0x8(%esp)
085df704 +0x18e:  movl   $"CDeathMatchBattleMgr::getRanking => Room(%d), Idx(%d), Rank(%d)",0x4(%esp)
085df70c +0x196:  lea    -0x20(%ebp),%eax
085df70f +0x199:  mov    %eax,(%esp)
085df712 +0x19c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085df717 +0x1a1:  addl   $0x1,-0xc(%ebp)
085df71b +0x1a5:  mov    -0xc(%ebp),%eax
085df71e +0x1a8:  cmp    -0x10(%ebp),%eax
085df721 +0x1ab:  setl   %al
085df724 +0x1ae:  test   %al,%al
085df726 +0x1b0:  jne    085df6a6 <+0x130>
085df72c +0x1b6:  mov    -0x10(%ebp),%eax
085df72f +0x1b9:  lea    -0x8(%ebp),%esp
085df732 +0x1bc:  add    $0x0,%esp
085df735 +0x1bf:  pop    %ebx
085df736 +0x1c0:  pop    %esi
085df737 +0x1c1:  pop    %ebp
085df738 +0x1c2:  ret
```

## 反编译 C

```c
// CDeathMatchBattleMgr::getRanking @ 0x85df576

/* CDeathMatchBattleMgr::getRanking(CUser**, int*) const */

int __thiscall
CDeathMatchBattleMgr::getRanking(CDeathMatchBattleMgr *this,CUser **param_1,int *param_2)

{
  undefined4 uVar1;
  pair<int,int> *this_00;
  int iVar2;
  pair<int,int> local_7c [64];
  int local_3c;
  int local_38 [2];
  int local_30 [2];
  undefined4 local_28;
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  local_14 = 0;
  this_00 = local_7c;
  for (iVar2 = 7; iVar2 != -1; iVar2 = iVar2 + -1) {
    std::pair<int,int>::pair(this_00);
    this_00 = this_00 + 8;
  }
  memset(param_2,0,0x20);
  for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1) {
    if (param_1[local_3c] == (CUser *)0x0) {
      local_28 = 0xffffffff;
      std::make_pair<int&,int>(local_30,&local_3c);
      std::pair<int,int>::operator=(local_7c + local_3c * 8,(pair *)local_30);
    }
    else {
      std::make_pair<int&,int_const&>(local_38,&local_3c);
      std::pair<int,int>::operator=(local_7c + local_3c * 8,(pair *)local_38);
      local_14 = local_14 + 1;
    }
  }
  std::sort<std::pair<int,int>*,bool(*)(std::pair<int,int>const&,std::pair<int,int>const&)>
            (local_7c,(pair *)&local_3c,funDeathMatchKillCntCompare);
  for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
    param_2[local_10] = *(int *)(local_7c + local_10 * 8);
    iVar2 = param_2[local_10];
    uVar1 = PvP_Room::get_index(*(PvP_Room **)this);
    cMyTrace::cMyTrace(local_24,"int CDeathMatchBattleMgr::getRanking(CUser**, int*) const",0x1695,0
                      );
    cMyTrace::operator()
              (local_24,"CDeathMatchBattleMgr::getRanking => Room(%d), Idx(%d), Rank(%d)",uVar1,
               local_10,iVar2);
  }
  return local_14;
}
```
