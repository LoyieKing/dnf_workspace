# _processFatigueBuffEvent

`_ZN5CUser24_processFatigueBuffEventEjj`

`CUser::_processFatigueBuffEvent(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086598ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086598ba  _ZN5CUser24_processFatigueBuffEventEjj
#           CUser::_processFatigueBuffEvent(unsigned int, unsigned int)
# range [0x086598ba, 0x08659b5f]
086598ba +0x000:  push   %ebp
086598bb +0x001:  mov    %esp,%ebp
086598bd +0x003:  push   %esi
086598be +0x004:  push   %ebx
086598bf +0x005:  sub    $0x1b0,%esp
086598c5 +0x00b:  mov    0x10(%ebp),%eax
086598c8 +0x00e:  mov    0xc(%ebp),%edx
086598cb +0x011:  lea    (%edx,%eax,1),%eax
086598ce +0x014:  mov    %eax,-0x20(%ebp)
086598d1 +0x017:  cmpl   $0x0,0xc(%ebp)
086598d5 +0x01b:  je     08659b42 <+0x288>
086598db +0x021:  cmpl   $0x0,-0x20(%ebp)
086598df +0x025:  je     08659b45 <+0x28b>
086598e5 +0x02b:  cmpl   $0x9c,0xc(%ebp)
086598ec +0x032:  ja     08659b48 <+0x28e>
086598f2 +0x038:  movl   $0x0,-0x1c(%ebp)
086598f9 +0x03f:  movl   $0x0,-0x18(%ebp)
08659900 +0x046:  mov    0xc(%ebp),%eax
08659903 +0x049:  mov    $0x0,%edx
08659908 +0x04e:  mov    %eax,-0x180(%ebp)
0865990e +0x054:  mov    %edx,-0x17c(%ebp)
08659914 +0x05a:  fildll -0x180(%ebp)
0865991a +0x060:  flds   &data#9c9869b1(.rodata)
08659920 +0x066:  fdivrp %st,%st(1)
08659922 +0x068:  fnstcw -0x182(%ebp)
08659928 +0x06e:  movzwl -0x182(%ebp),%eax
0865992f +0x075:  mov    $0xc,%ah
08659931 +0x077:  mov    %ax,-0x184(%ebp)
08659938 +0x07e:  fldcw  -0x184(%ebp)
0865993e +0x084:  fistpl -0x14(%ebp)
08659941 +0x087:  fldcw  -0x182(%ebp)
08659947 +0x08d:  mov    -0x20(%ebp),%eax
0865994a +0x090:  mov    $0x0,%edx
0865994f +0x095:  mov    %eax,-0x180(%ebp)
08659955 +0x09b:  mov    %edx,-0x17c(%ebp)
0865995b +0x0a1:  fildll -0x180(%ebp)
08659961 +0x0a7:  flds   &data#9c9869b1(.rodata)
08659967 +0x0ad:  fdivrp %st,%st(1)
08659969 +0x0af:  fldcw  -0x184(%ebp)
0865996f +0x0b5:  fistpl -0x10(%ebp)
08659972 +0x0b8:  fldcw  -0x182(%ebp)
08659978 +0x0be:  mov    -0x14(%ebp),%eax
0865997b +0x0c1:  cmp    -0x10(%ebp),%eax
0865997e +0x0c4:  je     08659b4b <+0x291>
08659984 +0x0ca:  movl   $0x1d95,-0x1c(%ebp)
0865998b +0x0d1:  cmpl   $0x1,-0x14(%ebp)
0865998f +0x0d5:  jne    086599de <+0x124>
08659991 +0x0d7:  cmpl   $0x2,-0x10(%ebp)
08659995 +0x0db:  jne    086599de <+0x124>
08659997 +0x0dd:  movl   $0xa,-0x18(%ebp)
0865999e +0x0e4:  movl   $0x0,0xc(%esp)
086599a6 +0x0ec:  movl   $"game_server_msg_84",0x8(%esp)
086599ae +0x0f4:  movl   $0x4,0x4(%esp)
086599b6 +0x0fc:  movl   $&g_scriptStringManager_,(%esp)
086599bd +0x103:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
086599c2 +0x108:  movl   $0xff,0x8(%esp)
086599ca +0x110:  mov    %eax,0x4(%esp)
086599ce +0x114:  lea    -0x172(%ebp),%eax
086599d4 +0x11a:  mov    %eax,(%esp)
086599d7 +0x11d:  call   0807d8d0 <_init+0x1c8>
086599dc +0x122:  jmp    08659a38 <+0x17e>
086599de +0x124:  cmpl   $0x2,-0x14(%ebp)
086599e2 +0x128:  jne    08659b4e <+0x294>
086599e8 +0x12e:  cmpl   $0x3,-0x10(%ebp)
086599ec +0x132:  jne    08659b51 <+0x297>
086599f2 +0x138:  movl   $0x14,-0x18(%ebp)
086599f9 +0x13f:  movl   $0x0,0xc(%esp)
08659a01 +0x147:  movl   $"game_server_msg_85",0x8(%esp)
08659a09 +0x14f:  movl   $0x4,0x4(%esp)
08659a11 +0x157:  movl   $&g_scriptStringManager_,(%esp)
08659a18 +0x15e:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08659a1d +0x163:  movl   $0xff,0x8(%esp)
08659a25 +0x16b:  mov    %eax,0x4(%esp)
08659a29 +0x16f:  lea    -0x172(%ebp),%eax
08659a2f +0x175:  mov    %eax,(%esp)
08659a32 +0x178:  call   0807d8d0 <_init+0x1c8>
08659a37 +0x17d:  nop
08659a38 +0x17e:  movl   $0x0,0xc(%esp)
08659a40 +0x186:  movl   $"game_server_msg_83",0x8(%esp)
08659a48 +0x18e:  movl   $0x4,0x4(%esp)
08659a50 +0x196:  movl   $&g_scriptStringManager_,(%esp)
08659a57 +0x19d:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08659a5c +0x1a2:  movl   $0x14,0x8(%esp)
08659a64 +0x1aa:  mov    %eax,0x4(%esp)
08659a68 +0x1ae:  lea    -0x35(%ebp),%eax
08659a6b +0x1b1:  mov    %eax,(%esp)
08659a6e +0x1b4:  call   0807d8d0 <_init+0x1c8>
08659a73 +0x1b9:  lea    -0x72(%ebp),%eax
08659a76 +0x1bc:  mov    %eax,(%esp)
08659a79 +0x1bf:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08659a7e +0x1c4:  mov    -0x1c(%ebp),%ebx
08659a81 +0x1c7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08659a86 +0x1cc:  mov    %ebx,0x4(%esp)
08659a8a +0x1d0:  mov    %eax,(%esp)
08659a8d +0x1d3:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08659a92 +0x1d8:  mov    %eax,-0xc(%ebp)
08659a95 +0x1db:  cmpl   $0x0,-0xc(%ebp)
08659a99 +0x1df:  je     08659b54 <+0x29a>
08659a9f +0x1e5:  mov    -0x1c(%ebp),%eax
08659aa2 +0x1e8:  mov    %eax,-0x70(%ebp)
08659aa5 +0x1eb:  mov    -0xc(%ebp),%eax
08659aa8 +0x1ee:  mov    (%eax),%eax
08659aaa +0x1f0:  add    $0x8,%eax
08659aad +0x1f3:  mov    (%eax),%edx
08659aaf +0x1f5:  lea    -0x72(%ebp),%eax
08659ab2 +0x1f8:  mov    %eax,0x4(%esp)
08659ab6 +0x1fc:  mov    -0xc(%ebp),%eax
08659ab9 +0x1ff:  mov    %eax,(%esp)
08659abc +0x202:  call   *%edx
08659abe +0x204:  mov    -0x18(%ebp),%eax
08659ac1 +0x207:  mov    %eax,0x4(%esp)
08659ac5 +0x20b:  lea    -0x72(%ebp),%eax
08659ac8 +0x20e:  mov    %eax,(%esp)
08659acb +0x211:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08659ad0 +0x216:  mov    0x8(%ebp),%eax
08659ad3 +0x219:  mov    %eax,(%esp)
08659ad6 +0x21c:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08659adb +0x221:  mov    %eax,%ebx
08659add +0x223:  lea    -0x172(%ebp),%eax
08659ae3 +0x229:  mov    %eax,(%esp)
08659ae6 +0x22c:  call   0807e3b0 <_init+0xca8>
08659aeb +0x231:  mov    %eax,%esi
08659aed +0x233:  mov    0x8(%ebp),%eax
08659af0 +0x236:  mov    %eax,(%esp)
08659af3 +0x239:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08659af8 +0x23e:  movl   $0x0,0x24(%esp)
08659b00 +0x246:  movl   $0x0,0x20(%esp)
08659b08 +0x24e:  mov    %ebx,0x1c(%esp)
08659b0c +0x252:  movl   $0x0,0x18(%esp)
08659b14 +0x25a:  mov    %esi,0x14(%esp)
08659b18 +0x25e:  lea    -0x172(%ebp),%edx
08659b1e +0x264:  mov    %edx,0x10(%esp)
08659b22 +0x268:  mov    %eax,0xc(%esp)
08659b26 +0x26c:  movl   $0x0,0x8(%esp)
08659b2e +0x274:  lea    -0x72(%ebp),%eax
08659b31 +0x277:  mov    %eax,0x4(%esp)
08659b35 +0x27b:  lea    -0x35(%ebp),%eax
08659b38 +0x27e:  mov    %eax,(%esp)
08659b3b +0x281:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08659b40 +0x286:  jmp    08659b55 <+0x29b>
08659b42 +0x288:  nop
08659b43 +0x289:  jmp    08659b55 <+0x29b>
08659b45 +0x28b:  nop
08659b46 +0x28c:  jmp    08659b55 <+0x29b>
08659b48 +0x28e:  nop
08659b49 +0x28f:  jmp    08659b55 <+0x29b>
08659b4b +0x291:  nop
08659b4c +0x292:  jmp    08659b55 <+0x29b>
08659b4e +0x294:  nop
08659b4f +0x295:  jmp    08659b55 <+0x29b>
08659b51 +0x297:  nop
08659b52 +0x298:  jmp    08659b55 <+0x29b>
08659b54 +0x29a:  nop
08659b55 +0x29b:  add    $0x1b0,%esp
08659b5b +0x2a1:  pop    %ebx
08659b5c +0x2a2:  pop    %esi
08659b5d +0x2a3:  pop    %ebp
08659b5e +0x2a4:  ret
08659b5f +0x2a5:  nop
```

## 反编译 C

```c
// CUser::_processFatigueBuffEvent @ 0x86598ba

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CUser::_processFatigueBuffEvent(unsigned int, unsigned int) */

void __thiscall CUser::_processFatigueBuffEvent(CUser *this,uint param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  CDataManager *this_00;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 uVar5;
  char local_176 [256];
  Inven_Item local_76 [2];
  int local_74;
  char local_39 [21];
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  
  local_24 = param_1 + param_2;
  if (((param_1 != 0) && (local_24 != 0)) && (param_1 < 0x9d)) {
    local_18 = (int)ROUND((float)param_1 / _DAT_08cf3968);
    local_14 = (int)ROUND((float)local_24 / _DAT_08cf3968);
    if (local_18 != local_14) {
      local_20 = 0x1d95;
      if ((local_18 == 1) && (local_14 == 2)) {
        local_1c = 10;
        pcVar2 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "game_server_msg_84",(bool *)0x0);
        strncpy(local_176,pcVar2,0xff);
      }
      else {
        if (local_18 != 2) {
          return;
        }
        if (local_14 != 3) {
          return;
        }
        local_1c = 0x14;
        pcVar2 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "game_server_msg_85",(bool *)0x0);
        strncpy(local_176,pcVar2,0xff);
      }
      pcVar2 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_83",(bool *)0x0);
      strncpy(local_39,pcVar2,0x14);
      Inven_Item::Inven_Item(local_76);
      iVar1 = local_20;
      this_00 = (CDataManager *)G_CDataManager();
      local_10 = (int *)CDataManager::find_item(this_00,iVar1);
      if (local_10 != (int *)0x0) {
        local_74 = local_20;
        (**(code **)(*local_10 + 8))(local_10,local_76);
        Inven_Item::set_add_info(local_76,local_1c);
        uVar3 = GetServerGroup(this);
        sVar4 = strlen(local_176);
        uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (local_39,local_76,0,uVar5,local_176,sVar4,0,uVar3,0,0);
      }
    }
  }
  return;
}
```
