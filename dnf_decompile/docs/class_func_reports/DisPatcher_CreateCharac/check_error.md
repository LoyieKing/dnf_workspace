# check_error

`_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_CreateCharac::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_CreateCharac` | `0x081c0830` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c0830  _ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_CreateCharac::check_error(CUser*, MSG_BASE&)
# range [0x081c0830, 0x081c0a19]
081c0830 +0x000:  push   %ebp
081c0831 +0x001:  mov    %esp,%ebp
081c0833 +0x003:  push   %ebx
081c0834 +0x004:  sub    $0x44,%esp
081c0837 +0x007:  mov    0xc(%ebp),%eax
081c083a +0x00a:  mov    %eax,(%esp)
081c083d +0x00d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c0842 +0x012:  cmp    $0x2,%eax
081c0845 +0x015:  setne  %al
081c0848 +0x018:  test   %al,%al
081c084a +0x01a:  je     081c0856 <+0x26>
081c084c +0x01c:  mov    $0x7fffffff,%eax
081c0851 +0x021:  jmp    081c0a13 <+0x1e3>
081c0856 +0x026:  mov    0xc(%ebp),%eax
081c0859 +0x029:  mov    %eax,(%esp)
081c085c +0x02c:  call   0864aa78 <_ZN5CUser20isLockedDeleteCharacEv>  ; CUser::isLockedDeleteCharac()
081c0861 +0x031:  test   %al,%al
081c0863 +0x033:  je     081c086f <+0x3f>
081c0865 +0x035:  mov    $0x13,%eax
081c086a +0x03a:  jmp    081c0a13 <+0x1e3>
081c086f +0x03f:  mov    0xc(%ebp),%eax
081c0872 +0x042:  mov    %eax,(%esp)
081c0875 +0x045:  call   0864aa0a <_ZN5CUser17isLocked4DataLoadEv>  ; CUser::isLocked4DataLoad()
081c087a +0x04a:  test   %al,%al
081c087c +0x04c:  je     081c0888 <+0x58>
081c087e +0x04e:  mov    $0x13,%eax
081c0883 +0x053:  jmp    081c0a13 <+0x1e3>
081c0888 +0x058:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
081c088d +0x05d:  movl   $0x20,0xc(%esp)
081c0895 +0x065:  movl   $0x1,0x8(%esp)
081c089d +0x06d:  mov    0xc(%ebp),%edx
081c08a0 +0x070:  mov    %edx,0x4(%esp)
081c08a4 +0x074:  mov    %eax,(%esp)
081c08a7 +0x077:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
081c08ac +0x07c:  test   %al,%al
081c08ae +0x07e:  je     081c08ba <+0x8a>
081c08b0 +0x080:  mov    $0xd1,%eax
081c08b5 +0x085:  jmp    081c0a13 <+0x1e3>
081c08ba +0x08a:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081c08bf +0x08f:  movl   $0x31,0x4(%esp)
081c08c7 +0x097:  mov    %eax,(%esp)
081c08ca +0x09a:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081c08cf +0x09f:  mov    %eax,-0x14(%ebp)
081c08d2 +0x0a2:  cmpl   $0x0,-0x14(%ebp)
081c08d6 +0x0a6:  je     081c08fd <+0xcd>
081c08d8 +0x0a8:  mov    -0x14(%ebp),%eax
081c08db +0x0ab:  mov    (%eax),%eax
081c08dd +0x0ad:  add    $0x34,%eax
081c08e0 +0x0b0:  mov    (%eax),%edx
081c08e2 +0x0b2:  mov    -0x14(%ebp),%eax
081c08e5 +0x0b5:  movl   $0x0,0x4(%esp)
081c08ed +0x0bd:  mov    %eax,(%esp)
081c08f0 +0x0c0:  call   *%edx
081c08f2 +0x0c2:  test   %al,%al
081c08f4 +0x0c4:  je     081c08fd <+0xcd>
081c08f6 +0x0c6:  mov    $0x1,%eax
081c08fb +0x0cb:  jmp    081c0902 <+0xd2>
081c08fd +0x0cd:  mov    $0x0,%eax
081c0902 +0x0d2:  test   %al,%al
081c0904 +0x0d4:  je     081c0931 <+0x101>
081c0906 +0x0d6:  mov    0xc(%ebp),%eax
081c0909 +0x0d9:  mov    %eax,(%esp)
081c090c +0x0dc:  call   082300e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5792>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5792
081c0911 +0x0e1:  mov    %eax,0x4(%esp)
081c0915 +0x0e5:  mov    -0x14(%ebp),%eax
081c0918 +0x0e8:  mov    %eax,(%esp)
081c091b +0x0eb:  call   08273dba <_ZNK28CRestrictCharacCreationEvent23getLimitCreateCharacterEi>  ; CRestrictCharacCreationEvent::getLimitCreateCharacter(int) const
081c0920 +0x0f0:  mov    %eax,-0xc(%ebp)
081c0923 +0x0f3:  cmpl   $0x0,-0xc(%ebp)
081c0927 +0x0f7:  je     081c0931 <+0x101>
081c0929 +0x0f9:  mov    -0xc(%ebp),%eax
081c092c +0x0fc:  jmp    081c0a13 <+0x1e3>
081c0931 +0x101:  mov    0xc(%ebp),%eax
081c0934 +0x104:  mov    %eax,(%esp)
081c0937 +0x107:  call   082300e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5792>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5792
081c093c +0x10c:  mov    %eax,%ebx
081c093e +0x10e:  mov    0xc(%ebp),%eax
081c0941 +0x111:  mov    %eax,(%esp)
081c0944 +0x114:  call   08230860 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f0a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f0a
081c0949 +0x119:  movzbl %al,%eax
081c094c +0x11c:  cmp    %eax,%ebx
081c094e +0x11e:  setge  %al
081c0951 +0x121:  test   %al,%al
081c0953 +0x123:  je     081c095f <+0x12f>
081c0955 +0x125:  mov    $0x4,%eax
081c095a +0x12a:  jmp    081c0a13 <+0x1e3>
081c095f +0x12f:  mov    0xc(%ebp),%eax
081c0962 +0x132:  mov    %eax,(%esp)
081c0965 +0x135:  call   082300e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5792>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5792
081c096a +0x13a:  cmp    $0x24,%eax
081c096d +0x13d:  sete   %al
081c0970 +0x140:  test   %al,%al
081c0972 +0x142:  je     081c09b1 <+0x181>
081c0974 +0x144:  movl   $0x5,0xc(%esp)
081c097c +0x14c:  movl   $0x8a0,0x8(%esp)
081c0984 +0x154:  movl   $&_ZZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c098c +0x15c:  lea    -0x34(%ebp),%eax
081c098f +0x15f:  mov    %eax,(%esp)
081c0992 +0x162:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081c0997 +0x167:  movl   $"DisPatcher_CreateCharac pUser->get_charac_count() == MAX_CHARAC_SLOT false",0x4(%esp)
081c099f +0x16f:  lea    -0x34(%ebp),%eax
081c09a2 +0x172:  mov    %eax,(%esp)
081c09a5 +0x175:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081c09aa +0x17a:  mov    $0x4,%eax
081c09af +0x17f:  jmp    081c0a13 <+0x1e3>
081c09b1 +0x181:  mov    0x10(%ebp),%eax
081c09b4 +0x184:  mov    %eax,-0x10(%ebp)
081c09b7 +0x187:  mov    -0x10(%ebp),%eax
081c09ba +0x18a:  add    $0x12,%eax
081c09bd +0x18d:  mov    %eax,(%esp)
081c09c0 +0x190:  call   08ac2d6c <_ZN23restrict_inputting_name23isUtf8StrInUnicodeRangeEPKc>  ; restrict_inputting_name::isUtf8StrInUnicodeRange(char const*)
081c09c5 +0x195:  xor    $0x1,%eax
081c09c8 +0x198:  test   %al,%al
081c09ca +0x19a:  je     081c09d3 <+0x1a3>
081c09cc +0x19c:  mov    $0x9f,%eax
081c09d1 +0x1a1:  jmp    081c0a13 <+0x1e3>
081c09d3 +0x1a3:  mov    -0x10(%ebp),%eax
081c09d6 +0x1a6:  add    $0x12,%eax
081c09d9 +0x1a9:  mov    %eax,(%esp)
081c09dc +0x1ac:  call   0829efae <_Z16checkSpecialCharPc>  ; checkSpecialChar(char*)
081c09e1 +0x1b1:  test   %al,%al
081c09e3 +0x1b3:  jne    081c09f7 <+0x1c7>
081c09e5 +0x1b5:  mov    -0x10(%ebp),%eax
081c09e8 +0x1b8:  add    $0x12,%eax
081c09eb +0x1bb:  mov    %eax,(%esp)
081c09ee +0x1be:  call   0829f01f <_Z20checkSpecialCharNamePc>  ; checkSpecialCharName(char*)
081c09f3 +0x1c3:  test   %al,%al
081c09f5 +0x1c5:  je     081c09fe <+0x1ce>
081c09f7 +0x1c7:  mov    $0x1,%eax
081c09fc +0x1cc:  jmp    081c0a03 <+0x1d3>
081c09fe +0x1ce:  mov    $0x0,%eax
081c0a03 +0x1d3:  test   %al,%al
081c0a05 +0x1d5:  je     081c0a0e <+0x1de>
081c0a07 +0x1d7:  mov    $0x9f,%eax
081c0a0c +0x1dc:  jmp    081c0a13 <+0x1e3>
081c0a0e +0x1de:  mov    $0x0,%eax
081c0a13 +0x1e3:  add    $0x44,%esp
081c0a16 +0x1e6:  pop    %ebx
081c0a17 +0x1e7:  pop    %ebp
081c0a18 +0x1e8:  ret
081c0a19 +0x1e9:  nop
```

## 反编译 C

```c
// DisPatcher_CreateCharac::check_error @ 0x81c0830

/* DisPatcher_CreateCharac::check_error(CUser*, MSG_BASE&) */

int __thiscall
DisPatcher_CreateCharac::check_error(DisPatcher_CreateCharac *this,CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ServiceRestrictManager *pSVar4;
  uint uVar5;
  cMyTrace local_38 [32];
  CRestrictCharacCreationEvent *local_18;
  MSG_BASE *local_14;
  int local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 == 2) {
    cVar2 = CUser::isLockedDeleteCharac(param_1);
    if (cVar2 == '\0') {
      cVar2 = CUser::isLocked4DataLoad(param_1);
      if (cVar2 == '\0') {
        pSVar4 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
        cVar2 = ServiceRestrictManager::isRestricted(pSVar4,param_1,1,0x20);
        if (cVar2 == '\0') {
          local_18 = (CRestrictCharacCreationEvent *)
                     CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x31);
          if ((local_18 == (CRestrictCharacCreationEvent *)0x0) ||
             (cVar2 = (**(code **)(*(int *)local_18 + 0x34))(local_18,0), cVar2 == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            iVar3 = CUser::get_charac_count(param_1);
            local_10 = CRestrictCharacCreationEvent::getLimitCreateCharacter(local_18,iVar3);
            if (local_10 != 0) {
              return local_10;
            }
          }
          iVar3 = CUser::get_charac_count(param_1);
          uVar5 = CUser::getCharacSlotLimit(param_1);
          if (iVar3 < (int)(uVar5 & 0xff)) {
            iVar3 = CUser::get_charac_count(param_1);
            if (iVar3 == 0x24) {
              cMyTrace::cMyTrace(local_38,
                                 "int DisPatcher_CreateCharac::check_error(CUser*, MSG_BASE&)",0x8a0
                                 ,5);
              cMyTrace::operator()
                        (local_38,
                         "DisPatcher_CreateCharac pUser->get_charac_count() == MAX_CHARAC_SLOT false"
                        );
              iVar3 = 4;
            }
            else {
              local_14 = param_2;
              cVar2 = restrict_inputting_name::isUtf8StrInUnicodeRange((char *)(param_2 + 0x12));
              if (cVar2 == '\x01') {
                cVar2 = checkSpecialChar((char *)(local_14 + 0x12));
                if ((cVar2 == '\0') &&
                   (cVar2 = checkSpecialCharName((char *)(local_14 + 0x12)), cVar2 == '\0')) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (bVar1) {
                  iVar3 = 0x9f;
                }
                else {
                  iVar3 = 0;
                }
              }
              else {
                iVar3 = 0x9f;
              }
            }
          }
          else {
            iVar3 = 4;
          }
        }
        else {
          iVar3 = 0xd1;
        }
      }
      else {
        iVar3 = 0x13;
      }
    }
    else {
      iVar3 = 0x13;
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  return iVar3;
}
```
