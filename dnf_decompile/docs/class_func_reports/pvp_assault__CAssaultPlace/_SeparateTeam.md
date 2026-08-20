# _SeparateTeam

`_ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_`

`pvp_assault::CAssaultPlace::_SeparateTeam(CUser*, CUser*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e8098` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e8098  _ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_
#           pvp_assault::CAssaultPlace::_SeparateTeam(CUser*, CUser*)
# range [0x082e8098, 0x082e82a1]
082e8098 +0x000:  push   %ebp
082e8099 +0x001:  mov    %esp,%ebp
082e809b +0x003:  push   %edi
082e809c +0x004:  push   %esi
082e809d +0x005:  push   %ebx
082e809e +0x006:  sub    $0x5c,%esp
082e80a1 +0x009:  movl   $0x0,-0x2c(%ebp)
082e80a8 +0x010:  movl   $0x0,-0x28(%ebp)
082e80af +0x017:  lea    -0x44(%ebp),%ebx
082e80b2 +0x01a:  mov    %ebx,%edi
082e80b4 +0x01c:  mov    $0x1,%esi
082e80b9 +0x021:  jmp    082e80c9 <+0x31>
082e80bb +0x023:  mov    %edi,(%esp)
082e80be +0x026:  call   082f1b1e <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18a2>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18a2
082e80c3 +0x02b:  add    $0xc,%edi
082e80c6 +0x02e:  sub    $0x1,%esi
082e80c9 +0x031:  cmp    $0xffffffff,%esi
082e80cc +0x034:  setne  %al
082e80cf +0x037:  test   %al,%al
082e80d1 +0x039:  jne    082e80bb <+0x23>
082e80d3 +0x03b:  jmp    082e8111 <+0x79>
082e80d5 +0x03d:  mov    %edx,%edi
082e80d7 +0x03f:  mov    %eax,-0x4c(%ebp)
082e80da +0x042:  test   %ebx,%ebx
082e80dc +0x044:  je     082e8104 <+0x6c>
082e80de +0x046:  mov    $0x1,%eax
082e80e3 +0x04b:  sub    %esi,%eax
082e80e5 +0x04d:  mov    %eax,%edx
082e80e7 +0x04f:  mov    %edx,%eax
082e80e9 +0x051:  add    %eax,%eax
082e80eb +0x053:  add    %edx,%eax
082e80ed +0x055:  shl    $0x2,%eax
082e80f0 +0x058:  lea    (%ebx,%eax,1),%esi
082e80f3 +0x05b:  cmp    %ebx,%esi
082e80f5 +0x05d:  je     082e8104 <+0x6c>
082e80f7 +0x05f:  sub    $0xc,%esi
082e80fa +0x062:  mov    %esi,(%esp)
082e80fd +0x065:  call   082f1b32 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18b6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18b6
082e8102 +0x06a:  jmp    082e80f3 <+0x5b>
082e8104 +0x06c:  mov    -0x4c(%ebp),%eax
082e8107 +0x06f:  mov    %edi,%edx
082e8109 +0x071:  mov    %eax,(%esp)
082e810c +0x074:  call   08ae3750 <_Unwind_Resume>
082e8111 +0x079:  lea    -0x44(%ebp),%eax
082e8114 +0x07c:  mov    %eax,0x4(%esp)
082e8118 +0x080:  mov    0xc(%ebp),%eax
082e811b +0x083:  mov    %eax,(%esp)
082e811e +0x086:  call   0868056a <_ZN5CUser18GetUserListByPartyERSt6vectorIPS_SaIS1_EE>  ; CUser::GetUserListByParty(std::vector<CUser*, std::allocator<CUser*> >&)
082e8123 +0x08b:  mov    %eax,-0x24(%ebp)
082e8126 +0x08e:  movl   $0x0,0x8(%esp)
082e812e +0x096:  mov    -0x24(%ebp),%eax
082e8131 +0x099:  mov    %eax,0x4(%esp)
082e8135 +0x09d:  mov    0x8(%ebp),%eax
082e8138 +0x0a0:  mov    %eax,(%esp)
082e813b +0x0a3:  call   082e804a <_ZN11pvp_assault13CAssaultPlace16_BackupPartyInfoEP6CParty17ENUM_ASSAULT_TEAM>  ; pvp_assault::CAssaultPlace::_BackupPartyInfo(CParty*, ENUM_ASSAULT_TEAM)
082e8140 +0x0a8:  lea    -0x44(%ebp),%eax
082e8143 +0x0ab:  add    $0xc,%eax
082e8146 +0x0ae:  mov    %eax,0x4(%esp)
082e814a +0x0b2:  mov    0x10(%ebp),%eax
082e814d +0x0b5:  mov    %eax,(%esp)
082e8150 +0x0b8:  call   0868056a <_ZN5CUser18GetUserListByPartyERSt6vectorIPS_SaIS1_EE>  ; CUser::GetUserListByParty(std::vector<CUser*, std::allocator<CUser*> >&)
082e8155 +0x0bd:  mov    %eax,-0x24(%ebp)
082e8158 +0x0c0:  movl   $0x1,0x8(%esp)
082e8160 +0x0c8:  mov    -0x24(%ebp),%eax
082e8163 +0x0cb:  mov    %eax,0x4(%esp)
082e8167 +0x0cf:  mov    0x8(%ebp),%eax
082e816a +0x0d2:  mov    %eax,(%esp)
082e816d +0x0d5:  call   082e804a <_ZN11pvp_assault13CAssaultPlace16_BackupPartyInfoEP6CParty17ENUM_ASSAULT_TEAM>  ; pvp_assault::CAssaultPlace::_BackupPartyInfo(CParty*, ENUM_ASSAULT_TEAM)
082e8172 +0x0da:  movl   $0x0,-0x20(%ebp)
082e8179 +0x0e1:  jmp    082e81f4 <+0x15c>
082e817b +0x0e3:  movl   $0x0,-0x1c(%ebp)
082e8182 +0x0ea:  jmp    082e81e5 <+0x14d>
082e8184 +0x0ec:  mov    -0x1c(%ebp),%edx
082e8187 +0x0ef:  lea    -0x44(%ebp),%ecx
082e818a +0x0f2:  mov    %edx,%eax
082e818c +0x0f4:  add    %eax,%eax
082e818e +0x0f6:  add    %edx,%eax
082e8190 +0x0f8:  shl    $0x2,%eax
082e8193 +0x0fb:  lea    (%ecx,%eax,1),%eax
082e8196 +0x0fe:  mov    %eax,(%esp)
082e8199 +0x101:  call   082f1b90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1914>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1914
082e819e +0x106:  cmp    -0x20(%ebp),%eax
082e81a1 +0x109:  seta   %al
082e81a4 +0x10c:  test   %al,%al
082e81a6 +0x10e:  je     082e81e1 <+0x149>
082e81a8 +0x110:  mov    -0x1c(%ebp),%ebx
082e81ab +0x113:  mov    -0x1c(%ebp),%edx
082e81ae +0x116:  lea    -0x44(%ebp),%ecx
082e81b1 +0x119:  mov    %edx,%eax
082e81b3 +0x11b:  add    %eax,%eax
082e81b5 +0x11d:  add    %edx,%eax
082e81b7 +0x11f:  shl    $0x2,%eax
082e81ba +0x122:  lea    (%ecx,%eax,1),%edx
082e81bd +0x125:  mov    -0x20(%ebp),%eax
082e81c0 +0x128:  mov    %eax,0x4(%esp)
082e81c4 +0x12c:  mov    %edx,(%esp)
082e81c7 +0x12f:  call   082f1bac <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1930>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1930
082e81cc +0x134:  mov    (%eax),%eax
082e81ce +0x136:  mov    %ebx,0x8(%esp)
082e81d2 +0x13a:  mov    %eax,0x4(%esp)
082e81d6 +0x13e:  mov    0x8(%ebp),%eax
082e81d9 +0x141:  mov    %eax,(%esp)
082e81dc +0x144:  call   082e7018 <_ZN11pvp_assault13CAssaultPlace8_AddUserEP5CUser17ENUM_ASSAULT_TEAM>  ; pvp_assault::CAssaultPlace::_AddUser(CUser*, ENUM_ASSAULT_TEAM)
082e81e1 +0x149:  addl   $0x1,-0x1c(%ebp)
082e81e5 +0x14d:  cmpl   $0x1,-0x1c(%ebp)
082e81e9 +0x151:  setle  %al
082e81ec +0x154:  test   %al,%al
082e81ee +0x156:  jne    082e8184 <+0xec>
082e81f0 +0x158:  addl   $0x1,-0x20(%ebp)
082e81f4 +0x15c:  cmpl   $0x7,-0x20(%ebp)
082e81f8 +0x160:  setbe  %al
082e81fb +0x163:  test   %al,%al
082e81fd +0x165:  jne    082e817b <+0xe3>
082e8203 +0x16b:  mov    0xc(%ebp),%eax
082e8206 +0x16e:  mov    %eax,-0x2c(%ebp)
082e8209 +0x171:  mov    0x10(%ebp),%eax
082e820c +0x174:  mov    %eax,-0x28(%ebp)
082e820f +0x177:  mov    0xc(%ebp),%eax
082e8212 +0x17a:  mov    %eax,(%esp)
082e8215 +0x17d:  call   082f0ad8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x85c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x85c
082e821a +0x182:  test   %eax,%eax
082e821c +0x184:  setg   %dl
082e821f +0x187:  mov    0x8(%ebp),%eax
082e8222 +0x18a:  mov    %dl,0x128(%eax)
082e8228 +0x190:  mov    0x10(%ebp),%eax
082e822b +0x193:  mov    %eax,(%esp)
082e822e +0x196:  call   082f0ad8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x85c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x85c
082e8233 +0x19b:  test   %eax,%eax
082e8235 +0x19d:  setg   %dl
082e8238 +0x1a0:  mov    0x8(%ebp),%eax
082e823b +0x1a3:  mov    %dl,0x129(%eax)
082e8241 +0x1a9:  lea    -0x2c(%ebp),%eax
082e8244 +0x1ac:  mov    %eax,0x4(%esp)
082e8248 +0x1b0:  mov    0x8(%ebp),%eax
082e824b +0x1b3:  mov    %eax,(%esp)
082e824e +0x1b6:  call   082e7bbc <_ZN11pvp_assault13CAssaultPlace16_DispositionUserEPP5CUser>  ; pvp_assault::CAssaultPlace::_DispositionUser(CUser**)
082e8253 +0x1bb:  jmp    082e827f <+0x1e7>
082e8255 +0x1bd:  mov    %edx,%esi
082e8257 +0x1bf:  mov    %eax,%edi
082e8259 +0x1c1:  lea    -0x44(%ebp),%eax
082e825c +0x1c4:  lea    0x18(%eax),%ebx
082e825f +0x1c7:  lea    -0x44(%ebp),%eax
082e8262 +0x1ca:  cmp    %eax,%ebx
082e8264 +0x1cc:  je     082e8273 <+0x1db>
082e8266 +0x1ce:  sub    $0xc,%ebx
082e8269 +0x1d1:  mov    %ebx,(%esp)
082e826c +0x1d4:  call   082f1b32 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18b6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18b6
082e8271 +0x1d9:  jmp    082e825f <+0x1c7>
082e8273 +0x1db:  mov    %edi,%eax
082e8275 +0x1dd:  mov    %esi,%edx
082e8277 +0x1df:  mov    %eax,(%esp)
082e827a +0x1e2:  call   08ae3750 <_Unwind_Resume>
082e827f +0x1e7:  lea    -0x44(%ebp),%eax
082e8282 +0x1ea:  lea    0x18(%eax),%ebx
082e8285 +0x1ed:  lea    -0x44(%ebp),%eax
082e8288 +0x1f0:  cmp    %eax,%ebx
082e828a +0x1f2:  je     082e8299 <+0x201>
082e828c +0x1f4:  sub    $0xc,%ebx
082e828f +0x1f7:  mov    %ebx,(%esp)
082e8292 +0x1fa:  call   082f1b32 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18b6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18b6
082e8297 +0x1ff:  jmp    082e8285 <+0x1ed>
082e8299 +0x201:  add    $0x5c,%esp
082e829c +0x204:  pop    %ebx
082e829d +0x205:  pop    %esi
082e829e +0x206:  pop    %edi
082e829f +0x207:  pop    %ebp
082e82a0 +0x208:  ret
082e82a1 +0x209:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_SeparateTeam @ 0x82e8098

/* pvp_assault::CAssaultPlace::_SeparateTeam(CUser*, CUser*) */

void __thiscall
pvp_assault::CAssaultPlace::_SeparateTeam(CAssaultPlace *this,CUser *param_1,CUser *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  vector<CUser*,std::allocator<CUser*>> *pvVar3;
  int iVar4;
  vector<CUser*,std::allocator<CUser*>> local_48 [12];
  vector avStack_3c [12];
  CUser *local_30;
  CUser *local_2c;
  undefined4 local_28;
  uint local_24;
  int local_20;
  
  local_30 = (CUser *)0x0;
  local_2c = (CUser *)0x0;
  pvVar3 = local_48;
  for (iVar4 = 1; iVar4 != -1; iVar4 = iVar4 + -1) {
                    /* try { // try from 082e80be to 082e80c2 has its CatchHandler @ 082e80d5 */
    std::vector<CUser*,std::allocator<CUser*>>::vector(pvVar3);
    pvVar3 = pvVar3 + 0xc;
  }
                    /* try { // try from 082e811e to 082e8252 has its CatchHandler @ 082e8255 */
  local_28 = CUser::GetUserListByParty(param_1,(vector *)local_48);
  _BackupPartyInfo(this,local_28,0);
  local_28 = CUser::GetUserListByParty(param_2,avStack_3c);
  _BackupPartyInfo(this,local_28,1);
  for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
    for (local_20 = 0; local_20 < 2; local_20 = local_20 + 1) {
      uVar1 = std::vector<CUser*,std::allocator<CUser*>>::size(local_48 + local_20 * 0xc);
      iVar4 = local_20;
      if (local_24 < uVar1) {
        puVar2 = (undefined4 *)
                 std::vector<CUser*,std::allocator<CUser*>>::at(local_48 + local_20 * 0xc,local_24);
        _AddUser(this,*puVar2,iVar4);
      }
    }
  }
  local_30 = param_1;
  local_2c = param_2;
  iVar4 = CUserCharacInfo::GetCurCharacChaosPoint((CUserCharacInfo *)param_1);
  this[0x128] = (CAssaultPlace)(0 < iVar4);
  iVar4 = CUserCharacInfo::GetCurCharacChaosPoint((CUserCharacInfo *)param_2);
  this[0x129] = (CAssaultPlace)(0 < iVar4);
  _DispositionUser(this,&local_30);
  pvVar3 = (vector<CUser*,std::allocator<CUser*>> *)&local_30;
  while (pvVar3 != local_48) {
    pvVar3 = pvVar3 + -0xc;
    std::vector<CUser*,std::allocator<CUser*>>::~vector(pvVar3);
  }
  return;
}
```
