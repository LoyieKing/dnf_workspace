# EventProcessManager

`_ZN16StackablePackage19EventProcessManagerC1Ev`

`StackablePackage::EventProcessManager::EventProcessManager()`

| 类 | 地址 |
|---|---|
| `StackablePackage::EventProcessManager` | `0x082817ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082817ca  _ZN16StackablePackage19EventProcessManagerC1Ev
#           StackablePackage::EventProcessManager::EventProcessManager()
# range [0x082817ca, 0x08281829]
082817ca +0x00:  push   %ebp
082817cb +0x01:  mov    %esp,%ebp
082817cd +0x03:  push   %edi
082817ce +0x04:  push   %esi
082817cf +0x05:  push   %ebx
082817d0 +0x06:  sub    $0x1c,%esp
082817d3 +0x09:  movl   $0x18,(%esp)
082817da +0x10:  call   08724450 <_Znwj>  ; operator new(unsigned int)
082817df +0x15:  mov    %eax,%ebx
082817e1 +0x17:  mov    %ebx,%eax
082817e3 +0x19:  mov    %eax,(%esp)
082817e6 +0x1c:  call   08281c26 <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x48>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x48
082817eb +0x21:  jmp    08281805 <+0x3b>
082817ed +0x23:  mov    %edx,%esi
082817ef +0x25:  mov    %eax,%edi
082817f1 +0x27:  mov    %ebx,(%esp)
082817f4 +0x2a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082817f9 +0x2f:  mov    %edi,%eax
082817fb +0x31:  mov    %esi,%edx
082817fd +0x33:  mov    %eax,(%esp)
08281800 +0x36:  call   08ae3750 <_Unwind_Resume>
08281805 +0x3b:  mov    %ebx,%edx
08281807 +0x3d:  mov    0x8(%ebp),%eax
0828180a +0x40:  mov    %edx,0x4(%esp)
0828180e +0x44:  mov    %eax,(%esp)
08281811 +0x47:  call   08281cfc <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x11e>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x11e
08281816 +0x4c:  mov    0x8(%ebp),%eax
08281819 +0x4f:  mov    %eax,(%esp)
0828181c +0x52:  call   082817c4 <_ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv>  ; StackablePackage::EventProcessManager::setupEventProcessors()
08281821 +0x57:  add    $0x1c,%esp
08281824 +0x5a:  pop    %ebx
08281825 +0x5b:  pop    %esi
08281826 +0x5c:  pop    %edi
08281827 +0x5d:  pop    %ebp
08281828 +0x5e:  ret
08281829 +0x5f:  nop
```

## 反编译 C

```c
// StackablePackage::EventProcessManager::EventProcessManager @ 0x82817ca

/* StackablePackage::EventProcessManager::EventProcessManager() */

void __thiscall
StackablePackage::EventProcessManager::EventProcessManager(EventProcessManager *this)

{
  EventProcessManagerImpl *this_00;
  
  this_00 = operator_new(0x18);
                    /* try { // try from 082817e6 to 082817ea has its CatchHandler @ 082817ed */
  EventProcessManagerImpl::EventProcessManagerImpl(this_00);
  std::auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl>::auto_ptr
            ((auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl> *)this,
             this_00);
  setupEventProcessors();
  return;
}
```
