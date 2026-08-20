# OnRunVillageMonster

`_ZN16village_attacked18CVillageMonsterMgr19OnRunVillageMonsterEv`

`village_attacked::CVillageMonsterMgr::OnRunVillageMonster()`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterMgr` | `0x086b44fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b44fc  _ZN16village_attacked18CVillageMonsterMgr19OnRunVillageMonsterEv
#           village_attacked::CVillageMonsterMgr::OnRunVillageMonster()
# range [0x086b44fc, 0x086b45bb]
086b44fc +0x00:  push   %ebp
086b44fd +0x01:  mov    %esp,%ebp
086b44ff +0x03:  sub    $0x38,%esp
086b4502 +0x06:  mov    0x8(%ebp),%eax
086b4505 +0x09:  mov    0x4(%eax),%eax
086b4508 +0x0c:  test   %eax,%eax
086b450a +0x0e:  je     086b45b8 <+0xbc>
086b4510 +0x14:  mov    0x8(%ebp),%eax
086b4513 +0x17:  lea    0x8(%eax),%edx
086b4516 +0x1a:  lea    -0x10(%ebp),%eax
086b4519 +0x1d:  mov    %edx,0x4(%esp)
086b451d +0x21:  mov    %eax,(%esp)
086b4520 +0x24:  call   086b53fa <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x924>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x924
086b4525 +0x29:  sub    $0x4,%esp
086b4528 +0x2c:  jmp    086b454b <+0x4f>
086b452a +0x2e:  lea    -0x10(%ebp),%eax
086b452d +0x31:  mov    %eax,(%esp)
086b4530 +0x34:  call   086b5478 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x9a2>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x9a2
086b4535 +0x39:  add    $0x4,%eax
086b4538 +0x3c:  mov    %eax,(%esp)
086b453b +0x3f:  call   086b3f06 <_ZN16village_attacked19CVillageMonsterArea19OnRunVillageMonsterEv>  ; village_attacked::CVillageMonsterArea::OnRunVillageMonster()
086b4540 +0x44:  lea    -0x10(%ebp),%eax
086b4543 +0x47:  mov    %eax,(%esp)
086b4546 +0x4a:  call   086b545a <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x984>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x984
086b454b +0x4f:  mov    0x8(%ebp),%eax
086b454e +0x52:  lea    0x8(%eax),%edx
086b4551 +0x55:  lea    -0xc(%ebp),%eax
086b4554 +0x58:  mov    %edx,0x4(%esp)
086b4558 +0x5c:  mov    %eax,(%esp)
086b455b +0x5f:  call   086b5420 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x94a>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x94a
086b4560 +0x64:  sub    $0x4,%esp
086b4563 +0x67:  lea    -0xc(%ebp),%eax
086b4566 +0x6a:  mov    %eax,0x4(%esp)
086b456a +0x6e:  lea    -0x10(%ebp),%eax
086b456d +0x71:  mov    %eax,(%esp)
086b4570 +0x74:  call   086b5446 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x970>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x970
086b4575 +0x79:  test   %al,%al
086b4577 +0x7b:  jne    086b452a <+0x2e>
086b4579 +0x7d:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086b457e +0x82:  movl   $0x0,0x18(%esp)
086b4586 +0x8a:  movl   $0x0,0x14(%esp)
086b458e +0x92:  movl   $0x1,0x10(%esp)
086b4596 +0x9a:  movl   $0x85,0xc(%esp)
086b459e +0xa2:  movl   $0x0,0x8(%esp)
086b45a6 +0xaa:  movl   $0x2,0x4(%esp)
086b45ae +0xb2:  mov    %eax,(%esp)
086b45b1 +0xb5:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086b45b6 +0xba:  jmp    086b45b9 <+0xbd>
086b45b8 +0xbc:  nop
086b45b9 +0xbd:  leave
086b45ba +0xbe:  ret
086b45bb +0xbf:  nop
```

## 反编译 C

```c
// village_attacked::CVillageMonsterMgr::OnRunVillageMonster @ 0x86b44fc

/* village_attacked::CVillageMonsterMgr::OnRunVillageMonster() */

void __thiscall village_attacked::CVillageMonsterMgr::OnRunVillageMonster(CVillageMonsterMgr *this)

{
  char cVar1;
  int iVar2;
  TimerQueue *pTVar3;
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_14 [4];
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_10 [12];
  
  if (*(int *)(this + 4) != 0) {
    std::
    map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
    ::begin(local_14);
    while( true ) {
      std::
      map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
      ::end(local_10);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
              ::operator!=((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                            *)local_14,(_Rb_tree_iterator *)local_10);
      if (cVar1 == '\0') break;
      iVar2 = std::
              _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
              ::operator->((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                            *)local_14);
      CVillageMonsterArea::OnRunVillageMonster((CVillageMonsterArea *)(iVar2 + 4));
      std::
      _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
      ::operator++((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                    *)local_14);
    }
    pTVar3 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar3,2,0,0x85,1,0,0);
  }
  return;
}
```
