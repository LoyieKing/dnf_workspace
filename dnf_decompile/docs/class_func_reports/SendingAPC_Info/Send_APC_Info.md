# Send_APC_Info

`_ZN15SendingAPC_Info13Send_APC_InfoERK9TOD_LayerP5CUser`

`SendingAPC_Info::Send_APC_Info(TOD_Layer const&, CUser*)`

| 类 | 地址 |
|---|---|
| `SendingAPC_Info` | `0x085febca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085febca  _ZN15SendingAPC_Info13Send_APC_InfoERK9TOD_LayerP5CUser
#           SendingAPC_Info::Send_APC_Info(TOD_Layer const&, CUser*)
# range [0x085febca, 0x085fed2d]
085febca +0x000:  push   %ebp
085febcb +0x001:  mov    %esp,%ebp
085febcd +0x003:  push   %edi
085febce +0x004:  push   %esi
085febcf +0x005:  push   %ebx
085febd0 +0x006:  sub    $0x16c,%esp
085febd6 +0x00c:  mov    0x8(%ebp),%eax
085febd9 +0x00f:  add    $&_ZL14gUnicodeBuffer+0xce0c,%eax
085febde +0x014:  mov    %eax,0x8(%esp)
085febe2 +0x018:  mov    0xc(%ebp),%eax
085febe5 +0x01b:  mov    %eax,0x4(%esp)
085febe9 +0x01f:  mov    0x8(%ebp),%eax
085febec +0x022:  mov    %eax,(%esp)
085febef +0x025:  call   085fe906 <_ZN15SendingAPC_Info12Set_APC_InfoERK9TOD_LayerRK8_APCInfo>  ; SendingAPC_Info::Set_APC_Info(TOD_Layer const&, _APCInfo const&)
085febf4 +0x02a:  mov    0x8(%ebp),%eax
085febf7 +0x02d:  add    $0x4,%eax
085febfa +0x030:  mov    %eax,0x4(%esp)
085febfe +0x034:  lea    -0x24(%ebp),%eax
085fec01 +0x037:  mov    %eax,(%esp)
085fec04 +0x03a:  call   0858de4a <_ZN11PacketGuardC1EP9PacketBuf>  ; PacketGuard::PacketGuard(PacketBuf*)
085fec09 +0x03f:  lea    -0x24(%ebp),%eax
085fec0c +0x042:  mov    %eax,0x4(%esp)
085fec10 +0x046:  mov    0x10(%ebp),%eax
085fec13 +0x049:  mov    %eax,(%esp)
085fec16 +0x04c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085fec1b +0x051:  mov    0x8(%ebp),%eax
085fec1e +0x054:  mov    &_ZL14gUnicodeBuffer+0xcec0(%eax),%ebx
085fec24 +0x05a:  mov    0x8(%ebp),%eax
085fec27 +0x05d:  add    $&_ZL14gUnicodeBuffer+0xceb0,%eax
085fec2c +0x062:  mov    %eax,-0x13c(%ebp)
085fec32 +0x068:  mov    0x8(%ebp),%eax
085fec35 +0x06b:  mov    &_ZL14gUnicodeBuffer+0xce54(%eax),%eax
085fec3b +0x071:  mov    %eax,-0x138(%ebp)
085fec41 +0x077:  mov    0x8(%ebp),%eax
085fec44 +0x07a:  add    $&_ZL14gUnicodeBuffer+0xce3c,%eax
085fec49 +0x07f:  mov    %eax,-0x134(%ebp)
085fec4f +0x085:  mov    0x8(%ebp),%eax
085fec52 +0x088:  mov    &_ZL14gUnicodeBuffer+0xce38(%eax),%eax
085fec58 +0x08e:  mov    %eax,-0x130(%ebp)
085fec5e +0x094:  mov    0x8(%ebp),%eax
085fec61 +0x097:  mov    &_ZL14gUnicodeBuffer+0xce34(%eax),%eax
085fec67 +0x09d:  mov    %eax,-0x12c(%ebp)
085fec6d +0x0a3:  mov    0x8(%ebp),%eax
085fec70 +0x0a6:  mov    &_ZL14gUnicodeBuffer+0xce30(%eax),%edi
085fec76 +0x0ac:  mov    0x8(%ebp),%eax
085fec79 +0x0af:  lea    &_ZL14gUnicodeBuffer+0xce10(%eax),%esi
085fec7f +0x0b5:  mov    0xc(%ebp),%eax
085fec82 +0x0b8:  mov    %eax,(%esp)
085fec85 +0x0bb:  call   0822ec40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42ea
085fec8a +0x0c0:  movzwl %ax,%eax
085fec8d +0x0c3:  mov    %ebx,0x28(%esp)
085fec91 +0x0c7:  mov    -0x13c(%ebp),%edx
085fec97 +0x0cd:  mov    %edx,0x24(%esp)
085fec9b +0x0d1:  mov    -0x138(%ebp),%edx
085feca1 +0x0d7:  mov    %edx,0x20(%esp)
085feca5 +0x0db:  mov    -0x134(%ebp),%edx
085fecab +0x0e1:  mov    %edx,0x1c(%esp)
085fecaf +0x0e5:  mov    -0x130(%ebp),%edx
085fecb5 +0x0eb:  mov    %edx,0x18(%esp)
085fecb9 +0x0ef:  mov    -0x12c(%ebp),%edx
085fecbf +0x0f5:  mov    %edx,0x14(%esp)
085fecc3 +0x0f9:  mov    %edi,0x10(%esp)
085fecc7 +0x0fd:  mov    %esi,0xc(%esp)
085feccb +0x101:  mov    %eax,0x8(%esp)
085feccf +0x105:  movl   $"TOD : setting layer:%d, name:%s, lv:%d, job:%d, grow_type:%d, guild_name:%s, pvp_grade:%d, creature_name:%s, creature_id:%d",0x4(%esp)
085fecd7 +0x10d:  lea    -0x124(%ebp),%eax
085fecdd +0x113:  mov    %eax,(%esp)
085fece0 +0x116:  call   0807e440 <_init+0xd38>
085fece5 +0x11b:  lea    -0x124(%ebp),%eax
085feceb +0x121:  mov    %eax,0x4(%esp)
085fecef +0x125:  mov    0x10(%ebp),%eax
085fecf2 +0x128:  mov    %eax,(%esp)
085fecf5 +0x12b:  call   08644366 <_ZN17TowerOfDespairMgr18SendMessageToCUserEP5CUserPc>  ; TowerOfDespairMgr::SendMessageToCUser(CUser*, char*)
085fecfa +0x130:  jmp    085fed17 <+0x14d>
085fecfc +0x132:  mov    %edx,%ebx
085fecfe +0x134:  mov    %eax,%esi
085fed00 +0x136:  lea    -0x24(%ebp),%eax
085fed03 +0x139:  mov    %eax,(%esp)
085fed06 +0x13c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085fed0b +0x141:  mov    %esi,%eax
085fed0d +0x143:  mov    %ebx,%edx
085fed0f +0x145:  mov    %eax,(%esp)
085fed12 +0x148:  call   08ae3750 <_Unwind_Resume>
085fed17 +0x14d:  lea    -0x24(%ebp),%eax
085fed1a +0x150:  mov    %eax,(%esp)
085fed1d +0x153:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085fed22 +0x158:  add    $0x16c,%esp
085fed28 +0x15e:  pop    %ebx
085fed29 +0x15f:  pop    %esi
085fed2a +0x160:  pop    %edi
085fed2b +0x161:  pop    %ebp
085fed2c +0x162:  ret
085fed2d +0x163:  nop
```

## 反编译 C

```c
// SendingAPC_Info::Send_APC_Info @ 0x85febca

/* SendingAPC_Info::Send_APC_Info(TOD_Layer const&, CUser*) */

void __thiscall
SendingAPC_Info::Send_APC_Info(SendingAPC_Info *this,TOD_Layer *param_1,CUser *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  char local_128 [256];
  PacketGuard local_28 [24];
  
  Set_APC_Info(this,param_1,(_APCInfo *)(this + 0x17338));
  PacketGuard::PacketGuard(local_28,(PacketBuf *)(this + 4));
                    /* try { // try from 085fec16 to 085fecf9 has its CatchHandler @ 085fecfc */
  CUser::Send(param_2,local_28);
  uVar1 = *(undefined4 *)(this + 0x173ec);
  uVar2 = *(undefined4 *)(this + 0x17380);
  uVar3 = *(undefined4 *)(this + 0x17364);
  uVar4 = *(undefined4 *)(this + 0x17360);
  uVar5 = *(undefined4 *)(this + 0x1735c);
  uVar6 = TOD_Layer::GetLayer(param_1);
  sprintf(local_128,
          "TOD : setting layer:%d, name:%s, lv:%d, job:%d, grow_type:%d, guild_name:%s, pvp_grade:%d, creature_name:%s, creature_id:%d"
          ,uVar6 & 0xffff,this + 0x1733c,uVar5,uVar4,uVar3,this + 0x17368,uVar2,this + 0x173dc,uVar1
         );
  TowerOfDespairMgr::SendMessageToCUser(param_2,local_128);
  PacketGuard::~PacketGuard(local_28);
  return;
}
```
