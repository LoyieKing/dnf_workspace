# execute

`_ZN11game_master16CTestDisjointCmd7executeEv`

`game_master::CTestDisjointCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CTestDisjointCmd` | `0x084a9c0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a9c0c  _ZN11game_master16CTestDisjointCmd7executeEv
#           game_master::CTestDisjointCmd::execute()
# range [0x084a9c0c, 0x084a9da9]
084a9c0c +0x000:  push   %ebp
084a9c0d +0x001:  mov    %esp,%ebp
084a9c0f +0x003:  push   %edi
084a9c10 +0x004:  push   %esi
084a9c11 +0x005:  push   %ebx
084a9c12 +0x006:  sub    $0x8c,%esp
084a9c18 +0x00c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a9c1d +0x011:  movl   $0x795a,0x4(%esp)
084a9c25 +0x019:  mov    %eax,(%esp)
084a9c28 +0x01c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084a9c2d +0x021:  mov    %eax,-0x40(%ebp)
084a9c30 +0x024:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a9c35 +0x029:  movl   $0x795b,0x4(%esp)
084a9c3d +0x031:  mov    %eax,(%esp)
084a9c40 +0x034:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084a9c45 +0x039:  mov    %eax,-0x3c(%ebp)
084a9c48 +0x03c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a9c4d +0x041:  movl   $0x797a,0x4(%esp)
084a9c55 +0x049:  mov    %eax,(%esp)
084a9c58 +0x04c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084a9c5d +0x051:  mov    %eax,-0x38(%ebp)
084a9c60 +0x054:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a9c65 +0x059:  movl   $0x795e,0x4(%esp)
084a9c6d +0x061:  mov    %eax,(%esp)
084a9c70 +0x064:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084a9c75 +0x069:  mov    %eax,-0x34(%ebp)
084a9c78 +0x06c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a9c7d +0x071:  movl   $0x7977,0x4(%esp)
084a9c85 +0x079:  mov    %eax,(%esp)
084a9c88 +0x07c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084a9c8d +0x081:  mov    %eax,-0x30(%ebp)
084a9c90 +0x084:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a9c95 +0x089:  movl   $0x975e0,0x4(%esp)
084a9c9d +0x091:  mov    %eax,(%esp)
084a9ca0 +0x094:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084a9ca5 +0x099:  mov    %eax,-0x2c(%ebp)
084a9ca8 +0x09c:  movl   $0x3e8,-0x28(%ebp)
084a9caf +0x0a3:  lea    -0x68(%ebp),%eax
084a9cb2 +0x0a6:  mov    %eax,(%esp)
084a9cb5 +0x0a9:  call   082347a2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e4c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e4c
084a9cba +0x0ae:  movl   $0x0,-0x24(%ebp)
084a9cc1 +0x0b5:  jmp    084a9d8f <+0x183>
084a9cc6 +0x0ba:  movl   $0x0,-0x20(%ebp)
084a9ccd +0x0c1:  jmp    084a9d7c <+0x170>
084a9cd2 +0x0c6:  movl   $0x0,-0x1c(%ebp)
084a9cd9 +0x0cd:  jmp    084a9d67 <+0x15b>
084a9cde +0x0d2:  mov    -0x24(%ebp),%eax
084a9ce1 +0x0d5:  mov    -0x40(%ebp,%eax,4),%eax
084a9ce5 +0x0d9:  movl   $0x0,0x14(%esp)
084a9ced +0x0e1:  movl   $0x0,0x10(%esp)
084a9cf5 +0x0e9:  lea    -0x68(%ebp),%edx
084a9cf8 +0x0ec:  mov    %edx,0xc(%esp)
084a9cfc +0x0f0:  mov    -0x20(%ebp),%edx
084a9cff +0x0f3:  mov    %edx,0x8(%esp)
084a9d03 +0x0f7:  movl   $0x0,0x4(%esp)
084a9d0b +0x0ff:  mov    %eax,(%esp)
084a9d0e +0x102:  call   085d234a <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser>  ; expert_job::CDisjointer::get_disjoint_result_(CItem*, Inven_Item*, int, DisJointResult&, bool, CUser*)
084a9d13 +0x107:  mov    -0x64(%ebp),%eax
084a9d16 +0x10a:  mov    %eax,-0x6c(%ebp)
084a9d19 +0x10d:  mov    -0x50(%ebp),%edi
084a9d1c +0x110:  mov    -0x68(%ebp),%esi
084a9d1f +0x113:  mov    -0x54(%ebp),%ebx
084a9d22 +0x116:  mov    -0x24(%ebp),%eax
084a9d25 +0x119:  mov    -0x40(%ebp,%eax,4),%eax
084a9d29 +0x11d:  mov    %eax,(%esp)
084a9d2c +0x120:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
084a9d31 +0x125:  mov    -0x6c(%ebp),%edx
084a9d34 +0x128:  mov    %edx,0x1c(%esp)
084a9d38 +0x12c:  mov    %edi,0x18(%esp)
084a9d3c +0x130:  mov    %esi,0x14(%esp)
084a9d40 +0x134:  mov    %ebx,0x10(%esp)
084a9d44 +0x138:  mov    -0x20(%ebp),%edx
084a9d47 +0x13b:  mov    %edx,0xc(%esp)
084a9d4b +0x13f:  mov    %eax,0x8(%esp)
084a9d4f +0x143:  movl   $"%d;%d;%d;%d;%d;%d\n",0x4(%esp)
084a9d57 +0x14b:  movl   $"disjoint_result",(%esp)
084a9d5e +0x152:  call   0858c78a <_ZN6OS_API8WriteLogEPKcS1_z>  ; OS_API::WriteLog(char const*, char const*, ...)
084a9d63 +0x157:  addl   $0x1,-0x1c(%ebp)
084a9d67 +0x15b:  mov    -0x1c(%ebp),%eax
084a9d6a +0x15e:  cmp    -0x28(%ebp),%eax
084a9d6d +0x161:  setl   %al
084a9d70 +0x164:  test   %al,%al
084a9d72 +0x166:  jne    084a9cde <+0xd2>
084a9d78 +0x16c:  addl   $0x1,-0x20(%ebp)
084a9d7c +0x170:  cmpl   $0x8,-0x20(%ebp)
084a9d80 +0x174:  setle  %al
084a9d83 +0x177:  test   %al,%al
084a9d85 +0x179:  jne    084a9cd2 <+0xc6>
084a9d8b +0x17f:  addl   $0x1,-0x24(%ebp)
084a9d8f +0x183:  cmpl   $0x5,-0x24(%ebp)
084a9d93 +0x187:  setle  %al
084a9d96 +0x18a:  test   %al,%al
084a9d98 +0x18c:  jne    084a9cc6 <+0xba>
084a9d9e +0x192:  add    $0x8c,%esp
084a9da4 +0x198:  pop    %ebx
084a9da5 +0x199:  pop    %esi
084a9da6 +0x19a:  pop    %edi
084a9da7 +0x19b:  pop    %ebp
084a9da8 +0x19c:  ret
084a9da9 +0x19d:  nop
```

## 反编译 C

```c
// game_master::CTestDisjointCmd::execute @ 0x84a9c0c

/* game_master::CTestDisjointCmd::execute() */

void game_master::CTestDisjointCmd::execute(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CDataManager *pCVar5;
  undefined4 uVar6;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_44 [4];
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  pCVar5 = (CDataManager *)G_CDataManager();
  local_44[0] = CDataManager::find_item(pCVar5,0x795a);
  pCVar5 = (CDataManager *)G_CDataManager();
  local_44[1] = CDataManager::find_item(pCVar5,0x795b);
  pCVar5 = (CDataManager *)G_CDataManager();
  local_44[2] = CDataManager::find_item(pCVar5,0x797a);
  pCVar5 = (CDataManager *)G_CDataManager();
  local_44[3] = CDataManager::find_item(pCVar5,0x795e);
  pCVar5 = (CDataManager *)G_CDataManager();
  local_34 = CDataManager::find_item(pCVar5,0x7977);
  pCVar5 = (CDataManager *)G_CDataManager();
  local_30 = CDataManager::find_item(pCVar5,620000);
  local_2c = 1000;
  DisJointResult::DisJointResult((DisJointResult *)&local_6c);
  for (local_28 = 0; local_28 < 6; local_28 = local_28 + 1) {
    for (local_24 = 0; local_24 < 9; local_24 = local_24 + 1) {
      for (local_20 = 0; local_20 < local_2c; local_20 = local_20 + 1) {
        expert_job::CDisjointer::get_disjoint_result_
                  ((CItem *)local_44[local_28],(Inven_Item *)0x0,local_24,
                   (DisJointResult *)&local_6c,false,(CUser *)0x0);
        uVar4 = local_54;
        uVar3 = local_58;
        uVar2 = local_68;
        uVar1 = local_6c;
        uVar6 = CItem::get_rarity((CItem *)local_44[local_28]);
        OS_API::WriteLog("disjoint_result","%d;%d;%d;%d;%d;%d\n",uVar6,local_24,uVar3,uVar1,uVar4,
                         uVar2);
      }
    }
  }
  return;
}
```
