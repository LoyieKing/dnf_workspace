# process_mail_send

`_ZN13EventClassify15CEventActionMng17process_mail_sendEP5CUserR15Action_SendMailR10Inven_ItemPK5CItem`

`EventClassify::CEventActionMng::process_mail_send(CUser*, Action_SendMail&, Inven_Item&, CItem const*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventActionMng` | `0x0810da1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810da1c  _ZN13EventClassify15CEventActionMng17process_mail_sendEP5CUserR15Action_SendMailR10Inven_ItemPK5CItem
#           EventClassify::CEventActionMng::process_mail_send(CUser*, Action_SendMail&, Inven_Item&, CItem const*)
# range [0x0810da1c, 0x0810dc59]
0810da1c +0x000:  push   %ebp
0810da1d +0x001:  mov    %esp,%ebp
0810da1f +0x003:  push   %edi
0810da20 +0x004:  push   %esi
0810da21 +0x005:  push   %ebx
0810da22 +0x006:  sub    $0x17c,%esp
0810da28 +0x00c:  cmpl   $0x0,0x18(%ebp)
0810da2c +0x010:  jne    0810da38 <+0x1c>
0810da2e +0x012:  mov    $0x11,%eax
0810da33 +0x017:  jmp    0810dc4f <+0x233>
0810da38 +0x01c:  lea    -0x152(%ebp),%edx
0810da3e +0x022:  mov    $0x100,%ebx
0810da43 +0x027:  mov    $0x0,%eax
0810da48 +0x02c:  mov    %edx,%ecx
0810da4a +0x02e:  and    $0x2,%ecx
0810da4d +0x031:  test   %ecx,%ecx
0810da4f +0x033:  je     0810da5a <+0x3e>
0810da51 +0x035:  mov    %ax,(%edx)
0810da54 +0x038:  add    $0x2,%edx
0810da57 +0x03b:  sub    $0x2,%ebx
0810da5a +0x03e:  mov    %ebx,%ecx
0810da5c +0x040:  shr    $0x2,%ecx
0810da5f +0x043:  mov    %edx,%edi
0810da61 +0x045:  rep stos %eax,%es:(%edi)
0810da63 +0x047:  mov    %edi,%edx
0810da65 +0x049:  mov    %ebx,%ecx
0810da67 +0x04b:  and    $0x2,%ecx
0810da6a +0x04e:  test   %ecx,%ecx
0810da6c +0x050:  je     0810da74 <+0x58>
0810da6e +0x052:  mov    %ax,(%edx)
0810da71 +0x055:  add    $0x2,%edx
0810da74 +0x058:  mov    %ebx,%ecx
0810da76 +0x05a:  and    $0x1,%ecx
0810da79 +0x05d:  test   %ecx,%ecx
0810da7b +0x05f:  je     0810da82 <+0x66>
0810da7d +0x061:  mov    %al,(%edx)
0810da7f +0x063:  add    $0x1,%edx
0810da82 +0x066:  lea    -0x3a(%ebp),%eax
0810da85 +0x069:  mov    $0x1e,%ebx
0810da8a +0x06e:  mov    $0x0,%edx
0810da8f +0x073:  mov    %eax,%ecx
0810da91 +0x075:  and    $0x2,%ecx
0810da94 +0x078:  test   %ecx,%ecx
0810da96 +0x07a:  je     0810daa1 <+0x85>
0810da98 +0x07c:  mov    %dx,(%eax)
0810da9b +0x07f:  add    $0x2,%eax
0810da9e +0x082:  sub    $0x2,%ebx
0810daa1 +0x085:  mov    %ebx,%esi
0810daa3 +0x087:  and    $0xfffffffc,%esi
0810daa6 +0x08a:  mov    $0x0,%ecx
0810daab +0x08f:  mov    %edx,(%eax,%ecx,1)
0810daae +0x092:  add    $0x4,%ecx
0810dab1 +0x095:  cmp    %esi,%ecx
0810dab3 +0x097:  jb     0810daab <+0x8f>
0810dab5 +0x099:  add    %ecx,%eax
0810dab7 +0x09b:  mov    %ebx,%ecx
0810dab9 +0x09d:  and    $0x2,%ecx
0810dabc +0x0a0:  test   %ecx,%ecx
0810dabe +0x0a2:  je     0810dac6 <+0xaa>
0810dac0 +0x0a4:  mov    %dx,(%eax)
0810dac3 +0x0a7:  add    $0x2,%eax
0810dac6 +0x0aa:  mov    %ebx,%ecx
0810dac8 +0x0ac:  and    $0x1,%ecx
0810dacb +0x0af:  test   %ecx,%ecx
0810dacd +0x0b1:  je     0810dad4 <+0xb8>
0810dacf +0x0b3:  mov    %dl,(%eax)
0810dad1 +0x0b5:  add    $0x1,%eax
0810dad4 +0x0b8:  mov    0x10(%ebp),%eax
0810dad7 +0x0bb:  add    $0x30,%eax
0810dada +0x0be:  mov    %eax,(%esp)
0810dadd +0x0c1:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0810dae2 +0x0c6:  movl   $0x0,0xc(%esp)
0810daea +0x0ce:  mov    %eax,0x8(%esp)
0810daee +0x0d2:  movl   $0x4,0x4(%esp)
0810daf6 +0x0da:  movl   $&g_scriptStringManager_,(%esp)
0810dafd +0x0e1:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0810db02 +0x0e6:  movl   $0x1d,0x8(%esp)
0810db0a +0x0ee:  mov    %eax,0x4(%esp)
0810db0e +0x0f2:  lea    -0x3a(%ebp),%eax
0810db11 +0x0f5:  mov    %eax,(%esp)
0810db14 +0x0f8:  call   0807d8d0 <_init+0x1c8>
0810db19 +0x0fd:  mov    0x10(%ebp),%eax
0810db1c +0x100:  add    $0x34,%eax
0810db1f +0x103:  mov    %eax,(%esp)
0810db22 +0x106:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0810db27 +0x10b:  movl   $0x0,0xc(%esp)
0810db2f +0x113:  mov    %eax,0x8(%esp)
0810db33 +0x117:  movl   $0x4,0x4(%esp)
0810db3b +0x11f:  movl   $&g_scriptStringManager_,(%esp)
0810db42 +0x126:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0810db47 +0x12b:  movl   $0xff,0x8(%esp)
0810db4f +0x133:  mov    %eax,0x4(%esp)
0810db53 +0x137:  lea    -0x152(%ebp),%eax
0810db59 +0x13d:  mov    %eax,(%esp)
0810db5c +0x140:  call   0807d8d0 <_init+0x1c8>
0810db61 +0x145:  mov    0x18(%ebp),%eax
0810db64 +0x148:  mov    (%eax),%eax
0810db66 +0x14a:  add    $0x10,%eax
0810db69 +0x14d:  mov    (%eax),%edx
0810db6b +0x14f:  mov    0x18(%ebp),%eax
0810db6e +0x152:  mov    %eax,(%esp)
0810db71 +0x155:  call   *%edx
0810db73 +0x157:  test   %al,%al
0810db75 +0x159:  je     0810dbd2 <+0x1b6>
0810db77 +0x15b:  lea    -0x52(%ebp),%eax
0810db7a +0x15e:  mov    $0x18,%ebx
0810db7f +0x163:  mov    $0x0,%edx
0810db84 +0x168:  mov    %eax,%ecx
0810db86 +0x16a:  and    $0x2,%ecx
0810db89 +0x16d:  test   %ecx,%ecx
0810db8b +0x16f:  je     0810db96 <+0x17a>
0810db8d +0x171:  mov    %dx,(%eax)
0810db90 +0x174:  add    $0x2,%eax
0810db93 +0x177:  sub    $0x2,%ebx
0810db96 +0x17a:  mov    %ebx,%esi
0810db98 +0x17c:  and    $0xfffffffc,%esi
0810db9b +0x17f:  mov    $0x0,%ecx
0810dba0 +0x184:  mov    %edx,(%eax,%ecx,1)
0810dba3 +0x187:  add    $0x4,%ecx
0810dba6 +0x18a:  cmp    %esi,%ecx
0810dba8 +0x18c:  jb     0810dba0 <+0x184>
0810dbaa +0x18e:  add    %ecx,%eax
0810dbac +0x190:  mov    %ebx,%ecx
0810dbae +0x192:  and    $0x2,%ecx
0810dbb1 +0x195:  test   %ecx,%ecx
0810dbb3 +0x197:  je     0810dbbb <+0x19f>
0810dbb5 +0x199:  mov    %dx,(%eax)
0810dbb8 +0x19c:  add    $0x2,%eax
0810dbbb +0x19f:  mov    %ebx,%ecx
0810dbbd +0x1a1:  and    $0x1,%ecx
0810dbc0 +0x1a4:  test   %ecx,%ecx
0810dbc2 +0x1a6:  je     0810dbc9 <+0x1ad>
0810dbc4 +0x1a8:  mov    %dl,(%eax)
0810dbc6 +0x1aa:  add    $0x1,%eax
0810dbc9 +0x1ad:  movl   $0x0,-0x1c(%ebp)
0810dbd0 +0x1b4:  jmp    0810dc4a <+0x22e>
0810dbd2 +0x1b6:  mov    0xc(%ebp),%eax
0810dbd5 +0x1b9:  mov    %eax,(%esp)
0810dbd8 +0x1bc:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0810dbdd +0x1c1:  mov    %eax,%ebx
0810dbdf +0x1c3:  mov    0x10(%ebp),%eax
0810dbe2 +0x1c6:  movzbl 0x2c(%eax),%eax
0810dbe6 +0x1ca:  movsbl %al,%edi
0810dbe9 +0x1cd:  lea    -0x152(%ebp),%eax
0810dbef +0x1d3:  mov    %eax,(%esp)
0810dbf2 +0x1d6:  call   0807e3b0 <_init+0xca8>
0810dbf7 +0x1db:  mov    %eax,%esi
0810dbf9 +0x1dd:  mov    0xc(%ebp),%eax
0810dbfc +0x1e0:  mov    %eax,(%esp)
0810dbff +0x1e3:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0810dc04 +0x1e8:  mov    0x10(%ebp),%edx
0810dc07 +0x1eb:  mov    0x28(%edx),%edx
0810dc0a +0x1ee:  movl   $0x0,0x24(%esp)
0810dc12 +0x1f6:  movl   $0x0,0x20(%esp)
0810dc1a +0x1fe:  mov    %ebx,0x1c(%esp)
0810dc1e +0x202:  mov    %edi,0x18(%esp)
0810dc22 +0x206:  mov    %esi,0x14(%esp)
0810dc26 +0x20a:  lea    -0x152(%ebp),%ecx
0810dc2c +0x210:  mov    %ecx,0x10(%esp)
0810dc30 +0x214:  mov    %eax,0xc(%esp)
0810dc34 +0x218:  mov    %edx,0x8(%esp)
0810dc38 +0x21c:  mov    0x14(%ebp),%eax
0810dc3b +0x21f:  mov    %eax,0x4(%esp)
0810dc3f +0x223:  lea    -0x3a(%ebp),%eax
0810dc42 +0x226:  mov    %eax,(%esp)
0810dc45 +0x229:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
0810dc4a +0x22e:  mov    $0x0,%eax
0810dc4f +0x233:  add    $0x17c,%esp
0810dc55 +0x239:  pop    %ebx
0810dc56 +0x23a:  pop    %esi
0810dc57 +0x23b:  pop    %edi
0810dc58 +0x23c:  pop    %ebp
0810dc59 +0x23d:  ret
```

## 反编译 C

```c
// EventClassify::CEventActionMng::process_mail_send @ 0x810da1c

/* WARNING: Removing unreachable block (ram,0x0810dacf) */
/* WARNING: Removing unreachable block (ram,0x0810da7d) */
/* WARNING: Removing unreachable block (ram,0x0810dbc4) */
/* EventClassify::CEventActionMng::process_mail_send(CUser*, Action_SendMail&, Inven_Item&, CItem
   const*) */

undefined4 __thiscall
EventClassify::CEventActionMng::process_mail_send
          (CEventActionMng *this,CUser *param_1,Action_SendMail *param_2,Inven_Item *param_3,
          CItem *param_4)

{
  char *pcVar1;
  Action_SendMail AVar2;
  char cVar3;
  undefined4 uVar4;
  TCHAR *pTVar5;
  char *pcVar6;
  undefined1 *puVar7;
  size_t sVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  char local_156 [256];
  undefined1 local_56 [2];
  undefined1 local_54 [22];
  char local_3e [46];
  
  if (param_4 == (CItem *)0x0) {
    uVar4 = 0x11;
  }
  else {
    pcVar6 = local_156;
    uVar11 = 0x100;
    bVar12 = ((uint)pcVar6 & 2) != 0;
    if (bVar12) {
      local_156[0] = '\0';
      local_156[1] = '\0';
      pcVar6 = local_156 + 2;
      uVar11 = 0xfe;
    }
    for (uVar11 = uVar11 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + 4;
    }
    if (bVar12) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
    }
    pcVar6 = local_3e;
    uVar11 = 0x1e;
    bVar12 = ((uint)pcVar6 & 2) != 0;
    if (bVar12) {
      local_3e[0] = '\0';
      local_3e[1] = '\0';
      pcVar6 = local_3e + 2;
      uVar11 = 0x1c;
    }
    uVar10 = 0;
    do {
      pcVar1 = pcVar6 + uVar10;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar10 = uVar10 + 4;
    } while (uVar10 < (uVar11 & 0xfffffffc));
    if (!bVar12) {
      (pcVar6 + uVar10)[0] = '\0';
      (pcVar6 + uVar10)[1] = '\0';
    }
    pTVar5 = toTString((string *)(param_2 + 0x30));
    pcVar6 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,pTVar5,
                                (bool *)0x0);
    strncpy(local_3e,pcVar6,0x1d);
    pTVar5 = toTString((string *)(param_2 + 0x34));
    pcVar6 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,pTVar5,
                                (bool *)0x0);
    strncpy(local_156,pcVar6,0xff);
    cVar3 = (**(code **)(*(int *)param_4 + 0x10))(param_4);
    if (cVar3 == '\0') {
      uVar4 = CUser::GetServerGroup(param_1);
      AVar2 = param_2[0x2c];
      sVar8 = strlen(local_156);
      uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (local_3e,param_3,*(undefined4 *)(param_2 + 0x28),uVar9,local_156,sVar8,
                 (int)(char)AVar2,uVar4,0,0);
    }
    else {
      puVar7 = local_56;
      uVar11 = 0x18;
      bVar12 = ((uint)puVar7 & 2) != 0;
      if (bVar12) {
        puVar7 = local_54;
        uVar11 = 0x16;
      }
      uVar10 = 0;
      do {
        *(undefined4 *)(puVar7 + uVar10) = 0;
        uVar10 = uVar10 + 4;
      } while (uVar10 < (uVar11 & 0xfffffffc));
      if (bVar12) {
        *(undefined2 *)(puVar7 + uVar10) = 0;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}
```
