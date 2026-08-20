# isRewarded

`_ZN4ARAD27Arad_EventPeriodDataManager10isRewardedENS_19EventRewardItemAradE`

`ARAD::Arad_EventPeriodDataManager::isRewarded(ARAD::EventRewardItemArad)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_EventPeriodDataManager` | `0x081958b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081958b6  _ZN4ARAD27Arad_EventPeriodDataManager10isRewardedENS_19EventRewardItemAradE
#           ARAD::Arad_EventPeriodDataManager::isRewarded(ARAD::EventRewardItemArad)
# range [0x081958b6, 0x08195993]
081958b6 +0x00:  push   %ebp
081958b7 +0x01:  mov    %esp,%ebp
081958b9 +0x03:  push   %esi
081958ba +0x04:  push   %ebx
081958bb +0x05:  sub    $0x30,%esp
081958be +0x08:  mov    0x8(%ebp),%eax
081958c1 +0x0b:  add    $0x24,%eax
081958c4 +0x0e:  mov    %eax,0x4(%esp)
081958c8 +0x12:  lea    -0x18(%ebp),%eax
081958cb +0x15:  mov    %eax,(%esp)
081958ce +0x18:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
081958d3 +0x1d:  mov    0x8(%ebp),%eax
081958d6 +0x20:  lea    0x3c(%eax),%edx
081958d9 +0x23:  lea    -0x14(%ebp),%eax
081958dc +0x26:  mov    %edx,0x4(%esp)
081958e0 +0x2a:  mov    %eax,(%esp)
081958e3 +0x2d:  call   0819606c <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x42c>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x42c
081958e8 +0x32:  sub    $0x4,%esp
081958eb +0x35:  mov    0x8(%ebp),%eax
081958ee +0x38:  lea    0x3c(%eax),%edx
081958f1 +0x3b:  lea    -0x10(%ebp),%eax
081958f4 +0x3e:  mov    %edx,0x4(%esp)
081958f8 +0x42:  mov    %eax,(%esp)
081958fb +0x45:  call   08196046 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x406>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x406
08195900 +0x4a:  sub    $0x4,%esp
08195903 +0x4d:  lea    -0x1c(%ebp),%eax
08195906 +0x50:  lea    0xc(%ebp),%edx
08195909 +0x53:  mov    %edx,0xc(%esp)
0819590d +0x57:  mov    -0x14(%ebp),%edx
08195910 +0x5a:  mov    %edx,0x8(%esp)
08195914 +0x5e:  mov    -0x10(%ebp),%edx
08195917 +0x61:  mov    %edx,0x4(%esp)
0819591b +0x65:  mov    %eax,(%esp)
0819591e +0x68:  call   0819608f <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x44f>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x44f
08195923 +0x6d:  sub    $0x4,%esp
08195926 +0x70:  mov    0x8(%ebp),%eax
08195929 +0x73:  lea    0x3c(%eax),%edx
0819592c +0x76:  lea    -0xc(%ebp),%eax
0819592f +0x79:  mov    %edx,0x4(%esp)
08195933 +0x7d:  mov    %eax,(%esp)
08195936 +0x80:  call   0819606c <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x42c>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x42c
0819593b +0x85:  sub    $0x4,%esp
0819593e +0x88:  lea    -0x1c(%ebp),%eax
08195941 +0x8b:  mov    %eax,0x4(%esp)
08195945 +0x8f:  lea    -0xc(%ebp),%eax
08195948 +0x92:  mov    %eax,(%esp)
0819594b +0x95:  call   081960e4 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x4a4>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x4a4
08195950 +0x9a:  test   %al,%al
08195952 +0x9c:  je     0819595b <+0xa5>
08195954 +0x9e:  mov    $0x1,%ebx
08195959 +0xa3:  jmp    0819597d <+0xc7>
0819595b +0xa5:  mov    $0x0,%ebx
08195960 +0xaa:  jmp    0819597d <+0xc7>
08195962 +0xac:  mov    %edx,%ebx
08195964 +0xae:  mov    %eax,%esi
08195966 +0xb0:  lea    -0x18(%ebp),%eax
08195969 +0xb3:  mov    %eax,(%esp)
0819596c +0xb6:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08195971 +0xbb:  mov    %esi,%eax
08195973 +0xbd:  mov    %ebx,%edx
08195975 +0xbf:  mov    %eax,(%esp)
08195978 +0xc2:  call   08ae3750 <_Unwind_Resume>
0819597d +0xc7:  lea    -0x18(%ebp),%eax
08195980 +0xca:  mov    %eax,(%esp)
08195983 +0xcd:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08195988 +0xd2:  mov    %ebx,%eax
0819598a +0xd4:  lea    -0x8(%ebp),%esp
0819598d +0xd7:  add    $0x0,%esp
08195990 +0xda:  pop    %ebx
08195991 +0xdb:  pop    %esi
08195992 +0xdc:  pop    %ebp
08195993 +0xdd:  ret
```

## 反编译 C

```c
// ARAD::Arad_EventPeriodDataManager::isRewarded @ 0x81958b6

/* ARAD::Arad_EventPeriodDataManager::isRewarded(ARAD::EventRewardItemArad) */

bool ARAD::Arad_EventPeriodDataManager::isRewarded(int param_1)

{
  char cVar1;
  _List_iterator local_20 [4];
  Guard<Mutex> local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  _List_iterator<ARAD::EventRewardItemArad> local_10 [4];
  
  Guard<Mutex>::Guard(local_1c,(Mutex *)(param_1 + 0x24));
                    /* try { // try from 081958e3 to 0819593a has its CatchHandler @ 08195962 */
  std::list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>>::end();
  std::list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>>::begin();
  std::find<std::_List_iterator<ARAD::EventRewardItemArad>,ARAD::EventRewardItemArad>
            (local_20,local_14,local_18,&stack0x00000008);
  std::list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>>::end();
  cVar1 = std::_List_iterator<ARAD::EventRewardItemArad>::operator!=(local_10,local_20);
  Guard<Mutex>::~Guard(local_1c);
  return cVar1 != '\0';
}
```
