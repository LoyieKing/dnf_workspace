# ~CEventScriptMng

`_ZN13EventClassify15CEventScriptMngD1Ev`

`EventClassify::CEventScriptMng::~CEventScriptMng()`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810b218` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810b218  _ZN13EventClassify15CEventScriptMngD1Ev
#           EventClassify::CEventScriptMng::~CEventScriptMng()
# range [0x0810b218, 0x0810b401]
0810b218 +0x000:  push   %ebp
0810b219 +0x001:  mov    %esp,%ebp
0810b21b +0x003:  push   %esi
0810b21c +0x004:  push   %ebx
0810b21d +0x005:  sub    $0x20,%esp
0810b220 +0x008:  mov    0x8(%ebp),%eax
0810b223 +0x00b:  lea    0x18(%eax),%edx
0810b226 +0x00e:  lea    -0xc(%ebp),%eax
0810b229 +0x011:  mov    %edx,0x4(%esp)
0810b22d +0x015:  mov    %eax,(%esp)
0810b230 +0x018:  call   0811151a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xa2c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xa2c
0810b235 +0x01d:  sub    $0x4,%esp
0810b238 +0x020:  mov    0x8(%ebp),%eax
0810b23b +0x023:  lea    0x18(%eax),%edx
0810b23e +0x026:  lea    -0x10(%ebp),%eax
0810b241 +0x029:  mov    %edx,0x4(%esp)
0810b245 +0x02d:  mov    %eax,(%esp)
0810b248 +0x030:  call   08111540 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xa52>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xa52
0810b24d +0x035:  sub    $0x4,%esp
0810b250 +0x038:  jmp    0810b2a8 <+0x90>
0810b252 +0x03a:  lea    -0xc(%ebp),%eax
0810b255 +0x03d:  mov    %eax,(%esp)
0810b258 +0x040:  call   0811157a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xa8c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xa8c
0810b25d +0x045:  mov    0x4(%eax),%eax
0810b260 +0x048:  test   %eax,%eax
0810b262 +0x04a:  setne  %al
0810b265 +0x04d:  test   %al,%al
0810b267 +0x04f:  je     0810b28b <+0x73>
0810b269 +0x051:  lea    -0xc(%ebp),%eax
0810b26c +0x054:  mov    %eax,(%esp)
0810b26f +0x057:  call   0811157a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xa8c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xa8c
0810b274 +0x05c:  mov    0x4(%eax),%ebx
0810b277 +0x05f:  test   %ebx,%ebx
0810b279 +0x061:  je     0810b28b <+0x73>
0810b27b +0x063:  mov    %ebx,(%esp)
0810b27e +0x066:  call   08110e96 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a8>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a8
0810b283 +0x06b:  mov    %ebx,(%esp)
0810b286 +0x06e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810b28b +0x073:  lea    -0xc(%ebp),%eax
0810b28e +0x076:  mov    %eax,(%esp)
0810b291 +0x079:  call   0811157a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xa8c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xa8c
0810b296 +0x07e:  movl   $0x0,0x4(%eax)
0810b29d +0x085:  lea    -0xc(%ebp),%eax
0810b2a0 +0x088:  mov    %eax,(%esp)
0810b2a3 +0x08b:  call   08111588 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xa9a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xa9a
0810b2a8 +0x090:  lea    -0x10(%ebp),%eax
0810b2ab +0x093:  mov    %eax,0x4(%esp)
0810b2af +0x097:  lea    -0xc(%ebp),%eax
0810b2b2 +0x09a:  mov    %eax,(%esp)
0810b2b5 +0x09d:  call   08111566 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xa78>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xa78
0810b2ba +0x0a2:  test   %al,%al
0810b2bc +0x0a4:  jne    0810b252 <+0x3a>
0810b2be +0x0a6:  mov    0x8(%ebp),%eax
0810b2c1 +0x0a9:  lea    0x30(%eax),%edx
0810b2c4 +0x0ac:  lea    -0x14(%ebp),%eax
0810b2c7 +0x0af:  mov    %edx,0x4(%esp)
0810b2cb +0x0b3:  mov    %eax,(%esp)
0810b2ce +0x0b6:  call   081115a6 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xab8>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xab8
0810b2d3 +0x0bb:  sub    $0x4,%esp
0810b2d6 +0x0be:  mov    0x8(%ebp),%eax
0810b2d9 +0x0c1:  lea    0x30(%eax),%edx
0810b2dc +0x0c4:  lea    -0x18(%ebp),%eax
0810b2df +0x0c7:  mov    %edx,0x4(%esp)
0810b2e3 +0x0cb:  mov    %eax,(%esp)
0810b2e6 +0x0ce:  call   081115cc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xade>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xade
0810b2eb +0x0d3:  sub    $0x4,%esp
0810b2ee +0x0d6:  jmp    0810b342 <+0x12a>
0810b2f0 +0x0d8:  lea    -0x14(%ebp),%eax
0810b2f3 +0x0db:  mov    %eax,(%esp)
0810b2f6 +0x0de:  call   08111606 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xb18>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xb18
0810b2fb +0x0e3:  mov    0x4(%eax),%eax
0810b2fe +0x0e6:  test   %eax,%eax
0810b300 +0x0e8:  setne  %al
0810b303 +0x0eb:  test   %al,%al
0810b305 +0x0ed:  je     0810b325 <+0x10d>
0810b307 +0x0ef:  lea    -0x14(%ebp),%eax
0810b30a +0x0f2:  mov    %eax,(%esp)
0810b30d +0x0f5:  call   08111606 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xb18>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xb18
0810b312 +0x0fa:  mov    0x4(%eax),%eax
0810b315 +0x0fd:  test   %eax,%eax
0810b317 +0x0ff:  je     0810b325 <+0x10d>
0810b319 +0x101:  mov    (%eax),%edx
0810b31b +0x103:  add    $0x4,%edx
0810b31e +0x106:  mov    (%edx),%edx
0810b320 +0x108:  mov    %eax,(%esp)
0810b323 +0x10b:  call   *%edx
0810b325 +0x10d:  lea    -0x14(%ebp),%eax
0810b328 +0x110:  mov    %eax,(%esp)
0810b32b +0x113:  call   08111606 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xb18>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xb18
0810b330 +0x118:  movl   $0x0,0x4(%eax)
0810b337 +0x11f:  lea    -0x14(%ebp),%eax
0810b33a +0x122:  mov    %eax,(%esp)
0810b33d +0x125:  call   08111614 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xb26>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xb26
0810b342 +0x12a:  lea    -0x18(%ebp),%eax
0810b345 +0x12d:  mov    %eax,0x4(%esp)
0810b349 +0x131:  lea    -0x14(%ebp),%eax
0810b34c +0x134:  mov    %eax,(%esp)
0810b34f +0x137:  call   081115f2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xb04>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xb04
0810b354 +0x13c:  test   %al,%al
0810b356 +0x13e:  jne    0810b2f0 <+0xd8>
0810b358 +0x140:  jmp    0810b372 <+0x15a>
0810b35a +0x142:  mov    %edx,%ebx
0810b35c +0x144:  mov    %eax,%esi
0810b35e +0x146:  mov    0x8(%ebp),%eax
0810b361 +0x149:  add    $0x50,%eax
0810b364 +0x14c:  mov    %eax,(%esp)
0810b367 +0x14f:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0810b36c +0x154:  mov    %esi,%eax
0810b36e +0x156:  mov    %ebx,%edx
0810b370 +0x158:  jmp    0810b382 <+0x16a>
0810b372 +0x15a:  mov    0x8(%ebp),%eax
0810b375 +0x15d:  add    $0x50,%eax
0810b378 +0x160:  mov    %eax,(%esp)
0810b37b +0x163:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0810b380 +0x168:  jmp    0810b39a <+0x182>
0810b382 +0x16a:  mov    %edx,%ebx
0810b384 +0x16c:  mov    %eax,%esi
0810b386 +0x16e:  mov    0x8(%ebp),%eax
0810b389 +0x171:  add    $0x30,%eax
0810b38c +0x174:  mov    %eax,(%esp)
0810b38f +0x177:  call   08110f74 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x486>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x486
0810b394 +0x17c:  mov    %esi,%eax
0810b396 +0x17e:  mov    %ebx,%edx
0810b398 +0x180:  jmp    0810b3aa <+0x192>
0810b39a +0x182:  mov    0x8(%ebp),%eax
0810b39d +0x185:  add    $0x30,%eax
0810b3a0 +0x188:  mov    %eax,(%esp)
0810b3a3 +0x18b:  call   08110f74 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x486>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x486
0810b3a8 +0x190:  jmp    0810b3c2 <+0x1aa>
0810b3aa +0x192:  mov    %edx,%ebx
0810b3ac +0x194:  mov    %eax,%esi
0810b3ae +0x196:  mov    0x8(%ebp),%eax
0810b3b1 +0x199:  add    $0x18,%eax
0810b3b4 +0x19c:  mov    %eax,(%esp)
0810b3b7 +0x19f:  call   08110f60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x472>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x472
0810b3bc +0x1a4:  mov    %esi,%eax
0810b3be +0x1a6:  mov    %ebx,%edx
0810b3c0 +0x1a8:  jmp    0810b3d2 <+0x1ba>
0810b3c2 +0x1aa:  mov    0x8(%ebp),%eax
0810b3c5 +0x1ad:  add    $0x18,%eax
0810b3c8 +0x1b0:  mov    %eax,(%esp)
0810b3cb +0x1b3:  call   08110f60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x472>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x472
0810b3d0 +0x1b8:  jmp    0810b3ed <+0x1d5>
0810b3d2 +0x1ba:  mov    %edx,%ebx
0810b3d4 +0x1bc:  mov    %eax,%esi
0810b3d6 +0x1be:  mov    0x8(%ebp),%eax
0810b3d9 +0x1c1:  mov    %eax,(%esp)
0810b3dc +0x1c4:  call   08110f24 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x436>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x436
0810b3e1 +0x1c9:  mov    %esi,%eax
0810b3e3 +0x1cb:  mov    %ebx,%edx
0810b3e5 +0x1cd:  mov    %eax,(%esp)
0810b3e8 +0x1d0:  call   08ae3750 <_Unwind_Resume>
0810b3ed +0x1d5:  mov    0x8(%ebp),%eax
0810b3f0 +0x1d8:  mov    %eax,(%esp)
0810b3f3 +0x1db:  call   08110f24 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x436>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x436
0810b3f8 +0x1e0:  lea    -0x8(%ebp),%esp
0810b3fb +0x1e3:  add    $0x0,%esp
0810b3fe +0x1e6:  pop    %ebx
0810b3ff +0x1e7:  pop    %esi
0810b400 +0x1e8:  pop    %ebp
0810b401 +0x1e9:  ret
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::~CEventScriptMng @ 0x810b218

/* EventClassify::CEventScriptMng::~CEventScriptMng() */

void __thiscall EventClassify::CEventScriptMng::~CEventScriptMng(CEventScriptMng *this)

{
  InGameEventScript *this_00;
  int *piVar1;
  char cVar2;
  int iVar3;
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  local_1c [4];
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  local_18 [4];
  map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
  local_14 [4];
  map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
  local_10 [4];
  
                    /* try { // try from 0810b230 to 0810b341 has its CatchHandler @ 0810b35a */
  std::
  map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
  ::begin(local_10);
  std::
  map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
  ::end(local_14);
  while( true ) {
    cVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>> *)
                       local_10,(_Rb_tree_iterator *)local_14);
    if (cVar2 == '\0') break;
    iVar3 = std::_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>>::operator->
                      ((_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>> *)
                       local_10);
    if (*(int *)(iVar3 + 4) != 0) {
      iVar3 = std::_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>>::operator->
                        ((_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>> *)
                         local_10);
      this_00 = *(InGameEventScript **)(iVar3 + 4);
      if (this_00 != (InGameEventScript *)0x0) {
        InGameEventScript::~InGameEventScript(this_00);
        operator_delete(this_00);
      }
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>>::operator->
                      ((_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>> *)
                       local_10);
    *(undefined4 *)(iVar3 + 4) = 0;
    std::_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>>::operator++
              ((_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>> *)local_10);
  }
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::begin(local_18);
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::end(local_1c);
  while( true ) {
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> *)
                       local_18,(_Rb_tree_iterator *)local_1c);
    if (cVar2 == '\0') break;
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> *)
                       local_18);
    if (*(int *)(iVar3 + 4) != 0) {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> *)
                         local_18);
      piVar1 = *(int **)(iVar3 + 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(piVar1);
      }
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> *)
                       local_18);
    *(undefined4 *)(iVar3 + 4) = 0;
    std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> *)local_18);
  }
                    /* try { // try from 0810b37b to 0810b37f has its CatchHandler @ 0810b382 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x50));
                    /* try { // try from 0810b3a3 to 0810b3a7 has its CatchHandler @ 0810b3aa */
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::~map((map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
          *)(this + 0x30));
                    /* try { // try from 0810b3cb to 0810b3cf has its CatchHandler @ 0810b3d2 */
  InGameEventScriptLoader::~InGameEventScriptLoader((InGameEventScriptLoader *)(this + 0x18));
  InGameEventInfoList::~InGameEventInfoList((InGameEventInfoList *)this);
  return;
}
```
