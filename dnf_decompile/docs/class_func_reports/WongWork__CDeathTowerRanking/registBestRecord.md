# registBestRecord

`_ZN8WongWork18CDeathTowerRanking16registBestRecordEjjPK30stDeathTowerRecordMemberInfo_tjj`

`WongWork::CDeathTowerRanking::registBestRecord(unsigned int, unsigned int, stDeathTowerRecordMemberInfo_t const*, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTowerRanking` | `0x08468914` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08468914  _ZN8WongWork18CDeathTowerRanking16registBestRecordEjjPK30stDeathTowerRecordMemberInfo_tjj
#           WongWork::CDeathTowerRanking::registBestRecord(unsigned int, unsigned int, stDeathTowerRecordMemberInfo_t const*, unsigned int, unsigned int)
# range [0x08468914, 0x08468b4b]
08468914 +0x000:  push   %ebp
08468915 +0x001:  mov    %esp,%ebp
08468917 +0x003:  push   %edi
08468918 +0x004:  push   %esi
08468919 +0x005:  push   %ebx
0846891a +0x006:  sub    $0x22c,%esp
08468920 +0x00c:  lea    -0x220(%ebp),%eax
08468926 +0x012:  mov    %eax,(%esp)
08468929 +0x015:  call   082a76c0 <_GLOBAL__I__ZN4CLog5this_E+0x3ae7>  ; global constructors keyed to CLog::this_+0x3ae7
0846892e +0x01a:  mov    0x10(%ebp),%eax
08468931 +0x01d:  mov    %eax,-0x220(%ebp)
08468937 +0x023:  movl   $0x0,-0x1c(%ebp)
0846893e +0x02a:  jmp    084689c3 <+0xaf>
08468943 +0x02f:  mov    -0x1c(%ebp),%eax
08468946 +0x032:  imul   $0x17,%eax,%eax
08468949 +0x035:  add    0x14(%ebp),%eax
0846894c +0x038:  mov    %eax,%ecx
0846894e +0x03a:  mov    -0x1c(%ebp),%eax
08468951 +0x03d:  lea    -0x220(%ebp),%ebx
08468957 +0x043:  add    %eax,%eax
08468959 +0x045:  mov    %eax,%edx
0846895b +0x047:  shl    $0x4,%edx
0846895e +0x04a:  sub    %eax,%edx
08468960 +0x04c:  lea    (%ebx,%edx,1),%eax
08468963 +0x04f:  add    $0x4,%eax
08468966 +0x052:  movl   $0x1e,0x8(%esp)
0846896e +0x05a:  mov    %ecx,0x4(%esp)
08468972 +0x05e:  mov    %eax,(%esp)
08468975 +0x061:  call   0807d8d0 <_init+0x1c8>
0846897a +0x066:  mov    -0x1c(%ebp),%eax
0846897d +0x069:  mov    -0x1c(%ebp),%edx
08468980 +0x06c:  imul   $0x17,%edx,%edx
08468983 +0x06f:  add    0x14(%ebp),%edx
08468986 +0x072:  movzbl 0x14(%edx),%edx
0846898a +0x076:  mov    %dl,-0x1a4(%ebp,%eax,1)
08468991 +0x07d:  mov    -0x1c(%ebp),%eax
08468994 +0x080:  mov    -0x1c(%ebp),%edx
08468997 +0x083:  imul   $0x17,%edx,%edx
0846899a +0x086:  add    0x14(%ebp),%edx
0846899d +0x089:  movzbl 0x15(%edx),%edx
084689a1 +0x08d:  mov    %dl,-0x1a0(%ebp,%eax,1)
084689a8 +0x094:  mov    -0x1c(%ebp),%eax
084689ab +0x097:  mov    -0x1c(%ebp),%edx
084689ae +0x09a:  imul   $0x17,%edx,%edx
084689b1 +0x09d:  add    0x14(%ebp),%edx
084689b4 +0x0a0:  movzbl 0x16(%edx),%edx
084689b8 +0x0a4:  mov    %dl,-0x19c(%ebp,%eax,1)
084689bf +0x0ab:  addl   $0x1,-0x1c(%ebp)
084689c3 +0x0af:  mov    0x8(%ebp),%eax
084689c6 +0x0b2:  mov    0x70f0(%eax),%eax
084689cc +0x0b8:  cmp    -0x1c(%ebp),%eax
084689cf +0x0bb:  seta   %al
084689d2 +0x0be:  test   %al,%al
084689d4 +0x0c0:  jne    08468943 <+0x2f>
084689da +0x0c6:  mov    0x18(%ebp),%eax
084689dd +0x0c9:  mov    %eax,-0x198(%ebp)
084689e3 +0x0cf:  mov    0x1c(%ebp),%eax
084689e6 +0x0d2:  mov    %eax,-0x194(%ebp)
084689ec +0x0d8:  mov    0xc(%ebp),%eax
084689ef +0x0db:  mov    %eax,0x4(%esp)
084689f3 +0x0df:  mov    0x8(%ebp),%eax
084689f6 +0x0e2:  mov    %eax,(%esp)
084689f9 +0x0e5:  call   08469d90 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x473>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x473
084689fe +0x0ea:  mov    %eax,-0x24(%ebp)
08468a01 +0x0ed:  lea    -0x174(%ebp),%eax
08468a07 +0x0f3:  lea    0x10(%ebp),%edx
08468a0a +0x0f6:  mov    %edx,0x8(%esp)
08468a0e +0x0fa:  mov    -0x24(%ebp),%edx
08468a11 +0x0fd:  mov    %edx,0x4(%esp)
08468a15 +0x101:  mov    %eax,(%esp)
08468a18 +0x104:  call   0846a074 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x757>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x757
08468a1d +0x109:  sub    $0x4,%esp
08468a20 +0x10c:  lea    -0x174(%ebp),%eax
08468a26 +0x112:  mov    %eax,0x4(%esp)
08468a2a +0x116:  lea    -0x17c(%ebp),%eax
08468a30 +0x11c:  mov    %eax,(%esp)
08468a33 +0x11f:  call   0846a0a0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x783>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x783
08468a38 +0x124:  lea    -0x164(%ebp),%eax
08468a3e +0x12a:  mov    -0x24(%ebp),%edx
08468a41 +0x12d:  mov    %edx,0x4(%esp)
08468a45 +0x131:  mov    %eax,(%esp)
08468a48 +0x134:  call   0846a0bc <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x79f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x79f
08468a4d +0x139:  sub    $0x4,%esp
08468a50 +0x13c:  lea    -0x164(%ebp),%eax
08468a56 +0x142:  mov    %eax,0x4(%esp)
08468a5a +0x146:  lea    -0x16c(%ebp),%eax
08468a60 +0x14c:  mov    %eax,(%esp)
08468a63 +0x14f:  call   0846a0a0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x783>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x783
08468a68 +0x154:  lea    -0x16c(%ebp),%eax
08468a6e +0x15a:  mov    %eax,0x4(%esp)
08468a72 +0x15e:  lea    -0x17c(%ebp),%eax
08468a78 +0x164:  mov    %eax,(%esp)
08468a7b +0x167:  call   0846a0e2 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x7c5>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x7c5
08468a80 +0x16c:  test   %al,%al
08468a82 +0x16e:  je     08468a9b <+0x187>
08468a84 +0x170:  lea    -0x17c(%ebp),%eax
08468a8a +0x176:  mov    %eax,(%esp)
08468a8d +0x179:  call   0846a0f6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x7d9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x7d9
08468a92 +0x17e:  mov    0x4(%eax),%eax
08468a95 +0x181:  mov    %eax,-0x18c(%ebp)
08468a9b +0x187:  mov    0xc(%ebp),%eax
08468a9e +0x18a:  mov    %eax,0x4(%esp)
08468aa2 +0x18e:  mov    0x8(%ebp),%eax
08468aa5 +0x191:  mov    %eax,(%esp)
08468aa8 +0x194:  call   08469dae <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x491>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x491
08468aad +0x199:  mov    %eax,-0x20(%ebp)
08468ab0 +0x19c:  lea    -0xc0(%ebp),%eax
08468ab6 +0x1a2:  lea    -0x220(%ebp),%edx
08468abc +0x1a8:  mov    %edx,0x8(%esp)
08468ac0 +0x1ac:  lea    0x10(%ebp),%edx
08468ac3 +0x1af:  mov    %edx,0x4(%esp)
08468ac7 +0x1b3:  mov    %eax,(%esp)
08468aca +0x1b6:  call   0846a109 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x7ec>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x7ec
08468acf +0x1bb:  sub    $0x4,%esp
08468ad2 +0x1be:  lea    -0xc0(%ebp),%eax
08468ad8 +0x1c4:  mov    %eax,0x4(%esp)
08468adc +0x1c8:  lea    -0x15c(%ebp),%eax
08468ae2 +0x1ce:  mov    %eax,(%esp)
08468ae5 +0x1d1:  call   0846a148 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x82b>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x82b
08468aea +0x1d6:  lea    -0x188(%ebp),%eax
08468af0 +0x1dc:  lea    -0x15c(%ebp),%edx
08468af6 +0x1e2:  mov    %edx,0x8(%esp)
08468afa +0x1e6:  mov    -0x20(%ebp),%edx
08468afd +0x1e9:  mov    %edx,0x4(%esp)
08468b01 +0x1ed:  mov    %eax,(%esp)
08468b04 +0x1f0:  call   0846a18e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x871>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x871
08468b09 +0x1f5:  sub    $0x4,%esp
08468b0c +0x1f8:  movzbl -0x180(%ebp),%eax
08468b13 +0x1ff:  xor    $0x1,%eax
08468b16 +0x202:  test   %al,%al
08468b18 +0x204:  je     08468b41 <+0x22d>
08468b1a +0x206:  lea    0x10(%ebp),%eax
08468b1d +0x209:  mov    %eax,0x4(%esp)
08468b21 +0x20d:  mov    -0x20(%ebp),%eax
08468b24 +0x210:  mov    %eax,(%esp)
08468b27 +0x213:  call   0846a1ba <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x89d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x89d
08468b2c +0x218:  mov    %eax,%edx
08468b2e +0x21a:  lea    -0x220(%ebp),%ebx
08468b34 +0x220:  mov    $0x26,%eax
08468b39 +0x225:  mov    %edx,%edi
08468b3b +0x227:  mov    %ebx,%esi
08468b3d +0x229:  mov    %eax,%ecx
08468b3f +0x22b:  rep movsl %ds:(%esi),%es:(%edi)
08468b41 +0x22d:  lea    -0xc(%ebp),%esp
08468b44 +0x230:  add    $0x0,%esp
08468b47 +0x233:  pop    %ebx
08468b48 +0x234:  pop    %esi
08468b49 +0x235:  pop    %edi
08468b4a +0x236:  pop    %ebp
08468b4b +0x237:  ret
```

## 反编译 C

```c
// WongWork::CDeathTowerRanking::registBestRecord @ 0x8468914

/* WongWork::CDeathTowerRanking::registBestRecord(unsigned int, unsigned int,
   stDeathTowerRecordMemberInfo_t const*, unsigned int, unsigned int) */

void __thiscall
WongWork::CDeathTowerRanking::registBestRecord
          (CDeathTowerRanking *this,uint param_1,uint param_2,
          stDeathTowerRecordMemberInfo_t *param_3,uint param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint local_224;
  char acStack_220 [120];
  stDeathTowerRecordMemberInfo_t asStack_1a8 [4];
  stDeathTowerRecordMemberInfo_t asStack_1a4 [4];
  stDeathTowerRecordMemberInfo_t asStack_1a0 [4];
  uint local_19c;
  uint local_198;
  undefined4 local_190;
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  local_18c [8];
  char local_184;
  _Hashtable_const_iterator<std::pair<unsigned_int_const,unsigned_int>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  local_180 [8];
  _Hashtable_iterator local_178 [8];
  _Hashtable_const_iterator<std::pair<unsigned_int_const,unsigned_int>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  local_170 [8];
  hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  local_168 [8];
  pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t> local_160 [156];
  uint local_c4 [39];
  undefined4 local_28;
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  *local_24;
  uint local_20;
  
  bVar5 = 0;
  stBestRecord_t::stBestRecord_t((stBestRecord_t *)&local_224);
  local_224 = param_2;
  for (local_20 = 0; local_20 < *(uint *)(this + 0x70f0); local_20 = local_20 + 1) {
    strncpy(acStack_220 + local_20 * 0x1e,(char *)(param_3 + local_20 * 0x17),0x1e);
    asStack_1a8[local_20] = param_3[local_20 * 0x17 + 0x14];
    asStack_1a4[local_20] = param_3[local_20 * 0x17 + 0x15];
    asStack_1a0[local_20] = param_3[local_20 * 0x17 + 0x16];
  }
  local_19c = param_4;
  local_198 = param_5;
  local_28 = _getRankingTable(this,param_1);
  __gnu_cxx::
  hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  ::find((uint *)local_178);
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<unsigned_int_const,unsigned_int>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  ::_Hashtable_const_iterator(local_180,local_178);
  __gnu_cxx::
  hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  ::end(local_168);
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<unsigned_int_const,unsigned_int>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  ::_Hashtable_const_iterator(local_170,(_Hashtable_iterator *)local_168);
  cVar1 = __gnu_cxx::
          _Hashtable_const_iterator<std::pair<unsigned_int_const,unsigned_int>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
          ::operator!=(local_180,(_Hashtable_const_iterator *)local_170);
  if (cVar1 != '\0') {
    iVar2 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<unsigned_int_const,unsigned_int>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
            ::operator->(local_180);
    local_190 = *(undefined4 *)(iVar2 + 4);
  }
  local_24 = (hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
              *)_getBestRecordTable(this,param_1);
  std::make_pair<unsigned_int&,WongWork::CDeathTowerRanking::stBestRecord_t&>
            (local_c4,(stBestRecord_t *)&param_2);
  std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>::
  pair<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t>(local_160,(pair *)local_c4);
  __gnu_cxx::
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::insert(local_18c,local_24);
  if (local_184 != '\x01') {
    puVar3 = (uint *)__gnu_cxx::
                     hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
                     ::operator[](local_24,&param_2);
    puVar4 = &local_224;
    for (iVar2 = 0x26; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar4;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    }
  }
  return;
}
```
