# Set

`_ZN13user_creature15CCreatureScript3SetEP14CreatureScript`

`user_creature::CCreatureScript::Set(CreatureScript*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureScript` | `0x0833c8e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833c8e8  _ZN13user_creature15CCreatureScript3SetEP14CreatureScript
#           user_creature::CCreatureScript::Set(CreatureScript*)
# range [0x0833c8e8, 0x0833cad7]
0833c8e8 +0x000:  push   %ebp
0833c8e9 +0x001:  mov    %esp,%ebp
0833c8eb +0x003:  sub    $0x38,%esp
0833c8ee +0x006:  movl   $0x3,(%esp)
0833c8f5 +0x00d:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
0833c8fa +0x012:  mov    %eax,%edx
0833c8fc +0x014:  mov    0x8(%ebp),%eax
0833c8ff +0x017:  mov    %edx,0x20(%eax)
0833c902 +0x01a:  movl   $0x0,-0x14(%ebp)
0833c909 +0x021:  jmp    0833c92d <+0x45>
0833c90b +0x023:  mov    0x8(%ebp),%eax
0833c90e +0x026:  mov    0x20(%eax),%edx
0833c911 +0x029:  mov    -0x14(%ebp),%eax
0833c914 +0x02c:  add    %eax,%edx
0833c916 +0x02e:  mov    -0x14(%ebp),%ecx
0833c919 +0x031:  mov    0xc(%ebp),%eax
0833c91c +0x034:  add    $0x14,%ecx
0833c91f +0x037:  mov    (%eax,%ecx,4),%eax
0833c922 +0x03a:  test   %eax,%eax
0833c924 +0x03c:  setne  %al
0833c927 +0x03f:  mov    %al,(%edx)
0833c929 +0x041:  addl   $0x1,-0x14(%ebp)
0833c92d +0x045:  cmpl   $0x2,-0x14(%ebp)
0833c931 +0x049:  setle  %al
0833c934 +0x04c:  test   %al,%al
0833c936 +0x04e:  jne    0833c90b <+0x23>
0833c938 +0x050:  mov    0xc(%ebp),%eax
0833c93b +0x053:  mov    0x174(%eax),%edx
0833c941 +0x059:  mov    0x8(%ebp),%eax
0833c944 +0x05c:  mov    %edx,(%eax)
0833c946 +0x05e:  mov    0xc(%ebp),%eax
0833c949 +0x061:  mov    0x178(%eax),%edx
0833c94f +0x067:  mov    0x8(%ebp),%eax
0833c952 +0x06a:  mov    %edx,0x4(%eax)
0833c955 +0x06d:  mov    0xc(%ebp),%eax
0833c958 +0x070:  add    $0x180,%eax
0833c95d +0x075:  mov    %eax,(%esp)
0833c960 +0x078:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0833c965 +0x07d:  mov    %eax,-0x1c(%ebp)
0833c968 +0x080:  movl   $0x0,-0x10(%ebp)
0833c96f +0x087:  jmp    0833c99f <+0xb7>
0833c971 +0x089:  mov    -0x10(%ebp),%eax
0833c974 +0x08c:  mov    0xc(%ebp),%edx
0833c977 +0x08f:  add    $0x180,%edx
0833c97d +0x095:  mov    %eax,0x4(%esp)
0833c981 +0x099:  mov    %edx,(%esp)
0833c984 +0x09c:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
0833c989 +0x0a1:  mov    0x8(%ebp),%edx
0833c98c +0x0a4:  add    $0x8,%edx
0833c98f +0x0a7:  mov    %eax,0x4(%esp)
0833c993 +0x0ab:  mov    %edx,(%esp)
0833c996 +0x0ae:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0833c99b +0x0b3:  addl   $0x1,-0x10(%ebp)
0833c99f +0x0b7:  mov    -0x10(%ebp),%eax
0833c9a2 +0x0ba:  cmp    -0x1c(%ebp),%eax
0833c9a5 +0x0bd:  setl   %al
0833c9a8 +0x0c0:  test   %al,%al
0833c9aa +0x0c2:  jne    0833c971 <+0x89>
0833c9ac +0x0c4:  mov    0xc(%ebp),%eax
0833c9af +0x0c7:  mov    0x17c(%eax),%edx
0833c9b5 +0x0cd:  mov    0x8(%ebp),%eax
0833c9b8 +0x0d0:  mov    %edx,0x14(%eax)
0833c9bb +0x0d3:  mov    0xc(%ebp),%eax
0833c9be +0x0d6:  mov    0x48(%eax),%edx
0833c9c1 +0x0d9:  mov    0x8(%ebp),%eax
0833c9c4 +0x0dc:  mov    %edx,0x18(%eax)
0833c9c7 +0x0df:  mov    0xc(%ebp),%eax
0833c9ca +0x0e2:  mov    0x1c(%eax),%edx
0833c9cd +0x0e5:  mov    0x8(%ebp),%eax
0833c9d0 +0x0e8:  mov    %edx,0x24(%eax)
0833c9d3 +0x0eb:  mov    0xc(%ebp),%eax
0833c9d6 +0x0ee:  mov    0x20(%eax),%edx
0833c9d9 +0x0f1:  mov    0x8(%ebp),%eax
0833c9dc +0x0f4:  mov    %edx,0x28(%eax)
0833c9df +0x0f7:  mov    0xc(%ebp),%eax
0833c9e2 +0x0fa:  mov    0x5c(%eax),%eax
0833c9e5 +0x0fd:  mov    %eax,%edx
0833c9e7 +0x0ff:  mov    0x8(%ebp),%eax
0833c9ea +0x102:  mov    %dl,0x2c(%eax)
0833c9ed +0x105:  mov    0xc(%ebp),%eax
0833c9f0 +0x108:  add    $0x1c0,%eax
0833c9f5 +0x10d:  mov    %eax,(%esp)
0833c9f8 +0x110:  call   08342c0e <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4cdb>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4cdb
0833c9fd +0x115:  mov    %eax,-0x18(%ebp)
0833ca00 +0x118:  movl   $0x0,-0xc(%ebp)
0833ca07 +0x11f:  jmp    0833ca43 <+0x15b>
0833ca09 +0x121:  mov    -0xc(%ebp),%eax
0833ca0c +0x124:  mov    0xc(%ebp),%edx
0833ca0f +0x127:  add    $0x1c0,%edx
0833ca15 +0x12d:  mov    %eax,0x4(%esp)
0833ca19 +0x131:  mov    %edx,(%esp)
0833ca1c +0x134:  call   08342c2a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4cf7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4cf7
0833ca21 +0x139:  mov    %eax,%edx
0833ca23 +0x13b:  mov    0x8(%ebp),%eax
0833ca26 +0x13e:  lea    0x34(%eax),%ecx
0833ca29 +0x141:  lea    -0x24(%ebp),%eax
0833ca2c +0x144:  mov    %edx,0x8(%esp)
0833ca30 +0x148:  mov    %ecx,0x4(%esp)
0833ca34 +0x14c:  mov    %eax,(%esp)
0833ca37 +0x14f:  call   080da5c6 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x763>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x763
0833ca3c +0x154:  sub    $0x4,%esp
0833ca3f +0x157:  addl   $0x1,-0xc(%ebp)
0833ca43 +0x15b:  mov    -0xc(%ebp),%eax
0833ca46 +0x15e:  cmp    -0x18(%ebp),%eax
0833ca49 +0x161:  setl   %al
0833ca4c +0x164:  test   %al,%al
0833ca4e +0x166:  jne    0833ca09 <+0x121>
0833ca50 +0x168:  mov    0xc(%ebp),%eax
0833ca53 +0x16b:  movzbl 0x18c(%eax),%edx
0833ca5a +0x172:  mov    0x8(%ebp),%eax
0833ca5d +0x175:  mov    %dl,0x4c(%eax)
0833ca60 +0x178:  mov    0xc(%ebp),%eax
0833ca63 +0x17b:  mov    0x190(%eax),%edx
0833ca69 +0x181:  mov    0x8(%ebp),%eax
0833ca6c +0x184:  mov    %edx,0x50(%eax)
0833ca6f +0x187:  mov    0xc(%ebp),%eax
0833ca72 +0x18a:  mov    0x194(%eax),%edx
0833ca78 +0x190:  mov    0x8(%ebp),%eax
0833ca7b +0x193:  mov    %edx,0x54(%eax)
0833ca7e +0x196:  mov    0xc(%ebp),%eax
0833ca81 +0x199:  mov    0x198(%eax),%edx
0833ca87 +0x19f:  mov    0x8(%ebp),%eax
0833ca8a +0x1a2:  mov    %edx,0x58(%eax)
0833ca8d +0x1a5:  mov    0xc(%ebp),%eax
0833ca90 +0x1a8:  mov    0x19c(%eax),%edx
0833ca96 +0x1ae:  mov    0x8(%ebp),%eax
0833ca99 +0x1b1:  mov    %edx,0x5c(%eax)
0833ca9c +0x1b4:  mov    0xc(%ebp),%eax
0833ca9f +0x1b7:  mov    0x1a0(%eax),%edx
0833caa5 +0x1bd:  mov    0x8(%ebp),%eax
0833caa8 +0x1c0:  mov    %edx,0x60(%eax)
0833caab +0x1c3:  mov    0xc(%ebp),%eax
0833caae +0x1c6:  mov    0x1a4(%eax),%edx
0833cab4 +0x1cc:  mov    0x8(%ebp),%eax
0833cab7 +0x1cf:  mov    %edx,0x64(%eax)
0833caba +0x1d2:  mov    0xc(%ebp),%eax
0833cabd +0x1d5:  lea    0x208(%eax),%edx
0833cac3 +0x1db:  mov    0x8(%ebp),%eax
0833cac6 +0x1de:  add    $0x68,%eax
0833cac9 +0x1e1:  mov    %edx,0x4(%esp)
0833cacd +0x1e5:  mov    %eax,(%esp)
0833cad0 +0x1e8:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
0833cad5 +0x1ed:  leave
0833cad6 +0x1ee:  ret
0833cad7 +0x1ef:  nop
```

## 反编译 C

```c
// user_creature::CCreatureScript::Set @ 0x833c8e8

/* user_creature::CCreatureScript::Set(CreatureScript*) */

void __thiscall user_creature::CCreatureScript::Set(CCreatureScript *this,CreatureScript *param_1)

{
  void *pvVar1;
  int *piVar2;
  int local_28 [2];
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  
  pvVar1 = operator_new__(3);
  *(void **)(this + 0x20) = pvVar1;
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    *(bool *)(*(int *)(this + 0x20) + local_18) = *(int *)(param_1 + (local_18 + 0x14) * 4) != 0;
  }
  *(undefined4 *)this = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 0x178);
  local_20 = std::vector<int,std::allocator<int>>::size
                       ((vector<int,std::allocator<int>> *)(param_1 + 0x180));
  for (local_14 = 0; (int)local_14 < local_20; local_14 = local_14 + 1) {
    piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x180),local_14);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(this + 8),piVar2);
  }
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x20);
  this[0x2c] = SUB41(*(undefined4 *)(param_1 + 0x5c),0);
  local_1c = std::vector<st_crature_id_item_id,std::allocator<st_crature_id_item_id>>::size
                       ((vector<st_crature_id_item_id,std::allocator<st_crature_id_item_id>> *)
                        (param_1 + 0x1c0));
  for (local_10 = 0; (int)local_10 < local_1c; local_10 = local_10 + 1) {
    std::vector<st_crature_id_item_id,std::allocator<st_crature_id_item_id>>::operator[]
              ((vector<st_crature_id_item_id,std::allocator<st_crature_id_item_id>> *)
               (param_1 + 0x1c0),local_10);
    std::set<int,std::less<int>,std::allocator<int>>::insert(local_28);
  }
  this[0x4c] = *(CCreatureScript *)(param_1 + 0x18c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 0x1a4);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x68),(vector *)(param_1 + 0x208));
  return;
}
```
