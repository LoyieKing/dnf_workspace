# arad_sp_create_character

`_ZN4ARAD8DATABASE12CREATE_QUERY24arad_sp_create_characterEP5MySQLP17SIG_CREATE_CHARAC`

`ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character(MySQL*, SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::CREATE_QUERY` | `0x0818af9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818af9a  _ZN4ARAD8DATABASE12CREATE_QUERY24arad_sp_create_characterEP5MySQLP17SIG_CREATE_CHARAC
#           ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character(MySQL*, SIG_CREATE_CHARAC*)
# range [0x0818af9a, 0x0818b26c]
0818af9a +0x000:  push   %ebp
0818af9b +0x001:  mov    %esp,%ebp
0818af9d +0x003:  push   %edi
0818af9e +0x004:  push   %esi
0818af9f +0x005:  push   %ebx
0818afa0 +0x006:  sub    $0x11c,%esp
0818afa6 +0x00c:  mov    0xc(%ebp),%eax
0818afa9 +0x00f:  mov    %eax,0x4(%esp)
0818afad +0x013:  mov    0x8(%ebp),%eax
0818afb0 +0x016:  mov    %eax,(%esp)
0818afb3 +0x019:  call   0818aea2 <_ZN4ARAD8DATABASE12CREATE_QUERY30arad_sp_create_character_checkEP5MySQLP17SIG_CREATE_CHARAC>  ; ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character_check(MySQL*, SIG_CREATE_CHARAC*)
0818afb8 +0x01e:  test   %eax,%eax
0818afba +0x020:  setne  %al
0818afbd +0x023:  test   %al,%al
0818afbf +0x025:  je     0818afcb <+0x31>
0818afc1 +0x027:  mov    $0xffffffff,%eax
0818afc6 +0x02c:  jmp    0818b262 <+0x2c8>
0818afcb +0x031:  movl   $0x2,-0x20(%ebp)
0818afd2 +0x038:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0818afd7 +0x03d:  lea    0x68(%eax),%edx
0818afda +0x040:  lea    -0x20(%ebp),%eax
0818afdd +0x043:  mov    %eax,0x4(%esp)
0818afe1 +0x047:  mov    %edx,(%esp)
0818afe4 +0x04a:  call   080ecf82 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x267>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x267
0818afe9 +0x04f:  add    $0x42,%eax
0818afec +0x052:  mov    %eax,0x8(%esp)
0818aff0 +0x056:  mov    0xc(%ebp),%eax
0818aff3 +0x059:  mov    %eax,0x4(%esp)
0818aff7 +0x05d:  mov    0x8(%ebp),%eax
0818affa +0x060:  mov    %eax,(%esp)
0818affd +0x063:  call   0818ac54 <_ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc>  ; ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char const*)
0818b002 +0x068:  test   %eax,%eax
0818b004 +0x06a:  setne  %al
0818b007 +0x06d:  test   %al,%al
0818b009 +0x06f:  je     0818b015 <+0x7b>
0818b00b +0x071:  mov    $0xffffffff,%eax
0818b010 +0x076:  jmp    0818b262 <+0x2c8>
0818b015 +0x07b:  lea    -0x5c(%ebp),%ebx
0818b018 +0x07e:  mov    $0x0,%eax
0818b01d +0x083:  mov    $0xf,%edx
0818b022 +0x088:  mov    %ebx,%edi
0818b024 +0x08a:  mov    %edx,%ecx
0818b026 +0x08c:  rep stos %eax,%es:(%edi)
0818b028 +0x08e:  mov    0xc(%ebp),%eax
0818b02b +0x091:  add    $0x4,%eax
0818b02e +0x094:  mov    %eax,0x8(%esp)
0818b032 +0x098:  lea    -0x5c(%ebp),%eax
0818b035 +0x09b:  mov    %eax,0x4(%esp)
0818b039 +0x09f:  mov    0x8(%ebp),%eax
0818b03c +0x0a2:  mov    %eax,(%esp)
0818b03f +0x0a5:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
0818b044 +0x0aa:  mov    0xc(%ebp),%eax
0818b047 +0x0ad:  movzbl 0x25(%eax),%eax
0818b04b +0x0b1:  movsbl %al,%eax
0818b04e +0x0b4:  mov    %eax,-0xac(%ebp)
0818b054 +0x0ba:  mov    &DEFAULT_MAX_FATIGUE,%eax
0818b059 +0x0bf:  mov    %eax,-0xa8(%ebp)
0818b05f +0x0c5:  mov    0xc(%ebp),%eax
0818b062 +0x0c8:  mov    0x74(%eax),%eax
0818b065 +0x0cb:  mov    %eax,-0xa4(%ebp)
0818b06b +0x0d1:  mov    0xc(%ebp),%eax
0818b06e +0x0d4:  movzwl 0x72(%eax),%eax
0818b072 +0x0d8:  cwtl
0818b073 +0x0d9:  mov    %eax,-0xa0(%ebp)
0818b079 +0x0df:  mov    0xc(%ebp),%eax
0818b07c +0x0e2:  movzwl 0x70(%eax),%eax
0818b080 +0x0e6:  cwtl
0818b081 +0x0e7:  mov    %eax,-0x9c(%ebp)
0818b087 +0x0ed:  mov    0xc(%ebp),%eax
0818b08a +0x0f0:  movzwl 0x6e(%eax),%eax
0818b08e +0x0f4:  movzwl %ax,%eax
0818b091 +0x0f7:  mov    %eax,-0x98(%ebp)
0818b097 +0x0fd:  mov    0xc(%ebp),%eax
0818b09a +0x100:  movzwl 0x6c(%eax),%eax
0818b09e +0x104:  movzwl %ax,%eax
0818b0a1 +0x107:  mov    %eax,-0x94(%ebp)
0818b0a7 +0x10d:  mov    0xc(%ebp),%eax
0818b0aa +0x110:  mov    0x68(%eax),%eax
0818b0ad +0x113:  mov    %eax,-0x90(%ebp)
0818b0b3 +0x119:  mov    0xc(%ebp),%eax
0818b0b6 +0x11c:  movzwl 0x66(%eax),%eax
0818b0ba +0x120:  cwtl
0818b0bb +0x121:  mov    %eax,-0x8c(%ebp)
0818b0c1 +0x127:  mov    0xc(%ebp),%eax
0818b0c4 +0x12a:  movzwl 0x64(%eax),%eax
0818b0c8 +0x12e:  cwtl
0818b0c9 +0x12f:  mov    %eax,-0x88(%ebp)
0818b0cf +0x135:  mov    0xc(%ebp),%eax
0818b0d2 +0x138:  mov    0x60(%eax),%eax
0818b0d5 +0x13b:  mov    %eax,-0x84(%ebp)
0818b0db +0x141:  mov    0xc(%ebp),%eax
0818b0de +0x144:  add    $0x3e,%eax
0818b0e1 +0x147:  movl   $0x22,0xc(%esp)
0818b0e9 +0x14f:  mov    %eax,0x8(%esp)
0818b0ed +0x153:  movl   $0x1,0x4(%esp)
0818b0f5 +0x15b:  mov    0x8(%ebp),%eax
0818b0f8 +0x15e:  mov    %eax,(%esp)
0818b0fb +0x161:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0818b100 +0x166:  mov    %eax,-0x80(%ebp)
0818b103 +0x169:  mov    0xc(%ebp),%eax
0818b106 +0x16c:  add    $0x36,%eax
0818b109 +0x16f:  movl   $0x8,0xc(%esp)
0818b111 +0x177:  mov    %eax,0x8(%esp)
0818b115 +0x17b:  movl   $0x0,0x4(%esp)
0818b11d +0x183:  mov    0x8(%ebp),%eax
0818b120 +0x186:  mov    %eax,(%esp)
0818b123 +0x189:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0818b128 +0x18e:  mov    %eax,-0x7c(%ebp)
0818b12b +0x191:  mov    0xc(%ebp),%eax
0818b12e +0x194:  movzwl 0x34(%eax),%eax
0818b132 +0x198:  movzwl %ax,%eax
0818b135 +0x19b:  mov    %eax,-0x78(%ebp)
0818b138 +0x19e:  mov    0xc(%ebp),%eax
0818b13b +0x1a1:  movzwl 0x32(%eax),%eax
0818b13f +0x1a5:  movzwl %ax,%eax
0818b142 +0x1a8:  mov    %eax,-0x74(%ebp)
0818b145 +0x1ab:  mov    0xc(%ebp),%eax
0818b148 +0x1ae:  movzwl 0x30(%eax),%eax
0818b14c +0x1b2:  movzwl %ax,%eax
0818b14f +0x1b5:  mov    %eax,-0x70(%ebp)
0818b152 +0x1b8:  mov    0xc(%ebp),%eax
0818b155 +0x1bb:  movzwl 0x2e(%eax),%eax
0818b159 +0x1bf:  movzwl %ax,%eax
0818b15c +0x1c2:  mov    %eax,-0x6c(%ebp)
0818b15f +0x1c5:  mov    0xc(%ebp),%eax
0818b162 +0x1c8:  mov    0x2a(%eax),%edi
0818b165 +0x1cb:  mov    0xc(%ebp),%eax
0818b168 +0x1ce:  mov    0x26(%eax),%esi
0818b16b +0x1d1:  mov    0xc(%ebp),%eax
0818b16e +0x1d4:  movzbl 0x534c(%eax),%eax
0818b175 +0x1db:  movsbl %al,%ebx
0818b178 +0x1de:  mov    0xc(%ebp),%eax
0818b17b +0x1e1:  movzbl 0x22(%eax),%eax
0818b17f +0x1e5:  movsbl %al,%ecx
0818b182 +0x1e8:  mov    0xc(%ebp),%eax
0818b185 +0x1eb:  mov    (%eax),%edx
0818b187 +0x1ed:  mov    -0xac(%ebp),%eax
0818b18d +0x1f3:  mov    %eax,0x60(%esp)
0818b191 +0x1f7:  mov    -0xa8(%ebp),%eax
0818b197 +0x1fd:  mov    %eax,0x5c(%esp)
0818b19b +0x201:  mov    -0xa4(%ebp),%eax
0818b1a1 +0x207:  mov    %eax,0x58(%esp)
0818b1a5 +0x20b:  mov    -0xa0(%ebp),%eax
0818b1ab +0x211:  mov    %eax,0x54(%esp)
0818b1af +0x215:  mov    -0x9c(%ebp),%eax
0818b1b5 +0x21b:  mov    %eax,0x50(%esp)
0818b1b9 +0x21f:  mov    -0x98(%ebp),%eax
0818b1bf +0x225:  mov    %eax,0x4c(%esp)
0818b1c3 +0x229:  mov    -0x94(%ebp),%eax
0818b1c9 +0x22f:  mov    %eax,0x48(%esp)
0818b1cd +0x233:  mov    -0x90(%ebp),%eax
0818b1d3 +0x239:  mov    %eax,0x44(%esp)
0818b1d7 +0x23d:  mov    -0x8c(%ebp),%eax
0818b1dd +0x243:  mov    %eax,0x40(%esp)
0818b1e1 +0x247:  mov    -0x88(%ebp),%eax
0818b1e7 +0x24d:  mov    %eax,0x3c(%esp)
0818b1eb +0x251:  mov    -0x84(%ebp),%eax
0818b1f1 +0x257:  mov    %eax,0x38(%esp)
0818b1f5 +0x25b:  mov    -0x80(%ebp),%eax
0818b1f8 +0x25e:  mov    %eax,0x34(%esp)
0818b1fc +0x262:  mov    -0x7c(%ebp),%eax
0818b1ff +0x265:  mov    %eax,0x30(%esp)
0818b203 +0x269:  mov    -0x78(%ebp),%eax
0818b206 +0x26c:  mov    %eax,0x2c(%esp)
0818b20a +0x270:  mov    -0x74(%ebp),%eax
0818b20d +0x273:  mov    %eax,0x28(%esp)
0818b211 +0x277:  mov    -0x70(%ebp),%eax
0818b214 +0x27a:  mov    %eax,0x24(%esp)
0818b218 +0x27e:  mov    -0x6c(%ebp),%eax
0818b21b +0x281:  mov    %eax,0x20(%esp)
0818b21f +0x285:  mov    %edi,0x1c(%esp)
0818b223 +0x289:  mov    %esi,0x18(%esp)
0818b227 +0x28d:  mov    %ebx,0x14(%esp)
0818b22b +0x291:  mov    %ecx,0x10(%esp)
0818b22f +0x295:  lea    -0x5c(%ebp),%eax
0818b232 +0x298:  mov    %eax,0xc(%esp)
0818b236 +0x29c:  mov    %edx,0x8(%esp)
0818b23a +0x2a0:  movl   $"inSert into charac_info ( m_id,charac_name,job,sex,maxHP,maxMP,phy_attack,phy_defense,mag_attack,mag_defense,element_resist,spec_property,inven_weight,hp_regen,mp_regen,move_speed,attack_speed,cast_speed,hit_recovery,jump,charac_weight,max_fatigue,create_time,expert_job) values(%u,'%s',%d,%d,%d,%u,%d,%d,%d,%d,'%s','%s',%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,NOW(),%d)",0x4(%esp)
0818b242 +0x2a8:  mov    0x8(%ebp),%eax
0818b245 +0x2ab:  mov    %eax,(%esp)
0818b248 +0x2ae:  call   083f46ae <_ZN5MySQL6insertEPKcz>  ; MySQL::insert(char const*, ...)
0818b24d +0x2b3:  mov    %eax,-0x1c(%ebp)
0818b250 +0x2b6:  cmpl   $0x0,-0x1c(%ebp)
0818b254 +0x2ba:  je     0818b25d <+0x2c3>
0818b256 +0x2bc:  mov    $0xffffffff,%eax
0818b25b +0x2c1:  jmp    0818b262 <+0x2c8>
0818b25d +0x2c3:  mov    $0x0,%eax
0818b262 +0x2c8:  add    $0x11c,%esp
0818b268 +0x2ce:  pop    %ebx
0818b269 +0x2cf:  pop    %esi
0818b26a +0x2d0:  pop    %edi
0818b26b +0x2d1:  pop    %ebp
0818b26c +0x2d2:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character @ 0x818af9a

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character(MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  SIG_CREATE_CHARAC SVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char *pcVar15;
  byte bVar16;
  char local_60 [60];
  undefined4 local_24 [5];
  
  bVar16 = 0;
  iVar11 = arad_sp_create_character_check(param_1,param_2);
  if (iVar11 == 0) {
    local_24[0] = 2;
    iVar11 = G_CEnvironment();
    iVar11 = std::
             map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
             ::operator[]((map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
                           *)(iVar11 + 0x68),(ENUM_DB_HANDLE_IDX *)local_24);
    iVar11 = arad_sp_charater_name_check(param_1,param_2,(char *)(iVar11 + 0x42));
    if (iVar11 == 0) {
      pcVar15 = local_60;
      for (iVar11 = 0xf; iVar11 != 0; iVar11 = iVar11 + -1) {
        pcVar15[0] = '\0';
        pcVar15[1] = '\0';
        pcVar15[2] = '\0';
        pcVar15[3] = '\0';
        pcVar15 = pcVar15 + ((uint)bVar16 * -2 + 1) * 4;
      }
      MySQL::escape_string(param_1,local_60,(char *)(param_2 + 4));
      uVar10 = DEFAULT_MAX_FATIGUE;
      SVar1 = param_2[0x25];
      uVar12 = *(undefined4 *)(param_2 + 0x74);
      sVar2 = *(short *)(param_2 + 0x72);
      sVar3 = *(short *)(param_2 + 0x70);
      uVar4 = *(ushort *)(param_2 + 0x6e);
      uVar5 = *(ushort *)(param_2 + 0x6c);
      uVar8 = *(undefined4 *)(param_2 + 0x68);
      sVar6 = *(short *)(param_2 + 0x66);
      sVar7 = *(short *)(param_2 + 100);
      uVar9 = *(undefined4 *)(param_2 + 0x60);
      uVar13 = MySQL::blob_to_str(param_1,1,param_2 + 0x3e,0x22);
      uVar14 = MySQL::blob_to_str(param_1,0,param_2 + 0x36,8);
      iVar11 = MySQL::insert(param_1,
                             "inSert into charac_info ( m_id,charac_name,job,sex,maxHP,maxMP,phy_attack,phy_defense,mag_attack,mag_defense,element_resist,spec_property,inven_weight,hp_regen,mp_regen,move_speed,attack_speed,cast_speed,hit_recovery,jump,charac_weight,max_fatigue,create_time,expert_job) values(%u,\'%s\',%d,%d,%d,%u,%d,%d,%d,%d,\'%s\',\'%s\',%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,NOW(),%d)"
                             ,*(undefined4 *)param_2,local_60,(int)(char)param_2[0x22],
                             (int)(char)param_2[0x534c],*(undefined4 *)(param_2 + 0x26),
                             *(undefined4 *)(param_2 + 0x2a),(uint)*(ushort *)(param_2 + 0x2e),
                             (uint)*(ushort *)(param_2 + 0x30),(uint)*(ushort *)(param_2 + 0x32),
                             (uint)*(ushort *)(param_2 + 0x34),uVar14,uVar13,uVar9,(int)sVar7,
                             (int)sVar6,uVar8,(uint)uVar5,(uint)uVar4,(int)sVar3,(int)sVar2,uVar12,
                             uVar10,(int)(char)SVar1);
      if (iVar11 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0xffffffff;
      }
    }
    else {
      uVar12 = 0xffffffff;
    }
  }
  else {
    uVar12 = 0xffffffff;
  }
  return uVar12;
}
```
