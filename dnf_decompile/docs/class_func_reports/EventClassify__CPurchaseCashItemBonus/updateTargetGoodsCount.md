# updateTargetGoodsCount

`_ZN13EventClassify22CPurchaseCashItemBonus22updateTargetGoodsCountEP5CUserjP22stCeraShopIPGRequest_t`

`EventClassify::CPurchaseCashItemBonus::updateTargetGoodsCount(CUser*, unsigned int, stCeraShopIPGRequest_t*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CPurchaseCashItemBonus` | `0x0810f9ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810f9ce  _ZN13EventClassify22CPurchaseCashItemBonus22updateTargetGoodsCountEP5CUserjP22stCeraShopIPGRequest_t
#           EventClassify::CPurchaseCashItemBonus::updateTargetGoodsCount(CUser*, unsigned int, stCeraShopIPGRequest_t*)
# range [0x0810f9ce, 0x0810fadf]
0810f9ce +0x000:  push   %ebp
0810f9cf +0x001:  mov    %esp,%ebp
0810f9d1 +0x003:  sub    $0x48,%esp
0810f9d4 +0x006:  cmpl   $0x0,0xc(%ebp)
0810f9d8 +0x00a:  jne    0810fa1c <+0x4e>
0810f9da +0x00c:  movl   $0x0,0xc(%esp)
0810f9e2 +0x014:  movl   $0x737,0x8(%esp)
0810f9ea +0x01c:  movl   $&_ZZN13EventClassify22CPurchaseCashItemBonus22updateTargetGoodsCountEP5CUserjP22stCeraShopIPGRequest_tE19__PRETTY_FUNCTION__,0x4(%esp)
0810f9f2 +0x024:  lea    -0x34(%ebp),%eax
0810f9f5 +0x027:  mov    %eax,(%esp)
0810f9f8 +0x02a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810f9fd +0x02f:  mov    0x10(%ebp),%eax
0810fa00 +0x032:  mov    %eax,0x8(%esp)
0810fa04 +0x036:  movl   $"Purchase Error Not Found User(charac_no:%d)",0x4(%esp)
0810fa0c +0x03e:  lea    -0x34(%ebp),%eax
0810fa0f +0x041:  mov    %eax,(%esp)
0810fa12 +0x044:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810fa17 +0x049:  jmp    0810fadd <+0x10f>
0810fa1c +0x04e:  mov    0xc(%ebp),%eax
0810fa1f +0x051:  mov    %eax,(%esp)
0810fa22 +0x054:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0810fa27 +0x059:  mov    %eax,-0xc(%ebp)
0810fa2a +0x05c:  mov    0x14(%ebp),%eax
0810fa2d +0x05f:  mov    0x8(%eax),%eax
0810fa30 +0x062:  mov    %eax,-0x24(%ebp)
0810fa33 +0x065:  mov    0x8(%ebp),%eax
0810fa36 +0x068:  mov    0x1c(%eax),%eax
0810fa39 +0x06b:  lea    0xc(%eax),%ecx
0810fa3c +0x06e:  lea    -0x38(%ebp),%eax
0810fa3f +0x071:  lea    -0x24(%ebp),%edx
0810fa42 +0x074:  mov    %edx,0x8(%esp)
0810fa46 +0x078:  mov    %ecx,0x4(%esp)
0810fa4a +0x07c:  mov    %eax,(%esp)
0810fa4d +0x07f:  call   08111332 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x844>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x844
0810fa52 +0x084:  sub    $0x4,%esp
0810fa55 +0x087:  mov    0x8(%ebp),%eax
0810fa58 +0x08a:  mov    0x1c(%eax),%eax
0810fa5b +0x08d:  lea    0xc(%eax),%edx
0810fa5e +0x090:  lea    -0x20(%ebp),%eax
0810fa61 +0x093:  mov    %edx,0x4(%esp)
0810fa65 +0x097:  mov    %eax,(%esp)
0810fa68 +0x09a:  call   08111278 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x78a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x78a
0810fa6d +0x09f:  sub    $0x4,%esp
0810fa70 +0x0a2:  lea    -0x20(%ebp),%eax
0810fa73 +0x0a5:  mov    %eax,0x4(%esp)
0810fa77 +0x0a9:  lea    -0x38(%ebp),%eax
0810fa7a +0x0ac:  mov    %eax,(%esp)
0810fa7d +0x0af:  call   0811129e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7b0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7b0
0810fa82 +0x0b4:  test   %al,%al
0810fa84 +0x0b6:  je     0810fadd <+0x10f>
0810fa86 +0x0b8:  mov    0xc(%ebp),%eax
0810fa89 +0x0bb:  mov    %eax,(%esp)
0810fa8c +0x0be:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0810fa91 +0x0c3:  mov    -0xc(%ebp),%edx
0810fa94 +0x0c6:  mov    %edx,0x4(%esp)
0810fa98 +0x0ca:  mov    %eax,(%esp)
0810fa9b +0x0cd:  call   0843e560 <_ZN30DB_UpdatePurchaseCashItemBonus11makeRequestEij>  ; DB_UpdatePurchaseCashItemBonus::makeRequest(int, unsigned int)
0810faa0 +0x0d2:  movl   $0x0,0xc(%esp)
0810faa8 +0x0da:  movl   $0x742,0x8(%esp)
0810fab0 +0x0e2:  movl   $&_ZZN13EventClassify22CPurchaseCashItemBonus22updateTargetGoodsCountEP5CUserjP22stCeraShopIPGRequest_tE19__PRETTY_FUNCTION__,0x4(%esp)
0810fab8 +0x0ea:  lea    -0x1c(%ebp),%eax
0810fabb +0x0ed:  mov    %eax,(%esp)
0810fabe +0x0f0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810fac3 +0x0f5:  mov    -0xc(%ebp),%eax
0810fac6 +0x0f8:  mov    %eax,0x8(%esp)
0810faca +0x0fc:  movl   $"CPurchaseCashItemBonus::updateTargetGoodsCount(%d)",0x4(%esp)
0810fad2 +0x104:  lea    -0x1c(%ebp),%eax
0810fad5 +0x107:  mov    %eax,(%esp)
0810fad8 +0x10a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810fadd +0x10f:  leave
0810fade +0x110:  ret
0810fadf +0x111:  nop
```

## 反编译 C

```c
// EventClassify::CPurchaseCashItemBonus::updateTargetGoodsCount @ 0x810f9ce

/* EventClassify::CPurchaseCashItemBonus::updateTargetGoodsCount(CUser*, unsigned int,
   stCeraShopIPGRequest_t*) */

void __thiscall
EventClassify::CPurchaseCashItemBonus::updateTargetGoodsCount
          (CPurchaseCashItemBonus *this,CUser *param_1,uint param_2,stCeraShopIPGRequest_t *param_3)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<unsigned_int> local_3c [4];
  cMyTrace local_38 [16];
  undefined4 local_28;
  set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> local_24 [4];
  cMyTrace local_20 [16];
  uint local_10;
  
  if (param_1 == (CUser *)0x0) {
    cMyTrace::cMyTrace(local_38,
                       "void EventClassify::CPurchaseCashItemBonus::updateTargetGoodsCount(CUser*, unsigned int, stCeraShopIPGRequest_t*)"
                       ,0x737,0);
    cMyTrace::operator()(local_38,"Purchase Error Not Found User(charac_no:%d)",param_2);
  }
  else {
    local_10 = CUser::get_acc_id(param_1);
    local_28 = *(undefined4 *)(param_3 + 8);
    std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::find
              ((uint *)local_3c);
    std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::end(local_24);
    cVar1 = std::_Rb_tree_const_iterator<unsigned_int>::operator!=
                      (local_3c,(_Rb_tree_const_iterator *)local_24);
    if (cVar1 != '\0') {
      iVar2 = CUser::GetUID(param_1);
      DB_UpdatePurchaseCashItemBonus::makeRequest(iVar2,local_10);
      cMyTrace::cMyTrace(local_20,
                         "void EventClassify::CPurchaseCashItemBonus::updateTargetGoodsCount(CUser*, unsigned int, stCeraShopIPGRequest_t*)"
                         ,0x742,0);
      cMyTrace::operator()(local_20,"CPurchaseCashItemBonus::updateTargetGoodsCount(%d)",local_10);
    }
  }
  return;
}
```
