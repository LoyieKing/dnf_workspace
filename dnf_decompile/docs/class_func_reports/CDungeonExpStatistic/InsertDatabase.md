# InsertDatabase

`_ZN20CDungeonExpStatistic14InsertDatabaseEv`

`CDungeonExpStatistic::InsertDatabase()`

| 类 | 地址 |
|---|---|
| `CDungeonExpStatistic` | `0x0860f110` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860f110  _ZN20CDungeonExpStatistic14InsertDatabaseEv
#           CDungeonExpStatistic::InsertDatabase()
# range [0x0860f110, 0x0860f336]
0860f110 +0x000:  push   %ebp
0860f111 +0x001:  mov    %esp,%ebp
0860f113 +0x003:  push   %esi
0860f114 +0x004:  push   %ebx
0860f115 +0x005:  sub    $0x50,%esp
0860f118 +0x008:  mov    0x8(%ebp),%eax
0860f11b +0x00b:  mov    %eax,(%esp)
0860f11e +0x00e:  call   086119d6 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1a54>  ; global constructors keyed to Statistics::Statistics()+0x1a54
0860f123 +0x013:  test   %eax,%eax
0860f125 +0x015:  sete   %al
0860f128 +0x018:  test   %al,%al
0860f12a +0x01a:  jne    0860f32c <+0x21c>
0860f130 +0x020:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0860f135 +0x025:  movl   $0x59c,0x8(%esp)
0860f13d +0x02d:  movl   $"Statistics.cpp",0x4(%esp)
0860f145 +0x035:  mov    %eax,(%esp)
0860f148 +0x038:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0860f14d +0x03d:  movl   $0x1,0x8(%esp)
0860f155 +0x045:  mov    %eax,0x4(%esp)
0860f159 +0x049:  lea    -0x34(%ebp),%eax
0860f15c +0x04c:  mov    %eax,(%esp)
0860f15f +0x04f:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0860f164 +0x054:  lea    -0x34(%ebp),%eax
0860f167 +0x057:  mov    %eax,(%esp)
0860f16a +0x05a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860f16f +0x05f:  movl   $0x116,0x4(%esp)
0860f177 +0x067:  mov    %eax,(%esp)
0860f17a +0x06a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860f17f +0x06f:  lea    -0x34(%ebp),%eax
0860f182 +0x072:  mov    %eax,(%esp)
0860f185 +0x075:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860f18a +0x07a:  movl   $0xffffffff,0x4(%esp)
0860f192 +0x082:  mov    %eax,(%esp)
0860f195 +0x085:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860f19a +0x08a:  mov    0x8(%ebp),%eax
0860f19d +0x08d:  mov    %eax,(%esp)
0860f1a0 +0x090:  call   086119d6 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1a54>  ; global constructors keyed to Statistics::Statistics()+0x1a54
0860f1a5 +0x095:  mov    %eax,%ebx
0860f1a7 +0x097:  lea    -0x34(%ebp),%eax
0860f1aa +0x09a:  mov    %eax,(%esp)
0860f1ad +0x09d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860f1b2 +0x0a2:  mov    %ebx,0x4(%esp)
0860f1b6 +0x0a6:  mov    %eax,(%esp)
0860f1b9 +0x0a9:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860f1be +0x0ae:  mov    0x8(%ebp),%edx
0860f1c1 +0x0b1:  lea    -0x38(%ebp),%eax
0860f1c4 +0x0b4:  mov    %edx,0x4(%esp)
0860f1c8 +0x0b8:  mov    %eax,(%esp)
0860f1cb +0x0bb:  call   086119ea <_GLOBAL__I__ZN10StatisticsC2Ev+0x1a68>  ; global constructors keyed to Statistics::Statistics()+0x1a68
0860f1d0 +0x0c0:  sub    $0x4,%esp
0860f1d3 +0x0c3:  mov    0x8(%ebp),%edx
0860f1d6 +0x0c6:  lea    -0x3c(%ebp),%eax
0860f1d9 +0x0c9:  mov    %edx,0x4(%esp)
0860f1dd +0x0cd:  mov    %eax,(%esp)
0860f1e0 +0x0d0:  call   086118e8 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1966>  ; global constructors keyed to Statistics::Statistics()+0x1966
0860f1e5 +0x0d5:  sub    $0x4,%esp
0860f1e8 +0x0d8:  jmp    0860f2c1 <+0x1b1>
0860f1ed +0x0dd:  lea    -0x38(%ebp),%eax
0860f1f0 +0x0e0:  mov    %eax,(%esp)
0860f1f3 +0x0e3:  call   086119c8 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1a46>  ; global constructors keyed to Statistics::Statistics()+0x1a46
0860f1f8 +0x0e8:  mov    (%eax),%ebx
0860f1fa +0x0ea:  lea    -0x34(%ebp),%eax
0860f1fd +0x0ed:  mov    %eax,(%esp)
0860f200 +0x0f0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860f205 +0x0f5:  mov    %ebx,0x4(%esp)
0860f209 +0x0f9:  mov    %eax,(%esp)
0860f20c +0x0fc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860f211 +0x101:  lea    -0x38(%ebp),%eax
0860f214 +0x104:  mov    %eax,(%esp)
0860f217 +0x107:  call   086119c8 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1a46>  ; global constructors keyed to Statistics::Statistics()+0x1a46
0860f21c +0x10c:  mov    0x4(%eax),%edx
0860f21f +0x10f:  mov    %edx,-0x2c(%ebp)
0860f222 +0x112:  mov    0x8(%eax),%edx
0860f225 +0x115:  mov    %edx,-0x28(%ebp)
0860f228 +0x118:  mov    0xc(%eax),%eax
0860f22b +0x11b:  mov    %eax,-0x24(%ebp)
0860f22e +0x11e:  mov    -0x2c(%ebp),%ebx
0860f231 +0x121:  lea    -0x34(%ebp),%eax
0860f234 +0x124:  mov    %eax,(%esp)
0860f237 +0x127:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860f23c +0x12c:  mov    %ebx,0x4(%esp)
0860f240 +0x130:  mov    %eax,(%esp)
0860f243 +0x133:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860f248 +0x138:  lea    -0x38(%ebp),%eax
0860f24b +0x13b:  mov    %eax,(%esp)
0860f24e +0x13e:  call   086119c8 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1a46>  ; global constructors keyed to Statistics::Statistics()+0x1a46
0860f253 +0x143:  mov    0x4(%eax),%edx
0860f256 +0x146:  mov    %edx,-0x20(%ebp)
0860f259 +0x149:  mov    0x8(%eax),%edx
0860f25c +0x14c:  mov    %edx,-0x1c(%ebp)
0860f25f +0x14f:  mov    0xc(%eax),%eax
0860f262 +0x152:  mov    %eax,-0x18(%ebp)
0860f265 +0x155:  mov    -0x1c(%ebp),%ebx
0860f268 +0x158:  lea    -0x34(%ebp),%eax
0860f26b +0x15b:  mov    %eax,(%esp)
0860f26e +0x15e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860f273 +0x163:  mov    %ebx,0x4(%esp)
0860f277 +0x167:  mov    %eax,(%esp)
0860f27a +0x16a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860f27f +0x16f:  lea    -0x38(%ebp),%eax
0860f282 +0x172:  mov    %eax,(%esp)
0860f285 +0x175:  call   086119c8 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1a46>  ; global constructors keyed to Statistics::Statistics()+0x1a46
0860f28a +0x17a:  mov    0x4(%eax),%edx
0860f28d +0x17d:  mov    %edx,-0x14(%ebp)
0860f290 +0x180:  mov    0x8(%eax),%edx
0860f293 +0x183:  mov    %edx,-0x10(%ebp)
0860f296 +0x186:  mov    0xc(%eax),%eax
0860f299 +0x189:  mov    %eax,-0xc(%ebp)
0860f29c +0x18c:  mov    -0xc(%ebp),%ebx
0860f29f +0x18f:  lea    -0x34(%ebp),%eax
0860f2a2 +0x192:  mov    %eax,(%esp)
0860f2a5 +0x195:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860f2aa +0x19a:  mov    %ebx,0x4(%esp)
0860f2ae +0x19e:  mov    %eax,(%esp)
0860f2b1 +0x1a1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860f2b6 +0x1a6:  lea    -0x38(%ebp),%eax
0860f2b9 +0x1a9:  mov    %eax,(%esp)
0860f2bc +0x1ac:  call   08611a24 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1aa2>  ; global constructors keyed to Statistics::Statistics()+0x1aa2
0860f2c1 +0x1b1:  lea    -0x3c(%ebp),%eax
0860f2c4 +0x1b4:  mov    %eax,0x4(%esp)
0860f2c8 +0x1b8:  lea    -0x38(%ebp),%eax
0860f2cb +0x1bb:  mov    %eax,(%esp)
0860f2ce +0x1be:  call   08611a10 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1a8e>  ; global constructors keyed to Statistics::Statistics()+0x1a8e
0860f2d3 +0x1c3:  test   %al,%al
0860f2d5 +0x1c5:  jne    0860f1ed <+0xdd>
0860f2db +0x1cb:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0860f2e0 +0x1d0:  lea    -0x34(%ebp),%edx
0860f2e3 +0x1d3:  mov    %edx,0x8(%esp)
0860f2e7 +0x1d7:  movl   $0x4,0x4(%esp)
0860f2ef +0x1df:  mov    %eax,(%esp)
0860f2f2 +0x1e2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0860f2f7 +0x1e7:  mov    0x8(%ebp),%eax
0860f2fa +0x1ea:  mov    %eax,(%esp)
0860f2fd +0x1ed:  call   08611a42 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1ac0>  ; global constructors keyed to Statistics::Statistics()+0x1ac0
0860f302 +0x1f2:  jmp    0860f31f <+0x20f>
0860f304 +0x1f4:  mov    %edx,%ebx
0860f306 +0x1f6:  mov    %eax,%esi
0860f308 +0x1f8:  lea    -0x34(%ebp),%eax
0860f30b +0x1fb:  mov    %eax,(%esp)
0860f30e +0x1fe:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860f313 +0x203:  mov    %esi,%eax
0860f315 +0x205:  mov    %ebx,%edx
0860f317 +0x207:  mov    %eax,(%esp)
0860f31a +0x20a:  call   08ae3750 <_Unwind_Resume>
0860f31f +0x20f:  lea    -0x34(%ebp),%eax
0860f322 +0x212:  mov    %eax,(%esp)
0860f325 +0x215:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860f32a +0x21a:  jmp    0860f32d <+0x21d>
0860f32c +0x21c:  nop
0860f32d +0x21d:  lea    -0x8(%ebp),%esp
0860f330 +0x220:  add    $0x0,%esp
0860f333 +0x223:  pop    %ebx
0860f334 +0x224:  pop    %esi
0860f335 +0x225:  pop    %ebp
0860f336 +0x226:  ret
```

## 反编译 C

```c
// CDungeonExpStatistic::InsertDatabase @ 0x860f110

/* CDungeonExpStatistic::InsertDatabase() */

void __thiscall CDungeonExpStatistic::InsertDatabase(CDungeonExpStatistic *this)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int *piVar5;
  int iVar6;
  map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
  local_40 [4];
  map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
  local_3c [4];
  CStreamGuard local_38 [8];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  iVar2 = std::
          map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
          ::size((map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
                  *)this);
  if (iVar2 != 0) {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x59c);
    CStreamGuard::CStreamGuard(local_38,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 0860f17a to 0860f301 has its CatchHandler @ 0860f304 */
    CStreamGuard::operator<<(pCVar4,0x116);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar4,-1);
    iVar2 = std::
            map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
            ::size((map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
                    *)this);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar4,iVar2);
    std::
    map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
    ::begin(local_3c);
    std::
    map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
    ::end(local_40);
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>::
              operator!=((_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>
                          *)local_3c,(_Rb_tree_iterator *)local_40);
      if (cVar1 == '\0') break;
      piVar5 = (int *)std::
                      _Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>::
                      operator->((_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>
                                  *)local_3c);
      iVar2 = *piVar5;
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
      CStreamGuard::operator<<(pCVar4,iVar2);
      iVar6 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>::
              operator->((_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>
                          *)local_3c);
      iVar2 = *(int *)(iVar6 + 4);
      local_2c = *(undefined4 *)(iVar6 + 8);
      local_28 = *(undefined4 *)(iVar6 + 0xc);
      local_30 = iVar2;
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
      CStreamGuard::operator<<(pCVar4,iVar2);
      iVar6 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>::
              operator->((_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>
                          *)local_3c);
      local_24 = *(undefined4 *)(iVar6 + 4);
      iVar2 = *(int *)(iVar6 + 8);
      local_1c = *(undefined4 *)(iVar6 + 0xc);
      local_20 = iVar2;
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
      CStreamGuard::operator<<(pCVar4,iVar2);
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>::
              operator->((_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>
                          *)local_3c);
      local_18 = *(undefined4 *)(iVar2 + 4);
      local_14 = *(undefined4 *)(iVar2 + 8);
      iVar2 = *(int *)(iVar2 + 0xc);
      local_10 = iVar2;
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
      CStreamGuard::operator<<(pCVar4,iVar2);
      std::_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>> *)
                 local_3c);
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_38);
    std::
    map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
    ::clear((map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
             *)this);
    CStreamGuard::~CStreamGuard(local_38);
  }
  return;
}
```
