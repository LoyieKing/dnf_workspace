# sendSecuRewardItem

`_ZN5CUser18sendSecuRewardItemEP10Inven_Item25ENUM_SECURITY_REWARD_TYPEPi`

`CUser::sendSecuRewardItem(Inven_Item*, ENUM_SECURITY_REWARD_TYPE, int*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868833c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868833c  _ZN5CUser18sendSecuRewardItemEP10Inven_Item25ENUM_SECURITY_REWARD_TYPEPi
#           CUser::sendSecuRewardItem(Inven_Item*, ENUM_SECURITY_REWARD_TYPE, int*)
# range [0x0868833c, 0x0868856b]
0868833c +0x000:  push   %ebp
0868833d +0x001:  mov    %esp,%ebp
0868833f +0x003:  push   %esi
08688340 +0x004:  push   %ebx
08688341 +0x005:  sub    $0x1b0,%esp
08688347 +0x00b:  mov    0xc(%ebp),%eax
0868834a +0x00e:  mov    (%eax),%edx
0868834c +0x010:  mov    %edx,-0x5f(%ebp)
0868834f +0x013:  mov    0x4(%eax),%edx
08688352 +0x016:  mov    %edx,-0x5b(%ebp)
08688355 +0x019:  mov    0x8(%eax),%edx
08688358 +0x01c:  mov    %edx,-0x57(%ebp)
0868835b +0x01f:  mov    0xc(%eax),%edx
0868835e +0x022:  mov    %edx,-0x53(%ebp)
08688361 +0x025:  mov    0x10(%eax),%edx
08688364 +0x028:  mov    %edx,-0x4f(%ebp)
08688367 +0x02b:  mov    0x14(%eax),%edx
0868836a +0x02e:  mov    %edx,-0x4b(%ebp)
0868836d +0x031:  mov    0x18(%eax),%edx
08688370 +0x034:  mov    %edx,-0x47(%ebp)
08688373 +0x037:  mov    0x1c(%eax),%edx
08688376 +0x03a:  mov    %edx,-0x43(%ebp)
08688379 +0x03d:  mov    0x20(%eax),%edx
0868837c +0x040:  mov    %edx,-0x3f(%ebp)
0868837f +0x043:  mov    0x24(%eax),%edx
08688382 +0x046:  mov    %edx,-0x3b(%ebp)
08688385 +0x049:  mov    0x28(%eax),%edx
08688388 +0x04c:  mov    %edx,-0x37(%ebp)
0868838b +0x04f:  mov    0x2c(%eax),%edx
0868838e +0x052:  mov    %edx,-0x33(%ebp)
08688391 +0x055:  mov    0x30(%eax),%edx
08688394 +0x058:  mov    %edx,-0x2f(%ebp)
08688397 +0x05b:  mov    0x34(%eax),%edx
0868839a +0x05e:  mov    %edx,-0x2b(%ebp)
0868839d +0x061:  mov    0x38(%eax),%edx
086883a0 +0x064:  mov    %edx,-0x27(%ebp)
086883a3 +0x067:  movzbl 0x3c(%eax),%eax
086883a7 +0x06b:  mov    %al,-0x23(%ebp)
086883aa +0x06e:  cmpl   $0x0,0xc(%ebp)
086883ae +0x072:  jne    086883ba <+0x7e>
086883b0 +0x074:  mov    $0x0,%eax
086883b5 +0x079:  jmp    08688562 <+0x226>
086883ba +0x07e:  movb   $0x0,-0xd(%ebp)
086883be +0x082:  movl   $0xffffffff,-0xc(%ebp)
086883c5 +0x089:  mov    0x8(%ebp),%eax
086883c8 +0x08c:  mov    %eax,(%esp)
086883cb +0x08f:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
086883d0 +0x094:  test   %al,%al
086883d2 +0x096:  je     086883dd <+0xa1>
086883d4 +0x098:  movb   $0x1,-0xd(%ebp)
086883d8 +0x09c:  jmp    08688486 <+0x14a>
086883dd +0x0a1:  mov    0x8(%ebp),%eax
086883e0 +0x0a4:  mov    %eax,(%esp)
086883e3 +0x0a7:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086883e8 +0x0ac:  movl   $0x1,0x4c(%esp)
086883f0 +0x0b4:  movl   $0x1,0x48(%esp)
086883f8 +0x0bc:  movl   $0xd,0x44(%esp)
08688400 +0x0c4:  mov    -0x5f(%ebp),%edx
08688403 +0x0c7:  mov    %edx,0x4(%esp)
08688407 +0x0cb:  mov    -0x5b(%ebp),%edx
0868840a +0x0ce:  mov    %edx,0x8(%esp)
0868840e +0x0d2:  mov    -0x57(%ebp),%edx
08688411 +0x0d5:  mov    %edx,0xc(%esp)
08688415 +0x0d9:  mov    -0x53(%ebp),%edx
08688418 +0x0dc:  mov    %edx,0x10(%esp)
0868841c +0x0e0:  mov    -0x4f(%ebp),%edx
0868841f +0x0e3:  mov    %edx,0x14(%esp)
08688423 +0x0e7:  mov    -0x4b(%ebp),%edx
08688426 +0x0ea:  mov    %edx,0x18(%esp)
0868842a +0x0ee:  mov    -0x47(%ebp),%edx
0868842d +0x0f1:  mov    %edx,0x1c(%esp)
08688431 +0x0f5:  mov    -0x43(%ebp),%edx
08688434 +0x0f8:  mov    %edx,0x20(%esp)
08688438 +0x0fc:  mov    -0x3f(%ebp),%edx
0868843b +0x0ff:  mov    %edx,0x24(%esp)
0868843f +0x103:  mov    -0x3b(%ebp),%edx
08688442 +0x106:  mov    %edx,0x28(%esp)
08688446 +0x10a:  mov    -0x37(%ebp),%edx
08688449 +0x10d:  mov    %edx,0x2c(%esp)
0868844d +0x111:  mov    -0x33(%ebp),%edx
08688450 +0x114:  mov    %edx,0x30(%esp)
08688454 +0x118:  mov    -0x2f(%ebp),%edx
08688457 +0x11b:  mov    %edx,0x34(%esp)
0868845b +0x11f:  mov    -0x2b(%ebp),%edx
0868845e +0x122:  mov    %edx,0x38(%esp)
08688462 +0x126:  mov    -0x27(%ebp),%edx
08688465 +0x129:  mov    %edx,0x3c(%esp)
08688469 +0x12d:  movzbl -0x23(%ebp),%edx
0868846d +0x131:  mov    %dl,0x40(%esp)
08688471 +0x135:  mov    %eax,(%esp)
08688474 +0x138:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08688479 +0x13d:  mov    %eax,-0xc(%ebp)
0868847c +0x140:  cmpl   $0xffffffff,-0xc(%ebp)
08688480 +0x144:  jne    08688486 <+0x14a>
08688482 +0x146:  movb   $0x1,-0xd(%ebp)
08688486 +0x14a:  cmpb   $0x0,-0xd(%ebp)
0868848a +0x14e:  je     0868854f <+0x213>
08688490 +0x154:  movl   $0x14,0x8(%esp)
08688498 +0x15c:  movl   $"고블린의 선물",0x4(%esp)
086884a0 +0x164:  lea    -0x22(%ebp),%eax
086884a3 +0x167:  mov    %eax,(%esp)
086884a6 +0x16a:  call   0807d8d0 <_init+0x1c8>
086884ab +0x16f:  movl   $0xff,0x8(%esp)
086884b3 +0x177:  movl   $"고블린의 선물이 우편으로 도착하였습니다.",0x4(%esp)
086884bb +0x17f:  lea    -0x15f(%ebp),%eax
086884c1 +0x185:  mov    %eax,(%esp)
086884c4 +0x188:  call   0807d8d0 <_init+0x1c8>
086884c9 +0x18d:  mov    0x8(%ebp),%eax
086884cc +0x190:  mov    %eax,(%esp)
086884cf +0x193:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086884d4 +0x198:  mov    %eax,%ebx
086884d6 +0x19a:  lea    -0x15f(%ebp),%eax
086884dc +0x1a0:  mov    %eax,(%esp)
086884df +0x1a3:  call   0807e3b0 <_init+0xca8>
086884e4 +0x1a8:  mov    %eax,%esi
086884e6 +0x1aa:  mov    0x8(%ebp),%eax
086884e9 +0x1ad:  mov    %eax,(%esp)
086884ec +0x1b0:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086884f1 +0x1b5:  movl   $0x0,0x24(%esp)
086884f9 +0x1bd:  movl   $0x0,0x20(%esp)
08688501 +0x1c5:  mov    %ebx,0x1c(%esp)
08688505 +0x1c9:  movl   $0x0,0x18(%esp)
0868850d +0x1d1:  mov    %esi,0x14(%esp)
08688511 +0x1d5:  lea    -0x15f(%ebp),%edx
08688517 +0x1db:  mov    %edx,0x10(%esp)
0868851b +0x1df:  mov    %eax,0xc(%esp)
0868851f +0x1e3:  movl   $0x0,0x8(%esp)
08688527 +0x1eb:  lea    -0x5f(%ebp),%eax
0868852a +0x1ee:  mov    %eax,0x4(%esp)
0868852e +0x1f2:  lea    -0x22(%ebp),%eax
08688531 +0x1f5:  mov    %eax,(%esp)
08688534 +0x1f8:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08688539 +0x1fd:  mov    0x10(%ebp),%eax
0868853c +0x200:  shl    $0x2,%eax
0868853f +0x203:  add    0x14(%ebp),%eax
08688542 +0x206:  movl   $0xffffffff,(%eax)
08688548 +0x20c:  mov    $0x0,%eax
0868854d +0x211:  jmp    08688562 <+0x226>
0868854f +0x213:  mov    0x10(%ebp),%eax
08688552 +0x216:  shl    $0x2,%eax
08688555 +0x219:  add    0x14(%ebp),%eax
08688558 +0x21c:  mov    -0xc(%ebp),%edx
0868855b +0x21f:  mov    %edx,(%eax)
0868855d +0x221:  mov    $0x1,%eax
08688562 +0x226:  add    $0x1b0,%esp
08688568 +0x22c:  pop    %ebx
08688569 +0x22d:  pop    %esi
0868856a +0x22e:  pop    %ebp
0868856b +0x22f:  ret
```

## 反编译 C

```c
// CUser::sendSecuRewardItem @ 0x868833c

/* CUser::sendSecuRewardItem(Inven_Item*, ENUM_SECURITY_REWARD_TYPE, int*) */

undefined4 __thiscall
CUser::sendSecuRewardItem(CUser *this,undefined4 *param_1,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined4 uVar4;
  char local_163 [256];
  undefined4 local_63;
  undefined4 local_5f;
  undefined4 local_5b;
  undefined4 local_57;
  undefined4 local_53;
  undefined4 local_4f;
  undefined4 local_4b;
  undefined4 local_47;
  undefined4 local_43;
  undefined4 local_3f;
  undefined4 local_3b;
  undefined4 local_37;
  undefined4 local_33;
  undefined4 local_2f;
  undefined4 local_2b;
  undefined1 local_27;
  char local_26 [21];
  char local_11;
  int local_10;
  
  local_63 = *param_1;
  local_5f = param_1[1];
  local_5b = param_1[2];
  local_57 = param_1[3];
  local_53 = param_1[4];
  local_4f = param_1[5];
  local_4b = param_1[6];
  local_47 = param_1[7];
  local_43 = param_1[8];
  local_3f = param_1[9];
  local_3b = param_1[10];
  local_37 = param_1[0xb];
  local_33 = param_1[0xc];
  local_2f = param_1[0xd];
  local_2b = param_1[0xe];
  local_27 = *(undefined1 *)(param_1 + 0xf);
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    local_11 = '\0';
    local_10 = -1;
    cVar1 = CheckInTrade(this);
    if (cVar1 == '\0') {
      uVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      local_10 = CInventory::insertItemIntoInventory
                           (uVar2,local_63,local_5f,local_5b,local_57,local_53,local_4f,local_4b,
                            local_47,local_43,local_3f,local_3b,local_37,local_33,local_2f,local_2b,
                            local_27,0xd,1,1);
      if (local_10 == -1) {
        local_11 = '\x01';
      }
    }
    else {
      local_11 = '\x01';
    }
    if (local_11 == '\0') {
      *(int *)(param_3 * 4 + param_4) = local_10;
      uVar2 = 1;
    }
    else {
      strncpy(local_26,&DAT_08cf10ec,0x14);
      strncpy(local_163,&DAT_08cf10fc,0xff);
      uVar2 = GetServerGroup(this);
      sVar3 = strlen(local_163);
      uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (local_26,&local_63,0,uVar4,local_163,sVar3,0,uVar2,0,0);
      *(undefined4 *)(param_3 * 4 + param_4) = 0xffffffff;
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
