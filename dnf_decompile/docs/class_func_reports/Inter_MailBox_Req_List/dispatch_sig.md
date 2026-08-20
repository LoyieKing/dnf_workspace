# dispatch_sig

`_ZN22Inter_MailBox_Req_List12dispatch_sigEP5CUserPci`

`Inter_MailBox_Req_List::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MailBox_Req_List` | `0x084cf7fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cf7fa  _ZN22Inter_MailBox_Req_List12dispatch_sigEP5CUserPci
#           Inter_MailBox_Req_List::dispatch_sig(CUser*, char*, int)
# range [0x084cf7fa, 0x084cf959]
084cf7fa +0x000:  push   %ebp
084cf7fb +0x001:  mov    %esp,%ebp
084cf7fd +0x003:  push   %edi
084cf7fe +0x004:  push   %esi
084cf7ff +0x005:  push   %ebx
084cf800 +0x006:  sub    $0x5c,%esp
084cf803 +0x009:  mov    0xc(%ebp),%eax
084cf806 +0x00c:  mov    %eax,(%esp)
084cf809 +0x00f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cf80e +0x014:  cmp    $0x1,%eax
084cf811 +0x017:  jle    084cf822 <+0x28>
084cf813 +0x019:  mov    0xc(%ebp),%eax
084cf816 +0x01c:  mov    %eax,(%esp)
084cf819 +0x01f:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084cf81e +0x024:  test   %eax,%eax
084cf820 +0x026:  jne    084cf829 <+0x2f>
084cf822 +0x028:  mov    $0x1,%eax
084cf827 +0x02d:  jmp    084cf82e <+0x34>
084cf829 +0x02f:  mov    $0x0,%eax
084cf82e +0x034:  test   %al,%al
084cf830 +0x036:  je     084cf83c <+0x42>
084cf832 +0x038:  mov    $0x0,%eax
084cf837 +0x03d:  jmp    084cf952 <+0x158>
084cf83c +0x042:  mov    0x10(%ebp),%eax
084cf83f +0x045:  mov    %eax,-0x20(%ebp)
084cf842 +0x048:  mov    -0x20(%ebp),%eax
084cf845 +0x04b:  mov    0x3332(%eax),%ebx
084cf84b +0x051:  mov    0xc(%ebp),%eax
084cf84e +0x054:  mov    %eax,(%esp)
084cf851 +0x057:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084cf856 +0x05c:  cmp    %eax,%ebx
084cf858 +0x05e:  setne  %al
084cf85b +0x061:  test   %al,%al
084cf85d +0x063:  je     084cf869 <+0x6f>
084cf85f +0x065:  mov    $0x2ca0,%eax
084cf864 +0x06a:  jmp    084cf952 <+0x158>
084cf869 +0x06f:  mov    0xc(%ebp),%eax
084cf86c +0x072:  mov    %eax,(%esp)
084cf86f +0x075:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
084cf874 +0x07a:  mov    %eax,-0x1c(%ebp)
084cf877 +0x07d:  cmpl   $0x0,-0x1c(%ebp)
084cf87b +0x081:  jne    084cf887 <+0x8d>
084cf87d +0x083:  mov    $0x2ca4,%eax
084cf882 +0x088:  jmp    084cf952 <+0x158>
084cf887 +0x08d:  mov    -0x20(%ebp),%eax
084cf88a +0x090:  mov    0x3336(%eax),%ebx
084cf890 +0x096:  mov    -0x1c(%ebp),%eax
084cf893 +0x099:  mov    %eax,(%esp)
084cf896 +0x09c:  call   084ed216 <_GLOBAL__I__Z7getUserj+0x41c8>  ; global constructors keyed to getUser(unsigned int)+0x41c8
084cf89b +0x0a1:  cmp    %eax,%ebx
084cf89d +0x0a3:  setne  %al
084cf8a0 +0x0a6:  test   %al,%al
084cf8a2 +0x0a8:  je     084cf93b <+0x141>
084cf8a8 +0x0ae:  mov    -0x20(%ebp),%eax
084cf8ab +0x0b1:  mov    0x3336(%eax),%eax
084cf8b1 +0x0b7:  mov    %eax,-0x3c(%ebp)
084cf8b4 +0x0ba:  mov    -0x1c(%ebp),%eax
084cf8b7 +0x0bd:  mov    %eax,(%esp)
084cf8ba +0x0c0:  call   084ed216 <_GLOBAL__I__Z7getUserj+0x41c8>  ; global constructors keyed to getUser(unsigned int)+0x41c8
084cf8bf +0x0c5:  mov    %eax,%edi
084cf8c1 +0x0c7:  mov    0xc(%ebp),%eax
084cf8c4 +0x0ca:  mov    %eax,(%esp)
084cf8c7 +0x0cd:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084cf8cc +0x0d2:  mov    %eax,%esi
084cf8ce +0x0d4:  mov    0xc(%ebp),%eax
084cf8d1 +0x0d7:  mov    %eax,(%esp)
084cf8d4 +0x0da:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084cf8d9 +0x0df:  movl   $0x0,0x4(%esp)
084cf8e1 +0x0e7:  mov    %eax,(%esp)
084cf8e4 +0x0ea:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084cf8e9 +0x0ef:  mov    %eax,%ebx
084cf8eb +0x0f1:  movl   $0x5,0xc(%esp)
084cf8f3 +0x0f9:  movl   $0x2ca9,0x8(%esp)
084cf8fb +0x101:  movl   $&_ZZN22Inter_MailBox_Req_List12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084cf903 +0x109:  lea    -0x30(%ebp),%eax
084cf906 +0x10c:  mov    %eax,(%esp)
084cf909 +0x10f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084cf90e +0x114:  mov    -0x3c(%ebp),%eax
084cf911 +0x117:  mov    %eax,0x14(%esp)
084cf915 +0x11b:  mov    %edi,0x10(%esp)
084cf919 +0x11f:  mov    %esi,0xc(%esp)
084cf91d +0x123:  mov    %ebx,0x8(%esp)
084cf921 +0x127:  movl   $"Postal loaded twice. %s(%d)(%d->%d)",0x4(%esp)
084cf929 +0x12f:  lea    -0x30(%ebp),%eax
084cf92c +0x132:  mov    %eax,(%esp)
084cf92f +0x135:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084cf934 +0x13a:  mov    $0x2caa,%eax
084cf939 +0x13f:  jmp    084cf952 <+0x158>
084cf93b +0x141:  mov    -0x20(%ebp),%eax
084cf93e +0x144:  mov    %eax,0x4(%esp)
084cf942 +0x148:  mov    0xc(%ebp),%eax
084cf945 +0x14b:  mov    %eax,(%esp)
084cf948 +0x14e:  call   085525a6 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST>  ; WongWork::CMailBoxHelper::SetMailBoxInfo(CUser*, SIG_MAILBOX_LIST const*)
084cf94d +0x153:  mov    $0x0,%eax
084cf952 +0x158:  add    $0x5c,%esp
084cf955 +0x15b:  pop    %ebx
084cf956 +0x15c:  pop    %esi
084cf957 +0x15d:  pop    %edi
084cf958 +0x15e:  pop    %ebp
084cf959 +0x15f:  ret
```

## 反编译 C

```c
// Inter_MailBox_Req_List::dispatch_sig @ 0x84cf7fa

/* Inter_MailBox_Req_List::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MailBox_Req_List::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  cMyTrace local_34 [16];
  SIG_MAILBOX_LIST *local_24;
  CMailBox *local_20;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (1 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_084cf82e;
    }
  }
  bVar1 = true;
LAB_084cf82e:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    local_24 = (SIG_MAILBOX_LIST *)param_3;
    iVar2 = *(int *)(param_3 + 0x3332);
    iVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    if (iVar2 == iVar4) {
      local_20 = (CMailBox *)CUser::GetMailBox((CUser *)param_2);
      if (local_20 == (CMailBox *)0x0) {
        uVar3 = 0x2ca4;
      }
      else {
        iVar2 = *(int *)(local_24 + 0x3336);
        iVar4 = WongWork::CMailBox::getMailLoadCount(local_20);
        if (iVar2 == iVar4) {
          WongWork::CMailBoxHelper::SetMailBoxInfo((CUser *)param_2,local_24);
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(local_24 + 0x3336);
          uVar5 = WongWork::CMailBox::getMailLoadCount(local_20);
          uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          uVar7 = CUser::get_acc_id((CUser *)param_2);
          uVar8 = NumberToString(uVar7,0);
          cMyTrace::cMyTrace(local_34,
                             "virtual int Inter_MailBox_Req_List::dispatch_sig(CUser*, char*, int)",
                             0x2ca9,5);
          cMyTrace::operator()
                    (local_34,"Postal loaded twice. %s(%d)(%d->%d)",uVar8,uVar6,uVar5,uVar3);
          uVar3 = 0x2caa;
        }
      }
    }
    else {
      uVar3 = 0x2ca0;
    }
  }
  return uVar3;
}
```
