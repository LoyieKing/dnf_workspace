# _processEffectItem

`_ZN5CUser18_processEffectItemEP14CStackableItemjj`

`CUser::_processEffectItem(CStackableItem*, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865ec0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865ec0e  _ZN5CUser18_processEffectItemEP14CStackableItemjj
#           CUser::_processEffectItem(CStackableItem*, unsigned int, unsigned int)
# range [0x0865ec0e, 0x0865eddf]
0865ec0e +0x000:  push   %ebp
0865ec0f +0x001:  mov    %esp,%ebp
0865ec11 +0x003:  push   %edi
0865ec12 +0x004:  push   %esi
0865ec13 +0x005:  push   %ebx
0865ec14 +0x006:  sub    $0x8c,%esp
0865ec1a +0x00c:  mov    0xc(%ebp),%eax
0865ec1d +0x00f:  movzbl 0x2e0(%eax),%eax
0865ec24 +0x016:  xor    $0x1,%eax
0865ec27 +0x019:  test   %al,%al
0865ec29 +0x01b:  je     0865ec66 <+0x58>
0865ec2b +0x01d:  movl   $0x0,0xc(%esp)
0865ec33 +0x025:  movl   $0x391e,0x8(%esp)
0865ec3b +0x02d:  movl   $&_ZZN5CUser18_processEffectItemEP14CStackableItemjjE19__PRETTY_FUNCTION__,0x4(%esp)
0865ec43 +0x035:  lea    -0x48(%ebp),%eax
0865ec46 +0x038:  mov    %eax,(%esp)
0865ec49 +0x03b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0865ec4e +0x040:  movl   $"ERROR : Mismatch tag [stat change duration] and [effect maintenance]. There is no duration value.",0x4(%esp)
0865ec56 +0x048:  lea    -0x48(%ebp),%eax
0865ec59 +0x04b:  mov    %eax,(%esp)
0865ec5c +0x04e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0865ec61 +0x053:  jmp    0865edd4 <+0x1c6>
0865ec66 +0x058:  mov    0xc(%ebp),%eax
0865ec69 +0x05b:  mov    0x2dc(%eax),%eax
0865ec6f +0x061:  mov    %eax,-0x6c(%ebp)
0865ec72 +0x064:  mov    $0x10624dd3,%edx
0865ec77 +0x069:  mov    -0x6c(%ebp),%eax
0865ec7a +0x06c:  mul    %edx
0865ec7c +0x06e:  mov    %edx,%eax
0865ec7e +0x070:  shr    $0x6,%eax
0865ec81 +0x073:  mov    %eax,-0x30(%ebp)
0865ec84 +0x076:  mov    -0x30(%ebp),%eax
0865ec87 +0x079:  mov    0x14(%ebp),%edx
0865ec8a +0x07c:  lea    (%edx,%eax,1),%eax
0865ec8d +0x07f:  mov    %eax,-0x2c(%ebp)
0865ec90 +0x082:  lea    -0x38(%ebp),%eax
0865ec93 +0x085:  mov    0xc(%ebp),%edx
0865ec96 +0x088:  mov    %edx,0x4(%esp)
0865ec9a +0x08c:  mov    %eax,(%esp)
0865ec9d +0x08f:  call   08694716 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xf6b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xf6b
0865eca2 +0x094:  sub    $0x4,%esp
0865eca5 +0x097:  movzbl -0x33(%ebp),%eax
0865eca9 +0x09b:  test   %al,%al
0865ecab +0x09d:  je     0865ed00 <+0xf2>
0865ecad +0x09f:  mov    0x8(%ebp),%eax
0865ecb0 +0x0a2:  mov    %eax,(%esp)
0865ecb3 +0x0a5:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0865ecb8 +0x0aa:  mov    %eax,%esi
0865ecba +0x0ac:  mov    0x10(%ebp),%edx
0865ecbd +0x0af:  mov    %edx,-0x5c(%ebp)
0865ecc0 +0x0b2:  mov    -0x30(%ebp),%edi
0865ecc3 +0x0b5:  mov    0x8(%ebp),%eax
0865ecc6 +0x0b8:  mov    %eax,(%esp)
0865ecc9 +0x0bb:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0865ecce +0x0c0:  mov    %eax,%ebx
0865ecd0 +0x0c2:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0865ecd5 +0x0c7:  mov    %esi,0x18(%esp)
0865ecd9 +0x0cb:  mov    -0x5c(%ebp),%edx
0865ecdc +0x0ce:  mov    %edx,0x14(%esp)
0865ece0 +0x0d2:  mov    %edi,0x10(%esp)
0865ece4 +0x0d6:  movl   $0x76,0xc(%esp)
0865ecec +0x0de:  mov    %ebx,0x8(%esp)
0865ecf0 +0x0e2:  movl   $0x0,0x4(%esp)
0865ecf8 +0x0ea:  mov    %eax,(%esp)
0865ecfb +0x0ed:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0865ed00 +0x0f2:  mov    0x8(%ebp),%eax
0865ed03 +0x0f5:  mov    %eax,(%esp)
0865ed06 +0x0f8:  call   08696a44 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3299>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3299
0865ed0b +0x0fd:  mov    %eax,-0x28(%ebp)
0865ed0e +0x100:  movb   $0x0,-0x21(%ebp)
0865ed12 +0x104:  movl   $0x0,-0x20(%ebp)
0865ed19 +0x10b:  jmp    0865ed79 <+0x16b>
0865ed1b +0x10d:  mov    -0x20(%ebp),%eax
0865ed1e +0x110:  mov    %eax,0x4(%esp)
0865ed22 +0x114:  mov    -0x28(%ebp),%eax
0865ed25 +0x117:  mov    %eax,(%esp)
0865ed28 +0x11a:  call   0869b0e4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7939>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7939
0865ed2d +0x11f:  mov    (%eax),%eax
0865ed2f +0x121:  cmp    0x10(%ebp),%eax
0865ed32 +0x124:  sete   %al
0865ed35 +0x127:  test   %al,%al
0865ed37 +0x129:  je     0865ed75 <+0x167>
0865ed39 +0x12b:  mov    -0x20(%ebp),%eax
0865ed3c +0x12e:  mov    %eax,0x4(%esp)
0865ed40 +0x132:  mov    -0x28(%ebp),%eax
0865ed43 +0x135:  mov    %eax,(%esp)
0865ed46 +0x138:  call   0869b0e4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7939>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7939
0865ed4b +0x13d:  mov    0x4(%eax),%eax
0865ed4e +0x140:  mov    %eax,-0x1c(%ebp)
0865ed51 +0x143:  mov    -0x2c(%ebp),%eax
0865ed54 +0x146:  cmp    -0x1c(%ebp),%eax
0865ed57 +0x149:  jbe    0865ed71 <+0x163>
0865ed59 +0x14b:  mov    -0x20(%ebp),%eax
0865ed5c +0x14e:  mov    %eax,0x4(%esp)
0865ed60 +0x152:  mov    -0x28(%ebp),%eax
0865ed63 +0x155:  mov    %eax,(%esp)
0865ed66 +0x158:  call   0869b0e4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7939>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7939
0865ed6b +0x15d:  mov    -0x2c(%ebp),%edx
0865ed6e +0x160:  mov    %edx,0x4(%eax)
0865ed71 +0x163:  movb   $0x1,-0x21(%ebp)
0865ed75 +0x167:  addl   $0x1,-0x20(%ebp)
0865ed79 +0x16b:  mov    -0x28(%ebp),%eax
0865ed7c +0x16e:  mov    %eax,(%esp)
0865ed7f +0x171:  call   0863d2c0 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17d1>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17d1
0865ed84 +0x176:  cmp    -0x20(%ebp),%eax
0865ed87 +0x179:  seta   %al
0865ed8a +0x17c:  test   %al,%al
0865ed8c +0x17e:  jne    0865ed1b <+0x10d>
0865ed8e +0x180:  movzbl -0x21(%ebp),%eax
0865ed92 +0x184:  xor    $0x1,%eax
0865ed95 +0x187:  test   %al,%al
0865ed97 +0x189:  je     0865edc2 <+0x1b4>
0865ed99 +0x18b:  lea    -0x50(%ebp),%eax
0865ed9c +0x18e:  mov    %eax,(%esp)
0865ed9f +0x191:  call   08695c48 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x249d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x249d
0865eda4 +0x196:  mov    0x10(%ebp),%eax
0865eda7 +0x199:  mov    %eax,-0x50(%ebp)
0865edaa +0x19c:  mov    -0x2c(%ebp),%eax
0865edad +0x19f:  mov    %eax,-0x4c(%ebp)
0865edb0 +0x1a2:  lea    -0x50(%ebp),%eax
0865edb3 +0x1a5:  mov    %eax,0x4(%esp)
0865edb7 +0x1a9:  mov    -0x28(%ebp),%eax
0865edba +0x1ac:  mov    %eax,(%esp)
0865edbd +0x1af:  call   0869b070 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x78c5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x78c5
0865edc2 +0x1b4:  mov    0x14(%ebp),%eax
0865edc5 +0x1b7:  mov    %eax,0x4(%esp)
0865edc9 +0x1bb:  mov    0x8(%ebp),%eax
0865edcc +0x1be:  mov    %eax,(%esp)
0865edcf +0x1c1:  call   08658d90 <_ZN5CUser20UpdateEffectItemInfoEj>  ; CUser::UpdateEffectItemInfo(unsigned int)
0865edd4 +0x1c6:  lea    -0xc(%ebp),%esp
0865edd7 +0x1c9:  add    $0x0,%esp
0865edda +0x1cc:  pop    %ebx
0865eddb +0x1cd:  pop    %esi
0865eddc +0x1ce:  pop    %edi
0865eddd +0x1cf:  pop    %ebp
0865edde +0x1d0:  ret
0865eddf +0x1d1:  nop
```

## 反编译 C

```c
// CUser::_processEffectItem @ 0x865ec0e

/* CUser::_processEffectItem(CStackableItem*, unsigned int, unsigned int) */

void __thiscall
CUser::_processEffectItem(CUser *this,CStackableItem *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint local_54;
  uint local_50;
  cMyTrace local_4c [21];
  char local_37;
  uint local_34;
  uint local_30;
  vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *local_2c;
  char local_25;
  uint local_24;
  uint local_20;
  
  if (param_1[0x2e0] == (CStackableItem)0x1) {
    local_34 = *(uint *)(param_1 + 0x2dc) / 1000;
    local_30 = param_3 + local_34;
    CStackableItem::GetStatChangeInfo();
    if (local_37 != '\0') {
      uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
      uVar6 = local_34;
      uVar2 = GetUID(this);
      pTVar3 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar3,0,uVar2,0x76,uVar6,param_2,uVar1);
    }
    local_2c = (vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *)
               CUserCharacInfo::GetCurCharacEffectItemList((CUserCharacInfo *)this);
    local_25 = '\0';
    local_24 = 0;
    while( true ) {
      uVar6 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::size(local_2c);
      if (uVar6 <= local_24) break;
      puVar4 = (uint *)std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::
                       operator[](local_2c,local_24);
      if (*puVar4 == param_2) {
        iVar5 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::operator[]
                          (local_2c,local_24);
        local_20 = *(uint *)(iVar5 + 4);
        if (local_20 < local_30) {
          iVar5 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::operator[]
                            (local_2c,local_24);
          *(uint *)(iVar5 + 4) = local_30;
        }
        local_25 = '\x01';
      }
      local_24 = local_24 + 1;
    }
    if (local_25 != '\x01') {
      ContinuousItemInfo::ContinuousItemInfo((ContinuousItemInfo *)&local_54);
      local_54 = param_2;
      local_50 = local_30;
      std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::push_back
                (local_2c,(ContinuousItemInfo *)&local_54);
    }
    UpdateEffectItemInfo(this,param_3);
  }
  else {
    cMyTrace::cMyTrace(local_4c,
                       "void CUser::_processEffectItem(CStackableItem*, unsigned int, unsigned int)"
                       ,0x391e,0);
    cMyTrace::operator()
              (local_4c,
               "ERROR : Mismatch tag [stat change duration] and [effect maintenance]. There is no duration value."
              );
  }
  return;
}
```
