# GetCandidateMapIndexList

`_ZN8PvP_Room24GetCandidateMapIndexListERSt6vectorIiSaIiEE`

`PvP_Room::GetCandidateMapIndexList(std::vector<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d87be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d87be  _ZN8PvP_Room24GetCandidateMapIndexListERSt6vectorIiSaIiEE
#           PvP_Room::GetCandidateMapIndexList(std::vector<int, std::allocator<int> >&)
# range [0x085d87be, 0x085d88ad]
085d87be +0x00:  push   %ebp
085d87bf +0x01:  mov    %esp,%ebp
085d87c1 +0x03:  sub    $0x28,%esp
085d87c4 +0x06:  movb   $0x0,-0x9(%ebp)
085d87c8 +0x0a:  movl   $0x1,-0x10(%ebp)
085d87cf +0x11:  jmp    085d8875 <+0xb7>
085d87d4 +0x16:  mov    -0x10(%ebp),%eax
085d87d7 +0x19:  lea    -0x9(%ebp),%edx
085d87da +0x1c:  mov    %edx,0x4(%esp)
085d87de +0x20:  mov    %eax,(%esp)
085d87e1 +0x23:  call   085d4690 <_Z15IsDeathMatchMapiRb>  ; IsDeathMatchMap(int, bool&)
085d87e6 +0x28:  test   %al,%al
085d87e8 +0x2a:  je     085d8816 <+0x58>
085d87ea +0x2c:  mov    0x8(%ebp),%eax
085d87ed +0x2f:  mov    0x4(%eax),%eax
085d87f0 +0x32:  cmp    $0x3,%eax
085d87f3 +0x35:  je     085d8865 <+0xa7>
085d87f5 +0x37:  mov    0x8(%ebp),%eax
085d87f8 +0x3a:  mov    0x4(%eax),%eax
085d87fb +0x3d:  cmp    $0x1,%eax
085d87fe +0x40:  je     085d880b <+0x4d>
085d8800 +0x42:  mov    0x8(%ebp),%eax
085d8803 +0x45:  mov    0x4(%eax),%eax
085d8806 +0x48:  cmp    $0x4,%eax
085d8809 +0x4b:  jne    085d8816 <+0x58>
085d880b +0x4d:  movzbl -0x9(%ebp),%eax
085d880f +0x51:  xor    $0x1,%eax
085d8812 +0x54:  test   %al,%al
085d8814 +0x56:  jne    085d8868 <+0xaa>
085d8816 +0x58:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085d881b +0x5d:  mov    %eax,(%esp)
085d881e +0x60:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085d8823 +0x65:  cmp    $0x7,%eax
085d8826 +0x68:  sete   %al
085d8829 +0x6b:  test   %al,%al
085d882b +0x6d:  je     085d8840 <+0x82>
085d882d +0x6f:  mov    -0x10(%ebp),%eax
085d8830 +0x72:  movzbl &PVPMAP_ONLY_TOURNAMENT_RANDOM(%eax),%eax
085d8837 +0x79:  xor    $0x1,%eax
085d883a +0x7c:  test   %al,%al
085d883c +0x7e:  je     085d8851 <+0x93>
085d883e +0x80:  jmp    085d886c <+0xae>
085d8840 +0x82:  mov    -0x10(%ebp),%eax
085d8843 +0x85:  movzbl &PVPMAP_ONLY_NORMAL_EXPOSURE(%eax),%eax
085d884a +0x8c:  xor    $0x1,%eax
085d884d +0x8f:  test   %al,%al
085d884f +0x91:  jne    085d886b <+0xad>
085d8851 +0x93:  lea    -0x10(%ebp),%eax
085d8854 +0x96:  mov    %eax,0x4(%esp)
085d8858 +0x9a:  mov    0xc(%ebp),%eax
085d885b +0x9d:  mov    %eax,(%esp)
085d885e +0xa0:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
085d8863 +0xa5:  jmp    085d886c <+0xae>
085d8865 +0xa7:  nop
085d8866 +0xa8:  jmp    085d886c <+0xae>
085d8868 +0xaa:  nop
085d8869 +0xab:  jmp    085d886c <+0xae>
085d886b +0xad:  nop
085d886c +0xae:  mov    -0x10(%ebp),%eax
085d886f +0xb1:  add    $0x1,%eax
085d8872 +0xb4:  mov    %eax,-0x10(%ebp)
085d8875 +0xb7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085d887a +0xbc:  mov    0x4(%eax),%eax
085d887d +0xbf:  mov    %eax,(%esp)
085d8880 +0xc2:  call   085df796 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1d
085d8885 +0xc7:  lea    0x1(%eax),%edx
085d8888 +0xca:  mov    -0x10(%ebp),%eax
085d888b +0xcd:  cmp    %eax,%edx
085d888d +0xcf:  jle    085d889e <+0xe0>
085d888f +0xd1:  mov    -0x10(%ebp),%eax
085d8892 +0xd4:  cmp    $0x13,%eax
085d8895 +0xd7:  jg     085d889e <+0xe0>
085d8897 +0xd9:  mov    $0x1,%eax
085d889c +0xde:  jmp    085d88a3 <+0xe5>
085d889e +0xe0:  mov    $0x0,%eax
085d88a3 +0xe5:  test   %al,%al
085d88a5 +0xe7:  jne    085d87d4 <+0x16>
085d88ab +0xed:  leave
085d88ac +0xee:  ret
085d88ad +0xef:  nop
```

## 反编译 C

```c
// PvP_Room::GetCandidateMapIndexList @ 0x85d87be

/* PvP_Room::GetCandidateMapIndexList(std::vector<int, std::allocator<int> >&) */

void __thiscall PvP_Room::GetCandidateMapIndexList(PvP_Room *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  GameWorld *this_00;
  int iVar3;
  int local_14;
  bool local_d [9];
  
  local_d[0] = false;
  local_14 = 1;
  while( true ) {
    iVar3 = G_CDataManager();
    iVar3 = CMapList::GetPVPMapCount(*(CMapList **)(iVar3 + 4));
    if ((local_14 < iVar3 + 1) && (local_14 < 0x14)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) break;
    cVar2 = IsDeathMatchMap(local_14,local_d);
    if ((cVar2 == '\0') ||
       ((*(int *)(this + 4) != 3 &&
        (((*(int *)(this + 4) != 1 && (*(int *)(this + 4) != 4)) || (local_d[0] == true)))))) {
      this_00 = (GameWorld *)G_GameWorld();
      iVar3 = GameWorld::GetChannelType(this_00);
      if (iVar3 == 7) {
        cVar2 = PVPMAP_ONLY_TOURNAMENT_RANDOM[local_14];
      }
      else {
        cVar2 = PVPMAP_ONLY_NORMAL_EXPOSURE[local_14];
      }
      if (cVar2 == '\x01') {
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)param_1,&local_14);
      }
    }
    local_14 = local_14 + 1;
  }
  return;
}
```
