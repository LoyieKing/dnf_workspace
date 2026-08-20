# dispatch_sig

`_ZN26Inter_Antibot_PunishClient12dispatch_sigEP5CUserPci`

`Inter_Antibot_PunishClient::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_Antibot_PunishClient` | `0x084e4774` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e4774  _ZN26Inter_Antibot_PunishClient12dispatch_sigEP5CUserPci
#           Inter_Antibot_PunishClient::dispatch_sig(CUser*, char*, int)
# range [0x084e4774, 0x084e48c1]
084e4774 +0x000:  push   %ebp
084e4775 +0x001:  mov    %esp,%ebp
084e4777 +0x003:  push   %esi
084e4778 +0x004:  push   %ebx
084e4779 +0x005:  sub    $0x40,%esp
084e477c +0x008:  mov    0x10(%ebp),%eax
084e477f +0x00b:  mov    %eax,-0x10(%ebp)
084e4782 +0x00e:  mov    -0x10(%ebp),%eax
084e4785 +0x011:  mov    (%eax),%eax
084e4787 +0x013:  mov    %eax,(%esp)
084e478a +0x016:  call   084bb9cf <_Z7getUserj>  ; getUser(unsigned int)
084e478f +0x01b:  mov    %eax,-0xc(%ebp)
084e4792 +0x01e:  mov    -0x10(%ebp),%eax
084e4795 +0x021:  movzbl 0x4(%eax),%eax
084e4799 +0x025:  movzbl %al,%esi
084e479c +0x028:  mov    -0x10(%ebp),%eax
084e479f +0x02b:  mov    (%eax),%eax
084e47a1 +0x02d:  movl   $0x0,0x4(%esp)
084e47a9 +0x035:  mov    %eax,(%esp)
084e47ac +0x038:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084e47b1 +0x03d:  mov    %eax,%ebx
084e47b3 +0x03f:  movl   $0x0,0xc(%esp)
084e47bb +0x047:  movl   $0x5eb3,0x8(%esp)
084e47c3 +0x04f:  movl   $&_ZZN26Inter_Antibot_PunishClient12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e47cb +0x057:  lea    -0x20(%ebp),%eax
084e47ce +0x05a:  mov    %eax,(%esp)
084e47d1 +0x05d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e47d6 +0x062:  mov    -0xc(%ebp),%eax
084e47d9 +0x065:  mov    %eax,0x10(%esp)
084e47dd +0x069:  mov    %esi,0xc(%esp)
084e47e1 +0x06d:  mov    %ebx,0x8(%esp)
084e47e5 +0x071:  movl   $"requested uid(%s), punish_mode(%d), user(%x)",0x4(%esp)
084e47ed +0x079:  lea    -0x20(%ebp),%eax
084e47f0 +0x07c:  mov    %eax,(%esp)
084e47f3 +0x07f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e47f8 +0x084:  mov    -0x10(%ebp),%eax
084e47fb +0x087:  movzbl 0x4(%eax),%eax
084e47ff +0x08b:  movzbl %al,%eax
084e4802 +0x08e:  cmp    $0x2,%eax
084e4805 +0x091:  je     084e4814 <+0xa0>
084e4807 +0x093:  cmp    $0x3,%eax
084e480a +0x096:  je     084e485e <+0xea>
084e480c +0x098:  cmp    $0x1,%eax
084e480f +0x09b:  jmp    084e48b6 <+0x142>
084e4814 +0x0a0:  cmpl   $0x0,-0xc(%ebp)
084e4818 +0x0a4:  je     084e4829 <+0xb5>
084e481a +0x0a6:  mov    -0xc(%ebp),%eax
084e481d +0x0a9:  mov    %eax,(%esp)
084e4820 +0x0ac:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e4825 +0x0b1:  test   %eax,%eax
084e4827 +0x0b3:  jne    084e4830 <+0xbc>
084e4829 +0x0b5:  mov    $0x1,%eax
084e482e +0x0ba:  jmp    084e4835 <+0xc1>
084e4830 +0x0bc:  mov    $0x0,%eax
084e4835 +0x0c1:  test   %al,%al
084e4837 +0x0c3:  jne    084e48b2 <+0x13e>
084e4839 +0x0c5:  movl   $0x0,0xc(%esp)
084e4841 +0x0cd:  movl   $0x1,0x8(%esp)
084e4849 +0x0d5:  movl   $0x23,0x4(%esp)
084e4851 +0x0dd:  mov    -0xc(%ebp),%eax
084e4854 +0x0e0:  mov    %eax,(%esp)
084e4857 +0x0e3:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084e485c +0x0e8:  jmp    084e48b6 <+0x142>
084e485e +0x0ea:  cmpl   $0x0,-0xc(%ebp)
084e4862 +0x0ee:  je     084e4873 <+0xff>
084e4864 +0x0f0:  mov    -0xc(%ebp),%eax
084e4867 +0x0f3:  mov    %eax,(%esp)
084e486a +0x0f6:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e486f +0x0fb:  test   %eax,%eax
084e4871 +0x0fd:  jne    084e487a <+0x106>
084e4873 +0x0ff:  mov    $0x1,%eax
084e4878 +0x104:  jmp    084e487f <+0x10b>
084e487a +0x106:  mov    $0x0,%eax
084e487f +0x10b:  test   %al,%al
084e4881 +0x10d:  jne    084e48b5 <+0x141>
084e4883 +0x10f:  mov    -0x10(%ebp),%eax
084e4886 +0x112:  mov    0xc(%eax),%eax
084e4889 +0x115:  test   %eax,%eax
084e488b +0x117:  jle    084e48b6 <+0x142>
084e488d +0x119:  movl   $0x0,0xc(%esp)
084e4895 +0x121:  movl   $0x1,0x8(%esp)
084e489d +0x129:  movl   $0x23,0x4(%esp)
084e48a5 +0x131:  mov    -0xc(%ebp),%eax
084e48a8 +0x134:  mov    %eax,(%esp)
084e48ab +0x137:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084e48b0 +0x13c:  jmp    084e48b6 <+0x142>
084e48b2 +0x13e:  nop
084e48b3 +0x13f:  jmp    084e48b6 <+0x142>
084e48b5 +0x141:  nop
084e48b6 +0x142:  mov    $0x0,%eax
084e48bb +0x147:  add    $0x40,%esp
084e48be +0x14a:  pop    %ebx
084e48bf +0x14b:  pop    %esi
084e48c0 +0x14c:  pop    %ebp
084e48c1 +0x14d:  ret
```

## 反编译 C

```c
// Inter_Antibot_PunishClient::dispatch_sig @ 0x84e4774

/* Inter_Antibot_PunishClient::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Antibot_PunishClient::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  cMyTrace local_24 [16];
  uint *local_14;
  CUser *local_10;
  
  local_14 = (uint *)param_3;
  local_10 = (CUser *)getUser(*(uint *)param_3);
  uVar2 = local_14[1];
  uVar3 = NumberToString(*local_14,0);
  cMyTrace::cMyTrace(local_24,
                     "virtual int Inter_Antibot_PunishClient::dispatch_sig(CUser*, char*, int)",
                     0x5eb3,0);
  cMyTrace::operator()
            (local_24,"requested uid(%s), punish_mode(%d), user(%x)",uVar3,(uint)(byte)uVar2,
             local_10);
  if ((char)local_14[1] == '\x02') {
    if ((local_10 == (CUser *)0x0) || (iVar4 = CUser::get_state(local_10), iVar4 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      CUser::DisConnSig(local_10,0x23,1,0);
    }
  }
  else if ((char)local_14[1] == '\x03') {
    if ((local_10 == (CUser *)0x0) || (iVar4 = CUser::get_state(local_10), iVar4 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((!bVar1) && (0 < (int)local_14[3])) {
      CUser::DisConnSig(local_10,0x23,1,0);
    }
  }
  return 0;
}
```
