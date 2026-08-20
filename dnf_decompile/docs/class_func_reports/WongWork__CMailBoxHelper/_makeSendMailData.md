# _makeSendMailData

`_ZN8WongWork14CMailBoxHelper17_makeSendMailDataEP25SIG_MAILBOX_SEND_NEW_MAILPKciRK10Inven_ItemjjS4_iji`

`WongWork::CMailBoxHelper::_makeSendMailData(SIG_MAILBOX_SEND_NEW_MAIL*, char const*, int, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x08555756` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08555756  _ZN8WongWork14CMailBoxHelper17_makeSendMailDataEP25SIG_MAILBOX_SEND_NEW_MAILPKciRK10Inven_ItemjjS4_iji
#           WongWork::CMailBoxHelper::_makeSendMailData(SIG_MAILBOX_SEND_NEW_MAIL*, char const*, int, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, int)
# range [0x08555756, 0x08555915]
08555756 +0x000:  push   %ebp
08555757 +0x001:  mov    %esp,%ebp
08555759 +0x003:  sub    $0x28,%esp
0855575c +0x006:  mov    0x8(%ebp),%eax
0855575f +0x009:  movl   $0x1d,0x8(%esp)
08555767 +0x011:  mov    0xc(%ebp),%edx
0855576a +0x014:  mov    %edx,0x4(%esp)
0855576e +0x018:  mov    %eax,(%esp)
08555771 +0x01b:  call   0807d8d0 <_init+0x1c8>
08555776 +0x020:  mov    0x8(%ebp),%eax
08555779 +0x023:  mov    0x1c(%ebp),%edx
0855577c +0x026:  mov    %edx,0x22(%eax)
0855577f +0x029:  mov    0x10(%ebp),%edx
08555782 +0x02c:  mov    0x8(%ebp),%eax
08555785 +0x02f:  mov    %edx,0x1e(%eax)
08555788 +0x032:  mov    0x8(%ebp),%eax
0855578b +0x035:  mov    0x18(%ebp),%edx
0855578e +0x038:  mov    %edx,0x26(%eax)
08555791 +0x03b:  mov    0x14(%ebp),%eax
08555794 +0x03e:  movzbl (%eax),%edx
08555797 +0x041:  mov    0x8(%ebp),%eax
0855579a +0x044:  mov    %dl,0x2a(%eax)
0855579d +0x047:  mov    0x14(%ebp),%eax
085557a0 +0x04a:  mov    0x2(%eax),%edx
085557a3 +0x04d:  mov    0x8(%ebp),%eax
085557a6 +0x050:  mov    %edx,0x2b(%eax)
085557a9 +0x053:  mov    0x14(%ebp),%eax
085557ac +0x056:  mov    0x7(%eax),%edx
085557af +0x059:  mov    0x8(%ebp),%eax
085557b2 +0x05c:  mov    %edx,0x2f(%eax)
085557b5 +0x05f:  mov    0x14(%ebp),%eax
085557b8 +0x062:  movzwl 0xb(%eax),%edx
085557bc +0x066:  mov    0x8(%ebp),%eax
085557bf +0x069:  mov    %dx,0x34(%eax)
085557c3 +0x06d:  mov    0x14(%ebp),%eax
085557c6 +0x070:  mov    %eax,(%esp)
085557c9 +0x073:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
085557ce +0x078:  mov    0x8(%ebp),%edx
085557d1 +0x07b:  mov    %al,0x33(%edx)
085557d4 +0x07e:  mov    0x14(%ebp),%eax
085557d7 +0x081:  mov    0xd(%eax),%edx
085557da +0x084:  mov    0x8(%ebp),%eax
085557dd +0x087:  mov    %edx,0x36(%eax)
085557e0 +0x08a:  mov    0x8(%ebp),%eax
085557e3 +0x08d:  mov    0x14(%ebp),%edx
085557e6 +0x090:  mov    0x15(%edx),%ecx
085557e9 +0x093:  mov    %ecx,0x3a(%eax)
085557ec +0x096:  mov    0x19(%edx),%ecx
085557ef +0x099:  mov    %ecx,0x3e(%eax)
085557f2 +0x09c:  movzwl 0x1d(%edx),%edx
085557f6 +0x0a0:  mov    %dx,0x42(%eax)
085557fa +0x0a4:  mov    0x8(%ebp),%eax
085557fd +0x0a7:  lea    0x45(%eax),%ecx
08555800 +0x0aa:  mov    0x8(%ebp),%eax
08555803 +0x0ad:  lea    0x44(%eax),%edx
08555806 +0x0b0:  mov    0x14(%ebp),%eax
08555809 +0x0b3:  add    $0x11,%eax
0855580c +0x0b6:  mov    %ecx,0x8(%esp)
08555810 +0x0ba:  mov    %edx,0x4(%esp)
08555814 +0x0be:  mov    %eax,(%esp)
08555817 +0x0c1:  call   0844d490 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xa6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xa6
0855581c +0x0c6:  mov    0x8(%ebp),%eax
0855581f +0x0c9:  mov    0x14(%ebp),%edx
08555822 +0x0cc:  mov    0x25(%edx),%ecx
08555825 +0x0cf:  mov    %ecx,0x47(%eax)
08555828 +0x0d2:  mov    0x29(%edx),%ecx
0855582b +0x0d5:  mov    %ecx,0x4b(%eax)
0855582e +0x0d8:  mov    0x2d(%edx),%ecx
08555831 +0x0db:  mov    %ecx,0x4f(%eax)
08555834 +0x0de:  movzwl 0x31(%edx),%edx
08555838 +0x0e2:  mov    %dx,0x53(%eax)
0855583c +0x0e6:  mov    0x14(%ebp),%eax
0855583f +0x0e9:  add    $0x33,%eax
08555842 +0x0ec:  mov    %eax,(%esp)
08555845 +0x0ef:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
0855584a +0x0f4:  mov    0x8(%ebp),%edx
0855584d +0x0f7:  mov    %al,0x55(%edx)
08555850 +0x0fa:  mov    0x14(%ebp),%eax
08555853 +0x0fd:  mov    %eax,(%esp)
08555856 +0x100:  call   08335b76 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x1c>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x1c
0855585b +0x105:  mov    0x8(%ebp),%edx
0855585e +0x108:  mov    %al,0x58(%edx)
08555861 +0x10b:  mov    0x14(%ebp),%eax
08555864 +0x10e:  movzbl 0x1(%eax),%eax
08555868 +0x112:  cmp    $0x8,%al
0855586a +0x114:  sete   %dl
0855586d +0x117:  mov    0x8(%ebp),%eax
08555870 +0x11a:  mov    %dl,0x56(%eax)
08555873 +0x11d:  mov    0x8(%ebp),%eax
08555876 +0x120:  movw   $0x0,0x59(%eax)
0855587c +0x126:  mov    0x8(%ebp),%eax
0855587f +0x129:  add    $0x5b,%eax
08555882 +0x12c:  movl   $0x100,0x8(%esp)
0855588a +0x134:  movl   $0x0,0x4(%esp)
08555892 +0x13c:  mov    %eax,(%esp)
08555895 +0x13f:  call   0807dcc0 <_init+0x5b8>
0855589a +0x144:  cmpl   $0x0,0x20(%ebp)
0855589e +0x148:  je     085558f2 <+0x19c>
085558a0 +0x14a:  cmpl   $0x0,0x24(%ebp)
085558a4 +0x14e:  je     085558f2 <+0x19c>
085558a6 +0x150:  mov    0x24(%ebp),%eax
085558a9 +0x153:  mov    %ax,-0xc(%ebp)
085558ad +0x157:  movw   $0xff,-0xa(%ebp)
085558b3 +0x15d:  lea    -0xc(%ebp),%eax
085558b6 +0x160:  mov    %eax,0x4(%esp)
085558ba +0x164:  lea    -0xa(%ebp),%eax
085558bd +0x167:  mov    %eax,(%esp)
085558c0 +0x16a:  call   0828716d <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0xab>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0xab
085558c5 +0x16f:  movzwl (%eax),%edx
085558c8 +0x172:  mov    0x8(%ebp),%eax
085558cb +0x175:  mov    %dx,0x59(%eax)
085558cf +0x179:  mov    0x8(%ebp),%eax
085558d2 +0x17c:  movzwl 0x59(%eax),%eax
085558d6 +0x180:  movzwl %ax,%eax
085558d9 +0x183:  mov    0x8(%ebp),%edx
085558dc +0x186:  add    $0x5b,%edx
085558df +0x189:  mov    %eax,0x8(%esp)
085558e3 +0x18d:  mov    0x20(%ebp),%eax
085558e6 +0x190:  mov    %eax,0x4(%esp)
085558ea +0x194:  mov    %edx,(%esp)
085558ed +0x197:  call   0807d8d0 <_init+0x1c8>
085558f2 +0x19c:  mov    0x8(%ebp),%eax
085558f5 +0x19f:  mov    0x28(%ebp),%edx
085558f8 +0x1a2:  mov    %edx,0x15b(%eax)
085558fe +0x1a8:  mov    0x8(%ebp),%eax
08555901 +0x1ab:  mov    0x2c(%ebp),%edx
08555904 +0x1ae:  mov    %edx,0x163(%eax)
0855590a +0x1b4:  mov    0x8(%ebp),%eax
0855590d +0x1b7:  movb   $0x0,0x167(%eax)
08555914 +0x1be:  leave
08555915 +0x1bf:  ret
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::_makeSendMailData @ 0x8555756

/* WongWork::CMailBoxHelper::_makeSendMailData(SIG_MAILBOX_SEND_NEW_MAIL*, char const*, int,
   Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, int) */

void WongWork::CMailBoxHelper::_makeSendMailData
               (SIG_MAILBOX_SEND_NEW_MAIL *param_1,char *param_2,int param_3,Inven_Item *param_4,
               uint param_5,uint param_6,char *param_7,int param_8,uint param_9,int param_10)

{
  SIG_MAILBOX_SEND_NEW_MAIL SVar1;
  ushort *puVar2;
  ushort local_10 [6];
  
  strncpy((char *)param_1,param_2,0x1d);
  *(uint *)(param_1 + 0x22) = param_6;
  *(int *)(param_1 + 0x1e) = param_3;
  *(uint *)(param_1 + 0x26) = param_5;
  param_1[0x2a] = *(SIG_MAILBOX_SEND_NEW_MAIL *)param_4;
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_4 + 2);
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_4 + 7);
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_4 + 0xb);
  SVar1 = (SIG_MAILBOX_SEND_NEW_MAIL)Inven_Item::GetItemAttr(param_4);
  param_1[0x33] = SVar1;
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_4 + 0xd);
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_4 + 0x15);
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_4 + 0x19);
  *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(param_4 + 0x1d);
  stAmplifyOption_t::getValues
            ((stAmplifyOption_t *)(param_4 + 0x11),(uchar *)(param_1 + 0x44),
             (ushort *)(param_1 + 0x45));
  *(undefined4 *)(param_1 + 0x47) = *(undefined4 *)(param_4 + 0x25);
  *(undefined4 *)(param_1 + 0x4b) = *(undefined4 *)(param_4 + 0x29);
  *(undefined4 *)(param_1 + 0x4f) = *(undefined4 *)(param_4 + 0x2d);
  *(undefined2 *)(param_1 + 0x53) = *(undefined2 *)(param_4 + 0x31);
  SVar1 = (SIG_MAILBOX_SEND_NEW_MAIL)
          UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(param_4 + 0x33));
  param_1[0x55] = SVar1;
  SVar1 = (SIG_MAILBOX_SEND_NEW_MAIL)Inven_Item::IsCreatureItemType(param_4);
  param_1[0x58] = SVar1;
  param_1[0x56] = (SIG_MAILBOX_SEND_NEW_MAIL)(param_4[1] == (Inven_Item)0x8);
  *(undefined2 *)(param_1 + 0x59) = 0;
  memset(param_1 + 0x5b,0,0x100);
  if ((param_7 != (char *)0x0) && (param_8 != 0)) {
    local_10[0] = (ushort)param_8;
    local_10[1] = 0xff;
    puVar2 = std::min<unsigned_short>(local_10 + 1,local_10);
    *(ushort *)(param_1 + 0x59) = *puVar2;
    strncpy((char *)(param_1 + 0x5b),param_7,(uint)*(ushort *)(param_1 + 0x59));
  }
  *(uint *)(param_1 + 0x15b) = param_9;
  *(int *)(param_1 + 0x163) = param_10;
  param_1[0x167] = (SIG_MAILBOX_SEND_NEW_MAIL)0x0;
  return;
}
```
