# check_error

`_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_MailBox_Send::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MailBox_Send` | `0x081cc636` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cc636  _ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_MailBox_Send::check_error(CUser*, MSG_BASE&)
# range [0x081cc636, 0x081cc8c1]
081cc636 +0x000:  push   %ebp
081cc637 +0x001:  mov    %esp,%ebp
081cc639 +0x003:  push   %esi
081cc63a +0x004:  push   %ebx
081cc63b +0x005:  sub    $0x30,%esp
081cc63e +0x008:  mov    0xc(%ebp),%eax
081cc641 +0x00b:  mov    %eax,(%esp)
081cc644 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081cc649 +0x013:  cmp    $0x3,%eax
081cc64c +0x016:  jne    081cc65d <+0x27>
081cc64e +0x018:  mov    0xc(%ebp),%eax
081cc651 +0x01b:  mov    %eax,(%esp)
081cc654 +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081cc659 +0x023:  test   %eax,%eax
081cc65b +0x025:  jne    081cc664 <+0x2e>
081cc65d +0x027:  mov    $0x1,%eax
081cc662 +0x02c:  jmp    081cc669 <+0x33>
081cc664 +0x02e:  mov    $0x0,%eax
081cc669 +0x033:  test   %al,%al
081cc66b +0x035:  je     081cc677 <+0x41>
081cc66d +0x037:  mov    $0xffffffff,%ebx
081cc672 +0x03c:  jmp    081cc8b9 <+0x283>
081cc677 +0x041:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
081cc67c +0x046:  movl   $0x4,0xc(%esp)
081cc684 +0x04e:  movl   $0x1,0x8(%esp)
081cc68c +0x056:  mov    0xc(%ebp),%edx
081cc68f +0x059:  mov    %edx,0x4(%esp)
081cc693 +0x05d:  mov    %eax,(%esp)
081cc696 +0x060:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
081cc69b +0x065:  test   %al,%al
081cc69d +0x067:  je     081cc6a9 <+0x73>
081cc69f +0x069:  mov    $0xd1,%ebx
081cc6a4 +0x06e:  jmp    081cc8b9 <+0x283>
081cc6a9 +0x073:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081cc6ae +0x078:  movl   $0x3f,0x8(%esp)
081cc6b6 +0x080:  mov    0xc(%ebp),%edx
081cc6b9 +0x083:  mov    %edx,0x4(%esp)
081cc6bd +0x087:  mov    %eax,(%esp)
081cc6c0 +0x08a:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081cc6c5 +0x08f:  mov    %eax,-0x14(%ebp)
081cc6c8 +0x092:  cmpl   $0x0,-0x14(%ebp)
081cc6cc +0x096:  je     081cc6d6 <+0xa0>
081cc6ce +0x098:  mov    -0x14(%ebp),%ebx
081cc6d1 +0x09b:  jmp    081cc8b9 <+0x283>
081cc6d6 +0x0a0:  mov    0x10(%ebp),%eax
081cc6d9 +0x0a3:  mov    %eax,-0x10(%ebp)
081cc6dc +0x0a6:  mov    -0x10(%ebp),%eax
081cc6df +0x0a9:  movzwl 0x37(%eax),%eax
081cc6e3 +0x0ad:  movzwl %ax,%ebx
081cc6e6 +0x0b0:  mov    -0x10(%ebp),%eax
081cc6e9 +0x0b3:  movzbl 0x36(%eax),%eax
081cc6ed +0x0b7:  movzbl %al,%eax
081cc6f0 +0x0ba:  mov    %eax,(%esp)
081cc6f3 +0x0bd:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081cc6f8 +0x0c2:  mov    %ebx,0x8(%esp)
081cc6fc +0x0c6:  mov    %eax,0x4(%esp)
081cc700 +0x0ca:  mov    0xc(%ebp),%eax
081cc703 +0x0cd:  mov    %eax,(%esp)
081cc706 +0x0d0:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081cc70b +0x0d5:  test   %al,%al
081cc70d +0x0d7:  je     081cc719 <+0xe3>
081cc70f +0x0d9:  mov    $0xd5,%ebx
081cc714 +0x0de:  jmp    081cc8b9 <+0x283>
081cc719 +0x0e3:  movb   $0x1,-0x16(%ebp)
081cc71d +0x0e7:  mov    -0x10(%ebp),%eax
081cc720 +0x0ea:  movzwl 0x37(%eax),%eax
081cc724 +0x0ee:  movzwl %ax,%ebx
081cc727 +0x0f1:  mov    -0x10(%ebp),%eax
081cc72a +0x0f4:  movzbl 0x36(%eax),%eax
081cc72e +0x0f8:  movzbl %al,%eax
081cc731 +0x0fb:  mov    %eax,(%esp)
081cc734 +0x0fe:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081cc739 +0x103:  lea    -0x16(%ebp),%edx
081cc73c +0x106:  mov    %edx,0xc(%esp)
081cc740 +0x10a:  mov    %ebx,0x8(%esp)
081cc744 +0x10e:  mov    %eax,0x4(%esp)
081cc748 +0x112:  mov    0xc(%ebp),%eax
081cc74b +0x115:  mov    %eax,(%esp)
081cc74e +0x118:  call   0812032e <_Z36CheckItemTradeLimitCountToMoveByUserR5CUseriiRb>  ; CheckItemTradeLimitCountToMoveByUser(CUser&, int, int, bool&)
081cc753 +0x11d:  movzbl -0x16(%ebp),%eax
081cc757 +0x121:  xor    $0x1,%eax
081cc75a +0x124:  test   %al,%al
081cc75c +0x126:  je     081cc768 <+0x132>
081cc75e +0x128:  mov    $0x72,%ebx
081cc763 +0x12d:  jmp    081cc8b9 <+0x283>
081cc768 +0x132:  lea    -0x15(%ebp),%eax
081cc76b +0x135:  mov    %eax,(%esp)
081cc76e +0x138:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081cc773 +0x13d:  mov    -0x10(%ebp),%eax
081cc776 +0x140:  lea    0x45(%eax),%edx
081cc779 +0x143:  lea    -0x15(%ebp),%eax
081cc77c +0x146:  mov    %eax,0x8(%esp)
081cc780 +0x14a:  mov    %edx,0x4(%esp)
081cc784 +0x14e:  lea    -0x1c(%ebp),%eax
081cc787 +0x151:  mov    %eax,(%esp)
081cc78a +0x154:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
081cc78f +0x159:  jmp    081cc7ac <+0x176>
081cc791 +0x15b:  mov    %edx,%ebx
081cc793 +0x15d:  mov    %eax,%esi
081cc795 +0x15f:  lea    -0x15(%ebp),%eax
081cc798 +0x162:  mov    %eax,(%esp)
081cc79b +0x165:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081cc7a0 +0x16a:  mov    %esi,%eax
081cc7a2 +0x16c:  mov    %ebx,%edx
081cc7a4 +0x16e:  mov    %eax,(%esp)
081cc7a7 +0x171:  call   08ae3750 <_Unwind_Resume>
081cc7ac +0x176:  lea    -0x15(%ebp),%eax
081cc7af +0x179:  mov    %eax,(%esp)
081cc7b2 +0x17c:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081cc7b7 +0x181:  call   08235001 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6ab>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6ab
081cc7bc +0x186:  lea    -0x1c(%ebp),%edx
081cc7bf +0x189:  mov    %edx,0x4(%esp)
081cc7c3 +0x18d:  mov    %eax,(%esp)
081cc7c6 +0x190:  call   0862e622 <_ZN16CSyncSlangFilter8HasSlangERKSs>  ; CSyncSlangFilter::HasSlang(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
081cc7cb +0x195:  test   %al,%al
081cc7cd +0x197:  je     081cc7d9 <+0x1a3>
081cc7cf +0x199:  mov    $0x9f,%ebx
081cc7d4 +0x19e:  jmp    081cc8ae <+0x278>
081cc7d9 +0x1a3:  mov    -0x10(%ebp),%eax
081cc7dc +0x1a6:  add    $0x45,%eax
081cc7df +0x1a9:  mov    %eax,(%esp)
081cc7e2 +0x1ac:  call   0807e3b0 <_init+0xca8>
081cc7e7 +0x1b1:  mov    -0x10(%ebp),%edx
081cc7ea +0x1b4:  mov    0x41(%edx),%edx
081cc7ed +0x1b7:  cmp    %edx,%eax
081cc7ef +0x1b9:  je     081cc7fb <+0x1c5>
081cc7f1 +0x1bb:  mov    $0xfffffffd,%ebx
081cc7f6 +0x1c0:  jmp    081cc8ae <+0x278>
081cc7fb +0x1c5:  mov    -0x10(%ebp),%eax
081cc7fe +0x1c8:  mov    0x39(%eax),%eax
081cc801 +0x1cb:  test   %eax,%eax
081cc803 +0x1cd:  jne    081cc826 <+0x1f0>
081cc805 +0x1cf:  mov    -0x10(%ebp),%eax
081cc808 +0x1d2:  mov    0x2e(%eax),%eax
081cc80b +0x1d5:  test   %eax,%eax
081cc80d +0x1d7:  jne    081cc826 <+0x1f0>
081cc80f +0x1d9:  mov    -0x10(%ebp),%eax
081cc812 +0x1dc:  add    $0x45,%eax
081cc815 +0x1df:  movzbl (%eax),%eax
081cc818 +0x1e2:  test   %al,%al
081cc81a +0x1e4:  jne    081cc826 <+0x1f0>
081cc81c +0x1e6:  mov    $0x16,%ebx
081cc821 +0x1eb:  jmp    081cc8ae <+0x278>
081cc826 +0x1f0:  mov    -0x10(%ebp),%eax
081cc829 +0x1f3:  mov    0x32(%eax),%eax
081cc82c +0x1f6:  test   %eax,%eax
081cc82e +0x1f8:  je     081cc857 <+0x221>
081cc830 +0x1fa:  mov    0x10(%ebp),%eax
081cc833 +0x1fd:  mov    %eax,0x8(%esp)
081cc837 +0x201:  mov    0xc(%ebp),%eax
081cc83a +0x204:  mov    %eax,0x4(%esp)
081cc83e +0x208:  mov    0x8(%ebp),%eax
081cc841 +0x20b:  mov    %eax,(%esp)
081cc844 +0x20e:  call   081cc8c2 <_ZN23Dispatcher_MailBox_Send14GuildMailCheckEP5CUserR8MSG_BASE>  ; Dispatcher_MailBox_Send::GuildMailCheck(CUser*, MSG_BASE&)
081cc849 +0x213:  mov    %eax,-0xc(%ebp)
081cc84c +0x216:  cmpl   $0x0,-0xc(%ebp)
081cc850 +0x21a:  je     081cc857 <+0x221>
081cc852 +0x21c:  mov    -0xc(%ebp),%ebx
081cc855 +0x21f:  jmp    081cc8ae <+0x278>
081cc857 +0x221:  mov    0xc(%ebp),%eax
081cc85a +0x224:  mov    %eax,(%esp)
081cc85d +0x227:  call   0822f380 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a2a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a2a
081cc862 +0x22c:  xor    $0x1,%eax
081cc865 +0x22f:  test   %al,%al
081cc867 +0x231:  je     081cc88c <+0x256>
081cc869 +0x233:  mov    -0x10(%ebp),%eax
081cc86c +0x236:  mov    0x2e(%eax),%edx
081cc86f +0x239:  mov    0xc(%ebp),%eax
081cc872 +0x23c:  mov    %edx,0x4(%esp)
081cc876 +0x240:  mov    %eax,(%esp)
081cc879 +0x243:  call   08646496 <_ZN15CUserCharacInfo34IsAvailableCurCharacTradeGoldDailyEj>  ; CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily(unsigned int)
081cc87e +0x248:  xor    $0x1,%eax
081cc881 +0x24b:  test   %al,%al
081cc883 +0x24d:  je     081cc88c <+0x256>
081cc885 +0x24f:  mov    $0x46,%ebx
081cc88a +0x254:  jmp    081cc8ae <+0x278>
081cc88c +0x256:  mov    $0x0,%ebx
081cc891 +0x25b:  jmp    081cc8ae <+0x278>
081cc893 +0x25d:  mov    %edx,%ebx
081cc895 +0x25f:  mov    %eax,%esi
081cc897 +0x261:  lea    -0x1c(%ebp),%eax
081cc89a +0x264:  mov    %eax,(%esp)
081cc89d +0x267:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081cc8a2 +0x26c:  mov    %esi,%eax
081cc8a4 +0x26e:  mov    %ebx,%edx
081cc8a6 +0x270:  mov    %eax,(%esp)
081cc8a9 +0x273:  call   08ae3750 <_Unwind_Resume>
081cc8ae +0x278:  lea    -0x1c(%ebp),%eax
081cc8b1 +0x27b:  mov    %eax,(%esp)
081cc8b4 +0x27e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081cc8b9 +0x283:  mov    %ebx,%eax
081cc8bb +0x285:  add    $0x30,%esp
081cc8be +0x288:  pop    %ebx
081cc8bf +0x289:  pop    %esi
081cc8c0 +0x28a:  pop    %ebp
081cc8c1 +0x28b:  ret
```

## 反编译 C

```c
// Dispatcher_MailBox_Send::check_error @ 0x81cc636

/* Dispatcher_MailBox_Send::check_error(CUser*, MSG_BASE&) */

int __thiscall
Dispatcher_MailBox_Send::check_error(Dispatcher_MailBox_Send *this,CUser *param_1,MSG_BASE *param_2)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ServiceRestrictManager *pSVar5;
  CSyncSlangFilter *this_00;
  size_t sVar6;
  string local_20;
  bool local_1a;
  allocator<char> local_19;
  int local_18;
  MSG_BASE *local_14;
  int local_10;
  
  iVar4 = CUser::get_state(param_1);
  if ((iVar4 == 3) &&
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    iVar4 = -1;
  }
  else {
    pSVar5 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar3 = ServiceRestrictManager::isRestricted(pSVar5,param_1,1,4);
    if (cVar3 == '\0') {
      iVar4 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x3f);
      if (iVar4 == 0) {
        local_14 = param_2;
        uVar1 = *(ushort *)(param_2 + 0x37);
        local_18 = iVar4;
        iVar4 = GetInvenTypeFromItemSpace(param_2[0x36]);
        cVar3 = CUser::CheckItemLock(param_1,iVar4,(uint)uVar1);
        if (cVar3 == '\0') {
          local_1a = true;
          uVar1 = *(ushort *)(local_14 + 0x37);
          iVar4 = GetInvenTypeFromItemSpace(local_14[0x36]);
          CheckItemTradeLimitCountToMoveByUser(param_1,iVar4,(uint)uVar1,&local_1a);
          if (local_1a == true) {
            std::allocator<char>::allocator();
                    /* try { // try from 081cc78a to 081cc78e has its CatchHandler @ 081cc791 */
            std::string::string((string *)&local_20,(char *)(local_14 + 0x45),(allocator *)&local_19
                               );
            std::allocator<char>::~allocator(&local_19);
                    /* try { // try from 081cc7b7 to 081cc87d has its CatchHandler @ 081cc893 */
            this_00 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
            cVar3 = CSyncSlangFilter::HasSlang(this_00,&local_20);
            if (cVar3 == '\0') {
              sVar6 = strlen((char *)(local_14 + 0x45));
              if (sVar6 == *(size_t *)(local_14 + 0x41)) {
                if (((*(int *)(local_14 + 0x39) == 0) && (*(int *)(local_14 + 0x2e) == 0)) &&
                   (local_14[0x45] == (MSG_BASE)0x0)) {
                  iVar4 = 0x16;
                }
                else if ((*(int *)(local_14 + 0x32) == 0) ||
                        (iVar4 = GuildMailCheck((CUser *)this,(MSG_BASE *)param_1), local_10 = iVar4
                        , iVar4 == 0)) {
                  cVar3 = CUserCharacInfo::GetReliablePerson((CUserCharacInfo *)param_1);
                  if ((cVar3 == '\x01') ||
                     (cVar3 = CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily
                                        ((CUserCharacInfo *)param_1,*(uint *)(local_14 + 0x2e)),
                     cVar3 == '\x01')) {
                    iVar4 = 0;
                  }
                  else {
                    iVar4 = 0x46;
                  }
                }
              }
              else {
                iVar4 = -3;
              }
            }
            else {
              iVar4 = 0x9f;
            }
            std::string::~string((string *)&local_20);
          }
          else {
            iVar4 = 0x72;
          }
        }
        else {
          iVar4 = 0xd5;
        }
      }
    }
    else {
      iVar4 = 0xd1;
    }
  }
  return iVar4;
}
```
