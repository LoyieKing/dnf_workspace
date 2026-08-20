# InsertDB

`_ZN15CSuccessJobNode8InsertDBERK10DungeonKeybRK6JobKey`

`CSuccessJobNode::InsertDB(DungeonKey const&, bool, JobKey const&)`

| 类 | 地址 |
|---|---|
| `CSuccessJobNode` | `0x08486234` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08486234  _ZN15CSuccessJobNode8InsertDBERK10DungeonKeybRK6JobKey
#           CSuccessJobNode::InsertDB(DungeonKey const&, bool, JobKey const&)
# range [0x08486234, 0x08486585]
08486234 +0x000:  push   %ebp
08486235 +0x001:  mov    %esp,%ebp
08486237 +0x003:  push   %edi
08486238 +0x004:  push   %esi
08486239 +0x005:  push   %ebx
0848623a +0x006:  sub    $0xec,%esp
08486240 +0x00c:  mov    0x10(%ebp),%eax
08486243 +0x00f:  mov    %al,-0x5c(%ebp)
08486246 +0x012:  mov    0x8(%ebp),%eax
08486249 +0x015:  mov    0x54(%eax),%eax
0848624c +0x018:  test   %eax,%eax
0848624e +0x01a:  je     084863ec <+0x1b8>
08486254 +0x020:  call   08485b79 <_Z16GetMySqLInstancev>  ; GetMySqLInstance()
08486259 +0x025:  mov    %eax,-0x28(%ebp)
0848625c +0x028:  mov    0x8(%ebp),%eax
0848625f +0x02b:  mov    0x40(%eax),%eax
08486262 +0x02e:  mov    %eax,-0x98(%ebp)
08486268 +0x034:  mov    0x14(%ebp),%eax
0848626b +0x037:  movzbl 0x4(%eax),%eax
0848626f +0x03b:  movsbl %al,%eax
08486272 +0x03e:  mov    %eax,-0x94(%ebp)
08486278 +0x044:  mov    0x8(%ebp),%eax
0848627b +0x047:  mov    0x3c(%eax),%eax
0848627e +0x04a:  mov    %eax,-0x90(%ebp)
08486284 +0x050:  mov    0x14(%ebp),%eax
08486287 +0x053:  mov    (%eax),%eax
08486289 +0x055:  mov    %eax,-0x8c(%ebp)
0848628f +0x05b:  movzbl -0x5c(%ebp),%eax
08486293 +0x05f:  mov    %eax,-0x88(%ebp)
08486299 +0x065:  mov    0xc(%ebp),%eax
0848629c +0x068:  mov    0x4(%eax),%eax
0848629f +0x06b:  mov    %eax,-0x84(%ebp)
084862a5 +0x071:  mov    0xc(%ebp),%eax
084862a8 +0x074:  mov    (%eax),%eax
084862aa +0x076:  mov    %eax,-0x80(%ebp)
084862ad +0x079:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084862b2 +0x07e:  mov    %eax,(%esp)
084862b5 +0x081:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
084862ba +0x086:  mov    %eax,-0x7c(%ebp)
084862bd +0x089:  mov    0x8(%ebp),%eax
084862c0 +0x08c:  mov    0x54(%eax),%eax
084862c3 +0x08f:  mov    %eax,-0x78(%ebp)
084862c6 +0x092:  mov    0x8(%ebp),%eax
084862c9 +0x095:  mov    0x34(%eax),%eax
084862cc +0x098:  mov    %eax,-0x74(%ebp)
084862cf +0x09b:  mov    0x8(%ebp),%eax
084862d2 +0x09e:  mov    0x30(%eax),%eax
084862d5 +0x0a1:  mov    %eax,-0x70(%ebp)
084862d8 +0x0a4:  mov    0x8(%ebp),%eax
084862db +0x0a7:  mov    0x2c(%eax),%edi
084862de +0x0aa:  mov    0x8(%ebp),%eax
084862e1 +0x0ad:  mov    0x28(%eax),%esi
084862e4 +0x0b0:  mov    0x8(%ebp),%eax
084862e7 +0x0b3:  mov    0x24(%eax),%ebx
084862ea +0x0b6:  mov    0x8(%ebp),%eax
084862ed +0x0b9:  mov    0x20(%eax),%ecx
084862f0 +0x0bc:  mov    0x8(%ebp),%eax
084862f3 +0x0bf:  mov    0x1c(%eax),%edx
084862f6 +0x0c2:  mov    0x8(%ebp),%eax
084862f9 +0x0c5:  mov    0x18(%eax),%eax
084862fc +0x0c8:  mov    %eax,-0x9c(%ebp)
08486302 +0x0ce:  mov    -0x98(%ebp),%eax
08486308 +0x0d4:  mov    %eax,0x48(%esp)
0848630c +0x0d8:  mov    -0x94(%ebp),%eax
08486312 +0x0de:  mov    %eax,0x44(%esp)
08486316 +0x0e2:  mov    -0x90(%ebp),%eax
0848631c +0x0e8:  mov    %eax,0x40(%esp)
08486320 +0x0ec:  mov    -0x8c(%ebp),%eax
08486326 +0x0f2:  mov    %eax,0x3c(%esp)
0848632a +0x0f6:  mov    -0x88(%ebp),%eax
08486330 +0x0fc:  mov    %eax,0x38(%esp)
08486334 +0x100:  mov    -0x84(%ebp),%eax
0848633a +0x106:  mov    %eax,0x34(%esp)
0848633e +0x10a:  mov    -0x80(%ebp),%eax
08486341 +0x10d:  mov    %eax,0x30(%esp)
08486345 +0x111:  mov    -0x7c(%ebp),%eax
08486348 +0x114:  mov    %eax,0x2c(%esp)
0848634c +0x118:  mov    -0x78(%ebp),%eax
0848634f +0x11b:  mov    %eax,0x28(%esp)
08486353 +0x11f:  mov    -0x74(%ebp),%eax
08486356 +0x122:  mov    %eax,0x24(%esp)
0848635a +0x126:  mov    -0x70(%ebp),%eax
0848635d +0x129:  mov    %eax,0x20(%esp)
08486361 +0x12d:  mov    %edi,0x1c(%esp)
08486365 +0x131:  mov    %esi,0x18(%esp)
08486369 +0x135:  mov    %ebx,0x14(%esp)
0848636d +0x139:  mov    %ecx,0x10(%esp)
08486371 +0x13d:  mov    %edx,0xc(%esp)
08486375 +0x141:  mov    -0x9c(%ebp),%edx
0848637b +0x147:  mov    %edx,0x8(%esp)
0848637f +0x14b:  movl   $"inSert into log_dungeon_charac(clear_time,die_count,hp_consume,mp_consume,hit_count,hit_per_avg_damage,hp_recovery,mp_recovery,update_count,channel_no,dungeon_index,dungeon_diff,success,charac_job,level,charac_grow,last_time,exp_avg) values(%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,NOW(),%d)",0x4(%esp)
08486387 +0x153:  mov    -0x28(%ebp),%eax
0848638a +0x156:  mov    %eax,(%esp)
0848638d +0x159:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08486392 +0x15e:  movl   $0x1,0x4(%esp)
0848639a +0x166:  mov    -0x28(%ebp),%eax
0848639d +0x169:  mov    %eax,(%esp)
084863a0 +0x16c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084863a5 +0x171:  xor    $0x1,%eax
084863a8 +0x174:  test   %al,%al
084863aa +0x176:  je     084863ec <+0x1b8>
084863ac +0x178:  movl   $0x5,0xc(%esp)
084863b4 +0x180:  movl   $0x1f2,0x8(%esp)
084863bc +0x188:  movl   $&_ZZN15CSuccessJobNode8InsertDBERK10DungeonKeybRK6JobKeyE19__PRETTY_FUNCTION__,0x4(%esp)
084863c4 +0x190:  lea    -0x50(%ebp),%eax
084863c7 +0x193:  mov    %eax,(%esp)
084863ca +0x196:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084863cf +0x19b:  movl   $"inSert log_dungeon_charac failed",0x4(%esp)
084863d7 +0x1a3:  lea    -0x50(%ebp),%eax
084863da +0x1a6:  mov    %eax,(%esp)
084863dd +0x1a9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084863e2 +0x1ae:  mov    $0x0,%eax
084863e7 +0x1b3:  jmp    0848657b <+0x347>
084863ec +0x1b8:  mov    0x8(%ebp),%eax
084863ef +0x1bb:  add    $0x18,%eax
084863f2 +0x1be:  mov    %eax,(%esp)
084863f5 +0x1c1:  call   08486818 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x252>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x252
084863fa +0x1c6:  mov    0x8(%ebp),%edx
084863fd +0x1c9:  lea    -0x54(%ebp),%eax
08486400 +0x1cc:  mov    %edx,0x4(%esp)
08486404 +0x1d0:  mov    %eax,(%esp)
08486407 +0x1d3:  call   08487e80 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x18ba>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x18ba
0848640c +0x1d8:  sub    $0x4,%esp
0848640f +0x1db:  jmp    08486547 <+0x313>
08486414 +0x1e0:  lea    -0x54(%ebp),%eax
08486417 +0x1e3:  mov    %eax,(%esp)
0848641a +0x1e6:  call   0848733e <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xd78>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xd78
0848641f +0x1eb:  mov    %eax,-0x24(%ebp)
08486422 +0x1ee:  lea    -0x54(%ebp),%eax
08486425 +0x1f1:  mov    %eax,(%esp)
08486428 +0x1f4:  call   0848733e <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xd78>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xd78
0848642d +0x1f9:  add    $0x4,%eax
08486430 +0x1fc:  mov    %eax,-0x20(%ebp)
08486433 +0x1ff:  mov    -0x20(%ebp),%eax
08486436 +0x202:  mov    (%eax),%eax
08486438 +0x204:  test   %eax,%eax
0848643a +0x206:  je     0848651f <+0x2eb>
08486440 +0x20c:  call   08485b79 <_Z16GetMySqLInstancev>  ; GetMySqLInstance()
08486445 +0x211:  mov    %eax,-0x1c(%ebp)
08486448 +0x214:  mov    -0x20(%ebp),%eax
0848644b +0x217:  mov    (%eax),%esi
0848644d +0x219:  movzbl -0x5c(%ebp),%eax
08486451 +0x21d:  mov    %eax,-0x6c(%ebp)
08486454 +0x220:  mov    -0x24(%ebp),%eax
08486457 +0x223:  mov    (%eax),%eax
08486459 +0x225:  mov    %eax,-0x68(%ebp)
0848645c +0x228:  mov    0x14(%ebp),%eax
0848645f +0x22b:  movzbl 0x4(%eax),%eax
08486463 +0x22f:  movsbl %al,%eax
08486466 +0x232:  mov    %eax,-0x64(%ebp)
08486469 +0x235:  mov    0x14(%ebp),%eax
0848646c +0x238:  mov    (%eax),%eax
0848646e +0x23a:  mov    %eax,-0x60(%ebp)
08486471 +0x23d:  mov    0xc(%ebp),%eax
08486474 +0x240:  mov    0x4(%eax),%edi
08486477 +0x243:  mov    0xc(%ebp),%eax
0848647a +0x246:  mov    (%eax),%ebx
0848647c +0x248:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08486481 +0x24d:  mov    %eax,(%esp)
08486484 +0x250:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
08486489 +0x255:  mov    %esi,0x24(%esp)
0848648d +0x259:  mov    -0x6c(%ebp),%edx
08486490 +0x25c:  mov    %edx,0x20(%esp)
08486494 +0x260:  mov    -0x68(%ebp),%edx
08486497 +0x263:  mov    %edx,0x1c(%esp)
0848649b +0x267:  mov    -0x64(%ebp),%edx
0848649e +0x26a:  mov    %edx,0x18(%esp)
084864a2 +0x26e:  mov    -0x60(%ebp),%edx
084864a5 +0x271:  mov    %edx,0x14(%esp)
084864a9 +0x275:  mov    %edi,0x10(%esp)
084864ad +0x279:  mov    %ebx,0xc(%esp)
084864b1 +0x27d:  mov    %eax,0x8(%esp)
084864b5 +0x281:  movl   $"inSert into log_dungeon_party_job(channel_no,dungeon_index,dungeon_diff,charac_job,charac_grow,party_user_count,success,job_count,last_time) values(%d,%d,%d,%d,%d,%d,%d,%d,NOW())",0x4(%esp)
084864bd +0x289:  mov    -0x1c(%ebp),%eax
084864c0 +0x28c:  mov    %eax,(%esp)
084864c3 +0x28f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084864c8 +0x294:  movl   $0x1,0x4(%esp)
084864d0 +0x29c:  mov    -0x1c(%ebp),%eax
084864d3 +0x29f:  mov    %eax,(%esp)
084864d6 +0x2a2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084864db +0x2a7:  xor    $0x1,%eax
084864de +0x2aa:  test   %al,%al
084864e0 +0x2ac:  je     0848651f <+0x2eb>
084864e2 +0x2ae:  movl   $0x5,0xc(%esp)
084864ea +0x2b6:  movl   $0x215,0x8(%esp)
084864f2 +0x2be:  movl   $&_ZZN15CSuccessJobNode8InsertDBERK10DungeonKeybRK6JobKeyE19__PRETTY_FUNCTION__,0x4(%esp)
084864fa +0x2c6:  lea    -0x3c(%ebp),%eax
084864fd +0x2c9:  mov    %eax,(%esp)
08486500 +0x2cc:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08486505 +0x2d1:  movl   $"inSert log_dungeon_party_job failed",0x4(%esp)
0848650d +0x2d9:  lea    -0x3c(%ebp),%eax
08486510 +0x2dc:  mov    %eax,(%esp)
08486513 +0x2df:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08486518 +0x2e4:  mov    $0x0,%eax
0848651d +0x2e9:  jmp    0848657b <+0x347>
0848651f +0x2eb:  mov    -0x20(%ebp),%eax
08486522 +0x2ee:  mov    %eax,(%esp)
08486525 +0x2f1:  call   08486a24 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x45e>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x45e
0848652a +0x2f6:  lea    -0x2c(%ebp),%eax
0848652d +0x2f9:  movl   $0x0,0x8(%esp)
08486535 +0x301:  lea    -0x54(%ebp),%edx
08486538 +0x304:  mov    %edx,0x4(%esp)
0848653c +0x308:  mov    %eax,(%esp)
0848653f +0x30b:  call   08487ea6 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x18e0>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x18e0
08486544 +0x310:  sub    $0x4,%esp
08486547 +0x313:  mov    0x8(%ebp),%edx
0848654a +0x316:  lea    -0x40(%ebp),%eax
0848654d +0x319:  mov    %edx,0x4(%esp)
08486551 +0x31d:  mov    %eax,(%esp)
08486554 +0x320:  call   0848726a <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xca4>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xca4
08486559 +0x325:  sub    $0x4,%esp
0848655c +0x328:  lea    -0x40(%ebp),%eax
0848655f +0x32b:  mov    %eax,0x4(%esp)
08486563 +0x32f:  lea    -0x54(%ebp),%eax
08486566 +0x332:  mov    %eax,(%esp)
08486569 +0x335:  call   08487290 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xcca>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xcca
0848656e +0x33a:  test   %al,%al
08486570 +0x33c:  jne    08486414 <+0x1e0>
08486576 +0x342:  mov    $0x1,%eax
0848657b +0x347:  lea    -0xc(%ebp),%esp
0848657e +0x34a:  add    $0x0,%esp
08486581 +0x34d:  pop    %ebx
08486582 +0x34e:  pop    %esi
08486583 +0x34f:  pop    %edi
08486584 +0x350:  pop    %ebp
08486585 +0x351:  ret
```

## 反编译 C

```c
// CSuccessJobNode::InsertDB @ 0x8486234

/* CSuccessJobNode::InsertDB(DungeonKey const&, bool, JobKey const&) */

undefined4 __thiscall
CSuccessJobNode::InsertDB(CSuccessJobNode *this,DungeonKey *param_1,bool param_2,JobKey *param_3)

{
  JobKey JVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  CEnvironment *pCVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>> local_58 [4];
  cMyTrace local_54 [16];
  map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>> local_44 [4];
  cMyTrace local_40 [16];
  _Rb_tree_iterator<std::pair<int_const,JobParty>> local_30 [4];
  MySQL *local_2c;
  undefined4 *local_28;
  JobParty *local_24;
  MySQL *local_20;
  
  if (*(int *)(this + 0x54) != 0) {
    local_2c = (MySQL *)GetMySqLInstance();
    uVar2 = *(undefined4 *)(this + 0x40);
    JVar1 = param_3[4];
    uVar3 = *(undefined4 *)(this + 0x3c);
    uVar4 = *(undefined4 *)param_3;
    uVar5 = *(undefined4 *)(param_1 + 4);
    uVar10 = *(undefined4 *)param_1;
    pCVar7 = (CEnvironment *)G_CEnvironment();
    uVar8 = CEnvironment::get_channel_no(pCVar7);
    MySQL::set_query(local_2c,
                     "inSert into log_dungeon_charac(clear_time,die_count,hp_consume,mp_consume,hit_count,hit_per_avg_damage,hp_recovery,mp_recovery,update_count,channel_no,dungeon_index,dungeon_diff,success,charac_job,level,charac_grow,last_time,exp_avg) values(%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,NOW(),%d)"
                     ,*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                     *(undefined4 *)(this + 0x20),*(undefined4 *)(this + 0x24),
                     *(undefined4 *)(this + 0x28),*(undefined4 *)(this + 0x2c),
                     *(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34),
                     *(undefined4 *)(this + 0x54),uVar8,uVar10,uVar5,(uint)param_2,uVar4,uVar3,
                     (int)(char)JVar1,uVar2);
    cVar6 = MySQL::exec(local_2c,true);
    if (cVar6 != '\x01') {
      cMyTrace::cMyTrace(local_54,
                         "bool CSuccessJobNode::InsertDB(const DungeonKey&, bool, const JobKey&)",
                         0x1f2,5);
      cMyTrace::operator()(local_54,"inSert log_dungeon_charac failed");
      return 0;
    }
  }
  Character::Reset((Character *)(this + 0x18));
  std::map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>>::begin
            (local_58);
  do {
    std::map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>>::end
              (local_44);
    cVar6 = std::_Rb_tree_iterator<std::pair<int_const,JobParty>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,JobParty>> *)local_58,
                       (_Rb_tree_iterator *)local_44);
    if (cVar6 == '\0') {
      return 1;
    }
    local_28 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,JobParty>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,JobParty>> *)local_58);
    iVar9 = std::_Rb_tree_iterator<std::pair<int_const,JobParty>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,JobParty>> *)local_58);
    local_24 = (JobParty *)(iVar9 + 4);
    if (*(int *)local_24 != 0) {
      local_20 = (MySQL *)GetMySqLInstance();
      iVar9 = *(int *)local_24;
      uVar2 = *local_28;
      JVar1 = param_3[4];
      uVar3 = *(undefined4 *)param_3;
      uVar4 = *(undefined4 *)(param_1 + 4);
      uVar5 = *(undefined4 *)param_1;
      pCVar7 = (CEnvironment *)G_CEnvironment();
      uVar10 = CEnvironment::get_channel_no(pCVar7);
      MySQL::set_query(local_20,
                       "inSert into log_dungeon_party_job(channel_no,dungeon_index,dungeon_diff,charac_job,charac_grow,party_user_count,success,job_count,last_time) values(%d,%d,%d,%d,%d,%d,%d,%d,NOW())"
                       ,uVar10,uVar5,uVar4,uVar3,(int)(char)JVar1,uVar2,(uint)param_2,iVar9);
      cVar6 = MySQL::exec(local_20,true);
      if (cVar6 != '\x01') {
        cMyTrace::cMyTrace(local_40,
                           "bool CSuccessJobNode::InsertDB(const DungeonKey&, bool, const JobKey&)",
                           0x215,5);
        cMyTrace::operator()(local_40,"inSert log_dungeon_party_job failed");
        return 0;
      }
    }
    JobParty::Reset(local_24);
    std::_Rb_tree_iterator<std::pair<int_const,JobParty>>::operator++(local_30,(int)local_58);
  } while( true );
}
```
