# process_gold_mail_send

`_ZN13EventClassify15CEventActionMng22process_gold_mail_sendEP5CUserR15Action_SendMail`

`EventClassify::CEventActionMng::process_gold_mail_send(CUser*, Action_SendMail&)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventActionMng` | `0x0810d83c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810d83c  _ZN13EventClassify15CEventActionMng22process_gold_mail_sendEP5CUserR15Action_SendMail
#           EventClassify::CEventActionMng::process_gold_mail_send(CUser*, Action_SendMail&)
# range [0x0810d83c, 0x0810da1b]
0810d83c +0x000:  push   %ebp
0810d83d +0x001:  mov    %esp,%ebp
0810d83f +0x003:  push   %edi
0810d840 +0x004:  push   %esi
0810d841 +0x005:  push   %ebx
0810d842 +0x006:  sub    $0x19c,%esp
0810d848 +0x00c:  lea    -0x73(%ebp),%eax
0810d84b +0x00f:  mov    %eax,(%esp)
0810d84e +0x012:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0810d853 +0x017:  movl   $0xffffffff,-0x71(%ebp)
0810d85a +0x01e:  lea    -0x173(%ebp),%edx
0810d860 +0x024:  mov    $0x100,%ebx
0810d865 +0x029:  mov    $0x0,%eax
0810d86a +0x02e:  mov    %edx,%ecx
0810d86c +0x030:  and    $0x1,%ecx
0810d86f +0x033:  test   %ecx,%ecx
0810d871 +0x035:  je     0810d87b <+0x3f>
0810d873 +0x037:  mov    %al,(%edx)
0810d875 +0x039:  add    $0x1,%edx
0810d878 +0x03c:  sub    $0x1,%ebx
0810d87b +0x03f:  mov    %edx,%ecx
0810d87d +0x041:  and    $0x2,%ecx
0810d880 +0x044:  test   %ecx,%ecx
0810d882 +0x046:  je     0810d88d <+0x51>
0810d884 +0x048:  mov    %ax,(%edx)
0810d887 +0x04b:  add    $0x2,%edx
0810d88a +0x04e:  sub    $0x2,%ebx
0810d88d +0x051:  mov    %ebx,%ecx
0810d88f +0x053:  shr    $0x2,%ecx
0810d892 +0x056:  mov    %edx,%edi
0810d894 +0x058:  rep stos %eax,%es:(%edi)
0810d896 +0x05a:  mov    %edi,%edx
0810d898 +0x05c:  mov    %ebx,%ecx
0810d89a +0x05e:  and    $0x2,%ecx
0810d89d +0x061:  test   %ecx,%ecx
0810d89f +0x063:  je     0810d8a7 <+0x6b>
0810d8a1 +0x065:  mov    %ax,(%edx)
0810d8a4 +0x068:  add    $0x2,%edx
0810d8a7 +0x06b:  mov    %ebx,%ecx
0810d8a9 +0x06d:  and    $0x1,%ecx
0810d8ac +0x070:  test   %ecx,%ecx
0810d8ae +0x072:  je     0810d8b5 <+0x79>
0810d8b0 +0x074:  mov    %al,(%edx)
0810d8b2 +0x076:  add    $0x1,%edx
0810d8b5 +0x079:  lea    -0x36(%ebp),%eax
0810d8b8 +0x07c:  mov    $0x1e,%ebx
0810d8bd +0x081:  mov    $0x0,%edx
0810d8c2 +0x086:  mov    %eax,%ecx
0810d8c4 +0x088:  and    $0x2,%ecx
0810d8c7 +0x08b:  test   %ecx,%ecx
0810d8c9 +0x08d:  je     0810d8d4 <+0x98>
0810d8cb +0x08f:  mov    %dx,(%eax)
0810d8ce +0x092:  add    $0x2,%eax
0810d8d1 +0x095:  sub    $0x2,%ebx
0810d8d4 +0x098:  mov    %ebx,%esi
0810d8d6 +0x09a:  and    $0xfffffffc,%esi
0810d8d9 +0x09d:  mov    $0x0,%ecx
0810d8de +0x0a2:  mov    %edx,(%eax,%ecx,1)
0810d8e1 +0x0a5:  add    $0x4,%ecx
0810d8e4 +0x0a8:  cmp    %esi,%ecx
0810d8e6 +0x0aa:  jb     0810d8de <+0xa2>
0810d8e8 +0x0ac:  add    %ecx,%eax
0810d8ea +0x0ae:  mov    %ebx,%ecx
0810d8ec +0x0b0:  and    $0x2,%ecx
0810d8ef +0x0b3:  test   %ecx,%ecx
0810d8f1 +0x0b5:  je     0810d8f9 <+0xbd>
0810d8f3 +0x0b7:  mov    %dx,(%eax)
0810d8f6 +0x0ba:  add    $0x2,%eax
0810d8f9 +0x0bd:  mov    %ebx,%ecx
0810d8fb +0x0bf:  and    $0x1,%ecx
0810d8fe +0x0c2:  test   %ecx,%ecx
0810d900 +0x0c4:  je     0810d907 <+0xcb>
0810d902 +0x0c6:  mov    %dl,(%eax)
0810d904 +0x0c8:  add    $0x1,%eax
0810d907 +0x0cb:  mov    0x10(%ebp),%eax
0810d90a +0x0ce:  add    $0x30,%eax
0810d90d +0x0d1:  mov    %eax,(%esp)
0810d910 +0x0d4:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0810d915 +0x0d9:  movl   $0x0,0xc(%esp)
0810d91d +0x0e1:  mov    %eax,0x8(%esp)
0810d921 +0x0e5:  movl   $0x4,0x4(%esp)
0810d929 +0x0ed:  movl   $&g_scriptStringManager_,(%esp)
0810d930 +0x0f4:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0810d935 +0x0f9:  movl   $0x1d,0x8(%esp)
0810d93d +0x101:  mov    %eax,0x4(%esp)
0810d941 +0x105:  lea    -0x36(%ebp),%eax
0810d944 +0x108:  mov    %eax,(%esp)
0810d947 +0x10b:  call   0807d8d0 <_init+0x1c8>
0810d94c +0x110:  mov    0x10(%ebp),%eax
0810d94f +0x113:  add    $0x34,%eax
0810d952 +0x116:  mov    %eax,(%esp)
0810d955 +0x119:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0810d95a +0x11e:  movl   $0x0,0xc(%esp)
0810d962 +0x126:  mov    %eax,0x8(%esp)
0810d966 +0x12a:  movl   $0x4,0x4(%esp)
0810d96e +0x132:  movl   $&g_scriptStringManager_,(%esp)
0810d975 +0x139:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0810d97a +0x13e:  movl   $0xff,0x8(%esp)
0810d982 +0x146:  mov    %eax,0x4(%esp)
0810d986 +0x14a:  lea    -0x173(%ebp),%eax
0810d98c +0x150:  mov    %eax,(%esp)
0810d98f +0x153:  call   0807d8d0 <_init+0x1c8>
0810d994 +0x158:  mov    0xc(%ebp),%eax
0810d997 +0x15b:  mov    %eax,(%esp)
0810d99a +0x15e:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0810d99f +0x163:  mov    %eax,%ebx
0810d9a1 +0x165:  mov    0x10(%ebp),%eax
0810d9a4 +0x168:  movzbl 0x2c(%eax),%eax
0810d9a8 +0x16c:  movsbl %al,%edi
0810d9ab +0x16f:  lea    -0x173(%ebp),%eax
0810d9b1 +0x175:  mov    %eax,(%esp)
0810d9b4 +0x178:  call   0807e3b0 <_init+0xca8>
0810d9b9 +0x17d:  mov    %eax,%esi
0810d9bb +0x17f:  mov    0xc(%ebp),%eax
0810d9be +0x182:  mov    %eax,(%esp)
0810d9c1 +0x185:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0810d9c6 +0x18a:  mov    0x10(%ebp),%edx
0810d9c9 +0x18d:  mov    0x28(%edx),%edx
0810d9cc +0x190:  movl   $0x0,0x24(%esp)
0810d9d4 +0x198:  movl   $0x0,0x20(%esp)
0810d9dc +0x1a0:  mov    %ebx,0x1c(%esp)
0810d9e0 +0x1a4:  mov    %edi,0x18(%esp)
0810d9e4 +0x1a8:  mov    %esi,0x14(%esp)
0810d9e8 +0x1ac:  lea    -0x173(%ebp),%ecx
0810d9ee +0x1b2:  mov    %ecx,0x10(%esp)
0810d9f2 +0x1b6:  mov    %eax,0xc(%esp)
0810d9f6 +0x1ba:  mov    %edx,0x8(%esp)
0810d9fa +0x1be:  lea    -0x73(%ebp),%eax
0810d9fd +0x1c1:  mov    %eax,0x4(%esp)
0810da01 +0x1c5:  lea    -0x36(%ebp),%eax
0810da04 +0x1c8:  mov    %eax,(%esp)
0810da07 +0x1cb:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
0810da0c +0x1d0:  mov    $0x0,%eax
0810da11 +0x1d5:  add    $0x19c,%esp
0810da17 +0x1db:  pop    %ebx
0810da18 +0x1dc:  pop    %esi
0810da19 +0x1dd:  pop    %edi
0810da1a +0x1de:  pop    %ebp
0810da1b +0x1df:  ret
```

## 反编译 C

```c
// EventClassify::CEventActionMng::process_gold_mail_send @ 0x810d83c

/* WARNING: Removing unreachable block (ram,0x0810d902) */
/* EventClassify::CEventActionMng::process_gold_mail_send(CUser*, Action_SendMail&) */

undefined4 __thiscall
EventClassify::CEventActionMng::process_gold_mail_send
          (CEventActionMng *this,CUser *param_1,Action_SendMail *param_2)

{
  char *pcVar1;
  Action_SendMail AVar2;
  TCHAR *pTVar3;
  undefined4 uVar4;
  size_t sVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  char local_177;
  char local_176 [255];
  Inven_Item local_77 [2];
  undefined4 local_75;
  char local_3a [42];
  
  bVar11 = 0;
  Inven_Item::Inven_Item(local_77);
  local_75 = 0xffffffff;
  pcVar8 = &local_177;
  uVar9 = 0x100;
  bVar10 = ((uint)pcVar8 & 1) != 0;
  if (bVar10) {
    local_177 = '\0';
    pcVar8 = local_176;
    uVar9 = 0xff;
  }
  if (((uint)pcVar8 & 2) != 0) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8 = pcVar8 + 2;
    uVar9 = uVar9 - 2;
  }
  for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
  }
  if ((uVar9 & 2) != 0) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8 = pcVar8 + 2;
  }
  if (bVar10) {
    *pcVar8 = '\0';
  }
  pcVar8 = local_3a;
  uVar9 = 0x1e;
  bVar10 = ((uint)pcVar8 & 2) != 0;
  if (bVar10) {
    local_3a[0] = '\0';
    local_3a[1] = '\0';
    pcVar8 = local_3a + 2;
    uVar9 = 0x1c;
  }
  uVar7 = 0;
  do {
    pcVar1 = pcVar8 + uVar7;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar7 = uVar7 + 4;
  } while (uVar7 < (uVar9 & 0xfffffffc));
  if (!bVar10) {
    (pcVar8 + uVar7)[0] = '\0';
    (pcVar8 + uVar7)[1] = '\0';
  }
  pTVar3 = toTString((string *)(param_2 + 0x30));
  pcVar8 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,pTVar3,(bool *)0x0
                             );
  strncpy(local_3a,pcVar8,0x1d);
  pTVar3 = toTString((string *)(param_2 + 0x34));
  pcVar8 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,pTVar3,(bool *)0x0
                             );
  strncpy(&local_177,pcVar8,0xff);
  uVar4 = CUser::GetServerGroup(param_1);
  AVar2 = param_2[0x2c];
  sVar5 = strlen(&local_177);
  uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
            (local_3a,local_77,*(undefined4 *)(param_2 + 0x28),uVar6,&local_177,sVar5,
             (int)(char)AVar2,uVar4,0,0);
  return 0;
}
```
