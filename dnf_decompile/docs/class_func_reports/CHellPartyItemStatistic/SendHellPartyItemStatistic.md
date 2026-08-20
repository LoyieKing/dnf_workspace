# SendHellPartyItemStatistic

`_ZN23CHellPartyItemStatistic26SendHellPartyItemStatisticEbiiicPi`

`CHellPartyItemStatistic::SendHellPartyItemStatistic(bool, int, int, int, char, int*)`

| 类 | 地址 |
|---|---|
| `CHellPartyItemStatistic` | `0x0860fcc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860fcc0  _ZN23CHellPartyItemStatistic26SendHellPartyItemStatisticEbiiicPi
#           CHellPartyItemStatistic::SendHellPartyItemStatistic(bool, int, int, int, char, int*)
# range [0x0860fcc0, 0x0860fd6e]
0860fcc0 +0x00:  push   %ebp
0860fcc1 +0x01:  mov    %esp,%ebp
0860fcc3 +0x03:  push   %ebx
0860fcc4 +0x04:  sub    $0x54,%esp
0860fcc7 +0x07:  mov    0xc(%ebp),%edx
0860fcca +0x0a:  mov    0x1c(%ebp),%eax
0860fccd +0x0d:  mov    %dl,-0x3c(%ebp)
0860fcd0 +0x10:  mov    %al,-0x40(%ebp)
0860fcd3 +0x13:  cmpl   $0x4,0x14(%ebp)
0860fcd7 +0x17:  jle    0860fce3 <+0x23>
0860fcd9 +0x19:  mov    $0x0,%eax
0860fcde +0x1e:  jmp    0860fd69 <+0xa9>
0860fce3 +0x23:  cmpb   $0x0,-0x40(%ebp)
0860fce7 +0x27:  jne    0860fcf0 <+0x30>
0860fce9 +0x29:  mov    $0x0,%eax
0860fcee +0x2e:  jmp    0860fd69 <+0xa9>
0860fcf0 +0x30:  lea    -0x32(%ebp),%eax
0860fcf3 +0x33:  mov    %eax,(%esp)
0860fcf6 +0x36:  call   0860ff9e <_GLOBAL__I__ZN10StatisticsC2Ev+0x1c>  ; global constructors keyed to Statistics::Statistics()+0x1c
0860fcfb +0x3b:  movzbl -0x3c(%ebp),%eax
0860fcff +0x3f:  mov    %al,-0x28(%ebp)
0860fd02 +0x42:  mov    0x10(%ebp),%eax
0860fd05 +0x45:  mov    %eax,-0x27(%ebp)
0860fd08 +0x48:  mov    0x14(%ebp),%eax
0860fd0b +0x4b:  mov    %al,-0x23(%ebp)
0860fd0e +0x4e:  mov    0x18(%ebp),%eax
0860fd11 +0x51:  mov    %al,-0x22(%ebp)
0860fd14 +0x54:  movzbl -0x40(%ebp),%eax
0860fd18 +0x58:  mov    %al,-0x21(%ebp)
0860fd1b +0x5b:  movl   $0x18,0x8(%esp)
0860fd23 +0x63:  mov    0x20(%ebp),%eax
0860fd26 +0x66:  mov    %eax,0x4(%esp)
0860fd2a +0x6a:  lea    -0x32(%ebp),%eax
0860fd2d +0x6d:  add    $0x12,%eax
0860fd30 +0x70:  mov    %eax,(%esp)
0860fd33 +0x73:  call   0807d8a0 <_init+0x198>
0860fd38 +0x78:  lea    -0x32(%ebp),%ebx
0860fd3b +0x7b:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
0860fd40 +0x80:  movl   $0x0,0x4(%esp)
0860fd48 +0x88:  mov    %eax,(%esp)
0860fd4b +0x8b:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0860fd50 +0x90:  movl   $0x2a,0x8(%esp)
0860fd58 +0x98:  mov    %ebx,0x4(%esp)
0860fd5c +0x9c:  mov    %eax,(%esp)
0860fd5f +0x9f:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0860fd64 +0xa4:  mov    $0x1,%eax
0860fd69 +0xa9:  add    $0x54,%esp
0860fd6c +0xac:  pop    %ebx
0860fd6d +0xad:  pop    %ebp
0860fd6e +0xae:  ret
```

## 反编译 C

```c
// CHellPartyItemStatistic::SendHellPartyItemStatistic @ 0x860fcc0

/* CHellPartyItemStatistic::SendHellPartyItemStatistic(bool, int, int, int, char, int*) */

undefined4 __thiscall
CHellPartyItemStatistic::SendHellPartyItemStatistic
          (CHellPartyItemStatistic *this,bool param_1,int param_2,int param_3,int param_4,
          char param_5,int *param_6)

{
  undefined4 uVar1;
  CStatisticServerProxy *this_00;
  Packet_HellParty_Statistic_Item local_36 [10];
  undefined1 local_2c;
  int local_2b;
  undefined1 local_27;
  undefined1 local_26;
  char local_25;
  undefined1 auStack_24 [28];
  
  if (param_3 < 5) {
    if (param_5 == '\0') {
      uVar1 = 0;
    }
    else {
      Packet_HellParty_Statistic_Item::Packet_HellParty_Statistic_Item(local_36);
      local_2b = param_2;
      local_27 = (undefined1)param_3;
      local_26 = (undefined1)param_4;
      local_2c = param_1;
      local_25 = param_5;
      memcpy(auStack_24,param_6,0x18);
      this_00 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,0);
      CStatisticServerProxy::SendPacket(this_00,(char *)local_36,0x2a);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
