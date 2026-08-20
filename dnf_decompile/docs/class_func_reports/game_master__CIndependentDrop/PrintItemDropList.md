# PrintItemDropList

`_ZN11game_master16CIndependentDrop17PrintItemDropListERK26stMonsterIndependentDrop_tPcb`

`game_master::CIndependentDrop::PrintItemDropList(stMonsterIndependentDrop_t const&, char*, bool)`

| 类 | 地址 |
|---|---|
| `game_master::CIndependentDrop` | `0x084b1756` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b1756  _ZN11game_master16CIndependentDrop17PrintItemDropListERK26stMonsterIndependentDrop_tPcb
#           game_master::CIndependentDrop::PrintItemDropList(stMonsterIndependentDrop_t const&, char*, bool)
# range [0x084b1756, 0x084b1b5d]
084b1756 +0x000:  push   %ebp
084b1757 +0x001:  mov    %esp,%ebp
084b1759 +0x003:  push   %edi
084b175a +0x004:  push   %ebx
084b175b +0x005:  sub    $0x470,%esp
084b1761 +0x00b:  mov    0x14(%ebp),%eax
084b1764 +0x00e:  mov    %al,-0x43c(%ebp)
084b176a +0x014:  lea    -0x42c(%ebp),%ebx
084b1770 +0x01a:  mov    $0x0,%eax
084b1775 +0x01f:  mov    $0x100,%edx
084b177a +0x024:  mov    %ebx,%edi
084b177c +0x026:  mov    %edx,%ecx
084b177e +0x028:  rep stos %eax,%es:(%edi)
084b1780 +0x02a:  movzbl -0x43c(%ebp),%eax
084b1787 +0x031:  xor    $0x1,%eax
084b178a +0x034:  test   %al,%al
084b178c +0x036:  je     084b17f2 <+0x9c>
084b178e +0x038:  mov    0xc(%ebp),%eax
084b1791 +0x03b:  mov    (%eax),%ebx
084b1793 +0x03d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084b1798 +0x042:  mov    %ebx,0x4(%esp)
084b179c +0x046:  mov    %eax,(%esp)
084b179f +0x049:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084b17a4 +0x04e:  mov    %eax,-0x1c(%ebp)
084b17a7 +0x051:  cmpl   $0x0,-0x1c(%ebp)
084b17ab +0x055:  je     084b1825 <+0xcf>
084b17ad +0x057:  mov    -0x1c(%ebp),%eax
084b17b0 +0x05a:  mov    %eax,(%esp)
084b17b3 +0x05d:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
084b17b8 +0x062:  mov    0xc(%ebp),%edx
084b17bb +0x065:  mov    (%edx),%edx
084b17bd +0x067:  mov    %eax,0xc(%esp)
084b17c1 +0x06b:  mov    %edx,0x8(%esp)
084b17c5 +0x06f:  movl   $"%d\t%s\n",0x4(%esp)
084b17cd +0x077:  lea    -0x42c(%ebp),%eax
084b17d3 +0x07d:  mov    %eax,(%esp)
084b17d6 +0x080:  call   0807e440 <_init+0xd38>
084b17db +0x085:  lea    -0x42c(%ebp),%eax
084b17e1 +0x08b:  mov    %eax,0x4(%esp)
084b17e5 +0x08f:  mov    0x10(%ebp),%eax
084b17e8 +0x092:  mov    %eax,(%esp)
084b17eb +0x095:  call   0807dd60 <_init+0x658>
084b17f0 +0x09a:  jmp    084b1825 <+0xcf>
084b17f2 +0x09c:  movl   $0xd,0x8(%esp)
084b17fa +0x0a4:  movl   $"리스트 드랍\n",0x4(%esp)
084b1802 +0x0ac:  lea    -0x42c(%ebp),%eax
084b1808 +0x0b2:  mov    %eax,(%esp)
084b180b +0x0b5:  call   0807d8a0 <_init+0x198>
084b1810 +0x0ba:  lea    -0x42c(%ebp),%eax
084b1816 +0x0c0:  mov    %eax,0x4(%esp)
084b181a +0x0c4:  mov    0x10(%ebp),%eax
084b181d +0x0c7:  mov    %eax,(%esp)
084b1820 +0x0ca:  call   0807dd60 <_init+0x658>
084b1825 +0x0cf:  movl   $0x0,-0x18(%ebp)
084b182c +0x0d6:  jmp    084b1b45 <+0x3ef>
084b1831 +0x0db:  mov    -0x18(%ebp),%edx
084b1834 +0x0de:  mov    0xc(%ebp),%eax
084b1837 +0x0e1:  mov    0x4(%eax,%edx,4),%eax
084b183b +0x0e5:  test   %eax,%eax
084b183d +0x0e7:  je     084b1b40 <+0x3ea>
084b1843 +0x0ed:  mov    -0x18(%ebp),%eax
084b1846 +0x0f0:  mov    %eax,0x8(%esp)
084b184a +0x0f4:  movl   $"난이도\t%d\n",0x4(%esp)
084b1852 +0x0fc:  lea    -0x42c(%ebp),%eax
084b1858 +0x102:  mov    %eax,(%esp)
084b185b +0x105:  call   0807e440 <_init+0xd38>
084b1860 +0x10a:  lea    -0x42c(%ebp),%eax
084b1866 +0x110:  mov    %eax,0x4(%esp)
084b186a +0x114:  mov    0x10(%ebp),%eax
084b186d +0x117:  mov    %eax,(%esp)
084b1870 +0x11a:  call   0807dd60 <_init+0x658>
084b1875 +0x11f:  mov    -0x18(%ebp),%edx
084b1878 +0x122:  mov    0xc(%ebp),%eax
084b187b +0x125:  mov    0x4(%eax,%edx,4),%eax
084b187f +0x129:  mov    %eax,-0x440(%ebp)
084b1885 +0x12f:  fildl  -0x440(%ebp)
084b188b +0x135:  flds   ""
084b1891 +0x13b:  fdivrp %st,%st(1)
084b1893 +0x13d:  fstpl  0x8(%esp)
084b1897 +0x141:  movl   $"드랍율(%%)\t%f\n",0x4(%esp)
084b189f +0x149:  lea    -0x42c(%ebp),%eax
084b18a5 +0x14f:  mov    %eax,(%esp)
084b18a8 +0x152:  call   0807e440 <_init+0xd38>
084b18ad +0x157:  lea    -0x42c(%ebp),%eax
084b18b3 +0x15d:  mov    %eax,0x4(%esp)
084b18b7 +0x161:  mov    0x10(%ebp),%eax
084b18ba +0x164:  mov    %eax,(%esp)
084b18bd +0x167:  call   0807dd60 <_init+0x658>
084b18c2 +0x16c:  mov    0xc(%ebp),%eax
084b18c5 +0x16f:  mov    0x24(%eax),%ebx
084b18c8 +0x172:  mov    0xc(%ebp),%eax
084b18cb +0x175:  mov    0x20(%eax),%ecx
084b18ce +0x178:  mov    0xc(%ebp),%eax
084b18d1 +0x17b:  mov    0x1c(%eax),%edx
084b18d4 +0x17e:  mov    0xc(%ebp),%eax
084b18d7 +0x181:  mov    0x18(%eax),%eax
084b18da +0x184:  mov    %ebx,0x14(%esp)
084b18de +0x188:  mov    %ecx,0x10(%esp)
084b18e2 +0x18c:  mov    %edx,0xc(%esp)
084b18e6 +0x190:  mov    %eax,0x8(%esp)
084b18ea +0x194:  movl   $"시도수\t%d\t%d\t%d\t%d\n",0x4(%esp)
084b18f2 +0x19c:  lea    -0x42c(%ebp),%eax
084b18f8 +0x1a2:  mov    %eax,(%esp)
084b18fb +0x1a5:  call   0807e440 <_init+0xd38>
084b1900 +0x1aa:  lea    -0x42c(%ebp),%eax
084b1906 +0x1b0:  mov    %eax,0x4(%esp)
084b190a +0x1b4:  mov    0x10(%ebp),%eax
084b190d +0x1b7:  mov    %eax,(%esp)
084b1910 +0x1ba:  call   0807dd60 <_init+0x658>
084b1915 +0x1bf:  mov    -0x18(%ebp),%edx
084b1918 +0x1c2:  mov    0xc(%ebp),%eax
084b191b +0x1c5:  mov    0x4(%eax,%edx,4),%eax
084b191f +0x1c9:  mov    %eax,-0x440(%ebp)
084b1925 +0x1cf:  fildl  -0x440(%ebp)
084b192b +0x1d5:  flds   ""
084b1931 +0x1db:  fdivrp %st,%st(1)
084b1933 +0x1dd:  fstps  -0x14(%ebp)
084b1936 +0x1e0:  mov    0xc(%ebp),%eax
084b1939 +0x1e3:  mov    0x24(%eax),%eax
084b193c +0x1e6:  mov    %eax,-0x440(%ebp)
084b1942 +0x1ec:  fildl  -0x440(%ebp)
084b1948 +0x1f2:  fmuls  -0x14(%ebp)
084b194b +0x1f5:  mov    0xc(%ebp),%eax
084b194e +0x1f8:  mov    0x20(%eax),%eax
084b1951 +0x1fb:  mov    %eax,-0x440(%ebp)
084b1957 +0x201:  fildl  -0x440(%ebp)
084b195d +0x207:  fmuls  -0x14(%ebp)
084b1960 +0x20a:  mov    0xc(%ebp),%eax
084b1963 +0x20d:  mov    0x1c(%eax),%eax
084b1966 +0x210:  mov    %eax,-0x440(%ebp)
084b196c +0x216:  fildl  -0x440(%ebp)
084b1972 +0x21c:  fmuls  -0x14(%ebp)
084b1975 +0x21f:  mov    0xc(%ebp),%eax
084b1978 +0x222:  mov    0x18(%eax),%eax
084b197b +0x225:  mov    %eax,-0x440(%ebp)
084b1981 +0x22b:  fildl  -0x440(%ebp)
084b1987 +0x231:  fmuls  -0x14(%ebp)
084b198a +0x234:  fxch   %st(3)
084b198c +0x236:  fstpl  0x20(%esp)
084b1990 +0x23a:  fxch   %st(1)
084b1992 +0x23c:  fstpl  0x18(%esp)
084b1996 +0x240:  fstpl  0x10(%esp)
084b199a +0x244:  fstpl  0x8(%esp)
084b199e +0x248:  movl   $"총 드랍율(%%)\t%f\t%f\t%f\t%f\n",0x4(%esp)
084b19a6 +0x250:  lea    -0x42c(%ebp),%eax
084b19ac +0x256:  mov    %eax,(%esp)
084b19af +0x259:  call   0807e440 <_init+0xd38>
084b19b4 +0x25e:  lea    -0x42c(%ebp),%eax
084b19ba +0x264:  mov    %eax,0x4(%esp)
084b19be +0x268:  mov    0x10(%ebp),%eax
084b19c1 +0x26b:  mov    %eax,(%esp)
084b19c4 +0x26e:  call   0807dd60 <_init+0x658>
084b19c9 +0x273:  mov    0xc(%ebp),%eax
084b19cc +0x276:  mov    0x28(%eax),%eax
084b19cf +0x279:  mov    %eax,0x8(%esp)
084b19d3 +0x27d:  movl   $"총 개수\t%d\n\n",0x4(%esp)
084b19db +0x285:  lea    -0x42c(%ebp),%eax
084b19e1 +0x28b:  mov    %eax,(%esp)
084b19e4 +0x28e:  call   0807e440 <_init+0xd38>
084b19e9 +0x293:  lea    -0x42c(%ebp),%eax
084b19ef +0x299:  mov    %eax,0x4(%esp)
084b19f3 +0x29d:  mov    0x10(%ebp),%eax
084b19f6 +0x2a0:  mov    %eax,(%esp)
084b19f9 +0x2a3:  call   0807dd60 <_init+0x658>
084b19fe +0x2a8:  cmpb   $0x0,-0x43c(%ebp)
084b1a05 +0x2af:  je     084b1b41 <+0x3eb>
084b1a0b +0x2b5:  movl   $0xf,0x8(%esp)
084b1a13 +0x2bd:  movl   $"아이템 리스트\n",0x4(%esp)
084b1a1b +0x2c5:  lea    -0x42c(%ebp),%eax
084b1a21 +0x2cb:  mov    %eax,(%esp)
084b1a24 +0x2ce:  call   0807d8a0 <_init+0x198>
084b1a29 +0x2d3:  lea    -0x42c(%ebp),%eax
084b1a2f +0x2d9:  mov    %eax,0x4(%esp)
084b1a33 +0x2dd:  mov    0x10(%ebp),%eax
084b1a36 +0x2e0:  mov    %eax,(%esp)
084b1a39 +0x2e3:  call   0807dd60 <_init+0x658>
084b1a3e +0x2e8:  movl   $0x0,-0x10(%ebp)
084b1a45 +0x2ef:  mov    0xc(%ebp),%eax
084b1a48 +0x2f2:  lea    0x30(%eax),%edx
084b1a4b +0x2f5:  lea    -0x24(%ebp),%eax
084b1a4e +0x2f8:  mov    %edx,0x4(%esp)
084b1a52 +0x2fc:  mov    %eax,(%esp)
084b1a55 +0x2ff:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
084b1a5a +0x304:  sub    $0x4,%esp
084b1a5d +0x307:  jmp    084b1b05 <+0x3af>
084b1a62 +0x30c:  lea    -0x24(%ebp),%eax
084b1a65 +0x30f:  mov    %eax,(%esp)
084b1a68 +0x312:  call   08235bba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb264>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb264
084b1a6d +0x317:  mov    0x4(%eax),%edx
084b1a70 +0x31a:  mov    (%eax),%eax
084b1a72 +0x31c:  mov    %eax,-0x2c(%ebp)
084b1a75 +0x31f:  mov    %edx,-0x28(%ebp)
084b1a78 +0x322:  mov    -0x2c(%ebp),%ebx
084b1a7b +0x325:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084b1a80 +0x32a:  mov    %ebx,0x4(%esp)
084b1a84 +0x32e:  mov    %eax,(%esp)
084b1a87 +0x331:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084b1a8c +0x336:  mov    %eax,-0xc(%ebp)
084b1a8f +0x339:  cmpl   $0x0,-0xc(%ebp)
084b1a93 +0x33d:  je     084b1afa <+0x3a4>
084b1a95 +0x33f:  mov    -0xc(%ebp),%eax
084b1a98 +0x342:  mov    %eax,(%esp)
084b1a9b +0x345:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
084b1aa0 +0x34a:  mov    -0x28(%ebp),%edx
084b1aa3 +0x34d:  sub    -0x10(%ebp),%edx
084b1aa6 +0x350:  mov    %edx,-0x440(%ebp)
084b1aac +0x356:  fildl  -0x440(%ebp)
084b1ab2 +0x35c:  flds   ""
084b1ab8 +0x362:  fdivrp %st,%st(1)
084b1aba +0x364:  mov    -0x2c(%ebp),%edx
084b1abd +0x367:  mov    %eax,0x14(%esp)
084b1ac1 +0x36b:  fstpl  0xc(%esp)
084b1ac5 +0x36f:  mov    %edx,0x8(%esp)
084b1ac9 +0x373:  movl   $"%d\t%f\t%s\n",0x4(%esp)
084b1ad1 +0x37b:  lea    -0x42c(%ebp),%eax
084b1ad7 +0x381:  mov    %eax,(%esp)
084b1ada +0x384:  call   0807e440 <_init+0xd38>
084b1adf +0x389:  lea    -0x42c(%ebp),%eax
084b1ae5 +0x38f:  mov    %eax,0x4(%esp)
084b1ae9 +0x393:  mov    0x10(%ebp),%eax
084b1aec +0x396:  mov    %eax,(%esp)
084b1aef +0x399:  call   0807dd60 <_init+0x658>
084b1af4 +0x39e:  mov    -0x28(%ebp),%eax
084b1af7 +0x3a1:  mov    %eax,-0x10(%ebp)
084b1afa +0x3a4:  lea    -0x24(%ebp),%eax
084b1afd +0x3a7:  mov    %eax,(%esp)
084b1b00 +0x3aa:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
084b1b05 +0x3af:  mov    0xc(%ebp),%eax
084b1b08 +0x3b2:  lea    0x30(%eax),%edx
084b1b0b +0x3b5:  lea    -0x20(%ebp),%eax
084b1b0e +0x3b8:  mov    %edx,0x4(%esp)
084b1b12 +0x3bc:  mov    %eax,(%esp)
084b1b15 +0x3bf:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
084b1b1a +0x3c4:  sub    $0x4,%esp
084b1b1d +0x3c7:  lea    -0x20(%ebp),%eax
084b1b20 +0x3ca:  mov    %eax,0x4(%esp)
084b1b24 +0x3ce:  lea    -0x24(%ebp),%eax
084b1b27 +0x3d1:  mov    %eax,(%esp)
084b1b2a +0x3d4:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
084b1b2f +0x3d9:  test   %al,%al
084b1b31 +0x3db:  jne    084b1a62 <+0x30c>
084b1b37 +0x3e1:  movl   $0x0,-0x10(%ebp)
084b1b3e +0x3e8:  jmp    084b1b41 <+0x3eb>
084b1b40 +0x3ea:  nop
084b1b41 +0x3eb:  addl   $0x1,-0x18(%ebp)
084b1b45 +0x3ef:  cmpl   $0x4,-0x18(%ebp)
084b1b49 +0x3f3:  setle  %al
084b1b4c +0x3f6:  test   %al,%al
084b1b4e +0x3f8:  jne    084b1831 <+0xdb>
084b1b54 +0x3fe:  lea    -0x8(%ebp),%esp
084b1b57 +0x401:  add    $0x0,%esp
084b1b5a +0x404:  pop    %ebx
084b1b5b +0x405:  pop    %edi
084b1b5c +0x406:  pop    %ebp
084b1b5d +0x407:  ret
```

## 反编译 C

```c
// game_master::CIndependentDrop::PrintItemDropList @ 0x84b1756

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* game_master::CIndependentDrop::PrintItemDropList(stMonsterIndependentDrop_t const&, char*, bool)
    */

void __thiscall
game_master::CIndependentDrop::PrintItemDropList
          (CIndependentDrop *this,stMonsterIndependentDrop_t *param_1,char *param_2,bool param_3)

{
  double dVar1;
  bool bVar2;
  CDataManager *pCVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  char local_430 [1024];
  int local_30;
  int local_2c;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_28 [4];
  __normal_iterator local_24 [4];
  CItem *local_20;
  int local_1c;
  float local_18;
  int local_14;
  CItem *local_10;
  
  pcVar7 = local_430;
  for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7 = pcVar7 + 4;
  }
  if (param_3) {
    memcpy(local_430,&DAT_08c802df,0xd);
    strcat(param_2,local_430);
  }
  else {
    iVar6 = *(int *)param_1;
    pCVar3 = (CDataManager *)G_CDataManager();
    local_20 = (CItem *)CDataManager::find_item(pCVar3,iVar6);
    if (local_20 != (CItem *)0x0) {
      uVar4 = CItem::GetItemName(local_20);
      sprintf(local_430,"%d\t%s\n",*(undefined4 *)param_1,uVar4);
      strcat(param_2,local_430);
    }
  }
  for (local_1c = 0; local_1c < 5; local_1c = local_1c + 1) {
    if (*(int *)(param_1 + local_1c * 4 + 4) != 0) {
      sprintf(local_430,&DAT_08c802ec,local_1c);
      strcat(param_2,local_430);
      sprintf(local_430,&DAT_08c802f7,
              SUB84((double)((float)*(int *)(param_1 + local_1c * 4 + 4) / _DAT_08c81474),0),
              (int)((ulonglong)(double)((float)*(int *)(param_1 + local_1c * 4 + 4) / _DAT_08c81474)
                   >> 0x20));
      strcat(param_2,local_430);
      sprintf(local_430,&DAT_08c80306,*(undefined4 *)(param_1 + 0x18),
              *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
              *(undefined4 *)(param_1 + 0x24));
      strcat(param_2,local_430);
      local_18 = (float)*(int *)(param_1 + local_1c * 4 + 4) / _DAT_08c81474;
      sprintf(local_430,&DAT_08c8031a,SUB84((double)((float)*(int *)(param_1 + 0x18) * local_18),0),
              (int)((ulonglong)(double)((float)*(int *)(param_1 + 0x18) * local_18) >> 0x20),
              SUB84((double)((float)*(int *)(param_1 + 0x1c) * local_18),0),
              (int)((ulonglong)(double)((float)*(int *)(param_1 + 0x1c) * local_18) >> 0x20),
              (double)((float)*(int *)(param_1 + 0x20) * local_18),
              (double)((float)*(int *)(param_1 + 0x24) * local_18));
      strcat(param_2,local_430);
      sprintf(local_430,&DAT_08c80335,*(undefined4 *)(param_1 + 0x28));
      strcat(param_2,local_430);
      if (param_3) {
        memcpy(local_430,&DAT_08c80342,0xf);
        strcat(param_2,local_430);
        local_14 = 0;
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
        while( true ) {
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
          bVar2 = __gnu_cxx::operator!=(local_28,local_24);
          if (!bVar2) break;
          piVar5 = (int *)__gnu_cxx::
                          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                          ::operator*(local_28);
          local_2c = piVar5[1];
          iVar6 = *piVar5;
          local_30 = iVar6;
          pCVar3 = (CDataManager *)G_CDataManager();
          local_10 = (CItem *)CDataManager::find_item(pCVar3,iVar6);
          if (local_10 != (CItem *)0x0) {
            uVar4 = CItem::GetItemName(local_10);
            dVar1 = (double)((float)(local_2c - local_14) / _DAT_08c81474);
            sprintf(local_430,"%d\t%f\t%s\n",local_30,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20)
                    ,uVar4);
            strcat(param_2,local_430);
            local_14 = local_2c;
          }
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_28);
        }
        local_14 = 0;
      }
    }
  }
  return;
}
```
