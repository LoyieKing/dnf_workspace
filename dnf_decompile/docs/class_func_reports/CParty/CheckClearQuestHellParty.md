# CheckClearQuestHellParty

`_ZN6CParty24CheckClearQuestHellPartyERSt6vectorIiSaIiEE`

`CParty::CheckClearQuestHellParty(std::vector<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a7a72` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a7a72  _ZN6CParty24CheckClearQuestHellPartyERSt6vectorIiSaIiEE
#           CParty::CheckClearQuestHellParty(std::vector<int, std::allocator<int> >&)
# range [0x085a7a72, 0x085a7b89]
085a7a72 +0x000:  push   %ebp
085a7a73 +0x001:  mov    %esp,%ebp
085a7a75 +0x003:  sub    $0x28,%esp
085a7a78 +0x006:  mov    0xc(%ebp),%eax
085a7a7b +0x009:  mov    %eax,(%esp)
085a7a7e +0x00c:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
085a7a83 +0x011:  movl   $0x0,-0x10(%ebp)
085a7a8a +0x018:  jmp    085a7b77 <+0x105>
085a7a8f +0x01d:  mov    -0x10(%ebp),%eax
085a7a92 +0x020:  mov    %eax,0x4(%esp)
085a7a96 +0x024:  mov    0x8(%ebp),%eax
085a7a99 +0x027:  mov    %eax,(%esp)
085a7a9c +0x02a:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a7aa1 +0x02f:  xor    $0x1,%eax
085a7aa4 +0x032:  test   %al,%al
085a7aa6 +0x034:  jne    085a7b6d <+0xfb>
085a7aac +0x03a:  movl   $0x0,-0xc(%ebp)
085a7ab3 +0x041:  mov    0x8(%ebp),%eax
085a7ab6 +0x044:  mov    0x1868(%eax),%eax
085a7abc +0x04a:  lea    0x1c(%eax),%edx
085a7abf +0x04d:  lea    -0x14(%ebp),%eax
085a7ac2 +0x050:  mov    %edx,0x4(%esp)
085a7ac6 +0x054:  mov    %eax,(%esp)
085a7ac9 +0x057:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
085a7ace +0x05c:  sub    $0x4,%esp
085a7ad1 +0x05f:  mov    0x8(%ebp),%eax
085a7ad4 +0x062:  mov    0x1868(%eax),%eax
085a7ada +0x068:  lea    0x1c(%eax),%edx
085a7add +0x06b:  lea    -0x18(%ebp),%eax
085a7ae0 +0x06e:  mov    %edx,0x4(%esp)
085a7ae4 +0x072:  mov    %eax,(%esp)
085a7ae7 +0x075:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
085a7aec +0x07a:  sub    $0x4,%esp
085a7aef +0x07d:  jmp    085a7b55 <+0xe3>
085a7af1 +0x07f:  lea    -0x14(%ebp),%eax
085a7af4 +0x082:  mov    %eax,(%esp)
085a7af7 +0x085:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
085a7afc +0x08a:  mov    (%eax),%eax
085a7afe +0x08c:  mov    %eax,-0xc(%ebp)
085a7b01 +0x08f:  mov    -0x10(%ebp),%edx
085a7b04 +0x092:  mov    0x8(%ebp),%ecx
085a7b07 +0x095:  mov    %edx,%eax
085a7b09 +0x097:  add    %eax,%eax
085a7b0b +0x099:  add    %edx,%eax
085a7b0d +0x09b:  shl    $0x3,%eax
085a7b10 +0x09e:  lea    (%ecx,%eax,1),%eax
085a7b13 +0x0a1:  add    $0x78,%eax
085a7b16 +0x0a4:  mov    (%eax),%eax
085a7b18 +0x0a6:  mov    %eax,(%esp)
085a7b1b +0x0a9:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
085a7b20 +0x0ae:  mov    -0xc(%ebp),%edx
085a7b23 +0x0b1:  mov    %edx,0x4(%esp)
085a7b27 +0x0b5:  mov    %eax,(%esp)
085a7b2a +0x0b8:  call   086ab920 <_ZNK9UserQuest12isClearQuestEi>  ; UserQuest::isClearQuest(int) const
085a7b2f +0x0bd:  xor    $0x1,%eax
085a7b32 +0x0c0:  test   %al,%al
085a7b34 +0x0c2:  je     085a7b4a <+0xd8>
085a7b36 +0x0c4:  lea    -0x10(%ebp),%eax
085a7b39 +0x0c7:  mov    %eax,0x4(%esp)
085a7b3d +0x0cb:  mov    0xc(%ebp),%eax
085a7b40 +0x0ce:  mov    %eax,(%esp)
085a7b43 +0x0d1:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
085a7b48 +0x0d6:  jmp    085a7b6e <+0xfc>
085a7b4a +0x0d8:  lea    -0x14(%ebp),%eax
085a7b4d +0x0db:  mov    %eax,(%esp)
085a7b50 +0x0de:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
085a7b55 +0x0e3:  lea    -0x18(%ebp),%eax
085a7b58 +0x0e6:  mov    %eax,0x4(%esp)
085a7b5c +0x0ea:  lea    -0x14(%ebp),%eax
085a7b5f +0x0ed:  mov    %eax,(%esp)
085a7b62 +0x0f0:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
085a7b67 +0x0f5:  test   %al,%al
085a7b69 +0x0f7:  jne    085a7af1 <+0x7f>
085a7b6b +0x0f9:  jmp    085a7b6e <+0xfc>
085a7b6d +0x0fb:  nop
085a7b6e +0x0fc:  mov    -0x10(%ebp),%eax
085a7b71 +0x0ff:  add    $0x1,%eax
085a7b74 +0x102:  mov    %eax,-0x10(%ebp)
085a7b77 +0x105:  mov    -0x10(%ebp),%eax
085a7b7a +0x108:  cmp    $0x3,%eax
085a7b7d +0x10b:  setle  %al
085a7b80 +0x10e:  test   %al,%al
085a7b82 +0x110:  jne    085a7a8f <+0x1d>
085a7b88 +0x116:  leave
085a7b89 +0x117:  ret
```

## 反编译 C

```c
// CParty::CheckClearQuestHellParty @ 0x85a7a72

/* CParty::CheckClearQuestHellParty(std::vector<int, std::allocator<int> >&) */

void __thiscall CParty::CheckClearQuestHellParty(CParty *this,vector *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  UserQuest *this_00;
  __normal_iterator local_1c [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_18 [4];
  int local_14;
  int local_10;
  
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)param_1);
  local_14 = 0;
  do {
    if (3 < local_14) {
      return;
    }
    cVar1 = _checkValidUser(this,local_14);
    if (cVar1 == '\x01') {
      local_10 = 0;
      std::vector<int,std::allocator<int>>::begin();
      std::vector<int,std::allocator<int>>::end();
      while (bVar2 = __gnu_cxx::operator!=(local_18,local_1c), bVar2) {
        piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_18);
        local_10 = *piVar3;
        this_00 = (UserQuest *)CUser::getCurCharacQuestR(*(CUser **)(this + local_14 * 0x18 + 0x78))
        ;
        cVar1 = UserQuest::isClearQuest(this_00,local_10);
        if (cVar1 != '\x01') {
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)param_1,&local_14);
          break;
        }
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_18);
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
