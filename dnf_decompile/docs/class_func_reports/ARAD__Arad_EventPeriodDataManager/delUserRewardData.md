# delUserRewardData

`_ZN4ARAD27Arad_EventPeriodDataManager17delUserRewardDataEP5CUser`

`ARAD::Arad_EventPeriodDataManager::delUserRewardData(CUser*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_EventPeriodDataManager` | `0x08195b06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08195b06  _ZN4ARAD27Arad_EventPeriodDataManager17delUserRewardDataEP5CUser
#           ARAD::Arad_EventPeriodDataManager::delUserRewardData(CUser*)
# range [0x08195b06, 0x08195bff]
08195b06 +0x00:  push   %ebp
08195b07 +0x01:  mov    %esp,%ebp
08195b09 +0x03:  push   %esi
08195b0a +0x04:  push   %ebx
08195b0b +0x05:  sub    $0x30,%esp
08195b0e +0x08:  mov    0x8(%ebp),%eax
08195b11 +0x0b:  add    $0x24,%eax
08195b14 +0x0e:  mov    %eax,0x4(%esp)
08195b18 +0x12:  lea    -0x14(%ebp),%eax
08195b1b +0x15:  mov    %eax,(%esp)
08195b1e +0x18:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08195b23 +0x1d:  mov    0x8(%ebp),%eax
08195b26 +0x20:  lea    0x3c(%eax),%edx
08195b29 +0x23:  lea    -0x18(%ebp),%eax
08195b2c +0x26:  mov    %edx,0x4(%esp)
08195b30 +0x2a:  mov    %eax,(%esp)
08195b33 +0x2d:  call   08196046 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x406>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x406
08195b38 +0x32:  sub    $0x4,%esp
08195b3b +0x35:  jmp    08195b9c <+0x96>
08195b3d +0x37:  lea    -0x18(%ebp),%eax
08195b40 +0x3a:  mov    %eax,(%esp)
08195b43 +0x3d:  call   0819612e <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x4ee>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x4ee
08195b48 +0x42:  mov    0x4(%eax),%ebx
08195b4b +0x45:  mov    0xc(%ebp),%eax
08195b4e +0x48:  mov    %eax,(%esp)
08195b51 +0x4b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08195b56 +0x50:  cmp    %eax,%ebx
08195b58 +0x52:  sete   %al
08195b5b +0x55:  test   %al,%al
08195b5d +0x57:  je     08195b91 <+0x8b>
08195b5f +0x59:  mov    -0x18(%ebp),%eax
08195b62 +0x5c:  mov    %eax,-0x1c(%ebp)
08195b65 +0x5f:  lea    -0x18(%ebp),%eax
08195b68 +0x62:  mov    %eax,(%esp)
08195b6b +0x65:  call   0819613c <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x4fc>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x4fc
08195b70 +0x6a:  mov    0x8(%ebp),%eax
08195b73 +0x6d:  lea    0x3c(%eax),%ecx
08195b76 +0x70:  lea    -0xc(%ebp),%eax
08195b79 +0x73:  mov    -0x1c(%ebp),%edx
08195b7c +0x76:  mov    %edx,0x8(%esp)
08195b80 +0x7a:  mov    %ecx,0x4(%esp)
08195b84 +0x7e:  mov    %eax,(%esp)
08195b87 +0x81:  call   08196150 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x510>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x510
08195b8c +0x86:  sub    $0x4,%esp
08195b8f +0x89:  jmp    08195b9c <+0x96>
08195b91 +0x8b:  lea    -0x18(%ebp),%eax
08195b94 +0x8e:  mov    %eax,(%esp)
08195b97 +0x91:  call   0819613c <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x4fc>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x4fc
08195b9c +0x96:  mov    0x8(%ebp),%eax
08195b9f +0x99:  lea    0x3c(%eax),%edx
08195ba2 +0x9c:  lea    -0x10(%ebp),%eax
08195ba5 +0x9f:  mov    %edx,0x4(%esp)
08195ba9 +0xa3:  mov    %eax,(%esp)
08195bac +0xa6:  call   0819606c <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x42c>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x42c
08195bb1 +0xab:  sub    $0x4,%esp
08195bb4 +0xae:  lea    -0x10(%ebp),%eax
08195bb7 +0xb1:  mov    %eax,0x4(%esp)
08195bbb +0xb5:  lea    -0x18(%ebp),%eax
08195bbe +0xb8:  mov    %eax,(%esp)
08195bc1 +0xbb:  call   081960e4 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x4a4>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x4a4
08195bc6 +0xc0:  test   %al,%al
08195bc8 +0xc2:  jne    08195b3d <+0x37>
08195bce +0xc8:  jmp    08195beb <+0xe5>
08195bd0 +0xca:  mov    %edx,%ebx
08195bd2 +0xcc:  mov    %eax,%esi
08195bd4 +0xce:  lea    -0x14(%ebp),%eax
08195bd7 +0xd1:  mov    %eax,(%esp)
08195bda +0xd4:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08195bdf +0xd9:  mov    %esi,%eax
08195be1 +0xdb:  mov    %ebx,%edx
08195be3 +0xdd:  mov    %eax,(%esp)
08195be6 +0xe0:  call   08ae3750 <_Unwind_Resume>
08195beb +0xe5:  lea    -0x14(%ebp),%eax
08195bee +0xe8:  mov    %eax,(%esp)
08195bf1 +0xeb:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08195bf6 +0xf0:  lea    -0x8(%ebp),%esp
08195bf9 +0xf3:  add    $0x0,%esp
08195bfc +0xf6:  pop    %ebx
08195bfd +0xf7:  pop    %esi
08195bfe +0xf8:  pop    %ebp
08195bff +0xf9:  ret
```

## 反编译 C

```c
// ARAD::Arad_EventPeriodDataManager::delUserRewardData @ 0x8195b06

/* ARAD::Arad_EventPeriodDataManager::delUserRewardData(CUser*) */

void __thiscall
ARAD::Arad_EventPeriodDataManager::delUserRewardData
          (Arad_EventPeriodDataManager *this,CUser *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 local_1c;
  Guard<Mutex> local_18 [4];
  _List_iterator local_14 [4];
  undefined1 local_10 [4];
  
  Guard<Mutex>::Guard(local_18,(Mutex *)(this + 0x24));
                    /* try { // try from 08195b33 to 08195bb0 has its CatchHandler @ 08195bd0 */
  std::list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>>::begin();
  while( true ) {
    std::list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>>::end();
    cVar2 = std::_List_iterator<ARAD::EventRewardItemArad>::operator!=
                      ((_List_iterator<ARAD::EventRewardItemArad> *)&local_1c,local_14);
    if (cVar2 == '\0') break;
    iVar3 = std::_List_iterator<ARAD::EventRewardItemArad>::operator->
                      ((_List_iterator<ARAD::EventRewardItemArad> *)&local_1c);
    iVar3 = *(int *)(iVar3 + 4);
    iVar4 = CUser::get_acc_id(param_1);
    uVar1 = local_1c;
    if (iVar3 == iVar4) {
      std::_List_iterator<ARAD::EventRewardItemArad>::operator++
                ((_List_iterator<ARAD::EventRewardItemArad> *)&local_1c);
      std::list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>>::erase
                (local_10,this + 0x3c,uVar1);
    }
    else {
      std::_List_iterator<ARAD::EventRewardItemArad>::operator++
                ((_List_iterator<ARAD::EventRewardItemArad> *)&local_1c);
    }
  }
  Guard<Mutex>::~Guard(local_18);
  return;
}
```
