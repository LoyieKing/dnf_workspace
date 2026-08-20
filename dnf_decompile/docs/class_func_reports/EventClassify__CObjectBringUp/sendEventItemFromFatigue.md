# sendEventItemFromFatigue

`_ZN13EventClassify14CObjectBringUp24sendEventItemFromFatigueEP5CUserj`

`EventClassify::CObjectBringUp::sendEventItemFromFatigue(CUser*, unsigned int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CObjectBringUp` | `0x08110386` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08110386  _ZN13EventClassify14CObjectBringUp24sendEventItemFromFatigueEP5CUserj
#           EventClassify::CObjectBringUp::sendEventItemFromFatigue(CUser*, unsigned int)
# range [0x08110386, 0x0811056d]
08110386 +0x000:  push   %ebp
08110387 +0x001:  mov    %esp,%ebp
08110389 +0x003:  push   %esi
0811038a +0x004:  push   %ebx
0811038b +0x005:  sub    $0x40,%esp
0811038e +0x008:  mov    0x8(%ebp),%eax
08110391 +0x00b:  mov    0x1c(%eax),%eax
08110394 +0x00e:  add    $0x1c,%eax
08110397 +0x011:  mov    %eax,(%esp)
0811039a +0x014:  call   08111fb0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x14c2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x14c2
0811039f +0x019:  test   %al,%al
081103a1 +0x01b:  jne    08110562 <+0x1dc>
081103a7 +0x021:  mov    0xc(%ebp),%eax
081103aa +0x024:  mov    %eax,(%esp)
081103ad +0x027:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
081103b2 +0x02c:  movzwl %ax,%eax
081103b5 +0x02f:  sub    0x10(%ebp),%eax
081103b8 +0x032:  mov    %eax,-0x10(%ebp)
081103bb +0x035:  mov    0x8(%ebp),%eax
081103be +0x038:  mov    0x1c(%eax),%eax
081103c1 +0x03b:  lea    0x1c(%eax),%edx
081103c4 +0x03e:  lea    -0x1c(%ebp),%eax
081103c7 +0x041:  mov    %edx,0x4(%esp)
081103cb +0x045:  mov    %eax,(%esp)
081103ce +0x048:  call   08111ff4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1506>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1506
081103d3 +0x04d:  sub    $0x4,%esp
081103d6 +0x050:  jmp    0811052b <+0x1a5>
081103db +0x055:  lea    -0x1c(%ebp),%eax
081103de +0x058:  mov    %eax,(%esp)
081103e1 +0x05b:  call   08112080 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1592>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1592
081103e6 +0x060:  mov    %eax,%edx
081103e8 +0x062:  lea    -0x20(%ebp),%eax
081103eb +0x065:  mov    %edx,0x4(%esp)
081103ef +0x069:  mov    %eax,(%esp)
081103f2 +0x06c:  call   080e384e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x15f4>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x15f4
081103f7 +0x071:  sub    $0x4,%esp
081103fa +0x074:  jmp    081104e7 <+0x161>
081103ff +0x079:  lea    -0x20(%ebp),%eax
08110402 +0x07c:  mov    %eax,(%esp)
08110405 +0x07f:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
0811040a +0x084:  mov    (%eax),%eax
0811040c +0x086:  cmp    -0x10(%ebp),%eax
0811040f +0x089:  jbe    08110437 <+0xb1>
08110411 +0x08b:  lea    -0x20(%ebp),%eax
08110414 +0x08e:  mov    %eax,(%esp)
08110417 +0x091:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
0811041c +0x096:  mov    (%eax),%ebx
0811041e +0x098:  mov    0xc(%ebp),%eax
08110421 +0x09b:  mov    %eax,(%esp)
08110424 +0x09e:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
08110429 +0x0a3:  movzwl %ax,%eax
0811042c +0x0a6:  cmp    %eax,%ebx
0811042e +0x0a8:  ja     08110437 <+0xb1>
08110430 +0x0aa:  mov    $0x1,%eax
08110435 +0x0af:  jmp    0811043c <+0xb6>
08110437 +0x0b1:  mov    $0x0,%eax
0811043c +0x0b6:  test   %al,%al
0811043e +0x0b8:  je     081104dc <+0x156>
08110444 +0x0be:  lea    -0x1c(%ebp),%eax
08110447 +0x0c1:  mov    %eax,(%esp)
0811044a +0x0c4:  call   08112080 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1592>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1592
0811044f +0x0c9:  add    $0xc,%eax
08110452 +0x0cc:  movl   $0x1,0xc(%esp)
0811045a +0x0d4:  mov    %eax,0x8(%esp)
0811045e +0x0d8:  mov    0xc(%ebp),%eax
08110461 +0x0db:  mov    %eax,0x4(%esp)
08110465 +0x0df:  lea    -0x21(%ebp),%eax
08110468 +0x0e2:  mov    %eax,(%esp)
0811046b +0x0e5:  call   0810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>  ; EventClassify::CEventActionMng::process_action_send_mail(CUser*, Action_SendMail&, bool)
08110470 +0x0ea:  mov    %eax,-0xc(%ebp)
08110473 +0x0ed:  cmpl   $0x0,-0xc(%ebp)
08110477 +0x0f1:  je     081104dc <+0x156>
08110479 +0x0f3:  lea    -0x1c(%ebp),%eax
0811047c +0x0f6:  mov    %eax,(%esp)
0811047f +0x0f9:  call   08112080 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1592>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1592
08110484 +0x0fe:  mov    0x2c(%eax),%esi
08110487 +0x101:  mov    0xc(%ebp),%eax
0811048a +0x104:  mov    %eax,(%esp)
0811048d +0x107:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08110492 +0x10c:  mov    %eax,%ebx
08110494 +0x10e:  mov    0xc(%ebp),%eax
08110497 +0x111:  mov    %eax,(%esp)
0811049a +0x114:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0811049f +0x119:  mov    %esi,0x1c(%esp)
081104a3 +0x11d:  mov    %ebx,0x18(%esp)
081104a7 +0x121:  mov    %eax,0x14(%esp)
081104ab +0x125:  movl   $"CObjectBringUp::sendEventItemFromFatigue(m_id:%d, charac_no:%d, reward:%d)",0x10(%esp)
081104b3 +0x12d:  movl   $0x803,0xc(%esp)
081104bb +0x135:  movl   $&_ZZN13EventClassify14CObjectBringUp24sendEventItemFromFatigueEP5CUserjE19__PRETTY_FUNCTION__,0x8(%esp)
081104c3 +0x13d:  movl   $"EventClassify.cpp",0x4(%esp)
081104cb +0x145:  movl   $0x1,(%esp)
081104d2 +0x14c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081104d7 +0x151:  jmp    08110563 <+0x1dd>
081104dc +0x156:  lea    -0x20(%ebp),%eax
081104df +0x159:  mov    %eax,(%esp)
081104e2 +0x15c:  call   0811131c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82e
081104e7 +0x161:  lea    -0x1c(%ebp),%eax
081104ea +0x164:  mov    %eax,(%esp)
081104ed +0x167:  call   08112080 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1592>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1592
081104f2 +0x16c:  mov    %eax,%edx
081104f4 +0x16e:  lea    -0x14(%ebp),%eax
081104f7 +0x171:  mov    %edx,0x4(%esp)
081104fb +0x175:  mov    %eax,(%esp)
081104fe +0x178:  call   080e2a8a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x830>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x830
08110503 +0x17d:  sub    $0x4,%esp
08110506 +0x180:  lea    -0x14(%ebp),%eax
08110509 +0x183:  mov    %eax,0x4(%esp)
0811050d +0x187:  lea    -0x20(%ebp),%eax
08110510 +0x18a:  mov    %eax,(%esp)
08110513 +0x18d:  call   081112f0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x802>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x802
08110518 +0x192:  test   %al,%al
0811051a +0x194:  jne    081103ff <+0x79>
08110520 +0x19a:  lea    -0x1c(%ebp),%eax
08110523 +0x19d:  mov    %eax,(%esp)
08110526 +0x1a0:  call   0811206a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x157c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x157c
0811052b +0x1a5:  mov    0x8(%ebp),%eax
0811052e +0x1a8:  mov    0x1c(%eax),%eax
08110531 +0x1ab:  lea    0x1c(%eax),%edx
08110534 +0x1ae:  lea    -0x18(%ebp),%eax
08110537 +0x1b1:  mov    %edx,0x4(%esp)
0811053b +0x1b5:  mov    %eax,(%esp)
0811053e +0x1b8:  call   08112018 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x152a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x152a
08110543 +0x1bd:  sub    $0x4,%esp
08110546 +0x1c0:  lea    -0x18(%ebp),%eax
08110549 +0x1c3:  mov    %eax,0x4(%esp)
0811054d +0x1c7:  lea    -0x1c(%ebp),%eax
08110550 +0x1ca:  mov    %eax,(%esp)
08110553 +0x1cd:  call   0811203e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1550>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1550
08110558 +0x1d2:  test   %al,%al
0811055a +0x1d4:  jne    081103db <+0x55>
08110560 +0x1da:  jmp    08110563 <+0x1dd>
08110562 +0x1dc:  nop
08110563 +0x1dd:  lea    -0x8(%ebp),%esp
08110566 +0x1e0:  add    $0x0,%esp
08110569 +0x1e3:  pop    %ebx
0811056a +0x1e4:  pop    %esi
0811056b +0x1e5:  pop    %ebp
0811056c +0x1e6:  ret
0811056d +0x1e7:  nop
```

## 反编译 C

```c
// EventClassify::CObjectBringUp::sendEventItemFromFatigue @ 0x8110386

/* EventClassify::CObjectBringUp::sendEventItemFromFatigue(CUser*, unsigned int) */

void __thiscall
EventClassify::CObjectBringUp::sendEventItemFromFatigue
          (CObjectBringUp *this,CUser *param_1,uint param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  CEventActionMng local_25;
  __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
  local_24 [4];
  __normal_iterator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>*,std::vector<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>,std::allocator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator local_18 [4];
  uint local_14;
  int local_10;
  
  cVar2 = std::
          vector<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>,std::allocator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>>>
          ::empty();
  if (cVar2 == '\0') {
    uVar4 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)param_1);
    local_14 = (uVar4 & 0xffff) - param_2;
    std::
    vector<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>,std::allocator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>>>
    ::begin();
    while( true ) {
      std::
      vector<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>,std::allocator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>>>
      ::end();
      bVar3 = __gnu_cxx::operator!=(local_20,local_1c);
      if (!bVar3) break;
      __gnu_cxx::
      __normal_iterator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>*,std::vector<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>,std::allocator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>>>>
      ::operator->(local_20);
      std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
      while( true ) {
        __gnu_cxx::
        __normal_iterator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>*,std::vector<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>,std::allocator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>>>>
        ::operator->(local_20);
        std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
        bVar3 = __gnu_cxx::operator!=(local_24,local_18);
        if (!bVar3) break;
        puVar5 = (uint *)__gnu_cxx::
                         __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                         ::operator*(local_24);
        if (local_14 < *puVar5) {
          puVar5 = (uint *)__gnu_cxx::
                           __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                           ::operator*(local_24);
          uVar4 = *puVar5;
          uVar6 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)param_1);
          if ((uVar6 & 0xffff) < uVar4) goto LAB_08110437;
          bVar3 = true;
        }
        else {
LAB_08110437:
          bVar3 = false;
        }
        if (bVar3) {
          iVar7 = __gnu_cxx::
                  __normal_iterator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>*,std::vector<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>,std::allocator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>>>>
                  ::operator->(local_20);
          local_10 = CEventActionMng::process_action_send_mail
                               (&local_25,param_1,(Action_SendMail *)(iVar7 + 0xc),true);
          if (local_10 != 0) {
            iVar7 = __gnu_cxx::
                    __normal_iterator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>*,std::vector<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>,std::allocator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>>>>
                    ::operator->(local_20);
            uVar1 = *(undefined4 *)(iVar7 + 0x2c);
            uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            uVar9 = CUser::get_acc_id(param_1);
            LogManager::logFormat
                      (1,"EventClassify.cpp",
                       "void EventClassify::CObjectBringUp::sendEventItemFromFatigue(CUser*, unsigned int)"
                       ,0x803,
                       "CObjectBringUp::sendEventItemFromFatigue(m_id:%d, charac_no:%d, reward:%d)",
                       uVar9,uVar8,uVar1);
            return;
          }
        }
        __gnu_cxx::
        __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
        operator++(local_24);
      }
      __gnu_cxx::
      __normal_iterator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>*,std::vector<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>,std::allocator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>>>>
      ::operator++(local_20);
    }
  }
  return;
}
```
