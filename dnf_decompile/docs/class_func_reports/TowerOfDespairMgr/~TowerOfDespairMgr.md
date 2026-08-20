# ~TowerOfDespairMgr

`_ZN17TowerOfDespairMgrD1Ev`

`TowerOfDespairMgr::~TowerOfDespairMgr()`

| 类 | 地址 |
|---|---|
| `TowerOfDespairMgr` | `0x08643be2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08643be2  _ZN17TowerOfDespairMgrD1Ev
#           TowerOfDespairMgr::~TowerOfDespairMgr()
# range [0x08643be2, 0x08643c6b]
08643be2 +0x00:  push   %ebp
08643be3 +0x01:  mov    %esp,%ebp
08643be5 +0x03:  push   %esi
08643be6 +0x04:  push   %ebx
08643be7 +0x05:  sub    $0x10,%esp
08643bea +0x08:  mov    0x8(%ebp),%eax
08643bed +0x0b:  mov    0x354(%eax),%ebx
08643bf3 +0x11:  test   %ebx,%ebx
08643bf5 +0x13:  je     08643c23 <+0x41>
08643bf7 +0x15:  mov    %ebx,(%esp)
08643bfa +0x18:  call   086444fa <_GLOBAL__I__ZN17TowerOfDespairMgrC2Ev+0x45>  ; global constructors keyed to TowerOfDespairMgr::TowerOfDespairMgr()+0x45
08643bff +0x1d:  mov    %ebx,(%esp)
08643c02 +0x20:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08643c07 +0x25:  jmp    08643c23 <+0x41>
08643c09 +0x27:  mov    %edx,%ebx
08643c0b +0x29:  mov    %eax,%esi
08643c0d +0x2b:  mov    0x8(%ebp),%eax
08643c10 +0x2e:  add    $0x340,%eax
08643c15 +0x33:  mov    %eax,(%esp)
08643c18 +0x36:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
08643c1d +0x3b:  mov    %esi,%eax
08643c1f +0x3d:  mov    %ebx,%edx
08643c21 +0x3f:  jmp    08643c35 <+0x53>
08643c23 +0x41:  mov    0x8(%ebp),%eax
08643c26 +0x44:  add    $0x340,%eax
08643c2b +0x49:  mov    %eax,(%esp)
08643c2e +0x4c:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
08643c33 +0x51:  jmp    08643c55 <+0x73>
08643c35 +0x53:  mov    %edx,%ebx
08643c37 +0x55:  mov    %eax,%esi
08643c39 +0x57:  mov    0x8(%ebp),%eax
08643c3c +0x5a:  add    $0x328,%eax
08643c41 +0x5f:  mov    %eax,(%esp)
08643c44 +0x62:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
08643c49 +0x67:  mov    %esi,%eax
08643c4b +0x69:  mov    %ebx,%edx
08643c4d +0x6b:  mov    %eax,(%esp)
08643c50 +0x6e:  call   08ae3750 <_Unwind_Resume>
08643c55 +0x73:  mov    0x8(%ebp),%eax
08643c58 +0x76:  add    $0x328,%eax
08643c5d +0x7b:  mov    %eax,(%esp)
08643c60 +0x7e:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
08643c65 +0x83:  add    $0x10,%esp
08643c68 +0x86:  pop    %ebx
08643c69 +0x87:  pop    %esi
08643c6a +0x88:  pop    %ebp
08643c6b +0x89:  ret
```

## 反编译 C

```c
// TowerOfDespairMgr::~TowerOfDespairMgr @ 0x8643be2

/* TowerOfDespairMgr::~TowerOfDespairMgr() */

void __thiscall TowerOfDespairMgr::~TowerOfDespairMgr(TowerOfDespairMgr *this)

{
  TowerOfDespair_APC_Mgr *this_00;
  
  this_00 = *(TowerOfDespair_APC_Mgr **)(this + 0x354);
  if (this_00 != (TowerOfDespair_APC_Mgr *)0x0) {
                    /* try { // try from 08643bfa to 08643bfe has its CatchHandler @ 08643c09 */
    TowerOfDespair_APC_Mgr::~TowerOfDespair_APC_Mgr(this_00);
    operator_delete(this_00);
  }
                    /* try { // try from 08643c2e to 08643c32 has its CatchHandler @ 08643c35 */
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x340));
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x328));
  return;
}
```
