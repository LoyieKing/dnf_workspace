# GetTodayRewardAndSendMail

`_ZN8APSystem19CActionPointManager25GetTodayRewardAndSendMailER5CUserNS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE`

`APSystem::CActionPointManager::GetTodayRewardAndSendMail(CUser&, APSystem::_SIG_LOAD_ACTION_POINT::_TodayRewardItem)`

| 类 | 地址 |
|---|---|
| `APSystem::CActionPointManager` | `0x08122104` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08122104  _ZN8APSystem19CActionPointManager25GetTodayRewardAndSendMailER5CUserNS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE
#           APSystem::CActionPointManager::GetTodayRewardAndSendMail(CUser&, APSystem::_SIG_LOAD_ACTION_POINT::_TodayRewardItem)
# range [0x08122104, 0x08122389]
08122104 +0x000:  push   %ebp
08122105 +0x001:  mov    %esp,%ebp
08122107 +0x003:  push   %esi
08122108 +0x004:  push   %ebx
08122109 +0x005:  sub    $0x1b0,%esp
0812210f +0x00b:  movzbl &_ZN8APSystem19CActionPointManager7_IsGMOnE,%eax
08122116 +0x012:  movzbl %al,%ebx
08122119 +0x015:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0812211e +0x01a:  mov    %ebx,0x4(%esp)
08122122 +0x01e:  mov    %eax,(%esp)
08122125 +0x021:  call   08122ace <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x41>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x41
0812212a +0x026:  add    $0x6c,%eax
0812212d +0x029:  mov    %eax,-0x20(%ebp)
08122130 +0x02c:  mov    -0x20(%ebp),%eax
08122133 +0x02f:  mov    %eax,(%esp)
08122136 +0x032:  call   08122d44 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x2b7>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x2b7
0812213b +0x037:  mov    %eax,-0x1c(%ebp)
0812213e +0x03a:  movl   $0x0,-0x18(%ebp)
08122145 +0x041:  movl   $0x0,-0x14(%ebp)
0812214c +0x048:  jmp    081221fa <+0xf6>
08122151 +0x04d:  mov    0x10(%ebp),%ebx
08122154 +0x050:  mov    -0x14(%ebp),%eax
08122157 +0x053:  mov    %eax,0x4(%esp)
0812215b +0x057:  mov    -0x20(%ebp),%eax
0812215e +0x05a:  mov    %eax,(%esp)
08122161 +0x05d:  call   08122d64 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x2d7>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x2d7
08122166 +0x062:  mov    (%eax),%eax
08122168 +0x064:  cmp    %eax,%ebx
0812216a +0x066:  jne    081221b9 <+0xb5>
0812216c +0x068:  mov    0x8(%ebp),%eax
0812216f +0x06b:  mov    0xc(%eax),%ebx
08122172 +0x06e:  mov    -0x14(%ebp),%eax
08122175 +0x071:  mov    %eax,0x4(%esp)
08122179 +0x075:  mov    -0x20(%ebp),%eax
0812217c +0x078:  mov    %eax,(%esp)
0812217f +0x07b:  call   08122d64 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x2d7>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x2d7
08122184 +0x080:  movzwl 0x4(%eax),%eax
08122188 +0x084:  movzwl %ax,%eax
0812218b +0x087:  cmp    %eax,%ebx
0812218d +0x089:  jb     081221b9 <+0xb5>
0812218f +0x08b:  mov    0x8(%ebp),%eax
08122192 +0x08e:  mov    0xc(%eax),%ebx
08122195 +0x091:  mov    -0x14(%ebp),%eax
08122198 +0x094:  mov    %eax,0x4(%esp)
0812219c +0x098:  mov    -0x20(%ebp),%eax
0812219f +0x09b:  mov    %eax,(%esp)
081221a2 +0x09e:  call   08122d64 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x2d7>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x2d7
081221a7 +0x0a3:  movzwl 0x6(%eax),%eax
081221ab +0x0a7:  movzwl %ax,%eax
081221ae +0x0aa:  cmp    %eax,%ebx
081221b0 +0x0ac:  ja     081221b9 <+0xb5>
081221b2 +0x0ae:  mov    $0x1,%eax
081221b7 +0x0b3:  jmp    081221be <+0xba>
081221b9 +0x0b5:  mov    $0x0,%eax
081221be +0x0ba:  test   %al,%al
081221c0 +0x0bc:  je     081221f6 <+0xf2>
081221c2 +0x0be:  mov    0x10(%ebp),%eax
081221c5 +0x0c1:  mov    0x8(%ebp),%edx
081221c8 +0x0c4:  movzbl 0x11(%edx,%eax,1),%eax
081221cd +0x0c9:  xor    $0x1,%eax
081221d0 +0x0cc:  test   %al,%al
081221d2 +0x0ce:  je     081221f6 <+0xf2>
081221d4 +0x0d0:  mov    0x10(%ebp),%eax
081221d7 +0x0d3:  mov    0x8(%ebp),%edx
081221da +0x0d6:  movb   $0x1,0x11(%edx,%eax,1)
081221df +0x0db:  mov    -0x14(%ebp),%eax
081221e2 +0x0de:  mov    %eax,0x4(%esp)
081221e6 +0x0e2:  mov    -0x20(%ebp),%eax
081221e9 +0x0e5:  mov    %eax,(%esp)
081221ec +0x0e8:  call   08122d64 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x2d7>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x2d7
081221f1 +0x0ed:  mov    %eax,-0x18(%ebp)
081221f4 +0x0f0:  jmp    0812220b <+0x107>
081221f6 +0x0f2:  addl   $0x1,-0x14(%ebp)
081221fa +0x0f6:  mov    -0x14(%ebp),%eax
081221fd +0x0f9:  cmp    -0x1c(%ebp),%eax
08122200 +0x0fc:  setb   %al
08122203 +0x0ff:  test   %al,%al
08122205 +0x101:  jne    08122151 <+0x4d>
0812220b +0x107:  cmpl   $0x0,-0x18(%ebp)
0812220f +0x10b:  je     0812237a <+0x276>
08122215 +0x111:  mov    0x8(%ebp),%eax
08122218 +0x114:  movb   $0x1,(%eax)
0812221b +0x117:  mov    -0x18(%ebp),%eax
0812221e +0x11a:  mov    0x8(%eax),%eax
08122221 +0x11d:  mov    %eax,%ebx
08122223 +0x11f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08122228 +0x124:  mov    %ebx,0x4(%esp)
0812222c +0x128:  mov    %eax,(%esp)
0812222f +0x12b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08122234 +0x130:  mov    %eax,-0x10(%ebp)
08122237 +0x133:  lea    -0x7b(%ebp),%eax
0812223a +0x136:  mov    %eax,(%esp)
0812223d +0x139:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08122242 +0x13e:  cmpl   $0x0,-0x10(%ebp)
08122246 +0x142:  je     0812237a <+0x276>
0812224c +0x148:  mov    -0x10(%ebp),%eax
0812224f +0x14b:  mov    (%eax),%eax
08122251 +0x14d:  add    $0x8,%eax
08122254 +0x150:  mov    (%eax),%edx
08122256 +0x152:  lea    -0x7b(%ebp),%eax
08122259 +0x155:  mov    %eax,0x4(%esp)
0812225d +0x159:  mov    -0x10(%ebp),%eax
08122260 +0x15c:  mov    %eax,(%esp)
08122263 +0x15f:  call   *%edx
08122265 +0x161:  mov    -0x18(%ebp),%eax
08122268 +0x164:  movzwl 0xc(%eax),%eax
0812226c +0x168:  movzwl %ax,%eax
0812226f +0x16b:  mov    %eax,-0x74(%ebp)
08122272 +0x16e:  mov    -0x18(%ebp),%eax
08122275 +0x171:  mov    0x8(%eax),%eax
08122278 +0x174:  mov    %eax,-0x79(%ebp)
0812227b +0x177:  movl   $0x8,-0xc(%ebp)
08122282 +0x17e:  movl   $0x0,0xc(%esp)
0812228a +0x186:  movl   $"chn_game_server_msg_82",0x8(%esp)
08122292 +0x18e:  movl   $0x4,0x4(%esp)
0812229a +0x196:  movl   $&g_scriptStringManager_,(%esp)
081222a1 +0x19d:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
081222a6 +0x1a2:  movl   $0x1d,0x8(%esp)
081222ae +0x1aa:  mov    %eax,0x4(%esp)
081222b2 +0x1ae:  lea    -0x3e(%ebp),%eax
081222b5 +0x1b1:  mov    %eax,(%esp)
081222b8 +0x1b4:  call   0807d8d0 <_init+0x1c8>
081222bd +0x1b9:  movl   $0x0,0xc(%esp)
081222c5 +0x1c1:  movl   $"chn_game_server_msg_83",0x8(%esp)
081222cd +0x1c9:  movl   $0x4,0x4(%esp)
081222d5 +0x1d1:  movl   $&g_scriptStringManager_,(%esp)
081222dc +0x1d8:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
081222e1 +0x1dd:  movl   $0xff,0x8(%esp)
081222e9 +0x1e5:  mov    %eax,0x4(%esp)
081222ed +0x1e9:  lea    -0x17b(%ebp),%eax
081222f3 +0x1ef:  mov    %eax,(%esp)
081222f6 +0x1f2:  call   0807d8d0 <_init+0x1c8>
081222fb +0x1f7:  mov    0xc(%ebp),%eax
081222fe +0x1fa:  mov    %eax,(%esp)
08122301 +0x1fd:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08122306 +0x202:  mov    %eax,%ebx
08122308 +0x204:  lea    -0x17b(%ebp),%eax
0812230e +0x20a:  mov    %eax,(%esp)
08122311 +0x20d:  call   0807e3b0 <_init+0xca8>
08122316 +0x212:  mov    %eax,%esi
08122318 +0x214:  movl   $0xffffffff,0x4(%esp)
08122320 +0x21c:  mov    0xc(%ebp),%eax
08122323 +0x21f:  mov    %eax,(%esp)
08122326 +0x222:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0812232b +0x227:  movl   $0x0,0x24(%esp)
08122333 +0x22f:  movl   $0x0,0x20(%esp)
0812233b +0x237:  mov    %ebx,0x1c(%esp)
0812233f +0x23b:  movl   $0x8,0x18(%esp)
08122347 +0x243:  mov    %esi,0x14(%esp)
0812234b +0x247:  lea    -0x17b(%ebp),%edx
08122351 +0x24d:  mov    %edx,0x10(%esp)
08122355 +0x251:  mov    %eax,0xc(%esp)
08122359 +0x255:  movl   $0x0,0x8(%esp)
08122361 +0x25d:  lea    -0x7b(%ebp),%eax
08122364 +0x260:  mov    %eax,0x4(%esp)
08122368 +0x264:  lea    -0x3e(%ebp),%eax
0812236b +0x267:  mov    %eax,(%esp)
0812236e +0x26a:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08122373 +0x26f:  mov    $0x1,%eax
08122378 +0x274:  jmp    0812237f <+0x27b>
0812237a +0x276:  mov    $0x0,%eax
0812237f +0x27b:  add    $0x1b0,%esp
08122385 +0x281:  pop    %ebx
08122386 +0x282:  pop    %esi
08122387 +0x283:  pop    %ebp
08122388 +0x284:  ret
08122389 +0x285:  nop
```

## 反编译 C

```c
// APSystem::CActionPointManager::GetTodayRewardAndSendMail @ 0x8122104

/* APSystem::CActionPointManager::GetTodayRewardAndSendMail(CUser&,
   APSystem::_SIG_LOAD_ACTION_POINT::_TodayRewardItem) */

undefined4 __thiscall
APSystem::CActionPointManager::GetTodayRewardAndSendMail
          (CActionPointManager *this,CUser *param_1,int param_3)

{
  uint uVar1;
  bool bVar2;
  CDataManager *pCVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  size_t sVar8;
  undefined4 uVar9;
  char local_17f [256];
  Inven_Item local_7f [2];
  undefined4 local_7d;
  uint local_78;
  char local_42 [30];
  vector<APSystem::_TodayRewardItem,std::allocator<APSystem::_TodayRewardItem>> *local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  undefined4 local_10;
  
  bVar2 = (bool)_IsGMOn;
  pCVar3 = (CDataManager *)G_CDataManager();
  iVar4 = CDataManager::GetActionPointEtcParameter(pCVar3,bVar2);
  local_24 = (vector<APSystem::_TodayRewardItem,std::allocator<APSystem::_TodayRewardItem>> *)
             (iVar4 + 0x6c);
  local_20 = std::vector<APSystem::_TodayRewardItem,std::allocator<APSystem::_TodayRewardItem>>::
             size(local_24);
  local_1c = 0;
  local_18 = 0;
  do {
    if (local_20 <= local_18) {
LAB_0812220b:
      if (local_1c != 0) {
        *this = (CActionPointManager)0x1;
        iVar4 = *(int *)(local_1c + 8);
        pCVar3 = (CDataManager *)G_CDataManager();
        local_14 = (int *)CDataManager::find_item(pCVar3,iVar4);
        Inven_Item::Inven_Item(local_7f);
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_14 + 8))(local_14,local_7f);
          local_78 = (uint)*(ushort *)(local_1c + 0xc);
          local_7d = *(undefined4 *)(local_1c + 8);
          local_10 = 8;
          pcVar6 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "chn_game_server_msg_82",(bool *)0x0);
          strncpy(local_42,pcVar6,0x1d);
          pcVar6 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "chn_game_server_msg_83",(bool *)0x0);
          strncpy(local_17f,pcVar6,0xff);
          uVar7 = CUser::GetServerGroup(param_1);
          sVar8 = strlen(local_17f);
          uVar9 = CUser::get_charac_no(param_1,-1);
          WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                    (local_42,local_7f,0,uVar9,local_17f,sVar8,8,uVar7,0,0);
          return 1;
        }
      }
      return 0;
    }
    piVar5 = (int *)std::
                    vector<APSystem::_TodayRewardItem,std::allocator<APSystem::_TodayRewardItem>>::
                    operator[](local_24,local_18);
    if (((param_3 == *piVar5) &&
        (uVar1 = *(uint *)(this + 0xc),
        iVar4 = std::vector<APSystem::_TodayRewardItem,std::allocator<APSystem::_TodayRewardItem>>::
                operator[](local_24,local_18), *(ushort *)(iVar4 + 4) <= uVar1)) &&
       (uVar1 = *(uint *)(this + 0xc),
       iVar4 = std::vector<APSystem::_TodayRewardItem,std::allocator<APSystem::_TodayRewardItem>>::
               operator[](local_24,local_18), uVar1 <= *(ushort *)(iVar4 + 6))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((bVar2) && (this[param_3 + 0x11] != (CActionPointManager)0x1)) {
      this[param_3 + 0x11] = (CActionPointManager)0x1;
      local_1c = std::vector<APSystem::_TodayRewardItem,std::allocator<APSystem::_TodayRewardItem>>
                 ::operator[](local_24,local_18);
      goto LAB_0812220b;
    }
    local_18 = local_18 + 1;
  } while( true );
}
```
