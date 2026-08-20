# CheckDungeonEventStoryPause

`_ZNK9UserQuest27CheckDungeonEventStoryPauseEiii`

`UserQuest::CheckDungeonEventStoryPause(int, int, int) const`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086ad054` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ad054  _ZNK9UserQuest27CheckDungeonEventStoryPauseEiii
#           UserQuest::CheckDungeonEventStoryPause(int, int, int) const
# range [0x086ad054, 0x086ad177]
086ad054 +0x000:  push   %ebp
086ad055 +0x001:  mov    %esp,%ebp
086ad057 +0x003:  push   %ebx
086ad058 +0x004:  sub    $0x24,%esp
086ad05b +0x007:  movl   $0x0,-0x14(%ebp)
086ad062 +0x00e:  jmp    086ad15d <+0x109>
086ad067 +0x013:  mov    -0x14(%ebp),%edx
086ad06a +0x016:  mov    0x8(%ebp),%eax
086ad06d +0x019:  add    $0x1d4c,%edx
086ad073 +0x01f:  mov    0x8(%eax,%edx,4),%eax
086ad077 +0x023:  test   %eax,%eax
086ad079 +0x025:  je     086ad159 <+0x105>
086ad07f +0x02b:  mov    -0x14(%ebp),%edx
086ad082 +0x02e:  mov    0x8(%ebp),%eax
086ad085 +0x031:  add    $0x1d4c,%edx
086ad08b +0x037:  mov    0x8(%eax,%edx,4),%ebx
086ad08f +0x03b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086ad094 +0x040:  mov    %ebx,0x4(%esp)
086ad098 +0x044:  mov    %eax,(%esp)
086ad09b +0x047:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
086ad0a0 +0x04c:  mov    %eax,-0x10(%ebp)
086ad0a3 +0x04f:  cmpl   $0x0,-0x10(%ebp)
086ad0a7 +0x053:  je     086ad159 <+0x105>
086ad0ad +0x059:  movl   $0x0,-0xc(%ebp)
086ad0b4 +0x060:  jmp    086ad13b <+0xe7>
086ad0b9 +0x065:  mov    -0x10(%ebp),%eax
086ad0bc +0x068:  lea    0x124(%eax),%edx
086ad0c2 +0x06e:  mov    -0xc(%ebp),%eax
086ad0c5 +0x071:  mov    %eax,0x4(%esp)
086ad0c9 +0x075:  mov    %edx,(%esp)
086ad0cc +0x078:  call   086ad7e4 <_GLOBAL__I__ZN9UserQuest5resetEv+0x295>  ; global constructors keyed to UserQuest::reset()+0x295
086ad0d1 +0x07d:  mov    (%eax),%eax
086ad0d3 +0x07f:  test   %eax,%eax
086ad0d5 +0x081:  je     086ad0de <+0x8a>
086ad0d7 +0x083:  cmp    $0x1,%eax
086ad0da +0x086:  je     086ad10a <+0xb6>
086ad0dc +0x088:  jmp    086ad137 <+0xe3>
086ad0de +0x08a:  mov    -0x10(%ebp),%eax
086ad0e1 +0x08d:  lea    0x124(%eax),%edx
086ad0e7 +0x093:  mov    -0xc(%ebp),%eax
086ad0ea +0x096:  mov    %eax,0x4(%esp)
086ad0ee +0x09a:  mov    %edx,(%esp)
086ad0f1 +0x09d:  call   086ad7e4 <_GLOBAL__I__ZN9UserQuest5resetEv+0x295>  ; global constructors keyed to UserQuest::reset()+0x295
086ad0f6 +0x0a2:  mov    0x8(%eax),%eax
086ad0f9 +0x0a5:  cmp    0x10(%ebp),%eax
086ad0fc +0x0a8:  sete   %al
086ad0ff +0x0ab:  test   %al,%al
086ad101 +0x0ad:  je     086ad136 <+0xe2>
086ad103 +0x0af:  mov    $0x1,%eax
086ad108 +0x0b4:  jmp    086ad171 <+0x11d>
086ad10a +0x0b6:  mov    -0x10(%ebp),%eax
086ad10d +0x0b9:  lea    0x124(%eax),%edx
086ad113 +0x0bf:  mov    -0xc(%ebp),%eax
086ad116 +0x0c2:  mov    %eax,0x4(%esp)
086ad11a +0x0c6:  mov    %edx,(%esp)
086ad11d +0x0c9:  call   086ad7e4 <_GLOBAL__I__ZN9UserQuest5resetEv+0x295>  ; global constructors keyed to UserQuest::reset()+0x295
086ad122 +0x0ce:  mov    0x8(%eax),%eax
086ad125 +0x0d1:  cmp    0xc(%ebp),%eax
086ad128 +0x0d4:  sete   %al
086ad12b +0x0d7:  test   %al,%al
086ad12d +0x0d9:  je     086ad137 <+0xe3>
086ad12f +0x0db:  mov    $0x1,%eax
086ad134 +0x0e0:  jmp    086ad171 <+0x11d>
086ad136 +0x0e2:  nop
086ad137 +0x0e3:  addl   $0x1,-0xc(%ebp)
086ad13b +0x0e7:  mov    -0x10(%ebp),%eax
086ad13e +0x0ea:  add    $0x124,%eax
086ad143 +0x0ef:  mov    %eax,(%esp)
086ad146 +0x0f2:  call   083ad2b6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x47282>  ; global constructors keyed to CServerEvent::m_nExpRate+0x47282
086ad14b +0x0f7:  cmp    -0xc(%ebp),%eax
086ad14e +0x0fa:  seta   %al
086ad151 +0x0fd:  test   %al,%al
086ad153 +0x0ff:  jne    086ad0b9 <+0x65>
086ad159 +0x105:  addl   $0x1,-0x14(%ebp)
086ad15d +0x109:  cmpl   $0x13,-0x14(%ebp)
086ad161 +0x10d:  setle  %al
086ad164 +0x110:  test   %al,%al
086ad166 +0x112:  jne    086ad067 <+0x13>
086ad16c +0x118:  mov    $0x0,%eax
086ad171 +0x11d:  add    $0x24,%esp
086ad174 +0x120:  pop    %ebx
086ad175 +0x121:  pop    %ebp
086ad176 +0x122:  ret
086ad177 +0x123:  nop
```

## 反编译 C

```c
// UserQuest::CheckDungeonEventStoryPause @ 0x86ad054

/* UserQuest::CheckDungeonEventStoryPause(int, int, int) const */

undefined4 UserQuest::CheckDungeonEventStoryPause(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  uint local_10;
  
  local_18 = 0;
  do {
    if (0x13 < local_18) {
      return 0;
    }
    if (*(int *)(param_1 + 8 + (local_18 + 0x1d4c) * 4) != 0) {
      iVar1 = G_CDataManager();
      iVar1 = CDataManager::find_quest(iVar1);
      if (iVar1 != 0) {
        for (local_10 = 0;
            uVar4 = std::vector<dungeonEventHanaseStruct,std::allocator<dungeonEventHanaseStruct>>::
                    size((vector<dungeonEventHanaseStruct,std::allocator<dungeonEventHanaseStruct>>
                          *)(iVar1 + 0x124)), local_10 < uVar4; local_10 = local_10 + 1) {
          piVar2 = (int *)std::
                          vector<dungeonEventHanaseStruct,std::allocator<dungeonEventHanaseStruct>>
                          ::operator[]((vector<dungeonEventHanaseStruct,std::allocator<dungeonEventHanaseStruct>>
                                        *)(iVar1 + 0x124),local_10);
          if (*piVar2 == 0) {
            iVar3 = std::vector<dungeonEventHanaseStruct,std::allocator<dungeonEventHanaseStruct>>::
                    operator[]((vector<dungeonEventHanaseStruct,std::allocator<dungeonEventHanaseStruct>>
                                *)(iVar1 + 0x124),local_10);
            if (*(int *)(iVar3 + 8) == param_3) {
              return 1;
            }
          }
          else if ((*piVar2 == 1) &&
                  (iVar3 = std::
                           vector<dungeonEventHanaseStruct,std::allocator<dungeonEventHanaseStruct>>
                           ::operator[]((vector<dungeonEventHanaseStruct,std::allocator<dungeonEventHanaseStruct>>
                                         *)(iVar1 + 0x124),local_10), *(int *)(iVar3 + 8) == param_2
                  )) {
            return 1;
          }
        }
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}
```
