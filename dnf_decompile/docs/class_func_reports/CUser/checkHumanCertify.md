# checkHumanCertify

`_ZN5CUser17checkHumanCertifyEiPt`

`CUser::checkHumanCertify(int, unsigned short*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867f4c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867f4c8  _ZN5CUser17checkHumanCertifyEiPt
#           CUser::checkHumanCertify(int, unsigned short*)
# range [0x0867f4c8, 0x0867f71f]
0867f4c8 +0x000:  push   %ebp
0867f4c9 +0x001:  mov    %esp,%ebp
0867f4cb +0x003:  push   %edi
0867f4cc +0x004:  push   %esi
0867f4cd +0x005:  push   %ebx
0867f4ce +0x006:  sub    $0x7c,%esp
0867f4d1 +0x009:  mov    0x10(%ebp),%eax
0867f4d4 +0x00c:  add    $0x8,%eax
0867f4d7 +0x00f:  movzwl (%eax),%eax
0867f4da +0x012:  movzwl %ax,%eax
0867f4dd +0x015:  mov    %eax,-0x48(%ebp)
0867f4e0 +0x018:  mov    0x10(%ebp),%eax
0867f4e3 +0x01b:  add    $0x6,%eax
0867f4e6 +0x01e:  movzwl (%eax),%eax
0867f4e9 +0x021:  movzwl %ax,%eax
0867f4ec +0x024:  mov    %eax,-0x44(%ebp)
0867f4ef +0x027:  mov    0x10(%ebp),%eax
0867f4f2 +0x02a:  add    $0x4,%eax
0867f4f5 +0x02d:  movzwl (%eax),%eax
0867f4f8 +0x030:  movzwl %ax,%eax
0867f4fb +0x033:  mov    %eax,-0x40(%ebp)
0867f4fe +0x036:  mov    0x10(%ebp),%eax
0867f501 +0x039:  add    $0x2,%eax
0867f504 +0x03c:  movzwl (%eax),%eax
0867f507 +0x03f:  movzwl %ax,%eax
0867f50a +0x042:  mov    %eax,-0x3c(%ebp)
0867f50d +0x045:  mov    0x10(%ebp),%eax
0867f510 +0x048:  movzwl (%eax),%eax
0867f513 +0x04b:  movzwl %ax,%eax
0867f516 +0x04e:  mov    %eax,-0x38(%ebp)
0867f519 +0x051:  mov    0x8(%ebp),%eax
0867f51c +0x054:  movzwl 0x8e0f4(%eax),%eax
0867f523 +0x05b:  movzwl %ax,%eax
0867f526 +0x05e:  mov    %eax,-0x34(%ebp)
0867f529 +0x061:  mov    0x8(%ebp),%eax
0867f52c +0x064:  movzwl 0x8e0f2(%eax),%eax
0867f533 +0x06b:  movzwl %ax,%eax
0867f536 +0x06e:  mov    %eax,-0x30(%ebp)
0867f539 +0x071:  mov    0x8(%ebp),%eax
0867f53c +0x074:  movzwl 0x8e0f0(%eax),%eax
0867f543 +0x07b:  movzwl %ax,%eax
0867f546 +0x07e:  mov    %eax,-0x2c(%ebp)
0867f549 +0x081:  mov    0x8(%ebp),%eax
0867f54c +0x084:  movzwl 0x8e0ee(%eax),%eax
0867f553 +0x08b:  movzwl %ax,%edi
0867f556 +0x08e:  mov    0x8(%ebp),%eax
0867f559 +0x091:  movzwl 0x8e0ec(%eax),%eax
0867f560 +0x098:  movzwl %ax,%esi
0867f563 +0x09b:  mov    0x8(%ebp),%eax
0867f566 +0x09e:  mov    %eax,(%esp)
0867f569 +0x0a1:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0867f56e +0x0a6:  movl   $0x0,0x4(%esp)
0867f576 +0x0ae:  mov    %eax,(%esp)
0867f579 +0x0b1:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0867f57e +0x0b6:  mov    %eax,%ebx
0867f580 +0x0b8:  movl   $0x0,0xc(%esp)
0867f588 +0x0c0:  movl   $0x7e07,0x8(%esp)
0867f590 +0x0c8:  movl   $&_ZZN5CUser17checkHumanCertifyEiPtE19__PRETTY_FUNCTION__,0x4(%esp)
0867f598 +0x0d0:  lea    -0x28(%ebp),%eax
0867f59b +0x0d3:  mov    %eax,(%esp)
0867f59e +0x0d6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0867f5a3 +0x0db:  mov    -0x48(%ebp),%eax
0867f5a6 +0x0de:  mov    %eax,0x30(%esp)
0867f5aa +0x0e2:  mov    -0x44(%ebp),%eax
0867f5ad +0x0e5:  mov    %eax,0x2c(%esp)
0867f5b1 +0x0e9:  mov    -0x40(%ebp),%eax
0867f5b4 +0x0ec:  mov    %eax,0x28(%esp)
0867f5b8 +0x0f0:  mov    -0x3c(%ebp),%eax
0867f5bb +0x0f3:  mov    %eax,0x24(%esp)
0867f5bf +0x0f7:  mov    -0x38(%ebp),%eax
0867f5c2 +0x0fa:  mov    %eax,0x20(%esp)
0867f5c6 +0x0fe:  mov    -0x34(%ebp),%eax
0867f5c9 +0x101:  mov    %eax,0x1c(%esp)
0867f5cd +0x105:  mov    -0x30(%ebp),%eax
0867f5d0 +0x108:  mov    %eax,0x18(%esp)
0867f5d4 +0x10c:  mov    -0x2c(%ebp),%eax
0867f5d7 +0x10f:  mov    %eax,0x14(%esp)
0867f5db +0x113:  mov    %edi,0x10(%esp)
0867f5df +0x117:  mov    %esi,0xc(%esp)
0867f5e3 +0x11b:  mov    %ebx,0x8(%esp)
0867f5e7 +0x11f:  movl   $"checkHumanCertify m_id:%s, orig:%x%x%x%x%x, ans:%x%x%x%x%x",0x4(%esp)
0867f5ef +0x127:  lea    -0x28(%ebp),%eax
0867f5f2 +0x12a:  mov    %eax,(%esp)
0867f5f5 +0x12d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0867f5fa +0x132:  mov    0x8(%ebp),%eax
0867f5fd +0x135:  mov    %eax,(%esp)
0867f600 +0x138:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0867f605 +0x13d:  mov    %eax,(%esp)
0867f608 +0x140:  call   084283ca <_ZN22DB_CountOfHumanCertify11makeRequestEj>  ; DB_CountOfHumanCertify::makeRequest(unsigned int)
0867f60d +0x145:  mov    0xc(%ebp),%eax
0867f610 +0x148:  mov    0x8(%ebp),%edx
0867f613 +0x14b:  add    $0x8e0ec,%edx
0867f619 +0x151:  mov    %eax,0x8(%esp)
0867f61d +0x155:  mov    %edx,0x4(%esp)
0867f621 +0x159:  mov    0x10(%ebp),%eax
0867f624 +0x15c:  mov    %eax,(%esp)
0867f627 +0x15f:  call   0807dc90 <_init+0x588>
0867f62c +0x164:  test   %eax,%eax
0867f62e +0x166:  je     0867f6cb <+0x203>
0867f634 +0x16c:  mov    0x8(%ebp),%eax
0867f637 +0x16f:  mov    0x8e0fc(%eax),%eax
0867f63d +0x175:  lea    0x1(%eax),%edx
0867f640 +0x178:  mov    0x8(%ebp),%eax
0867f643 +0x17b:  mov    %edx,0x8e0fc(%eax)
0867f649 +0x181:  mov    0x8(%ebp),%eax
0867f64c +0x184:  mov    %eax,(%esp)
0867f64f +0x187:  call   082307ec <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5e96>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5e96
0867f654 +0x18c:  test   %al,%al
0867f656 +0x18e:  je     0867f66d <+0x1a5>
0867f658 +0x190:  mov    0x8(%ebp),%eax
0867f65b +0x193:  movzbl 0x8e3ed(%eax),%eax
0867f662 +0x19a:  test   %al,%al
0867f664 +0x19c:  je     0867f66d <+0x1a5>
0867f666 +0x19e:  mov    $0x1,%eax
0867f66b +0x1a3:  jmp    0867f672 <+0x1aa>
0867f66d +0x1a5:  mov    $0x0,%eax
0867f672 +0x1aa:  test   %al,%al
0867f674 +0x1ac:  je     0867f6b1 <+0x1e9>
0867f676 +0x1ae:  mov    0x8(%ebp),%eax
0867f679 +0x1b1:  mov    0x8e0fc(%eax),%ebx
0867f67f +0x1b7:  mov    0x8(%ebp),%eax
0867f682 +0x1ba:  mov    %eax,(%esp)
0867f685 +0x1bd:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0867f68a +0x1c2:  mov    %ebx,0x4(%esp)
0867f68e +0x1c6:  mov    %eax,(%esp)
0867f691 +0x1c9:  call   084281ae <_ZN21DB_ForceSaveSimpleSSO11makeRequestEji>  ; DB_ForceSaveSimpleSSO::makeRequest(unsigned int, int)
0867f696 +0x1ce:  movl   $0x8,0x8(%esp)
0867f69e +0x1d6:  movl   $0x91,0x4(%esp)
0867f6a6 +0x1de:  mov    0x8(%ebp),%eax
0867f6a9 +0x1e1:  mov    %eax,(%esp)
0867f6ac +0x1e4:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0867f6b1 +0x1e9:  movl   $0x1,0x4(%esp)
0867f6b9 +0x1f1:  mov    0x8(%ebp),%eax
0867f6bc +0x1f4:  mov    %eax,(%esp)
0867f6bf +0x1f7:  call   0823022a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58d4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58d4
0867f6c4 +0x1fc:  mov    $0x0,%eax
0867f6c9 +0x201:  jmp    0867f718 <+0x250>
0867f6cb +0x203:  mov    0x8(%ebp),%eax
0867f6ce +0x206:  mov    0x8e0fc(%eax),%eax
0867f6d4 +0x20c:  test   %eax,%eax
0867f6d6 +0x20e:  je     0867f6f3 <+0x22b>
0867f6d8 +0x210:  mov    0x8(%ebp),%eax
0867f6db +0x213:  mov    %eax,(%esp)
0867f6de +0x216:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0867f6e3 +0x21b:  movl   $0x0,0x4(%esp)
0867f6eb +0x223:  mov    %eax,(%esp)
0867f6ee +0x226:  call   084281ae <_ZN21DB_ForceSaveSimpleSSO11makeRequestEji>  ; DB_ForceSaveSimpleSSO::makeRequest(unsigned int, int)
0867f6f3 +0x22b:  mov    0x8(%ebp),%eax
0867f6f6 +0x22e:  movl   $0x0,0x8e0fc(%eax)
0867f700 +0x238:  movl   $0x1,0x4(%esp)
0867f708 +0x240:  mov    0x8(%ebp),%eax
0867f70b +0x243:  mov    %eax,(%esp)
0867f70e +0x246:  call   0823022a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58d4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58d4
0867f713 +0x24b:  mov    $0x1,%eax
0867f718 +0x250:  add    $0x7c,%esp
0867f71b +0x253:  pop    %ebx
0867f71c +0x254:  pop    %esi
0867f71d +0x255:  pop    %edi
0867f71e +0x256:  pop    %ebp
0867f71f +0x257:  ret
```

## 反编译 C

```c
// CUser::checkHumanCertify @ 0x867f4c8

/* CUser::checkHumanCertify(int, unsigned short*) */

undefined4 __thiscall CUser::checkHumanCertify(CUser *this,int param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  cMyTrace local_2c [28];
  
  uVar1 = param_2[4];
  uVar2 = param_2[3];
  uVar3 = param_2[2];
  uVar4 = param_2[1];
  uVar5 = *param_2;
  uVar6 = *(ushort *)(this + 0x8e0f4);
  uVar7 = *(ushort *)(this + 0x8e0f2);
  uVar8 = *(ushort *)(this + 0x8e0f0);
  uVar9 = *(ushort *)(this + 0x8e0ee);
  uVar10 = *(ushort *)(this + 0x8e0ec);
  uVar13 = get_acc_id(this);
  uVar14 = NumberToString(uVar13,0);
  cMyTrace::cMyTrace(local_2c,"bool CUser::checkHumanCertify(int, short unsigned int*)",0x7e07,0);
  cMyTrace::operator()
            (local_2c,"checkHumanCertify m_id:%s, orig:%x%x%x%x%x, ans:%x%x%x%x%x",uVar14,
             (uint)uVar10,(uint)uVar9,(uint)uVar8,(uint)uVar7,(uint)uVar6,(uint)uVar5,(uint)uVar4,
             (uint)uVar3,(uint)uVar2,(uint)uVar1);
  uVar13 = get_acc_id(this);
  DB_CountOfHumanCertify::makeRequest(uVar13);
  iVar15 = memcmp(param_2,this + 0x8e0ec,param_1);
  if (iVar15 == 0) {
    if (*(int *)(this + 0x8e0fc) != 0) {
      uVar13 = get_acc_id(this);
      DB_ForceSaveSimpleSSO::makeRequest(uVar13,0);
    }
    *(undefined4 *)(this + 0x8e0fc) = 0;
    setHumanCertified(this,true);
    uVar14 = 1;
  }
  else {
    *(int *)(this + 0x8e0fc) = *(int *)(this + 0x8e0fc) + 1;
    cVar12 = isCleanPadVerifyLimit(this);
    if ((cVar12 == '\0') || (this[0x8e3ed] == (CUser)0x0)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) {
      iVar15 = *(int *)(this + 0x8e0fc);
      uVar13 = get_acc_id(this);
      DB_ForceSaveSimpleSSO::makeRequest(uVar13,iVar15);
      SendCmdErrorPacket(this,0x91,8);
    }
    setHumanCertified(this,true);
    uVar14 = 0;
  }
  return uVar14;
}
```
