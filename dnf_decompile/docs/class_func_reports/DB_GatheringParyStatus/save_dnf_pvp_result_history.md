# save_dnf_pvp_result_history

`_ZN22DB_GatheringParyStatus27save_dnf_pvp_result_historyEP16SIG_PARTY_STATUSi`

`DB_GatheringParyStatus::save_dnf_pvp_result_history(SIG_PARTY_STATUS*, int)`

| 类 | 地址 |
|---|---|
| `DB_GatheringParyStatus` | `0x08420e1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08420e1a  _ZN22DB_GatheringParyStatus27save_dnf_pvp_result_historyEP16SIG_PARTY_STATUSi
#           DB_GatheringParyStatus::save_dnf_pvp_result_history(SIG_PARTY_STATUS*, int)
# range [0x08420e1a, 0x08421065]
08420e1a +0x000:  push   %ebp
08420e1b +0x001:  mov    %esp,%ebp
08420e1d +0x003:  push   %edi
08420e1e +0x004:  push   %esi
08420e1f +0x005:  push   %ebx
08420e20 +0x006:  sub    $0x9c,%esp
08420e26 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08420e2b +0x011:  movl   $0x0,0x8(%esp)
08420e33 +0x019:  movl   $0x4,0x4(%esp)
08420e3b +0x021:  mov    %eax,(%esp)
08420e3e +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08420e43 +0x029:  mov    %eax,-0x20(%ebp)
08420e46 +0x02c:  mov    0x10(%ebp),%edx
08420e49 +0x02f:  mov    0xc(%ebp),%ecx
08420e4c +0x032:  mov    %edx,%eax
08420e4e +0x034:  shl    $0x2,%eax
08420e51 +0x037:  add    %edx,%eax
08420e53 +0x039:  add    %eax,%eax
08420e55 +0x03b:  lea    (%ecx,%eax,1),%eax
08420e58 +0x03e:  add    $0x2d,%eax
08420e5b +0x041:  movzbl (%eax),%eax
08420e5e +0x044:  movzbl %al,%esi
08420e61 +0x047:  mov    0x10(%ebp),%edx
08420e64 +0x04a:  mov    0xc(%ebp),%ecx
08420e67 +0x04d:  mov    %edx,%eax
08420e69 +0x04f:  shl    $0x2,%eax
08420e6c +0x052:  add    %edx,%eax
08420e6e +0x054:  add    %eax,%eax
08420e70 +0x056:  lea    (%ecx,%eax,1),%eax
08420e73 +0x059:  add    $0x2c,%eax
08420e76 +0x05c:  movzbl (%eax),%eax
08420e79 +0x05f:  movzbl %al,%ebx
08420e7c +0x062:  mov    0x10(%ebp),%edx
08420e7f +0x065:  mov    0xc(%ebp),%ecx
08420e82 +0x068:  mov    %edx,%eax
08420e84 +0x06a:  shl    $0x2,%eax
08420e87 +0x06d:  add    %edx,%eax
08420e89 +0x06f:  add    %eax,%eax
08420e8b +0x071:  lea    (%ecx,%eax,1),%eax
08420e8e +0x074:  add    $0x2b,%eax
08420e91 +0x077:  movzbl (%eax),%eax
08420e94 +0x07a:  movzbl %al,%ecx
08420e97 +0x07d:  mov    0x10(%ebp),%edx
08420e9a +0x080:  mov    0xc(%ebp),%edi
08420e9d +0x083:  mov    %edx,%eax
08420e9f +0x085:  shl    $0x2,%eax
08420ea2 +0x088:  add    %edx,%eax
08420ea4 +0x08a:  add    %eax,%eax
08420ea6 +0x08c:  lea    (%edi,%eax,1),%eax
08420ea9 +0x08f:  add    $0x2a,%eax
08420eac +0x092:  movzbl (%eax),%eax
08420eaf +0x095:  movzbl %al,%eax
08420eb2 +0x098:  mov    %esi,0x14(%esp)
08420eb6 +0x09c:  mov    %ebx,0x10(%esp)
08420eba +0x0a0:  mov    %ecx,0xc(%esp)
08420ebe +0x0a4:  mov    %eax,0x8(%esp)
08420ec2 +0x0a8:  movl   $"%d.%d.%d.%d",0x4(%esp)
08420eca +0x0b0:  lea    -0x40(%ebp),%eax
08420ecd +0x0b3:  mov    %eax,(%esp)
08420ed0 +0x0b6:  call   0807e440 <_init+0xd38>
08420ed5 +0x0bb:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08420eda +0x0c0:  mov    0x358(%eax),%eax
08420ee0 +0x0c6:  mov    %eax,-0x68(%ebp)
08420ee3 +0x0c9:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08420ee8 +0x0ce:  mov    0x35c(%eax),%eax
08420eee +0x0d4:  mov    %eax,-0x64(%ebp)
08420ef1 +0x0d7:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08420ef6 +0x0dc:  add    $0x345,%eax
08420efb +0x0e1:  mov    %eax,-0x60(%ebp)
08420efe +0x0e4:  mov    0xc(%ebp),%eax
08420f01 +0x0e7:  mov    0x22(%eax),%eax
08420f04 +0x0ea:  mov    %eax,-0x5c(%ebp)
08420f07 +0x0ed:  mov    0xc(%ebp),%eax
08420f0a +0x0f0:  movzbl 0x21(%eax),%eax
08420f0e +0x0f4:  movzbl %al,%eax
08420f11 +0x0f7:  mov    %eax,-0x58(%ebp)
08420f14 +0x0fa:  mov    0x10(%ebp),%edx
08420f17 +0x0fd:  mov    0xc(%ebp),%ecx
08420f1a +0x100:  mov    %edx,%eax
08420f1c +0x102:  shl    $0x2,%eax
08420f1f +0x105:  add    %edx,%eax
08420f21 +0x107:  add    %eax,%eax
08420f23 +0x109:  lea    (%ecx,%eax,1),%eax
08420f26 +0x10c:  add    $0x20,%eax
08420f29 +0x10f:  mov    0xe(%eax),%eax
08420f2c +0x112:  mov    %eax,-0x54(%ebp)
08420f2f +0x115:  mov    0x10(%ebp),%edx
08420f32 +0x118:  mov    0xc(%ebp),%ecx
08420f35 +0x11b:  mov    %edx,%eax
08420f37 +0x11d:  shl    $0x2,%eax
08420f3a +0x120:  add    %edx,%eax
08420f3c +0x122:  add    %eax,%eax
08420f3e +0x124:  lea    (%ecx,%eax,1),%eax
08420f41 +0x127:  add    $0x29,%eax
08420f44 +0x12a:  movzbl (%eax),%eax
08420f47 +0x12d:  movzbl %al,%eax
08420f4a +0x130:  mov    %eax,-0x50(%ebp)
08420f4d +0x133:  mov    0xc(%ebp),%eax
08420f50 +0x136:  mov    0x1c(%eax),%eax
08420f53 +0x139:  mov    %eax,-0x4c(%ebp)
08420f56 +0x13c:  mov    0xc(%ebp),%eax
08420f59 +0x13f:  mov    0x18(%eax),%edi
08420f5c +0x142:  mov    0x10(%ebp),%edx
08420f5f +0x145:  mov    0xc(%ebp),%ecx
08420f62 +0x148:  mov    %edx,%eax
08420f64 +0x14a:  shl    $0x2,%eax
08420f67 +0x14d:  add    %edx,%eax
08420f69 +0x14f:  add    %eax,%eax
08420f6b +0x151:  lea    (%ecx,%eax,1),%eax
08420f6e +0x154:  add    $0x28,%eax
08420f71 +0x157:  movzbl (%eax),%eax
08420f74 +0x15a:  movzbl %al,%esi
08420f77 +0x15d:  mov    0xc(%ebp),%eax
08420f7a +0x160:  mov    0x10(%eax),%eax
08420f7d +0x163:  movl   $0x0,0x4(%esp)
08420f85 +0x16b:  mov    %eax,(%esp)
08420f88 +0x16e:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08420f8d +0x173:  mov    %eax,%ebx
08420f8f +0x175:  mov    0xc(%ebp),%eax
08420f92 +0x178:  mov    0x14(%eax),%ecx
08420f95 +0x17b:  mov    0xc(%ebp),%edx
08420f98 +0x17e:  mov    -0x68(%ebp),%eax
08420f9b +0x181:  mov    %eax,0x3c(%esp)
08420f9f +0x185:  mov    -0x64(%ebp),%eax
08420fa2 +0x188:  mov    %eax,0x38(%esp)
08420fa6 +0x18c:  mov    -0x60(%ebp),%eax
08420fa9 +0x18f:  mov    %eax,0x34(%esp)
08420fad +0x193:  mov    -0x5c(%ebp),%eax
08420fb0 +0x196:  mov    %eax,0x30(%esp)
08420fb4 +0x19a:  mov    -0x58(%ebp),%eax
08420fb7 +0x19d:  mov    %eax,0x2c(%esp)
08420fbb +0x1a1:  mov    -0x54(%ebp),%eax
08420fbe +0x1a4:  mov    %eax,0x28(%esp)
08420fc2 +0x1a8:  lea    -0x40(%ebp),%eax
08420fc5 +0x1ab:  mov    %eax,0x24(%esp)
08420fc9 +0x1af:  mov    -0x50(%ebp),%eax
08420fcc +0x1b2:  mov    %eax,0x20(%esp)
08420fd0 +0x1b6:  mov    -0x4c(%ebp),%eax
08420fd3 +0x1b9:  mov    %eax,0x1c(%esp)
08420fd7 +0x1bd:  mov    %edi,0x18(%esp)
08420fdb +0x1c1:  mov    %esi,0x14(%esp)
08420fdf +0x1c5:  mov    %ebx,0x10(%esp)
08420fe3 +0x1c9:  mov    %ecx,0xc(%esp)
08420fe7 +0x1cd:  mov    %edx,0x8(%esp)
08420feb +0x1d1:  movl   $"inSert into dnf_party_result_history_pvp (str_ip,nat_type,m_id,party_result,occ_time,map_id,dungeon_id,peer_nat_type,peer_ip, established_time, IsConnectedToRelaySrv, ConnectedTimeToRelaySrv, relay_ip, relay_udp_port, relay_tcp_port ) values('%s',%d,%s,%d,now(),%d,%d,%d,'%s',%d, %d, %d, '%s', %d, %d)",0x4(%esp)
08420ff3 +0x1d9:  mov    -0x20(%ebp),%eax
08420ff6 +0x1dc:  mov    %eax,(%esp)
08420ff9 +0x1df:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08420ffe +0x1e4:  movl   $0x1,0x4(%esp)
08421006 +0x1ec:  mov    -0x20(%ebp),%eax
08421009 +0x1ef:  mov    %eax,(%esp)
0842100c +0x1f2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08421011 +0x1f7:  mov    %al,-0x19(%ebp)
08421014 +0x1fa:  movzbl -0x19(%ebp),%eax
08421018 +0x1fe:  xor    $0x1,%eax
0842101b +0x201:  test   %al,%al
0842101d +0x203:  je     08421055 <+0x23b>
0842101f +0x205:  movl   $0x5,0xc(%esp)
08421027 +0x20d:  movl   $0x5864,0x8(%esp)
0842102f +0x215:  movl   $&_ZZN22DB_GatheringParyStatus27save_dnf_pvp_result_historyEP16SIG_PARTY_STATUSiE19__PRETTY_FUNCTION__,0x4(%esp)
08421037 +0x21d:  lea    -0x30(%ebp),%eax
0842103a +0x220:  mov    %eax,(%esp)
0842103d +0x223:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08421042 +0x228:  movl   $"DB_GatheringParyStatus failed",0x4(%esp)
0842104a +0x230:  lea    -0x30(%ebp),%eax
0842104d +0x233:  mov    %eax,(%esp)
08421050 +0x236:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08421055 +0x23b:  mov    $0x1,%eax
0842105a +0x240:  add    $0x9c,%esp
08421060 +0x246:  pop    %ebx
08421061 +0x247:  pop    %esi
08421062 +0x248:  pop    %edi
08421063 +0x249:  pop    %ebp
08421064 +0x24a:  ret
08421065 +0x24b:  nop
```

## 反编译 C

```c
// DB_GatheringParyStatus::save_dnf_pvp_result_history @ 0x8420e1a

/* DB_GatheringParyStatus::save_dnf_pvp_result_history(SIG_PARTY_STATUS*, int) */

undefined4 __thiscall
DB_GatheringParyStatus::save_dnf_pvp_result_history
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
                   "inSert into dnf_party_result_history_pvp (str_ip,nat_type,m_id,party_result,occ_time,map_id,dungeon_id,peer_nat_type,peer_ip, established_time, IsConnectedToRelaySrv, ConnectedTimeToRelaySrv, relay_ip, relay_udp_port, relay_tcp_port ) values(\'%s\',%d,%s,%d,now(),%d,%d,%d,\'%s\',%d, %d, %d, \'%s\', %d, %d)"
                   ,param_1,*(undefined4 *)(param_1 + 0x14),uVar11,(uint)(byte)SVar3,uVar9,uVar8,
                   (uint)(byte)SVar2,local_44,uVar7,(uint)(byte)SVar1,uVar6,iVar10 + 0x345,uVar5,
                   uVar4);
  local_1d = MySQL::exec(local_24,true);
  if (local_1d != '\x01') {
    cMyTrace::cMyTrace(local_34,
                       "bool DB_GatheringParyStatus::save_dnf_pvp_result_history(SIG_PARTY_STATUS*, int)"
                       ,0x5864,5);
    cMyTrace::operator()(local_34,"DB_GatheringParyStatus failed");
  }
  return 1;
}
```
