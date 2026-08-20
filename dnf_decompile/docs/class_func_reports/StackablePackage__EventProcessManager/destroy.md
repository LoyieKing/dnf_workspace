# destroy

`_ZN16StackablePackage19EventProcessManager7destroyEv`

`StackablePackage::EventProcessManager::destroy()`

| 类 | 地址 |
|---|---|
| `StackablePackage::EventProcessManager` | `0x08281a9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08281a9a  _ZN16StackablePackage19EventProcessManager7destroyEv
#           StackablePackage::EventProcessManager::destroy()
# range [0x08281a9a, 0x08281b9d]
08281a9a +0x000:  push   %ebp
08281a9b +0x001:  mov    %esp,%ebp
08281a9d +0x003:  sub    $0x38,%esp
08281aa0 +0x006:  mov    0x8(%ebp),%eax
08281aa3 +0x009:  mov    %eax,(%esp)
08281aa6 +0x00c:  call   08281d44 <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x166>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x166
08281aab +0x011:  mov    %eax,%edx
08281aad +0x013:  lea    -0x1c(%ebp),%eax
08281ab0 +0x016:  mov    %edx,0x4(%esp)
08281ab4 +0x01a:  mov    %eax,(%esp)
08281ab7 +0x01d:  call   08282054 <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x476>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x476
08281abc +0x022:  sub    $0x4,%esp
08281abf +0x025:  jmp    08281b63 <+0xc9>
08281ac4 +0x02a:  lea    -0x1c(%ebp),%eax
08281ac7 +0x02d:  mov    %eax,(%esp)
08281aca +0x030:  call   08281db4 <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x1d6>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x1d6
08281acf +0x035:  add    $0x4,%eax
08281ad2 +0x038:  mov    %eax,-0x10(%ebp)
08281ad5 +0x03b:  lea    -0x20(%ebp),%eax
08281ad8 +0x03e:  mov    -0x10(%ebp),%edx
08281adb +0x041:  mov    %edx,0x4(%esp)
08281adf +0x045:  mov    %eax,(%esp)
08281ae2 +0x048:  call   08281dc2 <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x1e4>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x1e4
08281ae7 +0x04d:  sub    $0x4,%esp
08281aea +0x050:  jmp    08281b2d <+0x93>
08281aec +0x052:  lea    -0x20(%ebp),%eax
08281aef +0x055:  mov    %eax,(%esp)
08281af2 +0x058:  call   08281e76 <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x298>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x298
08281af7 +0x05d:  mov    0x4(%eax),%eax
08281afa +0x060:  mov    %eax,-0xc(%ebp)
08281afd +0x063:  cmpl   $0x0,-0xc(%ebp)
08281b01 +0x067:  je     08281b22 <+0x88>
08281b03 +0x069:  cmpl   $0x0,-0xc(%ebp)
08281b07 +0x06d:  je     08281b1b <+0x81>
08281b09 +0x06f:  mov    -0xc(%ebp),%eax
08281b0c +0x072:  mov    (%eax),%eax
08281b0e +0x074:  add    $0x4,%eax
08281b11 +0x077:  mov    (%eax),%edx
08281b13 +0x079:  mov    -0xc(%ebp),%eax
08281b16 +0x07c:  mov    %eax,(%esp)
08281b19 +0x07f:  call   *%edx
08281b1b +0x081:  movl   $0x0,-0xc(%ebp)
08281b22 +0x088:  lea    -0x20(%ebp),%eax
08281b25 +0x08b:  mov    %eax,(%esp)
08281b28 +0x08e:  call   082820c0 <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x4e2>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x4e2
08281b2d +0x093:  lea    -0x14(%ebp),%eax
08281b30 +0x096:  mov    -0x10(%ebp),%edx
08281b33 +0x099:  mov    %edx,0x4(%esp)
08281b37 +0x09d:  mov    %eax,(%esp)
08281b3a +0x0a0:  call   08281de8 <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x20a>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x20a
08281b3f +0x0a5:  sub    $0x4,%esp
08281b42 +0x0a8:  lea    -0x14(%ebp),%eax
08281b45 +0x0ab:  mov    %eax,0x4(%esp)
08281b49 +0x0af:  lea    -0x20(%ebp),%eax
08281b4c +0x0b2:  mov    %eax,(%esp)
08281b4f +0x0b5:  call   082820ac <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x4ce>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x4ce
08281b54 +0x0ba:  test   %al,%al
08281b56 +0x0bc:  jne    08281aec <+0x52>
08281b58 +0x0be:  lea    -0x1c(%ebp),%eax
08281b5b +0x0c1:  mov    %eax,(%esp)
08281b5e +0x0c4:  call   0828208e <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x4b0>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x4b0
08281b63 +0x0c9:  mov    0x8(%ebp),%eax
08281b66 +0x0cc:  mov    %eax,(%esp)
08281b69 +0x0cf:  call   08281d44 <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x166>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x166
08281b6e +0x0d4:  mov    %eax,%edx
08281b70 +0x0d6:  lea    -0x18(%ebp),%eax
08281b73 +0x0d9:  mov    %edx,0x4(%esp)
08281b77 +0x0dd:  mov    %eax,(%esp)
08281b7a +0x0e0:  call   08281d7a <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x19c>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x19c
08281b7f +0x0e5:  sub    $0x4,%esp
08281b82 +0x0e8:  lea    -0x18(%ebp),%eax
08281b85 +0x0eb:  mov    %eax,0x4(%esp)
08281b89 +0x0ef:  lea    -0x1c(%ebp),%eax
08281b8c +0x0f2:  mov    %eax,(%esp)
08281b8f +0x0f5:  call   0828207a <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x49c>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x49c
08281b94 +0x0fa:  test   %al,%al
08281b96 +0x0fc:  jne    08281ac4 <+0x2a>
08281b9c +0x102:  leave
08281b9d +0x103:  ret
```

## 反编译 C

```c
// StackablePackage::EventProcessManager::destroy @ 0x8281a9a

/* StackablePackage::EventProcessManager::destroy() */

void __thiscall StackablePackage::EventProcessManager::destroy(EventProcessManager *this)

{
  char cVar1;
  int iVar2;
  map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
  local_24 [4];
  map<StackablePackage::EVENT_TYPE,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>,std::less<StackablePackage::EVENT_TYPE>,std::allocator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>>
  local_20 [4];
  map<StackablePackage::EVENT_TYPE,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>,std::less<StackablePackage::EVENT_TYPE>,std::allocator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>>
  local_1c [4];
  map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
  local_18 [4];
  int local_14;
  int *local_10;
  
  std::auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl>::operator->
            ((auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl> *)this);
  std::
  map<StackablePackage::EVENT_TYPE,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>,std::less<StackablePackage::EVENT_TYPE>,std::allocator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>>
  ::begin(local_20);
  while( true ) {
    std::auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl>::operator->
              ((auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl> *)this);
    std::
    map<StackablePackage::EVENT_TYPE,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>,std::less<StackablePackage::EVENT_TYPE>,std::allocator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>>
    ::end(local_1c);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>
            ::operator!=((_Rb_tree_iterator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>
                          *)local_20,(_Rb_tree_iterator *)local_1c);
    if (cVar1 == '\0') break;
    local_14 = std::
               _Rb_tree_iterator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>
               ::operator*((_Rb_tree_iterator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>
                            *)local_20);
    local_14 = local_14 + 4;
    std::
    map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
    ::begin(local_24);
    while( true ) {
      std::
      map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
      ::end(local_18);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>>::
              operator!=((_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>>
                          *)local_24,(_Rb_tree_iterator *)local_18);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>>::
              operator*((_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>> *
                        )local_24);
      local_10 = *(int **)(iVar2 + 4);
      if (local_10 != (int *)0x0) {
        if (local_10 != (int *)0x0) {
          (**(code **)(*local_10 + 4))(local_10);
        }
        local_10 = (int *)0x0;
      }
      std::_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>> *)
                 local_24);
    }
    std::
    _Rb_tree_iterator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>
    ::operator++((_Rb_tree_iterator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>
                  *)local_20);
  }
  return;
}
```
