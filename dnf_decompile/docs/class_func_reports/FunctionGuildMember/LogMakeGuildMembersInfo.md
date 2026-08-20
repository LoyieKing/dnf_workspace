# LogMakeGuildMembersInfo

`_ZN19FunctionGuildMember23LogMakeGuildMembersInfoEjiP17ST_Guild_Mem_Info`

`FunctionGuildMember::LogMakeGuildMembersInfo(unsigned int, int, ST_Guild_Mem_Info*)`

| 类 | 地址 |
|---|---|
| `FunctionGuildMember` | `0x084ca55a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ca55a  _ZN19FunctionGuildMember23LogMakeGuildMembersInfoEjiP17ST_Guild_Mem_Info
#           FunctionGuildMember::LogMakeGuildMembersInfo(unsigned int, int, ST_Guild_Mem_Info*)
# range [0x084ca55a, 0x084ca7e5]
084ca55a +0x000:  push   %ebp
084ca55b +0x001:  mov    %esp,%ebp
084ca55d +0x003:  push   %edi
084ca55e +0x004:  push   %ebx
084ca55f +0x005:  sub    $0x1120,%esp
084ca565 +0x00b:  lea    -0x1110(%ebp),%ebx
084ca56b +0x011:  mov    $0x0,%eax
084ca570 +0x016:  mov    $0x400,%edx
084ca575 +0x01b:  mov    %ebx,%edi
084ca577 +0x01d:  mov    %edx,%ecx
084ca579 +0x01f:  rep stos %eax,%es:(%edi)
084ca57b +0x021:  mov    0xc(%ebp),%eax
084ca57e +0x024:  mov    %eax,0xc(%esp)
084ca582 +0x028:  mov    0x8(%ebp),%eax
084ca585 +0x02b:  mov    %eax,0x8(%esp)
084ca589 +0x02f:  movl   $"gKey(%d) Cnt(%d)",0x4(%esp)
084ca591 +0x037:  lea    -0x1110(%ebp),%eax
084ca597 +0x03d:  mov    %eax,(%esp)
084ca59a +0x040:  call   0807e440 <_init+0xd38>
084ca59f +0x045:  jmp    084ca746 <+0x1ec>
084ca5a4 +0x04a:  mov    0x10(%ebp),%eax
084ca5a7 +0x04d:  add    $0x4,%eax
084ca5aa +0x050:  mov    %eax,0xc(%esp)
084ca5ae +0x054:  lea    -0x1110(%ebp),%eax
084ca5b4 +0x05a:  mov    %eax,0x8(%esp)
084ca5b8 +0x05e:  movl   $"%s %s",0x4(%esp)
084ca5c0 +0x066:  lea    -0x1110(%ebp),%eax
084ca5c6 +0x06c:  mov    %eax,(%esp)
084ca5c9 +0x06f:  call   0807e440 <_init+0xd38>
084ca5ce +0x074:  mov    0x10(%ebp),%eax
084ca5d1 +0x077:  movzwl 0x2(%eax),%eax
084ca5d5 +0x07b:  cwtl
084ca5d6 +0x07c:  mov    %eax,0xc(%esp)
084ca5da +0x080:  lea    -0x1110(%ebp),%eax
084ca5e0 +0x086:  mov    %eax,0x8(%esp)
084ca5e4 +0x08a:  movl   $"%s l(%d)",0x4(%esp)
084ca5ec +0x092:  lea    -0x1110(%ebp),%eax
084ca5f2 +0x098:  mov    %eax,(%esp)
084ca5f5 +0x09b:  call   0807e440 <_init+0xd38>
084ca5fa +0x0a0:  mov    0x10(%ebp),%eax
084ca5fd +0x0a3:  movzbl (%eax),%eax
084ca600 +0x0a6:  movsbl %al,%eax
084ca603 +0x0a9:  mov    %eax,0xc(%esp)
084ca607 +0x0ad:  lea    -0x1110(%ebp),%eax
084ca60d +0x0b3:  mov    %eax,0x8(%esp)
084ca611 +0x0b7:  movl   $"%s j(%d)",0x4(%esp)
084ca619 +0x0bf:  lea    -0x1110(%ebp),%eax
084ca61f +0x0c5:  mov    %eax,(%esp)
084ca622 +0x0c8:  call   0807e440 <_init+0xd38>
084ca627 +0x0cd:  mov    0x10(%ebp),%eax
084ca62a +0x0d0:  movzbl 0x1(%eax),%eax
084ca62e +0x0d4:  movsbl %al,%eax
084ca631 +0x0d7:  mov    %eax,0xc(%esp)
084ca635 +0x0db:  lea    -0x1110(%ebp),%eax
084ca63b +0x0e1:  mov    %eax,0x8(%esp)
084ca63f +0x0e5:  movl   $"%s g(%d)",0x4(%esp)
084ca647 +0x0ed:  lea    -0x1110(%ebp),%eax
084ca64d +0x0f3:  mov    %eax,(%esp)
084ca650 +0x0f6:  call   0807e440 <_init+0xd38>
084ca655 +0x0fb:  mov    0x10(%ebp),%eax
084ca658 +0x0fe:  movzbl 0x37(%eax),%eax
084ca65c +0x102:  movzbl %al,%eax
084ca65f +0x105:  mov    %eax,0xc(%esp)
084ca663 +0x109:  lea    -0x1110(%ebp),%eax
084ca669 +0x10f:  mov    %eax,0x8(%esp)
084ca66d +0x113:  movl   $"%s Ch(%d)",0x4(%esp)
084ca675 +0x11b:  lea    -0x1110(%ebp),%eax
084ca67b +0x121:  mov    %eax,(%esp)
084ca67e +0x124:  call   0807e440 <_init+0xd38>
084ca683 +0x129:  mov    0x10(%ebp),%eax
084ca686 +0x12c:  movzbl 0x38(%eax),%eax
084ca68a +0x130:  movsbl %al,%eax
084ca68d +0x133:  mov    %eax,0xc(%esp)
084ca691 +0x137:  lea    -0x1110(%ebp),%eax
084ca697 +0x13d:  mov    %eax,0x8(%esp)
084ca69b +0x141:  movl   $"%s S(%d)",0x4(%esp)
084ca6a3 +0x149:  lea    -0x1110(%ebp),%eax
084ca6a9 +0x14f:  mov    %eax,(%esp)
084ca6ac +0x152:  call   0807e440 <_init+0xd38>
084ca6b1 +0x157:  mov    0x10(%ebp),%eax
084ca6b4 +0x15a:  movzbl 0x39(%eax),%eax
084ca6b8 +0x15e:  movsbl %al,%eax
084ca6bb +0x161:  mov    %eax,0xc(%esp)
084ca6bf +0x165:  lea    -0x1110(%ebp),%eax
084ca6c5 +0x16b:  mov    %eax,0x8(%esp)
084ca6c9 +0x16f:  movl   $"%s B(%d)",0x4(%esp)
084ca6d1 +0x177:  lea    -0x1110(%ebp),%eax
084ca6d7 +0x17d:  mov    %eax,(%esp)
084ca6da +0x180:  call   0807e440 <_init+0xd38>
084ca6df +0x185:  mov    0x10(%ebp),%eax
084ca6e2 +0x188:  movzbl 0x3a(%eax),%eax
084ca6e6 +0x18c:  movzbl %al,%eax
084ca6e9 +0x18f:  mov    %eax,0xc(%esp)
084ca6ed +0x193:  lea    -0x1110(%ebp),%eax
084ca6f3 +0x199:  mov    %eax,0x8(%esp)
084ca6f7 +0x19d:  movl   $"%s MG(%d)",0x4(%esp)
084ca6ff +0x1a5:  lea    -0x1110(%ebp),%eax
084ca705 +0x1ab:  mov    %eax,(%esp)
084ca708 +0x1ae:  call   0807e440 <_init+0xd38>
084ca70d +0x1b3:  lea    -0x1110(%ebp),%eax
084ca713 +0x1b9:  mov    %eax,0x8(%esp)
084ca717 +0x1bd:  movl   $"%s\n",0x4(%esp)
084ca71f +0x1c5:  lea    -0x1110(%ebp),%eax
084ca725 +0x1cb:  mov    %eax,(%esp)
084ca728 +0x1ce:  call   0807e440 <_init+0xd38>
084ca72d +0x1d3:  lea    -0x1110(%ebp),%eax
084ca733 +0x1d9:  mov    %eax,(%esp)
084ca736 +0x1dc:  call   0807e3b0 <_init+0xca8>
084ca73b +0x1e1:  cmp    $0xfff,%eax
084ca740 +0x1e6:  ja     084ca75b <+0x201>
084ca742 +0x1e8:  addl   $0x3f,0x10(%ebp)
084ca746 +0x1ec:  cmpl   $0x0,0xc(%ebp)
084ca74a +0x1f0:  setne  %al
084ca74d +0x1f3:  subl   $0x1,0xc(%ebp)
084ca751 +0x1f7:  test   %al,%al
084ca753 +0x1f9:  jne    084ca5a4 <+0x4a>
084ca759 +0x1ff:  jmp    084ca75c <+0x202>
084ca75b +0x201:  nop
084ca75c +0x202:  lea    -0x110(%ebp),%ebx
084ca762 +0x208:  mov    $0x0,%eax
084ca767 +0x20d:  mov    $0x40,%edx
084ca76c +0x212:  mov    %ebx,%edi
084ca76e +0x214:  mov    %edx,%ecx
084ca770 +0x216:  rep stos %eax,%es:(%edi)
084ca772 +0x218:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084ca777 +0x21d:  mov    %eax,(%esp)
084ca77a +0x220:  call   080da39a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x537>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x537
084ca77f +0x225:  mov    %eax,0x8(%esp)
084ca783 +0x229:  movl   $"./log/%s/GuildModi",0x4(%esp)
084ca78b +0x231:  lea    -0x110(%ebp),%eax
084ca791 +0x237:  mov    %eax,(%esp)
084ca794 +0x23a:  call   0807e440 <_init+0xd38>
084ca799 +0x23f:  movl   $0x24ac,0x8(%esp)
084ca7a1 +0x247:  movl   $&_ZZN19FunctionGuildMember23LogMakeGuildMembersInfoEjiP17ST_Guild_Mem_InfoE19__PRETTY_FUNCTION__,0x4(%esp)
084ca7a9 +0x24f:  lea    -0x10(%ebp),%eax
084ca7ac +0x252:  mov    %eax,(%esp)
084ca7af +0x255:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
084ca7b4 +0x25a:  lea    -0x1110(%ebp),%eax
084ca7ba +0x260:  mov    %eax,0xc(%esp)
084ca7be +0x264:  movl   $"%s",0x8(%esp)
084ca7c6 +0x26c:  lea    -0x110(%ebp),%eax
084ca7cc +0x272:  mov    %eax,0x4(%esp)
084ca7d0 +0x276:  lea    -0x10(%ebp),%eax
084ca7d3 +0x279:  mov    %eax,(%esp)
084ca7d6 +0x27c:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
084ca7db +0x281:  add    $0x1120,%esp
084ca7e1 +0x287:  pop    %ebx
084ca7e2 +0x288:  pop    %edi
084ca7e3 +0x289:  pop    %ebp
084ca7e4 +0x28a:  ret
084ca7e5 +0x28b:  nop
```

## 反编译 C

```c
// FunctionGuildMember::LogMakeGuildMembersInfo @ 0x84ca55a

/* FunctionGuildMember::LogMakeGuildMembersInfo(unsigned int, int, ST_Guild_Mem_Info*) */

void FunctionGuildMember::LogMakeGuildMembersInfo
               (uint param_1,int param_2,ST_Guild_Mem_Info *param_3)

{
  size_t sVar1;
  CEnvironment *this;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  byte bVar6;
  char local_1114 [4096];
  char local_114 [256];
  CMyFileLog local_14 [8];
  
  bVar6 = 0;
  pcVar4 = local_1114;
  for (iVar3 = 0x400; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  sprintf(local_1114,"gKey(%d) Cnt(%d)",param_1,param_2);
  while (bVar5 = param_2 != 0, param_2 = param_2 + -1, bVar5) {
    sprintf(local_1114,"%s %s",local_1114,param_3 + 4);
    sprintf(local_1114,"%s l(%d)",local_1114,(int)*(short *)(param_3 + 2));
    sprintf(local_1114,"%s j(%d)",local_1114,(int)(char)*param_3);
    sprintf(local_1114,"%s g(%d)",local_1114,(int)(char)param_3[1]);
    sprintf(local_1114,"%s Ch(%d)",local_1114,(uint)(byte)param_3[0x37]);
    sprintf(local_1114,"%s S(%d)",local_1114,(int)(char)param_3[0x38]);
    sprintf(local_1114,"%s B(%d)",local_1114,(int)(char)param_3[0x39]);
    sprintf(local_1114,"%s MG(%d)",local_1114,(uint)(byte)param_3[0x3a]);
    sprintf(local_1114,"%s\n",local_1114);
    sVar1 = strlen(local_1114);
    if (0xfff < sVar1) break;
    param_3 = param_3 + 0x3f;
  }
  pcVar4 = local_114;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar6 * -2 + 1) * 4;
  }
  this = (CEnvironment *)G_CEnvironment();
  uVar2 = CEnvironment::get_file_name(this);
  sprintf(local_114,"./log/%s/GuildModi",uVar2);
  CMyFileLog::CMyFileLog
            (local_14,
             "static void FunctionGuildMember::LogMakeGuildMembersInfo(unsigned int, int, ST_Guild_Mem_Info*)"
             ,0x24ac);
  CMyFileLog::operator()(local_14,local_114,"%s",local_1114);
  return;
}
```
