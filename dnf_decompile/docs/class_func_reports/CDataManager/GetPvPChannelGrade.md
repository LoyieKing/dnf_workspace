# GetPvPChannelGrade

`_ZN12CDataManager18GetPvPChannelGradeEv`

`CDataManager::GetPvPChannelGrade()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08357e9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08357e9e  _ZN12CDataManager18GetPvPChannelGradeEv
#           CDataManager::GetPvPChannelGrade()
# range [0x08357e9e, 0x083580a9]
08357e9e +0x000:  push   %ebp
08357e9f +0x001:  mov    %esp,%ebp
08357ea1 +0x003:  push   %edi
08357ea2 +0x004:  push   %esi
08357ea3 +0x005:  push   %ebx
08357ea4 +0x006:  sub    $0x7c,%esp
08357ea7 +0x009:  mov    0x8(%ebp),%eax
08357eaa +0x00c:  add    $0xb430,%eax
08357eaf +0x011:  mov    %eax,-0x1c(%ebp)
08357eb2 +0x014:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08357eb7 +0x019:  mov    0x378(%eax),%eax
08357ebd +0x01f:  mov    %eax,-0x38(%ebp)
08357ec0 +0x022:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08357ec5 +0x027:  mov    %eax,(%esp)
08357ec8 +0x02a:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
08357ecd +0x02f:  xor    $0x1,%eax
08357ed0 +0x032:  test   %al,%al
08357ed2 +0x034:  je     08357ede <+0x40>
08357ed4 +0x036:  mov    $0x0,%eax
08357ed9 +0x03b:  jmp    0835809f <+0x201>
08357ede +0x040:  mov    0x8(%ebp),%eax
08357ee1 +0x043:  lea    0xb4ec(%eax),%ecx
08357ee7 +0x049:  lea    -0x3c(%ebp),%eax
08357eea +0x04c:  lea    -0x38(%ebp),%edx
08357eed +0x04f:  mov    %edx,0x8(%esp)
08357ef1 +0x053:  mov    %ecx,0x4(%esp)
08357ef5 +0x057:  mov    %eax,(%esp)
08357ef8 +0x05a:  call   08392b9a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2263a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2263a
08357efd +0x05f:  sub    $0x4,%esp
08357f00 +0x062:  mov    0x8(%ebp),%eax
08357f03 +0x065:  lea    0xb4ec(%eax),%edx
08357f09 +0x06b:  lea    -0x34(%ebp),%eax
08357f0c +0x06e:  mov    %edx,0x4(%esp)
08357f10 +0x072:  mov    %eax,(%esp)
08357f13 +0x075:  call   08392bc6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22666>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22666
08357f18 +0x07a:  sub    $0x4,%esp
08357f1b +0x07d:  lea    -0x34(%ebp),%eax
08357f1e +0x080:  mov    %eax,0x4(%esp)
08357f22 +0x084:  lea    -0x3c(%ebp),%eax
08357f25 +0x087:  mov    %eax,(%esp)
08357f28 +0x08a:  call   08392bec <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2268c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2268c
08357f2d +0x08f:  test   %al,%al
08357f2f +0x091:  je     08358001 <+0x163>
08357f35 +0x097:  lea    -0x3c(%ebp),%eax
08357f38 +0x09a:  mov    %eax,(%esp)
08357f3b +0x09d:  call   08392c00 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x226a0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x226a0
08357f40 +0x0a2:  lea    0x4(%eax),%edx
08357f43 +0x0a5:  lea    -0x40(%ebp),%eax
08357f46 +0x0a8:  mov    %edx,0x4(%esp)
08357f4a +0x0ac:  mov    %eax,(%esp)
08357f4d +0x0af:  call   08392c0e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x226ae>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x226ae
08357f52 +0x0b4:  sub    $0x4,%esp
08357f55 +0x0b7:  jmp    08357fc7 <+0x129>
08357f57 +0x0b9:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08357f5c +0x0be:  mov    0x1b0(%eax),%ebx
08357f62 +0x0c4:  lea    -0x40(%ebp),%eax
08357f65 +0x0c7:  mov    %eax,(%esp)
08357f68 +0x0ca:  call   08392c9a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2273a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2273a
08357f6d +0x0cf:  mov    (%eax),%eax
08357f6f +0x0d1:  cmp    %eax,%ebx
08357f71 +0x0d3:  sete   %al
08357f74 +0x0d6:  test   %al,%al
08357f76 +0x0d8:  je     08357fbc <+0x11e>
08357f78 +0x0da:  lea    -0x40(%ebp),%eax
08357f7b +0x0dd:  mov    %eax,(%esp)
08357f7e +0x0e0:  call   08392c9a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2273a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2273a
08357f83 +0x0e5:  mov    -0x1c(%ebp),%edx
08357f86 +0x0e8:  mov    (%eax),%ecx
08357f88 +0x0ea:  mov    %ecx,(%edx)
08357f8a +0x0ec:  mov    0x4(%eax),%ecx
08357f8d +0x0ef:  mov    %ecx,0x4(%edx)
08357f90 +0x0f2:  mov    0x8(%eax),%ecx
08357f93 +0x0f5:  mov    %ecx,0x8(%edx)
08357f96 +0x0f8:  mov    0xc(%eax),%ecx
08357f99 +0x0fb:  mov    %ecx,0xc(%edx)
08357f9c +0x0fe:  mov    0x10(%eax),%ecx
08357f9f +0x101:  mov    %ecx,0x10(%edx)
08357fa2 +0x104:  mov    0x14(%eax),%ecx
08357fa5 +0x107:  mov    %ecx,0x14(%edx)
08357fa8 +0x10a:  mov    0x18(%eax),%ecx
08357fab +0x10d:  mov    %ecx,0x18(%edx)
08357fae +0x110:  mov    0x1c(%eax),%ecx
08357fb1 +0x113:  mov    %ecx,0x1c(%edx)
08357fb4 +0x116:  mov    0x20(%eax),%eax
08357fb7 +0x119:  mov    %eax,0x20(%edx)
08357fba +0x11c:  jmp    08358001 <+0x163>
08357fbc +0x11e:  lea    -0x40(%ebp),%eax
08357fbf +0x121:  mov    %eax,(%esp)
08357fc2 +0x124:  call   08392c84 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22724>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22724
08357fc7 +0x129:  lea    -0x3c(%ebp),%eax
08357fca +0x12c:  mov    %eax,(%esp)
08357fcd +0x12f:  call   08392c00 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x226a0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x226a0
08357fd2 +0x134:  lea    0x4(%eax),%edx
08357fd5 +0x137:  lea    -0x30(%ebp),%eax
08357fd8 +0x13a:  mov    %edx,0x4(%esp)
08357fdc +0x13e:  mov    %eax,(%esp)
08357fdf +0x141:  call   08392c32 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x226d2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x226d2
08357fe4 +0x146:  sub    $0x4,%esp
08357fe7 +0x149:  lea    -0x30(%ebp),%eax
08357fea +0x14c:  mov    %eax,0x4(%esp)
08357fee +0x150:  lea    -0x40(%ebp),%eax
08357ff1 +0x153:  mov    %eax,(%esp)
08357ff4 +0x156:  call   08392c58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x226f8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x226f8
08357ff9 +0x15b:  test   %al,%al
08357ffb +0x15d:  jne    08357f57 <+0xb9>
08358001 +0x163:  mov    -0x1c(%ebp),%eax
08358004 +0x166:  mov    0x18(%eax),%eax
08358007 +0x169:  mov    %eax,-0x58(%ebp)
0835800a +0x16c:  mov    -0x1c(%ebp),%eax
0835800d +0x16f:  mov    0x14(%eax),%eax
08358010 +0x172:  mov    %eax,-0x54(%ebp)
08358013 +0x175:  mov    -0x1c(%ebp),%eax
08358016 +0x178:  mov    0x10(%eax),%eax
08358019 +0x17b:  mov    %eax,-0x50(%ebp)
0835801c +0x17e:  mov    -0x1c(%ebp),%eax
0835801f +0x181:  mov    0xc(%eax),%eax
08358022 +0x184:  mov    %eax,-0x4c(%ebp)
08358025 +0x187:  mov    -0x1c(%ebp),%eax
08358028 +0x18a:  mov    0x8(%eax),%edi
0835802b +0x18d:  mov    -0x1c(%ebp),%eax
0835802e +0x190:  mov    0x4(%eax),%esi
08358031 +0x193:  mov    -0x38(%ebp),%ebx
08358034 +0x196:  movl   $0x0,0xc(%esp)
0835803c +0x19e:  movl   $0x18f3,0x8(%esp)
08358044 +0x1a6:  movl   $&_ZZN12CDataManager18GetPvPChannelGradeEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835804c +0x1ae:  lea    -0x2c(%ebp),%eax
0835804f +0x1b1:  mov    %eax,(%esp)
08358052 +0x1b4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08358057 +0x1b9:  mov    -0x58(%ebp),%eax
0835805a +0x1bc:  mov    %eax,0x24(%esp)
0835805e +0x1c0:  mov    -0x54(%ebp),%eax
08358061 +0x1c3:  mov    %eax,0x20(%esp)
08358065 +0x1c7:  mov    -0x50(%ebp),%eax
08358068 +0x1ca:  mov    %eax,0x1c(%esp)
0835806c +0x1ce:  mov    -0x4c(%ebp),%eax
0835806f +0x1d1:  mov    %eax,0x18(%esp)
08358073 +0x1d5:  mov    %edi,0x14(%esp)
08358077 +0x1d9:  mov    %esi,0x10(%esp)
0835807b +0x1dd:  movl   $0x0,0xc(%esp)
08358083 +0x1e5:  mov    %ebx,0x8(%esp)
08358087 +0x1e9:  movl   $"PVP Channel Information  serverGroup(%d), pvpChannelNum(%d), minGrade(%d), maxGrade(%d), upgradeRevision(%d), type(%d), minLevel(%d), maxLevel(%d)",0x4(%esp)
0835808f +0x1f1:  lea    -0x2c(%ebp),%eax
08358092 +0x1f4:  mov    %eax,(%esp)
08358095 +0x1f7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835809a +0x1fc:  mov    $0x1,%eax
0835809f +0x201:  lea    -0xc(%ebp),%esp
083580a2 +0x204:  add    $0x0,%esp
083580a5 +0x207:  pop    %ebx
083580a6 +0x208:  pop    %esi
083580a7 +0x209:  pop    %edi
083580a8 +0x20a:  pop    %ebp
083580a9 +0x20b:  ret
```

## 反编译 C

```c
// CDataManager::GetPvPChannelGrade @ 0x8357e9e

/* CDataManager::GetPvPChannelGrade() */

undefined4 __thiscall CDataManager::GetPvPChannelGrade(CDataManager *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  GameWorld *this_00;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  __normal_iterator<pvp_channel_info_t*,std::vector<pvp_channel_info_t,std::allocator<pvp_channel_info_t>>>
  local_44 [4];
  _Rb_tree_iterator<std::pair<int_const,std::vector<pvp_channel_info_t,std::allocator<pvp_channel_info_t>>>>
  local_40 [4];
  undefined4 local_3c;
  map<int,std::vector<pvp_channel_info_t,std::allocator<pvp_channel_info_t>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<pvp_channel_info_t,std::allocator<pvp_channel_info_t>>>>>
  local_38 [4];
  __normal_iterator local_34 [4];
  cMyTrace local_30 [16];
  CDataManager *local_20;
  
  local_20 = this + 0xb430;
  iVar9 = G_CEnvironment();
  local_3c = *(undefined4 *)(iVar9 + 0x378);
  this_00 = (GameWorld *)G_GameWorld();
  cVar7 = GameWorld::IsPVPChannel(this_00);
  if (cVar7 == '\x01') {
    std::
    map<int,std::vector<pvp_channel_info_t,std::allocator<pvp_channel_info_t>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<pvp_channel_info_t,std::allocator<pvp_channel_info_t>>>>>
    ::find((int *)local_40);
    std::
    map<int,std::vector<pvp_channel_info_t,std::allocator<pvp_channel_info_t>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<pvp_channel_info_t,std::allocator<pvp_channel_info_t>>>>>
    ::end(local_38);
    cVar7 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<pvp_channel_info_t,std::allocator<pvp_channel_info_t>>>>
            ::operator!=(local_40,(_Rb_tree_iterator *)local_38);
    if (cVar7 != '\0') {
      std::
      _Rb_tree_iterator<std::pair<int_const,std::vector<pvp_channel_info_t,std::allocator<pvp_channel_info_t>>>>
      ::operator->(local_40);
      std::vector<pvp_channel_info_t,std::allocator<pvp_channel_info_t>>::begin();
      while( true ) {
        std::
        _Rb_tree_iterator<std::pair<int_const,std::vector<pvp_channel_info_t,std::allocator<pvp_channel_info_t>>>>
        ::operator->(local_40);
        std::vector<pvp_channel_info_t,std::allocator<pvp_channel_info_t>>::end();
        bVar8 = __gnu_cxx::operator!=(local_44,local_34);
        if (!bVar8) break;
        iVar9 = G_CEnvironment();
        iVar9 = *(int *)(iVar9 + 0x1b0);
        piVar11 = (int *)__gnu_cxx::
                         __normal_iterator<pvp_channel_info_t*,std::vector<pvp_channel_info_t,std::allocator<pvp_channel_info_t>>>
                         ::operator*(local_44);
        if (iVar9 == *piVar11) {
          puVar12 = (undefined4 *)
                    __gnu_cxx::
                    __normal_iterator<pvp_channel_info_t*,std::vector<pvp_channel_info_t,std::allocator<pvp_channel_info_t>>>
                    ::operator*(local_44);
          *(undefined4 *)local_20 = *puVar12;
          *(undefined4 *)(local_20 + 4) = puVar12[1];
          *(undefined4 *)(local_20 + 8) = puVar12[2];
          *(undefined4 *)(local_20 + 0xc) = puVar12[3];
          *(undefined4 *)(local_20 + 0x10) = puVar12[4];
          *(undefined4 *)(local_20 + 0x14) = puVar12[5];
          *(undefined4 *)(local_20 + 0x18) = puVar12[6];
          *(undefined4 *)(local_20 + 0x1c) = puVar12[7];
          *(undefined4 *)(local_20 + 0x20) = puVar12[8];
          break;
        }
        __gnu_cxx::
        __normal_iterator<pvp_channel_info_t*,std::vector<pvp_channel_info_t,std::allocator<pvp_channel_info_t>>>
        ::operator++(local_44);
      }
    }
    uVar6 = local_3c;
    uVar10 = *(undefined4 *)(local_20 + 0x18);
    uVar1 = *(undefined4 *)(local_20 + 0x14);
    uVar2 = *(undefined4 *)(local_20 + 0x10);
    uVar3 = *(undefined4 *)(local_20 + 0xc);
    uVar4 = *(undefined4 *)(local_20 + 8);
    uVar5 = *(undefined4 *)(local_20 + 4);
    cMyTrace::cMyTrace(local_30,"bool CDataManager::GetPvPChannelGrade()",0x18f3,0);
    cMyTrace::operator()
              (local_30,
               "PVP Channel Information  serverGroup(%d), pvpChannelNum(%d), minGrade(%d), maxGrade(%d), upgradeRevision(%d), type(%d), minLevel(%d), maxLevel(%d)"
               ,uVar6,0,uVar5,uVar4,uVar3,uVar2,uVar1,uVar10);
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}
```
