# ResetUrgentQuestWaitingList

`_ZN9UserQuest27ResetUrgentQuestWaitingListEv`

`UserQuest::ResetUrgentQuestWaitingList()`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086ad178` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ad178  _ZN9UserQuest27ResetUrgentQuestWaitingListEv
#           UserQuest::ResetUrgentQuestWaitingList()
# range [0x086ad178, 0x086ad265]
086ad178 +0x00:  push   %ebp
086ad179 +0x01:  mov    %esp,%ebp
086ad17b +0x03:  push   %ebx
086ad17c +0x04:  sub    $0x24,%esp
086ad17f +0x07:  movl   $0x0,-0x14(%ebp)
086ad186 +0x0e:  jmp    086ad1c5 <+0x4d>
086ad188 +0x10:  mov    -0x14(%ebp),%edx
086ad18b +0x13:  mov    0x8(%ebp),%eax
086ad18e +0x16:  add    $0x1d4c,%edx
086ad194 +0x1c:  mov    0x8(%eax,%edx,4),%ebx
086ad198 +0x20:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086ad19d +0x25:  mov    %ebx,0x4(%esp)
086ad1a1 +0x29:  mov    %eax,(%esp)
086ad1a4 +0x2c:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
086ad1a9 +0x31:  mov    %eax,-0x10(%ebp)
086ad1ac +0x34:  cmpl   $0x0,-0x10(%ebp)
086ad1b0 +0x38:  je     086ad1c1 <+0x49>
086ad1b2 +0x3a:  mov    -0x10(%ebp),%eax
086ad1b5 +0x3d:  mov    0x8(%eax),%eax
086ad1b8 +0x40:  cmp    $0x8,%eax
086ad1bb +0x43:  je     086ad25f <+0xe7>
086ad1c1 +0x49:  addl   $0x1,-0x14(%ebp)
086ad1c5 +0x4d:  cmpl   $0x13,-0x14(%ebp)
086ad1c9 +0x51:  setle  %al
086ad1cc +0x54:  test   %al,%al
086ad1ce +0x56:  jne    086ad188 <+0x10>
086ad1d0 +0x58:  mov    0x8(%ebp),%eax
086ad1d3 +0x5b:  mov    %eax,(%esp)
086ad1d6 +0x5e:  call   086ad266 <_ZN9UserQuest12hasEpicQuestEv>  ; UserQuest::hasEpicQuest()
086ad1db +0x63:  test   %al,%al
086ad1dd +0x65:  je     086ad1ee <+0x76>
086ad1df +0x67:  mov    0x8(%ebp),%eax
086ad1e2 +0x6a:  movl   $0xffffffff,0x75f0(%eax)
086ad1ec +0x74:  jmp    086ad260 <+0xe8>
086ad1ee +0x76:  mov    0x8(%ebp),%eax
086ad1f1 +0x79:  mov    0x75f0(%eax),%ebx
086ad1f7 +0x7f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086ad1fc +0x84:  mov    %ebx,0x4(%esp)
086ad200 +0x88:  mov    %eax,(%esp)
086ad203 +0x8b:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
086ad208 +0x90:  mov    %eax,-0x18(%ebp)
086ad20b +0x93:  cmpl   $0x0,-0x18(%ebp)
086ad20f +0x97:  je     086ad250 <+0xd8>
086ad211 +0x99:  mov    -0x18(%ebp),%eax
086ad214 +0x9c:  mov    0x24(%eax),%eax
086ad217 +0x9f:  mov    %eax,-0xc(%ebp)
086ad21a +0xa2:  cmpl   $0x46,-0xc(%ebp)
086ad21e +0xa6:  jle    086ad227 <+0xaf>
086ad220 +0xa8:  movl   $0x46,-0xc(%ebp)
086ad227 +0xaf:  mov    0x8(%ebp),%eax
086ad22a +0xb2:  mov    (%eax),%eax
086ad22c +0xb4:  mov    %eax,(%esp)
086ad22f +0xb7:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086ad234 +0xbc:  add    $0x1,%eax
086ad237 +0xbf:  cmp    -0xc(%ebp),%eax
086ad23a +0xc2:  setg   %al
086ad23d +0xc5:  test   %al,%al
086ad23f +0xc7:  je     086ad260 <+0xe8>
086ad241 +0xc9:  mov    0x8(%ebp),%eax
086ad244 +0xcc:  movl   $0xffffffff,0x75f0(%eax)
086ad24e +0xd6:  jmp    086ad260 <+0xe8>
086ad250 +0xd8:  mov    0x8(%ebp),%eax
086ad253 +0xdb:  movl   $0xffffffff,0x75f0(%eax)
086ad25d +0xe5:  jmp    086ad260 <+0xe8>
086ad25f +0xe7:  nop
086ad260 +0xe8:  add    $0x24,%esp
086ad263 +0xeb:  pop    %ebx
086ad264 +0xec:  pop    %ebp
086ad265 +0xed:  ret
```

## 反编译 C

```c
// UserQuest::ResetUrgentQuestWaitingList @ 0x86ad178

/* UserQuest::ResetUrgentQuestWaitingList() */

void __thiscall UserQuest::ResetUrgentQuestWaitingList(UserQuest *this)

{
  char cVar1;
  int iVar2;
  int local_18;
  int local_10;
  
  local_18 = 0;
  while( true ) {
    if (0x13 < local_18) {
      cVar1 = hasEpicQuest(this);
      if (cVar1 == '\0') {
        iVar2 = G_CDataManager();
        iVar2 = CDataManager::find_quest(iVar2);
        if (iVar2 == 0) {
          *(undefined4 *)(this + 0x75f0) = 0xffffffff;
        }
        else {
          local_10 = *(int *)(iVar2 + 0x24);
          if (0x46 < local_10) {
            local_10 = 0x46;
          }
          iVar2 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
          if (local_10 < iVar2 + 1) {
            *(undefined4 *)(this + 0x75f0) = 0xffffffff;
          }
        }
      }
      else {
        *(undefined4 *)(this + 0x75f0) = 0xffffffff;
      }
      return;
    }
    iVar2 = G_CDataManager();
    iVar2 = CDataManager::find_quest(iVar2);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 8) == 8)) break;
    local_18 = local_18 + 1;
  }
  return;
}
```
