# parsing

`_ZN28Arad_VillageAttackRewardItem7parsingEPc`

`Arad_VillageAttackRewardItem::parsing(char*)`

| 类 | 地址 |
|---|---|
| `Arad_VillageAttackRewardItem` | `0x081a3b48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a3b48  _ZN28Arad_VillageAttackRewardItem7parsingEPc
#           Arad_VillageAttackRewardItem::parsing(char*)
# range [0x081a3b48, 0x081a3e3b]
081a3b48 +0x000:  push   %ebp
081a3b49 +0x001:  mov    %esp,%ebp
081a3b4b +0x003:  push   %esi
081a3b4c +0x004:  push   %ebx
081a3b4d +0x005:  sub    $0xb0,%esp
081a3b53 +0x00b:  lea    -0x8c(%ebp),%eax
081a3b59 +0x011:  mov    %eax,(%esp)
081a3b5c +0x014:  call   0817b474 <_ZN11Arad_ScriptC1Ev>  ; Arad_Script::Arad_Script()
081a3b61 +0x019:  movl   $"reward_item",0x8(%esp)
081a3b69 +0x021:  mov    0xc(%ebp),%eax
081a3b6c +0x024:  mov    %eax,0x4(%esp)
081a3b70 +0x028:  lea    -0x8c(%ebp),%eax
081a3b76 +0x02e:  mov    %eax,(%esp)
081a3b79 +0x031:  call   0817b950 <_ZN11Arad_Script4LoadEPKcS1_>  ; Arad_Script::Load(char const*, char const*)
081a3b7e +0x036:  xor    $0x1,%eax
081a3b81 +0x039:  test   %al,%al
081a3b83 +0x03b:  je     081a3b8f <+0x47>
081a3b85 +0x03d:  mov    $0x232,%ebx
081a3b8a +0x042:  jmp    081a3e21 <+0x2d9>
081a3b8f +0x047:  lea    -0x8c(%ebp),%eax
081a3b95 +0x04d:  mov    %eax,(%esp)
081a3b98 +0x050:  call   081a427c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2d7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2d7
081a3b9d +0x055:  test   %eax,%eax
081a3b9f +0x057:  sete   %al
081a3ba2 +0x05a:  test   %al,%al
081a3ba4 +0x05c:  je     081a3bb0 <+0x68>
081a3ba6 +0x05e:  mov    $0x0,%ebx
081a3bab +0x063:  jmp    081a3e21 <+0x2d9>
081a3bb0 +0x068:  movl   $0x0,-0x10(%ebp)
081a3bb7 +0x06f:  jmp    081a3cc5 <+0x17d>
081a3bbc +0x074:  lea    -0x1c(%ebp),%eax
081a3bbf +0x077:  mov    %eax,(%esp)
081a3bc2 +0x07a:  call   081a4222 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x27d>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x27d
081a3bc7 +0x07f:  lea    -0x28(%ebp),%eax
081a3bca +0x082:  mov    %eax,(%esp)
081a3bcd +0x085:  call   081a4222 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x27d>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x27d
081a3bd2 +0x08a:  movl   $"win_point",0x8(%esp)
081a3bda +0x092:  mov    -0x10(%ebp),%eax
081a3bdd +0x095:  mov    %eax,0x4(%esp)
081a3be1 +0x099:  lea    -0x8c(%ebp),%eax
081a3be7 +0x09f:  mov    %eax,(%esp)
081a3bea +0x0a2:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a3bef +0x0a7:  mov    %eax,-0x28(%ebp)
081a3bf2 +0x0aa:  movl   $"item_index",0x8(%esp)
081a3bfa +0x0b2:  mov    -0x10(%ebp),%eax
081a3bfd +0x0b5:  mov    %eax,0x4(%esp)
081a3c01 +0x0b9:  lea    -0x8c(%ebp),%eax
081a3c07 +0x0bf:  mov    %eax,(%esp)
081a3c0a +0x0c2:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a3c0f +0x0c7:  mov    %eax,-0x24(%ebp)
081a3c12 +0x0ca:  movl   $"item_count",0x8(%esp)
081a3c1a +0x0d2:  mov    -0x10(%ebp),%eax
081a3c1d +0x0d5:  mov    %eax,0x4(%esp)
081a3c21 +0x0d9:  lea    -0x8c(%ebp),%eax
081a3c27 +0x0df:  mov    %eax,(%esp)
081a3c2a +0x0e2:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a3c2f +0x0e7:  mov    %eax,-0x20(%ebp)
081a3c32 +0x0ea:  mov    -0x28(%ebp),%eax
081a3c35 +0x0ed:  mov    %eax,-0x1c(%ebp)
081a3c38 +0x0f0:  mov    -0x24(%ebp),%eax
081a3c3b +0x0f3:  mov    %eax,-0x18(%ebp)
081a3c3e +0x0f6:  mov    -0x20(%ebp),%eax
081a3c41 +0x0f9:  mov    %eax,-0x14(%ebp)
081a3c44 +0x0fc:  mov    -0x1c(%ebp),%eax
081a3c47 +0x0ff:  lea    -0x1c(%ebp),%edx
081a3c4a +0x102:  mov    %edx,0x8(%esp)
081a3c4e +0x106:  mov    %eax,0x4(%esp)
081a3c52 +0x10a:  mov    0x8(%ebp),%eax
081a3c55 +0x10d:  mov    %eax,(%esp)
081a3c58 +0x110:  call   081a3e3c <_ZN28Arad_VillageAttackRewardItem16find_reward_itemEiRNS_4DataE>  ; Arad_VillageAttackRewardItem::find_reward_item(int, Arad_VillageAttackRewardItem::Data&)
081a3c5d +0x115:  test   %al,%al
081a3c5f +0x117:  je     081a3cac <+0x164>
081a3c61 +0x119:  mov    -0x20(%ebp),%ecx
081a3c64 +0x11c:  mov    -0x24(%ebp),%edx
081a3c67 +0x11f:  mov    -0x28(%ebp),%eax
081a3c6a +0x122:  mov    %ecx,0x1c(%esp)
081a3c6e +0x126:  mov    %edx,0x18(%esp)
081a3c72 +0x12a:  mov    %eax,0x14(%esp)
081a3c76 +0x12e:  movl   $"[ERROR] Already exist data. (point:%d, item:%u, count:%d)",0x10(%esp)
081a3c7e +0x136:  movl   $0x244,0xc(%esp)
081a3c86 +0x13e:  movl   $&_ZZN28Arad_VillageAttackRewardItem7parsingEPcE19__PRETTY_FUNCTION__,0x8(%esp)
081a3c8e +0x146:  movl   $"localjapan/Arad_Script_Loader.cpp",0x4(%esp)
081a3c96 +0x14e:  movl   $0x1,(%esp)
081a3c9d +0x155:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081a3ca2 +0x15a:  mov    $0x245,%ebx
081a3ca7 +0x15f:  jmp    081a3e21 <+0x2d9>
081a3cac +0x164:  mov    0x8(%ebp),%eax
081a3caf +0x167:  lea    0x4(%eax),%edx
081a3cb2 +0x16a:  lea    -0x28(%ebp),%eax
081a3cb5 +0x16d:  mov    %eax,0x4(%esp)
081a3cb9 +0x171:  mov    %edx,(%esp)
081a3cbc +0x174:  call   081a4b08 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xb63>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xb63
081a3cc1 +0x179:  addl   $0x1,-0x10(%ebp)
081a3cc5 +0x17d:  lea    -0x8c(%ebp),%eax
081a3ccb +0x183:  mov    %eax,(%esp)
081a3cce +0x186:  call   081a427c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2d7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2d7
081a3cd3 +0x18b:  cmp    -0x10(%ebp),%eax
081a3cd6 +0x18e:  setg   %al
081a3cd9 +0x191:  test   %al,%al
081a3cdb +0x193:  jne    081a3bbc <+0x74>
081a3ce1 +0x199:  movl   $"reward_ranker",0x8(%esp)
081a3ce9 +0x1a1:  mov    0xc(%ebp),%eax
081a3cec +0x1a4:  mov    %eax,0x4(%esp)
081a3cf0 +0x1a8:  lea    -0x8c(%ebp),%eax
081a3cf6 +0x1ae:  mov    %eax,(%esp)
081a3cf9 +0x1b1:  call   0817b950 <_ZN11Arad_Script4LoadEPKcS1_>  ; Arad_Script::Load(char const*, char const*)
081a3cfe +0x1b6:  xor    $0x1,%eax
081a3d01 +0x1b9:  test   %al,%al
081a3d03 +0x1bb:  je     081a3d0f <+0x1c7>
081a3d05 +0x1bd:  mov    $0x24c,%ebx
081a3d0a +0x1c2:  jmp    081a3e21 <+0x2d9>
081a3d0f +0x1c7:  lea    -0x8c(%ebp),%eax
081a3d15 +0x1cd:  mov    %eax,(%esp)
081a3d18 +0x1d0:  call   081a427c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2d7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2d7
081a3d1d +0x1d5:  test   %eax,%eax
081a3d1f +0x1d7:  sete   %al
081a3d22 +0x1da:  test   %al,%al
081a3d24 +0x1dc:  je     081a3d30 <+0x1e8>
081a3d26 +0x1de:  mov    $0x0,%ebx
081a3d2b +0x1e3:  jmp    081a3e21 <+0x2d9>
081a3d30 +0x1e8:  movl   $0x0,-0xc(%ebp)
081a3d37 +0x1ef:  jmp    081a3de0 <+0x298>
081a3d3c +0x1f4:  lea    -0x38(%ebp),%eax
081a3d3f +0x1f7:  mov    %eax,(%esp)
081a3d42 +0x1fa:  call   081a4258 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2b3>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2b3
081a3d47 +0x1ff:  movl   $"item_index",0x8(%esp)
081a3d4f +0x207:  mov    -0xc(%ebp),%eax
081a3d52 +0x20a:  mov    %eax,0x4(%esp)
081a3d56 +0x20e:  lea    -0x8c(%ebp),%eax
081a3d5c +0x214:  mov    %eax,(%esp)
081a3d5f +0x217:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a3d64 +0x21c:  mov    %eax,-0x38(%ebp)
081a3d67 +0x21f:  movl   $"item_count",0x8(%esp)
081a3d6f +0x227:  mov    -0xc(%ebp),%eax
081a3d72 +0x22a:  mov    %eax,0x4(%esp)
081a3d76 +0x22e:  lea    -0x8c(%ebp),%eax
081a3d7c +0x234:  mov    %eax,(%esp)
081a3d7f +0x237:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a3d84 +0x23c:  mov    %eax,-0x30(%ebp)
081a3d87 +0x23f:  movl   $"item_index2",0x8(%esp)
081a3d8f +0x247:  mov    -0xc(%ebp),%eax
081a3d92 +0x24a:  mov    %eax,0x4(%esp)
081a3d96 +0x24e:  lea    -0x8c(%ebp),%eax
081a3d9c +0x254:  mov    %eax,(%esp)
081a3d9f +0x257:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a3da4 +0x25c:  mov    %eax,-0x34(%ebp)
081a3da7 +0x25f:  movl   $"item_count2",0x8(%esp)
081a3daf +0x267:  mov    -0xc(%ebp),%eax
081a3db2 +0x26a:  mov    %eax,0x4(%esp)
081a3db6 +0x26e:  lea    -0x8c(%ebp),%eax
081a3dbc +0x274:  mov    %eax,(%esp)
081a3dbf +0x277:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a3dc4 +0x27c:  mov    %eax,-0x2c(%ebp)
081a3dc7 +0x27f:  mov    0x8(%ebp),%eax
081a3dca +0x282:  lea    0x10(%eax),%edx
081a3dcd +0x285:  lea    -0x38(%ebp),%eax
081a3dd0 +0x288:  mov    %eax,0x4(%esp)
081a3dd4 +0x28c:  mov    %edx,(%esp)
081a3dd7 +0x28f:  call   081a4b7c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xbd7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xbd7
081a3ddc +0x294:  addl   $0x1,-0xc(%ebp)
081a3de0 +0x298:  lea    -0x8c(%ebp),%eax
081a3de6 +0x29e:  mov    %eax,(%esp)
081a3de9 +0x2a1:  call   081a427c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2d7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2d7
081a3dee +0x2a6:  cmp    -0xc(%ebp),%eax
081a3df1 +0x2a9:  setg   %al
081a3df4 +0x2ac:  test   %al,%al
081a3df6 +0x2ae:  jne    081a3d3c <+0x1f4>
081a3dfc +0x2b4:  mov    $0x0,%ebx
081a3e01 +0x2b9:  jmp    081a3e21 <+0x2d9>
081a3e03 +0x2bb:  mov    %edx,%ebx
081a3e05 +0x2bd:  mov    %eax,%esi
081a3e07 +0x2bf:  lea    -0x8c(%ebp),%eax
081a3e0d +0x2c5:  mov    %eax,(%esp)
081a3e10 +0x2c8:  call   0817b624 <_ZN11Arad_ScriptD1Ev>  ; Arad_Script::~Arad_Script()
081a3e15 +0x2cd:  mov    %esi,%eax
081a3e17 +0x2cf:  mov    %ebx,%edx
081a3e19 +0x2d1:  mov    %eax,(%esp)
081a3e1c +0x2d4:  call   08ae3750 <_Unwind_Resume>
081a3e21 +0x2d9:  lea    -0x8c(%ebp),%eax
081a3e27 +0x2df:  mov    %eax,(%esp)
081a3e2a +0x2e2:  call   0817b624 <_ZN11Arad_ScriptD1Ev>  ; Arad_Script::~Arad_Script()
081a3e2f +0x2e7:  mov    %ebx,%eax
081a3e31 +0x2e9:  add    $0xb0,%esp
081a3e37 +0x2ef:  pop    %ebx
081a3e38 +0x2f0:  pop    %esi
081a3e39 +0x2f1:  pop    %ebp
081a3e3a +0x2f2:  ret
081a3e3b +0x2f3:  nop
```

## 反编译 C

```c
// Arad_VillageAttackRewardItem::parsing @ 0x81a3b48

/* Arad_VillageAttackRewardItem::parsing(char*) */

undefined4 __thiscall
Arad_VillageAttackRewardItem::parsing(Arad_VillageAttackRewardItem *this,char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  Arad_Script local_90 [84];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  Arad_Script::Arad_Script(local_90);
                    /* try { // try from 081a3b79 to 081a3ddb has its CatchHandler @ 081a3e03 */
  cVar1 = Arad_Script::Load(local_90,param_1,"reward_item");
  if (cVar1 == '\x01') {
    iVar2 = Arad_Script::GetRowNum(local_90);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      local_14 = 0;
      while( true ) {
        iVar2 = Arad_Script::GetRowNum(local_90);
        if (iVar2 <= local_14) break;
        Data::Data((Data *)&local_20);
        Data::Data((Data *)&local_2c);
        local_2c = Arad_Script::GetInt(local_90,local_14,"win_point");
        local_28 = Arad_Script::GetInt(local_90,local_14,"item_index");
        local_24 = Arad_Script::GetInt(local_90,local_14,"item_count");
        local_20 = local_2c;
        local_1c = local_28;
        local_18 = local_24;
        cVar1 = find_reward_item(this,local_2c,(Data *)&local_20);
        if (cVar1 != '\0') {
          LogManager::logFormat
                    (1,"localjapan/Arad_Script_Loader.cpp",
                     "virtual int Arad_VillageAttackRewardItem::parsing(char*)",0x244,
                     "[ERROR] Already exist data. (point:%d, item:%u, count:%d)",local_2c,local_28,
                     local_24);
          uVar3 = 0x245;
          goto LAB_081a3e21;
        }
        std::
        vector<Arad_VillageAttackRewardItem::Data,std::allocator<Arad_VillageAttackRewardItem::Data>>
        ::push_back((vector<Arad_VillageAttackRewardItem::Data,std::allocator<Arad_VillageAttackRewardItem::Data>>
                     *)(this + 4),(Data *)&local_2c);
        local_14 = local_14 + 1;
      }
      cVar1 = Arad_Script::Load(local_90,param_1,"reward_ranker");
      if (cVar1 == '\x01') {
        iVar2 = Arad_Script::GetRowNum(local_90);
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          local_10 = 0;
          while( true ) {
            iVar2 = Arad_Script::GetRowNum(local_90);
            if (iVar2 <= local_10) break;
            RankData::RankData((RankData *)&local_3c);
            local_3c = Arad_Script::GetInt(local_90,local_10,"item_index");
            local_34 = Arad_Script::GetInt(local_90,local_10,"item_count");
            local_38 = Arad_Script::GetInt(local_90,local_10,"item_index2");
            local_30 = Arad_Script::GetInt(local_90,local_10,"item_count2");
            std::
            vector<Arad_VillageAttackRewardItem::RankData,std::allocator<Arad_VillageAttackRewardItem::RankData>>
            ::push_back((vector<Arad_VillageAttackRewardItem::RankData,std::allocator<Arad_VillageAttackRewardItem::RankData>>
                         *)(this + 0x10),(RankData *)&local_3c);
            local_10 = local_10 + 1;
          }
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0x24c;
      }
    }
  }
  else {
    uVar3 = 0x232;
  }
LAB_081a3e21:
  Arad_Script::~Arad_Script(local_90);
  return uVar3;
}
```
