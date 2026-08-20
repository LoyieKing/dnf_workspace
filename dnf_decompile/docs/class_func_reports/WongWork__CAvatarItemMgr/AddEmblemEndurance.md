# AddEmblemEndurance

`_ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE`

`WongWork::CAvatarItemMgr::AddEmblemEndurance(int, WongWork::Avatar_Item const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f9e4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f9e4c  _ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE
#           WongWork::CAvatarItemMgr::AddEmblemEndurance(int, WongWork::Avatar_Item const*)
# range [0x082f9e4c, 0x082f9f9d]
082f9e4c +0x000:  push   %ebp
082f9e4d +0x001:  mov    %esp,%ebp
082f9e4f +0x003:  push   %ebx
082f9e50 +0x004:  sub    $0x44,%esp
082f9e53 +0x007:  mov    0x10(%ebp),%eax
082f9e56 +0x00a:  mov    %eax,(%esp)
082f9e59 +0x00d:  call   082fa2ee <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x120>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x120
082f9e5e +0x012:  mov    %eax,-0x14(%ebp)
082f9e61 +0x015:  movw   $0x0,-0x2a(%ebp)
082f9e67 +0x01b:  movl   $0x0,-0x10(%ebp)
082f9e6e +0x022:  jmp    082f9eea <+0x9e>
082f9e70 +0x024:  mov    -0x10(%ebp),%edx
082f9e73 +0x027:  mov    -0x14(%ebp),%ecx
082f9e76 +0x02a:  mov    %edx,%eax
082f9e78 +0x02c:  add    %eax,%eax
082f9e7a +0x02e:  add    %edx,%eax
082f9e7c +0x030:  add    %eax,%eax
082f9e7e +0x032:  mov    0x2(%eax,%ecx,1),%eax
082f9e82 +0x036:  test   %eax,%eax
082f9e84 +0x038:  je     082f9ee5 <+0x99>
082f9e86 +0x03a:  mov    -0x10(%ebp),%edx
082f9e89 +0x03d:  mov    -0x14(%ebp),%ecx
082f9e8c +0x040:  mov    %edx,%eax
082f9e8e +0x042:  add    %eax,%eax
082f9e90 +0x044:  add    %edx,%eax
082f9e92 +0x046:  add    %eax,%eax
082f9e94 +0x048:  mov    0x2(%eax,%ecx,1),%eax
082f9e98 +0x04c:  mov    %eax,%ebx
082f9e9a +0x04e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082f9e9f +0x053:  mov    %ebx,0x4(%esp)
082f9ea3 +0x057:  mov    %eax,(%esp)
082f9ea6 +0x05a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
082f9eab +0x05f:  mov    %eax,-0xc(%ebp)
082f9eae +0x062:  cmpl   $0x0,-0xc(%ebp)
082f9eb2 +0x066:  je     082f9f97 <+0x14b>
082f9eb8 +0x06c:  mov    -0xc(%ebp),%eax
082f9ebb +0x06f:  mov    %eax,(%esp)
082f9ebe +0x072:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
082f9ec3 +0x077:  mov    %eax,%ebx
082f9ec5 +0x079:  call   081935a2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x20a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x20a
082f9eca +0x07e:  mov    %ebx,0x4(%esp)
082f9ece +0x082:  mov    %eax,(%esp)
082f9ed1 +0x085:  call   0819114c <_ZN20AvatarRechargeServer22GetRateFromEmblemGradeEi>  ; AvatarRechargeServer::GetRateFromEmblemGrade(int)
082f9ed6 +0x08a:  mov    %eax,%edx
082f9ed8 +0x08c:  movzwl -0x2a(%ebp),%eax
082f9edc +0x090:  lea    (%edx,%eax,1),%eax
082f9edf +0x093:  mov    %ax,-0x2a(%ebp)
082f9ee3 +0x097:  jmp    082f9ee6 <+0x9a>
082f9ee5 +0x099:  nop
082f9ee6 +0x09a:  addl   $0x1,-0x10(%ebp)
082f9eea +0x09e:  cmpl   $0x4,-0x10(%ebp)
082f9eee +0x0a2:  setle  %al
082f9ef1 +0x0a5:  test   %al,%al
082f9ef3 +0x0a7:  jne    082f9e70 <+0x24>
082f9ef9 +0x0ad:  mov    0x8(%ebp),%eax
082f9efc +0x0b0:  lea    0x54(%eax),%ecx
082f9eff +0x0b3:  lea    -0x30(%ebp),%eax
082f9f02 +0x0b6:  lea    0xc(%ebp),%edx
082f9f05 +0x0b9:  mov    %edx,0x8(%esp)
082f9f09 +0x0bd:  mov    %ecx,0x4(%esp)
082f9f0d +0x0c1:  mov    %eax,(%esp)
082f9f10 +0x0c4:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
082f9f15 +0x0c9:  sub    $0x4,%esp
082f9f18 +0x0cc:  mov    0x8(%ebp),%eax
082f9f1b +0x0cf:  lea    0x54(%eax),%edx
082f9f1e +0x0d2:  lea    -0x28(%ebp),%eax
082f9f21 +0x0d5:  mov    %edx,0x4(%esp)
082f9f25 +0x0d9:  mov    %eax,(%esp)
082f9f28 +0x0dc:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
082f9f2d +0x0e1:  sub    $0x4,%esp
082f9f30 +0x0e4:  lea    -0x28(%ebp),%eax
082f9f33 +0x0e7:  mov    %eax,0x4(%esp)
082f9f37 +0x0eb:  lea    -0x30(%ebp),%eax
082f9f3a +0x0ee:  mov    %eax,(%esp)
082f9f3d +0x0f1:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
082f9f42 +0x0f6:  test   %al,%al
082f9f44 +0x0f8:  je     082f9f80 <+0x134>
082f9f46 +0x0fa:  lea    -0x2a(%ebp),%eax
082f9f49 +0x0fd:  mov    %eax,0x8(%esp)
082f9f4d +0x101:  lea    0xc(%ebp),%eax
082f9f50 +0x104:  mov    %eax,0x4(%esp)
082f9f54 +0x108:  lea    -0x1c(%ebp),%eax
082f9f57 +0x10b:  mov    %eax,(%esp)
082f9f5a +0x10e:  call   082faa8e <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x8c0>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x8c0
082f9f5f +0x113:  mov    0x8(%ebp),%eax
082f9f62 +0x116:  lea    0x54(%eax),%ecx
082f9f65 +0x119:  lea    -0x24(%ebp),%eax
082f9f68 +0x11c:  lea    -0x1c(%ebp),%edx
082f9f6b +0x11f:  mov    %edx,0x8(%esp)
082f9f6f +0x123:  mov    %ecx,0x4(%esp)
082f9f73 +0x127:  mov    %eax,(%esp)
082f9f76 +0x12a:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
082f9f7b +0x12f:  sub    $0x4,%esp
082f9f7e +0x132:  jmp    082f9f98 <+0x14c>
082f9f80 +0x134:  lea    -0x30(%ebp),%eax
082f9f83 +0x137:  mov    %eax,(%esp)
082f9f86 +0x13a:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
082f9f8b +0x13f:  movzwl -0x2a(%ebp),%edx
082f9f8f +0x143:  movswl %dx,%edx
082f9f92 +0x146:  mov    %edx,0x4(%eax)
082f9f95 +0x149:  jmp    082f9f98 <+0x14c>
082f9f97 +0x14b:  nop
082f9f98 +0x14c:  mov    -0x4(%ebp),%ebx
082f9f9b +0x14f:  leave
082f9f9c +0x150:  ret
082f9f9d +0x151:  nop
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::AddEmblemEndurance @ 0x82f9e4c

/* WongWork::CAvatarItemMgr::AddEmblemEndurance(int, WongWork::Avatar_Item const*) */

void __thiscall
WongWork::CAvatarItemMgr::AddEmblemEndurance(CAvatarItemMgr *this,int param_1,Avatar_Item *param_2)

{
  char cVar1;
  short sVar2;
  CDataManager *this_00;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_34 [6];
  short local_2e;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_2c [4];
  pair local_28 [8];
  pair<int_const,int> local_20 [8];
  int local_18;
  int local_14;
  CItem *local_10;
  
  local_18 = Avatar_Item::getJewelSocketData(param_2);
  local_2e = 0;
  local_14 = 0;
  do {
    if (4 < local_14) {
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                ((int *)local_34);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_2c);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                        (local_34,(_Rb_tree_iterator *)local_2c);
      if (cVar1 == '\0') {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_34);
        *(int *)(iVar3 + 4) = (int)local_2e;
      }
      else {
        std::pair<int_const,int>::pair<int&,short&>(local_20,&param_1,&local_2e);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_28);
      }
      return;
    }
    if (*(int *)(local_14 * 6 + 2 + local_18) != 0) {
      iVar3 = *(int *)(local_14 * 6 + 2 + local_18);
      this_00 = (CDataManager *)G_CDataManager();
      local_10 = (CItem *)CDataManager::find_item(this_00,iVar3);
      if (local_10 == (CItem *)0x0) {
        return;
      }
      CItem::get_grade(local_10);
      iVar3 = ARAD::Singleton<AvatarRechargeServer>::Get();
      sVar2 = AvatarRechargeServer::GetRateFromEmblemGrade(iVar3);
      local_2e = sVar2 + local_2e;
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
