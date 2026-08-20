# ~EventProcessManager

`_ZN16StackablePackage19EventProcessManagerD1Ev`

`StackablePackage::EventProcessManager::~EventProcessManager()`

| 类 | 地址 |
|---|---|
| `StackablePackage::EventProcessManager` | `0x0828182a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828182a  _ZN16StackablePackage19EventProcessManagerD1Ev
#           StackablePackage::EventProcessManager::~EventProcessManager()
# range [0x0828182a, 0x0828186b]
0828182a +0x00:  push   %ebp
0828182b +0x01:  mov    %esp,%ebp
0828182d +0x03:  push   %esi
0828182e +0x04:  push   %ebx
0828182f +0x05:  sub    $0x10,%esp
08281832 +0x08:  mov    0x8(%ebp),%eax
08281835 +0x0b:  mov    %eax,(%esp)
08281838 +0x0e:  call   08281a9a <_ZN16StackablePackage19EventProcessManager7destroyEv>  ; StackablePackage::EventProcessManager::destroy()
0828183d +0x13:  jmp    0828185a <+0x30>
0828183f +0x15:  mov    %edx,%ebx
08281841 +0x17:  mov    %eax,%esi
08281843 +0x19:  mov    0x8(%ebp),%eax
08281846 +0x1c:  mov    %eax,(%esp)
08281849 +0x1f:  call   08281d1e <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x140>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x140
0828184e +0x24:  mov    %esi,%eax
08281850 +0x26:  mov    %ebx,%edx
08281852 +0x28:  mov    %eax,(%esp)
08281855 +0x2b:  call   08ae3750 <_Unwind_Resume>
0828185a +0x30:  mov    0x8(%ebp),%eax
0828185d +0x33:  mov    %eax,(%esp)
08281860 +0x36:  call   08281d1e <_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv+0x140>  ; global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()+0x140
08281865 +0x3b:  add    $0x10,%esp
08281868 +0x3e:  pop    %ebx
08281869 +0x3f:  pop    %esi
0828186a +0x40:  pop    %ebp
0828186b +0x41:  ret
```

## 反编译 C

```c
// StackablePackage::EventProcessManager::~EventProcessManager @ 0x828182a

/* StackablePackage::EventProcessManager::~EventProcessManager() */

void __thiscall
StackablePackage::EventProcessManager::~EventProcessManager(EventProcessManager *this)

{
                    /* try { // try from 08281838 to 0828183c has its CatchHandler @ 0828183f */
  destroy(this);
  std::auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl>::~auto_ptr
            ((auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl> *)this);
  return;
}
```
