# addUserRewardData

`_ZN4ARAD27Arad_EventPeriodDataManager17addUserRewardDataEP5CUserRNS_19EventRewardItemAradE`

`ARAD::Arad_EventPeriodDataManager::addUserRewardData(CUser*, ARAD::EventRewardItemArad&)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_EventPeriodDataManager` | `0x08195aa4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08195aa4  _ZN4ARAD27Arad_EventPeriodDataManager17addUserRewardDataEP5CUserRNS_19EventRewardItemAradE
#           ARAD::Arad_EventPeriodDataManager::addUserRewardData(CUser*, ARAD::EventRewardItemArad&)
# range [0x08195aa4, 0x08195b05]
08195aa4 +0x00:  push   %ebp
08195aa5 +0x01:  mov    %esp,%ebp
08195aa7 +0x03:  push   %esi
08195aa8 +0x04:  push   %ebx
08195aa9 +0x05:  sub    $0x20,%esp
08195aac +0x08:  mov    0x8(%ebp),%eax
08195aaf +0x0b:  add    $0x24,%eax
08195ab2 +0x0e:  mov    %eax,0x4(%esp)
08195ab6 +0x12:  lea    -0xc(%ebp),%eax
08195ab9 +0x15:  mov    %eax,(%esp)
08195abc +0x18:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08195ac1 +0x1d:  mov    0x8(%ebp),%eax
08195ac4 +0x20:  lea    0x3c(%eax),%edx
08195ac7 +0x23:  mov    0x10(%ebp),%eax
08195aca +0x26:  mov    %eax,0x4(%esp)
08195ace +0x2a:  mov    %edx,(%esp)
08195ad1 +0x2d:  call   081960f8 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x4b8>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x4b8
08195ad6 +0x32:  jmp    08195af3 <+0x4f>
08195ad8 +0x34:  mov    %edx,%ebx
08195ada +0x36:  mov    %eax,%esi
08195adc +0x38:  lea    -0xc(%ebp),%eax
08195adf +0x3b:  mov    %eax,(%esp)
08195ae2 +0x3e:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08195ae7 +0x43:  mov    %esi,%eax
08195ae9 +0x45:  mov    %ebx,%edx
08195aeb +0x47:  mov    %eax,(%esp)
08195aee +0x4a:  call   08ae3750 <_Unwind_Resume>
08195af3 +0x4f:  lea    -0xc(%ebp),%eax
08195af6 +0x52:  mov    %eax,(%esp)
08195af9 +0x55:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08195afe +0x5a:  add    $0x20,%esp
08195b01 +0x5d:  pop    %ebx
08195b02 +0x5e:  pop    %esi
08195b03 +0x5f:  pop    %ebp
08195b04 +0x60:  ret
08195b05 +0x61:  nop
```

## 反编译 C

```c
// ARAD::Arad_EventPeriodDataManager::addUserRewardData @ 0x8195aa4

/* ARAD::Arad_EventPeriodDataManager::addUserRewardData(CUser*, ARAD::EventRewardItemArad&) */

void __thiscall
ARAD::Arad_EventPeriodDataManager::addUserRewardData
          (Arad_EventPeriodDataManager *this,CUser *param_1,EventRewardItemArad *param_2)

{
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + 0x24));
                    /* try { // try from 08195ad1 to 08195ad5 has its CatchHandler @ 08195ad8 */
  std::list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>>::push_back
            ((list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>> *)
             (this + 0x3c),param_2);
  Guard<Mutex>::~Guard(local_10);
  return;
}
```
