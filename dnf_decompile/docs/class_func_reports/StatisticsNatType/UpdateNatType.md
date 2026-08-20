# UpdateNatType

`_ZN17StatisticsNatType13UpdateNatTypeEv`

`StatisticsNatType::UpdateNatType()`

| 类 | 地址 |
|---|---|
| `StatisticsNatType` | `0x0860c968` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860c968  _ZN17StatisticsNatType13UpdateNatTypeEv
#           StatisticsNatType::UpdateNatType()
# range [0x0860c968, 0x0860cba4]
0860c968 +0x000:  push   %ebp
0860c969 +0x001:  mov    %esp,%ebp
0860c96b +0x003:  push   %esi
0860c96c +0x004:  push   %ebx
0860c96d +0x005:  sub    $0x40,%esp
0860c970 +0x008:  lea    -0x1c(%ebp),%eax
0860c973 +0x00b:  mov    %eax,(%esp)
0860c976 +0x00e:  call   08610f60 <_GLOBAL__I__ZN10StatisticsC2Ev+0xfde>  ; global constructors keyed to Statistics::Statistics()+0xfde
0860c97b +0x013:  movl   $0x0,(%esp)
0860c982 +0x01a:  call   0807d750 <_init+0x48>
0860c987 +0x01f:  mov    %eax,-0x10(%ebp)
0860c98a +0x022:  mov    0x8(%ebp),%edx
0860c98d +0x025:  lea    -0x2c(%ebp),%eax
0860c990 +0x028:  mov    %edx,0x4(%esp)
0860c994 +0x02c:  mov    %eax,(%esp)
0860c997 +0x02f:  call   08610e24 <_GLOBAL__I__ZN10StatisticsC2Ev+0xea2>  ; global constructors keyed to Statistics::Statistics()+0xea2
0860c99c +0x034:  sub    $0x4,%esp
0860c99f +0x037:  mov    -0x2c(%ebp),%eax
0860c9a2 +0x03a:  mov    %eax,-0x1c(%ebp)
0860c9a5 +0x03d:  jmp    0860cb61 <+0x1f9>
0860c9aa +0x042:  lea    -0x1c(%ebp),%eax
0860c9ad +0x045:  mov    %eax,(%esp)
0860c9b0 +0x048:  call   08610ec2 <_GLOBAL__I__ZN10StatisticsC2Ev+0xf40>  ; global constructors keyed to Statistics::Statistics()+0xf40
0860c9b5 +0x04d:  mov    0x8(%eax),%eax
0860c9b8 +0x050:  test   %eax,%eax
0860c9ba +0x052:  sete   %al
0860c9bd +0x055:  test   %al,%al
0860c9bf +0x057:  jne    0860cb43 <+0x1db>
0860c9c5 +0x05d:  lea    -0x1c(%ebp),%eax
0860c9c8 +0x060:  mov    %eax,(%esp)
0860c9cb +0x063:  call   08610ec2 <_GLOBAL__I__ZN10StatisticsC2Ev+0xf40>  ; global constructors keyed to Statistics::Statistics()+0xf40
0860c9d0 +0x068:  mov    0x8(%eax),%eax
0860c9d3 +0x06b:  mov    0x4(%eax),%eax
0860c9d6 +0x06e:  test   %eax,%eax
0860c9d8 +0x070:  jg     0860c9ee <+0x86>
0860c9da +0x072:  lea    -0x1c(%ebp),%eax
0860c9dd +0x075:  mov    %eax,(%esp)
0860c9e0 +0x078:  call   08610ec2 <_GLOBAL__I__ZN10StatisticsC2Ev+0xf40>  ; global constructors keyed to Statistics::Statistics()+0xf40
0860c9e5 +0x07d:  mov    0x8(%eax),%eax
0860c9e8 +0x080:  mov    (%eax),%eax
0860c9ea +0x082:  test   %eax,%eax
0860c9ec +0x084:  jle    0860c9f5 <+0x8d>
0860c9ee +0x086:  mov    $0x1,%eax
0860c9f3 +0x08b:  jmp    0860c9fa <+0x92>
0860c9f5 +0x08d:  mov    $0x0,%eax
0860c9fa +0x092:  test   %al,%al
0860c9fc +0x094:  je     0860cb44 <+0x1dc>
0860ca02 +0x09a:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0860ca07 +0x09f:  movl   $0x1c7,0x8(%esp)
0860ca0f +0x0a7:  movl   $"Statistics.cpp",0x4(%esp)
0860ca17 +0x0af:  mov    %eax,(%esp)
0860ca1a +0x0b2:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0860ca1f +0x0b7:  movl   $0x1,0x8(%esp)
0860ca27 +0x0bf:  mov    %eax,0x4(%esp)
0860ca2b +0x0c3:  lea    -0x24(%ebp),%eax
0860ca2e +0x0c6:  mov    %eax,(%esp)
0860ca31 +0x0c9:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0860ca36 +0x0ce:  lea    -0x24(%ebp),%eax
0860ca39 +0x0d1:  mov    %eax,(%esp)
0860ca3c +0x0d4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860ca41 +0x0d9:  movl   $0x83,0x4(%esp)
0860ca49 +0x0e1:  mov    %eax,(%esp)
0860ca4c +0x0e4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860ca51 +0x0e9:  lea    -0x24(%ebp),%eax
0860ca54 +0x0ec:  mov    %eax,(%esp)
0860ca57 +0x0ef:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860ca5c +0x0f4:  movl   $0xffffffff,0x4(%esp)
0860ca64 +0x0fc:  mov    %eax,(%esp)
0860ca67 +0x0ff:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860ca6c +0x104:  lea    -0x24(%ebp),%eax
0860ca6f +0x107:  mov    %eax,(%esp)
0860ca72 +0x10a:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0860ca77 +0x10f:  mov    %eax,(%esp)
0860ca7a +0x112:  call   08610f6e <_GLOBAL__I__ZN10StatisticsC2Ev+0xfec>  ; global constructors keyed to Statistics::Statistics()+0xfec
0860ca7f +0x117:  mov    %eax,-0xc(%ebp)
0860ca82 +0x11a:  movl   $0x14,0x8(%esp)
0860ca8a +0x122:  movl   $0x0,0x4(%esp)
0860ca92 +0x12a:  mov    -0xc(%ebp),%eax
0860ca95 +0x12d:  mov    %eax,(%esp)
0860ca98 +0x130:  call   0807dcc0 <_init+0x5b8>
0860ca9d +0x135:  lea    -0x1c(%ebp),%eax
0860caa0 +0x138:  mov    %eax,(%esp)
0860caa3 +0x13b:  call   08610ec2 <_GLOBAL__I__ZN10StatisticsC2Ev+0xf40>  ; global constructors keyed to Statistics::Statistics()+0xf40
0860caa8 +0x140:  mov    (%eax),%edx
0860caaa +0x142:  mov    -0xc(%ebp),%eax
0860caad +0x145:  mov    %edx,(%eax)
0860caaf +0x147:  lea    -0x1c(%ebp),%eax
0860cab2 +0x14a:  mov    %eax,(%esp)
0860cab5 +0x14d:  call   08610ec2 <_GLOBAL__I__ZN10StatisticsC2Ev+0xf40>  ; global constructors keyed to Statistics::Statistics()+0xf40
0860caba +0x152:  mov    0x4(%eax),%edx
0860cabd +0x155:  mov    -0xc(%ebp),%eax
0860cac0 +0x158:  mov    %edx,0x4(%eax)
0860cac3 +0x15b:  lea    -0x1c(%ebp),%eax
0860cac6 +0x15e:  mov    %eax,(%esp)
0860cac9 +0x161:  call   08610ec2 <_GLOBAL__I__ZN10StatisticsC2Ev+0xf40>  ; global constructors keyed to Statistics::Statistics()+0xf40
0860cace +0x166:  mov    0x8(%eax),%eax
0860cad1 +0x169:  mov    0x4(%eax),%eax
0860cad4 +0x16c:  mov    %eax,%edx
0860cad6 +0x16e:  mov    -0xc(%ebp),%eax
0860cad9 +0x171:  mov    %edx,0x8(%eax)
0860cadc +0x174:  lea    -0x1c(%ebp),%eax
0860cadf +0x177:  mov    %eax,(%esp)
0860cae2 +0x17a:  call   08610ec2 <_GLOBAL__I__ZN10StatisticsC2Ev+0xf40>  ; global constructors keyed to Statistics::Statistics()+0xf40
0860cae7 +0x17f:  mov    0x8(%eax),%eax
0860caea +0x182:  mov    (%eax),%eax
0860caec +0x184:  mov    %eax,%edx
0860caee +0x186:  mov    -0xc(%ebp),%eax
0860caf1 +0x189:  mov    %edx,0xc(%eax)
0860caf4 +0x18c:  mov    -0xc(%ebp),%eax
0860caf7 +0x18f:  mov    -0x10(%ebp),%edx
0860cafa +0x192:  mov    %edx,0x10(%eax)
0860cafd +0x195:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0860cb02 +0x19a:  lea    -0x24(%ebp),%edx
0860cb05 +0x19d:  mov    %edx,0x8(%esp)
0860cb09 +0x1a1:  movl   $0x4,0x4(%esp)
0860cb11 +0x1a9:  mov    %eax,(%esp)
0860cb14 +0x1ac:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0860cb19 +0x1b1:  jmp    0860cb36 <+0x1ce>
0860cb1b +0x1b3:  mov    %edx,%ebx
0860cb1d +0x1b5:  mov    %eax,%esi
0860cb1f +0x1b7:  lea    -0x24(%ebp),%eax
0860cb22 +0x1ba:  mov    %eax,(%esp)
0860cb25 +0x1bd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860cb2a +0x1c2:  mov    %esi,%eax
0860cb2c +0x1c4:  mov    %ebx,%edx
0860cb2e +0x1c6:  mov    %eax,(%esp)
0860cb31 +0x1c9:  call   08ae3750 <_Unwind_Resume>
0860cb36 +0x1ce:  lea    -0x24(%ebp),%eax
0860cb39 +0x1d1:  mov    %eax,(%esp)
0860cb3c +0x1d4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860cb41 +0x1d9:  jmp    0860cb44 <+0x1dc>
0860cb43 +0x1db:  nop
0860cb44 +0x1dc:  lea    -0x14(%ebp),%eax
0860cb47 +0x1df:  movl   $0x0,0x8(%esp)
0860cb4f +0x1e7:  lea    -0x1c(%ebp),%edx
0860cb52 +0x1ea:  mov    %edx,0x4(%esp)
0860cb56 +0x1ee:  mov    %eax,(%esp)
0860cb59 +0x1f1:  call   08610e84 <_GLOBAL__I__ZN10StatisticsC2Ev+0xf02>  ; global constructors keyed to Statistics::Statistics()+0xf02
0860cb5e +0x1f6:  sub    $0x4,%esp
0860cb61 +0x1f9:  mov    0x8(%ebp),%edx
0860cb64 +0x1fc:  lea    -0x18(%ebp),%eax
0860cb67 +0x1ff:  mov    %edx,0x4(%esp)
0860cb6b +0x203:  mov    %eax,(%esp)
0860cb6e +0x206:  call   08610e4a <_GLOBAL__I__ZN10StatisticsC2Ev+0xec8>  ; global constructors keyed to Statistics::Statistics()+0xec8
0860cb73 +0x20b:  sub    $0x4,%esp
0860cb76 +0x20e:  lea    -0x18(%ebp),%eax
0860cb79 +0x211:  mov    %eax,0x4(%esp)
0860cb7d +0x215:  lea    -0x1c(%ebp),%eax
0860cb80 +0x218:  mov    %eax,(%esp)
0860cb83 +0x21b:  call   08610e70 <_GLOBAL__I__ZN10StatisticsC2Ev+0xeee>  ; global constructors keyed to Statistics::Statistics()+0xeee
0860cb88 +0x220:  test   %al,%al
0860cb8a +0x222:  jne    0860c9aa <+0x42>
0860cb90 +0x228:  mov    0x8(%ebp),%eax
0860cb93 +0x22b:  mov    %eax,(%esp)
0860cb96 +0x22e:  call   0860c7da <_ZN17StatisticsNatType5ResetEv>  ; StatisticsNatType::Reset()
0860cb9b +0x233:  lea    -0x8(%ebp),%esp
0860cb9e +0x236:  add    $0x0,%esp
0860cba1 +0x239:  pop    %ebx
0860cba2 +0x23a:  pop    %esi
0860cba3 +0x23b:  pop    %ebp
0860cba4 +0x23c:  ret
```

## 反编译 C

```c
// StatisticsNatType::UpdateNatType @ 0x860c968

/* StatisticsNatType::UpdateNatType() */

void StatisticsNatType::UpdateNatType(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  undefined4 *puVar6;
  undefined4 local_30 [2];
  CStreamGuard local_28 [8];
  undefined4 local_20;
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
  local_18 [4];
  time_t local_14;
  SIG_NAT_TYPE *local_10;
  
  std::
  _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
  ::_Rb_tree_iterator((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                       *)&local_20);
  local_14 = time((time_t *)0x0);
  std::
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  ::begin((map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
           *)local_30);
  local_20 = local_30[0];
  do {
    std::
    map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
    ::end(local_1c);
    cVar2 = std::
            _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
            ::operator!=((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                          *)&local_20,(_Rb_tree_iterator *)local_1c);
    if (cVar2 == '\0') {
      Reset();
      return;
    }
    iVar3 = std::
            _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
            ::operator->((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                          *)&local_20);
    if (*(int *)(iVar3 + 8) != 0) {
      iVar3 = std::
              _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
              ::operator->((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                            *)&local_20);
      if (*(int *)(*(int *)(iVar3 + 8) + 4) < 1) {
        iVar3 = std::
                _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                ::operator->((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                              *)&local_20);
        if (0 < **(int **)(iVar3 + 8)) goto LAB_0860c9ee;
        bVar1 = false;
      }
      else {
LAB_0860c9ee:
        bVar1 = true;
      }
      if (bVar1) {
        pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x1c7);
        CStreamGuard::CStreamGuard(local_28,pSVar4,true);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 0860ca4c to 0860cb18 has its CatchHandler @ 0860cb1b */
        CStreamGuard::operator<<(pCVar5,0x83);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_28);
        CStreamGuard::operator<<(pCVar5,-1);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_28);
        local_10 = CStreamGuard::GetInBuffer<SIG_NAT_TYPE>(pCVar5);
        memset(local_10,0,0x14);
        puVar6 = (undefined4 *)
                 std::
                 _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                 ::operator->((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                               *)&local_20);
        *(undefined4 *)local_10 = *puVar6;
        iVar3 = std::
                _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                ::operator->((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                              *)&local_20);
        *(undefined4 *)(local_10 + 4) = *(undefined4 *)(iVar3 + 4);
        iVar3 = std::
                _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                ::operator->((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                              *)&local_20);
        *(undefined4 *)(local_10 + 8) = *(undefined4 *)(*(int *)(iVar3 + 8) + 4);
        iVar3 = std::
                _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                ::operator->((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                              *)&local_20);
        *(undefined4 *)(local_10 + 0xc) = **(undefined4 **)(iVar3 + 8);
        *(time_t *)(local_10 + 0x10) = local_14;
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_28);
        CStreamGuard::~CStreamGuard(local_28);
      }
    }
    std::
    _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
    ::operator++(local_18,(int)&local_20);
  } while( true );
}
```
