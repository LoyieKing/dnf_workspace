# onSelectCharacter

`_ZN5CUser17onSelectCharacterEv`

`CUser::onSelectCharacter()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086800c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086800c6  _ZN5CUser17onSelectCharacterEv
#           CUser::onSelectCharacter()
# range [0x086800c6, 0x086802a9]
086800c6 +0x000:  push   %ebp
086800c7 +0x001:  mov    %esp,%ebp
086800c9 +0x003:  push   %ebx
086800ca +0x004:  sub    $0xb4,%esp
086800d0 +0x00a:  mov    0x8(%ebp),%eax
086800d3 +0x00d:  movl   $0x64,0x8e40c(%eax)
086800dd +0x017:  mov    0x8(%ebp),%eax
086800e0 +0x01a:  add    $0x8e3f0,%eax
086800e5 +0x01f:  mov    %eax,(%esp)
086800e8 +0x022:  call   08694fe0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1835>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1835
086800ed +0x027:  movl   $0x0,-0x20(%ebp)
086800f4 +0x02e:  movl   $0x0,-0x1c(%ebp)
086800fb +0x035:  movl   $0x0,-0x14(%ebp)
08680102 +0x03c:  jmp    08680182 <+0xbc>
08680104 +0x03e:  mov    0x8(%ebp),%eax
08680107 +0x041:  mov    %eax,(%esp)
0868010a +0x044:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0868010f +0x049:  lea    -0x5d(%ebp),%edx
08680112 +0x04c:  mov    -0x14(%ebp),%ecx
08680115 +0x04f:  mov    %ecx,0xc(%esp)
08680119 +0x053:  movl   $0x0,0x8(%esp)
08680121 +0x05b:  mov    %eax,0x4(%esp)
08680125 +0x05f:  mov    %edx,(%esp)
08680128 +0x062:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0868012d +0x067:  sub    $0x4,%esp
08680130 +0x06a:  mov    -0x5b(%ebp),%eax
08680133 +0x06d:  test   %eax,%eax
08680135 +0x06f:  je     0868017e <+0xb8>
08680137 +0x071:  addl   $0x1,-0x20(%ebp)
0868013b +0x075:  mov    -0x5b(%ebp),%eax
0868013e +0x078:  mov    %eax,%ebx
08680140 +0x07a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08680145 +0x07f:  mov    %ebx,0x4(%esp)
08680149 +0x083:  mov    %eax,(%esp)
0868014c +0x086:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08680151 +0x08b:  mov    %eax,-0x10(%ebp)
08680154 +0x08e:  cmpl   $0x0,-0x10(%ebp)
08680158 +0x092:  je     08680171 <+0xab>
0868015a +0x094:  mov    -0x10(%ebp),%eax
0868015d +0x097:  mov    %eax,(%esp)
08680160 +0x09a:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08680165 +0x09f:  cmp    $0x2,%eax
08680168 +0x0a2:  jne    08680171 <+0xab>
0868016a +0x0a4:  mov    $0x1,%eax
0868016f +0x0a9:  jmp    08680176 <+0xb0>
08680171 +0x0ab:  mov    $0x0,%eax
08680176 +0x0b0:  test   %al,%al
08680178 +0x0b2:  je     0868017e <+0xb8>
0868017a +0x0b4:  addl   $0x1,-0x1c(%ebp)
0868017e +0x0b8:  addl   $0x1,-0x14(%ebp)
08680182 +0x0bc:  cmpl   $0x9,-0x14(%ebp)
08680186 +0x0c0:  setle  %al
08680189 +0x0c3:  test   %al,%al
0868018b +0x0c5:  jne    08680104 <+0x3e>
08680191 +0x0cb:  cmpl   $0x0,-0x20(%ebp)
08680195 +0x0cf:  jle    086801c6 <+0x100>
08680197 +0x0d1:  mov    0x8(%ebp),%eax
0868019a +0x0d4:  mov    0x8e40c(%eax),%eax
086801a0 +0x0da:  lea    -0x28(%eax),%edx
086801a3 +0x0dd:  mov    0x8(%ebp),%eax
086801a6 +0x0e0:  mov    %edx,0x8e40c(%eax)
086801ac +0x0e6:  mov    0x8(%ebp),%eax
086801af +0x0e9:  mov    0x8e40c(%eax),%edx
086801b5 +0x0ef:  mov    -0x20(%ebp),%eax
086801b8 +0x0f2:  imul   $0xfffffff6,%eax,%eax
086801bb +0x0f5:  add    %eax,%edx
086801bd +0x0f7:  mov    0x8(%ebp),%eax
086801c0 +0x0fa:  mov    %edx,0x8e40c(%eax)
086801c6 +0x100:  mov    -0x1c(%ebp),%eax
086801c9 +0x103:  imul   $0x64,%eax,%eax
086801cc +0x106:  mov    0x8(%ebp),%edx
086801cf +0x109:  add    $0x8e3f0,%edx
086801d5 +0x10f:  mov    %eax,0x4(%esp)
086801d9 +0x113:  mov    %edx,(%esp)
086801dc +0x116:  call   08694ff0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1845>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1845
086801e1 +0x11b:  movl   $0x0,-0x18(%ebp)
086801e8 +0x122:  movl   $0xa,-0xc(%ebp)
086801ef +0x129:  jmp    0868023b <+0x175>
086801f1 +0x12b:  cmpl   $0xb,-0xc(%ebp)
086801f5 +0x12f:  je     08680236 <+0x170>
086801f7 +0x131:  mov    0x8(%ebp),%eax
086801fa +0x134:  mov    %eax,(%esp)
086801fd +0x137:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08680202 +0x13c:  lea    -0x9a(%ebp),%edx
08680208 +0x142:  mov    -0xc(%ebp),%ecx
0868020b +0x145:  mov    %ecx,0xc(%esp)
0868020f +0x149:  movl   $0x0,0x8(%esp)
08680217 +0x151:  mov    %eax,0x4(%esp)
0868021b +0x155:  mov    %edx,(%esp)
0868021e +0x158:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08680223 +0x15d:  sub    $0x4,%esp
08680226 +0x160:  mov    -0x98(%ebp),%eax
0868022c +0x166:  test   %eax,%eax
0868022e +0x168:  je     08680237 <+0x171>
08680230 +0x16a:  addl   $0x1,-0x18(%ebp)
08680234 +0x16e:  jmp    08680237 <+0x171>
08680236 +0x170:  nop
08680237 +0x171:  addl   $0x1,-0xc(%ebp)
0868023b +0x175:  cmpl   $0x15,-0xc(%ebp)
0868023f +0x179:  setle  %al
08680242 +0x17c:  test   %al,%al
08680244 +0x17e:  jne    086801f1 <+0x12b>
08680246 +0x180:  cmpl   $0x8,-0x18(%ebp)
0868024a +0x184:  jle    08680261 <+0x19b>
0868024c +0x186:  mov    0x8(%ebp),%eax
0868024f +0x189:  mov    0x8e40c(%eax),%eax
08680255 +0x18f:  lea    -0x14(%eax),%edx
08680258 +0x192:  mov    0x8(%ebp),%eax
0868025b +0x195:  mov    %edx,0x8e40c(%eax)
08680261 +0x19b:  mov    0x8(%ebp),%eax
08680264 +0x19e:  mov    %eax,(%esp)
08680267 +0x1a1:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
0868026c +0x1a6:  cmp    $0x9,%eax
0868026f +0x1a9:  setg   %al
08680272 +0x1ac:  test   %al,%al
08680274 +0x1ae:  je     0868028b <+0x1c5>
08680276 +0x1b0:  mov    0x8(%ebp),%eax
08680279 +0x1b3:  mov    0x8e40c(%eax),%eax
0868027f +0x1b9:  lea    -0x14(%eax),%edx
08680282 +0x1bc:  mov    0x8(%ebp),%eax
08680285 +0x1bf:  mov    %edx,0x8e40c(%eax)
0868028b +0x1c5:  mov    0x8(%ebp),%eax
0868028e +0x1c8:  mov    0x8e40c(%eax),%eax
08680294 +0x1ce:  test   %eax,%eax
08680296 +0x1d0:  jns    086802a5 <+0x1df>
08680298 +0x1d2:  mov    0x8(%ebp),%eax
0868029b +0x1d5:  movl   $0x0,0x8e40c(%eax)
086802a5 +0x1df:  mov    -0x4(%ebp),%ebx
086802a8 +0x1e2:  leave
086802a9 +0x1e3:  ret
```

## 反编译 C

```c
// CUser::onSelectCharacter @ 0x86800c6

/* CUser::onSelectCharacter() */

void __thiscall CUser::onSelectCharacter(CUser *this)

{
  bool bVar1;
  CDataManager *this_00;
  int iVar2;
  undefined1 local_9e [2];
  int local_9c;
  undefined1 local_61 [2];
  int local_5f;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  CItem *local_14;
  int local_10;
  
  *(undefined4 *)(this + 0x8e40c) = 100;
  WongWork::CMCAPManager::resetIncRate((CMCAPManager *)(this + 0x8e3f0));
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  do {
    if (9 < local_18) {
      if (0 < local_24) {
        *(int *)(this + 0x8e40c) = *(int *)(this + 0x8e40c) + -0x28;
        *(int *)(this + 0x8e40c) = *(int *)(this + 0x8e40c) + local_24 * -10;
      }
      WongWork::CMCAPManager::decIncRate((CMCAPManager *)(this + 0x8e3f0),local_20 * 100);
      local_1c = 0;
      for (local_10 = 10; local_10 < 0x16; local_10 = local_10 + 1) {
        if (local_10 != 0xb) {
          iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
          CInventory::GetInvenSlot((int)local_9e,iVar2);
          if (local_9c != 0) {
            local_1c = local_1c + 1;
          }
        }
      }
      if (8 < local_1c) {
        *(int *)(this + 0x8e40c) = *(int *)(this + 0x8e40c) + -0x14;
      }
      iVar2 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)this);
      if (9 < iVar2) {
        *(int *)(this + 0x8e40c) = *(int *)(this + 0x8e40c) + -0x14;
      }
      if (*(int *)(this + 0x8e40c) < 0) {
        *(undefined4 *)(this + 0x8e40c) = 0;
      }
      return;
    }
    iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    CInventory::GetInvenSlot((int)local_61,iVar2);
    iVar2 = local_5f;
    if (local_5f != 0) {
      local_24 = local_24 + 1;
      this_00 = (CDataManager *)G_CDataManager();
      local_14 = (CItem *)CDataManager::find_item(this_00,iVar2);
      if (local_14 == (CItem *)0x0) {
LAB_08680171:
        bVar1 = false;
      }
      else {
        iVar2 = CItem::get_rarity(local_14);
        if (iVar2 != 2) goto LAB_08680171;
        bVar1 = true;
      }
      if (bVar1) {
        local_20 = local_20 + 1;
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}
```
