# SetPvpRecord

`_ZN13Inter_LoadEtc12SetPvpRecordEP5CUserP12SIG_LOAD_ETC`

`Inter_LoadEtc::SetPvpRecord(CUser*, SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `Inter_LoadEtc` | `0x084c2964` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c2964  _ZN13Inter_LoadEtc12SetPvpRecordEP5CUserP12SIG_LOAD_ETC
#           Inter_LoadEtc::SetPvpRecord(CUser*, SIG_LOAD_ETC*)
# range [0x084c2964, 0x084c2a97]
084c2964 +0x000:  push   %ebp
084c2965 +0x001:  mov    %esp,%ebp
084c2967 +0x003:  push   %esi
084c2968 +0x004:  push   %ebx
084c2969 +0x005:  sub    $0x20,%esp
084c296c +0x008:  mov    0x10(%ebp),%eax
084c296f +0x00b:  add    $0x340,%eax
084c2974 +0x010:  mov    %eax,0x4(%esp)
084c2978 +0x014:  mov    0xc(%ebp),%eax
084c297b +0x017:  mov    %eax,(%esp)
084c297e +0x01a:  call   0864deea <_ZN5CUser12SetPvpRecordER13PvpResultType>  ; CUser::SetPvpRecord(PvpResultType&)
084c2983 +0x01f:  xor    $0x1,%eax
084c2986 +0x022:  test   %al,%al
084c2988 +0x024:  je     084c299f <+0x3b>
084c298a +0x026:  mov    0xc(%ebp),%eax
084c298d +0x029:  mov    %eax,(%esp)
084c2990 +0x02c:  call   084ebf30 <_GLOBAL__I__Z7getUserj+0x2ee2>  ; global constructors keyed to getUser(unsigned int)+0x2ee2
084c2995 +0x031:  mov    $0x0,%eax
084c299a +0x036:  jmp    084c2a90 <+0x12c>
084c299f +0x03b:  mov    0xc(%ebp),%eax
084c29a2 +0x03e:  mov    %eax,(%esp)
084c29a5 +0x041:  call   084ebf30 <_GLOBAL__I__Z7getUserj+0x2ee2>  ; global constructors keyed to getUser(unsigned int)+0x2ee2
084c29aa +0x046:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
084c29af +0x04b:  mov    %eax,(%esp)
084c29b2 +0x04e:  call   0844d54c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x162>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x162
084c29b7 +0x053:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%edx
084c29bd +0x059:  mov    %eax,0x4(%esp)
084c29c1 +0x05d:  mov    %edx,(%esp)
084c29c4 +0x060:  call   085d4832 <_ZNK11RefPvpGrade11GetPvpPointEi>  ; RefPvpGrade::GetPvpPoint(int) const
084c29c9 +0x065:  mov    %eax,-0x10(%ebp)
084c29cc +0x068:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
084c29d1 +0x06d:  mov    %eax,(%esp)
084c29d4 +0x070:  call   0844d54c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x162>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x162
084c29d9 +0x075:  mov    %eax,%ebx
084c29db +0x077:  mov    0xc(%ebp),%eax
084c29de +0x07a:  mov    %eax,(%esp)
084c29e1 +0x07d:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
084c29e6 +0x082:  mov    0x14(%eax),%eax
084c29e9 +0x085:  cmp    %eax,%ebx
084c29eb +0x087:  jg     084c2a09 <+0xa5>
084c29ed +0x089:  mov    0xc(%ebp),%eax
084c29f0 +0x08c:  mov    %eax,(%esp)
084c29f3 +0x08f:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
084c29f8 +0x094:  mov    0x8(%eax),%edx
084c29fb +0x097:  mov    -0x10(%ebp),%eax
084c29fe +0x09a:  cmp    %eax,%edx
084c2a00 +0x09c:  jle    084c2a09 <+0xa5>
084c2a02 +0x09e:  mov    $0x1,%eax
084c2a07 +0x0a3:  jmp    084c2a0e <+0xaa>
084c2a09 +0x0a5:  mov    $0x0,%eax
084c2a0e +0x0aa:  test   %al,%al
084c2a10 +0x0ac:  je     084c2a8b <+0x127>
084c2a12 +0x0ae:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c2a19 +0x0b5:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c2a1e +0x0ba:  mov    %eax,%ebx
084c2a20 +0x0bc:  mov    0xc(%ebp),%eax
084c2a23 +0x0bf:  mov    %eax,(%esp)
084c2a26 +0x0c2:  call   082a66aa <_GLOBAL__I__ZN4CLog5this_E+0x2ad1>  ; global constructors keyed to CLog::this_+0x2ad1
084c2a2b +0x0c7:  mov    %ebx,0x8(%esp)
084c2a2f +0x0cb:  mov    %eax,0x4(%esp)
084c2a33 +0x0cf:  movl   $0x4,(%esp)
084c2a3a +0x0d6:  call   0846c0a8 <_Z22CheckDailyScheduleTimeill>  ; CheckDailyScheduleTime(int, long, long)
084c2a3f +0x0db:  test   %al,%al
084c2a41 +0x0dd:  je     084c2a8b <+0x127>
084c2a43 +0x0df:  mov    0xc(%ebp),%eax
084c2a46 +0x0e2:  mov    %eax,(%esp)
084c2a49 +0x0e5:  call   084ebec4 <_GLOBAL__I__Z7getUserj+0x2e76>  ; global constructors keyed to getUser(unsigned int)+0x2e76
084c2a4e +0x0ea:  mov    %eax,%ebx
084c2a50 +0x0ec:  mov    0xc(%ebp),%eax
084c2a53 +0x0ef:  mov    %eax,(%esp)
084c2a56 +0x0f2:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
084c2a5b +0x0f7:  mov    0x8(%eax),%esi
084c2a5e +0x0fa:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
084c2a63 +0x0ff:  mov    %eax,(%esp)
084c2a66 +0x102:  call   0844d55a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x170>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x170
084c2a6b +0x107:  mov    %esi,%edx
084c2a6d +0x109:  sub    %eax,%edx
084c2a6f +0x10b:  mov    %edx,%eax
084c2a71 +0x10d:  mov    %eax,-0xc(%ebp)
084c2a74 +0x110:  lea    -0xc(%ebp),%eax
084c2a77 +0x113:  mov    %eax,0x4(%esp)
084c2a7b +0x117:  lea    -0x10(%ebp),%eax
084c2a7e +0x11a:  mov    %eax,(%esp)
084c2a81 +0x11d:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
084c2a86 +0x122:  mov    (%eax),%eax
084c2a88 +0x124:  mov    %eax,0x8(%ebx)
084c2a8b +0x127:  mov    $0x1,%eax
084c2a90 +0x12c:  add    $0x20,%esp
084c2a93 +0x12f:  pop    %ebx
084c2a94 +0x130:  pop    %esi
084c2a95 +0x131:  pop    %ebp
084c2a96 +0x132:  ret
084c2a97 +0x133:  nop
```

## 反编译 C

```c
// Inter_LoadEtc::SetPvpRecord @ 0x84c2964

/* Inter_LoadEtc::SetPvpRecord(CUser*, SIG_LOAD_ETC*) */

undefined4 __thiscall
Inter_LoadEtc::SetPvpRecord(Inter_LoadEtc *this,CUser *param_1,SIG_LOAD_ETC *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int local_14;
  int local_10;
  
  cVar2 = CUser::SetPvpRecord(param_1,(PvpResultType *)(param_2 + 0x340));
  if (cVar2 == '\x01') {
    CUserCharacInfo::disableSavePvP((CUserCharacInfo *)param_1);
    iVar3 = RefPvpGrade::getPvPExpLossGrade(GlobalData::s_ref_pvp_grade);
    local_14 = RefPvpGrade::GetPvpPoint(GlobalData::s_ref_pvp_grade,iVar3);
    iVar3 = RefPvpGrade::getPvPExpLossGrade(GlobalData::s_ref_pvp_grade);
    iVar4 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)param_1);
    if ((*(int *)(iVar4 + 0x14) < iVar3) ||
       (iVar3 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)param_1),
       *(int *)(iVar3 + 8) <= local_14)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      lVar6 = CUserCharacInfo::getCurCharacLastPlayTick((CUserCharacInfo *)param_1);
      cVar2 = CheckDailyScheduleTime(4,lVar6,lVar5);
      if (cVar2 != '\0') {
        iVar4 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)param_1);
        iVar3 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)param_1);
        iVar3 = *(int *)(iVar3 + 8);
        local_10 = RefPvpGrade::getPvPExpLossExp(GlobalData::s_ref_pvp_grade);
        local_10 = iVar3 - local_10;
        piVar7 = std::max<int>(&local_14,&local_10);
        *(int *)(iVar4 + 8) = *piVar7;
      }
    }
    return 1;
  }
  CUserCharacInfo::disableSavePvP((CUserCharacInfo *)param_1);
  return 0;
}
```
