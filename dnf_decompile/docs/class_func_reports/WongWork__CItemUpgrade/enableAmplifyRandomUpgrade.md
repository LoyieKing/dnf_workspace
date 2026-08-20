# enableAmplifyRandomUpgrade

`_ZN8WongWork12CItemUpgrade26enableAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_Ri`

`WongWork::CItemUpgrade::enableAmplifyRandomUpgrade(CUser*, Inven_Item&, Inven_Item&, int&)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x0854af38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854af38  _ZN8WongWork12CItemUpgrade26enableAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_Ri
#           WongWork::CItemUpgrade::enableAmplifyRandomUpgrade(CUser*, Inven_Item&, Inven_Item&, int&)
# range [0x0854af38, 0x0854b137]
0854af38 +0x000:  push   %ebp
0854af39 +0x001:  mov    %esp,%ebp
0854af3b +0x003:  push   %ebx
0854af3c +0x004:  sub    $0xb4,%esp
0854af42 +0x00a:  mov    0x10(%ebp),%eax
0854af45 +0x00d:  mov    0x2(%eax),%eax
0854af48 +0x010:  mov    %eax,%ebx
0854af4a +0x012:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0854af4f +0x017:  mov    %ebx,0x4(%esp)
0854af53 +0x01b:  mov    %eax,(%esp)
0854af56 +0x01e:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0854af5b +0x023:  mov    %eax,-0x24(%ebp)
0854af5e +0x026:  cmpl   $0x0,-0x24(%ebp)
0854af62 +0x02a:  jne    0854af6e <+0x36>
0854af64 +0x02c:  mov    $0x4,%eax
0854af69 +0x031:  jmp    0854b12f <+0x1f7>
0854af6e +0x036:  mov    &_ZN10GlobalData16s_itemAmplifier_E,%eax
0854af73 +0x03b:  mov    %eax,(%esp)
0854af76 +0x03e:  call   0854b560 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x3e8>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x3e8
0854af7b +0x043:  mov    %eax,-0x20(%ebp)
0854af7e +0x046:  lea    -0x94(%ebp),%eax
0854af84 +0x04c:  mov    %eax,(%esp)
0854af87 +0x04f:  call   0854b282 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x10a>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x10a
0854af8c +0x054:  mov    0xc(%ebp),%eax
0854af8f +0x057:  mov    %eax,(%esp)
0854af92 +0x05a:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0854af97 +0x05f:  mov    %eax,0x14(%esp)
0854af9b +0x063:  lea    -0x94(%ebp),%eax
0854afa1 +0x069:  mov    %eax,0x10(%esp)
0854afa5 +0x06d:  mov    -0x20(%ebp),%eax
0854afa8 +0x070:  mov    %eax,0xc(%esp)
0854afac +0x074:  mov    -0x24(%ebp),%eax
0854afaf +0x077:  mov    %eax,0x8(%esp)
0854afb3 +0x07b:  mov    0x10(%ebp),%eax
0854afb6 +0x07e:  mov    %eax,0x4(%esp)
0854afba +0x082:  mov    0x8(%ebp),%eax
0854afbd +0x085:  mov    %eax,(%esp)
0854afc0 +0x088:  call   0854678a <_ZN8WongWork12CItemUpgrade15_GetUpgradeInfoEPK10Inven_ItemPK5CItemRK15upgrade_table_tP14upgrade_info_ti>  ; WongWork::CItemUpgrade::_GetUpgradeInfo(Inven_Item const*, CItem const*, upgrade_table_t const&, upgrade_info_t*, int)
0854afc5 +0x08d:  xor    $0x1,%eax
0854afc8 +0x090:  test   %al,%al
0854afca +0x092:  je     0854afd6 <+0x9e>
0854afcc +0x094:  mov    $0xd,%eax
0854afd1 +0x099:  jmp    0854b12f <+0x1f7>
0854afd6 +0x09e:  mov    0x10(%ebp),%eax
0854afd9 +0x0a1:  mov    %eax,(%esp)
0854afdc +0x0a4:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0854afe1 +0x0a9:  movzbl %al,%eax
0854afe4 +0x0ac:  mov    %eax,-0x1c(%ebp)
0854afe7 +0x0af:  movl   $0x0,-0x60(%ebp)
0854afee +0x0b6:  movl   $0x1,-0x64(%ebp)
0854aff5 +0x0bd:  mov    0x14(%ebp),%eax
0854aff8 +0x0c0:  mov    0x2(%eax),%eax
0854affb +0x0c3:  mov    %eax,-0x68(%ebp)
0854affe +0x0c6:  mov    -0x24(%ebp),%eax
0854b001 +0x0c9:  mov    (%eax),%eax
0854b003 +0x0cb:  add    $0x34,%eax
0854b006 +0x0ce:  mov    (%eax),%edx
0854b008 +0x0d0:  mov    -0x24(%ebp),%eax
0854b00b +0x0d3:  mov    %eax,(%esp)
0854b00e +0x0d6:  call   *%edx
0854b010 +0x0d8:  test   %al,%al
0854b012 +0x0da:  je     0854b01e <+0xe6>
0854b014 +0x0dc:  mov    $0x13,%eax
0854b019 +0x0e1:  jmp    0854b12f <+0x1f7>
0854b01e +0x0e6:  movl   $0x0,-0x18(%ebp)
0854b025 +0x0ed:  lea    -0x94(%ebp),%eax
0854b02b +0x0f3:  mov    %eax,0x18(%esp)
0854b02f +0x0f7:  mov    -0x20(%ebp),%eax
0854b032 +0x0fa:  mov    %eax,0x14(%esp)
0854b036 +0x0fe:  mov    0x14(%ebp),%eax
0854b039 +0x101:  mov    %eax,0x10(%esp)
0854b03d +0x105:  mov    -0x24(%ebp),%eax
0854b040 +0x108:  mov    %eax,0xc(%esp)
0854b044 +0x10c:  mov    0x10(%ebp),%eax
0854b047 +0x10f:  mov    %eax,0x8(%esp)
0854b04b +0x113:  mov    0xc(%ebp),%eax
0854b04e +0x116:  mov    %eax,0x4(%esp)
0854b052 +0x11a:  mov    0x8(%ebp),%eax
0854b055 +0x11d:  mov    %eax,(%esp)
0854b058 +0x120:  call   08546342 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t>  ; WongWork::CItemUpgrade::_CheckCondition(CUser const*, Inven_Item const&, CItem const*, Inven_Item const&, upgrade_table_t const&, upgrade_info_t const&)
0854b05d +0x125:  mov    %eax,-0x18(%ebp)
0854b060 +0x128:  cmpl   $0x0,-0x18(%ebp)
0854b064 +0x12c:  setne  %al
0854b067 +0x12f:  test   %al,%al
0854b069 +0x131:  je     0854b073 <+0x13b>
0854b06b +0x133:  mov    -0x18(%ebp),%eax
0854b06e +0x136:  jmp    0854b12f <+0x1f7>
0854b073 +0x13b:  mov    0x14(%ebp),%eax
0854b076 +0x13e:  mov    0x2(%eax),%eax
0854b079 +0x141:  mov    %eax,%ebx
0854b07b +0x143:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0854b080 +0x148:  mov    %ebx,0x4(%esp)
0854b084 +0x14c:  mov    %eax,(%esp)
0854b087 +0x14f:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0854b08c +0x154:  mov    %eax,-0x14(%ebp)
0854b08f +0x157:  cmpl   $0x0,-0x14(%ebp)
0854b093 +0x15b:  jne    0854b09f <+0x167>
0854b095 +0x15d:  mov    $0x4,%eax
0854b09a +0x162:  jmp    0854b12f <+0x1f7>
0854b09f +0x167:  mov    -0x14(%ebp),%eax
0854b0a2 +0x16a:  mov    %eax,(%esp)
0854b0a5 +0x16d:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0854b0aa +0x172:  xor    $0x1,%eax
0854b0ad +0x175:  test   %al,%al
0854b0af +0x177:  je     0854b0b8 <+0x180>
0854b0b1 +0x179:  mov    $0x4,%eax
0854b0b6 +0x17e:  jmp    0854b12f <+0x1f7>
0854b0b8 +0x180:  mov    -0x14(%ebp),%eax
0854b0bb +0x183:  mov    %eax,-0x10(%ebp)
0854b0be +0x186:  mov    -0x10(%ebp),%eax
0854b0c1 +0x189:  mov    %eax,(%esp)
0854b0c4 +0x18c:  call   0854b518 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x3a0>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x3a0
0854b0c9 +0x191:  xor    $0x1,%eax
0854b0cc +0x194:  test   %al,%al
0854b0ce +0x196:  je     0854b0d7 <+0x19f>
0854b0d0 +0x198:  mov    $0x4,%eax
0854b0d5 +0x19d:  jmp    0854b12f <+0x1f7>
0854b0d7 +0x19f:  movl   $0x64,-0x28(%ebp)
0854b0de +0x1a6:  mov    0x8(%ebp),%eax
0854b0e1 +0x1a9:  mov    0x4e8(%eax),%eax
0854b0e7 +0x1af:  lea    -0x28(%ebp),%edx
0854b0ea +0x1b2:  mov    %edx,0x4(%esp)
0854b0ee +0x1b6:  mov    %eax,(%esp)
0854b0f1 +0x1b9:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
0854b0f6 +0x1be:  mov    %eax,-0xc(%ebp)
0854b0f9 +0x1c1:  mov    -0xc(%ebp),%eax
0854b0fc +0x1c4:  mov    %eax,0x4(%esp)
0854b100 +0x1c8:  mov    -0x10(%ebp),%eax
0854b103 +0x1cb:  mov    %eax,(%esp)
0854b106 +0x1ce:  call   08513444 <_ZN14CStackableItem27get_amplify_reinforce_countEi>  ; CStackableItem::get_amplify_reinforce_count(int)
0854b10b +0x1d3:  mov    0x18(%ebp),%edx
0854b10e +0x1d6:  mov    %eax,(%edx)
0854b110 +0x1d8:  mov    0x18(%ebp),%eax
0854b113 +0x1db:  mov    (%eax),%eax
0854b115 +0x1dd:  test   %eax,%eax
0854b117 +0x1df:  js     0854b123 <+0x1eb>
0854b119 +0x1e1:  mov    0x18(%ebp),%eax
0854b11c +0x1e4:  mov    (%eax),%eax
0854b11e +0x1e6:  cmp    $0x1f,%eax
0854b121 +0x1e9:  jle    0854b12a <+0x1f2>
0854b123 +0x1eb:  mov    $0x4,%eax
0854b128 +0x1f0:  jmp    0854b12f <+0x1f7>
0854b12a +0x1f2:  mov    $0x0,%eax
0854b12f +0x1f7:  add    $0xb4,%esp
0854b135 +0x1fd:  pop    %ebx
0854b136 +0x1fe:  pop    %ebp
0854b137 +0x1ff:  ret
```

## 反编译 C

```c
// WongWork::CItemUpgrade::enableAmplifyRandomUpgrade @ 0x854af38

/* WongWork::CItemUpgrade::enableAmplifyRandomUpgrade(CUser*, Inven_Item&, Inven_Item&, int&) */

int __thiscall
WongWork::CItemUpgrade::enableAmplifyRandomUpgrade
          (CItemUpgrade *this,CUser *param_1,Inven_Item *param_2,Inven_Item *param_3,int *param_4)

{
  char cVar1;
  CDataManager *pCVar2;
  int iVar3;
  upgrade_info_t local_98 [44];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulong local_2c;
  CItem *local_28;
  upgrade_table_t *local_24;
  uint local_20;
  int local_1c;
  CStackableItem *local_18;
  CStackableItem *local_14;
  int local_10;
  
  iVar3 = *(int *)(param_2 + 2);
  pCVar2 = (CDataManager *)G_CDataManager();
  local_28 = (CItem *)CDataManager::find_item(pCVar2,iVar3);
  if (local_28 == (CItem *)0x0) {
    local_1c = 4;
  }
  else {
    local_24 = (upgrade_table_t *)CItemAmplifier::getUpgradeInfoTable(GlobalData::s_itemAmplifier_);
    upgrade_info_t::upgrade_info_t(local_98);
    iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    cVar1 = _GetUpgradeInfo(this,param_2,local_28,local_24,local_98,iVar3);
    if (cVar1 == '\x01') {
      local_20 = Inven_Item::GetUpgrade(param_2);
      local_20 = local_20 & 0xff;
      local_64 = 0;
      local_68 = 1;
      local_6c = *(undefined4 *)(param_3 + 2);
      cVar1 = (**(code **)(*(int *)local_28 + 0x34))(local_28);
      if (cVar1 == '\0') {
        local_1c = 0;
        local_1c = _CheckCondition(this,param_1,param_2,local_28,param_3,local_24,local_98);
        if (local_1c == 0) {
          iVar3 = *(int *)(param_3 + 2);
          pCVar2 = (CDataManager *)G_CDataManager();
          local_18 = (CStackableItem *)CDataManager::find_item(pCVar2,iVar3);
          if (local_18 == (CStackableItem *)0x0) {
            local_1c = 4;
          }
          else {
            cVar1 = CItem::is_stackable((CItem *)local_18);
            if (cVar1 == '\x01') {
              local_14 = local_18;
              cVar1 = CStackableItem::is_random_amplify_reinforce_ticket(local_18);
              if (cVar1 == '\x01') {
                local_2c = 100;
                local_10 = CMTRand::randInt(*(CMTRand **)(this + 0x4e8),&local_2c);
                iVar3 = CStackableItem::get_amplify_reinforce_count(local_14,local_10);
                *param_4 = iVar3;
                if ((*param_4 < 0) || (0x1f < *param_4)) {
                  local_1c = 4;
                }
                else {
                  local_1c = 0;
                }
              }
              else {
                local_1c = 4;
              }
            }
            else {
              local_1c = 4;
            }
          }
        }
      }
      else {
        local_1c = 0x13;
      }
    }
    else {
      local_1c = 0xd;
    }
  }
  return local_1c;
}
```
