# TowerOfDespairMgr

`_ZN17TowerOfDespairMgrC1Ev`

`TowerOfDespairMgr::TowerOfDespairMgr()`

| 类 | 地址 |
|---|---|
| `TowerOfDespairMgr` | `0x08643ac4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08643ac4  _ZN17TowerOfDespairMgrC1Ev
#           TowerOfDespairMgr::TowerOfDespairMgr()
# range [0x08643ac4, 0x08643bdd]
08643ac4 +0x000:  push   %ebp
08643ac5 +0x001:  mov    %esp,%ebp
08643ac7 +0x003:  push   %edi
08643ac8 +0x004:  push   %esi
08643ac9 +0x005:  push   %ebx
08643aca +0x006:  sub    $0x2c,%esp
08643acd +0x009:  mov    0x8(%ebp),%eax
08643ad0 +0x00c:  add    $0x328,%eax
08643ad5 +0x011:  mov    %eax,(%esp)
08643ad8 +0x014:  call   080da3dc <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x579>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x579
08643add +0x019:  mov    0x8(%ebp),%eax
08643ae0 +0x01c:  add    $0x340,%eax
08643ae5 +0x021:  mov    %eax,(%esp)
08643ae8 +0x024:  call   080e247e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x224>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x224
08643aed +0x029:  mov    0x8(%ebp),%eax
08643af0 +0x02c:  movw   $0x0,0x34c(%eax)
08643af9 +0x035:  mov    0x8(%ebp),%eax
08643afc +0x038:  movw   $0x0,0x34e(%eax)
08643b05 +0x041:  mov    0x8(%ebp),%eax
08643b08 +0x044:  movl   $0x0,0x358(%eax)
08643b12 +0x04e:  movl   $0x0,-0x20(%ebp)
08643b19 +0x055:  mov    0x8(%ebp),%eax
08643b1c +0x058:  lea    0x194(%eax),%ecx
08643b22 +0x05e:  mov    0x8(%ebp),%eax
08643b25 +0x061:  lea    -0x20(%ebp),%edx
08643b28 +0x064:  mov    %edx,0x8(%esp)
08643b2c +0x068:  mov    %ecx,0x4(%esp)
08643b30 +0x06c:  mov    %eax,(%esp)
08643b33 +0x06f:  call   0864450d <_GLOBAL__I__ZN17TowerOfDespairMgrC2Ev+0x58>  ; global constructors keyed to TowerOfDespairMgr::TowerOfDespairMgr()+0x58
08643b38 +0x074:  movl   $0x0,-0x1c(%ebp)
08643b3f +0x07b:  mov    0x8(%ebp),%eax
08643b42 +0x07e:  add    $0x194,%eax
08643b47 +0x083:  lea    0x194(%eax),%ecx
08643b4d +0x089:  mov    0x8(%ebp),%eax
08643b50 +0x08c:  lea    0x194(%eax),%edx
08643b56 +0x092:  lea    -0x1c(%ebp),%eax
08643b59 +0x095:  mov    %eax,0x8(%esp)
08643b5d +0x099:  mov    %ecx,0x4(%esp)
08643b61 +0x09d:  mov    %edx,(%esp)
08643b64 +0x0a0:  call   08644545 <_GLOBAL__I__ZN17TowerOfDespairMgrC2Ev+0x90>  ; global constructors keyed to TowerOfDespairMgr::TowerOfDespairMgr()+0x90
08643b69 +0x0a5:  movl   $0x18,(%esp)
08643b70 +0x0ac:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08643b75 +0x0b1:  mov    %eax,%ebx
08643b77 +0x0b3:  mov    %ebx,%eax
08643b79 +0x0b5:  mov    %eax,(%esp)
08643b7c +0x0b8:  call   086444e6 <_GLOBAL__I__ZN17TowerOfDespairMgrC2Ev+0x31>  ; global constructors keyed to TowerOfDespairMgr::TowerOfDespairMgr()+0x31
08643b81 +0x0bd:  jmp    08643b95 <+0xd1>
08643b83 +0x0bf:  mov    %edx,%esi
08643b85 +0x0c1:  mov    %eax,%edi
08643b87 +0x0c3:  mov    %ebx,(%esp)
08643b8a +0x0c6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08643b8f +0x0cb:  mov    %edi,%eax
08643b91 +0x0cd:  mov    %esi,%edx
08643b93 +0x0cf:  jmp    08643ba8 <+0xe4>
08643b95 +0x0d1:  mov    %ebx,%edx
08643b97 +0x0d3:  mov    0x8(%ebp),%eax
08643b9a +0x0d6:  mov    %edx,0x354(%eax)
08643ba0 +0x0dc:  add    $0x2c,%esp
08643ba3 +0x0df:  pop    %ebx
08643ba4 +0x0e0:  pop    %esi
08643ba5 +0x0e1:  pop    %edi
08643ba6 +0x0e2:  pop    %ebp
08643ba7 +0x0e3:  ret
08643ba8 +0x0e4:  mov    %edx,%ebx
08643baa +0x0e6:  mov    %eax,%esi
08643bac +0x0e8:  mov    0x8(%ebp),%eax
08643baf +0x0eb:  add    $0x340,%eax
08643bb4 +0x0f0:  mov    %eax,(%esp)
08643bb7 +0x0f3:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
08643bbc +0x0f8:  mov    %esi,%eax
08643bbe +0x0fa:  mov    %ebx,%edx
08643bc0 +0x0fc:  jmp    08643bc2 <+0xfe>
08643bc2 +0x0fe:  mov    %edx,%ebx
08643bc4 +0x100:  mov    %eax,%esi
08643bc6 +0x102:  mov    0x8(%ebp),%eax
08643bc9 +0x105:  add    $0x328,%eax
08643bce +0x10a:  mov    %eax,(%esp)
08643bd1 +0x10d:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
08643bd6 +0x112:  mov    %esi,%eax
08643bd8 +0x114:  mov    %ebx,%edx
08643bda +0x116:  mov    %eax,(%esp)
08643bdd +0x119:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// TowerOfDespairMgr::TowerOfDespairMgr @ 0x8643ac4

/* TowerOfDespairMgr::TowerOfDespairMgr() */

void __thiscall TowerOfDespairMgr::TowerOfDespairMgr(TowerOfDespairMgr *this)

{
  TowerOfDespair_APC_Mgr *this_00;
  CDungeon *local_24;
  int local_20 [4];
  
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x328));
                    /* try { // try from 08643ae8 to 08643aec has its CatchHandler @ 08643bc2 */
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x340));
  *(undefined2 *)(this + 0x34c) = 0;
  *(undefined2 *)(this + 0x34e) = 0;
  *(undefined4 *)(this + 0x358) = 0;
  local_24 = (CDungeon *)0x0;
                    /* try { // try from 08643b33 to 08643b74 has its CatchHandler @ 08643ba8 */
  std::fill<CDungeon_const**,CDungeon_const*>
            ((CDungeon **)this,(CDungeon **)(this + 0x194),&local_24);
  local_20[0] = 0;
  std::fill<unsigned_int*,int>((uint *)(this + 0x194),(uint *)(this + 0x328),local_20);
  this_00 = operator_new(0x18);
                    /* try { // try from 08643b7c to 08643b80 has its CatchHandler @ 08643b83 */
  TowerOfDespair_APC_Mgr::TowerOfDespair_APC_Mgr(this_00);
  *(TowerOfDespair_APC_Mgr **)(this + 0x354) = this_00;
  return;
}
```
