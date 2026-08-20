# GetRentItemInfo

`_ZN7pc_room15GetRentItemInfoER5CUserccR19EventRewardItemInfoi`

`pc_room::GetRentItemInfo(CUser&, char, char, EventRewardItemInfo&, int)`

| 类 | 地址 |
|---|---|
| `pc_room` | `0x08271396` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08271396  _ZN7pc_room15GetRentItemInfoER5CUserccR19EventRewardItemInfoi
#           pc_room::GetRentItemInfo(CUser&, char, char, EventRewardItemInfo&, int)
# range [0x08271396, 0x082714c4]
08271396 +0x000:  push   %ebp
08271397 +0x001:  mov    %esp,%ebp
08271399 +0x003:  sub    $0x48,%esp
0827139c +0x006:  mov    0xc(%ebp),%edx
0827139f +0x009:  mov    0x10(%ebp),%eax
082713a2 +0x00c:  mov    %dl,-0x2c(%ebp)
082713a5 +0x00f:  mov    %al,-0x30(%ebp)
082713a8 +0x012:  movl   $0x0,-0x20(%ebp)
082713af +0x019:  mov    0x18(%ebp),%eax
082713b2 +0x01c:  mov    %eax,0x8(%esp)
082713b6 +0x020:  lea    -0x20(%ebp),%eax
082713b9 +0x023:  mov    %eax,0x4(%esp)
082713bd +0x027:  mov    0x8(%ebp),%eax
082713c0 +0x02a:  mov    %eax,(%esp)
082713c3 +0x02d:  call   082711f7 <_ZN7pc_room17GetSelectionIndexER5CUserRii>  ; pc_room::GetSelectionIndex(CUser&, int&, int)
082713c8 +0x032:  xor    $0x1,%eax
082713cb +0x035:  test   %al,%al
082713cd +0x037:  je     082713d9 <+0x43>
082713cf +0x039:  mov    $0x0,%eax
082713d4 +0x03e:  jmp    082714c3 <+0x12d>
082713d9 +0x043:  movb   $0x0,-0x21(%ebp)
082713dd +0x047:  lea    -0x21(%ebp),%eax
082713e0 +0x04a:  mov    %eax,0x4(%esp)
082713e4 +0x04e:  mov    0x8(%ebp),%eax
082713e7 +0x051:  mov    %eax,(%esp)
082713ea +0x054:  call   082712a6 <_ZN7pc_room15GetCharacterJobER5CUserRc>  ; pc_room::GetCharacterJob(CUser&, char&)
082713ef +0x059:  xor    $0x1,%eax
082713f2 +0x05c:  test   %al,%al
082713f4 +0x05e:  je     08271400 <+0x6a>
082713f6 +0x060:  mov    $0x0,%eax
082713fb +0x065:  jmp    082714c3 <+0x12d>
08271400 +0x06a:  mov    -0x20(%ebp),%edx
08271403 +0x06d:  movzbl -0x21(%ebp),%eax
08271407 +0x071:  movsbl %al,%eax
0827140a +0x074:  mov    %edx,0x4(%esp)
0827140e +0x078:  mov    %eax,(%esp)
08271411 +0x07b:  call   088945ad <_Z30makeFairPVPEquipmentPackageKeyii>  ; makeFairPVPEquipmentPackageKey(int, int)
08271416 +0x080:  mov    %eax,-0x1c(%ebp)
08271419 +0x083:  mov    0x18(%ebp),%eax
0827141c +0x086:  mov    %eax,0x4(%esp)
08271420 +0x08a:  mov    -0x1c(%ebp),%eax
08271423 +0x08d:  mov    %eax,(%esp)
08271426 +0x090:  call   082712da <_ZN7pc_room26GetRewardItemSelectionListEii>  ; pc_room::GetRewardItemSelectionList(int, int)
0827142b +0x095:  mov    %eax,-0x18(%ebp)
0827142e +0x098:  cmpl   $0x0,-0x18(%ebp)
08271432 +0x09c:  jne    0827143e <+0xa8>
08271434 +0x09e:  mov    $0x0,%eax
08271439 +0x0a3:  jmp    082714c3 <+0x12d>
0827143e +0x0a8:  mov    -0x18(%ebp),%eax
08271441 +0x0ab:  mov    %eax,(%esp)
08271444 +0x0ae:  call   0826fe58 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x45a>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x45a
08271449 +0x0b3:  mov    %eax,-0x14(%ebp)
0827144c +0x0b6:  cmpb   $0x0,-0x2c(%ebp)
08271450 +0x0ba:  js     0827145b <+0xc5>
08271452 +0x0bc:  movsbl -0x2c(%ebp),%eax
08271456 +0x0c0:  cmp    -0x14(%ebp),%eax
08271459 +0x0c3:  jl     08271462 <+0xcc>
0827145b +0x0c5:  mov    $0x0,%eax
08271460 +0x0ca:  jmp    082714c3 <+0x12d>
08271462 +0x0cc:  movsbl -0x2c(%ebp),%eax
08271466 +0x0d0:  mov    %eax,0x4(%esp)
0827146a +0x0d4:  mov    -0x18(%ebp),%eax
0827146d +0x0d7:  mov    %eax,(%esp)
08271470 +0x0da:  call   0826fe7a <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x47c>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x47c
08271475 +0x0df:  mov    %eax,-0x10(%ebp)
08271478 +0x0e2:  mov    -0x10(%ebp),%eax
0827147b +0x0e5:  mov    %eax,(%esp)
0827147e +0x0e8:  call   08237656 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcd00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcd00
08271483 +0x0ed:  mov    %eax,-0xc(%ebp)
08271486 +0x0f0:  cmpb   $0x0,-0x30(%ebp)
0827148a +0x0f4:  js     08271495 <+0xff>
0827148c +0x0f6:  movsbl -0x30(%ebp),%eax
08271490 +0x0fa:  cmp    -0xc(%ebp),%eax
08271493 +0x0fd:  jl     0827149c <+0x106>
08271495 +0x0ff:  mov    $0x0,%eax
0827149a +0x104:  jmp    082714c3 <+0x12d>
0827149c +0x106:  movsbl -0x30(%ebp),%eax
082714a0 +0x10a:  mov    %eax,0x4(%esp)
082714a4 +0x10e:  mov    -0x10(%ebp),%eax
082714a7 +0x111:  mov    %eax,(%esp)
082714aa +0x114:  call   0826fea6 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x4a8>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x4a8
082714af +0x119:  mov    %eax,0x4(%esp)
082714b3 +0x11d:  mov    0x14(%ebp),%eax
082714b6 +0x120:  mov    %eax,(%esp)
082714b9 +0x123:  call   0826fab6 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0xb8>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0xb8
082714be +0x128:  mov    $0x1,%eax
082714c3 +0x12d:  leave
082714c4 +0x12e:  ret
```

## 反编译 C

```c
// pc_room::GetRentItemInfo @ 0x8271396

/* pc_room::GetRentItemInfo(CUser&, char, char, EventRewardItemInfo&, int) */

undefined4
pc_room::GetRentItemInfo
          (CUser *param_1,char param_2,char param_3,EventRewardItemInfo *param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  EventRewardItemInfo *pEVar3;
  char local_25;
  int local_24;
  int local_20;
  vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
  *local_1c;
  int local_18;
  vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>> *local_14;
  int local_10;
  
  local_24 = 0;
  cVar1 = GetSelectionIndex(param_1,&local_24,param_5);
  if (cVar1 == '\x01') {
    local_25 = '\0';
    cVar1 = GetCharacterJob(param_1,&local_25);
    if (cVar1 == '\x01') {
      local_20 = makeFairPVPEquipmentPackageKey((int)local_25,local_24);
      local_1c = (vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
                  *)GetRewardItemSelectionList(local_20,param_5);
      if (local_1c ==
          (vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
           *)0x0) {
        uVar2 = 0;
      }
      else {
        local_18 = std::
                   vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
                   ::size(local_1c);
        if ((param_2 < '\0') || (local_18 <= param_2)) {
          uVar2 = 0;
        }
        else {
          local_14 = (vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>> *)
                     std::
                     vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
                     ::at(local_1c,(int)param_2);
          local_10 = std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>::size
                               (local_14);
          if ((param_3 < '\0') || (local_10 <= param_3)) {
            uVar2 = 0;
          }
          else {
            pEVar3 = (EventRewardItemInfo *)
                     std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>::
                     operator[](local_14,(int)param_3);
            EventRewardItemInfo::operator=(param_4,pEVar3);
            uVar2 = 1;
          }
        }
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
