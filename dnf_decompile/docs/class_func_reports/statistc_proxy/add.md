# add

`_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z`

`statistc_proxy::add(CUser*, char const*, char const*, unsigned int, char const*, ...)`

| 类 | 地址 |
|---|---|
| `statistc_proxy` | `0x0860fdd2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860fdd2  _ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z
#           statistc_proxy::add(CUser*, char const*, char const*, unsigned int, char const*, ...)
# range [0x0860fdd2, 0x0860ff41]
0860fdd2 +0x000:  push   %ebp
0860fdd3 +0x001:  mov    %esp,%ebp
0860fdd5 +0x003:  push   %edi
0860fdd6 +0x004:  push   %ebx
0860fdd7 +0x005:  sub    $0x4a0,%esp
0860fddd +0x00b:  lea    -0x495(%ebp),%edx
0860fde3 +0x011:  mov    $0x400,%ebx
0860fde8 +0x016:  mov    $0x0,%eax
0860fded +0x01b:  mov    %edx,%ecx
0860fdef +0x01d:  and    $0x1,%ecx
0860fdf2 +0x020:  test   %ecx,%ecx
0860fdf4 +0x022:  je     0860fdfe <+0x2c>
0860fdf6 +0x024:  mov    %al,(%edx)
0860fdf8 +0x026:  add    $0x1,%edx
0860fdfb +0x029:  sub    $0x1,%ebx
0860fdfe +0x02c:  mov    %edx,%ecx
0860fe00 +0x02e:  and    $0x2,%ecx
0860fe03 +0x031:  test   %ecx,%ecx
0860fe05 +0x033:  je     0860fe10 <+0x3e>
0860fe07 +0x035:  mov    %ax,(%edx)
0860fe0a +0x038:  add    $0x2,%edx
0860fe0d +0x03b:  sub    $0x2,%ebx
0860fe10 +0x03e:  mov    %ebx,%ecx
0860fe12 +0x040:  shr    $0x2,%ecx
0860fe15 +0x043:  mov    %edx,%edi
0860fe17 +0x045:  rep stos %eax,%es:(%edi)
0860fe19 +0x047:  mov    %edi,%edx
0860fe1b +0x049:  mov    %ebx,%ecx
0860fe1d +0x04b:  and    $0x2,%ecx
0860fe20 +0x04e:  test   %ecx,%ecx
0860fe22 +0x050:  je     0860fe2a <+0x58>
0860fe24 +0x052:  mov    %ax,(%edx)
0860fe27 +0x055:  add    $0x2,%edx
0860fe2a +0x058:  mov    %ebx,%ecx
0860fe2c +0x05a:  and    $0x1,%ecx
0860fe2f +0x05d:  test   %ecx,%ecx
0860fe31 +0x05f:  je     0860fe38 <+0x66>
0860fe33 +0x061:  mov    %al,(%edx)
0860fe35 +0x063:  add    $0x1,%edx
0860fe38 +0x066:  lea    0x1c(%ebp),%eax
0860fe3b +0x069:  mov    %eax,-0xc(%ebp)
0860fe3e +0x06c:  mov    -0xc(%ebp),%eax
0860fe41 +0x06f:  mov    %eax,0x8(%esp)
0860fe45 +0x073:  mov    0x18(%ebp),%eax
0860fe48 +0x076:  mov    %eax,0x4(%esp)
0860fe4c +0x07a:  lea    -0x495(%ebp),%eax
0860fe52 +0x080:  mov    %eax,(%esp)
0860fe55 +0x083:  call   0807d7d0 <_init+0xc8>
0860fe5a +0x088:  mov    0xc(%ebp),%eax
0860fe5d +0x08b:  mov    %eax,(%esp)
0860fe60 +0x08e:  call   0807e3b0 <_init+0xca8>
0860fe65 +0x093:  cmp    $0x20,%eax
0860fe68 +0x096:  ja     0860ff31 <+0x15f>
0860fe6e +0x09c:  mov    0x10(%ebp),%eax
0860fe71 +0x09f:  mov    %eax,(%esp)
0860fe74 +0x0a2:  call   0807e3b0 <_init+0xca8>
0860fe79 +0x0a7:  cmp    $0x20,%eax
0860fe7c +0x0aa:  ja     0860ff34 <+0x162>
0860fe82 +0x0b0:  lea    -0x495(%ebp),%eax
0860fe88 +0x0b6:  mov    %eax,(%esp)
0860fe8b +0x0b9:  call   0807e3b0 <_init+0xca8>
0860fe90 +0x0be:  cmp    $0x38,%eax
0860fe93 +0x0c1:  ja     0860ff37 <+0x165>
0860fe99 +0x0c7:  lea    -0x95(%ebp),%eax
0860fe9f +0x0cd:  mov    %eax,(%esp)
0860fea2 +0x0d0:  call   08610132 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1b0>  ; global constructors keyed to Statistics::Statistics()+0x1b0
0860fea7 +0x0d5:  mov    0xc(%ebp),%eax
0860feaa +0x0d8:  mov    %eax,0x4(%esp)
0860feae +0x0dc:  lea    -0x95(%ebp),%eax
0860feb4 +0x0e2:  add    $0xa,%eax
0860feb7 +0x0e5:  mov    %eax,(%esp)
0860feba +0x0e8:  call   0807def0 <_init+0x7e8>
0860febf +0x0ed:  mov    0x10(%ebp),%eax
0860fec2 +0x0f0:  mov    %eax,0x4(%esp)
0860fec6 +0x0f4:  lea    -0x95(%ebp),%eax
0860fecc +0x0fa:  add    $0x2b,%eax
0860fecf +0x0fd:  mov    %eax,(%esp)
0860fed2 +0x100:  call   0807def0 <_init+0x7e8>
0860fed7 +0x105:  lea    -0x495(%ebp),%eax
0860fedd +0x10b:  mov    %eax,0x4(%esp)
0860fee1 +0x10f:  lea    -0x95(%ebp),%eax
0860fee7 +0x115:  add    $0x4c,%eax
0860feea +0x118:  mov    %eax,(%esp)
0860feed +0x11b:  call   0807def0 <_init+0x7e8>
0860fef2 +0x120:  mov    0x14(%ebp),%eax
0860fef5 +0x123:  mov    %eax,-0x10(%ebp)
0860fef8 +0x126:  lea    -0x95(%ebp),%ebx
0860fefe +0x12c:  mov    0x8(%ebp),%eax
0860ff01 +0x12f:  mov    %eax,(%esp)
0860ff04 +0x132:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0860ff09 +0x137:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
0860ff0f +0x13d:  mov    %eax,0x4(%esp)
0860ff13 +0x141:  mov    %edx,(%esp)
0860ff16 +0x144:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0860ff1b +0x149:  movl   $0x89,0x8(%esp)
0860ff23 +0x151:  mov    %ebx,0x4(%esp)
0860ff27 +0x155:  mov    %eax,(%esp)
0860ff2a +0x158:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0860ff2f +0x15d:  jmp    0860ff38 <+0x166>
0860ff31 +0x15f:  nop
0860ff32 +0x160:  jmp    0860ff38 <+0x166>
0860ff34 +0x162:  nop
0860ff35 +0x163:  jmp    0860ff38 <+0x166>
0860ff37 +0x165:  nop
0860ff38 +0x166:  add    $0x4a0,%esp
0860ff3e +0x16c:  pop    %ebx
0860ff3f +0x16d:  pop    %edi
0860ff40 +0x16e:  pop    %ebp
0860ff41 +0x16f:  ret
```

## 反编译 C

```c
// statistc_proxy::add @ 0x860fdd2

/* statistc_proxy::add(CUser*, char const*, char const*, unsigned int, char const*, ...) */

void statistc_proxy::add(CUser *param_1,char *param_2,char *param_3,uint param_4,char *param_5,...)

{
  size_t sVar1;
  undefined4 uVar2;
  CStatisticServerProxy *this;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  char local_499;
  char local_498 [1023];
  StatisticsPacket local_99 [10];
  char acStack_8f [33];
  char acStack_6e [33];
  char acStack_4d [57];
  uint local_14;
  undefined1 *local_10;
  
  pcVar4 = &local_499;
  uVar5 = 0x400;
  bVar6 = ((uint)pcVar4 & 1) != 0;
  if (bVar6) {
    local_499 = '\0';
    pcVar4 = local_498;
    uVar5 = 0x3ff;
  }
  if (((uint)pcVar4 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
    uVar5 = uVar5 - 2;
  }
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  if ((uVar5 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
  }
  if (bVar6) {
    *pcVar4 = '\0';
  }
  local_10 = &stack0x00000018;
  vsprintf(&local_499,param_5,local_10);
  sVar1 = strlen(param_2);
  if (((sVar1 < 0x21) && (sVar1 = strlen(param_3), sVar1 < 0x21)) &&
     (sVar1 = strlen(&local_499), sVar1 < 0x39)) {
    StatisticsPacket::StatisticsPacket(local_99);
    strcpy(acStack_8f,param_2);
    strcpy(acStack_6e,param_3);
    strcpy(acStack_4d,&local_499);
    local_14 = param_4;
    uVar2 = CUser::GetServerGroup(param_1);
    this = (CStatisticServerProxy *)
           CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                     (GlobalData::s_statistic_proxy_mgr,uVar2);
    CStatisticServerProxy::SendPacket(this,(char *)local_99,0x89);
  }
  return;
}
```
