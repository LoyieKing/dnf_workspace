# save_dnf_party_ping_history

`_ZN22DB_GatheringParyStatus27save_dnf_party_ping_historyEP16SIG_PARTY_STATUS`

`DB_GatheringParyStatus::save_dnf_party_ping_history(SIG_PARTY_STATUS*)`

| 类 | 地址 |
|---|---|
| `DB_GatheringParyStatus` | `0x084217b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084217b6  _ZN22DB_GatheringParyStatus27save_dnf_party_ping_historyEP16SIG_PARTY_STATUS
#           DB_GatheringParyStatus::save_dnf_party_ping_history(SIG_PARTY_STATUS*)
# range [0x084217b6, 0x08421ae9]
084217b6 +0x000:  push   %ebp
084217b7 +0x001:  mov    %esp,%ebp
084217b9 +0x003:  push   %edi
084217ba +0x004:  push   %esi
084217bb +0x005:  push   %ebx
084217bc +0x006:  sub    $0x10c,%esp
084217c2 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084217c7 +0x011:  movl   $0x0,0x8(%esp)
084217cf +0x019:  movl   $0x4,0x4(%esp)
084217d7 +0x021:  mov    %eax,(%esp)
084217da +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084217df +0x029:  mov    %eax,-0x24(%ebp)
084217e2 +0x02c:  movl   $0x0,-0x1c(%ebp)
084217e9 +0x033:  jmp    08421899 <+0xe3>
084217ee +0x038:  mov    -0x1c(%ebp),%edx
084217f1 +0x03b:  mov    0xc(%ebp),%ecx
084217f4 +0x03e:  mov    %edx,%eax
084217f6 +0x040:  add    %eax,%eax
084217f8 +0x042:  add    %edx,%eax
084217fa +0x044:  shl    $0x2,%eax
084217fd +0x047:  add    %edx,%eax
084217ff +0x049:  lea    (%ecx,%eax,1),%eax
08421802 +0x04c:  add    $0x16c,%eax
08421807 +0x051:  movzbl (%eax),%eax
0842180a +0x054:  movzbl %al,%esi
0842180d +0x057:  mov    -0x1c(%ebp),%edx
08421810 +0x05a:  mov    0xc(%ebp),%ecx
08421813 +0x05d:  mov    %edx,%eax
08421815 +0x05f:  add    %eax,%eax
08421817 +0x061:  add    %edx,%eax
08421819 +0x063:  shl    $0x2,%eax
0842181c +0x066:  add    %edx,%eax
0842181e +0x068:  lea    (%ecx,%eax,1),%eax
08421821 +0x06b:  add    $0x16b,%eax
08421826 +0x070:  movzbl (%eax),%eax
08421829 +0x073:  movzbl %al,%ebx
0842182c +0x076:  mov    -0x1c(%ebp),%edx
0842182f +0x079:  mov    0xc(%ebp),%ecx
08421832 +0x07c:  mov    %edx,%eax
08421834 +0x07e:  add    %eax,%eax
08421836 +0x080:  add    %edx,%eax
08421838 +0x082:  shl    $0x2,%eax
0842183b +0x085:  add    %edx,%eax
0842183d +0x087:  lea    (%ecx,%eax,1),%eax
08421840 +0x08a:  add    $0x16a,%eax
08421845 +0x08f:  movzbl (%eax),%eax
08421848 +0x092:  movzbl %al,%ecx
0842184b +0x095:  mov    -0x1c(%ebp),%edx
0842184e +0x098:  mov    0xc(%ebp),%edi
08421851 +0x09b:  mov    %edx,%eax
08421853 +0x09d:  add    %eax,%eax
08421855 +0x09f:  add    %edx,%eax
08421857 +0x0a1:  shl    $0x2,%eax
0842185a +0x0a4:  add    %edx,%eax
0842185c +0x0a6:  lea    (%edi,%eax,1),%eax
0842185f +0x0a9:  add    $0x169,%eax
08421864 +0x0ae:  movzbl (%eax),%eax
08421867 +0x0b1:  movzbl %al,%edx
0842186a +0x0b4:  mov    -0x1c(%ebp),%edi
0842186d +0x0b7:  lea    -0x74(%ebp),%eax
08421870 +0x0ba:  shl    $0x4,%edi
08421873 +0x0bd:  add    %edi,%eax
08421875 +0x0bf:  mov    %esi,0x14(%esp)
08421879 +0x0c3:  mov    %ebx,0x10(%esp)
0842187d +0x0c7:  mov    %ecx,0xc(%esp)
08421881 +0x0cb:  mov    %edx,0x8(%esp)
08421885 +0x0cf:  movl   $"%d.%d.%d.%d",0x4(%esp)
0842188d +0x0d7:  mov    %eax,(%esp)
08421890 +0x0da:  call   0807e440 <_init+0xd38>
08421895 +0x0df:  addl   $0x1,-0x1c(%ebp)
08421899 +0x0e3:  cmpl   $0x3,-0x1c(%ebp)
0842189d +0x0e7:  setle  %al
084218a0 +0x0ea:  test   %al,%al
084218a2 +0x0ec:  jne    084217ee <+0x38>
084218a8 +0x0f2:  mov    0xc(%ebp),%eax
084218ab +0x0f5:  movzbl 0x20(%eax),%eax
084218af +0x0f9:  movzbl %al,%eax
084218b2 +0x0fc:  mov    %eax,-0xb8(%ebp)
084218b8 +0x102:  lea    -0x74(%ebp),%eax
084218bb +0x105:  add    $0x30,%eax
084218be +0x108:  mov    %eax,-0xb4(%ebp)
084218c4 +0x10e:  lea    -0x74(%ebp),%eax
084218c7 +0x111:  add    $0x20,%eax
084218ca +0x114:  mov    %eax,-0xb0(%ebp)
084218d0 +0x11a:  lea    -0x74(%ebp),%eax
084218d3 +0x11d:  add    $0x10,%eax
084218d6 +0x120:  mov    %eax,-0xac(%ebp)
084218dc +0x126:  lea    -0x74(%ebp),%eax
084218df +0x129:  mov    %eax,-0xa8(%ebp)
084218e5 +0x12f:  mov    0xc(%ebp),%eax
084218e8 +0x132:  mov    0x1c(%eax),%eax
084218eb +0x135:  mov    %eax,-0xa4(%ebp)
084218f1 +0x13b:  mov    0xc(%ebp),%eax
084218f4 +0x13e:  mov    0x18(%eax),%eax
084218f7 +0x141:  mov    %eax,-0xa0(%ebp)
084218fd +0x147:  mov    0xc(%ebp),%eax
08421900 +0x14a:  mov    0x18c(%eax),%eax
08421906 +0x150:  mov    %eax,-0x9c(%ebp)
0842190c +0x156:  mov    0xc(%ebp),%eax
0842190f +0x159:  mov    0x188(%eax),%eax
08421915 +0x15f:  mov    %eax,-0x98(%ebp)
0842191b +0x165:  mov    0xc(%ebp),%eax
0842191e +0x168:  movzbl 0x187(%eax),%eax
08421925 +0x16f:  movzbl %al,%eax
08421928 +0x172:  mov    %eax,-0x94(%ebp)
0842192e +0x178:  mov    0xc(%ebp),%eax
08421931 +0x17b:  mov    0x17f(%eax),%eax
08421937 +0x181:  mov    %eax,-0x90(%ebp)
0842193d +0x187:  mov    0xc(%ebp),%eax
08421940 +0x18a:  mov    0x17b(%eax),%eax
08421946 +0x190:  mov    %eax,-0x8c(%ebp)
0842194c +0x196:  mov    0xc(%ebp),%eax
0842194f +0x199:  movzbl 0x17a(%eax),%eax
08421956 +0x1a0:  movzbl %al,%eax
08421959 +0x1a3:  mov    %eax,-0x88(%ebp)
0842195f +0x1a9:  mov    0xc(%ebp),%eax
08421962 +0x1ac:  mov    0x172(%eax),%eax
08421968 +0x1b2:  mov    %eax,-0x84(%ebp)
0842196e +0x1b8:  mov    0xc(%ebp),%eax
08421971 +0x1bb:  mov    0x16e(%eax),%eax
08421977 +0x1c1:  mov    %eax,-0x80(%ebp)
0842197a +0x1c4:  mov    0xc(%ebp),%eax
0842197d +0x1c7:  movzbl 0x16d(%eax),%eax
08421984 +0x1ce:  movzbl %al,%eax
08421987 +0x1d1:  mov    %eax,-0x7c(%ebp)
0842198a +0x1d4:  mov    0xc(%ebp),%eax
0842198d +0x1d7:  mov    0x165(%eax),%edi
08421993 +0x1dd:  mov    0xc(%ebp),%eax
08421996 +0x1e0:  mov    0x161(%eax),%esi
0842199c +0x1e6:  mov    0xc(%ebp),%eax
0842199f +0x1e9:  movzbl 0x160(%eax),%eax
084219a6 +0x1f0:  movzbl %al,%ebx
084219a9 +0x1f3:  mov    0xc(%ebp),%eax
084219ac +0x1f6:  mov    0x10(%eax),%eax
084219af +0x1f9:  movl   $0x0,0x4(%esp)
084219b7 +0x201:  mov    %eax,(%esp)
084219ba +0x204:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084219bf +0x209:  mov    0xc(%ebp),%edx
084219c2 +0x20c:  mov    -0xb8(%ebp),%ecx
084219c8 +0x212:  mov    %ecx,0x58(%esp)
084219cc +0x216:  mov    -0xb4(%ebp),%ecx
084219d2 +0x21c:  mov    %ecx,0x54(%esp)
084219d6 +0x220:  mov    -0xb0(%ebp),%ecx
084219dc +0x226:  mov    %ecx,0x50(%esp)
084219e0 +0x22a:  mov    -0xac(%ebp),%ecx
084219e6 +0x230:  mov    %ecx,0x4c(%esp)
084219ea +0x234:  mov    -0xa8(%ebp),%ecx
084219f0 +0x23a:  mov    %ecx,0x48(%esp)
084219f4 +0x23e:  mov    -0xa4(%ebp),%ecx
084219fa +0x244:  mov    %ecx,0x44(%esp)
084219fe +0x248:  mov    -0xa0(%ebp),%ecx
08421a04 +0x24e:  mov    %ecx,0x40(%esp)
08421a08 +0x252:  mov    -0x9c(%ebp),%ecx
08421a0e +0x258:  mov    %ecx,0x3c(%esp)
08421a12 +0x25c:  mov    -0x98(%ebp),%ecx
08421a18 +0x262:  mov    %ecx,0x38(%esp)
08421a1c +0x266:  mov    -0x94(%ebp),%ecx
08421a22 +0x26c:  mov    %ecx,0x34(%esp)
08421a26 +0x270:  mov    -0x90(%ebp),%ecx
08421a2c +0x276:  mov    %ecx,0x30(%esp)
08421a30 +0x27a:  mov    -0x8c(%ebp),%ecx
08421a36 +0x280:  mov    %ecx,0x2c(%esp)
08421a3a +0x284:  mov    -0x88(%ebp),%ecx
08421a40 +0x28a:  mov    %ecx,0x28(%esp)
08421a44 +0x28e:  mov    -0x84(%ebp),%ecx
08421a4a +0x294:  mov    %ecx,0x24(%esp)
08421a4e +0x298:  mov    -0x80(%ebp),%ecx
08421a51 +0x29b:  mov    %ecx,0x20(%esp)
08421a55 +0x29f:  mov    -0x7c(%ebp),%ecx
08421a58 +0x2a2:  mov    %ecx,0x1c(%esp)
08421a5c +0x2a6:  mov    %edi,0x18(%esp)
08421a60 +0x2aa:  mov    %esi,0x14(%esp)
08421a64 +0x2ae:  mov    %ebx,0x10(%esp)
08421a68 +0x2b2:  mov    %eax,0xc(%esp)
08421a6c +0x2b6:  mov    %edx,0x8(%esp)
08421a70 +0x2ba:  movl   $"inSert into dnf_party_ping_history(str_ip,m_id,nat_type_1,ping1,mtu_1,nat_type_2,ping2,mtu_2,nat_type_3,ping3,mtu_3,nat_type_4,ping4,mtu_4,occ_time,map_id,dungeon_id,ip_1,ip_2,ip_3,ip_4, end_reason) values('%s',%s,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,now(),%d,%d,'%s','%s','%s','%s',%d)",0x4(%esp)
08421a78 +0x2c2:  mov    -0x24(%ebp),%eax
08421a7b +0x2c5:  mov    %eax,(%esp)
08421a7e +0x2c8:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08421a83 +0x2cd:  movl   $0x1,0x4(%esp)
08421a8b +0x2d5:  mov    -0x24(%ebp),%eax
08421a8e +0x2d8:  mov    %eax,(%esp)
08421a91 +0x2db:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08421a96 +0x2e0:  mov    %al,-0x1d(%ebp)
08421a99 +0x2e3:  movzbl -0x1d(%ebp),%eax
08421a9d +0x2e7:  xor    $0x1,%eax
08421aa0 +0x2ea:  test   %al,%al
08421aa2 +0x2ec:  je     08421ada <+0x324>
08421aa4 +0x2ee:  movl   $0x5,0xc(%esp)
08421aac +0x2f6:  movl   $0x5964,0x8(%esp)
08421ab4 +0x2fe:  movl   $&_ZZN22DB_GatheringParyStatus27save_dnf_party_ping_historyEP16SIG_PARTY_STATUSE19__PRETTY_FUNCTION__,0x4(%esp)
08421abc +0x306:  lea    -0x34(%ebp),%eax
08421abf +0x309:  mov    %eax,(%esp)
08421ac2 +0x30c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08421ac7 +0x311:  movl   $"DB_GatheringParyStatus failed",0x4(%esp)
08421acf +0x319:  lea    -0x34(%ebp),%eax
08421ad2 +0x31c:  mov    %eax,(%esp)
08421ad5 +0x31f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08421ada +0x324:  mov    $0x1,%eax
08421adf +0x329:  add    $0x10c,%esp
08421ae5 +0x32f:  pop    %ebx
08421ae6 +0x330:  pop    %esi
08421ae7 +0x331:  pop    %edi
08421ae8 +0x332:  pop    %ebp
08421ae9 +0x333:  ret
```

## 反编译 C

```c
// DB_GatheringParyStatus::save_dnf_party_ping_history @ 0x84217b6

/* DB_GatheringParyStatus::save_dnf_party_ping_history(SIG_PARTY_STATUS*) */

undefined4 __thiscall
DB_GatheringParyStatus::save_dnf_party_ping_history
          (DB_GatheringParyStatus *this,SIG_PARTY_STATUS *param_1)

{
  SIG_PARTY_STATUS SVar1;
  SIG_PARTY_STATUS SVar2;
  SIG_PARTY_STATUS SVar3;
  SIG_PARTY_STATUS SVar4;
  SIG_PARTY_STATUS SVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  char local_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  cMyTrace local_38 [16];
  MySQL *local_28;
  char local_21;
  int local_20;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
    sprintf(local_78 + local_20 * 0x10,"%d.%d.%d.%d",(uint)(byte)param_1[local_20 * 0xd + 0x169],
            (uint)(byte)param_1[local_20 * 0xd + 0x16a],(uint)(byte)param_1[local_20 * 0xd + 0x16b],
            (uint)(byte)param_1[local_20 * 0xd + 0x16c]);
  }
  SVar1 = param_1[0x20];
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  uVar7 = *(undefined4 *)(param_1 + 0x18);
  uVar8 = *(undefined4 *)(param_1 + 0x18c);
  uVar9 = *(undefined4 *)(param_1 + 0x188);
  SVar2 = param_1[0x187];
  uVar10 = *(undefined4 *)(param_1 + 0x17f);
  uVar11 = *(undefined4 *)(param_1 + 0x17b);
  SVar3 = param_1[0x17a];
  uVar12 = *(undefined4 *)(param_1 + 0x172);
  uVar13 = *(undefined4 *)(param_1 + 0x16e);
  SVar4 = param_1[0x16d];
  uVar14 = *(undefined4 *)(param_1 + 0x165);
  uVar15 = *(undefined4 *)(param_1 + 0x161);
  SVar5 = param_1[0x160];
  uVar16 = NumberToString(*(uint *)(param_1 + 0x10),0);
  MySQL::set_query(local_28,
                   "inSert into dnf_party_ping_history(str_ip,m_id,nat_type_1,ping1,mtu_1,nat_type_2,ping2,mtu_2,nat_type_3,ping3,mtu_3,nat_type_4,ping4,mtu_4,occ_time,map_id,dungeon_id,ip_1,ip_2,ip_3,ip_4, end_reason) values(\'%s\',%s,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,now(),%d,%d,\'%s\',\'%s\',\'%s\',\'%s\',%d)"
                   ,param_1,uVar16,(uint)(byte)SVar5,uVar15,uVar14,(uint)(byte)SVar4,uVar13,uVar12,
                   (uint)(byte)SVar3,uVar11,uVar10,(uint)(byte)SVar2,uVar9,uVar8,uVar7,uVar6,
                   local_78,auStack_68,auStack_58,auStack_48,(uint)(byte)SVar1);
  local_21 = MySQL::exec(local_28,true);
  if (local_21 != '\x01') {
    cMyTrace::cMyTrace(local_38,
                       "bool DB_GatheringParyStatus::save_dnf_party_ping_history(SIG_PARTY_STATUS*)"
                       ,0x5964,5);
    cMyTrace::operator()(local_38,"DB_GatheringParyStatus failed");
  }
  return 1;
}
```
