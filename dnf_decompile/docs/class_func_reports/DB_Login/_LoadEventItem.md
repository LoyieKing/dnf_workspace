# _LoadEventItem

`_ZN8DB_Login14_LoadEventItemEP14SIG_LOGIN_DATAiRSt6vectorINS_16tagDNFEventEntryESaIS3_EE`

`DB_Login::_LoadEventItem(SIG_LOGIN_DATA*, int, std::vector<DB_Login::tagDNFEventEntry, std::allocator<DB_Login::tagDNFEventEntry> >&)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08411d7e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08411d7e  _ZN8DB_Login14_LoadEventItemEP14SIG_LOGIN_DATAiRSt6vectorINS_16tagDNFEventEntryESaIS3_EE
#           DB_Login::_LoadEventItem(SIG_LOGIN_DATA*, int, std::vector<DB_Login::tagDNFEventEntry, std::allocator<DB_Login::tagDNFEventEntry> >&)
# range [0x08411d7e, 0x08411ee7]
08411d7e +0x000:  push   %ebp
08411d7f +0x001:  mov    %esp,%ebp
08411d81 +0x003:  push   %edi
08411d82 +0x004:  push   %ebx
08411d83 +0x005:  sub    $0x50,%esp
08411d86 +0x008:  lea    -0x3c(%ebp),%ebx
08411d89 +0x00b:  mov    $0x0,%eax
08411d8e +0x010:  mov    $0xa,%edx
08411d93 +0x015:  mov    %ebx,%edi
08411d95 +0x017:  mov    %edx,%ecx
08411d97 +0x019:  rep stos %eax,%es:(%edi)
08411d99 +0x01b:  lea    -0x10(%ebp),%eax
08411d9c +0x01e:  mov    0x14(%ebp),%edx
08411d9f +0x021:  mov    %edx,0x4(%esp)
08411da3 +0x025:  mov    %eax,(%esp)
08411da6 +0x028:  call   0818d7ea <_GLOBAL__I__ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0x56a>  ; global constructors keyed to ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char const*)+0x56a
08411dab +0x02d:  sub    $0x4,%esp
08411dae +0x030:  lea    -0x14(%ebp),%eax
08411db1 +0x033:  mov    0x14(%ebp),%edx
08411db4 +0x036:  mov    %edx,0x4(%esp)
08411db8 +0x03a:  mov    %eax,(%esp)
08411dbb +0x03d:  call   0818d356 <_GLOBAL__I__ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0xd6>  ; global constructors keyed to ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char const*)+0xd6
08411dc0 +0x042:  sub    $0x4,%esp
08411dc3 +0x045:  jmp    08411dff <+0x81>
08411dc5 +0x047:  lea    -0x10(%ebp),%eax
08411dc8 +0x04a:  mov    %eax,(%esp)
08411dcb +0x04d:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
08411dd0 +0x052:  mov    (%eax),%eax
08411dd2 +0x054:  cmp    $0x9,%eax
08411dd5 +0x057:  setg   %al
08411dd8 +0x05a:  test   %al,%al
08411dda +0x05c:  jne    08411df3 <+0x75>
08411ddc +0x05e:  lea    -0x10(%ebp),%eax
08411ddf +0x061:  mov    %eax,(%esp)
08411de2 +0x064:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
08411de7 +0x069:  mov    (%eax),%eax
08411de9 +0x06b:  movl   $0x1,-0x3c(%ebp,%eax,4)
08411df1 +0x073:  jmp    08411df4 <+0x76>
08411df3 +0x075:  nop
08411df4 +0x076:  lea    -0x10(%ebp),%eax
08411df7 +0x079:  mov    %eax,(%esp)
08411dfa +0x07c:  call   0818fca6 <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1a8>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1a8
08411dff +0x081:  lea    -0x14(%ebp),%eax
08411e02 +0x084:  mov    %eax,0x4(%esp)
08411e06 +0x088:  lea    -0x10(%ebp),%eax
08411e09 +0x08b:  mov    %eax,(%esp)
08411e0c +0x08e:  call   0818fc79 <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x17b>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x17b
08411e11 +0x093:  test   %al,%al
08411e13 +0x095:  jne    08411dc5 <+0x47>
08411e15 +0x097:  movl   $0x0,-0xc(%ebp)
08411e1c +0x09e:  jmp    08411ecf <+0x151>
08411e21 +0x0a3:  mov    -0xc(%ebp),%eax
08411e24 +0x0a6:  mov    -0x3c(%ebp,%eax,4),%eax
08411e28 +0x0aa:  test   %eax,%eax
08411e2a +0x0ac:  je     08411eca <+0x14c>
08411e30 +0x0b2:  cmpl   $0x7,-0xc(%ebp)
08411e34 +0x0b6:  ja     08411ecb <+0x14d>
08411e3a +0x0bc:  mov    -0xc(%ebp),%eax
08411e3d +0x0bf:  shl    $0x2,%eax
08411e40 +0x0c2:  mov    &data#d2dbc3ee(.rodata)(%eax),%eax
08411e46 +0x0c8:  jmp    *%eax
08411e48 +0x0ca:  mov    0x10(%ebp),%edx
08411e4b +0x0cd:  mov    0xc(%ebp),%eax
08411e4e +0x0d0:  mov    0xc0(%eax),%eax
08411e54 +0x0d6:  mov    %edx,0x4(%esp)
08411e58 +0x0da:  mov    %eax,(%esp)
08411e5b +0x0dd:  call   083fa1d3 <_ZN8WongWork8EventATI19ArrangeATIEventItemEjj>  ; WongWork::EventATI::ArrangeATIEventItem(unsigned int, unsigned int)
08411e60 +0x0e2:  jmp    08411ecb <+0x14d>
08411e62 +0x0e4:  mov    0x10(%ebp),%edx
08411e65 +0x0e7:  mov    0xc(%ebp),%eax
08411e68 +0x0ea:  mov    0xc0(%eax),%eax
08411e6e +0x0f0:  mov    %edx,0x4(%esp)
08411e72 +0x0f4:  mov    %eax,(%esp)
08411e75 +0x0f7:  call   083fa855 <_ZN8WongWork11EventSigong22ArrangeSigongEventItemEjj>  ; WongWork::EventSigong::ArrangeSigongEventItem(unsigned int, unsigned int)
08411e7a +0x0fc:  jmp    08411ecb <+0x14d>
08411e7c +0x0fe:  mov    0x10(%ebp),%edx
08411e7f +0x101:  mov    0xc(%ebp),%eax
08411e82 +0x104:  mov    0xc0(%eax),%eax
08411e88 +0x10a:  mov    %edx,0x4(%esp)
08411e8c +0x10e:  mov    %eax,(%esp)
08411e8f +0x111:  call   083fb16a <_ZN8WongWork8EventMuz19ArrangeMuzEventItemEjj>  ; WongWork::EventMuz::ArrangeMuzEventItem(unsigned int, unsigned int)
08411e94 +0x116:  jmp    08411ecb <+0x14d>
08411e96 +0x118:  mov    0x10(%ebp),%edx
08411e99 +0x11b:  mov    0xc(%ebp),%eax
08411e9c +0x11e:  mov    0xc0(%eax),%eax
08411ea2 +0x124:  mov    %edx,0x4(%esp)
08411ea6 +0x128:  mov    %eax,(%esp)
08411ea9 +0x12b:  call   083fb595 <_ZN8WongWork11EventAlttle22ArrangeAlttleEventItemEjj>  ; WongWork::EventAlttle::ArrangeAlttleEventItem(unsigned int, unsigned int)
08411eae +0x130:  jmp    08411ecb <+0x14d>
08411eb0 +0x132:  mov    0x10(%ebp),%edx
08411eb3 +0x135:  mov    0xc(%ebp),%eax
08411eb6 +0x138:  mov    0xc0(%eax),%eax
08411ebc +0x13e:  mov    %edx,0x4(%esp)
08411ec0 +0x142:  mov    %eax,(%esp)
08411ec3 +0x145:  call   083fb976 <_ZN8WongWork12EventFCCombo23ArrangeFCComboEventItemEjj>  ; WongWork::EventFCCombo::ArrangeFCComboEventItem(unsigned int, unsigned int)
08411ec8 +0x14a:  jmp    08411ecb <+0x14d>
08411eca +0x14c:  nop
08411ecb +0x14d:  addl   $0x1,-0xc(%ebp)
08411ecf +0x151:  cmpl   $0x9,-0xc(%ebp)
08411ed3 +0x155:  setle  %al
08411ed6 +0x158:  test   %al,%al
08411ed8 +0x15a:  jne    08411e21 <+0xa3>
08411ede +0x160:  lea    -0x8(%ebp),%esp
08411ee1 +0x163:  add    $0x0,%esp
08411ee4 +0x166:  pop    %ebx
08411ee5 +0x167:  pop    %edi
08411ee6 +0x168:  pop    %ebp
08411ee7 +0x169:  ret
```

## 反编译 C

```c
// DB_Login::_LoadEventItem @ 0x8411d7e

/* DB_Login::_LoadEventItem(SIG_LOGIN_DATA*, int, std::vector<DB_Login::tagDNFEventEntry,
   std::allocator<DB_Login::tagDNFEventEntry> >&) */

void DB_Login::_LoadEventItem(SIG_LOGIN_DATA *param_1,int param_2,vector *param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int local_40 [10];
  __normal_iterator local_18 [4];
  __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
  local_14 [4];
  int local_10;
  
  piVar2 = local_40;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::begin();
  std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::end();
  while (bVar1 = __gnu_cxx::operator!=(local_14,local_18), bVar1) {
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                    ::operator->(local_14);
    if (*piVar2 < 10) {
      piVar2 = (int *)__gnu_cxx::
                      __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                      ::operator->(local_14);
      local_40[*piVar2] = 1;
    }
    __gnu_cxx::
    __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
    ::operator++(local_14);
  }
  for (local_10 = 0; local_10 < 10; local_10 = local_10 + 1) {
    if (local_40[local_10] != 0) {
      switch(local_10) {
      case 2:
        WongWork::EventATI::ArrangeATIEventItem(*(uint *)(param_2 + 0xc0),(uint)param_3);
        break;
      case 3:
        WongWork::EventSigong::ArrangeSigongEventItem(*(uint *)(param_2 + 0xc0),(uint)param_3);
        break;
      case 5:
        WongWork::EventMuz::ArrangeMuzEventItem(*(uint *)(param_2 + 0xc0),(uint)param_3);
        break;
      case 6:
        WongWork::EventAlttle::ArrangeAlttleEventItem(*(uint *)(param_2 + 0xc0),(uint)param_3);
        break;
      case 7:
        WongWork::EventFCCombo::ArrangeFCComboEventItem(*(uint *)(param_2 + 0xc0),(uint)param_3);
      }
    }
  }
  return;
}
```
