# FindMonsterCard

`_ZN10expert_job17ExpertJobMaterial15FindMonsterCardERKSt6vectorISt4pairIiiESaIS3_EE`

`expert_job::ExpertJobMaterial::FindMonsterCard(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)`

| 类 | 地址 |
|---|---|
| `expert_job::ExpertJobMaterial` | `0x0849c612` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849c612  _ZN10expert_job17ExpertJobMaterial15FindMonsterCardERKSt6vectorISt4pairIiiESaIS3_EE
#           expert_job::ExpertJobMaterial::FindMonsterCard(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
# range [0x0849c612, 0x0849c6c9]
0849c612 +0x00:  push   %ebp
0849c613 +0x01:  mov    %esp,%ebp
0849c615 +0x03:  push   %ebx
0849c616 +0x04:  sub    $0x24,%esp
0849c619 +0x07:  lea    -0x14(%ebp),%eax
0849c61c +0x0a:  mov    0xc(%ebp),%edx
0849c61f +0x0d:  mov    %edx,0x4(%esp)
0849c623 +0x11:  mov    %eax,(%esp)
0849c626 +0x14:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
0849c62b +0x19:  sub    $0x4,%esp
0849c62e +0x1c:  jmp    0849c690 <+0x7e>
0849c630 +0x1e:  lea    -0x14(%ebp),%eax
0849c633 +0x21:  mov    %eax,(%esp)
0849c636 +0x24:  call   08235bba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb264>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb264
0849c63b +0x29:  mov    0x4(%eax),%edx
0849c63e +0x2c:  mov    (%eax),%eax
0849c640 +0x2e:  mov    %eax,%ebx
0849c642 +0x30:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0849c647 +0x35:  mov    %ebx,0x4(%esp)
0849c64b +0x39:  mov    %eax,(%esp)
0849c64e +0x3c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0849c653 +0x41:  mov    %eax,-0xc(%ebp)
0849c656 +0x44:  cmpl   $0x0,-0xc(%ebp)
0849c65a +0x48:  je     0849c685 <+0x73>
0849c65c +0x4a:  mov    -0xc(%ebp),%eax
0849c65f +0x4d:  mov    %eax,(%esp)
0849c662 +0x50:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0849c667 +0x55:  test   %al,%al
0849c669 +0x57:  je     0849c685 <+0x73>
0849c66b +0x59:  mov    -0xc(%ebp),%eax
0849c66e +0x5c:  mov    %eax,(%esp)
0849c671 +0x5f:  call   0822c9d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x207c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x207c
0849c676 +0x64:  cmp    $0x1,%eax
0849c679 +0x67:  sete   %al
0849c67c +0x6a:  test   %al,%al
0849c67e +0x6c:  je     0849c685 <+0x73>
0849c680 +0x6e:  mov    -0xc(%ebp),%eax
0849c683 +0x71:  jmp    0849c6c4 <+0xb2>
0849c685 +0x73:  lea    -0x14(%ebp),%eax
0849c688 +0x76:  mov    %eax,(%esp)
0849c68b +0x79:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
0849c690 +0x7e:  lea    -0x10(%ebp),%eax
0849c693 +0x81:  mov    0xc(%ebp),%edx
0849c696 +0x84:  mov    %edx,0x4(%esp)
0849c69a +0x88:  mov    %eax,(%esp)
0849c69d +0x8b:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
0849c6a2 +0x90:  sub    $0x4,%esp
0849c6a5 +0x93:  lea    -0x10(%ebp),%eax
0849c6a8 +0x96:  mov    %eax,0x4(%esp)
0849c6ac +0x9a:  lea    -0x14(%ebp),%eax
0849c6af +0x9d:  mov    %eax,(%esp)
0849c6b2 +0xa0:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
0849c6b7 +0xa5:  test   %al,%al
0849c6b9 +0xa7:  jne    0849c630 <+0x1e>
0849c6bf +0xad:  mov    $0x0,%eax
0849c6c4 +0xb2:  mov    -0x4(%ebp),%ebx
0849c6c7 +0xb5:  leave
0849c6c8 +0xb6:  ret
0849c6c9 +0xb7:  nop
```

## 反编译 C

```c
// expert_job::ExpertJobMaterial::FindMonsterCard @ 0x849c612

/* expert_job::ExpertJobMaterial::FindMonsterCard(std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > > const&) */

CItem * expert_job::ExpertJobMaterial::FindMonsterCard(vector *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  CDataManager *this;
  int iVar4;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  CStackableItem *local_10;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  while( true ) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar2 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar2) {
      return (CItem *)0x0;
    }
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator*(local_18);
    iVar4 = *piVar3;
    this = (CDataManager *)G_CDataManager();
    local_10 = (CStackableItem *)CDataManager::find_item(this,iVar4);
    if (((local_10 != (CStackableItem *)0x0) &&
        (cVar1 = CItem::is_stackable((CItem *)local_10), cVar1 != '\0')) &&
       (iVar4 = CStackableItem::get_sub_type(local_10), iVar4 == 1)) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_18);
  }
  return (CItem *)local_10;
}
```
