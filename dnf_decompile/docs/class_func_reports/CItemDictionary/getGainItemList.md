# getGainItemList

`_ZN15CItemDictionary15getGainItemListEv`

`CItemDictionary::getGainItemList()`

| 类 | 地址 |
|---|---|
| `CItemDictionary` | `0x0811dba6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811dba6  _ZN15CItemDictionary15getGainItemListEv
#           CItemDictionary::getGainItemList()
# range [0x0811dba6, 0x0811dce5]
0811dba6 +0x000:  push   %ebp
0811dba7 +0x001:  mov    %esp,%ebp
0811dba9 +0x003:  push   %edi
0811dbaa +0x004:  push   %esi
0811dbab +0x005:  push   %ebx
0811dbac +0x006:  sub    $0x3c,%esp
0811dbaf +0x009:  mov    0x8(%ebp),%ebx
0811dbb2 +0x00c:  movl   $0x0,-0x2c(%ebp)
0811dbb9 +0x013:  mov    %ebx,%eax
0811dbbb +0x015:  mov    %eax,(%esp)
0811dbbe +0x018:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0811dbc3 +0x01d:  mov    %ebx,%eax
0811dbc5 +0x01f:  mov    %eax,(%esp)
0811dbc8 +0x022:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
0811dbcd +0x027:  movl   $0x0,-0x24(%ebp)
0811dbd4 +0x02e:  jmp    0811dca6 <+0x100>
0811dbd9 +0x033:  mov    -0x24(%ebp),%eax
0811dbdc +0x036:  mov    0xc(%ebp),%edx
0811dbdf +0x039:  movzbl 0x5(%edx,%eax,1),%eax
0811dbe4 +0x03e:  mov    %al,-0x1d(%ebp)
0811dbe7 +0x041:  movl   $0x0,-0x1c(%ebp)
0811dbee +0x048:  jmp    0811dc93 <+0xed>
0811dbf3 +0x04d:  movzbl -0x1d(%ebp),%edx
0811dbf7 +0x051:  mov    -0x1c(%ebp),%eax
0811dbfa +0x054:  mov    %edx,%esi
0811dbfc +0x056:  mov    %eax,%ecx
0811dbfe +0x058:  sar    %cl,%esi
0811dc00 +0x05a:  mov    %esi,%eax
0811dc02 +0x05c:  and    $0x1,%eax
0811dc05 +0x05f:  test   %al,%al
0811dc07 +0x061:  je     0811dc8f <+0xe9>
0811dc0d +0x067:  mov    -0x24(%ebp),%eax
0811dc10 +0x06a:  shl    $0x3,%eax
0811dc13 +0x06d:  add    -0x1c(%ebp),%eax
0811dc16 +0x070:  mov    %eax,-0x2c(%ebp)
0811dc19 +0x073:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0811dc1e +0x078:  lea    0xa940(%eax),%ecx
0811dc24 +0x07e:  lea    -0x30(%ebp),%eax
0811dc27 +0x081:  lea    -0x2c(%ebp),%edx
0811dc2a +0x084:  mov    %edx,0x8(%esp)
0811dc2e +0x088:  mov    %ecx,0x4(%esp)
0811dc32 +0x08c:  mov    %eax,(%esp)
0811dc35 +0x08f:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0811dc3a +0x094:  sub    $0x4,%esp
0811dc3d +0x097:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0811dc42 +0x09c:  lea    0xa940(%eax),%edx
0811dc48 +0x0a2:  lea    -0x28(%ebp),%eax
0811dc4b +0x0a5:  mov    %edx,0x4(%esp)
0811dc4f +0x0a9:  mov    %eax,(%esp)
0811dc52 +0x0ac:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0811dc57 +0x0b1:  sub    $0x4,%esp
0811dc5a +0x0b4:  lea    -0x28(%ebp),%eax
0811dc5d +0x0b7:  mov    %eax,0x4(%esp)
0811dc61 +0x0bb:  lea    -0x30(%ebp),%eax
0811dc64 +0x0be:  mov    %eax,(%esp)
0811dc67 +0x0c1:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
0811dc6c +0x0c6:  test   %al,%al
0811dc6e +0x0c8:  jne    0811dc8e <+0xe8>
0811dc70 +0x0ca:  lea    -0x30(%ebp),%eax
0811dc73 +0x0cd:  mov    %eax,(%esp)
0811dc76 +0x0d0:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0811dc7b +0x0d5:  lea    0x4(%eax),%edx
0811dc7e +0x0d8:  mov    %ebx,%eax
0811dc80 +0x0da:  mov    %edx,0x4(%esp)
0811dc84 +0x0de:  mov    %eax,(%esp)
0811dc87 +0x0e1:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0811dc8c +0x0e6:  jmp    0811dc8f <+0xe9>
0811dc8e +0x0e8:  nop
0811dc8f +0x0e9:  addl   $0x1,-0x1c(%ebp)
0811dc93 +0x0ed:  cmpl   $0x7,-0x1c(%ebp)
0811dc97 +0x0f1:  setle  %al
0811dc9a +0x0f4:  test   %al,%al
0811dc9c +0x0f6:  jne    0811dbf3 <+0x4d>
0811dca2 +0x0fc:  addl   $0x1,-0x24(%ebp)
0811dca6 +0x100:  cmpl   $0x1387,-0x24(%ebp)
0811dcad +0x107:  setle  %al
0811dcb0 +0x10a:  test   %al,%al
0811dcb2 +0x10c:  jne    0811dbd9 <+0x33>
0811dcb8 +0x112:  jmp    0811dcd4 <+0x12e>
0811dcba +0x114:  mov    %edx,%esi
0811dcbc +0x116:  mov    %eax,%edi
0811dcbe +0x118:  mov    %ebx,%eax
0811dcc0 +0x11a:  mov    %eax,(%esp)
0811dcc3 +0x11d:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0811dcc8 +0x122:  mov    %edi,%eax
0811dcca +0x124:  mov    %esi,%edx
0811dccc +0x126:  mov    %eax,(%esp)
0811dccf +0x129:  call   08ae3750 <_Unwind_Resume>
0811dcd4 +0x12e:  mov    %ebx,%eax
0811dcd6 +0x130:  mov    %ebx,%eax
0811dcd8 +0x132:  lea    -0xc(%ebp),%esp
0811dcdb +0x135:  add    $0x0,%esp
0811dcde +0x138:  pop    %ebx
0811dcdf +0x139:  pop    %esi
0811dce0 +0x13a:  pop    %edi
0811dce1 +0x13b:  pop    %ebp
0811dce2 +0x13c:  ret    $0x4
0811dce5 +0x13f:  nop
```

## 反编译 C

```c
// CItemDictionary::getGainItemList @ 0x811dba6

/* CItemDictionary::getGainItemList() */

vector<int,std::allocator<int>> * CItemDictionary::getGainItemList(void)

{
  char cVar1;
  int iVar2;
  vector<int,std::allocator<int>> *in_stack_00000004;
  int in_stack_00000008;
  _Rb_tree_iterator<std::pair<int_const,int>> local_34 [4];
  int local_30;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_2c [4];
  int local_28;
  byte local_21;
  int local_20;
  
  local_30 = 0;
  std::vector<int,std::allocator<int>>::vector(in_stack_00000004);
                    /* try { // try from 0811dbc8 to 0811dc8b has its CatchHandler @ 0811dcba */
  std::vector<int,std::allocator<int>>::clear(in_stack_00000004);
  for (local_28 = 0; local_28 < 5000; local_28 = local_28 + 1) {
    local_21 = *(byte *)(in_stack_00000008 + 5 + local_28);
    for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
      if (((int)(uint)local_21 >> ((byte)local_20 & 0x1f) & 1U) != 0) {
        local_30 = local_28 * 8 + local_20;
        G_CDataManager();
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                  ((int *)local_34);
        G_CDataManager();
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_2c);
        cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                          (local_34,(_Rb_tree_iterator *)local_2c);
        if (cVar1 == '\0') {
          iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_34);
          std::vector<int,std::allocator<int>>::push_back(in_stack_00000004,(int *)(iVar2 + 4));
        }
      }
    }
  }
  return in_stack_00000004;
}
```
