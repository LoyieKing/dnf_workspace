# OnCreateVillageMonster

`_ZN16village_attacked18CVillageMonsterMgr22OnCreateVillageMonsterEv`

`village_attacked::CVillageMonsterMgr::OnCreateVillageMonster()`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterMgr` | `0x086b4280` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b4280  _ZN16village_attacked18CVillageMonsterMgr22OnCreateVillageMonsterEv
#           village_attacked::CVillageMonsterMgr::OnCreateVillageMonster()
# range [0x086b4280, 0x086b4337]
086b4280 +0x00:  push   %ebp
086b4281 +0x01:  mov    %esp,%ebp
086b4283 +0x03:  sub    $0x38,%esp
086b4286 +0x06:  mov    0x8(%ebp),%eax
086b4289 +0x09:  lea    0x8(%eax),%edx
086b428c +0x0c:  lea    -0x10(%ebp),%eax
086b428f +0x0f:  mov    %edx,0x4(%esp)
086b4293 +0x13:  mov    %eax,(%esp)
086b4296 +0x16:  call   086b53fa <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x924>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x924
086b429b +0x1b:  sub    $0x4,%esp
086b429e +0x1e:  jmp    086b42c1 <+0x41>
086b42a0 +0x20:  lea    -0x10(%ebp),%eax
086b42a3 +0x23:  mov    %eax,(%esp)
086b42a6 +0x26:  call   086b5478 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x9a2>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x9a2
086b42ab +0x2b:  add    $0x4,%eax
086b42ae +0x2e:  mov    %eax,(%esp)
086b42b1 +0x31:  call   086b3bd4 <_ZN16village_attacked19CVillageMonsterArea22OnCreateVillageMonsterEv>  ; village_attacked::CVillageMonsterArea::OnCreateVillageMonster()
086b42b6 +0x36:  lea    -0x10(%ebp),%eax
086b42b9 +0x39:  mov    %eax,(%esp)
086b42bc +0x3c:  call   086b545a <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x984>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x984
086b42c1 +0x41:  mov    0x8(%ebp),%eax
086b42c4 +0x44:  lea    0x8(%eax),%edx
086b42c7 +0x47:  lea    -0xc(%ebp),%eax
086b42ca +0x4a:  mov    %edx,0x4(%esp)
086b42ce +0x4e:  mov    %eax,(%esp)
086b42d1 +0x51:  call   086b5420 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x94a>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x94a
086b42d6 +0x56:  sub    $0x4,%esp
086b42d9 +0x59:  lea    -0xc(%ebp),%eax
086b42dc +0x5c:  mov    %eax,0x4(%esp)
086b42e0 +0x60:  lea    -0x10(%ebp),%eax
086b42e3 +0x63:  mov    %eax,(%esp)
086b42e6 +0x66:  call   086b5446 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x970>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x970
086b42eb +0x6b:  test   %al,%al
086b42ed +0x6d:  jne    086b42a0 <+0x20>
086b42ef +0x6f:  mov    0x8(%ebp),%eax
086b42f2 +0x72:  movl   $0x2,0x4(%eax)
086b42f9 +0x79:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086b42fe +0x7e:  movl   $0x0,0x18(%esp)
086b4306 +0x86:  movl   $0x0,0x14(%esp)
086b430e +0x8e:  movl   $0x1,0x10(%esp)
086b4316 +0x96:  movl   $0x85,0xc(%esp)
086b431e +0x9e:  movl   $0x0,0x8(%esp)
086b4326 +0xa6:  movl   $0x2,0x4(%esp)
086b432e +0xae:  mov    %eax,(%esp)
086b4331 +0xb1:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086b4336 +0xb6:  leave
086b4337 +0xb7:  ret
```

## 反编译 C

```c
// village_attacked::CVillageMonsterMgr::OnCreateVillageMonster @ 0x86b4280

/* village_attacked::CVillageMonsterMgr::OnCreateVillageMonster() */

void __thiscall
village_attacked::CVillageMonsterMgr::OnCreateVillageMonster(CVillageMonsterMgr *this)

{
  char cVar1;
  int iVar2;
  TimerQueue *pTVar3;
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_14 [4];
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_10 [12];
  
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
    CVillageMonsterArea::OnCreateVillageMonster((CVillageMonsterArea *)(iVar2 + 4));
    std::
    _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
    ::operator++((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                  *)local_14);
  }
  *(undefined4 *)(this + 4) = 2;
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,2,0,0x85,1,0,0);
  return;
}
```
