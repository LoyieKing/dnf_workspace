# save_dnf_party_result_history

`_ZN22DB_GatheringParyStatus29save_dnf_party_result_historyEP16SIG_PARTY_STATUSi`

`DB_GatheringParyStatus::save_dnf_party_result_history(SIG_PARTY_STATUS*, int)`

| 类 | 地址 |
|---|---|
| `DB_GatheringParyStatus` | `0x0842156a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842156a  _ZN22DB_GatheringParyStatus29save_dnf_party_result_historyEP16SIG_PARTY_STATUSi
#           DB_GatheringParyStatus::save_dnf_party_result_history(SIG_PARTY_STATUS*, int)
# range [0x0842156a, 0x084217b5]
0842156a +0x000:  push   %ebp
0842156b +0x001:  mov    %esp,%ebp
0842156d +0x003:  push   %edi
0842156e +0x004:  push   %esi
0842156f +0x005:  push   %ebx
08421570 +0x006:  sub    $0x9c,%esp
08421576 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842157b +0x011:  movl   $0x0,0x8(%esp)
08421583 +0x019:  movl   $0x4,0x4(%esp)
0842158b +0x021:  mov    %eax,(%esp)
0842158e +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08421593 +0x029:  mov    %eax,-0x20(%ebp)
08421596 +0x02c:  mov    0x10(%ebp),%edx
08421599 +0x02f:  mov    0xc(%ebp),%ecx
0842159c +0x032:  mov    %edx,%eax
0842159e +0x034:  shl    $0x2,%eax
084215a1 +0x037:  add    %edx,%eax
084215a3 +0x039:  add    %eax,%eax
084215a5 +0x03b:  lea    (%ecx,%eax,1),%eax
084215a8 +0x03e:  add    $0x2d,%eax
084215ab +0x041:  movzbl (%eax),%eax
084215ae +0x044:  movzbl %al,%esi
084215b1 +0x047:  mov    0x10(%ebp),%edx
084215b4 +0x04a:  mov    0xc(%ebp),%ecx
084215b7 +0x04d:  mov    %edx,%eax
084215b9 +0x04f:  shl    $0x2,%eax
084215bc +0x052:  add    %edx,%eax
084215be +0x054:  add    %eax,%eax
084215c0 +0x056:  lea    (%ecx,%eax,1),%eax
084215c3 +0x059:  add    $0x2c,%eax
084215c6 +0x05c:  movzbl (%eax),%eax
084215c9 +0x05f:  movzbl %al,%ebx
084215cc +0x062:  mov    0x10(%ebp),%edx
084215cf +0x065:  mov    0xc(%ebp),%ecx
084215d2 +0x068:  mov    %edx,%eax
084215d4 +0x06a:  shl    $0x2,%eax
084215d7 +0x06d:  add    %edx,%eax
084215d9 +0x06f:  add    %eax,%eax
084215db +0x071:  lea    (%ecx,%eax,1),%eax
084215de +0x074:  add    $0x2b,%eax
084215e1 +0x077:  movzbl (%eax),%eax
084215e4 +0x07a:  movzbl %al,%ecx
084215e7 +0x07d:  mov    0x10(%ebp),%edx
084215ea +0x080:  mov    0xc(%ebp),%edi
084215ed +0x083:  mov    %edx,%eax
084215ef +0x085:  shl    $0x2,%eax
084215f2 +0x088:  add    %edx,%eax
084215f4 +0x08a:  add    %eax,%eax
084215f6 +0x08c:  lea    (%edi,%eax,1),%eax
084215f9 +0x08f:  add    $0x2a,%eax
084215fc +0x092:  movzbl (%eax),%eax
084215ff +0x095:  movzbl %al,%eax
08421602 +0x098:  mov    %esi,0x14(%esp)
08421606 +0x09c:  mov    %ebx,0x10(%esp)
0842160a +0x0a0:  mov    %ecx,0xc(%esp)
0842160e +0x0a4:  mov    %eax,0x8(%esp)
08421612 +0x0a8:  movl   $"%d.%d.%d.%d",0x4(%esp)
0842161a +0x0b0:  lea    -0x40(%ebp),%eax
0842161d +0x0b3:  mov    %eax,(%esp)
08421620 +0x0b6:  call   0807e440 <_init+0xd38>
08421625 +0x0bb:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0842162a +0x0c0:  mov    0x358(%eax),%eax
08421630 +0x0c6:  mov    %eax,-0x68(%ebp)
08421633 +0x0c9:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08421638 +0x0ce:  mov    0x35c(%eax),%eax
0842163e +0x0d4:  mov    %eax,-0x64(%ebp)
08421641 +0x0d7:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08421646 +0x0dc:  add    $0x345,%eax
0842164b +0x0e1:  mov    %eax,-0x60(%ebp)
0842164e +0x0e4:  mov    0xc(%ebp),%eax
08421651 +0x0e7:  mov    0x22(%eax),%eax
08421654 +0x0ea:  mov    %eax,-0x5c(%ebp)
08421657 +0x0ed:  mov    0xc(%ebp),%eax
0842165a +0x0f0:  movzbl 0x21(%eax),%eax
0842165e +0x0f4:  movzbl %al,%eax
08421661 +0x0f7:  mov    %eax,-0x58(%ebp)
08421664 +0x0fa:  mov    0x10(%ebp),%edx
08421667 +0x0fd:  mov    0xc(%ebp),%ecx
0842166a +0x100:  mov    %edx,%eax
0842166c +0x102:  shl    $0x2,%eax
0842166f +0x105:  add    %edx,%eax
08421671 +0x107:  add    %eax,%eax
08421673 +0x109:  lea    (%ecx,%eax,1),%eax
08421676 +0x10c:  add    $0x20,%eax
08421679 +0x10f:  mov    0xe(%eax),%eax
0842167c +0x112:  mov    %eax,-0x54(%ebp)
0842167f +0x115:  mov    0x10(%ebp),%edx
08421682 +0x118:  mov    0xc(%ebp),%ecx
08421685 +0x11b:  mov    %edx,%eax
08421687 +0x11d:  shl    $0x2,%eax
0842168a +0x120:  add    %edx,%eax
0842168c +0x122:  add    %eax,%eax
0842168e +0x124:  lea    (%ecx,%eax,1),%eax
08421691 +0x127:  add    $0x29,%eax
08421694 +0x12a:  movzbl (%eax),%eax
08421697 +0x12d:  movzbl %al,%eax
0842169a +0x130:  mov    %eax,-0x50(%ebp)
0842169d +0x133:  mov    0xc(%ebp),%eax
084216a0 +0x136:  mov    0x1c(%eax),%eax
084216a3 +0x139:  mov    %eax,-0x4c(%ebp)
084216a6 +0x13c:  mov    0xc(%ebp),%eax
084216a9 +0x13f:  mov    0x18(%eax),%edi
084216ac +0x142:  mov    0x10(%ebp),%edx
084216af +0x145:  mov    0xc(%ebp),%ecx
084216b2 +0x148:  mov    %edx,%eax
084216b4 +0x14a:  shl    $0x2,%eax
084216b7 +0x14d:  add    %edx,%eax
084216b9 +0x14f:  add    %eax,%eax
084216bb +0x151:  lea    (%ecx,%eax,1),%eax
084216be +0x154:  add    $0x28,%eax
084216c1 +0x157:  movzbl (%eax),%eax
084216c4 +0x15a:  movzbl %al,%esi
084216c7 +0x15d:  mov    0xc(%ebp),%eax
084216ca +0x160:  mov    0x10(%eax),%eax
084216cd +0x163:  movl   $0x0,0x4(%esp)
084216d5 +0x16b:  mov    %eax,(%esp)
084216d8 +0x16e:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084216dd +0x173:  mov    %eax,%ebx
084216df +0x175:  mov    0xc(%ebp),%eax
084216e2 +0x178:  mov    0x14(%eax),%ecx
084216e5 +0x17b:  mov    0xc(%ebp),%edx
084216e8 +0x17e:  mov    -0x68(%ebp),%eax
084216eb +0x181:  mov    %eax,0x3c(%esp)
084216ef +0x185:  mov    -0x64(%ebp),%eax
084216f2 +0x188:  mov    %eax,0x38(%esp)
084216f6 +0x18c:  mov    -0x60(%ebp),%eax
084216f9 +0x18f:  mov    %eax,0x34(%esp)
084216fd +0x193:  mov    -0x5c(%ebp),%eax
08421700 +0x196:  mov    %eax,0x30(%esp)
08421704 +0x19a:  mov    -0x58(%ebp),%eax
08421707 +0x19d:  mov    %eax,0x2c(%esp)
0842170b +0x1a1:  mov    -0x54(%ebp),%eax
0842170e +0x1a4:  mov    %eax,0x28(%esp)
08421712 +0x1a8:  lea    -0x40(%ebp),%eax
08421715 +0x1ab:  mov    %eax,0x24(%esp)
08421719 +0x1af:  mov    -0x50(%ebp),%eax
0842171c +0x1b2:  mov    %eax,0x20(%esp)
08421720 +0x1b6:  mov    -0x4c(%ebp),%eax
08421723 +0x1b9:  mov    %eax,0x1c(%esp)
08421727 +0x1bd:  mov    %edi,0x18(%esp)
0842172b +0x1c1:  mov    %esi,0x14(%esp)
0842172f +0x1c5:  mov    %ebx,0x10(%esp)
08421733 +0x1c9:  mov    %ecx,0xc(%esp)
08421737 +0x1cd:  mov    %edx,0x8(%esp)
0842173b +0x1d1:  movl   $"inSert into dnf_party_result_history (str_ip,nat_type,m_id,party_result,occ_time,map_id,dungeon_id,peer_nat_type,peer_ip,established_time, IsConnectedToRelaySrv, ConnectedTimeToRelaySrv, relay_ip, relay_udp_port, relay_tcp_port) values('%s',%d,%s,%d,now(),%d,%d,%d,'%s',%d, %d, %d, '%s', %d, %d)",0x4(%esp)
08421743 +0x1d9:  mov    -0x20(%ebp),%eax
08421746 +0x1dc:  mov    %eax,(%esp)
08421749 +0x1df:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842174e +0x1e4:  movl   $0x1,0x4(%esp)
08421756 +0x1ec:  mov    -0x20(%ebp),%eax
08421759 +0x1ef:  mov    %eax,(%esp)
0842175c +0x1f2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08421761 +0x1f7:  mov    %al,-0x19(%ebp)
08421764 +0x1fa:  movzbl -0x19(%ebp),%eax
08421768 +0x1fe:  xor    $0x1,%eax
0842176b +0x201:  test   %al,%al
0842176d +0x203:  je     084217a5 <+0x23b>
0842176f +0x205:  movl   $0x5,0xc(%esp)
08421777 +0x20d:  movl   $0x590f,0x8(%esp)
0842177f +0x215:  movl   $&_ZZN22DB_GatheringParyStatus29save_dnf_party_result_historyEP16SIG_PARTY_STATUSiE19__PRETTY_FUNCTION__,0x4(%esp)
08421787 +0x21d:  lea    -0x30(%ebp),%eax
0842178a +0x220:  mov    %eax,(%esp)
0842178d +0x223:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08421792 +0x228:  movl   $"DB_GatheringParyStatus failed",0x4(%esp)
0842179a +0x230:  lea    -0x30(%ebp),%eax
0842179d +0x233:  mov    %eax,(%esp)
084217a0 +0x236:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084217a5 +0x23b:  mov    $0x1,%eax
084217aa +0x240:  add    $0x9c,%esp
084217b0 +0x246:  pop    %ebx
084217b1 +0x247:  pop    %esi
084217b2 +0x248:  pop    %edi
084217b3 +0x249:  pop    %ebp
084217b4 +0x24a:  ret
084217b5 +0x24b:  nop
```

## 反编译 C

```c
// DB_GatheringParyStatus::save_dnf_party_result_history @ 0x842156a

/* DB_GatheringParyStatus::save_dnf_party_result_history(SIG_PARTY_STATUS*, int) */

undefined4 __thiscall
DB_GatheringParyStatus::save_dnf_party_result_history
          (DB_GatheringParyStatus *this,SIG_PARTY_STATUS *param_1,int param_2)

{
  SIG_PARTY_STATUS SVar1;
  SIG_PARTY_STATUS SVar2;
  SIG_PARTY_STATUS SVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  char local_44 [16];
  cMyTrace local_34 [16];
  MySQL *local_24;
  char local_1d;
  
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  sprintf(local_44,"%d.%d.%d.%d",(uint)(byte)param_1[param_2 * 10 + 0x2a],
          (uint)(byte)param_1[param_2 * 10 + 0x2b],(uint)(byte)param_1[param_2 * 10 + 0x2c],
          (uint)(byte)param_1[param_2 * 10 + 0x2d]);
  iVar10 = G_CEnvironment();
  uVar4 = *(undefined4 *)(iVar10 + 0x358);
  iVar10 = G_CEnvironment();
  uVar5 = *(undefined4 *)(iVar10 + 0x35c);
  iVar10 = G_CEnvironment();
  uVar6 = *(undefined4 *)(param_1 + 0x22);
  SVar1 = param_1[0x21];
  uVar7 = *(undefined4 *)(param_1 + param_2 * 10 + 0x2e);
  SVar2 = param_1[param_2 * 10 + 0x29];
  uVar8 = *(undefined4 *)(param_1 + 0x1c);
  uVar9 = *(undefined4 *)(param_1 + 0x18);
  SVar3 = param_1[param_2 * 10 + 0x28];
  uVar11 = NumberToString(*(uint *)(param_1 + 0x10),0);
  MySQL::set_query(local_24,
                   "inSert into dnf_party_result_history (str_ip,nat_type,m_id,party_result,occ_time,map_id,dungeon_id,peer_nat_type,peer_ip,established_time, IsConnectedToRelaySrv, ConnectedTimeToRelaySrv, relay_ip, relay_udp_port, relay_tcp_port) values(\'%s\',%d,%s,%d,now(),%d,%d,%d,\'%s\',%d, %d, %d, \'%s\', %d, %d)"
                   ,param_1,*(undefined4 *)(param_1 + 0x14),uVar11,(uint)(byte)SVar3,uVar9,uVar8,
                   (uint)(byte)SVar2,local_44,uVar7,(uint)(byte)SVar1,uVar6,iVar10 + 0x345,uVar5,
                   uVar4);
  local_1d = MySQL::exec(local_24,true);
  if (local_1d != '\x01') {
    cMyTrace::cMyTrace(local_34,
                       "bool DB_GatheringParyStatus::save_dnf_party_result_history(SIG_PARTY_STATUS*, int)"
                       ,0x590f,5);
    cMyTrace::operator()(local_34,"DB_GatheringParyStatus failed");
  }
  return 1;
}
```
