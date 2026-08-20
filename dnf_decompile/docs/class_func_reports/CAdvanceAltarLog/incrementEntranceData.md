# incrementEntranceData

`_ZN16CAdvanceAltarLog21incrementEntranceDataEjjjj`

`CAdvanceAltarLog::incrementEntranceData(unsigned int, unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CAdvanceAltarLog` | `0x08156c30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08156c30  _ZN16CAdvanceAltarLog21incrementEntranceDataEjjjj
#           CAdvanceAltarLog::incrementEntranceData(unsigned int, unsigned int, unsigned int, unsigned int)
# range [0x08156c30, 0x08156d5f]
08156c30 +0x000:  push   %ebp
08156c31 +0x001:  mov    %esp,%ebp
08156c33 +0x003:  push   %esi
08156c34 +0x004:  push   %ebx
08156c35 +0x005:  sub    $0x30,%esp
08156c38 +0x008:  mov    0x8(%ebp),%eax
08156c3b +0x00b:  mov    %eax,0x4(%esp)
08156c3f +0x00f:  lea    -0x10(%ebp),%eax
08156c42 +0x012:  mov    %eax,(%esp)
08156c45 +0x015:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08156c4a +0x01a:  mov    0x8(%ebp),%eax
08156c4d +0x01d:  lea    0x18(%eax),%ecx
08156c50 +0x020:  lea    -0x14(%ebp),%eax
08156c53 +0x023:  lea    0xc(%ebp),%edx
08156c56 +0x026:  mov    %edx,0x8(%esp)
08156c5a +0x02a:  mov    %ecx,0x4(%esp)
08156c5e +0x02e:  mov    %eax,(%esp)
08156c61 +0x031:  call   08157722 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x381>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x381
08156c66 +0x036:  sub    $0x4,%esp
08156c69 +0x039:  mov    0x8(%ebp),%eax
08156c6c +0x03c:  lea    0x18(%eax),%edx
08156c6f +0x03f:  lea    -0xc(%ebp),%eax
08156c72 +0x042:  mov    %edx,0x4(%esp)
08156c76 +0x046:  mov    %eax,(%esp)
08156c79 +0x049:  call   0815774e <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x3ad>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x3ad
08156c7e +0x04e:  sub    $0x4,%esp
08156c81 +0x051:  lea    -0xc(%ebp),%eax
08156c84 +0x054:  mov    %eax,0x4(%esp)
08156c88 +0x058:  lea    -0x14(%ebp),%eax
08156c8b +0x05b:  mov    %eax,(%esp)
08156c8e +0x05e:  call   08157774 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x3d3>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x3d3
08156c93 +0x063:  test   %al,%al
08156c95 +0x065:  je     08156cf1 <+0xc1>
08156c97 +0x067:  lea    -0x24(%ebp),%eax
08156c9a +0x06a:  mov    %eax,(%esp)
08156c9d +0x06d:  call   081573be <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x1d>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x1d
08156ca2 +0x072:  mov    0xc(%ebp),%eax
08156ca5 +0x075:  mov    %eax,-0x24(%ebp)
08156ca8 +0x078:  mov    -0x20(%ebp),%eax
08156cab +0x07b:  add    0x10(%ebp),%eax
08156cae +0x07e:  mov    %eax,-0x20(%ebp)
08156cb1 +0x081:  mov    -0x1c(%ebp),%eax
08156cb4 +0x084:  add    0x14(%ebp),%eax
08156cb7 +0x087:  mov    %eax,-0x1c(%ebp)
08156cba +0x08a:  mov    -0x18(%ebp),%eax
08156cbd +0x08d:  add    0x18(%ebp),%eax
08156cc0 +0x090:  mov    %eax,-0x18(%ebp)
08156cc3 +0x093:  mov    0x8(%ebp),%eax
08156cc6 +0x096:  lea    0x18(%eax),%edx
08156cc9 +0x099:  lea    0xc(%ebp),%eax
08156ccc +0x09c:  mov    %eax,0x4(%esp)
08156cd0 +0x0a0:  mov    %edx,(%esp)
08156cd3 +0x0a3:  call   08157788 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x3e7>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x3e7
08156cd8 +0x0a8:  mov    -0x24(%ebp),%edx
08156cdb +0x0ab:  mov    %edx,(%eax)
08156cdd +0x0ad:  mov    -0x20(%ebp),%edx
08156ce0 +0x0b0:  mov    %edx,0x4(%eax)
08156ce3 +0x0b3:  mov    -0x1c(%ebp),%edx
08156ce6 +0x0b6:  mov    %edx,0x8(%eax)
08156ce9 +0x0b9:  mov    -0x18(%ebp),%edx
08156cec +0x0bc:  mov    %edx,0xc(%eax)
08156cef +0x0bf:  jmp    08156d4a <+0x11a>
08156cf1 +0x0c1:  lea    -0x14(%ebp),%eax
08156cf4 +0x0c4:  mov    %eax,(%esp)
08156cf7 +0x0c7:  call   08157882 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x4e1>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x4e1
08156cfc +0x0cc:  mov    0x8(%eax),%edx
08156cff +0x0cf:  add    0x10(%ebp),%edx
08156d02 +0x0d2:  mov    %edx,0x8(%eax)
08156d05 +0x0d5:  lea    -0x14(%ebp),%eax
08156d08 +0x0d8:  mov    %eax,(%esp)
08156d0b +0x0db:  call   08157882 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x4e1>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x4e1
08156d10 +0x0e0:  mov    0xc(%eax),%edx
08156d13 +0x0e3:  add    0x14(%ebp),%edx
08156d16 +0x0e6:  mov    %edx,0xc(%eax)
08156d19 +0x0e9:  lea    -0x14(%ebp),%eax
08156d1c +0x0ec:  mov    %eax,(%esp)
08156d1f +0x0ef:  call   08157882 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x4e1>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x4e1
08156d24 +0x0f4:  mov    0x10(%eax),%edx
08156d27 +0x0f7:  add    0x18(%ebp),%edx
08156d2a +0x0fa:  mov    %edx,0x10(%eax)
08156d2d +0x0fd:  jmp    08156d4a <+0x11a>
08156d2f +0x0ff:  mov    %edx,%ebx
08156d31 +0x101:  mov    %eax,%esi
08156d33 +0x103:  lea    -0x10(%ebp),%eax
08156d36 +0x106:  mov    %eax,(%esp)
08156d39 +0x109:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08156d3e +0x10e:  mov    %esi,%eax
08156d40 +0x110:  mov    %ebx,%edx
08156d42 +0x112:  mov    %eax,(%esp)
08156d45 +0x115:  call   08ae3750 <_Unwind_Resume>
08156d4a +0x11a:  lea    -0x10(%ebp),%eax
08156d4d +0x11d:  mov    %eax,(%esp)
08156d50 +0x120:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08156d55 +0x125:  lea    -0x8(%ebp),%esp
08156d58 +0x128:  add    $0x0,%esp
08156d5b +0x12b:  pop    %ebx
08156d5c +0x12c:  pop    %esi
08156d5d +0x12d:  pop    %ebp
08156d5e +0x12e:  ret
08156d5f +0x12f:  nop
```

## 反编译 C

```c
// CAdvanceAltarLog::incrementEntranceData @ 0x8156c30

/* CAdvanceAltarLog::incrementEntranceData(unsigned int, unsigned int, unsigned int, unsigned int)
    */

void __thiscall
CAdvanceAltarLog::incrementEntranceData
          (CAdvanceAltarLog *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  _Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>> local_18 [4];
  Guard<Mutex> local_14 [4];
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  local_10 [4];
  
  Guard<Mutex>::Guard(local_14,(Mutex *)this);
                    /* try { // try from 08156c61 to 08156cd7 has its CatchHandler @ 08156d2f */
  std::
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::
          operator==(local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::
            operator->(local_18);
    *(uint *)(iVar3 + 8) = *(int *)(iVar3 + 8) + param_2;
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::
            operator->(local_18);
    *(uint *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + param_3;
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::
            operator->(local_18);
    *(uint *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + param_4;
  }
  else {
    STAdvanceAltarEntranceData::STAdvanceAltarEntranceData((STAdvanceAltarEntranceData *)&local_28);
    local_28 = param_1;
    local_24 = local_24 + param_2;
    local_20 = local_20 + param_3;
    local_1c = local_1c + param_4;
    puVar2 = (uint *)std::
                     map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
                     ::operator[]((map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
                                   *)(this + 0x18),&param_1);
    *puVar2 = local_28;
    puVar2[1] = local_24;
    puVar2[2] = local_20;
    puVar2[3] = local_1c;
  }
  Guard<Mutex>::~Guard(local_14);
  return;
}
```
