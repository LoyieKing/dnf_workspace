# incrementLayerStatData

`_ZN16CAdvanceAltarLog22incrementLayerStatDataEtjttt`

`CAdvanceAltarLog::incrementLayerStatData(unsigned short, unsigned int, unsigned short, unsigned short, unsigned short)`

| 类 | 地址 |
|---|---|
| `CAdvanceAltarLog` | `0x08156d60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08156d60  _ZN16CAdvanceAltarLog22incrementLayerStatDataEtjttt
#           CAdvanceAltarLog::incrementLayerStatData(unsigned short, unsigned int, unsigned short, unsigned short, unsigned short)
# range [0x08156d60, 0x08156ed1]
08156d60 +0x000:  push   %ebp
08156d61 +0x001:  mov    %esp,%ebp
08156d63 +0x003:  push   %esi
08156d64 +0x004:  push   %ebx
08156d65 +0x005:  sub    $0x50,%esp
08156d68 +0x008:  mov    0xc(%ebp),%ebx
08156d6b +0x00b:  mov    0x14(%ebp),%ecx
08156d6e +0x00e:  mov    0x18(%ebp),%edx
08156d71 +0x011:  mov    0x1c(%ebp),%eax
08156d74 +0x014:  mov    %bx,-0x3c(%ebp)
08156d78 +0x018:  mov    %cx,-0x40(%ebp)
08156d7c +0x01c:  mov    %dx,-0x44(%ebp)
08156d80 +0x020:  mov    %ax,-0x48(%ebp)
08156d84 +0x024:  mov    0x8(%ebp),%eax
08156d87 +0x027:  mov    %eax,0x4(%esp)
08156d8b +0x02b:  lea    -0x10(%ebp),%eax
08156d8e +0x02e:  mov    %eax,(%esp)
08156d91 +0x031:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08156d96 +0x036:  movzwl -0x40(%ebp),%edx
08156d9a +0x03a:  movzwl -0x3c(%ebp),%eax
08156d9e +0x03e:  mov    %edx,0x8(%esp)
08156da2 +0x042:  mov    0x10(%ebp),%edx
08156da5 +0x045:  mov    %edx,0x4(%esp)
08156da9 +0x049:  mov    %eax,(%esp)
08156dac +0x04c:  call   08157298 <_ZN16CAdvanceAltarLog7makeKeyEtjt>  ; CAdvanceAltarLog::makeKey(unsigned short, unsigned int, unsigned short)
08156db1 +0x051:  mov    %eax,-0x18(%ebp)
08156db4 +0x054:  mov    %edx,-0x14(%ebp)
08156db7 +0x057:  mov    0x8(%ebp),%eax
08156dba +0x05a:  lea    0x30(%eax),%ecx
08156dbd +0x05d:  lea    -0x1c(%ebp),%eax
08156dc0 +0x060:  lea    -0x18(%ebp),%edx
08156dc3 +0x063:  mov    %edx,0x8(%esp)
08156dc7 +0x067:  mov    %ecx,0x4(%esp)
08156dcb +0x06b:  mov    %eax,(%esp)
08156dce +0x06e:  call   08157890 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x4ef>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x4ef
08156dd3 +0x073:  sub    $0x4,%esp
08156dd6 +0x076:  mov    0x8(%ebp),%eax
08156dd9 +0x079:  lea    0x30(%eax),%edx
08156ddc +0x07c:  lea    -0xc(%ebp),%eax
08156ddf +0x07f:  mov    %edx,0x4(%esp)
08156de3 +0x083:  mov    %eax,(%esp)
08156de6 +0x086:  call   081578bc <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x51b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x51b
08156deb +0x08b:  sub    $0x4,%esp
08156dee +0x08e:  lea    -0xc(%ebp),%eax
08156df1 +0x091:  mov    %eax,0x4(%esp)
08156df5 +0x095:  lea    -0x1c(%ebp),%eax
08156df8 +0x098:  mov    %eax,(%esp)
08156dfb +0x09b:  call   081578e2 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x541>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x541
08156e00 +0x0a0:  test   %al,%al
08156e02 +0x0a2:  je     08156e72 <+0x112>
08156e04 +0x0a4:  lea    -0x2c(%ebp),%eax
08156e07 +0x0a7:  mov    %eax,(%esp)
08156e0a +0x0aa:  call   081573ea <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x49>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x49
08156e0f +0x0af:  movzwl -0x3c(%ebp),%eax
08156e13 +0x0b3:  mov    %ax,-0x2c(%ebp)
08156e17 +0x0b7:  mov    0x10(%ebp),%eax
08156e1a +0x0ba:  mov    %eax,-0x28(%ebp)
08156e1d +0x0bd:  movzwl -0x40(%ebp),%eax
08156e21 +0x0c1:  mov    %ax,-0x24(%ebp)
08156e25 +0x0c5:  movzwl -0x22(%ebp),%eax
08156e29 +0x0c9:  add    -0x44(%ebp),%ax
08156e2d +0x0cd:  mov    %ax,-0x22(%ebp)
08156e31 +0x0d1:  movzwl -0x20(%ebp),%eax
08156e35 +0x0d5:  add    -0x48(%ebp),%ax
08156e39 +0x0d9:  mov    %ax,-0x20(%ebp)
08156e3d +0x0dd:  mov    0x8(%ebp),%eax
08156e40 +0x0e0:  lea    0x30(%eax),%edx
08156e43 +0x0e3:  lea    -0x18(%ebp),%eax
08156e46 +0x0e6:  mov    %eax,0x4(%esp)
08156e4a +0x0ea:  mov    %edx,(%esp)
08156e4d +0x0ed:  call   081578f6 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x555>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x555
08156e52 +0x0f2:  lea    -0x2c(%ebp),%edx
08156e55 +0x0f5:  cmp    %edx,%eax
08156e57 +0x0f7:  je     08156ebd <+0x15d>
08156e59 +0x0f9:  movl   $0xe,0x8(%esp)
08156e61 +0x101:  lea    -0x2c(%ebp),%edx
08156e64 +0x104:  mov    %edx,0x4(%esp)
08156e68 +0x108:  mov    %eax,(%esp)
08156e6b +0x10b:  call   0807d8a0 <_init+0x198>
08156e70 +0x110:  jmp    08156ebd <+0x15d>
08156e72 +0x112:  lea    -0x1c(%ebp),%eax
08156e75 +0x115:  mov    %eax,(%esp)
08156e78 +0x118:  call   081579f0 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x64f>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x64f
08156e7d +0x11d:  movzwl 0x12(%eax),%edx
08156e81 +0x121:  add    -0x44(%ebp),%dx
08156e85 +0x125:  mov    %dx,0x12(%eax)
08156e89 +0x129:  lea    -0x1c(%ebp),%eax
08156e8c +0x12c:  mov    %eax,(%esp)
08156e8f +0x12f:  call   081579f0 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x64f>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x64f
08156e94 +0x134:  movzwl 0x14(%eax),%edx
08156e98 +0x138:  add    -0x48(%ebp),%dx
08156e9c +0x13c:  mov    %dx,0x14(%eax)
08156ea0 +0x140:  jmp    08156ebd <+0x15d>
08156ea2 +0x142:  mov    %edx,%ebx
08156ea4 +0x144:  mov    %eax,%esi
08156ea6 +0x146:  lea    -0x10(%ebp),%eax
08156ea9 +0x149:  mov    %eax,(%esp)
08156eac +0x14c:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08156eb1 +0x151:  mov    %esi,%eax
08156eb3 +0x153:  mov    %ebx,%edx
08156eb5 +0x155:  mov    %eax,(%esp)
08156eb8 +0x158:  call   08ae3750 <_Unwind_Resume>
08156ebd +0x15d:  lea    -0x10(%ebp),%eax
08156ec0 +0x160:  mov    %eax,(%esp)
08156ec3 +0x163:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08156ec8 +0x168:  lea    -0x8(%ebp),%esp
08156ecb +0x16b:  add    $0x0,%esp
08156ece +0x16e:  pop    %ebx
08156ecf +0x16f:  pop    %esi
08156ed0 +0x170:  pop    %ebp
08156ed1 +0x171:  ret
```

## 反编译 C

```c
// CAdvanceAltarLog::incrementLayerStatData @ 0x8156d60

/* CAdvanceAltarLog::incrementLayerStatData(unsigned short, unsigned int, unsigned short, unsigned
   short, unsigned short) */

void __thiscall
CAdvanceAltarLog::incrementLayerStatData
          (CAdvanceAltarLog *this,ushort param_1,uint param_2,ushort param_3,ushort param_4,
          ushort param_5)

{
  char cVar1;
  ushort *__dest;
  int iVar2;
  ushort local_30 [2];
  uint local_2c;
  ushort local_28;
  short local_26;
  short local_24;
  _Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>> local_20 [4];
  longlong local_1c;
  Guard<Mutex> local_14 [4];
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  local_10 [4];
  
  Guard<Mutex>::Guard(local_14,(Mutex *)this);
  local_1c = makeKey(param_1,param_2,param_3);
                    /* try { // try from 08156dce to 08156e51 has its CatchHandler @ 08156ea2 */
  std::
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  ::find((longlong *)local_20);
  std::
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::operator==
                    (local_20,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::
            operator->(local_20);
    *(ushort *)(iVar2 + 0x12) = *(short *)(iVar2 + 0x12) + param_4;
    iVar2 = std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::
            operator->(local_20);
    *(ushort *)(iVar2 + 0x14) = *(short *)(iVar2 + 0x14) + param_5;
  }
  else {
    STAdvanceAltarLayerStatData::STAdvanceAltarLayerStatData
              ((STAdvanceAltarLayerStatData *)local_30);
    local_2c = param_2;
    local_26 = local_26 + param_4;
    local_24 = local_24 + param_5;
    local_30[0] = param_1;
    local_28 = param_3;
    __dest = (ushort *)
             std::
             map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
             ::operator[]((map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
                           *)(this + 0x30),&local_1c);
    if (__dest != local_30) {
      memcpy(__dest,local_30,0xe);
    }
  }
  Guard<Mutex>::~Guard(local_14);
  return;
}
```
