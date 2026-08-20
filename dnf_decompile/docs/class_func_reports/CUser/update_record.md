# update_record

`_ZN5CUser13update_recordER14GameResultType`

`CUser::update_record(GameResultType&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08676876` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08676876  _ZN5CUser13update_recordER14GameResultType
#           CUser::update_record(GameResultType&)
# range [0x08676876, 0x086769b3]
08676876 +0x000:  push   %ebp
08676877 +0x001:  mov    %esp,%ebp
08676879 +0x003:  push   %esi
0867687a +0x004:  push   %ebx
0867687b +0x005:  sub    $0xa0,%esp
08676881 +0x00b:  movl   $0x0,-0x10(%ebp)
08676888 +0x012:  lea    -0x7c(%ebp),%eax
0867688b +0x015:  mov    %eax,(%esp)
0867688e +0x018:  call   0869b300 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7b55>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7b55
08676893 +0x01d:  mov    0xc(%ebp),%eax
08676896 +0x020:  mov    %eax,(%esp)
08676899 +0x023:  call   084b75ae <_ZN14GameResultType12GetUniqueKeyEv>  ; GameResultType::GetUniqueKey()
0867689e +0x028:  mov    %eax,-0x78(%ebp)
086768a1 +0x02b:  mov    0x8(%ebp),%eax
086768a4 +0x02e:  mov    %eax,(%esp)
086768a7 +0x031:  call   0869620e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2a63>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2a63
086768ac +0x036:  lea    -0x8c(%ebp),%edx
086768b2 +0x03c:  lea    -0x78(%ebp),%ecx
086768b5 +0x03f:  mov    %ecx,0x8(%esp)
086768b9 +0x043:  mov    %eax,0x4(%esp)
086768bd +0x047:  mov    %edx,(%esp)
086768c0 +0x04a:  call   0869b30e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7b63>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7b63
086768c5 +0x04f:  sub    $0x4,%esp
086768c8 +0x052:  mov    -0x8c(%ebp),%eax
086768ce +0x058:  mov    %eax,-0x7c(%ebp)
086768d1 +0x05b:  mov    0x8(%ebp),%eax
086768d4 +0x05e:  mov    %eax,(%esp)
086768d7 +0x061:  call   0869620e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2a63>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2a63
086768dc +0x066:  lea    -0x74(%ebp),%edx
086768df +0x069:  mov    %eax,0x4(%esp)
086768e3 +0x06d:  mov    %edx,(%esp)
086768e6 +0x070:  call   0869b33a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7b8f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7b8f
086768eb +0x075:  sub    $0x4,%esp
086768ee +0x078:  lea    -0x74(%ebp),%eax
086768f1 +0x07b:  mov    %eax,0x4(%esp)
086768f5 +0x07f:  lea    -0x7c(%ebp),%eax
086768f8 +0x082:  mov    %eax,(%esp)
086768fb +0x085:  call   0869b360 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7bb5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7bb5
08676900 +0x08a:  test   %al,%al
08676902 +0x08c:  je     0867692c <+0xb6>
08676904 +0x08e:  lea    -0x7c(%ebp),%eax
08676907 +0x091:  mov    %eax,(%esp)
0867690a +0x094:  call   0869b374 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7bc9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7bc9
0867690f +0x099:  add    $0x4,%eax
08676912 +0x09c:  mov    %eax,-0xc(%ebp)
08676915 +0x09f:  mov    0xc(%ebp),%eax
08676918 +0x0a2:  mov    %eax,0x4(%esp)
0867691c +0x0a6:  mov    -0xc(%ebp),%eax
0867691f +0x0a9:  mov    %eax,(%esp)
08676922 +0x0ac:  call   084b750c <_ZN14GameResultType15UpdateHighScoreERKS_>  ; GameResultType::UpdateHighScore(GameResultType const&)
08676927 +0x0b1:  mov    %eax,-0x10(%ebp)
0867692a +0x0b4:  jmp    086769a6 <+0x130>
0867692c +0x0b6:  mov    0xc(%ebp),%eax
0867692f +0x0b9:  mov    %eax,(%esp)
08676932 +0x0bc:  call   084b75ae <_ZN14GameResultType12GetUniqueKeyEv>  ; GameResultType::GetUniqueKey()
08676937 +0x0c1:  mov    %eax,-0x14(%ebp)
0867693a +0x0c4:  mov    0xc(%ebp),%eax
0867693d +0x0c7:  mov    %eax,0x8(%esp)
08676941 +0x0cb:  lea    -0x14(%ebp),%eax
08676944 +0x0ce:  mov    %eax,0x4(%esp)
08676948 +0x0d2:  lea    -0x68(%ebp),%eax
0867694b +0x0d5:  mov    %eax,(%esp)
0867694e +0x0d8:  call   0869b382 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7bd7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7bd7
08676953 +0x0dd:  mov    0x8(%ebp),%eax
08676956 +0x0e0:  mov    %eax,(%esp)
08676959 +0x0e3:  call   0869620e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2a63>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2a63
0867695e +0x0e8:  lea    -0x70(%ebp),%edx
08676961 +0x0eb:  lea    -0x68(%ebp),%ecx
08676964 +0x0ee:  mov    %ecx,0x8(%esp)
08676968 +0x0f2:  mov    %eax,0x4(%esp)
0867696c +0x0f6:  mov    %edx,(%esp)
0867696f +0x0f9:  call   0869b3c6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7c1b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7c1b
08676974 +0x0fe:  sub    $0x4,%esp
08676977 +0x101:  lea    -0x68(%ebp),%eax
0867697a +0x104:  mov    %eax,(%esp)
0867697d +0x107:  call   08697d16 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x456b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x456b
08676982 +0x10c:  movl   $0xf,-0x10(%ebp)
08676989 +0x113:  jmp    086769a6 <+0x130>
0867698b +0x115:  mov    %edx,%ebx
0867698d +0x117:  mov    %eax,%esi
0867698f +0x119:  lea    -0x68(%ebp),%eax
08676992 +0x11c:  mov    %eax,(%esp)
08676995 +0x11f:  call   08697d16 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x456b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x456b
0867699a +0x124:  mov    %esi,%eax
0867699c +0x126:  mov    %ebx,%edx
0867699e +0x128:  mov    %eax,(%esp)
086769a1 +0x12b:  call   08ae3750 <_Unwind_Resume>
086769a6 +0x130:  mov    -0x10(%ebp),%eax
086769a9 +0x133:  lea    -0x8(%ebp),%esp
086769ac +0x136:  add    $0x0,%esp
086769af +0x139:  pop    %ebx
086769b0 +0x13a:  pop    %esi
086769b1 +0x13b:  pop    %ebp
086769b2 +0x13c:  ret
086769b3 +0x13d:  nop
```

## 反编译 C

```c
// CUser::update_record @ 0x8676876

/* CUser::update_record(GameResultType&) */

undefined4 __thiscall CUser::update_record(CUser *this,GameResultType *param_1)

{
  char cVar1;
  int iVar2;
  int local_90 [4];
  int local_80;
  undefined4 local_7c;
  map<int,GameResultType,std::less<int>,std::allocator<std::pair<int_const,GameResultType>>>
  local_78 [4];
  pair local_74 [8];
  pair<int_const,GameResultType> local_6c [84];
  int local_18;
  undefined4 local_14;
  GameResultType *local_10;
  
  local_14 = 0;
  std::_Rb_tree_iterator<std::pair<int_const,GameResultType>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,GameResultType>> *)&local_80);
  local_7c = GameResultType::GetUniqueKey(param_1);
  CUserCharacInfo::getBattleRecordRefW((CUserCharacInfo *)this);
  std::map<int,GameResultType,std::less<int>,std::allocator<std::pair<int_const,GameResultType>>>::
  find(local_90);
  local_80 = local_90[0];
  CUserCharacInfo::getBattleRecordRefW((CUserCharacInfo *)this);
  std::map<int,GameResultType,std::less<int>,std::allocator<std::pair<int_const,GameResultType>>>::
  end(local_78);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,GameResultType>>::operator!=
                    ((_Rb_tree_iterator<std::pair<int_const,GameResultType>> *)&local_80,
                     (_Rb_tree_iterator *)local_78);
  if (cVar1 == '\0') {
    local_18 = GameResultType::GetUniqueKey(param_1);
    std::pair<int_const,GameResultType>::pair<int,GameResultType&>(local_6c,&local_18,param_1);
    CUserCharacInfo::getBattleRecordRefW((CUserCharacInfo *)this);
                    /* try { // try from 0867696f to 08676973 has its CatchHandler @ 0867698b */
    std::map<int,GameResultType,std::less<int>,std::allocator<std::pair<int_const,GameResultType>>>
    ::insert(local_74);
    std::pair<int_const,GameResultType>::~pair(local_6c);
    local_14 = 0xf;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,GameResultType>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,GameResultType>> *)&local_80);
    local_10 = (GameResultType *)(iVar2 + 4);
    local_14 = GameResultType::UpdateHighScore(local_10,param_1);
  }
  return local_14;
}
```
