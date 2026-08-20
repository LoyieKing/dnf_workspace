# AddAuctionMoney

`_ZN16Secu_GoldControl15AddAuctionMoneyEj`

`Secu_GoldControl::AddAuctionMoney(unsigned int)`

| 类 | 地址 |
|---|---|
| `Secu_GoldControl` | `0x0828784a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828784a  _ZN16Secu_GoldControl15AddAuctionMoneyEj
#           Secu_GoldControl::AddAuctionMoney(unsigned int)
# range [0x0828784a, 0x08287959]
0828784a +0x000:  push   %ebp
0828784b +0x001:  mov    %esp,%ebp
0828784d +0x003:  push   %esi
0828784e +0x004:  push   %ebx
0828784f +0x005:  sub    $0x30,%esp
08287852 +0x008:  cmpl   $0x1387,0xc(%ebp)
08287859 +0x00f:  jbe    08287951 <+0x107>
0828785f +0x015:  mov    0x8(%ebp),%eax
08287862 +0x018:  mov    0x60(%eax),%ecx
08287865 +0x01b:  mov    0x64(%eax),%ebx
08287868 +0x01e:  mov    0xc(%ebp),%eax
0828786b +0x021:  mov    $0x0,%edx
08287870 +0x026:  add    %ecx,%eax
08287872 +0x028:  adc    %ebx,%edx
08287874 +0x02a:  mov    0x8(%ebp),%ecx
08287877 +0x02d:  mov    %eax,0x60(%ecx)
0828787a +0x030:  mov    %edx,0x64(%ecx)
0828787d +0x033:  mov    0x8(%ebp),%eax
08287880 +0x036:  movzwl 0x70(%eax),%eax
08287884 +0x03a:  lea    0x1(%eax),%edx
08287887 +0x03d:  mov    0x8(%ebp),%eax
0828788a +0x040:  mov    %dx,0x70(%eax)
0828788e +0x044:  mov    0x8(%ebp),%eax
08287891 +0x047:  mov    0x24(%eax),%ecx
08287894 +0x04a:  mov    0x28(%eax),%ebx
08287897 +0x04d:  mov    0xc(%ebp),%eax
0828789a +0x050:  mov    $0x0,%edx
0828789f +0x055:  add    %ecx,%eax
082878a1 +0x057:  adc    %ebx,%edx
082878a3 +0x059:  mov    0x8(%ebp),%ecx
082878a6 +0x05c:  mov    %eax,0x24(%ecx)
082878a9 +0x05f:  mov    %edx,0x28(%ecx)
082878ac +0x062:  mov    0x8(%ebp),%eax
082878af +0x065:  movzwl 0x34(%eax),%eax
082878b3 +0x069:  lea    0x1(%eax),%edx
082878b6 +0x06c:  mov    0x8(%ebp),%eax
082878b9 +0x06f:  mov    %dx,0x34(%eax)
082878bd +0x073:  mov    0x8(%ebp),%eax
082878c0 +0x076:  mov    (%eax),%eax
082878c2 +0x078:  mov    %eax,(%esp)
082878c5 +0x07b:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
082878ca +0x080:  movl   $0x2,0x8(%esp)
082878d2 +0x088:  mov    0xc(%ebp),%edx
082878d5 +0x08b:  mov    %edx,0x4(%esp)
082878d9 +0x08f:  mov    %eax,(%esp)
082878dc +0x092:  call   084b93fa <_ZN8XNuclear6CHades8GoldPlusEjNS_24ENUM_GOLD_CONTROL_REASONE>  ; XNuclear::CHades::GoldPlus(unsigned int, XNuclear::ENUM_GOLD_CONTROL_REASON)
082878e1 +0x097:  mov    0x8(%ebp),%eax
082878e4 +0x09a:  mov    (%eax),%eax
082878e6 +0x09c:  mov    %eax,(%esp)
082878e9 +0x09f:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
082878ee +0x0a4:  lea    -0x18(%ebp),%edx
082878f1 +0x0a7:  mov    %edx,0x4(%esp)
082878f5 +0x0ab:  mov    %eax,(%esp)
082878f8 +0x0ae:  call   084b9774 <_ZN8XNuclear6CHades5GetIPEPc>  ; XNuclear::CHades::GetIP(char*)
082878fd +0x0b3:  mov    0x8(%ebp),%eax
08287900 +0x0b6:  mov    (%eax),%eax
08287902 +0x0b8:  mov    %eax,(%esp)
08287905 +0x0bb:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
0828790a +0x0c0:  movzwl %ax,%esi
0828790d +0x0c3:  mov    0x8(%ebp),%eax
08287910 +0x0c6:  mov    (%eax),%eax
08287912 +0x0c8:  mov    %eax,(%esp)
08287915 +0x0cb:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0828791a +0x0d0:  mov    %eax,%ebx
0828791c +0x0d2:  mov    0x8(%ebp),%eax
0828791f +0x0d5:  mov    (%eax),%eax
08287921 +0x0d7:  mov    %eax,(%esp)
08287924 +0x0da:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
08287929 +0x0df:  mov    %esi,0x14(%esp)
0828792d +0x0e3:  mov    0xc(%ebp),%edx
08287930 +0x0e6:  mov    %edx,0x10(%esp)
08287934 +0x0ea:  lea    -0x18(%ebp),%edx
08287937 +0x0ed:  mov    %edx,0xc(%esp)
0828793b +0x0f1:  mov    %ebx,0x8(%esp)
0828793f +0x0f5:  movl   $0x4,0x4(%esp)
08287947 +0x0fd:  mov    %eax,(%esp)
0828794a +0x100:  call   084b949a <_ZN8XNuclear6CHades12GoldTrackingEhjPcjj>  ; XNuclear::CHades::GoldTracking(unsigned char, unsigned int, char*, unsigned int, unsigned int)
0828794f +0x105:  jmp    08287952 <+0x108>
08287951 +0x107:  nop
08287952 +0x108:  add    $0x30,%esp
08287955 +0x10b:  pop    %ebx
08287956 +0x10c:  pop    %esi
08287957 +0x10d:  pop    %ebp
08287958 +0x10e:  ret
08287959 +0x10f:  nop
```

## 反编译 C

```c
// Secu_GoldControl::AddAuctionMoney @ 0x828784a

/* Secu_GoldControl::AddAuctionMoney(unsigned int) */

void __thiscall Secu_GoldControl::AddAuctionMoney(Secu_GoldControl *this,uint param_1)

{
  CHades *pCVar1;
  uint uVar2;
  uint uVar3;
  char local_1c [16];
  
  if (4999 < param_1) {
    uVar2 = *(uint *)(this + 0x60);
    *(uint *)(this + 0x60) = param_1 + uVar2;
    *(uint *)(this + 100) = *(int *)(this + 100) + (uint)CARRY4(param_1,uVar2);
    *(short *)(this + 0x70) = *(short *)(this + 0x70) + 1;
    uVar2 = *(uint *)(this + 0x24);
    *(uint *)(this + 0x24) = param_1 + uVar2;
    *(uint *)(this + 0x28) = *(int *)(this + 0x28) + (uint)CARRY4(param_1,uVar2);
    *(short *)(this + 0x34) = *(short *)(this + 0x34) + 1;
    pCVar1 = (CHades *)CUser::getHades(*(CUser **)this);
    XNuclear::CHades::GoldPlus(pCVar1,param_1,2);
    pCVar1 = (CHades *)CUser::getHades(*(CUser **)this);
    XNuclear::CHades::GetIP(pCVar1,local_1c);
    uVar2 = CUserCharacInfo::getCurCharacUsedFatigue(*(CUserCharacInfo **)this);
    uVar3 = CUser::get_acc_id(*(CUser **)this);
    pCVar1 = (CHades *)CUser::getHades(*(CUser **)this);
    XNuclear::CHades::GoldTracking(pCVar1,'\x04',uVar3,local_1c,param_1,uVar2 & 0xffff);
  }
  return;
}
```
