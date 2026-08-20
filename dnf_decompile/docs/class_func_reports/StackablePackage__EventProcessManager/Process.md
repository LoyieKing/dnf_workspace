# Process

`_ZN16StackablePackage19EventProcessManager7ProcessENS_10EVENT_TYPEER5CUseri`

`StackablePackage::EventProcessManager::Process(StackablePackage::EVENT_TYPE, CUser&, int)`

| 类 | 地址 |
|---|---|
| `StackablePackage::EventProcessManager` | `0x0828186c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828186c  _ZN16StackablePackage19EventProcessManager7ProcessENS_10EVENT_TYPEER5CUseri
#           StackablePackage::EventProcessManager::Process(StackablePackage::EVENT_TYPE, CUser&, int)
# range [0x0828186c, 0x082819c5]
0828186c +0x000:  push   %ebp
0828186d +0x001:  mov    %esp,%ebp
0828186f +0x003:  sub    $0x38,%esp
08281872 +0x006:  mov    0x14(%ebp),%eax
08281875 +0x009:  mov    %eax,0x4(%esp)
08281879 +0x00d:  mov    0x8(%ebp),%eax
0828187c +0x010:  mov    %eax,(%esp)
0828187f +0x013:  call   082819c6 <_ZNK16StackablePackage19EventProcessManager22isStackablePackageItemEi>  ; StackablePackage::EventProcessManager::isStackablePackageItem(int) const
08281884 +0x018:  xor    $0x1,%eax
08281887 +0x01b:  test   %al,%al
08281889 +0x01d:  je     08281895 <+0x29>
0828188b +0x01f:  mov    $0x0,%eax
08281890 +0x024:  jmp    082819c4 <+0x158>
08281895 +0x029:  mov    0x8(%ebp),%eax
08281898 +0x02c:  mov    %eax,(%esp)
0828189b +0x02f:  call   08281d44 <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x166>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x166
082818a0 +0x034:  mov    %eax,%edx
082818a2 +0x036:  lea    -0x24(%ebp),%eax
082818a5 +0x039:  lea    0xc(%ebp),%ecx
082818a8 +0x03c:  mov    %ecx,0x8(%esp)
082818ac +0x040:  mov    %edx,0x4(%esp)
082818b0 +0x044:  mov    %eax,(%esp)
082818b3 +0x047:  call   08281d4e <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x170>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x170
082818b8 +0x04c:  sub    $0x4,%esp
082818bb +0x04f:  mov    0x8(%ebp),%eax
082818be +0x052:  mov    %eax,(%esp)
082818c1 +0x055:  call   08281d44 <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x166>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x166
082818c6 +0x05a:  mov    %eax,%edx
082818c8 +0x05c:  lea    -0x20(%ebp),%eax
082818cb +0x05f:  mov    %edx,0x4(%esp)
082818cf +0x063:  mov    %eax,(%esp)
082818d2 +0x066:  call   08281d7a <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x19c>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x19c
082818d7 +0x06b:  sub    $0x4,%esp
082818da +0x06e:  lea    -0x24(%ebp),%eax
082818dd +0x071:  mov    %eax,0x4(%esp)
082818e1 +0x075:  lea    -0x20(%ebp),%eax
082818e4 +0x078:  mov    %eax,(%esp)
082818e7 +0x07b:  call   08281da0 <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x1c2>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x1c2
082818ec +0x080:  test   %al,%al
082818ee +0x082:  je     082818fa <+0x8e>
082818f0 +0x084:  mov    $0x0,%eax
082818f5 +0x089:  jmp    082819c4 <+0x158>
082818fa +0x08e:  lea    -0x24(%ebp),%eax
082818fd +0x091:  mov    %eax,(%esp)
08281900 +0x094:  call   08281db4 <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x1d6>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x1d6
08281905 +0x099:  add    $0x4,%eax
08281908 +0x09c:  mov    %eax,-0xc(%ebp)
0828190b +0x09f:  mov    0x14(%ebp),%eax
0828190e +0x0a2:  mov    %eax,0x4(%esp)
08281912 +0x0a6:  lea    -0x1c(%ebp),%eax
08281915 +0x0a9:  mov    %eax,(%esp)
08281918 +0x0ac:  call   08281c3a <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x5c>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x5c
0828191d +0x0b1:  lea    -0x18(%ebp),%eax
08281920 +0x0b4:  mov    -0xc(%ebp),%edx
08281923 +0x0b7:  mov    %edx,0x4(%esp)
08281927 +0x0bb:  mov    %eax,(%esp)
0828192a +0x0be:  call   08281de8 <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x20a>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x20a
0828192f +0x0c3:  sub    $0x4,%esp
08281932 +0x0c6:  lea    -0x14(%ebp),%eax
08281935 +0x0c9:  mov    -0xc(%ebp),%edx
08281938 +0x0cc:  mov    %edx,0x4(%esp)
0828193c +0x0d0:  mov    %eax,(%esp)
0828193f +0x0d3:  call   08281dc2 <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x1e4>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x1e4
08281944 +0x0d8:  sub    $0x4,%esp
08281947 +0x0db:  lea    -0x28(%ebp),%eax
0828194a +0x0de:  mov    -0x1c(%ebp),%edx
0828194d +0x0e1:  mov    %edx,0xc(%esp)
08281951 +0x0e5:  mov    -0x18(%ebp),%edx
08281954 +0x0e8:  mov    %edx,0x8(%esp)
08281958 +0x0ec:  mov    -0x14(%ebp),%edx
0828195b +0x0ef:  mov    %edx,0x4(%esp)
0828195f +0x0f3:  mov    %eax,(%esp)
08281962 +0x0f6:  call   08281e0d <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x22f>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x22f
08281967 +0x0fb:  sub    $0x4,%esp
0828196a +0x0fe:  lea    -0x10(%ebp),%eax
0828196d +0x101:  mov    -0xc(%ebp),%edx
08281970 +0x104:  mov    %edx,0x4(%esp)
08281974 +0x108:  mov    %eax,(%esp)
08281977 +0x10b:  call   08281de8 <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x20a>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x20a
0828197c +0x110:  sub    $0x4,%esp
0828197f +0x113:  lea    -0x28(%ebp),%eax
08281982 +0x116:  mov    %eax,0x4(%esp)
08281986 +0x11a:  lea    -0x10(%ebp),%eax
08281989 +0x11d:  mov    %eax,(%esp)
0828198c +0x120:  call   08281e62 <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x284>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x284
08281991 +0x125:  test   %al,%al
08281993 +0x127:  je     0828199c <+0x130>
08281995 +0x129:  mov    $0x0,%eax
0828199a +0x12e:  jmp    082819c4 <+0x158>
0828199c +0x130:  lea    -0x28(%ebp),%eax
0828199f +0x133:  mov    %eax,(%esp)
082819a2 +0x136:  call   08281e76 <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x298>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x298
082819a7 +0x13b:  mov    0x4(%eax),%eax
082819aa +0x13e:  mov    (%eax),%edx
082819ac +0x140:  add    $0xc,%edx
082819af +0x143:  mov    (%edx),%ecx
082819b1 +0x145:  mov    0x14(%ebp),%edx
082819b4 +0x148:  mov    %edx,0x8(%esp)
082819b8 +0x14c:  mov    0x10(%ebp),%edx
082819bb +0x14f:  mov    %edx,0x4(%esp)
082819bf +0x153:  mov    %eax,(%esp)
082819c2 +0x156:  call   *%ecx
082819c4 +0x158:  leave
082819c5 +0x159:  ret
```

## 反编译 C

```c
// StackablePackage::EventProcessManager::Process @ 0x828186c

/* StackablePackage::EventProcessManager::Process(StackablePackage::EVENT_TYPE, CUser&, int) */

undefined4 __thiscall
StackablePackage::EventProcessManager::Process
          (EventProcessManager *this,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator local_2c [4];
  _Rb_tree_iterator local_28 [4];
  map<StackablePackage::EVENT_TYPE,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>,std::less<StackablePackage::EVENT_TYPE>,std::allocator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>>
  local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
  local_14 [4];
  int local_10;
  
  cVar1 = isStackablePackageItem(this,param_4);
  if (cVar1 == '\x01') {
    std::auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl>::operator->
              ((auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl> *)this);
    std::
    map<StackablePackage::EVENT_TYPE,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>,std::less<StackablePackage::EVENT_TYPE>,std::allocator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>>
    ::find(local_28);
    std::auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl>::operator->
              ((auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl> *)this);
    std::
    map<StackablePackage::EVENT_TYPE,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>,std::less<StackablePackage::EVENT_TYPE>,std::allocator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>>
    ::end(local_24);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>
            ::operator==((_Rb_tree_iterator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>
                          *)local_24,local_28);
    if (cVar1 == '\0') {
      local_10 = std::
                 _Rb_tree_iterator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>
                 ::operator*((_Rb_tree_iterator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>
                              *)local_28);
      local_10 = local_10 + 4;
      FindControllableEventProcessor::FindControllableEventProcessor
                ((FindControllableEventProcessor *)&local_20,param_4);
      std::
      map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
      ::end((map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
             *)&local_1c);
      std::
      map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
      ::begin((map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
               *)&local_18);
      std::
      find_if<std::_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>>,StackablePackage::FindControllableEventProcessor>
                (local_2c,local_18,local_1c,local_20);
      std::
      map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
      ::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>>::
              operator==((_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>>
                          *)local_14,local_2c);
      if (cVar1 == '\0') {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>>::
                operator*((_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>>
                           *)local_2c);
        uVar2 = (**(code **)(**(int **)(iVar3 + 4) + 0xc))(*(int **)(iVar3 + 4),param_3,param_4);
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
