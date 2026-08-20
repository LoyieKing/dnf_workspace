# changeCharacName

`_ZN21GiveGrowCreatureEvent16changeCharacNameEP5CUseriPci`

`GiveGrowCreatureEvent::changeCharacName(CUser*, int, char*, int)`

| 类 | 地址 |
|---|---|
| `GiveGrowCreatureEvent` | `0x081b717a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b717a  _ZN21GiveGrowCreatureEvent16changeCharacNameEP5CUseriPci
#           GiveGrowCreatureEvent::changeCharacName(CUser*, int, char*, int)
# range [0x081b717a, 0x081b7340]
081b717a +0x000:  push   %ebp
081b717b +0x001:  mov    %esp,%ebp
081b717d +0x003:  sub    $0x58,%esp
081b7180 +0x006:  cmpl   $0x0,0xc(%ebp)
081b7184 +0x00a:  je     081b733b <+0x1c1>
081b718a +0x010:  mov    0xc(%ebp),%eax
081b718d +0x013:  mov    %eax,(%esp)
081b7190 +0x016:  call   0864a97c <_ZNK5CUser19GetServerGroupToPvPEv>  ; CUser::GetServerGroupToPvP() const
081b7195 +0x01b:  mov    %eax,-0x1c(%ebp)
081b7198 +0x01e:  mov    0xc(%ebp),%eax
081b719b +0x021:  mov    %eax,(%esp)
081b719e +0x024:  call   08691dbc <_ZN5CUser26getGrowthCreatureEventdataEv>  ; CUser::getGrowthCreatureEventdata()
081b71a3 +0x029:  mov    %eax,-0x18(%ebp)
081b71a6 +0x02c:  mov    -0x18(%ebp),%eax
081b71a9 +0x02f:  mov    %eax,(%esp)
081b71ac +0x032:  call   081b7546 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x1c5>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x1c5
081b71b1 +0x037:  test   %al,%al
081b71b3 +0x039:  jne    081b733e <+0x1c4>
081b71b9 +0x03f:  movl   $0x0,-0x14(%ebp)
081b71c0 +0x046:  movb   $0x0,-0xd(%ebp)
081b71c4 +0x04a:  movl   $0x0,-0xc(%ebp)
081b71cb +0x051:  jmp    081b7279 <+0xff>
081b71d0 +0x056:  mov    -0x18(%ebp),%eax
081b71d3 +0x059:  mov    -0xc(%ebp),%edx
081b71d6 +0x05c:  mov    %edx,0x4(%esp)
081b71da +0x060:  mov    %eax,(%esp)
081b71dd +0x063:  call   081b76f6 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x375>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x375
081b71e2 +0x068:  movzwl (%eax),%eax
081b71e5 +0x06b:  cwtl
081b71e6 +0x06c:  cmp    -0x1c(%ebp),%eax
081b71e9 +0x06f:  jne    081b7234 <+0xba>
081b71eb +0x071:  mov    -0x18(%ebp),%eax
081b71ee +0x074:  mov    -0xc(%ebp),%edx
081b71f1 +0x077:  mov    %edx,0x4(%esp)
081b71f5 +0x07b:  mov    %eax,(%esp)
081b71f8 +0x07e:  call   081b76f6 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x375>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x375
081b71fd +0x083:  mov    0x4(%eax),%eax
081b7200 +0x086:  cmp    0x10(%ebp),%eax
081b7203 +0x089:  jne    081b7234 <+0xba>
081b7205 +0x08b:  mov    -0x18(%ebp),%eax
081b7208 +0x08e:  mov    -0xc(%ebp),%edx
081b720b +0x091:  mov    %edx,0x4(%esp)
081b720f +0x095:  mov    %eax,(%esp)
081b7212 +0x098:  call   081b76f6 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x375>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x375
081b7217 +0x09d:  add    $0xc,%eax
081b721a +0x0a0:  mov    0x14(%ebp),%edx
081b721d +0x0a3:  mov    %edx,0x4(%esp)
081b7221 +0x0a7:  mov    %eax,(%esp)
081b7224 +0x0aa:  call   0807e4e0 <_init+0xdd8>
081b7229 +0x0af:  test   %eax,%eax
081b722b +0x0b1:  je     081b7234 <+0xba>
081b722d +0x0b3:  mov    $0x1,%eax
081b7232 +0x0b8:  jmp    081b7239 <+0xbf>
081b7234 +0x0ba:  mov    $0x0,%eax
081b7239 +0x0bf:  test   %al,%al
081b723b +0x0c1:  je     081b7275 <+0xfb>
081b723d +0x0c3:  mov    -0x18(%ebp),%eax
081b7240 +0x0c6:  mov    -0xc(%ebp),%edx
081b7243 +0x0c9:  mov    %edx,0x4(%esp)
081b7247 +0x0cd:  mov    %eax,(%esp)
081b724a +0x0d0:  call   081b76f6 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x375>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x375
081b724f +0x0d5:  add    $0xc,%eax
081b7252 +0x0d8:  movl   $0x1d,0x8(%esp)
081b725a +0x0e0:  mov    0x14(%ebp),%edx
081b725d +0x0e3:  mov    %edx,0x4(%esp)
081b7261 +0x0e7:  mov    %eax,(%esp)
081b7264 +0x0ea:  call   0807d8d0 <_init+0x1c8>
081b7269 +0x0ef:  movb   $0x1,-0xd(%ebp)
081b726d +0x0f3:  mov    -0xc(%ebp),%eax
081b7270 +0x0f6:  mov    %eax,-0x14(%ebp)
081b7273 +0x0f9:  jmp    081b7292 <+0x118>
081b7275 +0x0fb:  addl   $0x1,-0xc(%ebp)
081b7279 +0x0ff:  mov    -0x18(%ebp),%eax
081b727c +0x102:  mov    %eax,(%esp)
081b727f +0x105:  call   081b76d4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x353>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x353
081b7284 +0x10a:  cmp    -0xc(%ebp),%eax
081b7287 +0x10d:  seta   %al
081b728a +0x110:  test   %al,%al
081b728c +0x112:  jne    081b71d0 <+0x56>
081b7292 +0x118:  cmpb   $0x0,-0xd(%ebp)
081b7296 +0x11c:  je     081b733f <+0x1c5>
081b729c +0x122:  lea    -0x48(%ebp),%eax
081b729f +0x125:  mov    %eax,(%esp)
081b72a2 +0x128:  call   081b7416 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x95>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x95
081b72a7 +0x12d:  mov    -0x14(%ebp),%edx
081b72aa +0x130:  mov    -0x18(%ebp),%eax
081b72ad +0x133:  mov    %edx,0x4(%esp)
081b72b1 +0x137:  mov    %eax,(%esp)
081b72b4 +0x13a:  call   081b76f6 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x375>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x375
081b72b9 +0x13f:  movzwl (%eax),%eax
081b72bc +0x142:  mov    %ax,-0x48(%ebp)
081b72c0 +0x146:  mov    -0x14(%ebp),%edx
081b72c3 +0x149:  mov    -0x18(%ebp),%eax
081b72c6 +0x14c:  mov    %edx,0x4(%esp)
081b72ca +0x150:  mov    %eax,(%esp)
081b72cd +0x153:  call   081b76f6 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x375>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x375
081b72d2 +0x158:  mov    0x4(%eax),%eax
081b72d5 +0x15b:  mov    %eax,-0x44(%ebp)
081b72d8 +0x15e:  mov    -0x14(%ebp),%edx
081b72db +0x161:  mov    -0x18(%ebp),%eax
081b72de +0x164:  mov    %edx,0x4(%esp)
081b72e2 +0x168:  mov    %eax,(%esp)
081b72e5 +0x16b:  call   081b76f6 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x375>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x375
081b72ea +0x170:  mov    0x8(%eax),%eax
081b72ed +0x173:  mov    %eax,-0x40(%ebp)
081b72f0 +0x176:  mov    -0x14(%ebp),%edx
081b72f3 +0x179:  mov    -0x18(%ebp),%eax
081b72f6 +0x17c:  mov    %edx,0x4(%esp)
081b72fa +0x180:  mov    %eax,(%esp)
081b72fd +0x183:  call   081b76f6 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x375>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x375
081b7302 +0x188:  add    $0xc,%eax
081b7305 +0x18b:  movl   $0x1d,0x8(%esp)
081b730d +0x193:  mov    %eax,0x4(%esp)
081b7311 +0x197:  lea    -0x48(%ebp),%eax
081b7314 +0x19a:  add    $0xc,%eax
081b7317 +0x19d:  mov    %eax,(%esp)
081b731a +0x1a0:  call   0807d8d0 <_init+0x1c8>
081b731f +0x1a5:  mov    0xc(%ebp),%eax
081b7322 +0x1a8:  mov    %eax,(%esp)
081b7325 +0x1ab:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081b732a +0x1b0:  lea    -0x48(%ebp),%edx
081b732d +0x1b3:  mov    %edx,0x4(%esp)
081b7331 +0x1b7:  mov    %eax,(%esp)
081b7334 +0x1ba:  call   08449d1c <_ZN30DB_EventUpdateGiveGrowCreature11makeRequestEjRN30SIG_GIVE_GROWTH_CREATURE_EVENT15eventCharacInfoE>  ; DB_EventUpdateGiveGrowCreature::makeRequest(unsigned int, SIG_GIVE_GROWTH_CREATURE_EVENT::eventCharacInfo&)
081b7339 +0x1bf:  jmp    081b733f <+0x1c5>
081b733b +0x1c1:  nop
081b733c +0x1c2:  jmp    081b733f <+0x1c5>
081b733e +0x1c4:  nop
081b733f +0x1c5:  leave
081b7340 +0x1c6:  ret
```

## 反编译 C

```c
// GiveGrowCreatureEvent::changeCharacName @ 0x81b717a

/* GiveGrowCreatureEvent::changeCharacName(CUser*, int, char*, int) */

void GiveGrowCreatureEvent::changeCharacName(CUser *param_1,int param_2,char *param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  short *psVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 local_4c [2];
  undefined4 local_48;
  undefined4 local_44;
  char acStack_40 [32];
  int local_20;
  vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
  *local_1c;
  uint local_18;
  char local_11;
  uint local_10;
  
  if (param_2 != 0) {
    local_20 = CUser::GetServerGroupToPvP((CUser *)param_2);
    local_1c = (vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                *)CUser::getGrowthCreatureEventdata((CUser *)param_2);
    cVar2 = std::
            vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
            ::empty();
    if (cVar2 == '\0') {
      local_18 = 0;
      local_11 = '\0';
      local_10 = 0;
      while (uVar4 = std::
                     vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                     ::size(local_1c), local_10 < uVar4) {
        psVar3 = (short *)std::
                          vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                          ::operator[](local_1c,local_10);
        if ((*psVar3 == local_20) &&
           (iVar6 = std::
                    vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                    ::operator[](local_1c,local_10), *(char **)(iVar6 + 4) == param_3)) {
          iVar6 = std::
                  vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                  ::operator[](local_1c,local_10);
          iVar6 = strcmp((char *)(iVar6 + 0xc),(char *)param_4);
          if (iVar6 == 0) goto LAB_081b7234;
          bVar1 = true;
        }
        else {
LAB_081b7234:
          bVar1 = false;
        }
        if (bVar1) {
          iVar6 = std::
                  vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                  ::operator[](local_1c,local_10);
          strncpy((char *)(iVar6 + 0xc),(char *)param_4,0x1d);
          local_11 = '\x01';
          local_18 = local_10;
          break;
        }
        local_10 = local_10 + 1;
      }
      if (local_11 != '\0') {
        SIG_GIVE_GROWTH_CREATURE_EVENT::eventCharacInfo::eventCharacInfo
                  ((eventCharacInfo *)local_4c);
        puVar5 = (undefined2 *)
                 std::
                 vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                 ::operator[](local_1c,local_18);
        local_4c[0] = *puVar5;
        iVar6 = std::
                vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                ::operator[](local_1c,local_18);
        local_48 = *(undefined4 *)(iVar6 + 4);
        iVar6 = std::
                vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                ::operator[](local_1c,local_18);
        local_44 = *(undefined4 *)(iVar6 + 8);
        iVar6 = std::
                vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                ::operator[](local_1c,local_18);
        strncpy(acStack_40,(char *)(iVar6 + 0xc),0x1d);
        uVar4 = CUser::get_acc_id((CUser *)param_2);
        DB_EventUpdateGiveGrowCreature::makeRequest(uVar4,(eventCharacInfo *)local_4c);
      }
    }
  }
  return;
}
```
