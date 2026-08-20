# send_lose_item_for_china

`_ZN11CTradeSpace24send_lose_item_for_chinaEP5CUserR10Inven_Item`

`CTradeSpace::send_lose_item_for_china(CUser*, Inven_Item&)`

| 类 | 地址 |
|---|---|
| `CTradeSpace` | `0x0852e3a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0852e3a8  _ZN11CTradeSpace24send_lose_item_for_chinaEP5CUserR10Inven_Item
#           CTradeSpace::send_lose_item_for_china(CUser*, Inven_Item&)
# range [0x0852e3a8, 0x0852e543]
0852e3a8 +0x000:  push   %ebp
0852e3a9 +0x001:  mov    %esp,%ebp
0852e3ab +0x003:  push   %edi
0852e3ac +0x004:  push   %esi
0852e3ad +0x005:  push   %ebx
0852e3ae +0x006:  sub    $0x15c,%esp
0852e3b4 +0x00c:  mov    0x10(%ebp),%eax
0852e3b7 +0x00f:  mov    0x2(%eax),%eax
0852e3ba +0x012:  test   %eax,%eax
0852e3bc +0x014:  je     0852e534 <+0x18c>
0852e3c2 +0x01a:  lea    -0x35(%ebp),%eax
0852e3c5 +0x01d:  mov    $0x1d,%edx
0852e3ca +0x022:  mov    $0x0,%ecx
0852e3cf +0x027:  mov    %eax,%ebx
0852e3d1 +0x029:  and    $0x1,%ebx
0852e3d4 +0x02c:  test   %ebx,%ebx
0852e3d6 +0x02e:  je     0852e3e0 <+0x38>
0852e3d8 +0x030:  mov    %cl,(%eax)
0852e3da +0x032:  add    $0x1,%eax
0852e3dd +0x035:  sub    $0x1,%edx
0852e3e0 +0x038:  mov    %eax,%ebx
0852e3e2 +0x03a:  and    $0x2,%ebx
0852e3e5 +0x03d:  test   %ebx,%ebx
0852e3e7 +0x03f:  je     0852e3f2 <+0x4a>
0852e3e9 +0x041:  mov    %cx,(%eax)
0852e3ec +0x044:  add    $0x2,%eax
0852e3ef +0x047:  sub    $0x2,%edx
0852e3f2 +0x04a:  mov    %edx,%esi
0852e3f4 +0x04c:  and    $0xfffffffc,%esi
0852e3f7 +0x04f:  mov    $0x0,%ebx
0852e3fc +0x054:  mov    %ecx,(%eax,%ebx,1)
0852e3ff +0x057:  add    $0x4,%ebx
0852e402 +0x05a:  cmp    %esi,%ebx
0852e404 +0x05c:  jb     0852e3fc <+0x54>
0852e406 +0x05e:  add    %ebx,%eax
0852e408 +0x060:  mov    %edx,%ebx
0852e40a +0x062:  and    $0x2,%ebx
0852e40d +0x065:  test   %ebx,%ebx
0852e40f +0x067:  je     0852e417 <+0x6f>
0852e411 +0x069:  mov    %cx,(%eax)
0852e414 +0x06c:  add    $0x2,%eax
0852e417 +0x06f:  and    $0x1,%edx
0852e41a +0x072:  test   %edx,%edx
0852e41c +0x074:  je     0852e423 <+0x7b>
0852e41e +0x076:  mov    %cl,(%eax)
0852e420 +0x078:  add    $0x1,%eax
0852e423 +0x07b:  lea    -0x134(%ebp),%edx
0852e429 +0x081:  mov    $0x0,%eax
0852e42e +0x086:  mov    $0x3f,%ecx
0852e433 +0x08b:  mov    %edx,%edi
0852e435 +0x08d:  rep stos %eax,%es:(%edi)
0852e437 +0x08f:  mov    %edi,%edx
0852e439 +0x091:  mov    %ax,(%edx)
0852e43c +0x094:  add    $0x2,%edx
0852e43f +0x097:  mov    %al,(%edx)
0852e441 +0x099:  add    $0x1,%edx
0852e444 +0x09c:  movl   $0x0,0xc(%esp)
0852e44c +0x0a4:  movl   $"game_server_msg_287",0x8(%esp)
0852e454 +0x0ac:  movl   $0x4,0x4(%esp)
0852e45c +0x0b4:  movl   $&g_scriptStringManager_,(%esp)
0852e463 +0x0bb:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0852e468 +0x0c0:  movl   $0x1d,0x8(%esp)
0852e470 +0x0c8:  mov    %eax,0x4(%esp)
0852e474 +0x0cc:  lea    -0x35(%ebp),%eax
0852e477 +0x0cf:  mov    %eax,(%esp)
0852e47a +0x0d2:  call   0807d8d0 <_init+0x1c8>
0852e47f +0x0d7:  movl   $0x0,0xc(%esp)
0852e487 +0x0df:  movl   $"game_server_msg_288",0x8(%esp)
0852e48f +0x0e7:  movl   $0x4,0x4(%esp)
0852e497 +0x0ef:  movl   $&g_scriptStringManager_,(%esp)
0852e49e +0x0f6:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0852e4a3 +0x0fb:  movl   $0xff,0x8(%esp)
0852e4ab +0x103:  mov    %eax,0x4(%esp)
0852e4af +0x107:  lea    -0x134(%ebp),%eax
0852e4b5 +0x10d:  mov    %eax,(%esp)
0852e4b8 +0x110:  call   0807d8d0 <_init+0x1c8>
0852e4bd +0x115:  mov    0xc(%ebp),%eax
0852e4c0 +0x118:  mov    %eax,(%esp)
0852e4c3 +0x11b:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0852e4c8 +0x120:  mov    %eax,%ebx
0852e4ca +0x122:  lea    -0x134(%ebp),%eax
0852e4d0 +0x128:  mov    %eax,(%esp)
0852e4d3 +0x12b:  call   0807e3b0 <_init+0xca8>
0852e4d8 +0x130:  mov    %eax,%esi
0852e4da +0x132:  mov    0xc(%ebp),%eax
0852e4dd +0x135:  mov    %eax,(%esp)
0852e4e0 +0x138:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0852e4e5 +0x13d:  movl   $0x0,0x24(%esp)
0852e4ed +0x145:  movl   $0x0,0x20(%esp)
0852e4f5 +0x14d:  mov    %ebx,0x1c(%esp)
0852e4f9 +0x151:  movl   $0x0,0x18(%esp)
0852e501 +0x159:  mov    %esi,0x14(%esp)
0852e505 +0x15d:  lea    -0x134(%ebp),%edx
0852e50b +0x163:  mov    %edx,0x10(%esp)
0852e50f +0x167:  mov    %eax,0xc(%esp)
0852e513 +0x16b:  movl   $0x0,0x8(%esp)
0852e51b +0x173:  mov    0x10(%ebp),%eax
0852e51e +0x176:  mov    %eax,0x4(%esp)
0852e522 +0x17a:  lea    -0x35(%ebp),%eax
0852e525 +0x17d:  mov    %eax,(%esp)
0852e528 +0x180:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
0852e52d +0x185:  mov    $0x1,%eax
0852e532 +0x18a:  jmp    0852e539 <+0x191>
0852e534 +0x18c:  mov    $0x0,%eax
0852e539 +0x191:  add    $0x15c,%esp
0852e53f +0x197:  pop    %ebx
0852e540 +0x198:  pop    %esi
0852e541 +0x199:  pop    %edi
0852e542 +0x19a:  pop    %ebp
0852e543 +0x19b:  ret
```

## 反编译 C

```c
// CTradeSpace::send_lose_item_for_china @ 0x852e3a8

/* CTradeSpace::send_lose_item_for_china(CUser*, Inven_Item&) */

undefined4 __thiscall
CTradeSpace::send_lose_item_for_china(CTradeSpace *this,CUser *param_1,Inven_Item *param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  char local_138 [2];
  char acStack_136 [253];
  char local_39;
  char local_38 [40];
  
  if (*(int *)(param_2 + 2) == 0) {
    uVar3 = 0;
  }
  else {
    pcVar2 = &local_39;
    uVar7 = 0x1d;
    bVar9 = ((uint)pcVar2 & 1) != 0;
    if (bVar9) {
      local_39 = '\0';
      pcVar2 = local_38;
      uVar7 = 0x1c;
    }
    if (((uint)pcVar2 & 2) != 0) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2 = pcVar2 + 2;
      uVar7 = uVar7 - 2;
    }
    uVar8 = 0;
    do {
      pcVar1 = pcVar2 + uVar8;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar8 = uVar8 + 4;
    } while (uVar8 < (uVar7 & 0xfffffffc));
    pcVar2 = pcVar2 + uVar8;
    if ((uVar7 & 2) != 0) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2 = pcVar2 + 2;
    }
    if (!bVar9) {
      *pcVar2 = '\0';
    }
    pcVar2 = local_138;
    for (iVar6 = 0x3f; iVar6 != 0; iVar6 = iVar6 + -1) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      pcVar2 = pcVar2 + 4;
    }
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_287",(bool *)0x0);
    strncpy(&local_39,pcVar2,0x1d);
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_288",(bool *)0x0);
    strncpy(local_138,pcVar2,0xff);
    uVar3 = CUser::GetServerGroup(param_1);
    sVar4 = strlen(local_138);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (&local_39,param_2,0,uVar5,local_138,sVar4,0,uVar3,0,0);
    uVar3 = 1;
  }
  return uVar3;
}
```
