# advancealtar__RewardItemType

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## getRewardItemType

```asm
// === 0889acaa advancealtar::RewardItemType::getRewardItemType  [0x0889acaa-0x889ad05] ===
 889acaa:	55                   	push   %ebp
 889acab:	89 e5                	mov    %esp,%ebp
 889acad:	83 ec 18             	sub    $0x18,%esp
 889acb0:	c7 44 24 04 b1 52 e0 	movl   $0x8e052b1,0x4(%esp)
 889acb7:	08 
 889acb8:	8b 45 08             	mov    0x8(%ebp),%eax
 889acbb:	89 04 24             	mov    %eax,(%esp)
 889acbe:	e8 de 5c 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889acc3:	84 c0                	test   %al,%al
 889acc5:	74 10                	je     889acd7 <_ZN12advancealtar14RewardItemType17getRewardItemTypeERKSsRNS0_1TE+0x2d>
 889acc7:	8b 45 0c             	mov    0xc(%ebp),%eax
 889acca:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 889acd0:	b8 01 00 00 00       	mov    $0x1,%eax
 889acd5:	eb 2c                	jmp    889ad03 <_ZN12advancealtar14RewardItemType17getRewardItemTypeERKSsRNS0_1TE+0x59>
 889acd7:	c7 44 24 04 b9 54 e0 	movl   $0x8e054b9,0x4(%esp)
 889acde:	08 
 889acdf:	8b 45 08             	mov    0x8(%ebp),%eax
 889ace2:	89 04 24             	mov    %eax,(%esp)
 889ace5:	e8 b7 5c 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889acea:	84 c0                	test   %al,%al
 889acec:	74 10                	je     889acfe <_ZN12advancealtar14RewardItemType17getRewardItemTypeERKSsRNS0_1TE+0x54>
 889acee:	8b 45 0c             	mov    0xc(%ebp),%eax
 889acf1:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 889acf7:	b8 01 00 00 00       	mov    $0x1,%eax
 889acfc:	eb 05                	jmp    889ad03 <_ZN12advancealtar14RewardItemType17getRewardItemTypeERKSsRNS0_1TE+0x59>
 889acfe:	b8 00 00 00 00       	mov    $0x0,%eax
 889ad03:	c9                   	leave
 889ad04:	c3                   	ret
 889ad05:	90                   	nop

```

```c
// advancealtar::RewardItemType::getRewardItemType @ 0x889acaa

/* advancealtar::RewardItemType::getRewardItemType(std::string const&,
   advancealtar::RewardItemType::T&) */

undefined4 advancealtar::RewardItemType::getRewardItemType(string *param_1,T *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = std::operator==((string *)param_1,"normal");
  if (bVar1) {
    *(undefined4 *)param_2 = 0;
    uVar2 = 1;
  }
  else {
    bVar1 = std::operator==((string *)param_1,"event");
    if (bVar1) {
      *(undefined4 *)param_2 = 1;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

