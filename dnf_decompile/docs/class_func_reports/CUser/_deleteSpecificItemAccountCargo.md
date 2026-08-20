# _deleteSpecificItemAccountCargo

`_ZN5CUser31_deleteSpecificItemAccountCargoERKSt6vectorISt4pairIiiESaIS2_EERS4_`

`CUser::_deleteSpecificItemAccountCargo(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867d8a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867d8a4  _ZN5CUser31_deleteSpecificItemAccountCargoERKSt6vectorISt4pairIiiESaIS2_EERS4_
#           CUser::_deleteSpecificItemAccountCargo(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x0867d8a4, 0x0867db65]
0867d8a4 +0x000:  push   %ebp
0867d8a5 +0x001:  mov    %esp,%ebp
0867d8a7 +0x003:  push   %esi
0867d8a8 +0x004:  push   %ebx
0867d8a9 +0x005:  sub    $0xa0,%esp
0867d8af +0x00b:  movl   $0xffffffff,-0x14(%ebp)
0867d8b6 +0x012:  mov    0x8(%ebp),%eax
0867d8b9 +0x015:  mov    %eax,(%esp)
0867d8bc +0x018:  call   0822fc30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52da
0867d8c1 +0x01d:  xor    $0x1,%eax
0867d8c4 +0x020:  test   %al,%al
0867d8c6 +0x022:  jne    0867db5a <+0x2b6>
0867d8cc +0x028:  mov    0x8(%ebp),%eax
0867d8cf +0x02b:  mov    %eax,(%esp)
0867d8d2 +0x02e:  call   0822fc22 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52cc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52cc
0867d8d7 +0x033:  mov    %eax,-0x10(%ebp)
0867d8da +0x036:  lea    -0x4c(%ebp),%eax
0867d8dd +0x039:  mov    %eax,(%esp)
0867d8e0 +0x03c:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0867d8e5 +0x041:  movl   $0x0,-0x50(%ebp)
0867d8ec +0x048:  jmp    0867da95 <+0x1f1>
0867d8f1 +0x04d:  mov    -0x50(%ebp),%eax
0867d8f4 +0x050:  mov    %eax,%edx
0867d8f6 +0x052:  lea    -0x8d(%ebp),%eax
0867d8fc +0x058:  mov    %edx,0x8(%esp)
0867d900 +0x05c:  mov    -0x10(%ebp),%edx
0867d903 +0x05f:  mov    %edx,0x4(%esp)
0867d907 +0x063:  mov    %eax,(%esp)
0867d90a +0x066:  call   082898f8 <_ZN13CAccountCargo7GetSlotEi>  ; CAccountCargo::GetSlot(int)
0867d90f +0x06b:  sub    $0x4,%esp
0867d912 +0x06e:  mov    -0x8b(%ebp),%eax
0867d918 +0x074:  test   %eax,%eax
0867d91a +0x076:  je     0867da8b <+0x1e7>
0867d920 +0x07c:  movb   $0x0,-0x9(%ebp)
0867d924 +0x080:  lea    -0x8d(%ebp),%eax
0867d92a +0x086:  mov    %eax,(%esp)
0867d92d +0x089:  call   0867cf8d <_Z17_checkTimeoutItemRK10Inven_Item>  ; _checkTimeoutItem(Inven_Item const&)
0867d932 +0x08e:  test   %al,%al
0867d934 +0x090:  je     0867d946 <+0xa2>
0867d936 +0x092:  movb   $0x1,-0x9(%ebp)
0867d93a +0x096:  movl   $0x0,-0x14(%ebp)
0867d941 +0x09d:  jmp    0867d9f3 <+0x14f>
0867d946 +0x0a2:  mov    -0x8b(%ebp),%eax
0867d94c +0x0a8:  mov    0xc(%ebp),%edx
0867d94f +0x0ab:  mov    %edx,0x8(%esp)
0867d953 +0x0af:  mov    %eax,0x4(%esp)
0867d957 +0x0b3:  mov    0x8(%ebp),%eax
0867d95a +0x0b6:  mov    %eax,(%esp)
0867d95d +0x0b9:  call   0867cf0c <_ZN5CUser14_isMatchedItemEiRKSt6vectorISt4pairIiiESaIS2_EE>  ; CUser::_isMatchedItem(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0867d962 +0x0be:  mov    %eax,-0x14(%ebp)
0867d965 +0x0c1:  cmpl   $0xffffffff,-0x14(%ebp)
0867d969 +0x0c5:  setne  %al
0867d96c +0x0c8:  test   %al,%al
0867d96e +0x0ca:  je     0867d981 <+0xdd>
0867d970 +0x0cc:  mov    -0x86(%ebp),%eax
0867d976 +0x0d2:  cmp    -0x14(%ebp),%eax
0867d979 +0x0d5:  jle    0867d9f3 <+0x14f>
0867d97b +0x0d7:  movb   $0x1,-0x9(%ebp)
0867d97f +0x0db:  jmp    0867d9f3 <+0x14f>
0867d981 +0x0dd:  mov    -0x8b(%ebp),%eax
0867d987 +0x0e3:  mov    %eax,%ebx
0867d989 +0x0e5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867d98e +0x0ea:  add    $0xb658,%eax
0867d993 +0x0ef:  mov    %ebx,0x4(%esp)
0867d997 +0x0f3:  mov    %eax,(%esp)
0867d99a +0x0f6:  call   08ac2096 <_ZN23DeleteInvalidItemScript20IsInvalidItem2DeleteEi>  ; DeleteInvalidItemScript::IsInvalidItem2Delete(int)
0867d99f +0x0fb:  test   %al,%al
0867d9a1 +0x0fd:  je     0867d9f3 <+0x14f>
0867d9a3 +0x0ff:  lea    -0x38(%ebp),%eax
0867d9a6 +0x102:  lea    -0x8d(%ebp),%edx
0867d9ac +0x108:  add    $0x7,%edx
0867d9af +0x10b:  mov    %edx,0x8(%esp)
0867d9b3 +0x10f:  lea    -0x8d(%ebp),%edx
0867d9b9 +0x115:  add    $0x2,%edx
0867d9bc +0x118:  mov    %edx,0x4(%esp)
0867d9c0 +0x11c:  mov    %eax,(%esp)
0867d9c3 +0x11f:  call   08111a37 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf49>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf49
0867d9c8 +0x124:  sub    $0x4,%esp
0867d9cb +0x127:  lea    -0x38(%ebp),%eax
0867d9ce +0x12a:  mov    %eax,0x4(%esp)
0867d9d2 +0x12e:  lea    -0x40(%ebp),%eax
0867d9d5 +0x131:  mov    %eax,(%esp)
0867d9d8 +0x134:  call   08111a76 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf88>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf88
0867d9dd +0x139:  lea    -0x40(%ebp),%eax
0867d9e0 +0x13c:  mov    %eax,0x4(%esp)
0867d9e4 +0x140:  lea    -0x4c(%ebp),%eax
0867d9e7 +0x143:  mov    %eax,(%esp)
0867d9ea +0x146:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0867d9ef +0x14b:  movb   $0x1,-0x9(%ebp)
0867d9f3 +0x14f:  cmpb   $0x0,-0x9(%ebp)
0867d9f7 +0x153:  je     0867da8c <+0x1e8>
0867d9fd +0x159:  cmpl   $0x0,-0x14(%ebp)
0867da01 +0x15d:  jne    0867da21 <+0x17d>
0867da03 +0x15f:  mov    -0x86(%ebp),%edx
0867da09 +0x165:  mov    -0x50(%ebp),%eax
0867da0c +0x168:  mov    %edx,0x8(%esp)
0867da10 +0x16c:  mov    %eax,0x4(%esp)
0867da14 +0x170:  mov    -0x10(%ebp),%eax
0867da17 +0x173:  mov    %eax,(%esp)
0867da1a +0x176:  call   08289e3c <_ZN13CAccountCargo10DeleteItemEii>  ; CAccountCargo::DeleteItem(int, int)
0867da1f +0x17b:  jmp    0867da42 <+0x19e>
0867da21 +0x17d:  mov    -0x86(%ebp),%eax
0867da27 +0x183:  mov    %eax,%edx
0867da29 +0x185:  sub    -0x14(%ebp),%edx
0867da2c +0x188:  mov    -0x50(%ebp),%eax
0867da2f +0x18b:  mov    %edx,0x8(%esp)
0867da33 +0x18f:  mov    %eax,0x4(%esp)
0867da37 +0x193:  mov    -0x10(%ebp),%eax
0867da3a +0x196:  mov    %eax,(%esp)
0867da3d +0x199:  call   08289e3c <_ZN13CAccountCargo10DeleteItemEii>  ; CAccountCargo::DeleteItem(int, int)
0867da42 +0x19e:  movl   $0xc,-0x20(%ebp)
0867da49 +0x1a5:  lea    -0x28(%ebp),%eax
0867da4c +0x1a8:  lea    -0x50(%ebp),%edx
0867da4f +0x1ab:  mov    %edx,0x8(%esp)
0867da53 +0x1af:  lea    -0x20(%ebp),%edx
0867da56 +0x1b2:  mov    %edx,0x4(%esp)
0867da5a +0x1b6:  mov    %eax,(%esp)
0867da5d +0x1b9:  call   0869bf73 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x87c8>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x87c8
0867da62 +0x1be:  sub    $0x4,%esp
0867da65 +0x1c1:  lea    -0x28(%ebp),%eax
0867da68 +0x1c4:  mov    %eax,0x4(%esp)
0867da6c +0x1c8:  lea    -0x30(%ebp),%eax
0867da6f +0x1cb:  mov    %eax,(%esp)
0867da72 +0x1ce:  call   0869bfba <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x880f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x880f
0867da77 +0x1d3:  lea    -0x30(%ebp),%eax
0867da7a +0x1d6:  mov    %eax,0x4(%esp)
0867da7e +0x1da:  mov    0x10(%ebp),%eax
0867da81 +0x1dd:  mov    %eax,(%esp)
0867da84 +0x1e0:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0867da89 +0x1e5:  jmp    0867da8c <+0x1e8>
0867da8b +0x1e7:  nop
0867da8c +0x1e8:  mov    -0x50(%ebp),%eax
0867da8f +0x1eb:  add    $0x1,%eax
0867da92 +0x1ee:  mov    %eax,-0x50(%ebp)
0867da95 +0x1f1:  mov    -0x10(%ebp),%eax
0867da98 +0x1f4:  mov    %eax,(%esp)
0867da9b +0x1f7:  call   0822f012 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46bc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46bc
0867daa0 +0x1fc:  mov    -0x50(%ebp),%edx
0867daa3 +0x1ff:  cmp    %edx,%eax
0867daa5 +0x201:  seta   %al
0867daa8 +0x204:  test   %al,%al
0867daaa +0x206:  jne    0867d8f1 <+0x4d>
0867dab0 +0x20c:  lea    -0x15(%ebp),%eax
0867dab3 +0x20f:  mov    %eax,(%esp)
0867dab6 +0x212:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0867dabb +0x217:  lea    -0x15(%ebp),%eax
0867dabe +0x21a:  mov    %eax,0x8(%esp)
0867dac2 +0x21e:  movl   $"AccountCargo",0x4(%esp)
0867daca +0x226:  lea    -0x1c(%ebp),%eax
0867dacd +0x229:  mov    %eax,(%esp)
0867dad0 +0x22c:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0867dad5 +0x231:  lea    -0x4c(%ebp),%eax
0867dad8 +0x234:  mov    %eax,0x8(%esp)
0867dadc +0x238:  lea    -0x1c(%ebp),%eax
0867dadf +0x23b:  mov    %eax,0x4(%esp)
0867dae3 +0x23f:  mov    0x8(%ebp),%eax
0867dae6 +0x242:  mov    %eax,(%esp)
0867dae9 +0x245:  call   086931c4 <_ZN5CUser28RewardItem2DeleteInvalidItemERKSsRKSt6vectorISt4pairIiiESaIS4_EE>  ; CUser::RewardItem2DeleteInvalidItem(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0867daee +0x24a:  jmp    0867db05 <+0x261>
0867daf0 +0x24c:  mov    %edx,%ebx
0867daf2 +0x24e:  mov    %eax,%esi
0867daf4 +0x250:  lea    -0x1c(%ebp),%eax
0867daf7 +0x253:  mov    %eax,(%esp)
0867dafa +0x256:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867daff +0x25b:  mov    %esi,%eax
0867db01 +0x25d:  mov    %ebx,%edx
0867db03 +0x25f:  jmp    0867db12 <+0x26e>
0867db05 +0x261:  lea    -0x1c(%ebp),%eax
0867db08 +0x264:  mov    %eax,(%esp)
0867db0b +0x267:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867db10 +0x26c:  jmp    0867db27 <+0x283>
0867db12 +0x26e:  mov    %edx,%ebx
0867db14 +0x270:  mov    %eax,%esi
0867db16 +0x272:  lea    -0x15(%ebp),%eax
0867db19 +0x275:  mov    %eax,(%esp)
0867db1c +0x278:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0867db21 +0x27d:  mov    %esi,%eax
0867db23 +0x27f:  mov    %ebx,%edx
0867db25 +0x281:  jmp    0867db3f <+0x29b>
0867db27 +0x283:  lea    -0x15(%ebp),%eax
0867db2a +0x286:  mov    %eax,(%esp)
0867db2d +0x289:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0867db32 +0x28e:  lea    -0x4c(%ebp),%eax
0867db35 +0x291:  mov    %eax,(%esp)
0867db38 +0x294:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0867db3d +0x299:  jmp    0867db5b <+0x2b7>
0867db3f +0x29b:  mov    %edx,%ebx
0867db41 +0x29d:  mov    %eax,%esi
0867db43 +0x29f:  lea    -0x4c(%ebp),%eax
0867db46 +0x2a2:  mov    %eax,(%esp)
0867db49 +0x2a5:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0867db4e +0x2aa:  mov    %esi,%eax
0867db50 +0x2ac:  mov    %ebx,%edx
0867db52 +0x2ae:  mov    %eax,(%esp)
0867db55 +0x2b1:  call   08ae3750 <_Unwind_Resume>
0867db5a +0x2b6:  nop
0867db5b +0x2b7:  lea    -0x8(%ebp),%esp
0867db5e +0x2ba:  add    $0x0,%esp
0867db61 +0x2bd:  pop    %ebx
0867db62 +0x2be:  pop    %esi
0867db63 +0x2bf:  pop    %ebp
0867db64 +0x2c0:  ret
0867db65 +0x2c1:  nop
```

## 反编译 C

```c
// CUser::_deleteSpecificItemAccountCargo @ 0x867d8a4

/* CUser::_deleteSpecificItemAccountCargo(std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&) */

void __thiscall CUser::_deleteSpecificItemAccountCargo(CUser *this,vector *param_1,vector *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  Inven_Item local_91 [2];
  vector *local_8f;
  int local_8a;
  uint local_54;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_50 [12];
  pair<int,int> local_44 [8];
  ulong local_3c [2];
  pair<int,int> local_34 [8];
  ENUM_ITEMSPACE local_2c [8];
  uint local_24;
  string local_20;
  allocator<char> local_19;
  int local_18;
  CAccountCargo *local_14;
  char local_d;
  
  local_18 = -1;
  cVar1 = IsExistAccountCargo(this);
  if (cVar1 == '\x01') {
    local_14 = (CAccountCargo *)GetAccountCargo(this);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_50);
    local_54 = 0;
    while( true ) {
      uVar3 = CAccountCargo::GetCapacity(local_14);
      if (uVar3 <= local_54) break;
                    /* try { // try from 0867d90a to 0867da88 has its CatchHandler @ 0867db3f */
      CAccountCargo::GetSlot((int)local_91);
      if (local_8f != (vector *)0x0) {
        local_d = '\0';
        cVar1 = _checkTimeoutItem(local_91);
        if (cVar1 == '\0') {
          local_18 = _isMatchedItem((int)this,local_8f);
          if (local_18 == -1) {
            iVar2 = G_CDataManager();
            cVar1 = DeleteInvalidItemScript::IsInvalidItem2Delete(iVar2 + 0xb658);
            if (cVar1 != '\0') {
              std::make_pair<unsigned_long&,int&>(local_3c,(int *)&local_8f);
              std::pair<int,int>::pair<unsigned_long,int>(local_44,(pair *)local_3c);
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                        (local_50,local_44);
              local_d = '\x01';
            }
          }
          else if (local_18 < local_8a) {
            local_d = '\x01';
          }
        }
        else {
          local_d = '\x01';
          local_18 = 0;
        }
        if (local_d != '\0') {
          if (local_18 == 0) {
            CAccountCargo::DeleteItem(local_14,local_54,local_8a);
          }
          else {
            CAccountCargo::DeleteItem(local_14,local_54,local_8a - local_18);
          }
          local_24 = 0xc;
          std::make_pair<ENUM_ITEMSPACE,unsigned_int&>(local_2c,&local_24);
          std::pair<int,int>::pair<ENUM_ITEMSPACE,unsigned_int>(local_34,local_2c);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,
                     local_34);
        }
      }
      local_54 = local_54 + 1;
    }
    std::allocator<char>::allocator();
                    /* try { // try from 0867dad0 to 0867dad4 has its CatchHandler @ 0867db12 */
    std::string::string((string *)&local_20,"AccountCargo",(allocator *)&local_19);
                    /* try { // try from 0867dae9 to 0867daed has its CatchHandler @ 0867daf0 */
    RewardItem2DeleteInvalidItem(this,&local_20,(vector *)local_50);
                    /* try { // try from 0867db0b to 0867db0f has its CatchHandler @ 0867db12 */
    std::string::~string((string *)&local_20);
    std::allocator<char>::~allocator(&local_19);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_50);
  }
  return;
}
```
