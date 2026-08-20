# registRanker

`_ZN8WongWork18CDeathTowerRanking12registRankerEjjPK30stDeathTowerRecordMemberInfo_tjj`

`WongWork::CDeathTowerRanking::registRanker(unsigned int, unsigned int, stDeathTowerRecordMemberInfo_t const*, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTowerRanking` | `0x08468614` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08468614  _ZN8WongWork18CDeathTowerRanking12registRankerEjjPK30stDeathTowerRecordMemberInfo_tjj
#           WongWork::CDeathTowerRanking::registRanker(unsigned int, unsigned int, stDeathTowerRecordMemberInfo_t const*, unsigned int, unsigned int)
# range [0x08468614, 0x08468913]
08468614 +0x000:  push   %ebp
08468615 +0x001:  mov    %esp,%ebp
08468617 +0x003:  push   %edi
08468618 +0x004:  push   %esi
08468619 +0x005:  push   %ebx
0846861a +0x006:  sub    $0xdc,%esp
08468620 +0x00c:  mov    0x10(%ebp),%eax
08468623 +0x00f:  cmp    $0x5,%eax
08468626 +0x012:  ja     0846882f <+0x21b>
0846862c +0x018:  mov    0xc(%ebp),%edx
0846862f +0x01b:  mov    0x10(%ebp),%ecx
08468632 +0x01e:  mov    0x8(%ebp),%eax
08468635 +0x021:  imul   $0x98,%ecx,%ecx
0846863b +0x027:  imul   $0x390,%edx,%edx
08468641 +0x02d:  lea    (%ecx,%edx,1),%edx
08468644 +0x030:  add    %edx,%eax
08468646 +0x032:  add    $0x90,%eax
0846864b +0x037:  movzbl (%eax),%eax
0846864e +0x03a:  test   %al,%al
08468650 +0x03c:  je     084686bc <+0xa8>
08468652 +0x03e:  mov    0xc(%ebp),%eax
08468655 +0x041:  mov    0x10(%ebp),%edx
08468658 +0x044:  imul   $0x98,%edx,%edx
0846865e +0x04a:  imul   $0x390,%eax,%eax
08468664 +0x050:  lea    (%edx,%eax,1),%eax
08468667 +0x053:  sub    $0xffffff80,%eax
0846866a +0x056:  add    0x8(%ebp),%eax
0846866d +0x059:  lea    0xc(%eax),%ecx
08468670 +0x05c:  mov    0xc(%ebp),%ebx
08468673 +0x05f:  mov    0xc(%ebp),%edx
08468676 +0x062:  mov    0x10(%ebp),%esi
08468679 +0x065:  mov    0x8(%ebp),%eax
0846867c +0x068:  imul   $0x98,%esi,%esi
08468682 +0x06e:  imul   $0x390,%edx,%edx
08468688 +0x074:  lea    (%esi,%edx,1),%edx
0846868b +0x077:  add    %edx,%eax
0846868d +0x079:  add    $0x88,%eax
08468692 +0x07e:  mov    (%eax),%edx
08468694 +0x080:  mov    %edx,%eax
08468696 +0x082:  add    %eax,%eax
08468698 +0x084:  add    %edx,%eax
0846869a +0x086:  shl    $0x3,%eax
0846869d +0x089:  imul   $0x12c0,%ebx,%edx
084686a3 +0x08f:  add    %edx,%eax
084686a5 +0x091:  add    $0x1290,%eax
084686aa +0x096:  add    0x8(%ebp),%eax
084686ad +0x099:  add    $0x8,%eax
084686b0 +0x09c:  mov    %ecx,0x4(%esp)
084686b4 +0x0a0:  mov    %eax,(%esp)
084686b7 +0x0a3:  call   0846a05a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x73d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x73d
084686bc +0x0a8:  movl   $0x0,-0x1c(%ebp)
084686c3 +0x0af:  jmp    084687ac <+0x198>
084686c8 +0x0b4:  mov    -0x1c(%ebp),%eax
084686cb +0x0b7:  imul   $0x17,%eax,%eax
084686ce +0x0ba:  add    0x14(%ebp),%eax
084686d1 +0x0bd:  mov    %eax,%ecx
084686d3 +0x0bf:  mov    0xc(%ebp),%ebx
084686d6 +0x0c2:  mov    0x10(%ebp),%esi
084686d9 +0x0c5:  mov    -0x1c(%ebp),%eax
084686dc +0x0c8:  add    %eax,%eax
084686de +0x0ca:  mov    %eax,%edx
084686e0 +0x0cc:  shl    $0x4,%edx
084686e3 +0x0cf:  sub    %eax,%edx
084686e5 +0x0d1:  imul   $0x98,%esi,%eax
084686eb +0x0d7:  add    %eax,%edx
084686ed +0x0d9:  imul   $0x390,%ebx,%eax
084686f3 +0x0df:  lea    (%edx,%eax,1),%eax
084686f6 +0x0e2:  add    0x8(%ebp),%eax
084686f9 +0x0e5:  add    $0x4,%eax
084686fc +0x0e8:  movl   $0x1e,0x8(%esp)
08468704 +0x0f0:  mov    %ecx,0x4(%esp)
08468708 +0x0f4:  mov    %eax,(%esp)
0846870b +0x0f7:  call   0807d8d0 <_init+0x1c8>
08468710 +0x0fc:  mov    0xc(%ebp),%ebx
08468713 +0x0ff:  mov    0x10(%ebp),%esi
08468716 +0x102:  mov    -0x1c(%ebp),%edx
08468719 +0x105:  mov    -0x1c(%ebp),%eax
0846871c +0x108:  imul   $0x17,%eax,%eax
0846871f +0x10b:  add    0x14(%ebp),%eax
08468722 +0x10e:  movzbl 0x14(%eax),%eax
08468726 +0x112:  mov    0x8(%ebp),%ecx
08468729 +0x115:  imul   $0x98,%esi,%esi
0846872f +0x11b:  imul   $0x390,%ebx,%ebx
08468735 +0x121:  lea    (%esi,%ebx,1),%ebx
08468738 +0x124:  add    %ebx,%ecx
0846873a +0x126:  lea    (%ecx,%edx,1),%edx
0846873d +0x129:  add    $0x70,%edx
08468740 +0x12c:  mov    %al,0xc(%edx)
08468743 +0x12f:  mov    0xc(%ebp),%ebx
08468746 +0x132:  mov    0x10(%ebp),%esi
08468749 +0x135:  mov    -0x1c(%ebp),%edx
0846874c +0x138:  mov    -0x1c(%ebp),%eax
0846874f +0x13b:  imul   $0x17,%eax,%eax
08468752 +0x13e:  add    0x14(%ebp),%eax
08468755 +0x141:  movzbl 0x15(%eax),%eax
08468759 +0x145:  mov    0x8(%ebp),%ecx
0846875c +0x148:  imul   $0x98,%esi,%esi
08468762 +0x14e:  imul   $0x390,%ebx,%ebx
08468768 +0x154:  lea    (%esi,%ebx,1),%ebx
0846876b +0x157:  add    %ebx,%ecx
0846876d +0x159:  lea    (%ecx,%edx,1),%edx
08468770 +0x15c:  sub    $0xffffff80,%edx
08468773 +0x15f:  mov    %al,(%edx)
08468775 +0x161:  mov    0xc(%ebp),%ebx
08468778 +0x164:  mov    0x10(%ebp),%esi
0846877b +0x167:  mov    -0x1c(%ebp),%edx
0846877e +0x16a:  mov    -0x1c(%ebp),%eax
08468781 +0x16d:  imul   $0x17,%eax,%eax
08468784 +0x170:  add    0x14(%ebp),%eax
08468787 +0x173:  movzbl 0x16(%eax),%eax
0846878b +0x177:  mov    0x8(%ebp),%ecx
0846878e +0x17a:  imul   $0x98,%esi,%esi
08468794 +0x180:  imul   $0x390,%ebx,%ebx
0846879a +0x186:  lea    (%esi,%ebx,1),%ebx
0846879d +0x189:  add    %ebx,%ecx
0846879f +0x18b:  lea    (%ecx,%edx,1),%edx
084687a2 +0x18e:  sub    $0xffffff80,%edx
084687a5 +0x191:  mov    %al,0x4(%edx)
084687a8 +0x194:  addl   $0x1,-0x1c(%ebp)
084687ac +0x198:  mov    0x8(%ebp),%eax
084687af +0x19b:  mov    0x70f0(%eax),%eax
084687b5 +0x1a1:  cmp    -0x1c(%ebp),%eax
084687b8 +0x1a4:  seta   %al
084687bb +0x1a7:  test   %al,%al
084687bd +0x1a9:  jne    084686c8 <+0xb4>
084687c3 +0x1af:  mov    0xc(%ebp),%edx
084687c6 +0x1b2:  mov    0x10(%ebp),%ecx
084687c9 +0x1b5:  mov    0x8(%ebp),%eax
084687cc +0x1b8:  imul   $0x98,%ecx,%ecx
084687d2 +0x1be:  imul   $0x390,%edx,%edx
084687d8 +0x1c4:  lea    (%ecx,%edx,1),%edx
084687db +0x1c7:  add    %edx,%eax
084687dd +0x1c9:  lea    0x88(%eax),%edx
084687e3 +0x1cf:  mov    0x18(%ebp),%eax
084687e6 +0x1d2:  mov    %eax,(%edx)
084687e8 +0x1d4:  mov    0xc(%ebp),%ecx
084687eb +0x1d7:  mov    0x10(%ebp),%ebx
084687ee +0x1da:  mov    0x1c(%ebp),%eax
084687f1 +0x1dd:  mov    0x8(%ebp),%edx
084687f4 +0x1e0:  imul   $0x98,%ebx,%ebx
084687fa +0x1e6:  imul   $0x390,%ecx,%ecx
08468800 +0x1ec:  lea    (%ebx,%ecx,1),%ecx
08468803 +0x1ef:  add    %ecx,%edx
08468805 +0x1f1:  add    $0x8c,%edx
0846880b +0x1f7:  mov    %eax,(%edx)
0846880d +0x1f9:  mov    0xc(%ebp),%edx
08468810 +0x1fc:  mov    0x10(%ebp),%ecx
08468813 +0x1ff:  mov    0x8(%ebp),%eax
08468816 +0x202:  imul   $0x98,%ecx,%ecx
0846881c +0x208:  imul   $0x390,%edx,%edx
08468822 +0x20e:  lea    (%ecx,%edx,1),%edx
08468825 +0x211:  add    %edx,%eax
08468827 +0x213:  add    $0x90,%eax
0846882c +0x218:  movb   $0x1,(%eax)
0846882f +0x21b:  lea    -0x24(%ebp),%eax
08468832 +0x21e:  lea    0x10(%ebp),%edx
08468835 +0x221:  mov    %edx,0x8(%esp)
08468839 +0x225:  lea    0x1c(%ebp),%edx
0846883c +0x228:  mov    %edx,0x4(%esp)
08468840 +0x22c:  mov    %eax,(%esp)
08468843 +0x22f:  call   08395a64 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25504>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25504
08468848 +0x234:  sub    $0x4,%esp
0846884b +0x237:  lea    -0x24(%ebp),%eax
0846884e +0x23a:  mov    %eax,0x4(%esp)
08468852 +0x23e:  lea    -0x2c(%ebp),%eax
08468855 +0x241:  mov    %eax,(%esp)
08468858 +0x244:  call   08395aa2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25542>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25542
0846885d +0x249:  mov    0xc(%ebp),%ecx
08468860 +0x24c:  mov    0x18(%ebp),%edx
08468863 +0x24f:  mov    %edx,%eax
08468865 +0x251:  add    %eax,%eax
08468867 +0x253:  add    %edx,%eax
08468869 +0x255:  shl    $0x3,%eax
0846886c +0x258:  imul   $0x12c0,%ecx,%edx
08468872 +0x25e:  add    %edx,%eax
08468874 +0x260:  add    $0x1290,%eax
08468879 +0x265:  add    0x8(%ebp),%eax
0846887c +0x268:  lea    0x8(%eax),%ecx
0846887f +0x26b:  lea    -0x34(%ebp),%eax
08468882 +0x26e:  lea    -0x2c(%ebp),%edx
08468885 +0x271:  mov    %edx,0x8(%esp)
08468889 +0x275:  mov    %ecx,0x4(%esp)
0846888d +0x279:  mov    %eax,(%esp)
08468890 +0x27c:  call   080e268c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x432>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x432
08468895 +0x281:  sub    $0x4,%esp
08468898 +0x284:  movzbl -0x30(%ebp),%eax
0846889c +0x288:  xor    $0x1,%eax
0846889f +0x28b:  test   %al,%al
084688a1 +0x28d:  je     084688b4 <+0x2a0>
084688a3 +0x28f:  lea    -0x34(%ebp),%eax
084688a6 +0x292:  mov    %eax,(%esp)
084688a9 +0x295:  call   080e26b8 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x45e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x45e
084688ae +0x29a:  mov    0x10(%ebp),%edx
084688b1 +0x29d:  mov    %edx,0x4(%eax)
084688b4 +0x2a0:  lea    -0xcc(%ebp),%eax
084688ba +0x2a6:  mov    %eax,(%esp)
084688bd +0x2a9:  call   082a76c0 <_GLOBAL__I__ZN4CLog5this_E+0x3ae7>  ; global constructors keyed to CLog::this_+0x3ae7
084688c2 +0x2ae:  mov    0x18(%ebp),%eax
084688c5 +0x2b1:  mov    %eax,-0x44(%ebp)
084688c8 +0x2b4:  mov    0x1c(%ebp),%eax
084688cb +0x2b7:  mov    %eax,-0x40(%ebp)
084688ce +0x2ba:  mov    0x8(%ebp),%eax
084688d1 +0x2bd:  lea    0x7058(%eax),%edx
084688d7 +0x2c3:  lea    -0xcc(%ebp),%eax
084688dd +0x2c9:  mov    %eax,0x4(%esp)
084688e1 +0x2cd:  mov    %edx,(%esp)
084688e4 +0x2d0:  call   08469ce4 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x3c7>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x3c7
084688e9 +0x2d5:  test   %al,%al
084688eb +0x2d7:  je     08468909 <+0x2f5>
084688ed +0x2d9:  mov    0x8(%ebp),%eax
084688f0 +0x2dc:  lea    0x7058(%eax),%ebx
084688f6 +0x2e2:  lea    -0xcc(%ebp),%edx
084688fc +0x2e8:  mov    $0x26,%eax
08468901 +0x2ed:  mov    %ebx,%edi
08468903 +0x2ef:  mov    %edx,%esi
08468905 +0x2f1:  mov    %eax,%ecx
08468907 +0x2f3:  rep movsl %ds:(%esi),%es:(%edi)
08468909 +0x2f5:  lea    -0xc(%ebp),%esp
0846890c +0x2f8:  add    $0x0,%esp
0846890f +0x2fb:  pop    %ebx
08468910 +0x2fc:  pop    %esi
08468911 +0x2fd:  pop    %edi
08468912 +0x2fe:  pop    %ebp
08468913 +0x2ff:  ret
```

## 反编译 C

```c
// WongWork::CDeathTowerRanking::registRanker @ 0x8468614

/* WongWork::CDeathTowerRanking::registRanker(unsigned int, unsigned int,
   stDeathTowerRecordMemberInfo_t const*, unsigned int, unsigned int) */

void __thiscall
WongWork::CDeathTowerRanking::registRanker
          (CDeathTowerRanking *this,uint param_1,uint param_2,
          stDeathTowerRecordMemberInfo_t *param_3,uint param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  stBestRecord_t *psVar3;
  CDeathTowerRanking *pCVar4;
  byte bVar5;
  stBestRecord_t local_d0 [136];
  uint local_48;
  uint local_44;
  _Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> local_38 [4];
  char local_34;
  pair<unsigned_int_const,unsigned_int> local_30 [8];
  uint local_28 [2];
  uint local_20;
  
  bVar5 = 0;
  if (param_2 < 6) {
    if (this[param_2 * 0x98 + param_1 * 0x390 + 0x90] != (CDeathTowerRanking)0x0) {
      std::
      map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
      ::erase((uint *)(this + *(int *)(this + param_2 * 0x98 + param_1 * 0x390 + 0x88) * 0x18 +
                              param_1 * 0x12c0 + 0x1298));
    }
    for (local_20 = 0; local_20 < *(uint *)(this + 0x70f0); local_20 = local_20 + 1) {
      strncpy((char *)(this + local_20 * 0x1e + param_2 * 0x98 + param_1 * 0x390 + 4),
              (char *)(param_3 + local_20 * 0x17),0x1e);
      this[local_20 + param_2 * 0x98 + param_1 * 0x390 + 0x7c] =
           *(CDeathTowerRanking *)(param_3 + local_20 * 0x17 + 0x14);
      this[local_20 + param_2 * 0x98 + param_1 * 0x390 + 0x80] =
           *(CDeathTowerRanking *)(param_3 + local_20 * 0x17 + 0x15);
      this[local_20 + param_2 * 0x98 + param_1 * 0x390 + 0x84] =
           *(CDeathTowerRanking *)(param_3 + local_20 * 0x17 + 0x16);
    }
    *(uint *)(this + param_2 * 0x98 + param_1 * 0x390 + 0x88) = param_4;
    *(uint *)(this + param_2 * 0x98 + param_1 * 0x390 + 0x8c) = param_5;
    this[param_2 * 0x98 + param_1 * 0x390 + 0x90] = (CDeathTowerRanking)0x1;
  }
  std::make_pair<unsigned_int&,unsigned_int&>(local_28,&param_5);
  std::pair<unsigned_int_const,unsigned_int>::pair<unsigned_int,unsigned_int>
            (local_30,(pair *)local_28);
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::insert(local_38);
  if (local_34 != '\x01') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->(local_38)
    ;
    *(uint *)(iVar2 + 4) = param_2;
  }
  stBestRecord_t::stBestRecord_t(local_d0);
  local_48 = param_4;
  local_44 = param_5;
  cVar1 = stBestRecord_t::operator>((stBestRecord_t *)(this + 0x7058),local_d0);
  if (cVar1 != '\0') {
    psVar3 = local_d0;
    pCVar4 = this + 0x7058;
    for (iVar2 = 0x26; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pCVar4 = *(undefined4 *)psVar3;
      psVar3 = psVar3 + ((uint)bVar5 * -2 + 1) * 4;
      pCVar4 = pCVar4 + (uint)bVar5 * -8 + 4;
    }
  }
  return;
}
```
