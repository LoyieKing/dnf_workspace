# handlePickupItem

`_ZN8WongWork10CBossTower16handlePickupItemEP5CUseribc`

`WongWork::CBossTower::handlePickupItem(CUser*, int, bool, char)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x08143d2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08143d2c  _ZN8WongWork10CBossTower16handlePickupItemEP5CUseribc
#           WongWork::CBossTower::handlePickupItem(CUser*, int, bool, char)
# range [0x08143d2c, 0x08143e5d]
08143d2c +0x000:  push   %ebp
08143d2d +0x001:  mov    %esp,%ebp
08143d2f +0x003:  sub    $0x58,%esp
08143d32 +0x006:  mov    0x14(%ebp),%edx
08143d35 +0x009:  mov    0x18(%ebp),%eax
08143d38 +0x00c:  mov    %dl,-0x2c(%ebp)
08143d3b +0x00f:  mov    %al,-0x30(%ebp)
08143d3e +0x012:  mov    0x8(%ebp),%eax
08143d41 +0x015:  mov    0x4(%eax),%eax
08143d44 +0x018:  test   %eax,%eax
08143d46 +0x01a:  je     08143d5a <+0x2e>
08143d48 +0x01c:  mov    0x8(%ebp),%eax
08143d4b +0x01f:  mov    0x4(%eax),%eax
08143d4e +0x022:  mov    %eax,(%esp)
08143d51 +0x025:  call   08145840 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2c3
08143d56 +0x02a:  test   %al,%al
08143d58 +0x02c:  je     08143d61 <+0x35>
08143d5a +0x02e:  mov    $0x1,%eax
08143d5f +0x033:  jmp    08143d66 <+0x3a>
08143d61 +0x035:  mov    $0x0,%eax
08143d66 +0x03a:  test   %al,%al
08143d68 +0x03c:  je     08143d8f <+0x63>
08143d6a +0x03e:  movl   $0xd8,0x8(%esp)
08143d72 +0x046:  movl   $0x2e,0x4(%esp)
08143d7a +0x04e:  mov    0xc(%ebp),%eax
08143d7d +0x051:  mov    %eax,(%esp)
08143d80 +0x054:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08143d85 +0x059:  mov    $0x0,%eax
08143d8a +0x05e:  jmp    08143e5b <+0x12f>
08143d8f +0x063:  movb   $0x0,-0x1d(%ebp)
08143d93 +0x067:  movzbl -0x2c(%ebp),%edx
08143d97 +0x06b:  mov    0x8(%ebp),%eax
08143d9a +0x06e:  lea    -0x1d(%ebp),%ecx
08143d9d +0x071:  mov    %ecx,0x10(%esp)
08143da1 +0x075:  mov    %edx,0xc(%esp)
08143da5 +0x079:  mov    0x10(%ebp),%edx
08143da8 +0x07c:  mov    %edx,0x8(%esp)
08143dac +0x080:  mov    0xc(%ebp),%edx
08143daf +0x083:  mov    %edx,0x4(%esp)
08143db3 +0x087:  mov    %eax,(%esp)
08143db6 +0x08a:  call   0814fa76 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc>  ; WongWork::CBossStage::handlePickupItem(CUser*, int, bool, char&)
08143dbb +0x08f:  mov    %al,-0x9(%ebp)
08143dbe +0x092:  movzbl -0x9(%ebp),%eax
08143dc2 +0x096:  xor    $0x1,%eax
08143dc5 +0x099:  test   %al,%al
08143dc7 +0x09b:  je     08143dd3 <+0xa7>
08143dc9 +0x09d:  mov    $0x0,%eax
08143dce +0x0a2:  jmp    08143e5b <+0x12f>
08143dd3 +0x0a7:  movzbl -0x1d(%ebp),%eax
08143dd7 +0x0ab:  cmp    -0x30(%ebp),%al
08143dda +0x0ae:  je     08143e12 <+0xe6>
08143ddc +0x0b0:  movl   $0x5,0xc(%esp)
08143de4 +0x0b8:  movl   $0x258,0x8(%esp)
08143dec +0x0c0:  movl   $&_ZZN8WongWork10CBossTower16handlePickupItemEP5CUseribcE19__PRETTY_FUNCTION__,0x4(%esp)
08143df4 +0x0c8:  lea    -0x1c(%ebp),%eax
08143df7 +0x0cb:  mov    %eax,(%esp)
08143dfa +0x0ce:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08143dff +0x0d3:  movl   $"server_item_rarity != client_item_rarity",0x4(%esp)
08143e07 +0x0db:  lea    -0x1c(%ebp),%eax
08143e0a +0x0de:  mov    %eax,(%esp)
08143e0d +0x0e1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08143e12 +0x0e6:  cmpl   $0x0,0xc(%ebp)
08143e16 +0x0ea:  je     08143e56 <+0x12a>
08143e18 +0x0ec:  cmpb   $0x3,-0x30(%ebp)
08143e1c +0x0f0:  jne    08143e56 <+0x12a>
08143e1e +0x0f2:  mov    0x8(%ebp),%eax
08143e21 +0x0f5:  mov    0xae8(%eax),%eax
08143e27 +0x0fb:  movzbl %al,%edx
08143e2a +0x0fe:  mov    0x8(%ebp),%eax
08143e2d +0x101:  mov    0xae0(%eax),%eax
08143e33 +0x107:  movzbl %al,%eax
08143e36 +0x10a:  mov    0x8(%ebp),%ecx
08143e39 +0x10d:  add    $0xb00,%ecx
08143e3f +0x113:  mov    %edx,0xc(%esp)
08143e43 +0x117:  mov    %eax,0x8(%esp)
08143e47 +0x11b:  mov    0xc(%ebp),%eax
08143e4a +0x11e:  mov    %eax,0x4(%esp)
08143e4e +0x122:  mov    %ecx,(%esp)
08143e51 +0x125:  call   0815678e <_ZN23CBossDungeonEntranceLog23IncrementBossPickUpItemER5CUserhh>  ; CBossDungeonEntranceLog::IncrementBossPickUpItem(CUser&, unsigned char, unsigned char)
08143e56 +0x12a:  mov    $0x1,%eax
08143e5b +0x12f:  leave
08143e5c +0x130:  ret
08143e5d +0x131:  nop
```

## 反编译 C

```c
// WongWork::CBossTower::handlePickupItem @ 0x8143d2c

/* WongWork::CBossTower::handlePickupItem(CUser*, int, bool, char) */

undefined4 __thiscall
WongWork::CBossTower::handlePickupItem
          (CBossTower *this,CUser *param_1,int param_2,bool param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  char local_21;
  cMyTrace local_20 [19];
  char local_d;
  
  if (*(int *)(this + 4) != 0) {
    cVar2 = CParty::IsRoutingState(*(CParty **)(this + 4));
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_08143d66;
    }
  }
  bVar1 = true;
LAB_08143d66:
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x2e,0xd8);
    uVar3 = 0;
  }
  else {
    local_21 = '\0';
    local_d = CBossStage::handlePickupItem((CBossStage *)this,param_1,param_2,param_3,&local_21);
    if (local_d == '\x01') {
      if (local_21 != param_4) {
        cMyTrace::cMyTrace(local_20,
                           "virtual bool WongWork::CBossTower::handlePickupItem(CUser*, int, bool, char)"
                           ,600,5);
        cMyTrace::operator()(local_20,"server_item_rarity != client_item_rarity");
      }
      if ((param_1 != (CUser *)0x0) && (param_4 == '\x03')) {
        CBossDungeonEntranceLog::IncrementBossPickUpItem
                  ((CBossDungeonEntranceLog *)(this + 0xb00),param_1,
                   (uchar)*(undefined4 *)(this + 0xae0),(uchar)*(undefined4 *)(this + 0xae8));
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
