# dispatch_sig

`_ZN21Inter_SelectCharacMid12dispatch_sigEP5CUserPci`

`Inter_SelectCharacMid::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_SelectCharacMid` | `0x084e6170` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e6170  _ZN21Inter_SelectCharacMid12dispatch_sigEP5CUserPci
#           Inter_SelectCharacMid::dispatch_sig(CUser*, char*, int)
# range [0x084e6170, 0x084e6257]
084e6170 +0x00:  push   %ebp
084e6171 +0x01:  mov    %esp,%ebp
084e6173 +0x03:  push   %edi
084e6174 +0x04:  push   %esi
084e6175 +0x05:  push   %ebx
084e6176 +0x06:  sub    $0x3c,%esp
084e6179 +0x09:  mov    0x10(%ebp),%eax
084e617c +0x0c:  mov    %eax,-0x1c(%ebp)
084e617f +0x0f:  cmpl   $0x0,0xc(%ebp)
084e6183 +0x13:  je     084e619b <+0x2b>
084e6185 +0x15:  mov    0xc(%ebp),%eax
084e6188 +0x18:  mov    %eax,(%esp)
084e618b +0x1b:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084e6190 +0x20:  test   %eax,%eax
084e6192 +0x22:  je     084e619b <+0x2b>
084e6194 +0x24:  mov    $0x1,%eax
084e6199 +0x29:  jmp    084e61a0 <+0x30>
084e619b +0x2b:  mov    $0x0,%eax
084e61a0 +0x30:  test   %al,%al
084e61a2 +0x32:  je     084e624b <+0xdb>
084e61a8 +0x38:  mov    -0x1c(%ebp),%eax
084e61ab +0x3b:  mov    (%eax),%eax
084e61ad +0x3d:  test   %eax,%eax
084e61af +0x3f:  jne    084e624b <+0xdb>
084e61b5 +0x45:  mov    -0x1c(%ebp),%eax
084e61b8 +0x48:  mov    0x8(%eax),%edi
084e61bb +0x4b:  mov    -0x1c(%ebp),%eax
084e61be +0x4e:  mov    0x10(%eax),%esi
084e61c1 +0x51:  mov    -0x1c(%ebp),%eax
084e61c4 +0x54:  mov    0x4(%eax),%ebx
084e61c7 +0x57:  mov    0xc(%ebp),%eax
084e61ca +0x5a:  mov    %eax,(%esp)
084e61cd +0x5d:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
084e61d2 +0x62:  mov    %edi,0x14(%esp)
084e61d6 +0x66:  mov    %esi,0x10(%esp)
084e61da +0x6a:  movl   $0x1,0xc(%esp)
084e61e2 +0x72:  mov    %ebx,0x8(%esp)
084e61e6 +0x76:  mov    0xc(%ebp),%edx
084e61e9 +0x79:  mov    %edx,0x4(%esp)
084e61ed +0x7d:  mov    %eax,(%esp)
084e61f0 +0x80:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
084e61f5 +0x85:  mov    -0x1c(%ebp),%eax
084e61f8 +0x88:  mov    0x4(%eax),%eax
084e61fb +0x8b:  cmp    $0x2ce,%eax
084e6200 +0x90:  jne    084e624b <+0xdb>
084e6202 +0x92:  mov    0xc(%ebp),%eax
084e6205 +0x95:  mov    %eax,(%esp)
084e6208 +0x98:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
084e620d +0x9d:  movzwl %ax,%edi
084e6210 +0xa0:  mov    -0x1c(%ebp),%eax
084e6213 +0xa3:  mov    0x8(%eax),%esi
084e6216 +0xa6:  mov    -0x1c(%ebp),%eax
084e6219 +0xa9:  mov    0x10(%eax),%ebx
084e621c +0xac:  mov    0xc(%ebp),%eax
084e621f +0xaf:  mov    %eax,(%esp)
084e6222 +0xb2:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
084e6227 +0xb7:  mov    %edi,0x14(%esp)
084e622b +0xbb:  mov    %esi,0x10(%esp)
084e622f +0xbf:  movl   $"",0xc(%esp)
084e6237 +0xc7:  mov    %ebx,0x8(%esp)
084e623b +0xcb:  movl   $0x2,0x4(%esp)
084e6243 +0xd3:  mov    %eax,(%esp)
084e6246 +0xd6:  call   084b949a <_ZN8XNuclear6CHades12GoldTrackingEhjPcjj>  ; XNuclear::CHades::GoldTracking(unsigned char, unsigned int, char*, unsigned int, unsigned int)
084e624b +0xdb:  mov    $0x0,%eax
084e6250 +0xe0:  add    $0x3c,%esp
084e6253 +0xe3:  pop    %ebx
084e6254 +0xe4:  pop    %esi
084e6255 +0xe5:  pop    %edi
084e6256 +0xe6:  pop    %ebp
084e6257 +0xe7:  ret
```

## 反编译 C

```c
// Inter_SelectCharacMid::dispatch_sig @ 0x84e6170

/* Inter_SelectCharacMid::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SelectCharacMid::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  CHackAnalyzer *pCVar8;
  uint uVar9;
  CHades *this;
  
  if (param_2 != (char *)0x0) {
    iVar7 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar7 != 0) {
      bVar6 = true;
      goto LAB_084e61a0;
    }
  }
  bVar6 = false;
LAB_084e61a0:
  if ((bVar6) && (*(int *)param_3 == 0)) {
    uVar1 = *(undefined4 *)(param_3 + 8);
    uVar2 = *(undefined4 *)(param_3 + 0x10);
    uVar3 = *(undefined4 *)(param_3 + 4);
    pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,param_2,uVar3,1,uVar2,uVar1);
    if (*(int *)(param_3 + 4) == 0x2ce) {
      uVar9 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)param_2);
      uVar4 = *(uint *)(param_3 + 8);
      uVar5 = *(uint *)(param_3 + 0x10);
      this = (CHades *)CUser::getHades((CUser *)param_2);
      XNuclear::CHades::GoldTracking(this,'\x02',uVar5,"",uVar4,uVar9 & 0xffff);
    }
  }
  return 0;
}
```
