# push_quick_party_in_pool

`_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb`

`QuickParty::CQuickPartySystemManager::push_quick_party_in_pool(QuickParty::STQuickPartyPoolMap_Key const&, QuickParty::STQuickPartyPoolMap_Data&, CParty*, int, QuickParty::CQuickParty*, bool)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartySystemManager` | `0x0826afb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826afb4  _ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb
#           QuickParty::CQuickPartySystemManager::push_quick_party_in_pool(QuickParty::STQuickPartyPoolMap_Key const&, QuickParty::STQuickPartyPoolMap_Data&, CParty*, int, QuickParty::CQuickParty*, bool)
# range [0x0826afb4, 0x0826b221]
0826afb4 +0x000:  push   %ebp
0826afb5 +0x001:  mov    %esp,%ebp
0826afb7 +0x003:  push   %esi
0826afb8 +0x004:  push   %ebx
0826afb9 +0x005:  sub    $0x60,%esp
0826afbc +0x008:  mov    0x20(%ebp),%eax
0826afbf +0x00b:  mov    %al,-0x3c(%ebp)
0826afc2 +0x00e:  cmpl   $0x0,0x1c(%ebp)
0826afc6 +0x012:  je     0826afd8 <+0x24>
0826afc8 +0x014:  cmpl   $0x3,0x18(%ebp)
0826afcc +0x018:  jg     0826afd8 <+0x24>
0826afce +0x01a:  cmpl   $0x0,0x18(%ebp)
0826afd2 +0x01e:  jg     0826b0f4 <+0x140>
0826afd8 +0x024:  cmpl   $0x0,0x1c(%ebp)
0826afdc +0x028:  je     0826b0b7 <+0x103>
0826afe2 +0x02e:  movl   $0x0,-0x10(%ebp)
0826afe9 +0x035:  jmp    0826b09d <+0xe9>
0826afee +0x03a:  mov    -0x10(%ebp),%eax
0826aff1 +0x03d:  mov    %eax,0x4(%esp)
0826aff5 +0x041:  mov    0x1c(%ebp),%eax
0826aff8 +0x044:  mov    %eax,(%esp)
0826affb +0x047:  call   082696d0 <_ZN10QuickParty11CQuickParty16get_party_objectEi>  ; QuickParty::CQuickParty::get_party_object(int)
0826b000 +0x04c:  mov    %eax,-0xc(%ebp)
0826b003 +0x04f:  cmpl   $0x0,-0xc(%ebp)
0826b007 +0x053:  je     0826b098 <+0xe4>
0826b00d +0x059:  mov    -0xc(%ebp),%eax
0826b010 +0x05c:  mov    %eax,(%esp)
0826b013 +0x05f:  call   0859b3e4 <_ZN6CParty21init_quick_party_dataEv>  ; CParty::init_quick_party_data()
0826b018 +0x064:  lea    -0x2c(%ebp),%eax
0826b01b +0x067:  mov    %eax,(%esp)
0826b01e +0x06a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0826b023 +0x06f:  lea    -0x2c(%ebp),%eax
0826b026 +0x072:  mov    %eax,(%esp)
0826b029 +0x075:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0826b02e +0x07a:  movl   $0x17f,0x8(%esp)
0826b036 +0x082:  movl   $0x0,0x4(%esp)
0826b03e +0x08a:  lea    -0x2c(%ebp),%eax
0826b041 +0x08d:  mov    %eax,(%esp)
0826b044 +0x090:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0826b049 +0x095:  movl   $0x1,0x4(%esp)
0826b051 +0x09d:  lea    -0x2c(%ebp),%eax
0826b054 +0x0a0:  mov    %eax,(%esp)
0826b057 +0x0a3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0826b05c +0x0a8:  lea    -0x2c(%ebp),%eax
0826b05f +0x0ab:  mov    %eax,0x4(%esp)
0826b063 +0x0af:  mov    -0xc(%ebp),%eax
0826b066 +0x0b2:  mov    %eax,(%esp)
0826b069 +0x0b5:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0826b06e +0x0ba:  jmp    0826b08b <+0xd7>
0826b070 +0x0bc:  mov    %edx,%ebx
0826b072 +0x0be:  mov    %eax,%esi
0826b074 +0x0c0:  lea    -0x2c(%ebp),%eax
0826b077 +0x0c3:  mov    %eax,(%esp)
0826b07a +0x0c6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0826b07f +0x0cb:  mov    %esi,%eax
0826b081 +0x0cd:  mov    %ebx,%edx
0826b083 +0x0cf:  mov    %eax,(%esp)
0826b086 +0x0d2:  call   08ae3750 <_Unwind_Resume>
0826b08b +0x0d7:  lea    -0x2c(%ebp),%eax
0826b08e +0x0da:  mov    %eax,(%esp)
0826b091 +0x0dd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0826b096 +0x0e2:  jmp    0826b099 <+0xe5>
0826b098 +0x0e4:  nop
0826b099 +0x0e5:  addl   $0x1,-0x10(%ebp)
0826b09d +0x0e9:  cmpl   $0x3,-0x10(%ebp)
0826b0a1 +0x0ed:  setle  %al
0826b0a4 +0x0f0:  test   %al,%al
0826b0a6 +0x0f2:  jne    0826afee <+0x3a>
0826b0ac +0x0f8:  mov    0x1c(%ebp),%eax
0826b0af +0x0fb:  mov    %eax,(%esp)
0826b0b2 +0x0fe:  call   082695ca <_ZN10QuickParty11CQuickParty7destroyEv>  ; QuickParty::CQuickParty::destroy()
0826b0b7 +0x103:  mov    0x18(%ebp),%eax
0826b0ba +0x106:  mov    %eax,0x14(%esp)
0826b0be +0x10a:  movl   $"QUICK_PARTY_LOG : ABNOMAL QUICK PARTY!! REGIST POOL INDEX(%d)",0x10(%esp)
0826b0c6 +0x112:  movl   $0x383,0xc(%esp)
0826b0ce +0x11a:  movl   $&_ZZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEbE19__PRETTY_FUNCTION__,0x8(%esp)
0826b0d6 +0x122:  movl   $"QuickParty.cpp",0x4(%esp)
0826b0de +0x12a:  movl   $0x1,(%esp)
0826b0e5 +0x131:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0826b0ea +0x136:  mov    $0x0,%eax
0826b0ef +0x13b:  jmp    0826b21a <+0x266>
0826b0f4 +0x140:  mov    0xc(%ebp),%eax
0826b0f7 +0x143:  movzwl (%eax),%eax
0826b0fa +0x146:  cwtl
0826b0fb +0x147:  mov    %eax,0x4(%esp)
0826b0ff +0x14b:  mov    0x1c(%ebp),%eax
0826b102 +0x14e:  mov    %eax,(%esp)
0826b105 +0x151:  call   0826b77e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x4c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x4c
0826b10a +0x156:  mov    0xc(%ebp),%eax
0826b10d +0x159:  movzbl 0x2(%eax),%eax
0826b111 +0x15d:  movsbl %al,%eax
0826b114 +0x160:  mov    %eax,0x4(%esp)
0826b118 +0x164:  mov    0x1c(%ebp),%eax
0826b11b +0x167:  mov    %eax,(%esp)
0826b11e +0x16a:  call   0826b7a4 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x72>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x72
0826b123 +0x16f:  mov    0x18(%ebp),%eax
0826b126 +0x172:  mov    %eax,0x4(%esp)
0826b12a +0x176:  mov    0x1c(%ebp),%eax
0826b12d +0x179:  mov    %eax,(%esp)
0826b130 +0x17c:  call   0826b7c4 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x92>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x92
0826b135 +0x181:  cmpl   $0x0,0x14(%ebp)
0826b139 +0x185:  je     0826b155 <+0x1a1>
0826b13b +0x187:  mov    0x1c(%ebp),%eax
0826b13e +0x18a:  mov    %eax,(%esp)
0826b141 +0x18d:  call   0826b74e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1c
0826b146 +0x192:  mov    %eax,0x4(%esp)
0826b14a +0x196:  mov    0x14(%ebp),%eax
0826b14d +0x199:  mov    %eax,(%esp)
0826b150 +0x19c:  call   0826b9ac <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x27a>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x27a
0826b155 +0x1a1:  mov    0x1c(%ebp),%eax
0826b158 +0x1a4:  mov    %eax,(%esp)
0826b15b +0x1a7:  call   0826b74e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1c
0826b160 +0x1ac:  mov    %eax,-0x20(%ebp)
0826b163 +0x1af:  mov    0x18(%ebp),%eax
0826b166 +0x1b2:  shl    $0x3,%eax
0826b169 +0x1b5:  add    0x10(%ebp),%eax
0826b16c +0x1b8:  lea    -0x20(%ebp),%edx
0826b16f +0x1bb:  mov    %edx,0x4(%esp)
0826b173 +0x1bf:  mov    %eax,(%esp)
0826b176 +0x1c2:  call   0826bdd2 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x6a0>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x6a0
0826b17b +0x1c7:  cmpb   $0x0,-0x3c(%ebp)
0826b17f +0x1cb:  je     0826b193 <+0x1df>
0826b181 +0x1cd:  mov    0x1c(%ebp),%eax
0826b184 +0x1d0:  mov    %eax,0x4(%esp)
0826b188 +0x1d4:  mov    0x8(%ebp),%eax
0826b18b +0x1d7:  mov    %eax,(%esp)
0826b18e +0x1da:  call   0826acea <_ZN10QuickParty24CQuickPartySystemManager35insert_timer_waiting_party_matchingEPNS_11CQuickPartyE>  ; QuickParty::CQuickPartySystemManager::insert_timer_waiting_party_matching(QuickParty::CQuickParty*)
0826b193 +0x1df:  mov    0x1c(%ebp),%eax
0826b196 +0x1e2:  mov    %eax,(%esp)
0826b199 +0x1e5:  call   08269936 <_ZN10QuickParty11CQuickParty41get_matching_quick_party_master_unique_idEv>  ; QuickParty::CQuickParty::get_matching_quick_party_master_unique_id()
0826b19e +0x1ea:  mov    %ax,-0x1c(%ebp)
0826b1a2 +0x1ee:  movb   $0x0,-0x19(%ebp)
0826b1a6 +0x1f2:  mov    0x1c(%ebp),%eax
0826b1a9 +0x1f5:  mov    %eax,(%esp)
0826b1ac +0x1f8:  call   082698be <_ZN10QuickParty11CQuickParty21get_quick_party_countEv>  ; QuickParty::CQuickParty::get_quick_party_count()
0826b1b1 +0x1fd:  mov    %eax,-0x18(%ebp)
0826b1b4 +0x200:  mov    0x1c(%ebp),%eax
0826b1b7 +0x203:  mov    %eax,(%esp)
0826b1ba +0x206:  call   0826b75a <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x28>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x28
0826b1bf +0x20b:  movsbl %al,%eax
0826b1c2 +0x20e:  mov    %eax,-0x14(%ebp)
0826b1c5 +0x211:  mov    -0x14(%ebp),%eax
0826b1c8 +0x214:  cmp    -0x18(%ebp),%eax
0826b1cb +0x217:  jl     0826b1dc <+0x228>
0826b1cd +0x219:  mov    0x1c(%ebp),%eax
0826b1d0 +0x21c:  mov    %eax,(%esp)
0826b1d3 +0x21f:  call   0826b7e4 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xb2>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xb2
0826b1d8 +0x224:  test   %al,%al
0826b1da +0x226:  je     0826b1e3 <+0x22f>
0826b1dc +0x228:  mov    $0x1,%eax
0826b1e1 +0x22d:  jmp    0826b1e8 <+0x234>
0826b1e3 +0x22f:  mov    $0x0,%eax
0826b1e8 +0x234:  test   %al,%al
0826b1ea +0x236:  je     0826b1f0 <+0x23c>
0826b1ec +0x238:  movb   $0x1,-0x19(%ebp)
0826b1f0 +0x23c:  movzbl -0x19(%ebp),%ecx
0826b1f4 +0x240:  movzwl -0x1c(%ebp),%edx
0826b1f8 +0x244:  mov    0x18(%ebp),%eax
0826b1fb +0x247:  movsbl %al,%eax
0826b1fe +0x24a:  mov    %ecx,0xc(%esp)
0826b202 +0x24e:  mov    %edx,0x8(%esp)
0826b206 +0x252:  mov    %eax,0x4(%esp)
0826b20a +0x256:  mov    0x1c(%ebp),%eax
0826b20d +0x259:  mov    %eax,(%esp)
0826b210 +0x25c:  call   08269a8e <_ZN10QuickParty11CQuickParty32send_matching_update_quick_partyEctb>  ; QuickParty::CQuickParty::send_matching_update_quick_party(char, unsigned short, bool)
0826b215 +0x261:  mov    $0x1,%eax
0826b21a +0x266:  add    $0x60,%esp
0826b21d +0x269:  pop    %ebx
0826b21e +0x26a:  pop    %esi
0826b21f +0x26b:  pop    %ebp
0826b220 +0x26c:  ret
0826b221 +0x26d:  nop
```

## 反编译 C

```c
// QuickParty::CQuickPartySystemManager::push_quick_party_in_pool @ 0x826afb4

/* QuickParty::CQuickPartySystemManager::push_quick_party_in_pool(QuickParty::STQuickPartyPoolMap_Key
   const&, QuickParty::STQuickPartyPoolMap_Data&, CParty*, int, QuickParty::CQuickParty*, bool) */

undefined4 __thiscall
QuickParty::CQuickPartySystemManager::push_quick_party_in_pool
          (CQuickPartySystemManager *this,STQuickPartyPoolMap_Key *param_1,
          STQuickPartyPoolMap_Data *param_2,CParty *param_3,int param_4,CQuickParty *param_5,
          bool param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  PacketGuard local_30 [12];
  int local_24;
  ushort local_20;
  bool local_1d;
  int local_1c;
  int local_18;
  int local_14;
  CParty *local_10;
  
  if (((param_5 != (CQuickParty *)0x0) && (param_4 < 4)) && (0 < param_4)) {
    CQuickParty::set_dungeon_index(param_5,*(short *)param_1);
    CQuickParty::set_dungeon_diff(param_5,(int)(char)param_1[2]);
    CQuickParty::set_pool_index(param_5,param_4);
    if (param_3 != (CParty *)0x0) {
      iVar3 = CQuickParty::get_quick_party_index(param_5);
      CParty::set_quick_party_index(param_3,iVar3);
    }
    local_24 = CQuickParty::get_quick_party_index(param_5);
    std::list<int,std::allocator<int>>::push_back
              ((list<int,std::allocator<int>> *)(param_2 + param_4 * 8),&local_24);
    if (param_6) {
      insert_timer_waiting_party_matching(this,param_5);
    }
    local_20 = CQuickParty::get_matching_quick_party_master_unique_id(param_5);
    local_1d = false;
    local_1c = CQuickParty::get_quick_party_count(param_5);
    cVar2 = CQuickParty::get_first_matching_cnt(param_5);
    local_18 = (int)cVar2;
    if ((local_18 < local_1c) ||
       (cVar2 = CQuickParty::is_change_quick_party_count(param_5), cVar2 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      local_1d = true;
    }
    CQuickParty::send_matching_update_quick_party(param_5,(char)param_4,local_20,local_1d);
    return 1;
  }
  if (param_5 != (CQuickParty *)0x0) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      local_10 = (CParty *)CQuickParty::get_party_object(param_5,local_14);
      if (local_10 != (CParty *)0x0) {
        CParty::init_quick_party_data(local_10);
        PacketGuard::PacketGuard(local_30);
                    /* try { // try from 0826b029 to 0826b06d has its CatchHandler @ 0826b070 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_30);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x17f);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
        CParty::send_to_party(local_10,local_30);
        PacketGuard::~PacketGuard(local_30);
      }
    }
    CQuickParty::destroy(param_5);
  }
  LogManager::logFormat
            (1,"QuickParty.cpp",
             "bool QuickParty::CQuickPartySystemManager::push_quick_party_in_pool(const QuickParty::STQuickPartyPoolMap_Key&, QuickParty::STQuickPartyPoolMap_Data&, CParty*, int, QuickParty::CQuickParty*, bool)"
             ,899,"QUICK_PARTY_LOG : ABNOMAL QUICK PARTY!! REGIST POOL INDEX(%d)",param_4);
  return 0;
}
```
