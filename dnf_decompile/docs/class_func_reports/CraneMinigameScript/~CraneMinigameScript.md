# ~CraneMinigameScript

`_ZN19CraneMinigameScriptD1Ev`

`CraneMinigameScript::~CraneMinigameScript()`

| 类 | 地址 |
|---|---|
| `CraneMinigameScript` | `0x088e37a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088e37a8  _ZN19CraneMinigameScriptD1Ev
#           CraneMinigameScript::~CraneMinigameScript()
# range [0x088e37a8, 0x088e38d5]
088e37a8 +0x000:  push   %ebp
088e37a9 +0x001:  mov    %esp,%ebp
088e37ab +0x003:  push   %esi
088e37ac +0x004:  push   %ebx
088e37ad +0x005:  sub    $0x20,%esp
088e37b0 +0x008:  mov    0x8(%ebp),%eax
088e37b3 +0x00b:  lea    0x4(%eax),%edx
088e37b6 +0x00e:  lea    -0xc(%ebp),%eax
088e37b9 +0x011:  mov    %edx,0x4(%esp)
088e37bd +0x015:  mov    %eax,(%esp)
088e37c0 +0x018:  call   088e4280 <_GLOBAL__I__ZN13CraneItemInfoaSERKS_+0x1cf>  ; global constructors keyed to CraneItemInfo::operator=(CraneItemInfo const&)+0x1cf
088e37c5 +0x01d:  sub    $0x4,%esp
088e37c8 +0x020:  mov    0x8(%ebp),%eax
088e37cb +0x023:  lea    0x4(%eax),%edx
088e37ce +0x026:  lea    -0x10(%ebp),%eax
088e37d1 +0x029:  mov    %edx,0x4(%esp)
088e37d5 +0x02d:  mov    %eax,(%esp)
088e37d8 +0x030:  call   088e42a4 <_GLOBAL__I__ZN13CraneItemInfoaSERKS_+0x1f3>  ; global constructors keyed to CraneItemInfo::operator=(CraneItemInfo const&)+0x1f3
088e37dd +0x035:  sub    $0x4,%esp
088e37e0 +0x038:  jmp    088e3829 <+0x81>
088e37e2 +0x03a:  lea    -0xc(%ebp),%eax
088e37e5 +0x03d:  mov    %eax,(%esp)
088e37e8 +0x040:  call   088e430c <_GLOBAL__I__ZN13CraneItemInfoaSERKS_+0x25b>  ; global constructors keyed to CraneItemInfo::operator=(CraneItemInfo const&)+0x25b
088e37ed +0x045:  mov    (%eax),%eax
088e37ef +0x047:  test   %eax,%eax
088e37f1 +0x049:  setne  %al
088e37f4 +0x04c:  test   %al,%al
088e37f6 +0x04e:  je     088e380d <+0x65>
088e37f8 +0x050:  lea    -0xc(%ebp),%eax
088e37fb +0x053:  mov    %eax,(%esp)
088e37fe +0x056:  call   088e430c <_GLOBAL__I__ZN13CraneItemInfoaSERKS_+0x25b>  ; global constructors keyed to CraneItemInfo::operator=(CraneItemInfo const&)+0x25b
088e3803 +0x05b:  mov    (%eax),%eax
088e3805 +0x05d:  mov    %eax,(%esp)
088e3808 +0x060:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
088e380d +0x065:  lea    -0xc(%ebp),%eax
088e3810 +0x068:  mov    %eax,(%esp)
088e3813 +0x06b:  call   088e430c <_GLOBAL__I__ZN13CraneItemInfoaSERKS_+0x25b>  ; global constructors keyed to CraneItemInfo::operator=(CraneItemInfo const&)+0x25b
088e3818 +0x070:  movl   $0x0,(%eax)
088e381e +0x076:  lea    -0xc(%ebp),%eax
088e3821 +0x079:  mov    %eax,(%esp)
088e3824 +0x07c:  call   088e42f6 <_GLOBAL__I__ZN13CraneItemInfoaSERKS_+0x245>  ; global constructors keyed to CraneItemInfo::operator=(CraneItemInfo const&)+0x245
088e3829 +0x081:  lea    -0x10(%ebp),%eax
088e382c +0x084:  mov    %eax,0x4(%esp)
088e3830 +0x088:  lea    -0xc(%ebp),%eax
088e3833 +0x08b:  mov    %eax,(%esp)
088e3836 +0x08e:  call   088e42ca <_GLOBAL__I__ZN13CraneItemInfoaSERKS_+0x219>  ; global constructors keyed to CraneItemInfo::operator=(CraneItemInfo const&)+0x219
088e383b +0x093:  test   %al,%al
088e383d +0x095:  jne    088e37e2 <+0x3a>
088e383f +0x097:  mov    0x8(%ebp),%eax
088e3842 +0x09a:  add    $0x4,%eax
088e3845 +0x09d:  mov    %eax,(%esp)
088e3848 +0x0a0:  call   088e4316 <_GLOBAL__I__ZN13CraneItemInfoaSERKS_+0x265>  ; global constructors keyed to CraneItemInfo::operator=(CraneItemInfo const&)+0x265
088e384d +0x0a5:  jmp    088e3867 <+0xbf>
088e384f +0x0a7:  mov    %edx,%ebx
088e3851 +0x0a9:  mov    %eax,%esi
088e3853 +0x0ab:  mov    0x8(%ebp),%eax
088e3856 +0x0ae:  add    $0x5c,%eax
088e3859 +0x0b1:  mov    %eax,(%esp)
088e385c +0x0b4:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
088e3861 +0x0b9:  mov    %esi,%eax
088e3863 +0x0bb:  mov    %ebx,%edx
088e3865 +0x0bd:  jmp    088e3877 <+0xcf>
088e3867 +0x0bf:  mov    0x8(%ebp),%eax
088e386a +0x0c2:  add    $0x5c,%eax
088e386d +0x0c5:  mov    %eax,(%esp)
088e3870 +0x0c8:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
088e3875 +0x0cd:  jmp    088e388f <+0xe7>
088e3877 +0x0cf:  mov    %edx,%ebx
088e3879 +0x0d1:  mov    %eax,%esi
088e387b +0x0d3:  mov    0x8(%ebp),%eax
088e387e +0x0d6:  add    $0x18,%eax
088e3881 +0x0d9:  mov    %eax,(%esp)
088e3884 +0x0dc:  call   088e4160 <_GLOBAL__I__ZN13CraneItemInfoaSERKS_+0xaf>  ; global constructors keyed to CraneItemInfo::operator=(CraneItemInfo const&)+0xaf
088e3889 +0x0e1:  mov    %esi,%eax
088e388b +0x0e3:  mov    %ebx,%edx
088e388d +0x0e5:  jmp    088e389f <+0xf7>
088e388f +0x0e7:  mov    0x8(%ebp),%eax
088e3892 +0x0ea:  add    $0x18,%eax
088e3895 +0x0ed:  mov    %eax,(%esp)
088e3898 +0x0f0:  call   088e4160 <_GLOBAL__I__ZN13CraneItemInfoaSERKS_+0xaf>  ; global constructors keyed to CraneItemInfo::operator=(CraneItemInfo const&)+0xaf
088e389d +0x0f5:  jmp    088e38bd <+0x115>
088e389f +0x0f7:  mov    %edx,%ebx
088e38a1 +0x0f9:  mov    %eax,%esi
088e38a3 +0x0fb:  mov    0x8(%ebp),%eax
088e38a6 +0x0fe:  add    $0x4,%eax
088e38a9 +0x101:  mov    %eax,(%esp)
088e38ac +0x104:  call   088e4222 <_GLOBAL__I__ZN13CraneItemInfoaSERKS_+0x171>  ; global constructors keyed to CraneItemInfo::operator=(CraneItemInfo const&)+0x171
088e38b1 +0x109:  mov    %esi,%eax
088e38b3 +0x10b:  mov    %ebx,%edx
088e38b5 +0x10d:  mov    %eax,(%esp)
088e38b8 +0x110:  call   08ae3750 <_Unwind_Resume>
088e38bd +0x115:  mov    0x8(%ebp),%eax
088e38c0 +0x118:  add    $0x4,%eax
088e38c3 +0x11b:  mov    %eax,(%esp)
088e38c6 +0x11e:  call   088e4222 <_GLOBAL__I__ZN13CraneItemInfoaSERKS_+0x171>  ; global constructors keyed to CraneItemInfo::operator=(CraneItemInfo const&)+0x171
088e38cb +0x123:  lea    -0x8(%ebp),%esp
088e38ce +0x126:  add    $0x0,%esp
088e38d1 +0x129:  pop    %ebx
088e38d2 +0x12a:  pop    %esi
088e38d3 +0x12b:  pop    %ebp
088e38d4 +0x12c:  ret
088e38d5 +0x12d:  nop
```

## 反编译 C

```c
// CraneMinigameScript::~CraneMinigameScript @ 0x88e37a8

/* CraneMinigameScript::~CraneMinigameScript() */

void __thiscall CraneMinigameScript::~CraneMinigameScript(CraneMinigameScript *this)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  __normal_iterator local_14 [4];
  __normal_iterator<CraneItemInfo**,std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>>
  local_10 [4];
  
                    /* try { // try from 088e37c0 to 088e384c has its CatchHandler @ 088e384f */
  std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>::begin();
  std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) break;
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<CraneItemInfo**,std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>>
                    ::operator*(local_10);
    if (*piVar2 != 0) {
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<CraneItemInfo**,std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>>
               ::operator*(local_10);
      operator_delete((void *)*puVar3);
    }
    puVar3 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<CraneItemInfo**,std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>>
             ::operator*(local_10);
    *puVar3 = 0;
    __gnu_cxx::
    __normal_iterator<CraneItemInfo**,std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>>::
    operator++(local_10);
  }
  std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>::clear
            ((vector<CraneItemInfo*,std::allocator<CraneItemInfo*>> *)(this + 4));
                    /* try { // try from 088e3870 to 088e3874 has its CatchHandler @ 088e3877 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x5c));
                    /* try { // try from 088e3898 to 088e389c has its CatchHandler @ 088e389f */
  Action_SendMail::~Action_SendMail((Action_SendMail *)(this + 0x18));
  std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>::~vector
            ((vector<CraneItemInfo*,std::allocator<CraneItemInfo*>> *)(this + 4));
  return;
}
```
