# registerEventProcessor

`_ZN16StackablePackage19EventProcessManager22registerEventProcessorEPNS_14EventProcessorE`

`StackablePackage::EventProcessManager::registerEventProcessor(StackablePackage::EventProcessor*)`

| 类 | 地址 |
|---|---|
| `StackablePackage::EventProcessManager` | `0x08281a2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08281a2a  _ZN16StackablePackage19EventProcessManager22registerEventProcessorEPNS_14EventProcessorE
#           StackablePackage::EventProcessManager::registerEventProcessor(StackablePackage::EventProcessor*)
# range [0x08281a2a, 0x08281a99]
08281a2a +0x00:  push   %ebp
08281a2b +0x01:  mov    %esp,%ebp
08281a2d +0x03:  sub    $0x38,%esp
08281a30 +0x06:  mov    0xc(%ebp),%eax
08281a33 +0x09:  mov    %eax,(%esp)
08281a36 +0x0c:  call   08281c06 <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x28>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x28
08281a3b +0x11:  mov    %eax,-0x10(%ebp)
08281a3e +0x14:  lea    0xc(%ebp),%eax
08281a41 +0x17:  mov    %eax,0x8(%esp)
08281a45 +0x1b:  lea    -0x10(%ebp),%eax
08281a48 +0x1e:  mov    %eax,0x4(%esp)
08281a4c +0x22:  lea    -0x18(%ebp),%eax
08281a4f +0x25:  mov    %eax,(%esp)
08281a52 +0x28:  call   08281ffa <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x41c>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x41c
08281a57 +0x2d:  mov    0xc(%ebp),%eax
08281a5a +0x30:  mov    %eax,(%esp)
08281a5d +0x33:  call   08281bfa <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x1c>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x1c
08281a62 +0x38:  mov    %eax,-0xc(%ebp)
08281a65 +0x3b:  mov    0x8(%ebp),%eax
08281a68 +0x3e:  mov    %eax,(%esp)
08281a6b +0x41:  call   08281d44 <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x166>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x166
08281a70 +0x46:  lea    -0xc(%ebp),%edx
08281a73 +0x49:  mov    %edx,0x4(%esp)
08281a77 +0x4d:  mov    %eax,(%esp)
08281a7a +0x50:  call   08281eae <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x2d0>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x2d0
08281a7f +0x55:  lea    -0x20(%ebp),%edx
08281a82 +0x58:  lea    -0x18(%ebp),%ecx
08281a85 +0x5b:  mov    %ecx,0x8(%esp)
08281a89 +0x5f:  mov    %eax,0x4(%esp)
08281a8d +0x63:  mov    %edx,(%esp)
08281a90 +0x66:  call   08282028 <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x44a>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x44a
08281a95 +0x6b:  sub    $0x4,%esp
08281a98 +0x6e:  leave
08281a99 +0x6f:  ret
```

## 反编译 C

```c
// StackablePackage::EventProcessManager::registerEventProcessor @ 0x8281a2a

/* StackablePackage::EventProcessManager::registerEventProcessor(StackablePackage::EventProcessor*)
    */

void __thiscall
StackablePackage::EventProcessManager::registerEventProcessor
          (EventProcessManager *this,EventProcessor *param_1)

{
  map<StackablePackage::EVENT_TYPE,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>,std::less<StackablePackage::EVENT_TYPE>,std::allocator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>>
  *this_00;
  pair local_24 [8];
  pair<int_const,StackablePackage::EventProcessor*> local_1c [8];
  int local_14;
  undefined4 local_10 [3];
  
  local_14 = EventProcessor::GetEventId(param_1);
  std::pair<int_const,StackablePackage::EventProcessor*>::
  pair<int,StackablePackage::EventProcessor*&>(local_1c,&local_14,&param_1);
  local_10[0] = EventProcessor::GetEventType(param_1);
  this_00 = (map<StackablePackage::EVENT_TYPE,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>,std::less<StackablePackage::EVENT_TYPE>,std::allocator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>>
             *)std::auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl>::
               operator->((auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl>
                           *)this);
  std::
  map<StackablePackage::EVENT_TYPE,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>,std::less<StackablePackage::EVENT_TYPE>,std::allocator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>>
  ::operator[](this_00,(EVENT_TYPE *)local_10);
  std::
  map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
  ::insert(local_24);
  return;
}
```
